#include "gxdheader.h"

MESSAGE mMESSAGE;

BOOL MESSAGE::Init()
{
    DWORD NumRead;
    char* lpBuffer;
    HANDLE hFile;
    int tLineBreak;
    int tIndex;
    int tTotalSize;
    int index01;

    hFile = CreateFileA("G01_GFONT\\005.DAT", 0x80000000, 1, 0, 3, 0x80, 0);
    if (hFile == INVALID_HANDLE_VALUE)
    {
        return 0;
    }
    tTotalSize = GetFileSize(hFile, 0);
    if (tTotalSize == -1)
    {
        CloseHandle(hFile);
        return FALSE;
    }
    lpBuffer = (char*)GlobalAlloc(GMEM_FIXED, tTotalSize);
    if (lpBuffer == NULL)
    {
        CloseHandle(hFile);
        return FALSE;
    }
    if (!ReadFile(hFile, lpBuffer, tTotalSize, &NumRead, 0))
    {
        CloseHandle(hFile);
        return FALSE;
    }
    CloseHandle(hFile);

    mDataNum = 0;
    tLineBreak = 0;
    for (index01 = 0; index01 < tTotalSize; index01++)
    {
        if (lpBuffer[index01] == '"')
        {
            if (tLineBreak)
            {
                tLineBreak = 0;
                if (mDataNum == MAX_MESSAGE_NUM)
                {
                    return FALSE;
                }
                mMessage[mDataNum++][tIndex] = 0;
            }
            else
            {
                tLineBreak = TRUE;
                tIndex = 0;
            }
        }
        else if (tLineBreak)
        {
            if (tIndex == 101)
            {
                return FALSE;
            }
            mMessage[mDataNum][tIndex++] = lpBuffer[index01];
        }
    }
    GlobalFree(lpBuffer);
    return TRUE;
}

char* MESSAGE::Return( int tMessageNum )
{
    if (tMessageNum >= 1 && tMessageNum <= mDataNum)
    {
        return mMessage[tMessageNum - 1];
    }
    
    return "";
}






ZONENAME mZONENAME;

int ZONENAME::Init()
{
    char* lpBuffer;
    int tTotalSize;
    int index01;
    int tIndex;
    DWORD NumRead;
    HANDLE hFile;
    int tLineBreak;

    hFile = CreateFileA("G01_GFONT\\003.DAT", GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    if (hFile == INVALID_HANDLE_VALUE)
    {
        return 0;
    }
    tTotalSize = GetFileSize(hFile, 0);
    if (tTotalSize == -1)
    {
        CloseHandle(hFile);
        return FALSE;
    }
    lpBuffer = (char*)GlobalAlloc(GMEM_FIXED, tTotalSize);
    if (lpBuffer == NULL)
    {
        CloseHandle(hFile);
        return FALSE;
    }
    if (!ReadFile(hFile, lpBuffer, tTotalSize, &NumRead, 0))
    {
        CloseHandle(hFile);
        return FALSE;
    }
    CloseHandle(hFile);

    mTotalZoneNumber = 0;
    tLineBreak = 0;
    for (index01 = 0; index01 < tTotalSize; index01++)
    {
        if (lpBuffer[index01] == '"')
        {
            if (tLineBreak)
            {
                tLineBreak = 0;
                if (mTotalZoneNumber == MAX_ZONE_NUM)
                {
                    return FALSE;
                }
                mZoneName[mTotalZoneNumber++][tIndex] = 0;
            }
            else
            {
                tLineBreak = 1;
                tIndex = 0;
            }
        }
        else if (tLineBreak)
        {
            if (tIndex == MAX_ZONE_NAME)
            {
                return FALSE;
            }
            mZoneName[mTotalZoneNumber][tIndex++] = lpBuffer[index01];
        }
    }
    GlobalFree(lpBuffer);
    return TRUE;
}
void ZONENAME::Free()
{

}
char* ZONENAME::Return( int tZoneNumber )
{
    if (tZoneNumber >= 1 && tZoneNumber <= mTotalZoneNumber)
    {
        return mZoneName[tZoneNumber - 1];
    }
    return "";
}






CInnerAuto mCInnerAuto;

BOOL CInnerAuto::Init()
{
    mMaxNearMonster = 0;
    mTargetObjIndex = -1;
    mIsAutoState = 0;
    mY = 0;
    mX = 0;
    mCurActionSort = 0;
    dSearchTick = GetTickCount();
    mCurActionSortTick = GetTickCount();
    dActionTick = GetTickCount();
    dSkillTick = GetTickCount();
    unk62 = GetTickCount();
    dPotionTIck = GetTickCount();
    bIsAction = 1;
    mChangeZone = 1;
    bTakeItem = 1;
    mItemSetupTab = 0;
    unk75 = 1;
    CInnerAuto::ClearMonster();
    aActLocation[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
    aActLocation[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1];
    aActLocation[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
    memset(aActTargetLocation, 0, sizeof(aActTargetLocation));
    mWantToMove = 0;
    mMYINFO.mAvatarInfo.aNumberOfMonsters = 3;
    mMYINFO.mAvatarInfo.aActUponDeath = 1;
    if (!mMYINFO.mAvatarInfo.aItemPickUp)
    {
        mMYINFO.mAvatarInfo.aItemPickUp = 2;
    }
    mMYINFO.mAvatarInfo.aTakeMountFood = 0;
    CInnerAuto::LoadObtainItemList();
    CInnerAuto::LoadLoseItemList();
    mSKILLUI.Off();
    mActive = 0;
    if (mEDITBOX.mDataIndex == 20)
    {
        mEDITBOX.Set(0);
    }
    return 1;
}
void CInnerAuto::LoadObtainItemList()
{
    HANDLE hFile;
    char Buffer[48][25];
    DWORD NumBytesRead;
    int index01;
    int index02;
    int iter = 0;

    hFile = CreateFileA("G02_GINFO\\011.BIN", 0x80000000, 1, 0, 3, 0x80, 0);
    if (hFile == INVALID_HANDLE_VALUE)
    {
        return;
    }
    if (ReadFile(hFile, Buffer, 1200, &NumBytesRead, 0))
    {
        for (index01 = 0; index01 < 48; index01++)
        {
            while (iter < 25)
            {
                if (Buffer[index01][iter] == '@')
                {
                    iter = 0;
                    break;
                }
                mObtainItem[index01][iter] = Buffer[index01][iter];
                iter++;
            }
        }
    }
    CloseHandle(hFile);
    return;
}
void CInnerAuto::LoadLoseItemList()
{
    HANDLE hFile;
    char Buffer[48][25];
    DWORD NumBytesRead;
    int index01;
    int index02;
    int iter = 0;

    hFile = CreateFileA("G02_GINFO\\012.BIN", 0x80000000, 1, 0, 3, 0x80, 0);
    if (hFile == INVALID_HANDLE_VALUE)
    {
        return;
    }
    if (ReadFile(hFile, Buffer, 1200, &NumBytesRead, 0))
    {
        for (index01 = 0; index01 < 48; index01++)
        {
            while (iter < 25)
            {
                if (Buffer[index01][iter] == '@')
                {
                    iter = 0;
                    break;
                }
                mLoseItem[index01][iter] = Buffer[index01][iter];
                iter++;
            }
        }
    }
    CloseHandle(hFile);
    return;
}

BOOL CInnerAuto::SaveObtainItemList()
{
    HANDLE hFile;
    char Buffer[48][25];
    DWORD NumBytesWritten;
    int index01;
    int index02;
    int iter = 0;
    int tstrlen = 0;

    memset(Buffer, 0, 1200);
    hFile = CreateFileA("G02_GINFO\\011.BIN", 0x40000000, 2, 0, 2, 0x80, 0);
    if (hFile == INVALID_HANDLE_VALUE)
    {
        return FALSE;
    }
    for (index01 = 0; index01 < 48; index01++)
    {
        tstrlen = strlen(mObtainItem[index01]);
        while (iter < 25)
        {
            if (strcmp(mObtainItem[index01], "") != 0)
            {
                if (iter == tstrlen)
                {
                    Buffer[index01][iter] = '\0';
                    iter++;
                    continue;
                }
                else if (iter > tstrlen)
                {
                    Buffer[index01][iter] = '@';
                    iter++;
                    continue;
                }
            }
            else
            {
                Buffer[index01][iter] = '@';
                iter++;
                continue;
            }
            Buffer[index01][iter] = mObtainItem[index01][iter];
            iter++;
        }
        iter = 0;
    }
    if (WriteFile(hFile, Buffer, 1200, &NumBytesWritten, 0))
    {
        CloseHandle(hFile);
        return TRUE;
    }
    CloseHandle(hFile);
    return FALSE;
}

BOOL CInnerAuto::SaveLoseItemList()
{
    HANDLE hFile;
    char Buffer[48][25];
    DWORD NumBytesWritten;
    int index01;
    int index02;
    int iter = 0;
    int tstrlen = 0;

    memset(Buffer, 0, 1200);
    hFile = CreateFileA("G02_GINFO\\012.BIN", 0x40000000, 2, 0, 2, 0x80, 0);
    if (hFile == INVALID_HANDLE_VALUE)
    {
        return FALSE;
    }
    for (index01 = 0; index01 < 48; index01++)
    {
        tstrlen = strlen(mLoseItem[index01]);
        while (iter < 25)
        {
            if (strcmp(mLoseItem[index01], "") != 0)
            {
                if (iter == tstrlen)
                {
                    Buffer[index01][iter] = '\0';
                    iter++;
                    continue;
                }
                else if (iter > tstrlen)
                {
                    Buffer[index01][iter] = '@';
                    iter++;
                    continue;
                }
            }
            else
            {
                Buffer[index01][iter] = '@';
                iter++;
                continue;
            }
            Buffer[index01][iter] = mLoseItem[index01][iter];
            iter++;
        }
        iter = 0;
    }
    if (WriteFile(hFile, Buffer, 1200, &NumBytesWritten, 0))
    {
        CloseHandle(hFile);
        return TRUE;
    }
    CloseHandle(hFile);
    return FALSE;
}


void CInnerAuto::Set()
{
    char* v1;
    int v2;

    if (mMYINFO.mAvatarInfo.aAutoHunt7Day >= 1 || mMYINFO.mAvatarInfo.aAutoHunt5Hour >= 1)
    {
        mUI.Off(1);
        mSKILLUI.Set(2);
        mSKILLUI.mAutoBuffWindow = 0;
        mActive = 1;
        SetWindowTextA(mEDITBOX.mDATA[19], "");
    }
    else
    {
        v2 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(1872);
        mBASICUI.Insert1(v1, v2);
    }
}

BOOL CInnerAuto::InitForMovezone()
{
    CInnerAuto::ClearMonster();
    memset(aActTargetLocation, 0, sizeof(aActTargetLocation));
    mWantToMove = 0;
    mChangeZone = 1;
    mCurActionSort = 0;
    dSearchTick = GetTickCount();
    mCurActionSortTick = GetTickCount();
    dActionTick = GetTickCount();
    dSkillTick = GetTickCount();
    unk62 = GetTickCount();
    dPotionTIck = GetTickCount();
    mSKILLUI.Off();
    mActive = 0;
    if (mEDITBOX.mDataIndex == 20)
    {
        mEDITBOX.Set(0);
    }
    return 1;
}

BOOL CInnerAuto::CheckInvalidLocation(float tLocation[3])
{
    return tLocation[0] == 0.0f && tLocation[1] == 0.0f && tLocation[2] == 0.0f;
}

void CInnerAuto::Update()
{
    int i, j;
    int tRadius;
    float tDistance;
    float fDistance;

    if (mMYINFO.mAvatarInfo.aAutoHuntState != 1 || mMYINFO.mAvatarInfo.aAutoHunt7Day <= 0 && mMYINFO.mAvatarInfo.aAutoHunt5Hour <= 0)
    {
        return;
    }
    if (mChangeZone)
    {
        mMYINFO.mAvatarInfo.aAutoHuntState = 0;
        mTRANSFER.T_AUTO_CONFIG_SEND(0);
        mChangeZone = 0;
        return;
    }
    if (mMYINFO.mAvatarInfo.aAutoBuffScroll <= 0)
    {
        for (i = 2; i < 8; ++i)
        {
            mMYINFO.mAvatarInfo.aAutoHuntData[i][0] = 0;
            mMYINFO.mAvatarInfo.aAutoHuntData[i][1] = 0;
        }
    }
    if (GetTickCount() - dSkillTick > 2000)
    {
        dPotionTIck = GetTickCount();
        if (!CInnerAuto::CheckPotion())
        {
            mPLAY.ReturnToTownOffAuto(0);
            return;
        }
    }
    if (bTakeItem && (CInnerAuto::TakeItem() || CInnerAuto::UseItem() || CInnerAuto::CheckParty() || CInnerAuto::EatChunGongDan() || CInnerAuto::EatChunWangDan()))
    {
        return;
    }

    // Attack Action
    if (mMYINFO.mAvatarInfo.aStandStillOrMovingHunt == 1)
    {
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 1 && !bIsAction)
        {
            bIsAction = 1;
            dActionTick = GetTickCount();
        }
        if (!CInnerAuto::SetAvatarTarget())
        {
            return;
        }
        if (CInnerAuto::GetNearMonster())
        {
            if (mMYINFO.mAvatarInfo.aAutoSkillAttack[1][0] && mMYINFO.mAvatarInfo.aAutoSkillAttack[1][1] && bIsAction)
            {
                mMAIN.ProcessForSkill2(-1, 0, 0, 0, 1);
                dSkillTick = GetTickCount();
                bIsAction = 0;
                return;
            }
            return;
        }
        if (CInnerAuto::GetWeponAttackKind(2))
        {
            tRadius = mFACTOR.GetAttackRadius(mMYINFO.mAvatarInfo.aAutoSkillAttack[0][0]);
        }
        else
        {
            tRadius = mFACTOR.GetAttackRadius(mMYINFO.mAvatarInfo.aAutoSkillAttack[0][0]) + mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mAttackRadius;
        }
        if (tRadius <= CInnerAuto::GetDiatenceFromMonster(mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mMONSTER.mAction.aLocation) || !mMYINFO.mAvatarInfo.aAutoSkillAttack[0][0] || !mMYINFO.mAvatarInfo.aAutoSkillAttack[0][1] || !bIsAction)
        {
            return;
        }
        mMAIN.ProcessForSkill2(-1, 0, 0, 0, 2);
        dSkillTick = GetTickCount();
        bIsAction = 0;
        return;
    }
    else
    {
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 1 && !bIsAction)
        {
            bIsAction = 1;
            dActionTick = GetTickCount();
        }
        if (CInnerAuto::MoveNoTarget() || !CInnerAuto::SetAvatarTarget())
        {
            return;
        } 
        if (!mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mCheckValidState)
        {
            return;
        }
        if (CInnerAuto::GetNearMonster())
        {
            tDistance = CInnerAuto::GetDiatenceFromMonster(mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mMONSTER.mAction.aLocation);
            tRadius = mFACTOR.GetAttackRadius(mMYINFO.mAvatarInfo.aAutoSkillAttack[1][0]);
            fDistance = tRadius + mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mAttackRadius;
            if (fDistance >= tDistance)
            {
                if (mMYINFO.mAvatarInfo.aAutoSkillAttack[1][0] && mMYINFO.mAvatarInfo.aAutoSkillAttack[1][1] && bIsAction)
                {
                    mMAIN.ProcessForSkill2(-1, 0, 0, 0, 1);
                    dSkillTick = GetTickCount();
                    bIsAction = 0;
                    return;
                }
            }
            else
            {
                if (CheckInvalidLocation(mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mMONSTER.mAction.aLocation))
                {
                    return;
                }
                mMYINFO.A002_2(mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mMONSTER.mAction.aLocation, 5, mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mServerIndex, mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mUniqueNumber, 0, 0, 0);
            }
            return;
        }
        if (!mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mCheckValidState)
        {
            return;
        }
        if (CInnerAuto::GetWeponAttackKind(2))
        {
            tDistance = mFACTOR.GetAttackRadius(mMYINFO.mAvatarInfo.aAutoSkillAttack[0][0]);
        }
        else
        {
            tDistance = mFACTOR.GetAttackRadius(mMYINFO.mAvatarInfo.aAutoSkillAttack[0][0]) + mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mAttackRadius;
        }
        fDistance = CInnerAuto::GetDiatenceFromMonster(mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mMONSTER.mAction.aLocation);
        if (tDistance < fDistance)
        {
            if (CheckInvalidLocation(mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mMONSTER.mAction.aLocation))
            {
                return;
            }
            mMYINFO.A002_2(mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mMONSTER.mAction.aLocation, 5, mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mServerIndex, mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mUniqueNumber, 0, 0, 0);
            bIsAction = 1;
            dActionTick = GetTickCount();
            return;
        }
        if (mMYINFO.mAvatarInfo.aAutoSkillAttack[0][0] && mMYINFO.mAvatarInfo.aAutoSkillAttack[0][1] && bIsAction)
        {
            mMAIN.ProcessForSkill2(-1, 0, 0, 0, 2);
            dSkillTick = GetTickCount();
            bIsAction = 0;
            return;
        }
    }
}


BOOL CInnerAuto::LBUTTONDOWN(int uX, int uY)
{
    int sX, sY;
    int i, j;
    BOOL tValid = 0;
    int tIndex;

    if (!mActive)
        return 0;

    tIndex = CInnerAuto::IsOnSkillBox(uX, uY);
    if (tIndex < 0)
    {
        mMYINFO.mAvatarInfo.aActUponDeath = 1;
        mMYINFO.AdjustScreenCoord(3420, 270, 182, &mX, &mY);

        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3423], mX + 13, mY + 54, uX, uY))
        {
            if (mMYINFO.mAvatarInfo.aAutoHunt7Day > 0 || mMYINFO.mAvatarInfo.aAutoHunt5Hour > 0)
            {
                mIsAutoState = 0;
            }
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3424], mX + 102, mY + 54, uX, uY))
        {
            if (mMYINFO.mAvatarInfo.aAutoHunt7Day <= 0 && mMYINFO.mAvatarInfo.aAutoHunt5Hour <= 0)
            {
                mBASICUI.Insert1(mMESSAGE.Return(1350), mFONTCOLOR.mData[44]);
            }
            else
            {
                mIsAutoState = 1;
            }
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3425], mX + 189, mY + 54, uX, uY))
        {
            if (mMYINFO.mAvatarInfo.aAutoHunt7Day <= 0 && mMYINFO.mAvatarInfo.aAutoHunt5Hour <= 0)
            {
                mBASICUI.Insert1(mMESSAGE.Return(1350), mFONTCOLOR.mData[44]);
            }
            else
            {
                mIsAutoState = 2;
            }
            return 1;
        }


        if (mIsAutoState == 0)
        {
            tValid = CInnerAuto::LbuttonDownForBuff(uX, uY);
        }
        else if (mIsAutoState == 1)
        {
            tValid = CInnerAuto::LbuttonDownForHunt(uX, uY);
        }
        else if (mIsAutoState == 2)
        {
            tValid = CInnerAuto::LbuttonDownForItemList(uX, uY);
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3420], mX, mY, uX, uY))
            tValid = 1;
        return tValid;

    }
    else if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
    {
        return 1;
    }
    else
    {
        if (mIsAutoState == 0)
        {
            mCHOICEUI.Set(20, 0, 0, mMYINFO.mAvatarInfo.aAutoHuntData[tIndex][0], mMYINFO.mAvatarInfo.aAutoHuntData[tIndex][1], 0, 0, 0, 0, 0, 0, 0);
            mMYINFO.mAvatarInfo.aAutoHuntData[tIndex][0] = 0;
            mMYINFO.mAvatarInfo.aAutoHuntData[tIndex][1] = 0;
        }
        else if (mIsAutoState == 1)
        {
            mCHOICEUI.Set(20, 0, 0, mMYINFO.mAvatarInfo.aAutoSkillAttack[tIndex][0], mMYINFO.mAvatarInfo.aAutoSkillAttack[tIndex][1], 0, 0, 0, 0, 0, 0, 0);
            mMYINFO.mAvatarInfo.aAutoSkillAttack[tIndex][0] = 0;
            mMYINFO.mAvatarInfo.aAutoSkillAttack[tIndex][1] = 0;
        }
        return 1;
    }
}

BOOL CInnerAuto::LBUTTONUP(int uX, int uY)
{
    int sX, sY;
    int tIndex;
    BOOL tValid;

    if (!mActive)
        return 0;

    mMYINFO.AdjustScreenCoord(3420, 270, 182, &mX, &mY);
    if (mIsAutoState == 0)
    {
        tValid = CInnerAuto::LbuttonUpForBuff(uX, uY);
    }
    else if (mIsAutoState == 1)
    {
        tValid = CInnerAuto::LbuttonUpForHunt(uX, uY);
    }
    else if (mIsAutoState == 2)
    {
        tValid = CInnerAuto::LbuttonUpForItemList(uX, uY);
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3420], mX, mY, uX, uY))
    {
        tValid = 1;
    }

    return tValid;
}

void CInnerAuto::Draw(int uX, int uY)
{
    int sX, sY;
    int i, j;

    if (!mActive)
    {
        return;
    }

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3420], mX, mY, uX, uY))
    {
        mPOINTER.Set(0);
    }
    mMYINFO.AdjustScreenCoord(3420, 270, 182, &mX, &mY);

    if (mIsAutoState == 0)
    {
        CInnerAuto::DrawForBuff(uX, uY);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3424], mX + 102, mY + 54, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3424], mX + 102, mY + 54);
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3425], mX + 189, mY + 54, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3425], mX + 189, mY + 54);
        }
    }
    else if (mIsAutoState == 1)
    {
        CInnerAuto::DrawForHunt(uX, uY);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3423], mX + 13, mY + 54, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3423], mX + 13, mY + 54);
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3425], mX + 189, mY + 54, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3425], mX + 189, mY + 54);
        }
    }
    else if (mIsAutoState == 2)
    {
        CInnerAuto::DrawForItemList(uX, uY);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3423], mX + 13, mY + 54, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3423], mX + 13, mY + 54);
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3424], mX + 102, mY + 54, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3424], mX + 102, mY + 54);
        }
    }

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3426], mX + 14, mY + 365, uX, uY))
    {
        if (bIsClick[0])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3427], mX + 14, mY + 365);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3426], mX + 14, mY + 365);
        }
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3428], mX + 103, mY + 365, uX, uY))
    {
        if (bIsClick[1])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3429], mX + 103, mY + 365);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3428], mX + 103, mY + 365);
        }
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3430], mX + 192, mY + 365, uX, uY))
    {
        if (bIsClick[2])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3431], mX + 192, mY + 365);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3430], mX + 192, mY + 365);
        }
    }
}

void CInnerAuto::DrawForBuff(int uX, int uY)
{
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3420], mX, mY);
    CInnerAuto::DrawSkillPosition();
}

void CInnerAuto::DrawSkillPosition()
{
    int sX, sY;
    SKILL_INFO* tSKILL;
    int i, j, k;

    if (!mActive)
        return;

    mMYINFO.AdjustScreenCoord(3420, 270, 182, &mX, &mY);
    if (mIsAutoState == 0)
    {
        for (i = 0; i < 8; i++)
        {
            sY = 93 * (i / 4) + 149;
            sX = ((i & 3) << 6) + 23;
            if (mMYINFO.mAvatarInfo.aAutoHuntData[i][0])
            {
                tSKILL = mSKILL.Search(mMYINFO.mAvatarInfo.aAutoHuntData[i][0]);
                if (!tSKILL)
                {
                    continue;
                }
                GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[(tSKILL->sDataNumber2D - 1)], mX + sX, mY + sY);
            }
            if (mMYINFO.mAvatarInfo.aAutoBuffScroll <= 0 && i > 1)
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3436], mX + sX, mY + sY);
            }
        }
    }
    else if (mIsAutoState == 1)
    {
        if (mMYINFO.mAvatarInfo.aAutoSkillAttack[0][0])
        {
            tSKILL = mSKILL.Search(mMYINFO.mAvatarInfo.aAutoSkillAttack[0][0]);
            if (!tSKILL)
            {
                return;
            }
            GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[(tSKILL->sDataNumber2D + 1)], mX + 44, mY + 164);
        }
        if (mMYINFO.mAvatarInfo.aAutoSkillAttack[1][0])
        {
            tSKILL = mSKILL.Search(mMYINFO.mAvatarInfo.aAutoSkillAttack[1][0]);
            if (tSKILL)
            {
                GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[(tSKILL->sDataNumber2D + 1)], mX + 74, mY + 164);
            }
        }
    }
}
void CInnerAuto::DrawForHunt(int uX, int uY)
{
    int sX, sY;

    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3421], mX, mY);
    if (mMYINFO.mAvatarInfo.aStandStillOrMovingHunt)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 100, mY + 117);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 225, mY + 117);
    }

    if (mMYINFO.mAvatarInfo.aNumberOfMonsters && mMYINFO.mAvatarInfo.aNumberOfMonsters < 6)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[LOWORD(mMYINFO.mAvatarInfo.aNumberOfMonsters) + 782], mX + 12 * (mMYINFO.mAvatarInfo.aNumberOfMonsters - 1) + 173, mY + 170);
    }

    if (bIsClick[3])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[782], mX + 156, mY + 169);
    }
    else if (bIsClick[4])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[788], mX + 235, mY + 169);
    }
    if ((mMYINFO.mAvatarInfo.aItemPickUp & 1) != 0)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 128, mY + 232);
    }
    if ((mMYINFO.mAvatarInfo.aItemPickUp & 2) != 0)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 163, mY + 232);
    }
    if ((mMYINFO.mAvatarInfo.aItemPickUp & 4) != 0)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 198, mY + 232);
    }
    if ((mMYINFO.mAvatarInfo.aItemPickUp & 8) != 0)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 233, mY + 232);
    }
    if (mMYINFO.mAvatarInfo.aInsufficientBag)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 205, mY + 257);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 131, mY + 257);
    }
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 205, mY + 282);
    if (mMYINFO.mAvatarInfo.aTakePetFood)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 131, mY + 307);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 205, mY + 307);
    }
    if (mMYINFO.mAvatarInfo.aTakeMountFood)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 131, mY + 332);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 205, mY + 332);
    }
    CInnerAuto::DrawSkillPosition();
}

void CInnerAuto::DrawForItemList(int uX, int uY)
{
    int v37, v38;
    char String[1000];
    int sX, sY;
    char* tstr;
    int tstrlen;
    int index01;
    int index02;
    int iter;

    v37 = 0;
    v38 = 0;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3422], mX, mY);
    GetWindowTextA(mEDITBOX.mDATA[19], String, 1000);
    sY = mY + 282;
    sX = mX + 139;
    tstrlen = mUTIL.GetStringLength(String);
    mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 1);
    if (mEDITBOX.mDataIndex == 20)
    {
        sY = mY + 282;
        sX = mX;
        tstrlen = mUTIL.GetStringLength(String);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + tstrlen / 2 + 139, sY);
    }
    sprintf(String, "%d / %d", unk75, 8);
    sY = mY + 326;
    sX = mX + 139;
    tstrlen = mUTIL.GetStringLength(String);
    mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 1);

    if (mItemSetupTab)
    {
        if (mItemSetupTab == 1)
        {
            for (index01 = 0; index01 < 48; index01++)
            {
                if (index01 / 6 == unk75 - 1)
                {
                    strcpy(String, mLoseItem[index01]);
                    sY = mY + 24 * (index01 % 6) + 139;
                    sX = mX + 139;
                    tstrlen = mUTIL.GetStringLength(String);
                    mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 1);
                }
            }
        }
    }
    else
    {
        for (index01 = 0; index01 < 48; index01++)
        {
            if (index01 / 6 == unk75 - 1)
            {
                strcpy(String, mObtainItem[index01]);
                sY = mY + 24 * (index01 % 6) + 139;
                sX = mX + 139;
                tstrlen = mUTIL.GetStringLength(String);
                mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 1);
            }
        }
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3476], mX + 74, mY + 303, uX, uY))
    {
        if (bIsClick[5])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3477], mX + 74, mY + 303);
        else
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3476], mX + 74, mY + 303);
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3478], mX + 144, mY + 303, uX, uY))
    {
        if (bIsClick[6])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3479], mX + 144, mY + 303);
        else
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3478], mX + 144, mY + 303);
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3484], mX + 26, mY + 103, uX, uY))
    {
        if (!bIsClick[7])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3484], mX + 26, mY + 103);
            goto LABEL_45;
        }
    }
    else if (mItemSetupTab)
    {
        goto LABEL_45;
    }
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3485], mX + 26, mY + 103);
LABEL_45:
    if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3486], mX + 153, mY + 103, uX, uY))
    {
        if (mItemSetupTab != 1)
            goto LABEL_51;
    LABEL_50:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3487], mX + 153, mY + 103);
        goto LABEL_51;
    }
    if (bIsClick[8])
        goto LABEL_50;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3486], mX + 153, mY + 103);
LABEL_51:
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[782], mX + 78, mY + 325, uX, uY) && bIsClick[9])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[782], mX + 78, mY + 325);
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[788], mX + 197, mY + 325, uX, uY))
    {
        if (bIsClick[10])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[788], mX + 197, mY + 325);
    }
}


int CInnerAuto::IsOnSkillBox(int uX, int uY)
{
    short sX, sY;
    short i;

    if (!mActive)
        return -1;

    mMYINFO.AdjustScreenCoord(3420, 270, 182, &mX, &mY);
    if (mIsAutoState == 0)
    {
        for (i = 0; i < 8; ++i)
        {
            sY = 93 * (i / 4) + mY + 149;
            sX = ((i & 3) << 6) + LOWORD(mX) + 23;
            if (sY <= uY && sY + 55 >= uY && sX <= uX && sX + 64 >= uX)
            {
                return i;
            }
        }
    }
    else
    {
        sY = mY + 164;
        sX = LOWORD(mX) + 44;
        if (sY <= uY && sY + 25 >= uY && sX <= uX && sX + 25 >= uX)
        {
            return 0;
        }
        sX = LOWORD(mX) + 74;
        if (sY <= uY && sY + 25 >= uY && sX <= uX && sX + 25 >= uX)
        {
            return 1;
        }
    }

    return -1;
}

BOOL CInnerAuto::LbuttonDownForHunt(int uX, int uY)
{
    int sX, sY;
    int i, j, k;

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3426], mX + 14, mY + 365, uX, uY))
    {
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 2)
        {
            mBASICUI.Insert1(mMESSAGE.Return(120), mFONTCOLOR.mData[44]);
        }
        else
        {
            bIsClick[0] = 1;
        }
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3428], mX + 103, mY + 365, uX, uY))
    {
        bIsClick[1] = 1;
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3430], mX + 192, mY + 365, uX, uY))
    {
        bIsClick[2] = 1;
        return 1;
    }
    else if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
    {
        mBASICUI.Insert1(mMESSAGE.Return(1905), mFONTCOLOR.mData[44]);
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[782], mX + 156, mY + 169, uX, uY))
    {
        bIsClick[3] = 1;
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[788], mX + 235, mY + 169, uX, uY))
    {
        bIsClick[4] = 1;
        return 1;
    }

    for (i = 1; i < 6; ++i)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[i + 782], mX + 12 * (i - 1) + 173, mY + 177, uX, uY))
        {
            mMYINFO.mAvatarInfo.aNumberOfMonsters = i;
            break;
        }
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 100, mY + 117, uX, uY))
    {
        mMYINFO.mAvatarInfo.aStandStillOrMovingHunt = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 225, mY + 117, uX, uY))
    {
        mMYINFO.mAvatarInfo.aStandStillOrMovingHunt = 0;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 128, mY + 232, uX, uY))
    {
        if ((mMYINFO.mAvatarInfo.aItemPickUp & 1) != 0)
        {
            mMYINFO.mAvatarInfo.aItemPickUp ^= 1;
        }
        else
        {
            mMYINFO.mAvatarInfo.aItemPickUp |= 1;
        }
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 163, mY + 232, uX, uY))
    {
        if ((mMYINFO.mAvatarInfo.aItemPickUp & 2) != 0)
        {
            mMYINFO.mAvatarInfo.aItemPickUp ^= 2;
        }
        else
        {
            mMYINFO.mAvatarInfo.aItemPickUp |= 2;
        }
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 198, mY + 232, uX, uY))
    {
        if ((mMYINFO.mAvatarInfo.aItemPickUp & 4) != 0)
        {
            mMYINFO.mAvatarInfo.aItemPickUp ^= 4;
        }
        else
        {
            mMYINFO.mAvatarInfo.aItemPickUp |= 4;
        }
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 233, mY + 232, uX, uY))
    {
        if ((mMYINFO.mAvatarInfo.aItemPickUp & 8) != 0)
            mMYINFO.mAvatarInfo.aItemPickUp ^= 8;
        else
            mMYINFO.mAvatarInfo.aItemPickUp |= 8;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 131, mY + 257, uX, uY))
    {
        mMYINFO.mAvatarInfo.aInsufficientBag = 0;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 205, mY + 257, uX, uY))
    {
        mMYINFO.mAvatarInfo.aInsufficientBag = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 131, mY + 307, uX, uY))
    {
        mMYINFO.mAvatarInfo.aTakePetFood = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 205, mY + 307, uX, uY))
    {
        mMYINFO.mAvatarInfo.aTakePetFood = 0;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 131, mY + 332, uX, uY))
    {
        mMYINFO.mAvatarInfo.aTakeMountFood = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 205, mY + 332, uX, uY))
    {
        mMYINFO.mAvatarInfo.aTakeMountFood = 0;
    }
    mMYINFO.mAvatarInfo.aActUponDeath = 1;
    mTRANSFER.T_AUTO_CONFIG_SEND(mMYINFO.mAvatarInfo.aAutoHuntState);
    return 1;
}

BOOL CInnerAuto::LbuttonDownForItemList(int uX, int uY)
{
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3426], mX + 14, mY + 365, uX, uY))
    {
        bIsClick[0] = 1;
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3428], mX + 103, mY + 365, uX, uY))
    {
        bIsClick[1] = 1;
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3430], mX + 192, mY + 365, uX, uY))
    {
        bIsClick[2] = 1;
        return 1;
    }
    else if (uX <= mEDITBOX.mEditBoxInfo[19][0] || uX >= mEDITBOX.mEditBoxInfo[19][2] || uY <= mEDITBOX.mEditBoxInfo[19][1] || uY >= mEDITBOX.mEditBoxInfo[19][3])
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3476], mX + 74, mY + 303, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            bIsClick[5] = 1;
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3478], mX + 144, mY + 303, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            bIsClick[6] = 1;
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3484], mX + 26, mY + 103, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            bIsClick[7] = 1;
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3486], mX + 153, mY + 103, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            bIsClick[8] = 1;
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[782], mX + 78, mY + 325, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            bIsClick[9] = 1;
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[788], mX + 197, mY + 325, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            bIsClick[10] = 1;
            return 1;
        }

        return 0;
    }
    else
    {
        mEDITBOX.Set(20);
        return 1;
    }
}

BOOL CInnerAuto::LbuttonDownForBuff(int uX, int uY)
{
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3426], mX + 14, mY + 365, uX, uY))
    {
        bIsClick[0] = 1;
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3428], mX + 103, mY + 365, uX, uY))
    {
        bIsClick[1] = 1;
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3430], mX + 192, mY + 365, uX, uY))
    {
        bIsClick[2] = 1;
        return 1;
    }

    return 0;
}

BOOL CInnerAuto::LbuttonUpForHunt(int uX, int uY)
{
    int sX, sY;
    int i, j, k;

    if (bIsClick[0] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3426], mX + 14, mY + 365, uX, uY))
    {
        bIsClick[0] = 0;
        if (!CInnerAuto::CheckIsBegin())
        {
            mBASICUI.Insert1(mMESSAGE.Return(1790), mFONTCOLOR.mData[44]);
            return 1;
        }
        if (!CInnerAuto::CheckPotion())
        {
            mBASICUI.Insert1(mMESSAGE.Return(1792), mFONTCOLOR.mData[44]);
            return 1;
        }
        mMYINFO.mHotKeyIndex = -1;
        if (!mMYINFO.mAvatarInfo.aAutoHuntState)
        {
            if (mAPP[0].hPresentElapsedSeconds - mMYINFO.mPostAutoTime <= 3.0f)
            {
                mBASICUI.Insert1("[SYSTEM] AutoHunt Toggle on Cooldown", 15);
                return 1;
            }
            mMYINFO.mPostAutoTime = mAPP[0].hPresentElapsedSeconds;
            mMYINFO.mAvatarInfo.aAutoHuntState = 1;
            mTRANSFER.T_AUTO_CONFIG_SEND(1);
            mSKILLUI.Off();
            mActive = 0;
            if (mEDITBOX.mDataIndex == 20)
            {
                mEDITBOX.Set(0);
            }
            mBASICUI.Insert1(mMESSAGE.Return(1907), mFONTCOLOR.mData[44]);
            mChangeZone = 0;
        }
        return 1;
    }
    else if (bIsClick[1])
    {
        bIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3428], mX + 103, mY + 365, uX, uY))
        {
            mMYINFO.mAvatarInfo.aAutoHuntState = 0;
            mTRANSFER.T_AUTO_CONFIG_SEND(0);
            CInnerAuto::ClearMonster();
            mBASICUI.Insert1(mMESSAGE.Return(1908), mFONTCOLOR.mData[44]);
            return 1;
        }
    }
    else if (bIsClick[2] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3430], mX + 192, mY + 365, uX, uY))
    {
        mSKILLUI.Off();
        mActive = 0;
        if (mEDITBOX.mDataIndex == 20)
        {
            mEDITBOX.Set(0);
        }
        return 1;
    }
    else if (bIsClick[3] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[782], mX + 156, mY + 169, uX, uY))
    {
        bIsClick[3] = 0;
        if (--mMYINFO.mAvatarInfo.aNumberOfMonsters < 1)
        {
            mMYINFO.mAvatarInfo.aNumberOfMonsters = 1;
        }
        return 1;
    }
    else if (bIsClick[4])
    {
        bIsClick[4] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[788], mX + 235, mY + 169, uX, uY))
        {
            if (++mMYINFO.mAvatarInfo.aNumberOfMonsters > 5)
            {
                mMYINFO.mAvatarInfo.aNumberOfMonsters = 5;
            }
        }
        return 1;
    }

    return 0;
}

BOOL CInnerAuto::LbuttonUpForBuff(int uX, int uY)
{
    if (bIsClick[0] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3426], mX + 14, mY + 365, uX, uY))
    {
        bIsClick[0] = 0;
        if (!CInnerAuto::CheckIsBegin())
        {
            mBASICUI.Insert1(mMESSAGE.Return(1790), mFONTCOLOR.mData[44]);
            return 1;
        }
        if (!CInnerAuto::CheckPotion())
        {
            mBASICUI.Insert1(mMESSAGE.Return(1792), mFONTCOLOR.mData[44]);
            return 1;
        }
        mMYINFO.mHotKeyIndex = -1;
        if (!mMYINFO.mAvatarInfo.aAutoHuntState)
        {
            if (mAPP[0].hPresentElapsedSeconds - mMYINFO.mPostAutoTime <= 3.0f)
            {
                mBASICUI.Insert1("[SYSTEM] AutoHunt Toggle on Cooldown", 15);
                return 1;
            }
            mMYINFO.mPostAutoTime = mAPP[0].hPresentElapsedSeconds;
            mMYINFO.mAvatarInfo.aAutoHuntState = 1;
            mTRANSFER.T_AUTO_CONFIG_SEND(1);
            mSKILLUI.Off();
            mActive = 0;
            if (mEDITBOX.mDataIndex == 20)
            {
                mEDITBOX.Set(0);
            }
            mBASICUI.Insert1(mMESSAGE.Return(1907), mFONTCOLOR.mData[44]);
            mChangeZone = 0;
        }
        return 1;
    }
    else if (bIsClick[1] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3428], mX + 103, mY + 365, uX, uY))
    {
        bIsClick[1] = 0;
        mMYINFO.mAvatarInfo.aAutoHuntState = 0;
        mTRANSFER.T_AUTO_CONFIG_SEND(0);
        CInnerAuto::ClearMonster();
        mBASICUI.Insert1(mMESSAGE.Return(1908), mFONTCOLOR.mData[44]);
        return 1;
    }
    else if (bIsClick[2] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3430], mX + 192, mY + 365, uX, uY))
    {
        bIsClick[2] = 0;
        mSKILLUI.Off();
        mActive = 0;
        if (mEDITBOX.mDataIndex == 20)
        {
            mEDITBOX.Set(0);
        }
        return 1;
    }

    return 0;
}

BOOL CInnerAuto::LbuttonUpForItemList(int uX, int uY)
{
    int sX, sY;
    int i, j, k;
    int index01;
    int index02;
    char mBuffer[1000];

    if (bIsClick[0])
    {
        bIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3426], mX + 14, mY + 365, uX, uY))
        {
            if (!CInnerAuto::CheckIsBegin())
            {
                mBASICUI.Insert1(mMESSAGE.Return(1790), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (!CInnerAuto::CheckPotion())
            {
                mBASICUI.Insert1(mMESSAGE.Return(1792), mFONTCOLOR.mData[44]);
                return 1;
            }
            mMYINFO.mHotKeyIndex = -1;
            if (!mMYINFO.mAvatarInfo.aAutoHuntState)
            {
                if (mAPP[0].hPresentElapsedSeconds - mMYINFO.mPostAutoTime <= 3.0f)
                {
                    mBASICUI.Insert1("[SYSTEM] AutoHunt Toggle on Cooldown", 15);
                    return 1;
                }
                mMYINFO.mPostAutoTime = mAPP[0].hPresentElapsedSeconds;
                mMYINFO.mAvatarInfo.aAutoHuntState = 1;
                mTRANSFER.T_AUTO_CONFIG_SEND(1);
                mSKILLUI.Off();
                mActive = 0;
                if (mEDITBOX.mDataIndex == 20)
                {
                    mEDITBOX.Set(0);
                }
                mBASICUI.Insert1(mMESSAGE.Return(1907), mFONTCOLOR.mData[44]);
                mChangeZone = 0;
            }
        }
        return 1;
    }
    else if (bIsClick[1])
    {
        bIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3428], mX + 103, mY + 365, uX, uY))
        {
            mMYINFO.mAvatarInfo.aAutoHuntState = 0;
            mTRANSFER.T_AUTO_CONFIG_SEND(0);
            CInnerAuto::ClearMonster();
            mBASICUI.Insert1(mMESSAGE.Return(1908), mFONTCOLOR.mData[44]);
        }
        return 1;
    }
    else if (bIsClick[2])
    {
        bIsClick[2] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3430], mX + 192, mY + 365, uX, uY))
        {
            mSKILLUI.Off();
            mActive = 0;
            if (mEDITBOX.mDataIndex == 20)
            {
                mEDITBOX.Set(0);
            }
        }
        return 1;
    }
    else if (bIsClick[7])
    {
        bIsClick[7] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3484], mX + 26, mY + 103, uX, uY))
        {
            mItemSetupTab = 0;
        }
        return 1;
    }
    else if (bIsClick[8])
    {
        bIsClick[8] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3486], mX + 153, mY + 103, uX, uY))
        {
            mItemSetupTab = 1;
        }
        return 1;
    }
    else if (bIsClick[9])
    {
        bIsClick[9] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[782], mX + 78, mY + 325, uX, uY))
        {
            if (unk75 >= 2)
            {
                --unk75;
            }
            else
            {
                unk75 = 1;
            }
        }
        return 1;
    }
    else if (bIsClick[10])
    {
        bIsClick[10] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[788], mX + 197, mY + 325, uX, uY))
        {
            if (++unk75 > 8)
            {
                unk75 = 8;
            }
        }

        return 1;
    }
    else if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
    {
        mBASICUI.Insert1(mMESSAGE.Return(1905), mFONTCOLOR.mData[44]);
        bIsClick[5] = 0;
        bIsClick[6] = 0;
        return 1;
    }
    else if (bIsClick[5])
    {
        bIsClick[5] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3476], mX + 74, mY + 303, uX, uY))
        {
            if (!GetWindowTextA(mEDITBOX.mDATA[19], mBuffer, 25))
            {
                mBASICUI.Insert1(mMESSAGE.Return(1949), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (!mITEM.IsItemExist(mBuffer))
            {
                mBASICUI.Insert1(mMESSAGE.Return(1948), mFONTCOLOR.mData[44]);
                return 0;
            }
            if (CInnerAuto::IsItemListExist(mBuffer))
            {
                mBASICUI.Insert1(mMESSAGE.Return(1947), mFONTCOLOR.mData[44]);
                return 0;
            }
        }
        if (mItemSetupTab == 1)
        {
            for (index01 = 0; index01 < 48; index01++)
            {
                if (strcmp(mLoseItem[index01], "") == 0)
                {
                    break;
                }
            }
            if (index01 == 48)
            {
                mBASICUI.Insert1(mMESSAGE.Return(1980), mFONTCOLOR.mData[44]);
                SetWindowTextA(mEDITBOX.mDATA[19], "");
                return 1;
            }
            if (!CInnerAuto::IsPriorityLoseItem(mBuffer))
            {
                strcpy(mLoseItem[index01], mBuffer);
                CInnerAuto::SaveLoseItemList();
                SetWindowTextA(mEDITBOX.mDATA[19], "");
                return 1;
            }
        }
        else
        {
            for (index01 = 0; index01 < 48; index01++)
            {
                if (strcmp(mObtainItem[index01], "") == 0)
                {
                    break;
                }
            }
            if (index01 == 48)
            {
                mBASICUI.Insert1(mMESSAGE.Return(1980), mFONTCOLOR.mData[44]);
                SetWindowTextA(mEDITBOX.mDATA[19], "");
                return 1;
            }
            if (!CInnerAuto::IsPriorityObtainItem(mBuffer))
            {
                strcpy(mObtainItem[index01], mBuffer);
                CInnerAuto::SaveObtainItemList();
                SetWindowTextA(mEDITBOX.mDATA[19], "");
                return 1;
            }
        }
        return 1;
    }
    else if (bIsClick[6])
    {
        bIsClick[6] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3478], mX + 144, mY + 303, uX, uY))
        {
            if (!GetWindowTextA(mEDITBOX.mDATA[19], mBuffer, 25))
            {
                mBASICUI.Insert1(mMESSAGE.Return(1950), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (!mITEM.IsItemExist(mBuffer))
            {
                mBASICUI.Insert1(mMESSAGE.Return(1948), mFONTCOLOR.mData[44]);
                return 0;
            }
            if (mItemSetupTab == 1)
            {
                for (index01 = 0; index01 < 48; index01++)
                {
                    if (strcmp(mLoseItem[index01], mBuffer) == 0)
                    {
                        break;
                    }
                }
                if (index01 == 48)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1981), mFONTCOLOR.mData[44]);
                    return 1;
                }
                strcpy(mLoseItem[index01], "");
                CInnerAuto::SaveLoseItemList();
                SetWindowTextA(mEDITBOX.mDATA[19], "");
                return 1;
            }
            else
            {
                for (index01 = 0; index01 < 48; index01++)
                {
                    if (strcmp(mObtainItem[index01], mBuffer) == 0)
                    {
                        break;
                    }
                }
                if (index01 == 48)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1981), mFONTCOLOR.mData[44]);
                    return 1;
                }
                strcpy(mObtainItem[index01], "");
                CInnerAuto::SaveObtainItemList();
                SetWindowTextA(mEDITBOX.mDATA[19], "");
                return 1;
            }
        }
        return 1;
    }
}


int CInnerAuto::CheckIsBegin()
{
    int i, j;

    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 2; ++j)
        {
            if (mMYINFO.mAvatarInfo.aAutoSkillAttack[i][j] > 0)
            {
                return 1;
            }
        }
    }
    return 0;
}

BOOL CInnerAuto::CheckPotion()
{
    int i, j;
    int tBag;
    int tHP, tMP;

    tBag = 1;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 14; ++j)
        {
            if (mMYINFO.mAvatarInfo.aHotKey[i][j][2] == 3)
            {
                switch (mMYINFO.mAvatarInfo.aHotKey[i][j][0])
                {
                case 32:
                case 33:
                case 34:
                    tHP = 1;
                    tMP = 1;
                    break;
                case 26:
                case 27:
                case 28:
                case 7008:
                case 29:
                case 30:
                case 31:
                    tMP = 1;
                    break;
                case 2:
                case 3:
                case 4:
                case 7007:
                case 23:
                case 24:
                case 25:
                    tHP = 1;
                    break;
                }
                if (tHP == 1 && tMP == 1)
                {
                    break;
                }
            }
        }
    }

    if (tHP == 1 && tMP == 1)
    {
        return 1;
    }

    if (mMYINFO.mAvatarInfo.aExpandInventoryDate > 0)
    {
        tBag = 2;
    }
    for (i = 0; i < tBag; ++i)
    {
        for (j = 0; j < 64; ++j)
        {
            if (mMYINFO.mAvatarInfo.aHotKey[i][j][2] == 3)
            {
                switch (mMYINFO.mAvatarInfo.aHotKey[i][j][0])
                {
                case 32:
                case 33:
                case 34:
                    tHP = 1;
                    tMP = 1;
                    break;
                case 26:
                case 27:
                case 28:
                case 7008:
                case 29:
                case 30:
                case 31:
                    tMP = 1;
                    break;
                case 2:
                case 3:
                case 4:
                case 7007:
                case 23:
                case 24:
                case 25:
                    tHP = 1;
                    break;
                }
                if (tHP == 1 && tMP == 1)
                {
                    break;
                }
            }
        }
    }
    if (tHP == 1 && tMP == 1)
    {
        return 1;
    }

    return 0;
}

BOOL CInnerAuto::GetIsTargetValid0(int tTargetObjIndex)
{
    int i;

    if (mMaxNearMonster >= 15)
    {
        return 0;
    }
    for (i = 0; i < mMaxNearMonster; ++i)
    {
        if (mNearMonster[i].bSomeValid && mNearMonster[i].mIndex == tTargetObjIndex)
        {
            return 1;
        }
    }
    return 0;
}
void CInnerAuto::ClearMonster()
{
    MONSTER_DISTANCE n[MAX_NEAR_MONSTER];

    if (!CInnerAuto::GetIsTargetValid0(mTargetObjIndex))
    {
        CInnerAuto::SetTargetUnvalid0();
    }
    mMaxNearMonster = 0;
    for (int i = 0; i < MAX_NEAR_MONSTER; i++)
    {
        n[i].mIndex = -1;
        n[i].fDistance = 0.0f;
        n[i].bSomeValid = 0;
    }
    CopyMemory(mNearMonster, n, sizeof(mNearMonster));
}

void CInnerAuto::SetTargetUnvalid0()
{
    int i;

    for (i = 0; i < MAX_NEAR_MONSTER; ++i)
    {
        if (mNearMonster[i].mIndex == mTargetObjIndex)
        {
            mNearMonster[i].bSomeValid = 0;
            mNearMonster[i].fDistance = 0.0;
            mNearMonster[i].mIndex = -1;
            mTargetObjIndex = -1;
            return;
        }
    }
}

void CInnerAuto::SetBuffSkill(int tIndex, int tItemIndex, int tXPost)
{
    int i, j;

    if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
    {
        mBASICUI.Insert1(mMESSAGE.Return(1891), mFONTCOLOR.mData[44]);
        return;
    }
    if (mIsAutoState == 0)
    {
        if (tIndex >= 8)
        {
            return;
        }
        for (i = 0; i < 8; i++)
        {
            if (mMYINFO.mAvatarInfo.aAutoHuntData[i][0] == tItemIndex)
            {
                mBASICUI.Insert1(mMESSAGE.Return(1655), mFONTCOLOR.mData[44]);
                return;
            }
        }
        if (CInnerAuto::IsBuffSkill(tIndex, tItemIndex))
        {
            mMYINFO.mAvatarInfo.aAutoHuntData[tIndex][0] = tItemIndex;
            mMYINFO.mAvatarInfo.aAutoHuntData[tIndex][1] = tXPost;
            mTRANSFER.T_AUTO_CONFIG_SEND(0);
            return;
        }
        mBASICUI.Insert1(mMESSAGE.Return(1652), mFONTCOLOR.mData[44]);
        return;
    }
    else
    {
        if (tIndex < 2)
        {
            if (CInnerAuto::IsAttackSkill(tIndex, tItemIndex))
            {
                mMYINFO.mAvatarInfo.aAutoSkillAttack[tIndex][0] = tItemIndex;
                mMYINFO.mAvatarInfo.aAutoSkillAttack[tIndex][1] = tXPost;
                mTRANSFER.T_AUTO_CONFIG_SEND(0);
                return;
            }
        }
        mBASICUI.Insert1(mMESSAGE.Return(1652), mFONTCOLOR.mData[44]);
    }
}
BOOL CInnerAuto::IsBuffSkill(int tSort, int s)
{
    switch (tSort)
    {
    case 0:
    case 1:
        return CInnerAuto::GetTribeKind(0) && s == 7 || CInnerAuto::GetTribeKind(1) && s == 26 || CInnerAuto::GetTribeKind(2) && s == 45 || CInnerAuto::GetWeponKind(0) && s == 11 || CInnerAuto::GetWeponKind(1) && s == 15 || CInnerAuto::GetWeponKind(2) && s == 19 || CInnerAuto::GetWeponKind(3) && s == 30 || CInnerAuto::GetWeponKind(4) && s == 34 || CInnerAuto::GetWeponKind(5) && s == 38 || CInnerAuto::GetWeponKind(6) && s == 49 || CInnerAuto::GetWeponKind(7) && s == 53 || CInnerAuto::GetWeponKind(8) && s == 57;

    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        return s == 82 || s == 83 || s == 84 || s == 103 || s == 104 || s == 105;

    default:
        return 0;
    }
}
BOOL CInnerAuto::IsAttackSkill(int tSort, int s)
{
    BOOL result;

    if (tSort)
        result = CInnerAuto::GetWeponKind(0) && (s == 10 || s == 112)
        || CInnerAuto::GetWeponKind(1) && (s == 14 || s == 113)
        || CInnerAuto::GetWeponKind(2) && (s == 18 || s == 114)
        || CInnerAuto::GetWeponKind(3) && (s == 29 || s == 115)
        || CInnerAuto::GetWeponKind(4) && (s == 33 || s == 116)
        || CInnerAuto::GetWeponKind(5) && (s == 37 || s == 117)
        || CInnerAuto::GetWeponKind(6) && (s == 48 || s == 118)
        || CInnerAuto::GetWeponKind(7) && (s == 52 || s == 119)
        || CInnerAuto::GetWeponKind(8) && (s == 56 || s == 120);
    else
        result = CInnerAuto::GetWeponKind(0)
        && (s == 8 || s == 9 || s == 58 || s == 59 || s == 85 || s == 86 || s == 121 || s == 122)
        || CInnerAuto::GetWeponKind(1)
        && (s == 12 || s == 13 || s == 60 || s == 61 || s == 87 || s == 88 || s == 123 || s == 124)
        || CInnerAuto::GetWeponKind(2)
        && (s == 16 || s == 17 || s == 62 || s == 63 || s == 89 || s == 90 || s == 125 || s == 126)
        || CInnerAuto::GetWeponKind(3)
        && (s == 27 || s == 28 || s == 64 || s == 65 || s == 91 || s == 92 || s == 127 || s == 128)
        || CInnerAuto::GetWeponKind(4)
        && (s == 31 || s == 32 || s == 66 || s == 67 || s == 93 || s == 94 || s == 129 || s == 130)
        || CInnerAuto::GetWeponKind(5)
        && (s == 35 || s == 36 || s == 68 || s == 69 || s == 95 || s == 96 || s == 131 || s == 132)
        || CInnerAuto::GetWeponKind(6)
        && (s == 46 || s == 47 || s == 70 || s == 71 || s == 97 || s == 98 || s == 133 || s == 134)
        || CInnerAuto::GetWeponKind(7)
        && (s == 50 || s == 51 || s == 72 || s == 73 || s == 99 || s == 100 || s == 135 || s == 136)
        || CInnerAuto::GetWeponKind(8)
        && (s == 54 || s == 55 || s == 74 || s == 75 || s == 101 || s == 102 || s == 137 || s == 138);
    return result;
}
BOOL CInnerAuto::GetWeponKind(int tItem)
{
    return tItem + 13 == mITEM.Search(mMYINFO.mAvatarInfo.aEquip[7][0])->iSort;
}
BOOL CInnerAuto::GetTribeKind(int tTribe)
{
    return mMYINFO.mAvatarInfo.aTribe == tTribe || mMYINFO.mAvatarInfo.aPreviousTribe == tTribe;
}
void CInnerAuto::HotKeyAutoStop()
{
    bIsClick[1] = 1;
    CInnerAuto::LbuttonUpForHunt(mX + 104, mY + 366);
}
void CInnerAuto::HotKeyAutoStart()
{
    bIsClick[0] = 1;
    CInnerAuto::LbuttonUpForHunt(mX + 15, mY + 366);
}
BOOL CInnerAuto::IsAbleKey(int tShortcutKey, int tKey)
{
    if (!mMYINFO.mAvatarInfo.aAutoHuntState || mMYINFO.mAvatarInfo.aAutoHuntState == 1 && mMYINFO.mAvatarInfo.aAutoHunt7Day < 1 && mMYINFO.mAvatarInfo.aAutoHunt5Hour < 1)
    {
        return 1;
    }
    if (!tKey)
    {
        return 0;
    }
    if (tShortcutKey == 1)
    {
        switch (tKey)
        {
        case 2:
        case 3:
        case 4:
        case 5:
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
            return 0;
        default:
            return 1;
        }
    }
    else
    {
        switch (tKey)
        {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 16:
        case 17:
        case 18:
        case 19:
            return 0;
        default:
            return 1;
        }
    }
}
BOOL CInnerAuto::TakeItem()
{
    int a6;
    int a8;
    int a7;
    int a9;
    int v7;

    v7 = CInnerAuto::GetItemIndex();
    if (v7 != -1)
    {
        if (GetTickCount() - dSkillTick < 50)
        {
            return 1;
        }
        if (!mMAIN.CheckForInventory())
        {
            return 1;
        }
        if (mPLAY.mITEM_OBJECT[v7].mITEM_INFO->iSort == 1)
        {
            mMAIN.ProcessForGetItem1(mPLAY.mITEM_OBJECT[v7].mServerIndex, mPLAY.mITEM_OBJECT[v7].mUniqueNumber);
            return 1;
        }
        a6 = 0;
        a7 = 0;
        a8 = 0;
        a9 = 0;
        mINVENUI.PutInventory1(-1, -1, mPLAY.mITEM_OBJECT[v7].mDATA.iIndex, mPLAY.mITEM_OBJECT[v7].mDATA.iQuantity, &a6, &a7, &a8, &a9, -1);
        if (a6 >= 0)
        {
            mMAIN.ProcessForGetItem1(mPLAY.mITEM_OBJECT[v7].mServerIndex, mPLAY.mITEM_OBJECT[v7].mUniqueNumber);
            dSkillTick = GetTickCount();
            return 1;
        }
        if (mMYINFO.mAvatarInfo.aInsufficientBag == 1)
        {
            if (mMYINFO.mCheckSendActionPacket || !mPLAY.CheckPossibleChangeAction())
            {
                return 1;
            }
            mPLAY.ReturnToTownOffAuto(0);
        }
    }
    return 0;
}
BOOL CInnerAuto::UseItem()
{
    int i;
    int tCurrentPage;
    int tMaxPage;

    tMaxPage = 1;
    if (mMYINFO.mAvatarInfo.aExpandInventoryDate > 0)
    {
        tMaxPage = 2;
    }
    tCurrentPage = 0;
LABEL_4:
    if (tCurrentPage >= tMaxPage)
    {
        return 0;
    }
    for (i = 0; ; ++i)
    {
        if (i >= 64)
        {
            ++tCurrentPage;
            goto LABEL_4;
        }
        if (mMYINFO.mAvatarInfo.aInventory[tCurrentPage][i][0] == 1045
            || mMYINFO.mAvatarInfo.aInventory[tCurrentPage][i][0] == 1035
            || mMYINFO.mAvatarInfo.aInventory[tCurrentPage][i][0] == 1036
            || mMYINFO.mAvatarInfo.aInventory[tCurrentPage][i][0] == 1037
            || mMYINFO.mAvatarInfo.aInventory[tCurrentPage][i][0] == 1094 && mMYINFO.mAvatarInfo.aMoney <= 1900000000)
        {
            break;
        }
    }
    if (mMYINFO.mMoveZoneState)
    {
        return 1;
    }
    if (!mMYINFO.mNetworkLock)
    {
        mMYINFO.mUseInventoryPage = tCurrentPage;
        mMYINFO.mUseInventoryIndex = i;
        mTRANSFER.T_USE_INVENTORY_ITEM_SEND(tCurrentPage, i, mMYINFO.mAvatarInfo.aInventory[tCurrentPage][i][1]);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
    }
    return 1;
}
int CInnerAuto::CheckParty()
{
    int i, j;
    int v2;

    v2 = 0;
    for (i = 0; i < 5; ++i)
    {
        if (strcmp(mMYINFO.mPartyInfo[i], ""))
        {
            ++v2;
        }
    }
    if (v2 != 1 || strcmp(mMYINFO.mAvatarInfo.aPartyName, mMYINFO.mAvatarInfo.aName))
    {
        return 0;
    }
    mTRANSFER.T_PARTY_BREAK_SEND();
    return 1;
}
BOOL CInnerAuto::EatChunGongDan()
{
    int k;
    int v4;
    ITEM_INFO* v5;
    int i;
    int j;
    int v8;

    v8 = 1;
    j = 0;
    v5 = mITEM.Search(mMYINFO.mAvatarInfo.aEquip[8][0]);
    if (!v5 || v5->iSort == 28 || v5->iSort == 31 || v5->iSort == 32)
    {
        return 0;
    }
    if (mMYINFO.mAvatarInfo.aTakePetFood != 1 || mMYINFO.mAvatarInfo.aEquip[8][0] <= 0 || mMYINFO.mAvatarInfo.aEquip[8][1] >= 50)
    {
        return 0;
    }
    v4 = 0;
LABEL_10:
    if (v4 >= 3)
    {
        if (mMYINFO.mAvatarInfo.aExpandInventoryDate > 0)
        {
            v8 = 2;
        }
        for (i = 0; i < v8; ++i)
        {
            for (j = 0; j < 64; ++j)
            {
                if (mMYINFO.mAvatarInfo.aInventory[i][j][0] == 1001)
                {
                    return 0;
                }
            }
        }
        if (i == v8 && j == 64)
        {
            mBASICUI.Insert1(mMESSAGE.Return(1793), mFONTCOLOR.mData[44]);
            mMYINFO.mAvatarInfo.aTakePetFood = 0;
            mTRANSFER.T_AUTO_CONFIG_SEND(mMYINFO.mAvatarInfo.aAutoHuntState);
        }
        return 0;
    }
    for (k = 0; ; ++k)
    {
        if (k >= 14)
        {
            ++v4;
            goto LABEL_10;
        }
        if (mMYINFO.mAvatarInfo.aHotKey[v4][k][2] == 3 && mMYINFO.mAvatarInfo.aHotKey[v4][k][0] == 1001 && mMYINFO.mAvatarInfo.aHotKey[v4][k][1] > 0)
        {
            break;
        }
    }
    if (mMYINFO.mMoveZoneState)
    {
        return 1;
    }
    if (mMYINFO.mNetworkLock)
    {
        return 1;
    }
    mMYINFO.mHotKeyPage = v4;
    mMYINFO.mHotKeyIndex = k;
    if (mTRANSFER.T_USE_HOTKEY_ITEM_SEND(v4, k))
    {
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
    }
    return 1;
}
BOOL CInnerAuto::EatChunWangDan()
{
    int k;
    int v4;
    int i;
    int j;
    int a2;
    int a3;
    int v9;

    v9 = 1;
    j = 0;
    a2 = 0;
    a3 = 0;
    if (mMYINFO.mAvatarInfo.aTakeMountFood != 1 || mMYINFO.mAvatarInfo.aAnimalIndex <= 9 || mMYINFO.mAvatarInfo.aAnimalIndex >= 20)
    {
        return 0;
    }
    mUTIL.ReturnMountExp(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex - 10], &a2, &a3);
    if (a2 > 50)
    {
        return 0;
    }
    v4 = 0;
LABEL_7:
    if (v4 >= 3)
    {
        if (mMYINFO.mAvatarInfo.aExpandInventoryDate > 0)
        {
            v9 = 2;
        }
        for (i = 0; i < v9; ++i)
        {
            for (j = 0; j < 64; ++j)
            {
                if (mMYINFO.mAvatarInfo.aInventory[i][j][0] == 563)
                {
                    return 0;
                }
            }
        }
        if (i == v9 && j == 64)
        {
            mBASICUI.Insert1(mMESSAGE.Return(2185), mFONTCOLOR.mData[44]);
            mMYINFO.mAvatarInfo.aTakeMountFood = 0;
            mTRANSFER.T_AUTO_CONFIG_SEND(mMYINFO.mAvatarInfo.aAutoHuntState);
        }
        return 0;
    }
    for (k = 0; ; ++k)
    {
        if (k >= 14)
        {
            ++v4;
            goto LABEL_7;
        }
        if (mMYINFO.mAvatarInfo.aHotKey[v4][k][2] == 3 && mMYINFO.mAvatarInfo.aHotKey[v4][k][0] == 563 && mMYINFO.mAvatarInfo.aHotKey[v4][k][1] > 0)
        {
            break;
        }
    }
    if (mMYINFO.mMoveZoneState)
    {
        return 1;
    }
    if (mMYINFO.mNetworkLock)
    {
        return 1;
    }
    mMYINFO.mHotKeyPage = v4;
    mMYINFO.mHotKeyIndex = k;
    if (mTRANSFER.T_USE_HOTKEY_ITEM_SEND(v4, k))
    {
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
    }
    return 1;
}
int CInnerAuto::GetItemIndex()
{
    int v3;
    int v4;
    int j;
    int i;
    int v7;
    float v8;
    float v9;
    float v10;

    v7 = -1;
    for (i = 0; i < mPLAY.MAX_ITEM_OBJECT; ++i)
    {
        if (mPLAY.mITEM_OBJECT[i].mCheckValidState && mPLAY.mITEM_OBJECT[i].CheckPossibleGetItem() && mPLAY.mITEM_OBJECT[i].mITEM_INFO->iSort == 1)
        {
            if (mPLAY.mITEM_OBJECT[i].mDATA.iQuantity + mMYINFO.mAvatarInfo.aMoney > 2000000000)
            {
                v7 = -1;
                break;
            }
            if (mMYINFO.mAvatarInfo.aStandStillOrMovingHunt != 1)
            {
                v7 = i;
                break;
            }
            v8 = CInnerAuto::GetDiatenceFromMonster(mPLAY.mITEM_OBJECT[i].mDATA.iLocation);
            if (v8 < 50.0f)
            {
                v7 = i;
                break;
            }
        }
    }
    if (v7 == -1)
    {
        for (j = 0; j < mPLAY.MAX_ITEM_OBJECT; ++j)
        {
            if (mPLAY.mITEM_OBJECT[j].mCheckValidState && mPLAY.mITEM_OBJECT[j].CheckPossibleGetItem())
            {
                if (CInnerAuto::IsPriorityObtainItem(mPLAY.mITEM_OBJECT[j].mITEM_INFO->iName))
                {
                    if (mMYINFO.mAvatarInfo.aStandStillOrMovingHunt != 1)
                    {
                        return j;
                    }
                    v9 = CInnerAuto::GetDiatenceFromMonster(mPLAY.mITEM_OBJECT[j].mDATA.iLocation);
                    if (v9 < 50.0f)
                    {
                        return j;
                    }
                }
                else
                {
                    v3 = mPLAY.mITEM_OBJECT[j].mITEM_INFO->iType;
                    switch (v3)
                    {
                    case 1:
                        v4 = 1;
                        break;
                    case 2:
                        v4 = 2;
                        break;
                    case 3:
                        v4 = 4;
                        break;
                    case 4:
                        v4 = 8;
                        break;
                    default:
                        v4 = 0;
                        break;
                    }
                    if (!v4)
                    {
                        return -1;
                    }
                    if ((mMYINFO.mAvatarInfo.aItemPickUp & v4) == v4 && !CInnerAuto::IsPriorityLoseItem(mPLAY.mITEM_OBJECT[j].mITEM_INFO->iName))
                    {
                        if (mMYINFO.mAvatarInfo.aStandStillOrMovingHunt != 1)
                        {
                            return j;
                        }
                        v10 = CInnerAuto::GetDiatenceFromMonster(mPLAY.mITEM_OBJECT[j].mDATA.iLocation);
                        if (v10 < 50.0f)
                        {
                            return j;
                        }
                    }
                }
            }
        }
    }
    return v7;
}
BOOL CInnerAuto::SetAvatarTarget()
{
    DWORD v3;

    if (GetTickCount() - dSearchTick <= 1000 || CInnerAuto::GetIsTargetValid0(mTargetObjIndex))
    {
        if (CInnerAuto::GetIsTargetValid0(mTargetObjIndex) || CInnerAuto::GetTargetMonster() >= 0)
        {
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aFrame >= 0.0f && mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aFrame < 1.0f)
            {
                v3 = mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mUniqueNumber;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex = mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mServerIndex;
                mMYINFO.mSelectObjIndex = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectUniqueNumber = v3;
                mMYINFO.mSelectObjUniqueNumber = v3;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectSort = 5;
                mMYINFO.mSelectObjSort = 5;
            }
            return 1;
        }
        else
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectIndex = 0;
            mMYINFO.mSelectObjIndex = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectUniqueNumber = -1;
            mMYINFO.mSelectObjUniqueNumber = -1;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aTargetObjectSort = 5;
            mMYINFO.mSelectObjSort = 5;
            CInnerAuto::ClearMonster();
            return 0;
        }
    }
    else
    {
        if (CInnerAuto::SearchMonster())
        {
            dSearchTick = GetTickCount();
        }
        return 0;
    }
}
int CInnerAuto::GetTargetMonster()
{
    float tSpeed;
    float tECoord[3];
    float tResult[3];
    int i;
    MONSTER_INFO* v7;

    v7 = 0;
    if (!mGDATA.mZONE.mWORLD2.mCheckValidState)
    {
        return 0;
    }
    for (i = 0; i < mMaxNearMonster; ++i)
    {
        if (mNearMonster[i].bSomeValid)
        {
            mTargetObjIndex = mNearMonster[i].mIndex;
            if (mTargetObjIndex >= 0)
            {
                v7 = mMONSTER.Search(mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mMONSTER.mIndex);
                if (v7)
                {
                    if (mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mMONSTER.mAction.aSort)
                    {
                        if (mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mMONSTER.mAction.aSort != 12)
                        {
                            if (mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mCheckValidState)
                            {
                                if (v7->mType <= 3 && v7->mSpecialType <= 1)
                                {
                                    tECoord[0] = 0.0f;
                                    tECoord[1] = 0.0f;
                                    tECoord[2] = 0.0f;
                                    tResult[0] = 1.0f;
                                    tResult[1] = 0.0f;
                                    tResult[2] = 0.0f;
                                    tECoord[0] = mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mMONSTER.mAction.aLocation[0];
                                    tECoord[1] = mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mMONSTER.mAction.aLocation[1];
                                    tECoord[2] = mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mMONSTER.mAction.aLocation[2];
                                    tSpeed = mFACTOR.GetRunSpeed();
                                    mGDATA.mZONE.mWORLD2.Path(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation, tECoord, tSpeed, 0.033f, tResult);
                                    if (tResult[0] == tECoord[0] && tResult[2] == tECoord[2])
                                    {
                                        return mNearMonster[i].mIndex;
                                    }
                                }
                            }
                        }
                    }
                }
                CInnerAuto::SetTargetUnvalid0();
            }
        }
    }
    return -1;
}
BOOL CInnerAuto::SearchMonster()
{
    int i, j, k;
    float tECoord[3];
    float tResult[3];
    MONSTER_INFO* tMONSTER;
    float tDistance;
    float tSpeed;
    BOOL tIsDead;
    int tRadius;
    float bRadius;

    if (!mGDATA.mZONE.mWORLD2.mCheckValidState)
    {
        return 0;
    }
    CInnerAuto::ClearMonster();
    for (i = 0; i < mPLAY.MAX_MONSTER_OBJECT; ++i)
    {
        tMONSTER = mMONSTER.Search(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mIndex);
        if (!tMONSTER || !mPLAY.mMONSTER_OBJECT[i].mCheckValidState || !mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aSort || mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aSort == 12 || tMONSTER->mType > 3 || tMONSTER->mSpecialType > 1)
        {
            continue;
        }
        tECoord[0] = 0.0f;
        tECoord[1] = 0.0f;
        tECoord[2] = 0.0f;
        tResult[0] = 1.0f;
        tResult[1] = 0.0f;
        tResult[2] = 0.0f;
        tECoord[0] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[0];
        tECoord[1] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[1];
        tECoord[2] = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[2];
        tDistance = CInnerAuto::GetDiatenceFromMonster(mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation);
        if (mMYINFO.mAvatarInfo.aStandStillOrMovingHunt != 1)
        {
            tSpeed = mFACTOR.GetRunSpeed();
            mGDATA.mZONE.mWORLD2.Path(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation, tECoord, tSpeed, 0.033f, tResult);
            if (tResult[0] != tECoord[0] || tResult[2] != tECoord[2])
            {
                continue;
            }
        SET_MONSTER:
            if (mMaxNearMonster)
            {
                tIsDead = 1;
                tIsDead = mPLAY.mMONSTER_OBJECT[i].mCheckMonsterIsDead != 1;
                CInnerAuto::SwapMinDistenceMonster(i, tDistance, tIsDead);
            }
            else
            {
                mNearMonster[mMaxNearMonster].fDistance = tDistance;
                mNearMonster[mMaxNearMonster].mIndex = i;
                mNearMonster[mMaxNearMonster].bSomeValid = mPLAY.mMONSTER_OBJECT[i].mCheckMonsterIsDead != 1;
                mMaxNearMonster = 1;
            }
            continue;
        }
        if (CInnerAuto::GetWeponAttackKind(2))
        {
            if (mMYINFO.mAvatarInfo.aAutoSkillAttack[0][0])
            {
                tRadius = mFACTOR.GetAttackRadius(mMYINFO.mAvatarInfo.aAutoSkillAttack[0][0]);
            }
            else
            {
                tRadius = mFACTOR.GetAttackRadius(mMYINFO.mAvatarInfo.aAutoSkillAttack[1][0]);
            }
            bRadius = tRadius + mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mAttackRadius;
        }
        else
        {
            bRadius = mFACTOR.GetAttackRadius(mMYINFO.mAvatarInfo.aAutoSkillAttack[1][0]) + mPLAY.mMONSTER_OBJECT[mTargetObjIndex].mAttackRadius;
        }
        if (tDistance <= bRadius)
        {
            goto SET_MONSTER;
        }
    }
    return mMaxNearMonster != 0;
}
float CInnerAuto::GetDiatenceFromMonster(float tLocation[3])
{
    float tX, tY, tZ;
    float tX2, tZ2;
    float root;

    tX = tLocation[0] - mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
    tY = tLocation[1] - mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1];
    tZ = tLocation[2] - mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
    tX2 = pow(tX, 2);
    tZ2 = pow(tZ, 2);
    root = tX2 + tZ2;
    return sqrt(root);
}
void CInnerAuto::SwapMinDistenceMonster(int a2, float a3, int a4)
{
    int mIndex;
    BOOL tValid;
    float tDistance;
    int i;

    for (i = 0; i < mMaxNearMonster; ++i)
    {
        if (a3 < mNearMonster[i].fDistance)
        {
            mIndex = mNearMonster[i].mIndex;
            tValid = mNearMonster[i].bSomeValid;
            tDistance = mNearMonster[i].fDistance;
            mNearMonster[i].mIndex = a2;
            mNearMonster[i].fDistance = a3;
            mNearMonster[i].bSomeValid = a4;
            a2 = mIndex;
            a3 = tDistance;
            a4 = tValid;
        }
    }
    if (mMaxNearMonster < 15)
    {
        mNearMonster[mMaxNearMonster].mIndex = a2;
        mNearMonster[mMaxNearMonster].fDistance = a3;
        mNearMonster[mMaxNearMonster++].bSomeValid = a4;
    }
}
int CInnerAuto::GetWeponAttackKind(int tSort)
{
    ITEM_INFO* v2;

    v2 = mITEM.Search(mMYINFO.mAvatarInfo.aEquip[7][0]);
    if (tSort)
    {
        if (tSort == 1)
        {
            if (v2->iSort == 14 || v2->iSort == 17 || v2->iSort == 20)
            {
                return 1;
            }
        }
        else if (tSort == 2 && (v2->iSort == 15 || v2->iSort == 18 || v2->iSort == 21))
        {
            return 1;
        }
    }
    else if (v2->iSort == 13 || v2->iSort == 16 || v2->iSort == 19)
    {
        return 1;
    }
    return 0;
}
BOOL CInnerAuto::GetNearMonster()
{
    int tRadius;
    int i;
    int mIndex;
    MONSTER_INFO* v9;
    float tLocation[3];
    float tDistance;
    float fDistance;
    int tMonCount = 0;

    tRadius = mFACTOR.GetAttackRadius(mMYINFO.mAvatarInfo.aAutoSkillAttack[1][0]);
    for (i = 0; i < (int)mMaxNearMonster; ++i)
    {
        mIndex = mNearMonster[i].mIndex;
        if (mNearMonster[i].mIndex >= 0 && (v9 = mMONSTER.Search(mPLAY.mMONSTER_OBJECT[mIndex].mMONSTER.mIndex)) != 0 && mPLAY.mMONSTER_OBJECT[mIndex].mCheckValidState && mPLAY.mMONSTER_OBJECT[mIndex].mMONSTER.mAction.aSort && mPLAY.mMONSTER_OBJECT[mIndex].mMONSTER.mAction.aSort != 12 && v9->mType <= 3 && v9->mSpecialType <= 1)
        {
            tLocation[0] = 0.0;
            tLocation[1] = 0.0;
            tLocation[2] = 0.0;
            tLocation[0] = mPLAY.mMONSTER_OBJECT[mIndex].mMONSTER.mAction.aLocation[0];
            tLocation[1] = mPLAY.mMONSTER_OBJECT[mIndex].mMONSTER.mAction.aLocation[1];
            tLocation[2] = mPLAY.mMONSTER_OBJECT[mIndex].mMONSTER.mAction.aLocation[2];
            tDistance = CInnerAuto::GetDiatenceFromMonster(tLocation);
            fDistance = tRadius + mPLAY.mMONSTER_OBJECT[mIndex].mAttackRadius;
            if (tDistance <= fDistance)
            {
                ++tMonCount;
            }
            if (tMonCount >= mMYINFO.mAvatarInfo.aNumberOfMonsters)
            {
                return 1;
            }
        }
        else
        {
            CInnerAuto::SetTargetUnvalid(mIndex);
        }
    }
    return 0;
}
void CInnerAuto::SetTargetUnvalid(int mIndex)
{
    int i;

    for (i = 0; i < 15; ++i)
    {
        if (mNearMonster[i].mIndex == mIndex)
        {
            mNearMonster[i].bSomeValid = 0;
            mNearMonster[i].fDistance = 0.0;
            mNearMonster[i].mIndex = -1;
            mTargetObjIndex = -1;
            return;
        }
    }
}
BOOL CInnerAuto::MoveNoTarget()
{
    BOOL result;

    if (mWantToMove)
    {
        mMYINFO.A002_2(aActTargetLocation, 0, -1, 0, 0, 0, 0);
        if (aActTargetLocation[0] == mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] && aActTargetLocation[2] == mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2])
        {
            mWantToMove = 0;
            memset(aActTargetLocation, 0, sizeof(aActTargetLocation));
            bIsAction = 1;
            dActionTick = GetTickCount();
        }
        return 1;
    }
    else
    {
        if (!mCurActionSort || mCurActionSort != mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort)
        {
            mCurActionSort = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort;
            unk62 = GetTickCount();
        }
        if (GetTickCount() - mCurActionSortTick > 2000)
        {
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] == aActLocation[0] && mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] == aActLocation[2] && GetTickCount() - unk62 > 3000 && (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 2 || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 1 && (!CInnerAuto::GetIsTargetValid() || !mMYINFO.mSelectObjIndex)))
            {
                if (!CInnerAuto::SearchWall(aActTargetLocation))
                {
                    CInnerAuto::ClearMonster();
                    return 1;
                }
                mWantToMove = 1;
            }
            aActLocation[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
            aActLocation[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1];
            aActLocation[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
            mCurActionSortTick = GetTickCount();
        }
        return 0;
    }
}
int CInnerAuto::SearchWall(float tCoord[3])
{
    float tECoord[3];
    float tResult[3];
    int i;
    float tX, tZ;
    float tSpeed;

    tECoord[0] = 0.0f;
    tECoord[1] = 0.0f;
    tECoord[2] = 0.0f;
    tResult[0] = 0.0f;
    tResult[1] = 0.0f;
    tResult[2] = 0.0f;
    if (!mGDATA.mZONE.mWORLD2.mCheckValidState)
    {
        return 0;
    }
    for (i = 0; i < 8; ++i)
    {
        switch (i)
        {
        case 0:
            tX = 1.0f;
            tZ = 0.0f;
            break;
        case 1:
            tX = 1.0f;
            tZ = 1.0f;
            break;
        case 2:
            tX = 0.0f;
            tZ = 1.0f;
            break;
        case 3:
            tX = -1.0f;
            tZ = 1.0f;
            break;
        case 4:
            tX = -1.0f;
            tZ = 0.0f;
            break;
        case 5:
            tX = -1.0f;
            tZ = -1.0f;
            break;
        case 6:
            tX = 0.0f;
            tZ = -1.0f;
            break;
        case 7:
            tX = 1.0f;
            tZ = -1.0f;
            break;
        default:
            break;
        }
        tECoord[0] = tX * 10.0f + mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
        tECoord[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1];
        tECoord[2] = tZ * 10.0f + mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
        tSpeed = mFACTOR.GetRunSpeed();
        mGDATA.mZONE.mWORLD2.Path(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation, tECoord, tSpeed, 0.033f, tResult);
        if (tResult[0] == tECoord[0] && tResult[2] == tECoord[2])
        {
            tCoord[0] = tECoord[0];
            tCoord[1] = tECoord[1];
            tCoord[2] = tECoord[2];
            return 1;
        }
    }
    return 0;
}
BOOL CInnerAuto::GetIsTargetValid()
{
    int i;

    if (mMaxNearMonster >= 15)
    {
        return 0;
    }
    for (i = 0; i < (int)mMaxNearMonster; ++i)
    {
        if (mNearMonster[i].bSomeValid)
        {
            return 1;
        }
    }
    return 0;
}
void CInnerAuto::GetIsOn(int tIsTake)
{
    bTakeItem = tIsTake;
}
BOOL CInnerAuto::IsPriorityObtainItem(char* iName)
{
    for (int i = 0; i < 48; i++)
    {
        if (strcmp(mObtainItem[i], iName) == 0)
        {
            return TRUE;
        }
    }
    return FALSE;
}
BOOL CInnerAuto::IsPriorityLoseItem(char* iName)
{
    for (int i = 0; i < 48; i++)
    {
        if (strcmp(mLoseItem[i], iName) == 0)
        {
            return TRUE;
        }
    }
    return FALSE;
}
BOOL CInnerAuto::IsItemListExist(char* iName)
{
    if (mItemSetupTab == 1)
    {
        return CInnerAuto::IsPriorityObtainItem(iName);
    }
    else
    {
        return CInnerAuto::IsPriorityLoseItem(iName);
    }
    return FALSE;
}