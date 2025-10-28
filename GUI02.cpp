#include "gxdheader.h"

BASICUI mBASICUI;

BASICUI::BASICUI()
{
    mUseItemDisplayState = 1;
}

BOOL BASICUI::Init()
{
    int i;

    for (i = 0; i < 150; ++i)
    {
        mIsClick[i] = 0;
    }
    mMinimap = 1;
    mMinimapZoom = 0;
    mChatWindow = 1;
    mChatDisplay[0] = 1;
    mChatDisplay[1] = 1;
    mChatDisplay[2] = 1;
    mChatDisplay[3] = 1;
    mChatDisplay[4] = 1;
    mSelectChatIndex = 1;
    strcpy(mChatName, mMESSAGE.Return(95));
    mSysMessageNum = 0;
    mMaxSysMessageNum = 0;
    mSysMessageState = 0;
    mChatMessageNum = 0;
    mMaxChatMessageNum = 0;
    mChatState = 0;
    return 1;
}

void BASICUI::InitForEnterZone()
{
    const char* v1;
    int i;

    for (i = 0; i < 150; ++i)
        mIsClick[i] = 0;
    if (!mMYINFO.mPreviousZoneNumber)
    {
        mMinimap = 1;
        mMinimapZoom = 0;
        mChatWindow = 1;
        mChatDisplay[0] = 1;
        mChatDisplay[1] = 1;
        mChatDisplay[2] = 1;
        mChatDisplay[3] = 1;
        mChatDisplay[4] = 1;
        mSelectChatIndex = 1;
        v1 = mMESSAGE.Return(95);
        strcpy(mChatName, v1);
        mSysMessageNum = 0;
        mMaxSysMessageNum = 0;
        mSysMessageState = 0;
        mChatMessageNum = 0;
        mMaxChatMessageNum = 0;
        mChatState = 0;
    }
    mSysMessageState = 0;
    mChatState = 0;
    SetWindowTextA(mEDITBOX.mDATA[3], "");
    SetWindowTextA(mEDITBOX.mDATA[4], "");
}

void BASICUI::Draw(int uX, int uY)
{
    int tDataIndex;
    char mBuffer[1000];
    int i, j, k;
    int mX, mY;
    int sX, sY;
    int tX, tY;
    ITEM_INFO* tITEM;
    SKILL_INFO* tSKILL;

    if (mMAIN.mMainMode != 6 || mMAIN.mSubMode != 4)
    {
        return;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[93], 0, 0, uX, uY))
    {
        mPOINTER.Set(0);
    }
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[93], 0, 0);

    // Draw HP Bar
    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > 0)
    {
        tDataIndex = (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue * 41.0 / mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue) + 95;
        if (tDataIndex > 136)
        {
            tDataIndex = 136;
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 57, 8);
    }
    sprintf(mBuffer, "%d/%d", mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue, mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue);
    mUTIL.DrawFont2D(mBuffer, 207 - mUTIL.GetStringLength(mBuffer), 7, 1);
    // Draw MP Bar
    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue > 0)
    {
        tDataIndex = (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue * 41.0 / mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue) + 137;
        if (tDataIndex > 178)
        {
            tDataIndex = 178;
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 57, 22);
    }
    sprintf(mBuffer, "%d/%d", mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue, mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue);
    mUTIL.DrawFont2D(mBuffer, 207 - mUTIL.GetStringLength(mBuffer), 21, 1);

    // Draw Exp Bar
    int tHighExpCap;
    int tExp;
    if (mMYINFO.mAvatarInfo.aLevel2 >= 1)
    {
        tHighExpCap = mLEVEL.ReturnHighExpValue(mMYINFO.mAvatarInfo.aLevel2);
        tExp = mMYINFO.mAvatarInfo.aGeneralExperience2;
    }
    else
    {
        if (mMYINFO.mAvatarInfo.aLevel1 >= 145)
        {
            tHighExpCap = 2000000000 - mLEVEL.ReturnLevelFactor1(mMYINFO.mAvatarInfo.aLevel1);
        }
        else
        {
            tHighExpCap = mLEVEL.ReturnLevelFactor2(mMYINFO.mAvatarInfo.aLevel1) - mLEVEL.ReturnLevelFactor1(mMYINFO.mAvatarInfo.aLevel1);
        }
        tExp = mMYINFO.mAvatarInfo.aGeneralExperience1 - mLEVEL.ReturnLevelFactor1(mMYINFO.mAvatarInfo.aLevel1);
    }
    if (tExp > 0)
    {
        tDataIndex = (tExp * 41.0 / tHighExpCap) + 179;
        if (tDataIndex > 220)
        {
            tDataIndex = 220;
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 57, 36);
    }
    sprintf(mBuffer, "%.3f", tExp * 100.0 / tHighExpCap);
    mUTIL.DrawFont2D(mBuffer, 207 - mUTIL.GetStringLength(mBuffer), 35, 1);

    // Draw Rank Point Bar
    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aRankPoint > 0)
    {
        tDataIndex = (mPLAY.mAVATAR_OBJECT[0].mDATA.aRankPoint * 41.0 / 3000.0) + 3543;
        if (tDataIndex > 3584)
        {
            tDataIndex = 3584;
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 57, 50);
    }
    sprintf(mBuffer, "%d/%d", mPLAY.mAVATAR_OBJECT[0].mDATA.aRankPoint, 3000);
    mUTIL.DrawFont2D(mBuffer, 207 - mUTIL.GetStringLength(mBuffer), 49, 1);

    // Draw CP Counter
    mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[241]) - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3475]) - 1;
    mY = 3;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3475], mX, mY);
    sprintf(mBuffer, "%d", mMYINFO.mAvatarInfo.aKillOtherTribe);
    sY = mY + 5;
    sX = mX + 128;
    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 1);
    mY += GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3475]);

    // Draw Pet Counter
    float tGrowPercent;
    if (mMYINFO.mAvatarInfo.aEquip[8][0] > 0)
    {
        tITEM = mITEM.Search(mMYINFO.mAvatarInfo.aEquip[8][0]);
        if (tITEM)
        {
            if (tITEM->iSort != 28 && tITEM->iSort != 31 && tITEM->iSort != 32)
            {
                sX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[241]);
                mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1050]) - 1;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1050], mX, mY, uX, uY))
                {
                    mPOINTER.Set(0);
                }
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1050], mX, mY);
                if (mMYINFO.mAvatarInfo.aEquip[8][1] > 0)
                {
                    tDataIndex = (mMYINFO.mAvatarInfo.aEquip[8][1] * 42.0 / 100.0) + 1051;
                    if (tDataIndex > 1093)
                    {
                        tDataIndex = 1093;
                    }
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 82, mY + 5);
                }
                sprintf(mBuffer, "%d/100", mMYINFO.mAvatarInfo.aEquip[8][1]);
                sY = mY + 5;
                sX = mX + 168;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 1);

                tGrowPercent = mPET.ReturnGrowPercent(mMYINFO.mAvatarInfo.aEquip[8][0], mMYINFO.mAvatarInfo.aEquip[8][2]);
                if (mMYINFO.mAvatarInfo.aEquip[8][2] > 0)
                {
                    tDataIndex = (tGrowPercent * 42.0 / 100.0) + 1094;
                    if (tDataIndex > 1136)
                    {
                        tDataIndex = 1136;
                    }
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 82, mY + 18);
                }
                sprintf(mBuffer, "%.3f", tGrowPercent);
                sY = mY + 18;
                sX = mX + 168;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 1);
                mY += GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1050]);
            }
        }
    }

    // Draw Mount Counter
    int tMountSort;
    int tFeed = 0;
    int tMountExp = 0;
    float tMountExpPercent = 0;
    if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10 && mMYINFO.mAvatarInfo.aAnimalIndex < 20)
    {
        tMountSort = mUTIL.ReturnMountSort(mMYINFO.mAvatarInfo.aAnimal[mMYINFO.mAvatarInfo.aAnimalIndex - 10]) == 30;
        mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[241]) - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3592]) - 1;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3592], mX, mY, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3592], mX, mY);
        if (!tMountSort)
        {
            mUTIL.ReturnMountExp(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex - 10], &tFeed, &tMountExp);
        }
        if (tFeed > 0)
        {
            tDataIndex = (tFeed * 42.0 / 100.0) + 1051;
            if (tDataIndex > 1093)
            {
                tDataIndex = 1093;
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 82, mY + 5);
        }
        sprintf(mBuffer, "%d/100", tFeed);
        sY = mY + 5;
        sX = mX + 168;
        mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 1);

        tMountExpPercent = tMountExp * 100.0 / 100000.0;
        if (tMountExp > 0)
        {
            tDataIndex = (tMountExpPercent * 42.0 / 100.0) + 1094;
            if (tDataIndex > 1136)
                tDataIndex = 1136;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 82, mY + 18);
        }
        sprintf(mBuffer, "%.3f", tMountExpPercent);
        sY = mY + 18;
        sX = mX + 168;
        mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 1);
        mY += GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3592]);
    }

    // Draw Secret Skills
    if (mMYINFO.mAvatarInfo.aSecretSkillState)
    {
        mX = mMYINFO.mScreenXSize / 2 + GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[350]) / 2 + 20;
        switch (mMYINFO.mAvatarInfo.aSecretSkillState)
        {
        case 91393:
        case 91397:
        case 91401:
            tDataIndex = 3930;
            break;
        case 91394:
        case 91398:
        case 91402:
            tDataIndex = 3933;
            break;
        case 91395:
        case 91399:
        case 91403:
            tDataIndex = 3936;
            break;
        case 91396:
        case 91400:
        case 91404:
            tDataIndex = 3939;
            break;
        }
        if (mMYINFO.mAvatarInfo.aSecretSkillCooldown > 0)
        {
            ++tDataIndex;
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX, 4);
        if (mMYINFO.mAvatarInfo.aSecretSkillCooldown > 0)
        {
            sprintf(mBuffer, "%02d%s", mMYINFO.mAvatarInfo.aSecretSkillCooldown, mMESSAGE.Return(859));
            mUTIL.DrawFont2D(mBuffer, GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]) / 2 + mX - mUTIL.GetStringLength(mBuffer) / 2, GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]) - 11, 1);
        }
    }
    mY += GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3657]);
    sX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[241]);
    uX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3660]) - 1;
    uY = mY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3660]) - 1;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3657], uX, uY);
    if (mMYINFO.mAvatarInfo.aFuryCount > 0 && !mMYINFO.mAvatarInfo.aFuryState)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[mMYINFO.mAvatarInfo.aFuryCount + 3657], uX, uY);
    }
    uY += GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3657]);


    // Draw Teacher Window
    if (strcmp(mMYINFO.mAvatarInfo.aTeacher, ""))
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1624], 0, 105, uX, uY))
        {
            mPOINTER.Set(0);
        }
        for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aName, mMYINFO.mAvatarInfo.aTeacher)); ++i)
            ;
        if (i == mPLAY.MAX_AVATAR_OBJECT)
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1626], 0, 105);
            strcpy(mBuffer, mMYINFO.mAvatarInfo.aTeacher);
            mUTIL.DrawFont2D(mBuffer, 69 - mUTIL.GetStringLength(mBuffer) / 2, 113, 1);
        }
        else
        {
            if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2 >= 1)
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2590], 0, 105);
            else
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1625], 0, 105);
            if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2 >= 1)
                sprintf(mBuffer, "%d", mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2);
            else
                sprintf(mBuffer, "%d", mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1 - 112);
            mUTIL.DrawFont2D(mBuffer, 13 - mUTIL.GetStringLength(mBuffer) / 2, 113, 31);

            strcpy(mBuffer, mPLAY.mAVATAR_OBJECT[i].mDATA.aName);
            mUTIL.DrawFont2D(mBuffer, 75 - mUTIL.GetStringLength(mBuffer) / 2, 113, 1);
            if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue > 0)
            {
                tDataIndex = (mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue * 36.0 / mPLAY.mAVATAR_OBJECT[i].mDATA.aMaxLifeValue) + 520;
                if (tDataIndex > 556)
                    tDataIndex = 556;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 5, 129);
            }
            if (mMYINFO.mTeacherStudentState == 1)
            {
                if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2 >= 1)
                {
                    if (mMYINFO.mAvatarInfo.aLevel2 >= mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2)
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1639], 0, 105);
                }
                else if (mMYINFO.mAvatarInfo.aLevel1 >= mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1)
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1639], 0, 105);
                }
            }
            if (mMYINFO.mTeacherStudentState == 2)
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3198], 0, 105);
        }
        if (mIsClick[0])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[396], 116, 105);
        else
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[395], 116, 105);
    }

    // Draw Student Window
    if (strcmp(mMYINFO.mAvatarInfo.aStudent, ""))
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1625], 0, 105, uX, uY))
            mPOINTER.Set(0);
        for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aName, mMYINFO.mAvatarInfo.aStudent)); ++i)
            ;
        if (i == mPLAY.MAX_AVATAR_OBJECT)
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1627], 0, 105);
            strcpy(mBuffer, mMYINFO.mAvatarInfo.aStudent);
            mUTIL.DrawFont2D(mBuffer, 69 - mUTIL.GetStringLength(mBuffer) / 2, 113, 1);
            sprintf(mBuffer, "%d", mMYINFO.mAvatarInfo.aTeacherPoint);
            mUTIL.DrawFont2D(mBuffer, 106 - mUTIL.GetStringLength(mBuffer), 139, 3);
        }
        else
        {
            if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2 >= 1)
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2590], 0, 105);
            }
            else if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1 >= 113)
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1625], 0, 105);
            }
            else
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1624], 0, 105);
            }
            if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2 >= 1)
            {
                sprintf(mBuffer, "%d", mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2);
            }
            else if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1 >= 113)
            {
                sprintf(mBuffer, "%d", mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1 - 112);
            }
            else
            {
                sprintf(mBuffer, "%d", mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1);
            }
            mUTIL.DrawFont2D(mBuffer, 13 - mUTIL.GetStringLength(mBuffer) / 2, 113, 31);
            strcpy(mBuffer, mPLAY.mAVATAR_OBJECT[i].mDATA.aName);
            mUTIL.DrawFont2D(mBuffer, 75 - mUTIL.GetStringLength(mBuffer) / 2, 113, 1);
            if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue > 0)
            {
                tDataIndex = (mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue * 36.0 / mPLAY.mAVATAR_OBJECT[i].mDATA.aMaxLifeValue) + 520;
                if (tDataIndex > 556)
                    tDataIndex = 556;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 5, 129);
            }
            sprintf(mBuffer, "%d", mMYINFO.mAvatarInfo.aTeacherPoint);
            mUTIL.DrawFont2D(mBuffer, 106 - mUTIL.GetStringLength(mBuffer), 139, 3);
            if (mMYINFO.mTeacherStudentState == 1)
            {
                if (mMYINFO.mAvatarInfo.aLevel2 >= 1)
                {
                    if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2 >= mMYINFO.mAvatarInfo.aLevel2)
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1639], 0, 105);
                }
                else if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1 >= mMYINFO.mAvatarInfo.aLevel1)
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1639], 0, 105);
                }
            }
            if (mMYINFO.mTeacherStudentState == 2)
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3198], 0, 105);
        }
        if (mIsClick[0])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[396], 116, 105);
        else
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[395], 116, 105);
    }

    // Draw Party Window
    if (strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
    {
        for (i = 0; i < 5 && strcmp(mMYINFO.mPartyInfo[i], ""); ++i)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[393], 0, 50 * i + 155, uX, uY))
            {
                mPOINTER.Set(0);
            }
            for (j = 0; j < mPLAY.MAX_AVATAR_OBJECT && strcmp(mPLAY.mAVATAR_OBJECT[j].mDATA.aName, mMYINFO.mPartyInfo[i]); ++j)
                ;
            if (j == mPLAY.MAX_AVATAR_OBJECT)
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[394], 0, 50 * i + 155);
                strcpy(mBuffer, mMYINFO.mPartyInfo[i]);
                sY = 50 * i + 162;
                mUTIL.DrawFont2D(mBuffer, 69 - mUTIL.GetStringLength(mBuffer) / 2, sY, 1);
            }
            else
            {
                if (mPLAY.mAVATAR_OBJECT[j].mDATA.aLevel2 >= 1)
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2975], 0, 50 * i + 155);
                }
                else if (mPLAY.mAVATAR_OBJECT[j].mDATA.aLevel1 >= 113)
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1043], 0, 50 * i + 155);
                }
                else
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[393], 0, 50 * i + 155);
                }
                if (mPLAY.mAVATAR_OBJECT[j].mDATA.aLevel2 >= 1)
                {
                    sprintf(mBuffer, "%d", mPLAY.mAVATAR_OBJECT[j].mDATA.aLevel2);
                }
                else if (mPLAY.mAVATAR_OBJECT[j].mDATA.aLevel1 >= 113)
                {
                    sprintf(mBuffer, "%d", mPLAY.mAVATAR_OBJECT[j].mDATA.aLevel1 - 112);
                }
                else
                {
                    sprintf(mBuffer, "%d", mPLAY.mAVATAR_OBJECT[j].mDATA.aLevel1);
                }
                sY = 50 * i + 161;
                mUTIL.DrawFont2D(mBuffer, 13 - mUTIL.GetStringLength(mBuffer) / 2, sY, 35);
                strcpy(mBuffer, mPLAY.mAVATAR_OBJECT[j].mDATA.aName);
                sY = 50 * i + 162;
                mUTIL.DrawFont2D(mBuffer, 75 - mUTIL.GetStringLength(mBuffer) / 2, sY, 1);
                if (mPLAY.mAVATAR_OBJECT[j].mDATA.aLifeValue > 0)
                {
                    tDataIndex = (mPLAY.mAVATAR_OBJECT[j].mDATA.aLifeValue * 36.0 / mPLAY.mAVATAR_OBJECT[j].mDATA.aMaxLifeValue) + 520;
                    if (tDataIndex > 556)
                        tDataIndex = 556;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 5, 50 * i + 180);
                }
                if (mPLAY.mAVATAR_OBJECT[j].mDATA.aManaValue > 0)
                {
                    tDataIndex = (mPLAY.mAVATAR_OBJECT[j].mDATA.aManaValue * 36.0 / mPLAY.mAVATAR_OBJECT[j].mDATA.aMaxManaValue) + 557;
                    if (tDataIndex > 593)
                        tDataIndex = 593;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 5, 50 * i + 191);
                }
            }
            if (!strcmp(mMYINFO.mAvatarInfo.aPartyName, mMYINFO.mAvatarInfo.aName) && i > 0)
            {
                if (mIsClick[i])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[396], 116, 50 * i + 155);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[395], 116, 50 * i + 155);
            }
        }
    }

    // Draw Icons
    int tPosCounter = 0;
    int tTower1 = 0;
    int tTower2 = 0;
    int tStartPos = 220;

    // Draw Tower
    for (k = 0; k < 3; ++k)
    {
        tTower1 = mTOWERBUILDUI.mTower[3 * mMYINFO.mAvatarInfo.aTribe + k] % 100;
        tTower2 = mTOWERBUILDUI.mTower[3 * mMYINFO.mAvatarInfo.aTribe + k] / 100;
        if (tTower1 == 1 && (tTower2 == 2 || tTower2 == 4 || tTower2 == 6 || tTower2 == 8 || tTower2 == 3 || tTower2 == 5 || tTower2 == 7))
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3734], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
                mPOINTER.Set(0);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3734], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            tPosCounter++;
        }
        if (tTower1 == 2 && (tTower2 == 2 || tTower2 == 4 || tTower2 == 6 || tTower2 == 8 || tTower2 == 3 || tTower2 == 5 || tTower2 == 7))
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3736], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
                mPOINTER.Set(0);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3736], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            tPosCounter++;
        }
        if (tTower1 == 3 && (tTower2 == 2 || tTower2 == 4 || tTower2 == 6 || tTower2 == 8 || tTower2 == 3 || tTower2 == 5 || tTower2 == 7))
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3738], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
                mPOINTER.Set(0);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3738], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            tPosCounter++;
        }
    }

    // Draw Tribe Abilities
    switch (mPLAY.mWorldInfo.mTribeMasterCallAbility[mMYINFO.mAvatarInfo.aTribe])
    {
    case 1:
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2819], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2819], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
        break;
    case 2:
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2820], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2820], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
        break;
    case 3:
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2821], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2821], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
        break;
    case 4:
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2822], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2822], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
        break;
    }

    // Draw Tribe Role Buff
    if (mMYINFO.mAvatarInfo.aTribe == mPLAY.mWorldInfo.mZone038WinTribe || mMYINFO.mAvatarInfo.aTribe == mPLAY.ReturnAlliance(mPLAY.mWorldInfo.mZone038WinTribe))
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[869], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[869], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        sprintf(mBuffer, "%d%%", 10);
        mUTIL.DrawFont2D(mBuffer, tStartPos + 28 * (tPosCounter % 7) + 3, 28 * (tPosCounter / 7) + 17, 3);
        tPosCounter++;
    }
    if (mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) == 1)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3989], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3989], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
    }
    else if (mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) == 2)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3991], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3991], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
    }

    // Draw Tevushi
    if (mMYINFO.mAvatarInfo.aTevushiRoad % 10000 > 0)
    {
        if (mMYINFO.mAvatarInfo.aTevushiRoad / 10000)
        {
            switch (mMYINFO.mAvatarInfo.aTevushiRoad / 10000)
            {
            case 1:
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4165], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
                    mPOINTER.Set(0);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4165], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
                break;
            case 2:
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4166], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
                    mPOINTER.Set(0);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4166], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
                break;
            case 3:
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4167], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
                    mPOINTER.Set(0);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4167], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
                break;
            }
        }
        else
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4164], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
                mPOINTER.Set(0);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4164], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        }
        tPosCounter++;
    }

    // Draw Cape Ability Icon
    if (mUTIL.ReturnItemSort2(mMYINFO.mAvatarInfo.aEquip[1][0]) == 8)
    {
        switch (10 * (mUTIL.ReturnIUValue(mMYINFO.mAvatarInfo.aEquip[1][2]) / 10))
        {
        case 20:
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4191], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
            {
                mPOINTER.Set(0);
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4191], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            tPosCounter++;
            break;
        case 30:
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4192], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
            {
                mPOINTER.Set(0);
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4192], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            tPosCounter++;
            break;
        case 40:
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4194], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
            {
                mPOINTER.Set(0);
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4194], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            tPosCounter++;
            break;
        case 50:
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4193], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
            {
                mPOINTER.Set(0);
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4193], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            tPosCounter++;
            break;
        }
    }
    else if (mUTIL.ReturnItemSort2(mMYINFO.mAvatarInfo.aEquip[1][0]) == 9)
    {
        switch (10 * (mUTIL.Return4thValue(mMYINFO.mAvatarInfo.aEquip[1][2]) / 10))
        {
        case 20:
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4191], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
            {
                mPOINTER.Set(0);
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4191], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            tPosCounter++;
            break;
        case 30:
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4192], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
            {
                mPOINTER.Set(0);
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4192], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            tPosCounter++;
            break;
        case 40:
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4194], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
            {
                mPOINTER.Set(0);
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4194], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            tPosCounter++;
            break;
        case 50:
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4193], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
            {
                mPOINTER.Set(0);
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4193], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            tPosCounter++;
            break;
        }
    }

    // Draw Vigilante Scroll
    if (mMYINFO.mAvatarInfo.aVigilanteScroll > 0)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4119], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4119], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
    }

    // Draw Dmg Up Down Stone
    if (mMYINFO.mPresentZoneNumber != 297 && mMYINFO.mPresentZoneNumber != 298 && mMYINFO.mPresentZoneNumber != 299)
    {
        if (mPLAY.ReturnDamageUpForTribeSymbol(mMYINFO.mAvatarInfo.aTribe) > 0)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[870], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
            {
                mPOINTER.Set(0);
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[870], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            sprintf(mBuffer, "%d", mPLAY.ReturnTribeSymbolCount(mMYINFO.mAvatarInfo.aTribe));
            mUTIL.DrawFont2D(mBuffer, tStartPos + 28 * (tPosCounter % 7) + 10, 28 * (tPosCounter / 7) + 17, 3);
            tPosCounter++;
        }
        if (mPLAY.ReturnDamageDownForTribeSymbol(mMYINFO.mAvatarInfo.aTribe) < 0)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[871], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
            {
                mPOINTER.Set(0);
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[871], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            sprintf(mBuffer, "%d%%", mPLAY.ReturnDamageDownForTribeSymbol(mMYINFO.mAvatarInfo.aTribe));
            mUTIL.DrawFont2D(mBuffer, tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 17, 2);
            tPosCounter++;
        }
    }

    // Draw Proving Grounds
    if (mPLAY.mWorldInfo.mProvingGroundsPoint[mMYINFO.mAvatarInfo.aTribe] > 0)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3749], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3749], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        sprintf(mBuffer, "%d", mPLAY.mWorldInfo.mProvingGroundsPoint[mMYINFO.mAvatarInfo.aTribe]);
        mUTIL.DrawFont2D(mBuffer, tStartPos + 28 * (tPosCounter % 7) + 10, 28 * (tPosCounter / 7) + 17, 3);
        tPosCounter++;
    }
    if (mPLAY.mWorldInfo.mTribeGeneralExperienceUpRatioInfo[mMYINFO.mAvatarInfo.aTribe] > 0.0)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[873], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[873], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
    }
    if (mPLAY.mWorldInfo.mTribeItemDropUpRatioInfo[mMYINFO.mAvatarInfo.aTribe] > 0.0f)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[874], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[874], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
    }
    if (mPLAY.mWorldInfo.mTribeItemDropUpRatioForMyoungInfo[mMYINFO.mAvatarInfo.aTribe] > 0.0)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[875], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[875], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
    }
    if (mPLAY.mWorldInfo.mTribeKillOtherTribeAddValueInfo[mMYINFO.mAvatarInfo.aTribe] > 0)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[876], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[876], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
    }

    // Draw Buff Icons
    float tEffectValue;
    for (i = 0; i < 35; ++i)
    {
        if (mMYINFO.mAvatarEffectValue[i][0] >= 1 && (i < 19 || i > 28))
        {
            tEffectValue = (float)mMYINFO.mAvatarEffectValue[i][1] - (mAPP->hPresentElapsedSeconds - mMYINFO.mElementValue[i]);
            if ((int)tEffectValue > 10)
            {
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_BUFFICON[mMYINFO.mAvatarInfo.aPreviousTribe][i], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
                {
                    mPOINTER.Set(0);
                }
                GIMAGE2D::Display(&mGDATA.mUI_BUFFICON[mMYINFO.mAvatarInfo.aPreviousTribe][i], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            }
            if ((int)(mAPP->hPresentElapsedSeconds + mAPP->hPresentElapsedSeconds) % 2 == 1)
            {
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_BUFFICON[mMYINFO.mAvatarInfo.aPreviousTribe][i], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5, uX, uY))
                {
                    mPOINTER.Set(0);
                }
                GIMAGE2D::Display(&mGDATA.mUI_BUFFICON[mMYINFO.mAvatarInfo.aPreviousTribe][i], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            }
            tPosCounter++;
            continue;
        }
    }

    // Display Time Effeect
    if (mMYINFO.mAvatarInfo.aTimeEffect > 0)
    {
        if (mMYINFO.mAvatarInfo.aTimeEffect == 5)
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3651], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            tPosCounter++;
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[mMYINFO.mAvatarInfo.aTimeEffect + 3268], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
            tPosCounter++;
        }
    }

    // Display More Icons
    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildBuff == 1 && mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort >= 0 && mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort <= 4)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort + 3296], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
    }
    if (mMYINFO.mAvatarInfo.aRankAbility > 0)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[mMYINFO.mAvatarInfo.aRankAbility + 3527], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
    }
    if (mMYINFO.mAvatarInfo.aFuryState == 1)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3601], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
    }
    if (mMYINFO.mAvatarInfo.aRebirth > 0 && mMYINFO.mAvatarInfo.aRebirth < 13)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3224], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
    }
    if (mMYINFO.mAvatarInfo.aRebirth > 6 && mMYINFO.mAvatarInfo.aRebirth < 13)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3225], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
    }
    if (mMYINFO.mAvatarInfo.aDiamondPill > 0 && mMYINFO.mAvatarInfo.aDiamondPill < 13)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3839], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
    }
    if (mMYINFO.mAvatarInfo.aNewSkillsState > 0)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3928], tStartPos + 28 * (tPosCounter % 7), 28 * (tPosCounter / 7) + 5);
        tPosCounter++;
    }

    if (mUseItemDisplayState == 1)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3054], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55, uX, uY))
        {
            if (mIsClick[46] == 1)
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3056], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55);
            else
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3055], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3054], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55);
        }
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3051], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55, uX, uY))
    {
        if (mIsClick[46] == 1)
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3053], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55);
        else
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3052], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3051], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55);
    }


    if (mMYINFO.mPresentZoneNumber == 319 || mMYINFO.mPresentZoneNumber == 320 || mMYINFO.mPresentZoneNumber == 321 || mMYINFO.mPresentZoneNumber == 322 || mMYINFO.mPresentZoneNumber == 323)
    {
        if (mMYINFO.mCheckLevelBattle319TypeInfo)
        {
            sX = mMYINFO.mScreenXSize / 2;
            mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2703]) / 2;
            mY = 80;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2703], mX, mY);
            for (i = 0; i < 4; ++i)
            {
                tDataIndex = mMYINFO.mLevelBattle319TypeInfo[i] % 1000 / 100 + 2117;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 104 * i + 32, mY + 28);
                tDataIndex = mMYINFO.mLevelBattle319TypeInfo[i] % 100 / 10 + 2117;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 104 * i + 57, mY + 28);
                tDataIndex = mMYINFO.mLevelBattle319TypeInfo[i] % 10 + 2117;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 104 * i + 82, mY + 28);
            }
            if (mMYINFO.mShowTop4Rank)
            {
                mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3799]);
                mY = 191;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3799], mX, mY);
                for (i = 0; i < 3 && mMYINFO.mZone319TypeTop20RankScore[i]; ++i)
                {
                    sprintf(mBuffer, "%s", mMESSAGE.Return(mMYINFO.mZone319TypeTop20RankTribe[i] + 1112));
                    sY = mY + 42 * i + 79;
                    sX = mX + 61;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
                    sprintf(mBuffer, "%s", mMYINFO.mZone319TypeTop20RankName[i]);
                    sY = mY + 42 * i + 79;
                    sX = mX + 163;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
                    sprintf(mBuffer, "%d", mMYINFO.mZone319TypeTop20RankScore[i]);
                    sY = mY + 42 * i + 79;
                    sX = mX + 241;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
                }
            }
            else
            {
                mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3802]);
                mY = 191;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3802], mX, mY);
            }
        }
        if (mMYINFO.mCheck319TypeTop20RankState)
        {
            mX = 137;
            mY = 162;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3800], mX, mY);
            for (i = 0; i < 10 && mMYINFO.mZone319TypeTop20RankScore[i]; ++i)
            {
                sprintf(mBuffer, "%d", mMYINFO.mZone319TypeLineUpRank[i]);
                sY = mY + 33 * i + 92;
                sX = mX + 28;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
                sprintf(mBuffer, "%s", mMESSAGE.Return(mMYINFO.mZone319TypeTop20RankTribe[i] + 1112));
                sY = mY + 33 * i + 92;
                sX = mX + 100;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
                sprintf(mBuffer, "%s", mMYINFO.mZone319TypeTop20RankName[i]);
                sY = mY + 33 * i + 92;
                sX = mX + 218;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
                sprintf(mBuffer, "%d", mMYINFO.mZone319TypeTop20RankScore[i]);
                sY = mY + 33 * i + 92;
                sX = mX + 322;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
            }
            for (i = 10; i < 20 && mMYINFO.mZone319TypeTop20RankScore[i]; ++i)
            {
                sprintf(mBuffer, "%d", mMYINFO.mZone319TypeLineUpRank[i]);
                sY = mY + 33 * (i % 10) + 92;
                sX = mX + 401;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
                sprintf(mBuffer, "%s", mMESSAGE.Return(mMYINFO.mZone319TypeTop20RankTribe[i] + 1112));
                sY = mY + 33 * (i % 10) + 92;
                sX = mX + 473;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
                sprintf(mBuffer, "%s", mMYINFO.mZone319TypeTop20RankName[i]);
                sY = mY + 33 * (i % 10) + 92;
                sX = mX + 591;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
                sprintf(mBuffer, "%d", mMYINFO.mZone319TypeTop20RankScore[i]);
                sY = mY + 33 * (i % 10) + 92;
                sX = mX + 695;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
            }
        }
    }
    if (mMYINFO.mPresentZoneNumber == 324)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2703]) / 2;
        mY = 80;
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4121], mX, mY);
        for (i = 0; i < 4; ++i)
        {
            tDataIndex = mMYINFO.unk_CD8C[i] % 1000 / 100 + 2117;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 104 * i + 32, mY + 28);
            tDataIndex = mMYINFO.unk_CD8C[i] % 100 / 10 + 2117;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 104 * i + 57, mY + 28);
            tDataIndex = mMYINFO.unk_CD8C[i] % 10 + 2117;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 104 * i + 82, mY + 28);
        }
    }

    // Display Used Items
    int tValue;
    char itoabuf[100];
    char form[100];
    if (mUseItemDisplayState == 1)
    {
        sX = mMYINFO.mScreenXSize - 5;
        sY = mMYINFO.mScreenYSize - 75;
        if (mMYINFO.mAvatarInfo.aExpandInventoryDate > 0)
        {
            ZeroMemory(&itoabuf, sizeof(itoabuf));
            ZeroMemory(&form, sizeof(form));
            _itoa(mMYINFO.mAvatarInfo.aExpandInventoryDate, itoabuf, 10);
            form[0] = itoabuf[0];
            form[1] = itoabuf[1];
            form[2] = itoabuf[2];
            form[3] = itoabuf[3];
            form[4] = '.';
            form[5] = itoabuf[4];
            form[6] = itoabuf[5];
            form[7] = '.';
            form[8] = itoabuf[6];
            form[9] = itoabuf[7];
            form[10] = '\n';
            sprintf(mBuffer, "%s %s", mMESSAGE.Return(81), form);
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aExpandStoreDate > 0)
        {
            ZeroMemory(&itoabuf, sizeof(itoabuf));
            ZeroMemory(&form, sizeof(form));
            _itoa(mMYINFO.mAvatarInfo.aExpandStoreDate, itoabuf, 10);
            form[0] = itoabuf[0];
            form[1] = itoabuf[1];
            form[2] = itoabuf[2];
            form[3] = itoabuf[3];
            form[4] = '.';
            form[5] = itoabuf[4];
            form[6] = itoabuf[5];
            form[7] = '.';
            form[8] = itoabuf[6];
            form[9] = itoabuf[7];
            form[10] = '\n';
            sprintf(mBuffer, "%s %s", mMESSAGE.Return(82), form);
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aSearchAndBuyDate > 0)
        {
            ZeroMemory(&itoabuf, sizeof(itoabuf));
            ZeroMemory(&form, sizeof(form));
            _itoa(mMYINFO.mAvatarInfo.aSearchAndBuyDate, itoabuf, 10);
            form[0] = itoabuf[0];
            form[1] = itoabuf[1];
            form[2] = itoabuf[2];
            form[3] = itoabuf[3];
            form[4] = '.';
            form[5] = itoabuf[4];
            form[6] = itoabuf[5];
            form[7] = '.';
            form[8] = itoabuf[6];
            form[9] = itoabuf[7];
            form[10] = '\n';
            sprintf(mBuffer, "%s %s", mMESSAGE.Return(1311), form);
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aAutoBuffScroll > 0)
        {
            ZeroMemory(&itoabuf, sizeof(itoabuf));
            ZeroMemory(&form, sizeof(form));
            _itoa(mMYINFO.mAvatarInfo.aAutoBuffScroll, itoabuf, 10);
            form[0] = itoabuf[0];
            form[1] = itoabuf[1];
            form[2] = itoabuf[2];
            form[3] = itoabuf[3];
            form[4] = '.';
            form[5] = itoabuf[4];
            form[6] = itoabuf[5];
            form[7] = '.';
            form[8] = itoabuf[6];
            form[9] = itoabuf[7];
            form[10] = '\n';
            sprintf(mBuffer, "%s %s", mMESSAGE.Return(1648), form);
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        for (i = 0; i < 10; ++i)
        {
            if (mMYINFO.mAvatarInfo.aTimedCostumeInventory[i] > 0)
            {
                ZeroMemory(&itoabuf, sizeof(itoabuf));
                ZeroMemory(&form, sizeof(form));
                _itoa(mMYINFO.mAvatarInfo.aTimedCostumeInventory[i], itoabuf, 10);
                form[0] = itoabuf[0];
                form[1] = itoabuf[1];
                form[2] = itoabuf[2];
                form[3] = itoabuf[3];
                form[4] = '.';
                form[5] = itoabuf[4];
                form[6] = itoabuf[5];
                form[7] = '.';
                form[8] = itoabuf[6];
                form[9] = itoabuf[7];
                form[10] = '\n';
                sprintf(mBuffer, "%s %s", mMESSAGE.Return(i + 1878), form);
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
                sY -= 15;
            }
        }
        if (mMYINFO.mAvatarInfo.aDoubleExpTime1 > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aDoubleExpTime1;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(84), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aDoubleExpTime2 > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aDoubleExpTime2;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(85), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aExpPill > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aExpPill;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1425), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aDoubleKillNumTime > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aDoubleKillNumTime;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(86), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aExtinctionScroll > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aExtinctionScroll;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1136), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aDoubleKillExpTime > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aDoubleKillExpTime;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(87), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aProtectForDeath > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aProtectForDeath;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(88), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aProtectForDestroy > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aProtectForDestroy;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(89), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aUnsealCharm > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aUnsealCharm;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2655), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aCPProtectionCharm > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aCPProtectionCharm;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1182), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aZone101TypeTime > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aZone101TypeTime;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(90), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aZone125TypeTime > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aZone125TypeTime;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(91), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aZone126TypeTime > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aZone126TypeTime;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(92), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aNineTowerKeyNum > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aNineTowerKeyNum;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(93), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aLifePotionConvertNum > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aLifePotionConvertNum;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(741), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aChiPotionConvertNum > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aChiPotionConvertNum;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(742), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aAnimalTime > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aAnimalTime;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(919), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aLuckyDrop > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aLuckyDrop;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(985), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aLuckyUpgrade > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aLuckyUpgrade;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(986), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aLuckyCombine > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aLuckyCombine;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(987), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.iSilverOrnamentRemainsTime > 0)
        {
            tValue = mMYINFO.mAvatarInfo.iSilverOrnamentRemainsTime;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1197), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.iGoldOrnamentRemainsTime > 0)
        {
            tValue = mMYINFO.mAvatarInfo.iGoldOrnamentRemainsTime;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1287), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aIslandOfBloodTime > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aIslandOfBloodTime;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1198), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aIslandOfSoul1Time > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aIslandOfSoul1Time;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1199), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aIslandOfSoul2Time > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aIslandOfSoul2Time;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1200), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aIslandOfSoul3Time > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aIslandOfSoul3Time;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1201), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aIslandOfSoul4Time > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aIslandOfSoul4Time;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1202), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aIslandOfSoul5Time > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aIslandOfSoul5Time;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1203), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aIslandOfSoul6Time > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aIslandOfSoul6Time;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1204), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aLifeOrDeath > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aLifeOrDeath;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1239), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aUltimateTicket > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aUltimateTicket;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2559), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aDoubleIslandOfBloodTimeUse > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aDoubleIslandOfBloodTimeUse;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1292), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aSoulBoost > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aSoulBoost;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1293), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aDoubleBuffTime > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aDoubleBuffTime;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1393), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aFactionReturnScroll > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aFactionReturnScroll;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1439), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aPat_Exp_x2_Time > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aPat_Exp_x2_Time;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1440), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aPK > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aPK;
            sprintf(mBuffer, mMESSAGE.Return(2666), tValue);
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aHeavenlyWarTicket > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aHeavenlyWarTicket;
            sprintf(mBuffer, "%s %d %s", mMESSAGE.Return(2700), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aRegistration > 0)
        {
            ZeroMemory(&itoabuf, sizeof(itoabuf));
            ZeroMemory(&form, sizeof(form));
            _itoa(mMYINFO.mAvatarInfo.aRegistration, itoabuf, 10);
            form[0] = itoabuf[0];
            form[1] = itoabuf[1];
            form[2] = itoabuf[2];
            form[3] = itoabuf[3];
            form[4] = '.';
            form[5] = itoabuf[4];
            form[6] = itoabuf[5];
            form[7] = '.';
            form[8] = itoabuf[6];
            form[9] = itoabuf[7];
            form[10] = '\n';
            sprintf(mBuffer, "%s %s", mMESSAGE.Return(1345), form);
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aDamageBoostScroll > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aDamageBoostScroll;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1527), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aHealthBoostScroll > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aHealthBoostScroll;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1528), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aCriticalBoostScroll > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aCriticalBoostScroll;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1529), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aHeroPill > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aHeroPill;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2189), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aCitadelTicket > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aCitadelTicket;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2718), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aAutoHunt7Day > 0)
        {
            ZeroMemory(&itoabuf, sizeof(itoabuf));
            ZeroMemory(&form, sizeof(form));
            _itoa(mMYINFO.mAvatarInfo.aAutoHunt7Day, itoabuf, 10);
            form[0] = itoabuf[0];
            form[1] = itoabuf[1];
            form[2] = itoabuf[2];
            form[3] = itoabuf[3];
            form[4] = '.';
            form[5] = itoabuf[4];
            form[6] = itoabuf[5];
            form[7] = '.';
            form[8] = itoabuf[6];
            form[9] = itoabuf[7];
            form[10] = '\n';
            sprintf(mBuffer, "%s %s", mMESSAGE.Return(1890), form);
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aAutoHunt5Hour > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aAutoHunt5Hour;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1889), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aIvyHallTimeR12 > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aIvyHallTimeR12;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1898), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aPreventRefineBreak > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aPreventRefineBreak;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1902), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aCriticalBoostScroll > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aCriticalBoostScroll;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(1956), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aProxyShopTime > 0)
        {
            ZeroMemory(&itoabuf, sizeof(itoabuf));
            ZeroMemory(&form, sizeof(form));
            _itoa(mMYINFO.mAvatarInfo.aProxyShopTime, itoabuf, 10);
            form[0] = itoabuf[0];
            form[1] = itoabuf[1];
            form[2] = itoabuf[2];
            form[3] = itoabuf[3];
            form[4] = '.';
            form[5] = itoabuf[4];
            form[6] = itoabuf[5];
            form[7] = '.';
            form[8] = itoabuf[6];
            form[9] = itoabuf[7];
            form[10] = '\n';
            sprintf(mBuffer, "%s %s", mMESSAGE.Return(1895), form);
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aFactionNoticeScroll > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aFactionNoticeScroll;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2118), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aDoubleMountExpTime > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aDoubleMountExpTime;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2144), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aMountAbsorbTime > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aMountAbsorbTime;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2151), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aDoubleRageGain > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aDoubleRageGain;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2187), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aRageBurstPill > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aRageBurstPill;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2188), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aWarriorScroll > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aWarriorScroll;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2240), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aWingProtectionScroll > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aWingProtectionScroll;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2311), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aPreventImproveDown > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aPreventImproveDown;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2353), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aHeavenlyOrderCharm > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aHeavenlyOrderCharm;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2379), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aTheFortressTime > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aTheFortressTime;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2381), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mStatBalance > 0)
        {
            tValue = mMYINFO.mStatBalance;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2382), tValue, mMESSAGE.Return(80));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aPetInventoryDate > 0)
        {
            ZeroMemory(&itoabuf, sizeof(itoabuf));
            ZeroMemory(&form, sizeof(form));
            _itoa(mMYINFO.mAvatarInfo.aPetInventoryDate, itoabuf, 10);
            form[0] = itoabuf[0];
            form[1] = itoabuf[1];
            form[2] = itoabuf[2];
            form[3] = itoabuf[3];
            form[4] = '.';
            form[5] = itoabuf[4];
            form[6] = itoabuf[5];
            form[7] = '.';
            form[8] = itoabuf[6];
            form[9] = itoabuf[7];
            form[10] = '\n';
            sprintf(mBuffer, "%s %s", mMESSAGE.Return(2370), form);
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aLimitedDungeonTicket > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aLimitedDungeonTicket;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2395), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aPremiumService > 0)
        {
            ZeroMemory(&itoabuf, sizeof(itoabuf));
            ZeroMemory(&form, sizeof(form));
            _itoa(mMYINFO.mAvatarInfo.aPremiumService, itoabuf, 10);
            form[0] = itoabuf[0];
            form[1] = itoabuf[1];
            form[2] = itoabuf[2];
            form[3] = itoabuf[3];
            form[4] = '.';
            form[5] = itoabuf[4];
            form[6] = itoabuf[5];
            form[7] = '.';
            form[8] = itoabuf[6];
            form[9] = itoabuf[7];
            form[10] = '\n';
            sprintf(mBuffer, "%s %s", mMESSAGE.Return(2501), form);
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aCapsuleMallPoints > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aCapsuleMallPoints;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2527), tValue, mMESSAGE.Return(2830));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aTevushiRoad % 10000 > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aTevushiRoad % 10000;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2731), tValue, mMESSAGE.Return(1275));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aVigilanteScroll > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aVigilanteScroll;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2678), tValue, mMESSAGE.Return(1275));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
        if (mMYINFO.mAvatarInfo.aCapsuleOnlineTime > 0)
        {
            tValue = mMYINFO.mAvatarInfo.aCapsuleOnlineTime;
            sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2582), tValue, mMESSAGE.Return(79));
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            sY -= 15;
        }
		if (mMYINFO.mAvatarInfo.aDailyPVPCount > 0)
		{
			tValue = mMYINFO.mAvatarInfo.aDailyPVPCount;
			sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2918), tValue, mMESSAGE.Return(2921));
			mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
			sY -= 15;
		}
		if (mMYINFO.mAvatarInfo.aDailyPVMKillCount > 0)
		{
			tValue = mMYINFO.mAvatarInfo.aDailyPVMKillCount;
			sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2919), tValue, mMESSAGE.Return(2921));
			mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
			sY -= 15;
		}
		if (mMYINFO.mAvatarInfo.aDailyWarCount > 0)
		{
			tValue = mMYINFO.mAvatarInfo.aDailyWarCount;
			sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2920), tValue, mMESSAGE.Return(2922));
			mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
			sY -= 15;
		}
		if (mMYINFO.mAvatarInfo.aDailyOnlineTime > 0)
		{
			tValue = mMYINFO.mAvatarInfo.aDailyOnlineTime;
			sprintf(mBuffer, "%s %d%s", mMESSAGE.Return(2923), tValue, mMESSAGE.Return(79));
			mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
			sY -= 15;
		}
    }

    // Display Server Rates
    sX = mMYINFO.mScreenXSize - 5;
    sY = 190;
    if (!mMinimap)
    {
        sY = 55;
    }
    if (mMYINFO.mGeneralExperienceUpRatio > 1)
    {
        tValue = mMYINFO.mGeneralExperienceUpRatio;
        sprintf(mBuffer, mMESSAGE.Return(1724), tValue);
        mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
        sY += 15;
    }
    if (mMYINFO.mItemDropUpRatio > 1)
    {
        tValue = mMYINFO.mItemDropUpRatio;
        sprintf(mBuffer, mMESSAGE.Return(1725), tValue);
        mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
        sY += 15;
    }
    if (mMYINFO.mKillOtherTribeAddValue > 0)
    {
        tValue = mMYINFO.mKillOtherTribeAddValue;
        sprintf(mBuffer, mMESSAGE.Return(1726), tValue);
        mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
        sY += 15;
    }
    if (mMYINFO.mPvPDamageUpRatio > 10 && (mMYINFO.mPvPDamageUpTribe == mMYINFO.mAvatarInfo.aTribe || mMYINFO.mPvPDamageUpTribe == 4))
    {
        tValue = 10 * (mMYINFO.mPvPDamageUpRatio - 10);
        sprintf(mBuffer, mMESSAGE.Return(2271), tValue);
        mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
        sY += 15;
    }
    if (mMYINFO.mPvMDamageUpRatio > 10 && (mMYINFO.mPvMDamageUpTribe == mMYINFO.mAvatarInfo.aTribe || mMYINFO.mPvMDamageUpTribe == 4))
    {
        tValue = 10 * (mMYINFO.mPvMDamageUpRatio - 10);
        sprintf(mBuffer, mMESSAGE.Return(2272), tValue);
        mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
        sY += 15;
    }
    if (mMYINFO.mMaxPotionEventNum > 0 && (mMYINFO.mMaxPotionEventTribe == mMYINFO.mAvatarInfo.aTribe || mMYINFO.mMaxPotionEventTribe == 4))
    {
        tValue = 10 * mMYINFO.mMaxPotionEventNum;
        sprintf(mBuffer, mMESSAGE.Return(2273), tValue);
        mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
        sY += 15;
    }
	// Setăm sX și sY pentru colțul stânga sus
	sX = 5; // Aproape de marginea din stânga
	sY = 90; // Aproape de marginea de sus

	// Afișăm data și ora curentă
	time_t now = time(0);
	tm* localTime = localtime(&now);

	sprintf(mBuffer, "Server Time: %02d-%02d-%d %02d:%02d",
		localTime->tm_mday,
		localTime->tm_mon + 1,
		localTime->tm_year + 1900,
		localTime->tm_hour,
		localTime->tm_min);
	mUTIL.DrawFont2D(mBuffer, sX, sY, 3);

	// Mutăm sY mai jos pentru Ping
	sY += 15; // Distanță între rânduri

	// Afișăm Ping-ul sub data și ora
	sprintf(mBuffer, "Status: Ping %d ms", mMYINFO.mPing);
	mUTIL.DrawFont2D(mBuffer, sX, sY, 3);

    // Draw Minimap
    float mBoxMin0 = mGDATA.mZONE.mWORLD.mQuadtree->mBoxMin[0];
    float mBoxMax0 = mGDATA.mZONE.mWORLD.mQuadtree->mBoxMax[0];
    float mBoxMin2 = -mGDATA.mZONE.mWORLD.mQuadtree->mBoxMax[2];
    float mBoxMax2 = -mGDATA.mZONE.mWORLD.mQuadtree->mBoxMin[2];
    int tMinimapWidth = mGDATA.mZONE.mMINI_MAP[mMinimapZoom].mTextureInfo.Width;
    int tMinimapHeight = mGDATA.mZONE.mMINI_MAP[mMinimapZoom].mTextureInfo.Height;
    mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[241]);
    mY = 0;

    if (mMinimap == 1)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[241], mX, mY, uX, uY))
        {
            mPOINTER.Set(0);
        }
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[242], mX, mY, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mMinimap == 1)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[241], mX, mY);
        sX = mX + 10;
        tDataIndex = mMAIN.ReturnWorldNameImageForConnect(mMAIN.mWorldIndex);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX, 175);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[242], mX, mY);
        sX = mX + 10;
        tDataIndex = mMAIN.ReturnWorldNameImageForConnect(mMAIN.mWorldIndex);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX, 40);
    }
    strcpy(mBuffer, mZONENAME.Return(mMYINFO.mPresentZoneNumber));
    sY = mY + 5;
    sX = mX + 68;
    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 1);

    float tLocationX = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
    float tLocationZ = -mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
    if (mMYINFO.mPresentZoneNumber != 341)
    {
        sprintf(mBuffer, "%d , %d", (int)(tLocationX - mBoxMin0), (int)(tLocationZ - mBoxMin2));
        sY = mY + 25;
        sX = mX + 68;
        mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 1);
    }
    if (mMinimap == 1)
    {
        if (mIsClick[10])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[246], mX + 132, mY + 3);
        else
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[245], mX + 132, mY + 3);
    }
    else if (mIsClick[10])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[248], mX + 132, mY + 3);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[247], mX + 132, mY + 3);
    }

    int tFinalWidth;
    int tFinalHeight;
    int tXForNPC = 0;
    int tYForNPC = 0;
    int tXAddForNPC = 0;
    int tYAddForNPC = 0;
    if (mMinimap == 1)
    {
        switch (mMinimapZoom)
        {
        case 0:
            tLocationX = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
            tLocationZ = -mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
            sX = mX + 76;
            sY = mY + 106;
            tFinalWidth = (tMinimapWidth * (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] - mBoxMin0) / (mBoxMax0 - mBoxMin0)) - 72;
            if (tFinalWidth >= 0)
            {
                if (tFinalWidth > tMinimapWidth - 145)
                {
                    tXForNPC = tFinalWidth + tXForNPC - (tMinimapWidth - 145);
                    tFinalWidth = tMinimapWidth - 145;
                }
            }
            else
            {
                tXForNPC += tFinalWidth;
                tFinalWidth = 0;
            }
            tFinalHeight = (int)(tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) - 64;
            if (tFinalHeight >= 0)
            {
                if (tFinalHeight > tMinimapHeight - 128)
                {
                    tYForNPC = tFinalHeight + tYForNPC - (tMinimapHeight - 128);
                    tFinalHeight = tMinimapHeight - 128;
                }
            }
            else
            {
                tYForNPC += tFinalHeight;
                tFinalHeight = 0;
            }
            tXAddForNPC = tFinalWidth;
            tYAddForNPC = tFinalHeight;
            mGDATA.mZONE.mMINI_MAP[mMinimapZoom].Draw(mX + 4, mY + 42, 1, tFinalWidth, tFinalHeight, 145, 128);
            break;

        case 1:
            tLocationX = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
            tLocationZ = -mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
            sX = mX + 76;
            sY = mY + 106;
            tFinalWidth = (tMinimapWidth * (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] - mBoxMin0) / (mBoxMax0 - mBoxMin0)) - 72;
            if (tFinalWidth >= 0)
            {
                if (tFinalWidth > tMinimapWidth - 145)
                {
                    tXForNPC = tFinalWidth + tXForNPC - (tMinimapWidth - 145);
                    tFinalWidth = tMinimapWidth - 145;
                }
            }
            else
            {
                tXForNPC += tFinalWidth;
                tFinalWidth = 0;
            }
            tFinalHeight = (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) - 64;
            if (tFinalHeight >= 0)
            {
                if (tFinalHeight > tMinimapHeight - 128)
                {
                    tYForNPC = tFinalHeight + tYForNPC - (tMinimapHeight - 128);
                    tFinalHeight = tMinimapHeight - 128;
                }
            }
            else
            {
                tYForNPC += tFinalHeight;
                tFinalHeight = 0;
            }
            tXAddForNPC = tFinalWidth;
            tYAddForNPC = tFinalHeight;
            mGDATA.mZONE.mMINI_MAP[mMinimapZoom].Draw(mX + 4, mY + 42, 1, tFinalWidth, tFinalHeight, 145, 128);
            break;

        case 2:
            tLocationX = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
            tLocationZ = -mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
            tFinalWidth = mX + (tMinimapWidth * (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] - mBoxMin0) / (mBoxMax0 - mBoxMin0)) + 4;
            tFinalHeight = mY + (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) + 42;
            tXAddForNPC = 0;
            tYAddForNPC = 0;
            mGDATA.mZONE.mMINI_MAP[mMinimapZoom].Draw(mX + 4, mY + 42, 0, 0, 0, 0, 0);
            break;

        default:
            break;
        }

        // Draw NPC For Minimap
        for (i = 0; i < mPLAY.MAX_NPC_OBJECT; ++i)
        {
            if (mPLAY.mNPC_OBJECT[i].mCheckValidState && mPLAY.mNPC_OBJECT[i].mNPC_INFO->nType != 4)
            {
                switch (mMinimapZoom)
                {
                case 0:
                    tLocationX = mPLAY.mNPC_OBJECT[i].mLocation[0];
                    tLocationZ = -mPLAY.mNPC_OBJECT[i].mLocation[2];
                    tXForNPC = mX + (tMinimapWidth * (tLocationX - mBoxMin0) / (mBoxMax0 - mBoxMin0)) + 4 - tXAddForNPC;
                    tYForNPC = mY + (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) + 42 - tYAddForNPC;
                    if (tXForNPC >= mX + 4 && tXForNPC <= mX + 150 && tYForNPC >= mY + 42 && tYForNPC <= mY + 168)
                    {
                        switch (mPLAY.mNPC_OBJECT[i].mNPC_INFO->nTribe)
                        {
                        case 1: tDataIndex = 2349; break;
                        case 2: tDataIndex = 2352; break;
                        case 3: tDataIndex = 2355; break;
                        case 4: tDataIndex = 2358; break;
                        case 5: tDataIndex = 2361; break;
                        default: break;
                        }
                        sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]);
                        sY = tYForNPC - sY / 2;
                        sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]);
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], tXForNPC - sX / 2, sY);
                        if (mPLAY.mNPC_OBJECT[i].mNPC_INFO->nIndex == mMYINFO.ReturnQuestNextNPCNumber() && (int)(mAPP->hPresentElapsedSeconds) % 2 == 1)
                        {
                            sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2467]);
                            sY = tYForNPC - sY / 2;
                            sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2467]);
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2467], tXForNPC - sX / 2, sY);
                        }
                    }
                    break;

                case 1:
                    tLocationX = mPLAY.mNPC_OBJECT[i].mLocation[0];
                    tLocationZ = -mPLAY.mNPC_OBJECT[i].mLocation[2];
                    tXForNPC = mX + (tMinimapWidth * (tLocationX - mBoxMin0) / (mBoxMax0 - mBoxMin0)) + 4 - tXAddForNPC;
                    tYForNPC = mY + (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) + 42 - tYAddForNPC;
                    if (tXForNPC >= mX + 4 && tXForNPC <= mX + 150 && tYForNPC >= mY + 42 && tYForNPC <= mY + 168)
                    {
                        switch (mPLAY.mNPC_OBJECT[i].mNPC_INFO->nTribe)
                        {
                        case 1: tDataIndex = 2350; break;
                        case 2: tDataIndex = 2353; break;
                        case 3: tDataIndex = 2356; break;
                        case 4: tDataIndex = 2359; break;
                        case 5: tDataIndex = 2362; break;
                        default: break;
                        }
                        sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]);
                        sY = tYForNPC - sY / 2;
                        sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]);
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], tXForNPC - sX / 2, sY);
                        if (mPLAY.mNPC_OBJECT[i].mNPC_INFO->nIndex == mMYINFO.ReturnQuestNextNPCNumber() && (int)(mAPP->hPresentElapsedSeconds) % 2 == 1)
                        {
                            sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2468]);
                            sY = tYForNPC - sY / 2;
                            sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2468]);
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2468], tXForNPC - sX / 2, sY);
                        }
                    }
                    break;

                default:
                    break;
                }
            }
        }

        // Draw NPC Name for Minimap
        int tHoverOnNpc = 0;
        for (i = 0; i < mPLAY.MAX_NPC_OBJECT; ++i)
        {
            if (mPLAY.mNPC_OBJECT[i].mCheckValidState && mPLAY.mNPC_OBJECT[i].mNPC_INFO->nType != 4)
            {
                switch (mMinimapZoom)
                {
                case 0:
                    tLocationX = mPLAY.mNPC_OBJECT[i].mLocation[0];
                    tLocationZ = -mPLAY.mNPC_OBJECT[i].mLocation[2];
                    tXForNPC = mX + (tMinimapWidth * (tLocationX - mBoxMin0) / (mBoxMax0 - mBoxMin0)) + 4 - tXAddForNPC;
                    tYForNPC = mY + (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) + 42 - tYAddForNPC;
                    if (tXForNPC >= mX + 4 && tXForNPC <= mX + 150 && tYForNPC >= mY + 42 && tYForNPC <= mY + 168)
                    {
                        switch (mPLAY.mNPC_OBJECT[i].mNPC_INFO->nTribe)
                        {
                        case 1: tDataIndex = 2349; break;
                        case 2: tDataIndex = 2352; break;
                        case 3: tDataIndex = 2355; break;
                        case 4: tDataIndex = 2358; break;
                        case 5: tDataIndex = 2361; break;
                        default: break;
                        }
                        if (!tHoverOnNpc)
                        {
                            sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]);
                            sY = tYForNPC - sY / 2;
                            sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]);
                            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[tDataIndex], tXForNPC - sX / 2, sY, uX, uY))
                            {
                                tHoverOnNpc = 1;
                                sprintf(mBuffer, "%s", mPLAY.mNPC_OBJECT[i].mNPC_INFO->nName);
                                sY = tYForNPC - 15;
                                sX = mUTIL.GetStringLength(mBuffer);
                                mUTIL.DrawFont2D(mBuffer, tXForNPC - sX / 2, sY, 1);
                            }
                        }
                        if (mPLAY.mNPC_OBJECT[i].mNPC_INFO->nIndex == mMYINFO.ReturnQuestNextNPCNumber())
                        {
                            sprintf(mBuffer, "%s", mPLAY.mNPC_OBJECT[i].mNPC_INFO->nName);
                            sY = tYForNPC - 15;
                            sX = mUTIL.GetStringLength(mBuffer);
                            mUTIL.DrawFont2D(mBuffer, tXForNPC - sX / 2, sY, 3);
                        }
                    }
                    break;

                case 1:
                    tLocationX = mPLAY.mNPC_OBJECT[i].mLocation[0];
                    tLocationZ = -mPLAY.mNPC_OBJECT[i].mLocation[2];
                    tXForNPC = mX + (tMinimapWidth * (tLocationX - mBoxMin0) / (mBoxMax0 - mBoxMin0)) + 4 - tXAddForNPC;
                    tYForNPC = mY + (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) + 42 - tYAddForNPC;
                    if (tXForNPC >= mX + 4 && tXForNPC <= mX + 150 && tYForNPC >= mY + 42 && tYForNPC <= mY + 168)
                    {
                        switch (mPLAY.mNPC_OBJECT[i].mNPC_INFO->nTribe)
                        {
                        case 1: tDataIndex = 2350; break;
                        case 2: tDataIndex = 2353; break;
                        case 3: tDataIndex = 2356; break;
                        case 4: tDataIndex = 2359; break;
                        case 5: tDataIndex = 2362; break;
                        default: break;
                        }
                        if (!tHoverOnNpc)
                        {
                            sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]);
                            sY = tYForNPC - sY / 2;
                            sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]);
                            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[tDataIndex], tXForNPC - sX / 2, sY, uX, uY))
                            {
                                tHoverOnNpc = 1;
                                sprintf(mBuffer, "%s", mPLAY.mNPC_OBJECT[i].mNPC_INFO->nName);
                                sY = tYForNPC - 15;
                                sX = mUTIL.GetStringLength(mBuffer);
                                mUTIL.DrawFont2D(mBuffer, tXForNPC - sX / 2, sY, 1);
                            }
                        }
                        if (mPLAY.mNPC_OBJECT[i].mNPC_INFO->nIndex == mMYINFO.ReturnQuestNextNPCNumber())
                        {
                            sprintf(mBuffer, "%s", mPLAY.mNPC_OBJECT[i].mNPC_INFO->nName);
                            sY = tYForNPC - 15;
                            sX = mUTIL.GetStringLength(mBuffer);
                            mUTIL.DrawFont2D(mBuffer, tXForNPC - sX / 2, sY, 3);
                        }
                    }
                    break;

                default:
                    break;
                }
            }
        }

        // Draw Monster For Minimap
        for (i = 0; i < mPLAY.MAX_MONSTER_OBJECT; ++i)
        {
            if (mPLAY.mMONSTER_OBJECT[i].mCheckValidState)
            {
                switch (mMinimapZoom)
                {
                case 0:
                    tLocationX = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[0];
                    tLocationZ = -mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[2];
                    tXForNPC = mX + (tMinimapWidth * (tLocationX - mBoxMin0) / (mBoxMax0 - mBoxMin0)) + 4 - tXAddForNPC;
                    tYForNPC = mY + (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) + 42 - tYAddForNPC;
                    if (tXForNPC >= mX + 4 && tXForNPC <= mX + 150 && tYForNPC >= mY + 42 && tYForNPC <= mY + 168 && !mUTIL.CheckMonsterForMe(&mPLAY.mMONSTER_OBJECT[i]))
                    {
                        sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2370]);
                        sY = tYForNPC - sY / 2;
                        sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2370]);
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2370], tXForNPC - sX / 2, sY);
                    }
                    break;

                case 1:
                    tLocationX = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[0];
                    tLocationZ = -mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[2];
                    tXForNPC = mX + (tMinimapWidth * (tLocationX - mBoxMin0) / (mBoxMax0 - mBoxMin0)) + 4 - tXAddForNPC;
                    tYForNPC = mY + (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) + 42 - tYAddForNPC;
                    if (tXForNPC >= mX + 4 && tXForNPC <= mX + 150 && tYForNPC >= mY + 42 && tYForNPC <= mY + 168 && !mUTIL.CheckMonsterForMe(&mPLAY.mMONSTER_OBJECT[i]))
                    {
                        sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2371]);
                        sY = tYForNPC - sY / 2;
                        sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2371]);
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2371], tXForNPC - sX / 2, sY);
                    }
                    break;

                default:
                    break;
                }
            }
        }

        // Draw Player For Minimap
        int tFinalPlayerWidth;
        int tFinalPlayerHeight;
        int tXForPlayer = 0;
        int tYForPlayer = 0;
        int tXAddForPlayer = 0;
        int tYAddForPlayer = 0;
        switch (mMinimapZoom)
        {
        case 0:
            tLocationX = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
            tLocationZ = -mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
            tXAddForPlayer = mX + 76;
            tYAddForPlayer = mY + 106;
            tFinalPlayerWidth = (tMinimapWidth * (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] - mBoxMin0) / (mBoxMax0 - mBoxMin0)) - 72;
            if (tFinalPlayerWidth >= 0)
            {
                if (tFinalPlayerWidth > tMinimapWidth - 145)
                {
                    tXAddForPlayer = tFinalPlayerWidth + tXAddForPlayer - (tMinimapWidth - 145);
                    tFinalPlayerWidth = tMinimapWidth - 145;
                }
            }
            else
            {
                tXAddForPlayer += tFinalPlayerWidth;
                tFinalPlayerWidth = 0;
            }
            tFinalPlayerHeight = (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) - 64;
            if (tFinalPlayerHeight >= 0)
            {
                if (tFinalPlayerHeight > tMinimapHeight - 128)
                {
                    tYAddForPlayer = tFinalPlayerHeight + tYAddForPlayer - (tMinimapHeight - 128);
                    tFinalPlayerHeight = tMinimapHeight - 128;
                }
            }
            else
            {
                tYAddForPlayer += tFinalPlayerHeight;
                tFinalPlayerHeight = 0;
            }
            break;

        case 1:
            tLocationX = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
            tLocationZ = -mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
            tXAddForPlayer = mX + 76;
            tYAddForPlayer = mY + 106;
            tFinalPlayerWidth = (tMinimapWidth * (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] - mBoxMin0) / (mBoxMax0 - mBoxMin0)) - 72;
            if (tFinalPlayerWidth >= 0)
            {
                if (tFinalPlayerWidth > tMinimapWidth - 145)
                {
                    tXAddForPlayer = tFinalPlayerWidth + tXAddForPlayer - (tMinimapWidth - 145);
                    tFinalPlayerWidth = tMinimapWidth - 145;
                }
            }
            else
            {
                tXAddForPlayer += tFinalPlayerWidth;
                tFinalPlayerWidth = 0;
            }
            tFinalPlayerHeight = (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) - 64;
            if (tFinalPlayerHeight >= 0)
            {
                if (tFinalPlayerHeight > tMinimapHeight - 128)
                {
                    tYAddForPlayer = tFinalPlayerHeight + tYAddForPlayer - (tMinimapHeight - 128);
                    tFinalPlayerHeight = tMinimapHeight - 128;
                }
            }
            else
            {
                tYAddForPlayer += tFinalPlayerHeight;
                tFinalPlayerHeight = 0;
            }
            break;

        case 2:
            tLocationX = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
            tLocationZ = -mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
            tXAddForPlayer = mX + (tMinimapWidth * (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] - mBoxMin0) / (mBoxMax0 - mBoxMin0)) + 4;
            tYAddForPlayer = mY + (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) + 42;
            break;

        default:
            break;
        }
        float tPlayerFront = 360.0f - mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aFront;
        if (tPlayerFront == 360.0f)
        {
            tPlayerFront = 0.0f;
        }
        tDataIndex = (tPlayerFront / 30.0) + 249;
        sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]);
        sY = tYAddForPlayer - sY / 2;
        sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], tXAddForPlayer - sX / 2, sY);
        tPlayerFront = 360.0f - mUTIL.GetYAngle(mGXD.mCameraEye.x, mGXD.mCameraEye.z, mGXD.mCameraLook.x, mGXD.mCameraLook.z);
        if (tPlayerFront == 360.0f)
        {
            tPlayerFront = 0.0f;
        }
        tDataIndex = (tPlayerFront / 30.0) + 261;
        sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]);
        sY = tYAddForPlayer - sY / 2;
        sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], tXAddForPlayer - sX / 2, sY);

        // Draw Player in Party For Minimap
        if (strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
        {
            for (i = 1; i < mPLAY.MAX_AVATAR_OBJECT; ++i)
            {
                if (mPLAY.mAVATAR_OBJECT[i].mCheckValidState && mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState && !strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aPartyName, mMYINFO.mAvatarInfo.aPartyName))
                {
                    switch (mMinimapZoom)
                    {
                    case 0:
                        tLocationX = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
                        tLocationZ = -mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
                        tXForPlayer = mX + (tMinimapWidth * (tLocationX - mBoxMin0) / (mBoxMax0 - mBoxMin0)) + 4 - tXAddForPlayer;
                        tYForPlayer = mY + (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) + 42 - tYAddForPlayer;
                        if (tXForPlayer >= mX + 4 && tXForPlayer <= mX + 150 && tYForPlayer >= mY + 42 && tYForPlayer <= mY + 168)
                        {
                            sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2367]);
                            sY = tYForPlayer - sY / 2;
                            sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2367]);
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2367], tXForPlayer - sX / 2, sY);
                        }
                        break;

                    case 1:
                        tLocationX = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
                        tLocationZ = -mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
                        tXForPlayer = mX + (tMinimapWidth * (tLocationX - mBoxMin0) / (mBoxMax0 - mBoxMin0)) + 4 - tXAddForPlayer;
                        tYForPlayer = mY + (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) + 42 - tYAddForPlayer;
                        if (tXForPlayer >= mX + 4 && tXForPlayer <= mX + 150 && tYForPlayer >= mY + 42 && tYForPlayer <= mY + 168)
                        {
                            sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2368]);
                            sY = tYForPlayer - sY / 2;
                            sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2368]);
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2368], tXForPlayer - sX / 2, sY);
                        }
                        break;

                    default:
                        break;
                    }
                }
            }
        }

        // Draw Guild mate Player For Minimap
        if (strcmp(mMYINFO.mAvatarInfo.aGuildName, ""))
        {
            for (i = 1; i < mPLAY.MAX_AVATAR_OBJECT; ++i)
            {
                if (mPLAY.mAVATAR_OBJECT[i].mCheckValidState && mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState && !strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aGuildName, mMYINFO.mAvatarInfo.aGuildName))
                {
                    switch (mMinimapZoom)
                    {
                    case 0:
                        tLocationX = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
                        tLocationZ = -mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
                        tXForPlayer = mX + (tMinimapWidth * (tLocationX - mBoxMin0) / (mBoxMax0 - mBoxMin0)) + 4 - tXAddForPlayer;
                        tYForPlayer = mY + (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) + 42 - tYAddForPlayer;
                        if (tXForPlayer >= mX + 4 && tXForPlayer <= mX + 150 && tYForPlayer >= mY + 42 && tYForPlayer <= mY + 168)
                        {
                            sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2364]);
                            sY = tYForPlayer - sY / 2;
                            sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2364]);
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2364], tXForPlayer - sX / 2, sY);
                        }
                        break;

                    case 1:
                        tLocationX = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
                        tLocationZ = -mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
                        tXForPlayer = mX + (tMinimapWidth * (tLocationX - mBoxMin0) / (mBoxMax0 - mBoxMin0)) + 4 - tXAddForPlayer;
                        tYForPlayer = mY + (tMinimapHeight * (tLocationZ - mBoxMin2) / (mBoxMax2 - mBoxMin2)) + 42 - tYAddForPlayer;
                        if (tXForPlayer >= mX + 4 && tXForPlayer <= mX + 150 && tYForPlayer >= mY + 42 && tYForPlayer <= mY + 168)
                        {
                            sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2365]);
                            sY = tYForPlayer - sY / 2;
                            sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2365]);
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2365], tXForPlayer - sX / 2, sY);
                        }
                        break;

                    default:
                        break;
                    }
                }
            }
        }

        // Draw Portal For Minimap
        mZONEMOVEINFO.DrawZonePortalForMinimap(mMinimapZoom);
        if (mIsClick[11])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[244], mX + 4, mY + 153);
        else
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[512], mX + 4, mY + 153);
        if (mIsClick[12])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[243], mX + 132, mY + 153);
        else
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[513], mX + 132, mY + 153);
    }

    // Draw Chat UI
    mX = 0;
    mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[50]);
    if (mChatWindow == 1)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2404], mX, mY - 249, uX, uY))
            mPOINTER.Set(0);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[89], mX, mY - 173, uX, uY))
            mPOINTER.Set(0);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2404], mX, mY - 93, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1369], mX, mY - 16, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[50], mX, mY, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mChatWindow == 1)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2404], mX, mY - 249);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[89], mX, mY - 173);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2404], mX, mY - 93);
    }
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1369], mX, mY - 16);
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[50], mX, mY);

    switch (mSelectChatIndex)
    {
    case 1:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1370], mX + 3, mY - 13);
        break;
    case 2:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1371], mX + 80, mY - 13);
        break;
    case 3:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1372], mX + 157, mY - 13);
        break;
    case 4:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1373], mX + 234, mY - 13);
        break;
    case 5:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1374], mX + 311, mY - 13);
        break;
    default:
        break;
    }
    if (mChatDisplay[0] == 1)
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], mX + 65, mY - 13);
    if (mChatDisplay[1] == 1)
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], mX + 142, mY - 13);
    if (mChatDisplay[2] == 1)
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], mX + 219, mY - 13);
    if (mChatDisplay[3] == 1)
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], mX + 296, mY - 13);
    if (mChatDisplay[4] == 1)
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], mX + 373, mY - 13);

    if (mEDITBOX.mDataIndex == 4)
    {
        GetWindowTextA(mEDITBOX.mDATA[3], mBuffer, 1000);
        mUTIL.DrawFont2D(mBuffer, mX + 85, mY + 23, 1);
        sY = mY + 23;
        sX = mX;
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + mUTIL.GetStringLength(mBuffer) + 86, sY);
    }
    else
    {
        switch (mSelectChatIndex)
        {
        case 0:
            sY = mY + 23;
            sX = mX + 123;
            mUTIL.DrawFont2D(mChatName, sX - mUTIL.GetStringLength(mChatName) / 2, sY, mFONTCOLOR.mData[46]);
            break;
        case 1:
            sY = mY + 23;
            sX = mX + 123;
            mUTIL.DrawFont2D(mChatName, sX - mUTIL.GetStringLength(mChatName) / 2, sY, mFONTCOLOR.mData[45]);
            break;
        case 2:
            sY = mY + 23;
            sX = mX + 123;
            mUTIL.DrawFont2D(mChatName, sX - mUTIL.GetStringLength(mChatName) / 2, sY, mFONTCOLOR.mData[48]);
            break;
        case 3:
            sY = mY + 23;
            sX = mX + 123;
            mUTIL.DrawFont2D(mChatName, sX - mUTIL.GetStringLength(mChatName) / 2, sY, mFONTCOLOR.mData[49]);
            break;
        case 4:
            sY = mY + 23;
            sX = mX + 123;
            mUTIL.DrawFont2D(mChatName, sX - mUTIL.GetStringLength(mChatName) / 2, sY, mFONTCOLOR.mData[50]);
            break;
        case 5:
            sY = mY + 23;
            sX = mX + 123;
            mUTIL.DrawFont2D(mChatName, sX - mUTIL.GetStringLength(mChatName) / 2, sY, mFONTCOLOR.mData[47]);
            break;
        default:
            break;
        }
    }

    GetWindowTextA(mEDITBOX.mDATA[4], mBuffer, 1000);
    mUTIL.DrawFont2D(mBuffer, mX + 8, mY + 4, 1);
    if (mEDITBOX.mDataIndex == 5)
    {
        sY = mY + 4;
        sX = mX;
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + mUTIL.GetStringLength(mBuffer) + 9, sY);
    }
    if (mChatWindow == 1)
    {
        if (mIsClick[20])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[312], mX + 375, mY + 2);
        else
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[311], mX + 375, mY + 2);
    }
    else if (mIsClick[20])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[314], mX + 375, mY + 2);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[313], mX + 375, mY + 2);
    }

    // Draw Chat Info and System Messages
    if (mChatWindow == 1)
    {
        for (i = mSysMessageNum; i < mSysMessageNum + 5 && i <= mMaxSysMessageNum - 1; ++i)
        {
            mUTIL.DrawFont2D(mSysMessagee[i], mX + 26, mY + 15 * (i - mSysMessageNum) - 244, mSysMessageSort[i]);
        }
        if (mIsClick[21])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2405], mX + 3, mY - 247);
        if (mIsClick[22])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2406], mX + 3, mY - 228);
        if (mIsClick[23])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2407], mX + 3, mY - 209);
        if (mIsClick[24])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2408], mX + 3, mY - 190);
        }
        else if (mSysMessageState)
        {
            if (mAPP->hPresentElapsedSeconds - mSysMessageUpdateTime > 1.0)
            {
                mSysMessageState = 0;
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2416], mX + 3, mY - 190);
        }
        for (i = mChatMessageNum; i < mChatMessageNum + 10 && i <= mMaxChatMessageNum - 1; ++i)
        {
            mUTIL.DrawFont2D(mChatMessage[i], mX + 26, mY + 15 * (i - mChatMessageNum) - 167, mChatMessageSort[i]);
        }

        if (mIsClick[25])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2543], mX + 3, mY - 170);
        if (mIsClick[26])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2544], mX + 3, mY - 132);
        if (mIsClick[27])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2545], mX + 3, mY - 91);
        if (mIsClick[28])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2546], mX + 3, mY - 53);
        }
        else if (mChatState)
        {
            if (mAPP->hPresentElapsedSeconds - mChatUpdateTime > 1.0)
            {
                mChatState = 0;
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2547], mX + 3, mY - 53);
        }
    }
    else
    {
        for (i = mChatMessageNum; i < mChatMessageNum + 5 && i <= mMaxChatMessageNum - 1; ++i)
        {
            mUTIL.DrawFont2D(mChatMessage[i], mX + 26, mY + 15 * (i - mChatMessageNum) - 89, mChatMessageSort[i]);
        }
        if (mIsClick[25])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2405], mX + 3, mY - 91);
        if (mIsClick[26])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2406], mX + 3, mY - 72);
        if (mIsClick[27])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2407], mX + 3, mY - 53);
        if (mIsClick[28])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2408], mX + 3, mY - 34);
        }
        else if (mChatState)
        {
            if (mAPP->hPresentElapsedSeconds - mChatUpdateTime > 1.0)
            {
                mChatState = 0;
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2416], mX + 3, mY - 34);
        }
    }
    if (mIsClick[30])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[52], mX + 182, mY + 19);
    if (mIsClick[31])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[53], mX + 205, mY + 19);
    if (mIsClick[32])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[54], mX + 228, mY + 19);
    if (mIsClick[33])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[55], mX + 251, mY + 19);
    if (mIsClick[34])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[56], mX + 274, mY + 19);
    if (mIsClick[35])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[57], mX + 297, mY + 19);
    if (mIsClick[36])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[58], mX + 320, mY + 19);
    if (mIsClick[37])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[59], mX + 343, mY + 19);
    if (mIsClick[38])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[60], mX + 366, mY + 19);

    // Draw Other UI
    if (mMYINFO.mOnlineAutoTime != -1)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4107], mX + 32, mY - 382, uX, uY))
        {
            mPOINTER.Set(0);
        }
        if (mIsClick[115])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4109], mX + 32, mY - 382);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4107], mX + 32, mY - 382, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4108], mX + 32, mY - 382);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4107], mX + 32, mY - 382);
        }
    }
    if (mMYINFO.mAvatarInfo.aCitadelTicket > 0)
    {
        mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4158]) - 1;
        mY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[241]) + 3;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4158], mX, mY + 23, uX, uY))
        {
            mPOINTER.Set(0);
        }
        if (mMYINFO.mPresentZoneNumber == 1 || mMYINFO.mPresentZoneNumber == 6 || mMYINFO.mPresentZoneNumber == 11 || mMYINFO.mPresentZoneNumber == 140)
        {
            if (mIsClick[117])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4160], mX, mY + 23);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4158], mX, mY + 23, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4159], mX, mY + 23);
            }
            else
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4158], mX, mY + 23);
            }
        }
    }

    // Draw Hotkey UI
    if (mMYINFO.mScreenXSize > 1024)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2422]) / 2;
        mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2422]);
    }
    else
    {
        mX = 391;
        mY = 728;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2422], mX, mY, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mGAMEOPTION.tShortCutKey == 1)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[36], mX, mY);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2422], mX, mY);
    }
    sprintf(mBuffer, "%d", mMYINFO.mHotKeyPage + 1);
    mUTIL.DrawFont2D(mBuffer, mX + 9, mY + 15, 1);

    for (i = 0; i < 14; ++i)
    {
        switch (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][2])
        {
        case 1:
            tSKILL = mSKILL.Search(mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][0]);
            if (tSKILL)
            {
                if (i == mMYINFO.mHotKeyIndex)
                    tDataIndex = mSKILLUI.CheckPossibleActionSkill(&mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][0]) ? tSKILL->sDataNumber2D + 2 : tSKILL->sDataNumber2D + 3;
                else
                    tDataIndex = tSKILL->sDataNumber2D + 1;
                GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[tDataIndex], mX + 30 * i + 24, mY + 7);
                if (tSKILL->sLearnSkillPoint != tSKILL->sMaxUpgradePoint)
                {
                    tDataIndex = (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][1] * 11.0 / tSKILL->sMaxUpgradePoint);
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex + 616], mX + 30 * i + 24, mY + 7);
                }
            }
            break;

        case 2:
            tDataIndex = mSKILLUI.ReturnEmoticonImageIndex(mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][0]);
            if (tDataIndex != -1)
            {
                tDataIndex += 2;
                GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[tDataIndex], mX + 30 * i + 24, mY + 7);
            }
            break;

        case 3:
            tITEM = mITEM.Search(mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][0]);
            if (tITEM)
            {
                tDataIndex = tITEM->iDataNumber2D - 1;
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], mX + 30 * i + 24, mY + 7);
                if (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][1] > 0)
                {
                    sprintf(mBuffer, "%d", mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][1]);
                    mUTIL.DrawFont2D(mBuffer, mX + 30 * i + 30, mY + 21, 1);
                }
            }
            break;
        }
    }

    // Draw Hotkey Buttons
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2548], mX, mY - 17, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mIsClick[29])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2552], mX, mY - 17);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2548], mX, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2549], mX, mY - 17);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2548], mX, mY - 17);
    }

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2705], mX + 434, mY - 17, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mIsClick[99])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2707], mX + 434, mY - 17);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2705], mX + 434, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2706], mX + 434, mY - 17);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2705], mX + 434, mY - 17);
    }

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2793], mX + 409, mY - 17, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mIsClick[98])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2733], mX + 409, mY - 17);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2793], mX + 409, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2732], mX + 409, mY - 17);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2793], mX + 409, mY - 17);
    }

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3218], mX + 309, mY - 17, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mIsClick[100])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3220], mX + 309, mY - 17);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3218], mX + 309, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3219], mX + 309, mY - 17);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3218], mX + 309, mY - 17);
    }

    if (mMYINFO.mAvatarInfo.aBeginnerPackageIcon == 1)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2983], mX + 384, mY - 17, uX, uY))
        {
            mPOINTER.Set(0);
        }
        if (mIsClick[96])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2985], mX + 384, mY - 17);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2983], mX + 384, mY - 17, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2984], mX + 384, mY - 17);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2983], mX + 384, mY - 17);
        }
    }

    /*if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3287], uX + 284, uY - 17, uX, uY)) // HOISUNDO_UI Draw
    {
        mPOINTER.Set(0);
    }
    if (bIsClick[101])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3289], uX + 284, uY - 17);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3287], uX + 284, uY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3288], uX + 284, uY - 17);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3287], uX + 284, uY - 17);
    }
    */

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3432], mX + 234, mY - 17, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mIsClick[103])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3434], mX + 234, mY - 17);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3432], mX + 234, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3433], mX + 234, mY - 17);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3432], mX + 234, mY - 17);
    }

    if (mMYINFO.mPresentZoneNumber == 170 || mMYINFO.mPresentZoneNumber == 50 || mMYINFO.mPresentZoneNumber == 52)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3480], mX + 184, mY - 16, uX, uY))
        {
            mPOINTER.Set(0);
        }
        if (mIsClick[105])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3482], mX + 184, mY - 16);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3480], mX + 184, mY - 16, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3481], mX + 184, mY - 16);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3480], mX + 184, mY - 16);
        }
    }

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3495], mX + 159, mY - 16, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mIsClick[107])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3497], mX + 159, mY - 16);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3495], mX + 159, mY - 16, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3496], mX + 159, mY - 16);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3495], mX + 159, mY - 16);
    }

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3498], mX + 458, mY + 2, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mIsClick[106])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3500], mX + 458, mY + 2);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3498], mX + 458, mY + 2, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3499], mX + 458, mY + 2);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3498], mX + 458, mY + 2);
    }

    /*
    if (!mPLAY.mWorldInfo.mTribeSymbolBattle)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3524], uX + 134, uY - 16, uX, uY))
            mPOINTER.Set(0);
        if (bIsClick[108])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3526], uX + 134, uY - 16);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3524], uX + 134, uY - 16, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3525], uX + 134, uY - 16);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3524], uX + 134, uY - 16);
        }
    }
    */

    // Special Shop
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3415], mX + 134, mY - 16, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (nIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3417], mX + 434, mY - 35);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3415], mX + 25, mY - 50, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3416], mX + 434, mY - 35);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3415], mX + 434, mY - 35);
    }

    // Constellation
    /*#ifdef CONSTELLATION
    if ( BASICUI::nIsClick[1] )
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3526], uX + 85, uY - 50);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3524], uX + 85, uY - 50, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3525], uX + 85, uY - 50);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3524], uX + 85, uY - 50);
    }
    #endif*/

    if (mIsClick[109])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3590], mX + 109, mY - 16);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3588], mX + 109, mY - 16, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3589], mX + 109, mY - 16);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3588], mX + 109, mY - 16);
    }

    // Capsule
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3525], mX + 84, mY - 16, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mIsClick[9])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3527], mX + 84, mY - 16);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3525], mX + 84, mY - 16, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3526], mX + 84, mY - 16);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3525], mX + 84, mY - 16);
    }
    //
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3730], mX + 59, mY - 16, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mIsClick[111])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3732], mX + 59, mY - 16);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3730], mX + 59, mY - 16, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3731], mX + 59, mY - 16);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3730], mX + 59, mY - 16);
    }

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2988], mX + 359, mY - 17, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mIsClick[95])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2990], mX + 359, mY - 17);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2988], mX + 359, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2989], mX + 359, mY - 17);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2988], mX + 359, mY - 17);
    }

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2992], mX + 334, mY - 17, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mIsClick[94])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2994], mX + 334, mY - 17);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2992], mX + 334, mY - 17, uX, uY) || mMYINFO.mAvatarInfo.iUseOrnament)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2993], mX + 334, mY - 17);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2992], mX + 334, mY - 17);
    }

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2796], mX + 25, mY - 17, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mIsClick[97])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2798], mX + 25, mY - 17);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2796], mX + 25, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2797], mX + 25, mY - 17);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2796], mX + 25, mY - 17);
    }

    if (mIsClick[39])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[61], mX + 442, mY + 5);
    }
    if (mIsClick[40])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[62], mX + 442, mY + 22);
    }

    sY = mY + -33;
    sX = 25;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3942], mX + sX, sY, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mIsClick[113])
    {
        sY = mY + -33;
        sX = 25;
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3944], mX + sX, sY);
    }
    else
    {
        sY = mY + -33;
        sX = 25;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3942], mX + sX, sY, uX, uY))
        {
            sY = mY + -33;
            sX = 25;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3943], mX + sX, sY);
        }
        else
        {
            sY = mY + -33;
            sX = 25;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3942], mX + sX, sY);
        }
    }

    // NEWSKILLUI Hotkey Button
   /*sY = uY + -32;
   sX = 59;
   if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3924], uX + sX, sY, uX, uY))
       mPOINTER.Set(0);
   if (bIsClick[114])
   {
       sY = uY + -32;
       sX = 59;
       GIMAGE2D::Display(&mGDATA.mUI_MAIN[3926], uX + sX, sY);
   }
   else
   {
       sY = uY + -32;
       sX = 59;
       if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3924], uX + sX, sY, uX, uY))
       {
           sY = uY + -32;
           sX = 59;
           GIMAGE2D::Display(&mGDATA.mUI_MAIN[3925], uX + sX, sY);
       }
       else
       {
           sY = uY + -32;
           sX = 59;
           GIMAGE2D::Display(&mGDATA.mUI_MAIN[3924], uX + sX, sY);
       }
   }*/

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4135], mX + 84, mY - 32, uX, uY))
    {
        mPOINTER.Set(0);
    }
    if (mIsClick[116])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4137], mX + 84, mY - 32);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4135], mX + 84, mY - 32, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4136], mX + 84, mY - 32);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4135], mX + 84, mY - 32);
    }

    // Draw More Hotkey Buttons
    mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2423]);
    mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2423]);
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2423], mX, mY, uX, uY))
    {
        mPOINTER.Set(0);
    }
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2423], mX, mY);
    if (mIsClick[41])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2000], mX + 3, mY + 6);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2000], mX + 3, mY + 6, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1999], mX + 3, mY + 6);
    }
    if (mMYINFO.mCheckHelpConditionEffect)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[(int)(mAPP->hPresentElapsedSeconds * 12.0) % 6 + 1992], mX - 9, mY - 10);
    }

    if (mIsClick[42])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2003], mX + 31, mY + 6);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2003], mX + 31, mY + 6, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2002], mX + 31, mY + 6);
    }

    if (mIsClick[43])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2073], mX + 59, mY + 6);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2073], mX + 59, mY + 6, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2072], mX + 59, mY + 6);
    }

    if (mIsClick[44])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2076], mX + 87, mY + 6);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2076], mX + 87, mY + 6, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2075], mX + 87, mY + 6);
    }

    if (mIsClick[45])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2079], mX + 115, mY + 6);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2079], mX + 115, mY + 6, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2078], mX + 115, mY + 6);
    }

    if (mPLAY.mWorldInfo.mTribeVoteState[mMYINFO.mAvatarInfo.aTribe])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[(int)(mAPP->hPresentElapsedSeconds * 16.0) % 8 + 2091], mX + 115, mY + 6);
    }
    mMYINFO.DrawForQuestCall();
    if (mMYINFO.mClientTickNew > 0 && mMYINFO.uUserSort > 0)
    {
        sprintf(mBuffer, "NowTime : %d / %d %d:%d %s", mMYINFO.mServerMon, mMYINFO.mServerDay, mMYINFO.mServerHour, mMYINFO.mServerMin, mMYINFO.mServerWDay);
        mUTIL.DrawFont2D(mBuffer, 10, 150, 3);
    }
    mUTIL.DrawFont2D(ProgramName, 5, 75, 3);
}

//void BASICUI::Draw(int uX, int uY)
//{
//    int sX, sY;
//    int i, j, k, l;
//    char* tSTR;
//    int tStrLen = 0;
//    int tDataIndex = 0;
//    char tBuf[1000];
//    int val, val2, val3;
//    int v448, v449, v5;
//    float v487;
//    ITEM_INFO* Item;
//    int v498 = 220;
//
//
//    if (mMAIN.mMainMode != 6 || mMAIN.mSubMode != 4)
//    {
//        return;
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[93], 0, 0, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    GIMAGE2D::Display(&mGDATA.mUI_MAIN[93], 0, 0);
//    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > 0)
//    {
//        tDataIndex = (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue * 41.0 / mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue) + 95;
//        if (tDataIndex > 136)
//        {
//            tDataIndex = 136;
//        }
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 57, 8);
//    }
//    sprintf(tBuf, "%d/%d", mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue, mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue);
//    tStrLen = mUTIL.GetStringLength(tBuf);
//    mUTIL.DrawFont2D(tBuf, 207 - tStrLen, 7, 1);
//    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue > 0)
//    {
//        tDataIndex = (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue * 41.0 / mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue) + 137;
//        if (tDataIndex > 178)
//        {
//            tDataIndex = 178;
//        }
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 57, 22);
//    }
//    sprintf(tBuf, "%d/%d", mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue, mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue);
//    tStrLen = mUTIL.GetStringLength(tBuf);
//    mUTIL.DrawFont2D(tBuf, 207 - tStrLen, 21, 1);
//    if (mMYINFO.mAvatarInfo.aLevel2 >= 1)
//    {
//        v448 = mLEVEL.ReturnHighExpValue(mMYINFO.mAvatarInfo.aLevel2);
//        v449 = mMYINFO.mAvatarInfo.aGeneralExperience2;
//    }
//    else
//    {
//        if (mMYINFO.mAvatarInfo.aLevel1 >= 145)
//        {
//            v448 = 2000000000 - mLEVEL.ReturnLevelFactor1(mMYINFO.mAvatarInfo.aLevel1);
//        }
//        else
//        {
//            v5 = mLEVEL.ReturnLevelFactor2(mMYINFO.mAvatarInfo.aLevel1);
//            v448 = v5 - mLEVEL.ReturnLevelFactor1(mMYINFO.mAvatarInfo.aLevel1);
//        }
//        v449 = mMYINFO.mAvatarInfo.aGeneralExperience1 - mLEVEL.ReturnLevelFactor1(mMYINFO.mAvatarInfo.aLevel1);
//    }
//    if (v449 > 0)
//    {
//        tDataIndex = (v449 * 41.0 / v448) + 179;
//        if (tDataIndex > 220)
//        {
//            tDataIndex = 220;
//        }
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 57, 36);
//    }
//    sprintf(tBuf, "%.3f", v449 * 100.0 / v448);
//    tStrLen = mUTIL.GetStringLength(tBuf);
//    mUTIL.DrawFont2D(tBuf, 207 - tStrLen, 35, 1);
//    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aRankPoint > 0)
//    {
//        tDataIndex = (mPLAY.mAVATAR_OBJECT[0].mDATA.aRankPoint * 41.0 / 3000.0) + 3543;
//        if (tDataIndex > 3584)
//        {
//            tDataIndex = 3584;
//        }
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 57, 50);
//    }
//    sprintf(tBuf, "%d/%d", mPLAY.mAVATAR_OBJECT[0].mDATA.aRankPoint, 3000);
//    tStrLen = mUTIL.GetStringLength(tBuf);
//    mUTIL.DrawFont2D(tBuf, 207 - tStrLen, 49, 1);
//    sX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[241]);
//    uX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3475]) - 1;
//    uY = 3;
//    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3475], uX, uY);
//    sprintf(tBuf, "%d", mMYINFO.mAvatarInfo.aKillOtherTribe);
//    sY = uY + 5;
//    sX = uX + 128;
//    tStrLen = mUTIL.GetStringLength(tBuf);
//    mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 1);
//    uY += GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3475]);
//    if (mMYINFO.mAvatarInfo.aEquip[8][0] > 0)
//    {
//        Item = mITEM.Search(mMYINFO.mAvatarInfo.aEquip[8][0]);
//        if (Item)
//        {
//            if (Item->iSort != 28 && Item->iSort != 31 && Item->iSort != 32)
//            {
//                sX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[241]);
//                uX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1050]) - 1;
//                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1050], uX, uY, uX, uY))
//                {
//                    mPOINTER.Set(0);
//                }
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1050], uX, uY);
//                if (mMYINFO.mAvatarInfo.aEquip[8][1] > 0)
//                {
//                    tDataIndex = (mMYINFO.mAvatarInfo.aEquip[8][1] * 42.0 / 100.0) + 1051;
//                    if (tDataIndex > 1093)
//                    {
//                        tDataIndex = 1093;
//                    }
//                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], uX + 82, uY + 5);
//                }
//                sprintf(tBuf, "%d/100", mMYINFO.mAvatarInfo.aEquip[8][1]);
//                sY = uY + 5;
//                sX = uX + 168;
//                tStrLen = mUTIL.GetStringLength(tBuf);
//                mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 1);
//                v487 = mPET.ReturnGrowPercent(mMYINFO.mAvatarInfo.aEquip[8][0], mMYINFO.mAvatarInfo.aEquip[8][2]);
//                if (mMYINFO.mAvatarInfo.aEquip[8][2] > 0)
//                {
//                    tDataIndex = (v487 * 42.0 / 100.0) + 1094;
//                    if (tDataIndex > 1136)
//                    {
//                        tDataIndex = 1136;
//                    }
//                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], uX + 82, uY + 18);
//                }
//                sprintf(tBuf, "%.3f", v487);
//                sY = uY + 18;
//                sX = uX + 168;
//                tStrLen = mUTIL.GetStringLength(tBuf);
//                mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 1);
//                uY += GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1050]);
//            }
//        }
//    }
//    int v434, v16, a2a = 0, a3a = 0;
//    float v442;
//    if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10 && mMYINFO.mAvatarInfo.aAnimalIndex < 20)
//    {
//        v434 = mUTIL.ReturnMountSort(mMYINFO.mAvatarInfo.aAnimal[mMYINFO.mAvatarInfo.aAnimalIndex - 10]) == 30;
//        v16 = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[241]);
//        uX = v16 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3592]) - 1;
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3592], uX, uY, uX, uY))
//        {
//            mPOINTER.Set(0);
//        }
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3592], uX, uY);
//        if (!v434)
//        {
//            mUTIL.ReturnMountExp(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex - 10], &a2a, &a3a);
//        }
//        if (a2a > 0)
//        {
//            tDataIndex = (a2a * 42.0 / 100.0) + 1051;
//            if (tDataIndex > 1093)
//            {
//                tDataIndex = 1093;
//            }
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], uX + 82, uY + 5);
//        }
//        sprintf(tBuf, "%d/100", a2a);
//        sY = uY + 5;
//        sX = uX + 168;
//        tStrLen = mUTIL.GetStringLength(tBuf);
//        mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 1);
//        v442 = a3a * 100.0 / 100000.0;
//        if (a3a > 0)
//        {
//            tDataIndex = (v442 * 42.0 / 100.0) + 1094;
//            if (tDataIndex > 1136)
//                tDataIndex = 1136;
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], uX + 82, uY + 18);
//        }
//        sprintf(tBuf, "%.3f", v442);
//        sY = uY + 18;
//        sX = uX + 168;
//        tStrLen = mUTIL.GetStringLength(tBuf);
//        mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 1);
//        uY += GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3592]);
//    }
//    int v21, v22, v23, v24, x2e;
//    if (mMYINFO.mAvatarInfo.aSecretSkillState)
//    {
//        v21 = mMYINFO.mScreenXSize / 2;
//        uX = v21 + GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[350]) / 2 + 20;
//        switch (mMYINFO.mAvatarInfo.aSecretSkillState)
//        {
//        case 91393:
//        case 91397:
//        case 91401:
//            tDataIndex = 3930;
//            break;
//        case 91394:
//        case 91398:
//        case 91402:
//            tDataIndex = 3933;
//            break;
//        case 91395:
//        case 91399:
//        case 91403:
//            tDataIndex = 3936;
//            break;
//        case 91396:
//        case 91400:
//        case 91404:
//            tDataIndex = 3939;
//            break;
//        }
//        if (mMYINFO.mAvatarInfo.aSecretSkillCooldown > 0)
//            ++tDataIndex;
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], uX, 4);
//        if (mMYINFO.mAvatarInfo.aSecretSkillCooldown > 0)
//        {
//            tSTR = mMESSAGE.Return(859);
//            sprintf(tBuf, "%02d%s", mMYINFO.mAvatarInfo.aSecretSkillCooldown, tSTR);
//            x2e = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]) - 11;
//            v23 = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]) / 2 + uX;
//            v24 = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, v23 - v24 / 2, x2e, 1);
//        }
//    }
//    sX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[241]);
//    uX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3657]) - 1;
//    /*GIMAGE2D::Display(&mGDATA.mUI_MAIN[3657], uX, uY);
//    if (mMYINFO.mAvatarInfo.aFuryCount > 0 && !mMYINFO.mAvatarInfo.aFuryState)
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[mMYINFO.mAvatarInfo.aFuryCount + 3657], uX, uY);
//    }*/
//    uY += GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3657]);
//    if (strcmp(mMYINFO.mAvatarInfo.aTeacher, ""))
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1624], 0, 105, uX, uY))
//            mPOINTER.Set(0);
//        for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aName, mMYINFO.mAvatarInfo.aTeacher)); ++i)
//        {
//            ;
//        }
//        if (i == mPLAY.MAX_AVATAR_OBJECT)
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1626], 0, 105);
//            strcpy(tBuf, mMYINFO.mAvatarInfo.aTeacher);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, 69 - tStrLen / 2, 113, 1);
//        }
//        else
//        {
//            if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2 >= 1)
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2590], 0, 105);
//            else
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1625], 0, 105);
//            if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2 >= 1)
//                sprintf(tBuf, "%d", mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2);
//            else
//                sprintf(tBuf, "%d", mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1 - 112);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, 13 - tStrLen / 2, 113, 31);
//            strcpy(tBuf, mPLAY.mAVATAR_OBJECT[i].mDATA.aName);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, 75 - tStrLen / 2, 113, 1);
//            if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue > 0)
//            {
//                tDataIndex = (mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue * 36.0 / mPLAY.mAVATAR_OBJECT[i].mDATA.aMaxLifeValue) + 520;
//                if (tDataIndex > 556)
//                    tDataIndex = 556;
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 5, 129);
//            }
//            if (mMYINFO.mTeacherStudentState == 1)
//            {
//                if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2 >= 1)
//                {
//                    if (mMYINFO.mAvatarInfo.aLevel2 >= mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2)
//                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1639], 0, 105);
//                }
//                else if (mMYINFO.mAvatarInfo.aLevel1 >= mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1)
//                {
//                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1639], 0, 105);
//                }
//            }
//            if (mMYINFO.mTeacherStudentState == 2)
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3198], 0, 105);
//        }
//        if (bIsClick[0])
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[396], 116, 105);
//        else
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[395], 116, 105);
//    }
//    if (strcmp(mMYINFO.mAvatarInfo.aStudent, ""))
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1625], 0, 105, uX, uY))
//            mPOINTER.Set(0);
//        for (i = 0;
//            i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aName, mMYINFO.mAvatarInfo.aStudent)); ++i)
//        {
//            ;
//        }
//        if (i == mPLAY.MAX_AVATAR_OBJECT)
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1627], 0, 105);
//            strcpy(tBuf, mMYINFO.mAvatarInfo.aStudent);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, 69 - tStrLen / 2, 113, 1);
//            sprintf(tBuf, "%d", mMYINFO.mAvatarInfo.aTeacherPoint);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, 106 - tStrLen, 139, 3);
//        }
//        else
//        {
//            if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2 >= 1)
//            {
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2590], 0, 105);
//            }
//            else if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1 >= 113)
//            {
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1625], 0, 105);
//            }
//            else
//            {
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1624], 0, 105);
//            }
//            if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2 >= 1)
//            {
//                sprintf(tBuf, "%d", mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2);
//            }
//            else if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1 >= 113)
//            {
//                sprintf(tBuf, "%d", mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1 - 112);
//            }
//            else
//            {
//                sprintf(tBuf, "%d", mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1);
//            }
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, 13 - tStrLen / 2, 113, 31);
//            strcpy(tBuf, mPLAY.mAVATAR_OBJECT[i].mDATA.aName);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, 75 - tStrLen / 2, 113, 1);
//            if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue > 0)
//            {
//                tDataIndex = (mPLAY.mAVATAR_OBJECT[i].mDATA.aLifeValue * 36.0 / mPLAY.mAVATAR_OBJECT[i].mDATA.aMaxLifeValue) + 520;
//                if (tDataIndex > 556)
//                    tDataIndex = 556;
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 5, 129);
//            }
//            sprintf(tBuf, "%d", mMYINFO.mAvatarInfo.aTeacherPoint);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, 106 - tStrLen, 139, 3);
//            if (mMYINFO.mTeacherStudentState == 1)
//            {
//                if (mMYINFO.mAvatarInfo.aLevel2 >= 1)
//                {
//                    if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel2 >= mMYINFO.mAvatarInfo.aLevel2)
//                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1639], 0, 105);
//                }
//                else if (mPLAY.mAVATAR_OBJECT[i].mDATA.aLevel1 >= mMYINFO.mAvatarInfo.aLevel1)
//                {
//                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1639], 0, 105);
//                }
//            }
//            if (mMYINFO.mTeacherStudentState == 2)
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3198], 0, 105);
//        }
//        if (bIsClick[0])
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[396], 116, 105);
//        else
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[395], 116, 105);
//    }
//    if (strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
//    {
//        for (i = 0; i < 5 && strcmp(mMYINFO.mPartyInfo[i], ""); ++i)
//        {
//            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[393], 0, 50 * i + 155, uX, uY))
//            {
//                mPOINTER.Set(0);
//            }
//            for (j = 0; j < mPLAY.MAX_AVATAR_OBJECT && strcmp(mPLAY.mAVATAR_OBJECT[j].mDATA.aName, mMYINFO.mPartyInfo[i]); ++j)
//            {
//                ;
//            }
//            if (j == mPLAY.MAX_AVATAR_OBJECT)
//            {
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[394], 0, 50 * i + 155);
//                strcpy(tBuf, mMYINFO.mPartyInfo[i]);
//                sY = 50 * i + 162;
//                tStrLen = mUTIL.GetStringLength(tBuf);
//                mUTIL.DrawFont2D(tBuf, 69 - tStrLen / 2, sY, 1);
//            }
//            else
//            {
//                if (mPLAY.mAVATAR_OBJECT[j].mDATA.aLevel2 >= 1)
//                {
//                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2975], 0, 50 * i + 155);
//                }
//                else if (mPLAY.mAVATAR_OBJECT[j].mDATA.aLevel1 >= 113)
//                {
//                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1043], 0, 50 * i + 155);
//                }
//                else
//                {
//                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[393], 0, 50 * i + 155);
//                }
//                if (mPLAY.mAVATAR_OBJECT[j].mDATA.aLevel2 >= 1)
//                {
//                    sprintf(tBuf, "%d", mPLAY.mAVATAR_OBJECT[j].mDATA.aLevel2);
//                }
//                else if (mPLAY.mAVATAR_OBJECT[j].mDATA.aLevel1 >= 113)
//                {
//                    sprintf(tBuf, "%d", mPLAY.mAVATAR_OBJECT[j].mDATA.aLevel1 - 112);
//                }
//                else
//                {
//                    sprintf(tBuf, "%d", mPLAY.mAVATAR_OBJECT[j].mDATA.aLevel1);
//                }
//                sY = 50 * i + 161;
//                tStrLen = mUTIL.GetStringLength(tBuf);
//                mUTIL.DrawFont2D(tBuf, 13 - tStrLen / 2, sY, 35);
//                strcpy(tBuf, mPLAY.mAVATAR_OBJECT[j].mDATA.aName);
//                sY = 50 * i + 162;
//                tStrLen = mUTIL.GetStringLength(tBuf);
//                mUTIL.DrawFont2D(tBuf, 75 - tStrLen / 2, sY, 1);
//                if (mPLAY.mAVATAR_OBJECT[j].mDATA.aLifeValue > 0)
//                {
//                    tDataIndex = (mPLAY.mAVATAR_OBJECT[j].mDATA.aLifeValue * 36.0 / mPLAY.mAVATAR_OBJECT[j].mDATA.aMaxLifeValue) + 520;
//                    if (tDataIndex > 556)
//                        tDataIndex = 556;
//                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 5, 50 * i + 180);
//                }
//                if (mPLAY.mAVATAR_OBJECT[j].mDATA.aManaValue > 0)
//                {
//                    tDataIndex = (mPLAY.mAVATAR_OBJECT[j].mDATA.aManaValue * 36.0 / mPLAY.mAVATAR_OBJECT[j].mDATA.aMaxManaValue) + 557;
//                    if (tDataIndex > 593)
//                        tDataIndex = 593;
//                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], 5, 50 * i + 191);
//                }
//            }
//            if (!strcmp(mMYINFO.mAvatarInfo.aPartyName, mMYINFO.mAvatarInfo.aName) && i > 0)
//            {
//                if (bIsClick[i])
//                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[396], 116, 50 * i + 155);
//                else
//                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[395], 116, 50 * i + 155);
//            }
//        }
//    }
//    int v432, v433, v468;
//    j = 0;
//    v468 = 0;
//    for (k = 0; k < 3; ++k)
//    {
//        v432 = mTOWERBUILDUI.tTower[3 * mMYINFO.mAvatarInfo.aTribe + k] % 100;
//        v433 = mTOWERBUILDUI.tTower[3 * mMYINFO.mAvatarInfo.aTribe + k] / 100;
//        if (v432 == 1 && (v433 == 2 || v433 == 4 || v433 == 6 || v433 == 8 || v433 == 3 || v433 == 5 || v433 == 7))
//        {
//            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3734], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                mPOINTER.Set(0);
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3734], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//            ++j;
//        }
//        if (v432 == 2 && (v433 == 2 || v433 == 4 || v433 == 6 || v433 == 8 || v433 == 3 || v433 == 5 || v433 == 7))
//        {
//            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3736], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                mPOINTER.Set(0);
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3736], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//            ++j;
//        }
//        if (v432 == 3 && (v433 == 2 || v433 == 4 || v433 == 6 || v433 == 8 || v433 == 3 || v433 == 5 || v433 == 7))
//        {
//            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3738], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                mPOINTER.Set(0);
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3738], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//            ++j;
//        }
//    }
//    switch (mPLAY.mWorldInfo.mTribeMasterCallAbility[mMYINFO.mAvatarInfo.aTribe])
//    {
//    case 1:
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2819], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//        {
//            mPOINTER.Set(0);
//        }
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2819], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//        break;
//    case 2:
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2820], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//        {
//            mPOINTER.Set(0);
//        }
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2820], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//        break;
//    case 3:
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2821], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//        {
//            mPOINTER.Set(0);
//        }
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2821], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//        break;
//    case 4:
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2822], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//        {
//            mPOINTER.Set(0);
//        }
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2822], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//        break;
//    }
//    if (mMYINFO.mAvatarInfo.aTribe == mPLAY.mWorldInfo.mZone038WinTribe || mMYINFO.mAvatarInfo.aTribe == mPLAY.ReturnAlliance(mPLAY.mWorldInfo.mZone038WinTribe))
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[869], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//        {
//            mPOINTER.Set(0);
//        }
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[869], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        sprintf(tBuf, "%d%%", 10);
//        mUTIL.DrawFont2D(tBuf, v498 + 28 * (j % 7) + 3, 28 * (j / 7) + 17, 3);
//        ++j;
//    }
//    if (mPLAY.ReturnTribeRole( mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) == 1)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3989], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//        {
//            mPOINTER.Set(0);
//        }
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3989], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }
//    else if (mPLAY.ReturnTribeRole( mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) == 2)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3991], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//        {
//            mPOINTER.Set(0);
//        }
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3991], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }
//    if (mMYINFO.mAvatarInfo.aTevushiRoad % 10000 > 0)
//    {
//        if (mMYINFO.mAvatarInfo.aTevushiRoad / 10000)
//        {
//            switch (mMYINFO.mAvatarInfo.aTevushiRoad / 10000)
//            {
//            case 1:
//                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4165], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                    mPOINTER.Set(0);
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4165], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//                break;
//            case 2:
//                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4166], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                    mPOINTER.Set(0);
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4166], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//                break;
//            case 3:
//                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4167], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                    mPOINTER.Set(0);
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4167], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//                break;
//            }
//        }
//        else
//        {
//            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4164], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                mPOINTER.Set(0);
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4164], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        }
//        ++j;
//    }
//    int v430, v431;
//    if (mUTIL.ReturnItemSort2(mMYINFO.mAvatarInfo.aEquip[1][0]) != 8)
//    {
//        if (mUTIL.ReturnItemSort2(mMYINFO.mAvatarInfo.aEquip[1][0]) != 9)
//            goto LABEL_308;
//        v430 = 10 * (mUTIL.Return4thValue(mMYINFO.mAvatarInfo.aEquip[1][2]) / 10);
//        if (v430 <= 0)
//            goto LABEL_308;
//        if (v430 == 20)
//        {
//            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4191], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                mPOINTER.Set(0);
//            goto LABEL_295;
//        }
//        if (v430 == 30)
//        {
//            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4192], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                mPOINTER.Set(0);
//            goto LABEL_299;
//        }
//        if (v430 != 50)
//        {
//            if (v430 == 40)
//            {
//                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4194], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                    mPOINTER.Set(0);
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4194], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//                ++j;
//            }
//            goto LABEL_308;
//        }
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4193], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//            mPOINTER.Set(0);
//    LABEL_303:
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4193], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//        goto LABEL_308;
//    }
//    v431 = 10 * (mUTIL.ReturnIUValue(mMYINFO.mAvatarInfo.aEquip[1][2]) / 10);
//    if (v431 <= 0)
//        goto LABEL_308;
//    if (v431 != 20)
//    {
//        if (v431 == 30)
//        {
//            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4192], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                mPOINTER.Set(0);
//        LABEL_299:
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4192], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//            ++j;
//            goto LABEL_308;
//        }
//        if (v431 != 50)
//        {
//            if (v431 == 40)
//            {
//                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4194], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                    mPOINTER.Set(0);
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4194], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//                ++j;
//            }
//            goto LABEL_308;
//        }
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4193], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//            mPOINTER.Set(0);
//        goto LABEL_303;
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4191], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//        mPOINTER.Set(0);
//LABEL_295:
//    GIMAGE2D::Display(&mGDATA.mUI_MAIN[4191], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//    ++j;
//LABEL_308:
//    if (mMYINFO.mAvatarInfo.aVigilanteScroll > 0)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4119], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//            mPOINTER.Set(0);
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4119], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }
//    int v37, v38;
//    if (mMYINFO.mPresentZoneNumber != 297 && mMYINFO.mPresentZoneNumber != 298 && mMYINFO.mPresentZoneNumber != 299)
//    {
//        if (mPLAY.ReturnDamageUpForTribeSymbol(mMYINFO.mAvatarInfo.aTribe) > 0)
//        {
//            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[870], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                mPOINTER.Set(0);
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[870], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//            v37 = mPLAY.ReturnTribeSymbolCount(mMYINFO.mAvatarInfo.aTribe);
//            sprintf(tBuf, "%d", v37);
//            mUTIL.DrawFont2D(tBuf, v498 + 28 * (j % 7) + 10, 28 * (j / 7) + 17, 3);
//            ++j;
//        }
//        if (mPLAY.ReturnDamageDownForTribeSymbol(mMYINFO.mAvatarInfo.aTribe) < 0)
//        {
//            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[871], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                mPOINTER.Set(0);
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[871], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//            v38 = mPLAY.ReturnDamageDownForTribeSymbol(mMYINFO.mAvatarInfo.aTribe);
//            sprintf(tBuf, "%d%%", v38);
//            mUTIL.DrawFont2D(tBuf, v498 + 28 * (j % 7), 28 * (j / 7) + 17, 2);
//            ++j;
//        }
//    }
//    if (mPLAY.mWorldInfo.mProvingGroundsPoint[mMYINFO.mAvatarInfo.aTribe] > 0)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3749], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//            mPOINTER.Set(0);
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3749], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        sprintf(tBuf, "%d", mPLAY.mWorldInfo.mProvingGroundsPoint[mMYINFO.mAvatarInfo.aTribe]);
//        mUTIL.DrawFont2D(tBuf, v498 + 28 * (j % 7) + 10, 28 * (j / 7) + 17, 3);
//        ++j;
//    }
//    if (mPLAY.mWorldInfo.mTribeGeneralExperienceUpRatioInfo[mMYINFO.mAvatarInfo.aTribe] > 0.0)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[873], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//            mPOINTER.Set(0);
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[873], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }
//    if (mPLAY.mWorldInfo.mTribeItemDropUpRatioInfo[mMYINFO.mAvatarInfo.aTribe] > 0.0)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[874], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//            mPOINTER.Set(0);
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[874], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }
//    if (mPLAY.mWorldInfo.mTribeItemDropUpRatioForMyoungInfo[mMYINFO.mAvatarInfo.aTribe] > 0.0)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[875], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//            mPOINTER.Set(0);
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[875], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }
//    if (mPLAY.mWorldInfo.mTribeKillOtherTribeAddValueInfo[mMYINFO.mAvatarInfo.aTribe] > 0)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[876], v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//            mPOINTER.Set(0);
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[876], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }
//    float v495;
//    for (i = 0; i < 35; ++i)
//    {
//        if (mMYINFO.mAvatarEffectValue[i][0] >= 1 && (i < 19 || i > 28))
//        {
//            v495 = (float)mMYINFO.mAvatarEffectValue[i][1] - (mAPP->hPresentElapsedSeconds - mMYINFO.mElementValue[i]);
//            if ((int)v495 > 10)
//            {
//                if (GIMAGE2D::CheckIn(&mGDATA.mUI_BUFFICON[mMYINFO.mAvatarInfo.aPreviousTribe][i],v498 + 28 * (j % 7), 28 * (j / 7) + 5, uX, uY))
//                {
//                    mPOINTER.Set(0);
//                }
//                goto LABEL_356;
//            }
//            if ((int)(mAPP->hPresentElapsedSeconds + mAPP->hPresentElapsedSeconds) % 2 == 1)
//            {
//                if (GIMAGE2D::CheckIn(&mGDATA.mUI_BUFFICON[mMYINFO.mAvatarInfo.aPreviousTribe][i],v498 + 28 * (j % 7),28 * (j / 7) + 5, uX, uY))
//                {
//                    mPOINTER.Set(0);
//                }
//            LABEL_356:
//                GIMAGE2D::Display( &mGDATA.mUI_BUFFICON[mMYINFO.mAvatarInfo.aPreviousTribe][i],v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//            }
//            ++j;
//            continue;
//        }
//    }
//    /*if (mMYINFO.mAvatarInfo.aTimeEffect < 120 || mMYINFO.mAvatarInfo.aTimeEffect == 360)
//    {
//        if (mMYINFO.mAvatarInfo.aTimeEffect == 360)
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3651], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//            ++j;
//        }
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[mMYINFO.mAvatarInfo.aTimeEffect / 60 + 3267],v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }*/
//    // Display Time Effeect
//    if (mMYINFO.mAvatarInfo.aTimeEffect > 0)
//    {
//        if (mMYINFO.mAvatarInfo.aTimeEffect == 5)
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3651], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//            ++j;
//        }
//        else
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[mMYINFO.mAvatarInfo.aTimeEffect + 3268], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//            ++j;
//        }
//    }
//    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildBuff == 1 && mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort >= 0 && mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort <= 4)
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort + 3296],v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }
//    if (mMYINFO.mAvatarInfo.aRankAbility > 0)
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[mMYINFO.mAvatarInfo.aRankAbility + 3527], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }
//    if (mMYINFO.mAvatarInfo.aFuryState == 1)
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3601], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }
//    if (mMYINFO.mAvatarInfo.aRebirth > 0 && mMYINFO.mAvatarInfo.aRebirth < 13)
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3224], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }
//    if (mMYINFO.mAvatarInfo.aRebirth > 6 && mMYINFO.mAvatarInfo.aRebirth < 13)
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3225], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }
//    if (mMYINFO.mAvatarInfo.aDiamondPill > 0 && mMYINFO.mAvatarInfo.aDiamondPill < 13)
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3839], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }
//    if (mMYINFO.mAvatarInfo.aNewSkillsState > 0)
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3928], v498 + 28 * (j % 7), 28 * (j / 7) + 5);
//        ++j;
//    }
//    if (tDisplayCharItemStatuses == 1)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3054], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55, uX, uY))
//        {
//            if (bIsClick[46] == 1)
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3056], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55);
//            else
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3055], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55);
//        }
//        else
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3054], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55);
//        }
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3051], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55, uX, uY))
//    {
//        if (bIsClick[46] == 1)
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3053], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55);
//        else
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3052], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3051], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55);
//    }
//    if (mMYINFO.mPresentZoneNumber == 319 || mMYINFO.mPresentZoneNumber == 320 || mMYINFO.mPresentZoneNumber == 321 || mMYINFO.mPresentZoneNumber == 322 || mMYINFO.mPresentZoneNumber == 323)
//    {
//        if (mMYINFO.mCheckLevelBattle319TypeInfo)
//        {
//            sX = mMYINFO.mScreenXSize / 2;
//            uX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2703]) / 2;
//            uY = 80;
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2703], uX, uY);
//            for (i = 0; i < 4; ++i)
//            {
//                tDataIndex = mMYINFO.mLevelBattle319TypeInfo[i] % 1000 / 100 + 2117;
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], uX + 104 * i + 32, uY + 28);
//                tDataIndex = mMYINFO.mLevelBattle319TypeInfo[i] % 100 / 10 + 2117;
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], uX + 104 * i + 57, uY + 28);
//                tDataIndex = mMYINFO.mLevelBattle319TypeInfo[i] % 10 + 2117;
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], uX + 104 * i + 82, uY + 28);
//            }
//            if (mMYINFO.mShowTop4Rank)
//            {
//                uX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3799]);
//                uY = 191;
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3799], uX, uY);
//                for (i = 0; i < 3 && mMYINFO.mZone319TypeTop20RankScore[i]; ++i)
//                {
//                    tSTR = mMESSAGE.Return(mMYINFO.mZone319TypeTop20RankTribe[i] + 1112);
//                    sprintf(tBuf, "%s", tSTR);
//                    sY = uY + 42 * i + 79;
//                    sX = uX + 61;
//                    tStrLen = mUTIL.GetStringLength(tBuf);
//                    mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
//                    sprintf(tBuf, "%s", mMYINFO.mZone319TypeTop20RankName[i]);
//                    sY = uY + 42 * i + 79;
//                    sX = uX + 163;
//                    tStrLen = mUTIL.GetStringLength(tBuf);
//                    mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
//                    sprintf(tBuf, "%d", mMYINFO.mZone319TypeTop20RankScore[i]);
//                    sY = uY + 42 * i + 79;
//                    sX = uX + 241;
//                    tStrLen = mUTIL.GetStringLength(tBuf);
//                    mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
//                }
//            }
//            else
//            {
//                uX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3802]);
//                uY = 191;
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3802], uX, uY);
//            }
//        }
//        if (mMYINFO.mCheck319TypeTop20RankState)
//        {
//            uX = 137;
//            uY = 162;
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3800], uX, uY);
//            for (i = 0; i < 10 && mMYINFO.mZone319TypeTop20RankScore[i]; ++i)
//            {
//                sprintf(tBuf, "%d", mMYINFO.mZone319TypeLineUpRank[i]);
//                sY = uY + 33 * i + 92;
//                sX = uX + 28;
//                tStrLen = mUTIL.GetStringLength(tBuf);
//                mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
//                tSTR = mMESSAGE.Return(mMYINFO.mZone319TypeTop20RankTribe[i] + 1112);
//                sprintf(tBuf, "%s", tSTR);
//                sY = uY + 33 * i + 92;
//                sX = uX + 100;
//                tStrLen = mUTIL.GetStringLength(tBuf);
//                mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
//                sprintf(tBuf, "%s", mMYINFO.mZone319TypeTop20RankName[i]);
//                sY = uY + 33 * i + 92;
//                sX = uX + 218;
//                tStrLen = mUTIL.GetStringLength(tBuf);
//                mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
//                sprintf(tBuf, "%d", mMYINFO.mZone319TypeTop20RankScore[i]);
//                sY = uY + 33 * i + 92;
//                sX = uX + 322;
//                tStrLen = mUTIL.GetStringLength(tBuf);
//                mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
//            }
//            for (i = 10; i < 20 && mMYINFO.mZone319TypeTop20RankScore[i]; ++i)
//            {
//                sprintf(tBuf, "%d", mMYINFO.mZone319TypeLineUpRank[i]);
//                sY = uY + 33 * (i % 10) + 92;
//                sX = uX + 401;
//                tStrLen = mUTIL.GetStringLength(tBuf);
//                mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
//                tSTR = mMESSAGE.Return(mMYINFO.mZone319TypeTop20RankTribe[i] + 1112);
//                sprintf(tBuf, "%s", tSTR);
//                sY = uY + 33 * (i % 10) + 92;
//                sX = uX + 473;
//                tStrLen = mUTIL.GetStringLength(tBuf);
//                mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
//                sprintf(tBuf, "%s", mMYINFO.mZone319TypeTop20RankName[i]);
//                sY = uY + 33 * (i % 10) + 92;
//                sX = uX + 591;
//                tStrLen = mUTIL.GetStringLength(tBuf);
//                mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
//                sprintf(tBuf, "%d", mMYINFO.mZone319TypeTop20RankScore[i]);
//                sY = uY + 33 * (i % 10) + 92;
//                sX = uX + 695;
//                tStrLen = mUTIL.GetStringLength(tBuf);
//                mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
//            }
//        }
//    }
//    if (mMYINFO.mPresentZoneNumber == 324)
//    {
//        sX = mMYINFO.mScreenXSize / 2;
//        uX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2703]) / 2;
//        uY = 80;
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4121], uX, uY);
//        for (i = 0; i < 4; ++i)
//        {
//            tDataIndex = mMYINFO.unk_CD8C[i] % 1000 / 100 + 2117;
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], uX + 104 * i + 32, uY + 28);
//            tDataIndex = mMYINFO.unk_CD8C[i] % 100 / 10 + 2117;
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], uX + 104 * i + 57, uY + 28);
//            tDataIndex = mMYINFO.unk_CD8C[i] % 10 + 2117;
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], uX + 104 * i + 82, uY + 28);
//        }
//    }
//    char* tSTR2;
//    int tValue;
//    char itoabuf[100]; 
//    char form[100];
//    if (tDisplayCharItemStatuses == 1)
//    {
//        sX = mMYINFO.mScreenXSize - 5;
//        sY = mMYINFO.mScreenYSize - 75;
//        if (mMYINFO.mAvatarInfo.aExpandInventoryDate > 0)
//        {
//            ZeroMemory(&itoabuf, sizeof(itoabuf));
//            ZeroMemory(&form, sizeof(form));
//            _itoa(mMYINFO.mAvatarInfo.aExpandInventoryDate, itoabuf, 10);
//            form[0] = itoabuf[0];
//            form[1] = itoabuf[1];
//            form[2] = itoabuf[2];
//            form[3] = itoabuf[3];
//            form[4] = '.';
//            form[5] = itoabuf[4];
//            form[6] = itoabuf[5];
//            form[7] = '.';
//            form[8] = itoabuf[6];
//            form[9] = itoabuf[7];
//            form[10] = '\n';
//            tSTR = mMESSAGE.Return(81);
//            sprintf(tBuf, "%s %s", tSTR, form);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aExpandStoreDate > 0)
//        {
//            ZeroMemory(&itoabuf, sizeof(itoabuf));
//            ZeroMemory(&form, sizeof(form));
//            _itoa(mMYINFO.mAvatarInfo.aExpandStoreDate, itoabuf, 10);
//            form[0] = itoabuf[0];
//            form[1] = itoabuf[1];
//            form[2] = itoabuf[2];
//            form[3] = itoabuf[3];
//            form[4] = '.';
//            form[5] = itoabuf[4];
//            form[6] = itoabuf[5];
//            form[7] = '.';
//            form[8] = itoabuf[6];
//            form[9] = itoabuf[7];
//            form[10] = '\n';
//            tSTR = mMESSAGE.Return(82);
//            sprintf(tBuf, "%s %s", tSTR, form);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aSearchAndBuyDate > 0)
//        {
//            ZeroMemory(&itoabuf, sizeof(itoabuf));
//            ZeroMemory(&form, sizeof(form));
//            _itoa(mMYINFO.mAvatarInfo.aSearchAndBuyDate, itoabuf, 10);
//            form[0] = itoabuf[0];
//            form[1] = itoabuf[1];
//            form[2] = itoabuf[2];
//            form[3] = itoabuf[3];
//            form[4] = '.';
//            form[5] = itoabuf[4];
//            form[6] = itoabuf[5];
//            form[7] = '.';
//            form[8] = itoabuf[6];
//            form[9] = itoabuf[7];
//            form[10] = '\n';
//            tSTR = mMESSAGE.Return(1311);
//            sprintf(tBuf, "%s %s", tSTR, form);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aAutoBuffScroll > 0)
//        {
//            ZeroMemory(&itoabuf, sizeof(itoabuf));
//            ZeroMemory(&form, sizeof(form));
//            _itoa(mMYINFO.mAvatarInfo.aAutoBuffScroll, itoabuf, 10);
//            form[0] = itoabuf[0];
//            form[1] = itoabuf[1];
//            form[2] = itoabuf[2];
//            form[3] = itoabuf[3];
//            form[4] = '.';
//            form[5] = itoabuf[4];
//            form[6] = itoabuf[5];
//            form[7] = '.';
//            form[8] = itoabuf[6];
//            form[9] = itoabuf[7];
//            form[10] = '\n';
//            tSTR = mMESSAGE.Return(1648);
//            sprintf(tBuf, "%s %s", tSTR, form);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        for (i = 0; i < 10; ++i)
//        {
//            if (mMYINFO.mAvatarInfo.aTimedCostumeInventory[i] > 0)
//            {
//                ZeroMemory(&itoabuf, sizeof(itoabuf));
//                ZeroMemory(&form, sizeof(form));
//                _itoa(mMYINFO.mAvatarInfo.aTimedCostumeInventory[i], itoabuf, 10);
//                form[0] = itoabuf[0];
//                form[1] = itoabuf[1];
//                form[2] = itoabuf[2];
//                form[3] = itoabuf[3];
//                form[4] = '.';
//                form[5] = itoabuf[4];
//                form[6] = itoabuf[5];
//                form[7] = '.';
//                form[8] = itoabuf[6];
//                form[9] = itoabuf[7];
//                form[10] = '\n';
//                tSTR = mMESSAGE.Return(i + 1878);
//                sprintf(tBuf, "%s %s", tSTR, form);
//                tStrLen = mUTIL.GetStringLength(tBuf);
//                mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//                sY -= 15;
//            }
//        }
//        if (mMYINFO.mAvatarInfo.aDoubleExpTime1 > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aDoubleExpTime1;
//            tSTR2 = mMESSAGE.Return(84);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aDoubleExpTime2 > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aDoubleExpTime2;
//            tSTR2 = mMESSAGE.Return(85);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aExpPill > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aExpPill;
//            tSTR2 = mMESSAGE.Return(1425);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aDoubleKillNumTime > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aDoubleKillNumTime;
//            tSTR2 = mMESSAGE.Return(86);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aExtinctionScroll > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aExtinctionScroll;
//            tSTR2 = mMESSAGE.Return(1136);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aDoubleKillExpTime > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aDoubleKillExpTime;
//            tSTR2 = mMESSAGE.Return(87);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aProtectForDeath > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aProtectForDeath;
//            tSTR2 = mMESSAGE.Return(88);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aProtectForDestroy > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aProtectForDestroy;
//            tSTR2 = mMESSAGE.Return(89);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aUnsealCharm > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aUnsealCharm;
//            tSTR2 = mMESSAGE.Return(2655);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aCPProtectionCharm > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aCPProtectionCharm;
//            tSTR2 = mMESSAGE.Return(1182);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aZone101TypeTime > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aZone101TypeTime;
//            tSTR2 =+ mMESSAGE.Return(90);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aZone125TypeTime > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aZone125TypeTime;
//            tSTR2 = mMESSAGE.Return(91);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aZone126TypeTime > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aZone126TypeTime;
//            tSTR2 = mMESSAGE.Return(92);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aNineTowerKeyNum > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aNineTowerKeyNum;
//            tSTR2 = mMESSAGE.Return(93);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aLifePotionConvertNum > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aLifePotionConvertNum;
//            tSTR2 = mMESSAGE.Return(741);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aChiPotionConvertNum > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aChiPotionConvertNum;
//            tSTR2 = mMESSAGE.Return(742);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aAnimalTime > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aAnimalTime;
//            tSTR2 = mMESSAGE.Return(919);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aDoubleDropTime > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aDoubleDropTime;
//            tSTR2 = mMESSAGE.Return(985);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aLuckyUpgrade > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aLuckyUpgrade;
//            tSTR2 = mMESSAGE.Return(986);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aLuckyCombine > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aLuckyCombine;
//            tSTR2 = mMESSAGE.Return(987);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.iSilverOrnamentRemainsTime > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.iSilverOrnamentRemainsTime;
//            tSTR2 = mMESSAGE.Return(1197);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.iGoldOrnamentRemainsTime > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.iGoldOrnamentRemainsTime;
//            tSTR2 = mMESSAGE.Return(1287);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aIslandOfBloodTime > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aIslandOfBloodTime;
//            tSTR2 = mMESSAGE.Return(1198);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aIslandOfSoul1Time > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aIslandOfSoul1Time;
//            tSTR2 = mMESSAGE.Return(1199);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aIslandOfSoul2Time > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aIslandOfSoul2Time;
//            tSTR2 = mMESSAGE.Return(1200);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aIslandOfSoul3Time > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aIslandOfSoul3Time;
//            tSTR2 = mMESSAGE.Return(1201);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aIslandOfSoul4Time > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aIslandOfSoul4Time;
//            tSTR2 = mMESSAGE.Return(1202);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aIslandOfSoul5Time > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aIslandOfSoul5Time;
//            tSTR2 = mMESSAGE.Return(1203);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aIslandOfSoul6Time > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aIslandOfSoul6Time;
//            tSTR2 = mMESSAGE.Return(1204);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aLifeOrDeath > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aLifeOrDeath;
//            tSTR2 = mMESSAGE.Return(1239);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aUltimateTicket > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aUltimateTicket;
//            tSTR2 = mMESSAGE.Return(2559);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aDoubleIslandOfBloodTimeUse > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aDoubleIslandOfBloodTimeUse;
//            tSTR2 = mMESSAGE.Return(1292);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aSoulBoost > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aSoulBoost;
//            tSTR2 = mMESSAGE.Return(1293);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aDoubleBuffTime > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aDoubleBuffTime;
//            tSTR2 = mMESSAGE.Return(1393);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aFactionReturnScroll > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aFactionReturnScroll;
//            tSTR2 = mMESSAGE.Return(1439);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aPat_Exp_x2_Time > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aPat_Exp_x2_Time;
//            tSTR2 = mMESSAGE.Return(1440);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aPK > 0)
//        {
//            tValue = mMYINFO.mAvatarInfo.aPK;
//            tSTR = mMESSAGE.Return(2666);
//            sprintf(tBuf, tSTR, tValue);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aHeavenlyWarTicket > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aHeavenlyWarTicket;
//            tSTR2 = mMESSAGE.Return(2700);
//            sprintf(tBuf, "%s %d %s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aRegistration > 0)
//        {
//            ZeroMemory(&itoabuf, sizeof(itoabuf));
//            ZeroMemory(&form, sizeof(form));
//            _itoa(mMYINFO.mAvatarInfo.aRegistration, itoabuf, 10);
//            form[0] = itoabuf[0];
//            form[1] = itoabuf[1];
//            form[2] = itoabuf[2];
//            form[3] = itoabuf[3];
//            form[4] = '.';
//            form[5] = itoabuf[4];
//            form[6] = itoabuf[5];
//            form[7] = '.';
//            form[8] = itoabuf[6];
//            form[9] = itoabuf[7];
//            form[10] = '\n';
//            tSTR = mMESSAGE.Return(1345);
//            sprintf(tBuf, "%s %s", tSTR, form);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aDamageBoostScroll > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aDamageBoostScroll;
//            tSTR2 = mMESSAGE.Return(1527);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aHealthBoostScroll > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aHealthBoostScroll;
//            tSTR2 = mMESSAGE.Return(1528);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aCriticalBoostScroll > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aCriticalBoostScroll;
//            tSTR2 = mMESSAGE.Return(1529);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aHeroPill > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aHeroPill;
//            tSTR2 = mMESSAGE.Return(2189);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aCitadelTicket > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aCitadelTicket;
//            tSTR2 = mMESSAGE.Return(2718);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aAutoHunt7Day > 0)
//        {
//            ZeroMemory(&itoabuf, sizeof(itoabuf));
//            ZeroMemory(&form, sizeof(form));
//            _itoa(mMYINFO.mAvatarInfo.aAutoHunt7Day, itoabuf, 10);
//            form[0] = itoabuf[0];
//            form[1] = itoabuf[1];
//            form[2] = itoabuf[2];
//            form[3] = itoabuf[3];
//            form[4] = '.';
//            form[5] = itoabuf[4];
//            form[6] = itoabuf[5];
//            form[7] = '.';
//            form[8] = itoabuf[6];
//            form[9] = itoabuf[7];
//            form[10] = '\n';
//            tSTR = mMESSAGE.Return(1890);
//            sprintf(tBuf, "%s %s", tSTR, form);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aAutoHunt5Hour > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aAutoHunt5Hour;
//            tSTR2 = mMESSAGE.Return(1889);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aIvyHallTimeR12 > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aIvyHallTimeR12;
//            tSTR2 = mMESSAGE.Return(1898);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aPreventRefineBreak > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aPreventRefineBreak;
//            tSTR2 = mMESSAGE.Return(1902);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aEvergreenPalaceTime > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aEvergreenPalaceTime;
//            tSTR2 = mMESSAGE.Return(2582);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aIvyHallFishing > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aIvyHallFishing;
//            tSTR2 = mMESSAGE.Return(1956);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aProxyShopTime > 0)
//        {
//            ZeroMemory(&itoabuf, sizeof(itoabuf));
//            ZeroMemory(&form, sizeof(form));
//            _itoa(mMYINFO.mAvatarInfo.aProxyShopTime, itoabuf, 10);
//            form[0] = itoabuf[0];
//            form[1] = itoabuf[1];
//            form[2] = itoabuf[2];
//            form[3] = itoabuf[3];
//            form[4] = '.';
//            form[5] = itoabuf[4];
//            form[6] = itoabuf[5];
//            form[7] = '.';
//            form[8] = itoabuf[6];
//            form[9] = itoabuf[7];
//            form[10] = '\n';
//            tSTR = mMESSAGE.Return(1895);
//            sprintf(tBuf, "%s %s", tSTR, form);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aFactionNoticeScroll > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aFactionNoticeScroll;
//            tSTR2 = mMESSAGE.Return(2118);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aDoubleMountExpTime > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aDoubleMountExpTime;
//            tSTR2 = mMESSAGE.Return(2144);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aMountAbsorbTime > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aMountAbsorbTime;
//            tSTR2 = mMESSAGE.Return(2151);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aDoubleRageGain > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aDoubleRageGain;
//            tSTR2 = mMESSAGE.Return(2187);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aRageBurstPill > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aRageBurstPill;
//            tSTR2 = mMESSAGE.Return(2188);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aWarriorScroll > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aWarriorScroll;
//            tSTR2 = mMESSAGE.Return(2240);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aWingProtectionScroll > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aWingProtectionScroll;
//            tSTR2 = mMESSAGE.Return(2311);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aPreventImproveDown > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mAvatarInfo.aPreventImproveDown;
//            tSTR2 = mMESSAGE.Return(2353);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aHeavenlyOrderCharm > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aHeavenlyOrderCharm;
//            tSTR2 = mMESSAGE.Return(2379);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aTheFortressTime > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aTheFortressTime;
//            tSTR2 = mMESSAGE.Return(2381);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mStatBalance > 0)
//        {
//            tSTR = mMESSAGE.Return(80);
//            tValue = mMYINFO.mStatBalance;
//            tSTR2 = mMESSAGE.Return(2382);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aPetInventoryDate > 0)
//        {
//            ZeroMemory(&itoabuf, sizeof(itoabuf));
//            ZeroMemory(&form, sizeof(form));
//            _itoa(mMYINFO.mAvatarInfo.aPetInventoryDate, itoabuf, 10);
//            form[0] = itoabuf[0];
//            form[1] = itoabuf[1];
//            form[2] = itoabuf[2];
//            form[3] = itoabuf[3];
//            form[4] = '.';
//            form[5] = itoabuf[4];
//            form[6] = itoabuf[5];
//            form[7] = '.';
//            form[8] = itoabuf[6];
//            form[9] = itoabuf[7];
//            form[10] = '\n';
//            tSTR = mMESSAGE.Return(2370);
//            sprintf(tBuf, "%s %s", tSTR, form);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aLimitedDungeonTicket > 0)
//        {
//            tSTR = mMESSAGE.Return(79);
//            tValue = mMYINFO.mAvatarInfo.aLimitedDungeonTicket;
//            tSTR2 = mMESSAGE.Return(2395);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aPremiumService > 0)
//        {
//            ZeroMemory(&itoabuf, sizeof(itoabuf));
//            ZeroMemory(&form, sizeof(form));
//            _itoa(mMYINFO.mAvatarInfo.aPremiumService, itoabuf, 10);
//            form[0] = itoabuf[0];
//            form[1] = itoabuf[1];
//            form[2] = itoabuf[2];
//            form[3] = itoabuf[3];
//            form[4] = '.';
//            form[5] = itoabuf[4];
//            form[6] = itoabuf[5];
//            form[7] = '.';
//            form[8] = itoabuf[6];
//            form[9] = itoabuf[7];
//            form[10] = '\n';
//            tSTR = mMESSAGE.Return(2501);
//            sprintf(tBuf, "%s %s", tSTR, form);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aLunaCharm > 0)
//        {
//            tSTR = mMESSAGE.Return(2830);
//            tValue = mMYINFO.mAvatarInfo.aLunaCharm;
//            tSTR2 = mMESSAGE.Return(2527);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aTevushiRoad % 10000 > 0)
//        {
//            tSTR = mMESSAGE.Return(1275);
//            tValue = mMYINFO.mAvatarInfo.aTevushiRoad % 10000;
//            tSTR2 = mMESSAGE.Return(2731);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//        if (mMYINFO.mAvatarInfo.aVigilanteScroll > 0)
//        {
//            tSTR = mMESSAGE.Return(1275);
//            tValue = mMYINFO.mAvatarInfo.aVigilanteScroll;
//            tSTR2 = mMESSAGE.Return(2678);
//            sprintf(tBuf, "%s %d%s", tSTR2, tValue, tSTR);
//            tStrLen = mUTIL.GetStringLength(tBuf);
//            mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//            sY -= 15;
//        }
//    }
//   /* sX = 882;
//    sY = 190;*/
//    sX = mMYINFO.mScreenXSize - 5;
//    sY = 190;
//    if (!tIsMiniMapMinimized)
//    {
//        sY = 55;
//    }
//    if (mMYINFO.mGeneralExperienceUpRatio > 1)
//    {
//        tValue = mMYINFO.mGeneralExperienceUpRatio;
//        tSTR = mMESSAGE.Return(1724);
//        sprintf(tBuf, tSTR, tValue);
//        tStrLen = mUTIL.GetStringLength(tBuf);
//        mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//        sY += 15;
//    }
//    if (mMYINFO.mItemDropUpRatio > 1)
//    {
//        tValue = mMYINFO.mItemDropUpRatio;
//        tSTR = mMESSAGE.Return(1725);
//        sprintf(tBuf, tSTR, tValue);
//        tStrLen = mUTIL.GetStringLength(tBuf);
//        mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//        sY += 15;
//    }
//    if (mMYINFO.mKillOtherTribeAddValue > 0)
//    {
//        tValue = mMYINFO.mKillOtherTribeAddValue;
//        tSTR = mMESSAGE.Return(1726);
//        sprintf(tBuf, tSTR, tValue);
//        tStrLen = mUTIL.GetStringLength(tBuf);
//        mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//        sY += 15;
//    }
//    if (mMYINFO.mPvPDamageUpRatio > 10 && (mMYINFO.mPvPDamageUpTribe == mMYINFO.mAvatarInfo.aTribe || mMYINFO.mPvPDamageUpTribe == 4))
//    {
//        tValue = 10 * (mMYINFO.mPvPDamageUpRatio - 10);
//        tSTR = mMESSAGE.Return(2271);
//        sprintf(tBuf, tSTR, tValue);
//        tStrLen = mUTIL.GetStringLength(tBuf);
//        mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//        sY += 15;
//    }
//    if (mMYINFO.mPvMDamageUpRatio > 10 && (mMYINFO.mPvMDamageUpTribe == mMYINFO.mAvatarInfo.aTribe || mMYINFO.mPvMDamageUpTribe == 4))
//    {
//        tValue = 10 * (mMYINFO.mPvMDamageUpRatio - 10);
//        tSTR = mMESSAGE.Return(2272);
//        sprintf(tBuf, tSTR, tValue);
//        tStrLen = mUTIL.GetStringLength(tBuf);
//        mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//        sY += 15;
//    }
//    if (mMYINFO.mMaxPotionEventNum > 0 && (mMYINFO.mMaxPotionEventTribe == mMYINFO.mAvatarInfo.aTribe || mMYINFO.mMaxPotionEventTribe == 4))
//    {
//        tValue = 10 * mMYINFO.mMaxPotionEventNum;
//        tSTR = mMESSAGE.Return(2273);
//        sprintf(tBuf, tSTR, tValue);
//        tStrLen = mUTIL.GetStringLength(tBuf);
//        mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//        sY += 15;
//    }
//    #ifdef USE_PING
//    sprintf(tBuf, "Ping: %dms", mMYINFO.mPing);
//    tStrLen = mUTIL.GetStringLength(tBuf);
//    mUTIL.DrawFont2D(tBuf, sX - tStrLen, sY, 3);
//    #endif
//
//    float v450 = mGDATA.mZONE.mWORLD.mQuadtree->mBoxMin[0];
//    float  v451 = mGDATA.mZONE.mWORLD.mQuadtree->mBoxMax[0];
//    float  v452 = -mGDATA.mZONE.mWORLD.mQuadtree->mBoxMax[2];
//    float v453 = -mGDATA.mZONE.mWORLD.mQuadtree->mBoxMin[2];
//    int  v443 = mGDATA.mZONE.mMINI_MAP[tMiniMapZoomState].mTextureInfo.Width;
//    int v444 = mGDATA.mZONE.mMINI_MAP[tMiniMapZoomState].mTextureInfo.Height;
//    uX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[241]);
//    uY = 0;
//    if (tIsMiniMapMinimized == 1)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[241], uX, uY, uX, uY))
//            mPOINTER.Set(0);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[242], uX, uY, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (tIsMiniMapMinimized == 1)
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[241], uX, uY);
//        sX = uX + 10;
//        tDataIndex = mMAIN.ReturnWorldNameImageForConnect(mMAIN.mWorldIndex);
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX, 175);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[242], uX, uY);
//        sX = uX + 10;
//        tDataIndex = mMAIN.ReturnWorldNameImageForConnect(mMAIN.mWorldIndex);
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], sX, 40);
//    }
//    tSTR = mZONENAME.Return(mMYINFO.mPresentZoneNumber);
//    strcpy(tBuf, tSTR);
//    sY = uY + 5;
//    sX = uX + 68;
//    tStrLen = mUTIL.GetStringLength(tBuf);
//    mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 1);
//    float v473 = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
//    float v474 = -mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
//    if (mMYINFO.mPresentZoneNumber != 341)
//    {
//        sprintf(tBuf, "%d , %d", (int)(v473 - v450), (int)(v474 - v452));
//        sY = uY + 25;
//        sX = uX + 68;
//        tStrLen = mUTIL.GetStringLength(tBuf);
//        mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 1);
//    }
//    if (tIsMiniMapMinimized == 1)
//    {
//        if (bIsClick[10])
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[246], uX + 132, uY + 3);
//        else
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[245], uX + 132, uY + 3);
//    }
//    else if (bIsClick[10])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[248], uX + 132, uY + 3);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[247], uX + 132, uY + 3);
//    }
//    if (tIsMiniMapMinimized != 1)
//    {
//        goto LABEL_820;
//    }
//    int v428 = tMiniMapZoomState;
//    int iX, iY, v435, v454 = 0, v491 = 0, v436, v472, v446;
//    switch (v428)
//    {
//    case 0:
//        v473 = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
//        v474 = -mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
//        v435 = (v444 * (v474 - v452) / (v453 - v452));
//        sX = uX + 76;
//        sY = uY + 106;
//        iX = (v443 * (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] - v450) / (v451 - v450)) - 72;
//        if (iX >= 0)
//        {
//            if (iX > v443 - 145)
//            {
//                v454 = iX + v454 - (v443 - 145);
//                iX = v443 - 145;
//            }
//        }
//        else
//        {
//            v454 += iX;
//            iX = 0;
//        }
//        iY = v435 - 64;
//        if (v435 - 64 >= 0)
//        {
//            if (iY > v444 - 128)
//            {
//                v491 = iY + v491 - (v444 - 128);
//                iY = v444 - 128;
//            }
//        }
//        else
//        {
//            v491 += iY;
//            iY = 0;
//        }
//        goto LABEL_629;
//    case 1:
//        v473 = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
//        v474 = -mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
//        v436 = (v444 * (v474 - v452) / (v453 - v452));
//        v454 = uX + 76;
//        v491 = uY + 106;
//        iX = (v443 * (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] - v450) / (v451 - v450)) - 72;
//        if (iX >= 0)
//        {
//            if (iX > v443 - 145)
//            {
//                v454 = iX + v454 - (v443 - 145);
//                iX = v443 - 145;
//            }
//        }
//        else
//        {
//            v454 += iX;
//            iX = 0;
//        }
//        iY = v436 - 64;
//        if (v436 - 64 >= 0)
//        {
//            if (iY > v444 - 128)
//            {
//                v491 = iY + v491 - (v444 - 128);
//                iY = v444 - 128;
//            }
//        }
//        else
//        {
//            v491 += iY;
//            iY = 0;
//        }
//    LABEL_629:
//        v472 = iX;
//        v446 = iY;
//        mGDATA.mZONE.mMINI_MAP[tMiniMapZoomState].Draw(uX + 4,uY + 42 , 1, iX, iY, 145, 128);
//        break;
//    case 2:
//        v473 = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
//        v474 = -mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
//        v454 = uX + (v443 * (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] - v450) / (v451 - v450)) + 4;
//        v491 = uY + (v444 * (v474 - v452) / (v453 - v452)) + 42;
//        v472 = 0;
//        v446 = 0;
//        mGDATA.mZONE.mMINI_MAP[tMiniMapZoomState].Draw(uX + 4, uY + 42, 0, 0, 0, 0, 0);
//        break;
//    }
//    int v427;
//    NPC_INFO* v162;
//    NPC_INFO* v157;
//    for (i = 0; i < mPLAY.MAX_NPC_OBJECT; ++i)
//    {
//        if (mPLAY.mNPC_OBJECT[i].mCheckValidState && mPLAY.mNPC_OBJECT[i].tNPC_INFO->nType != 4)
//        {
//            v427 = tMiniMapZoomState;
//            if (v427)
//            {
//                if (v427 == 1)
//                {
//                    v473 = mPLAY.mNPC_OBJECT[i].tNPCLocation[0];
//                    v474 = -mPLAY.mNPC_OBJECT[i].tNPCLocation[2];
//                    v454 = uX + (v443 * (v473 - v450) / (v451 - v450)) + 4 - v472;
//                    v491 = uY + (v444 * (v474 - v452) / (v453 - v452)) + 42 - v446;
//                    if (v454 >= uX + 4 && v454 <= uX + 150 && v491 >= uY + 42 && v491 <= uY + 168)
//                    {
//                        switch (mPLAY.mNPC_OBJECT[i].tNPC_INFO->nTribe)
//                        {
//                        case 1:
//                            tDataIndex = 2350;
//                            break;
//                        case 2:
//                            tDataIndex = 2353;
//                            break;
//                        case 3:
//                            tDataIndex = 2356;
//                            break;
//                        case 4:
//                            tDataIndex = 2359;
//                            break;
//                        case 5:
//                            tDataIndex = 2362;
//                            break;
//                        default:
//                            break;
//                        }
//                        sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]);
//                        sY = v491 - sY / 2;
//                        sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]);
//                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], v454 - sX / 2, sY);
//                        v162 = mPLAY.mNPC_OBJECT[i].tNPC_INFO;
//                        if (v162->nIndex == mMYINFO.ReturnQuestNextNPCNumber() && (int)(mAPP->hPresentElapsedSeconds) % 2 == 1)
//                        {
//                            sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2468]);
//                            sY = v491 - sY / 2;
//                            sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2468]);
//                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2468], v454 - sX / 2, sY);
//                        }
//                    }
//                }
//            }
//            else
//            {
//                v473 = mPLAY.mNPC_OBJECT[i].tNPCLocation[0];
//                v474 = -mPLAY.mNPC_OBJECT[i].tNPCLocation[2];
//                v454 = uX + (v443 * (v473 - v450) / (v451 - v450)) + 4 - v472;
//                v491 = uY + (v444 * (v474 - v452) / (v453 - v452)) + 42 - v446;
//                if (v454 >= uX + 4 && v454 <= uX + 150 && v491 >= uY + 42 && v491 <= uY + 168)
//                {
//                    switch (mPLAY.mNPC_OBJECT[i].tNPC_INFO->nTribe)
//                    {
//                    case 1:
//                        tDataIndex = 2349;
//                        break;
//                    case 2:
//                        tDataIndex = 2352;
//                        break;
//                    case 3:
//                        tDataIndex = 2355;
//                        break;
//                    case 4:
//                        tDataIndex = 2358;
//                        break;
//                    case 5:
//                        tDataIndex = 2361;
//                        break;
//                    default:
//                        break;
//                    }
//                    sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]);
//                    sY = v491 - sY / 2;
//                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]);
//                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], v454 - sX / 2, sY);
//                    v157 = mPLAY.mNPC_OBJECT[i].tNPC_INFO;
//                    if (v157->nIndex == mMYINFO.ReturnQuestNextNPCNumber()
//                        && (int)(mAPP->hPresentElapsedSeconds) % 2 == 1)
//                    {
//                        sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2467]);
//                        sY = v491 - sY / 2;
//                        sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2467]);
//                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2467], v454 - sX / 2, sY);
//                    }
//                }
//            }
//        }
//    }
//    int v439 = 0;
//    int v426;
//    NPC_INFO* v173;
//    NPC_INFO* v168;
//    for (i = 0; i < mPLAY.MAX_NPC_OBJECT; ++i)
//    {
//        if (mPLAY.mNPC_OBJECT[i].mCheckValidState && mPLAY.mNPC_OBJECT[i].tNPC_INFO->nType != 4)
//        {
//            v426 = tMiniMapZoomState;
//            if (v426)
//            {
//                if (v426 == 1)
//                {
//                    v473 = mPLAY.mNPC_OBJECT[i].tNPCLocation[0];
//                    v474 = -mPLAY.mNPC_OBJECT[i].tNPCLocation[2];
//                    v454 = uX + (v443 * (v473 - v450) / (v451 - v450)) + 4 - v472;
//                    v491 = uY + (v444 * (v474 - v452) / (v453 - v452)) + 42 - v446;
//                    if (v454 >= uX + 4 && v454 <= uX + 150 && v491 >= uY + 42 && v491 <= uY + 168)
//                    {
//                        switch (mPLAY.mNPC_OBJECT[i].tNPC_INFO->nTribe)
//                        {
//                        case 1:
//                            tDataIndex = 2350;
//                            break;
//                        case 2:
//                            tDataIndex = 2353;
//                            break;
//                        case 3:
//                            tDataIndex = 2356;
//                            break;
//                        case 4:
//                            tDataIndex = 2359;
//                            break;
//                        case 5:
//                            tDataIndex = 2362;
//                            break;
//                        default:
//                            break;
//                        }
//                        if (!v439)
//                        {
//                            sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]);
//                            sY = v491 - sY / 2;
//                            sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]);
//                            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[tDataIndex], v454 - sX / 2, sY, uX, uY))
//                            {
//                                v439 = 1;
//                                sprintf(tBuf, "%s", mPLAY.mNPC_OBJECT[i].tNPC_INFO->nName);
//                                sY = v491 - 15;
//                                sX = mUTIL.GetStringLength(tBuf);
//                                mUTIL.DrawFont2D(tBuf, v454 - sX / 2, sY, 1);
//                            }
//                        }
//                        v173 = mPLAY.mNPC_OBJECT[i].tNPC_INFO;
//                        if (v173->nIndex == mMYINFO.ReturnQuestNextNPCNumber())
//                        {
//                            sprintf(tBuf, "%s", mPLAY.mNPC_OBJECT[i].tNPC_INFO->nName);
//                            sY = v491 - 15;
//                            sX = mUTIL.GetStringLength(tBuf);
//                            mUTIL.DrawFont2D(tBuf, v454 - sX / 2, sY, 3);
//                        }
//                    }
//                }
//            }
//            else
//            {
//                v473 = mPLAY.mNPC_OBJECT[i].tNPCLocation[0];
//                v474 = -mPLAY.mNPC_OBJECT[i].tNPCLocation[2];
//                v454 = uX + (v443 * (v473 - v450) / (v451 - v450)) + 4 - v472;
//                v491 = uY + (v444 * (v474 - v452) / (v453 - v452)) + 42 - v446;
//                if (v454 >= uX + 4 && v454 <= uX + 150 && v491 >= uY + 42 && v491 <= uY + 168)
//                {
//                    switch (mPLAY.mNPC_OBJECT[i].tNPC_INFO->nTribe)
//                    {
//                    case 1:
//                        tDataIndex = 2349;
//                        break;
//                    case 2:
//                        tDataIndex = 2352;
//                        break;
//                    case 3:
//                        tDataIndex = 2355;
//                        break;
//                    case 4:
//                        tDataIndex = 2358;
//                        break;
//                    case 5:
//                        tDataIndex = 2361;
//                        break;
//                    default:
//                        break;
//                    }
//                    if (!v439)
//                    {
//                        sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]);
//                        sY = v491 - sY / 2;
//                        sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]);
//                        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[tDataIndex], v454 - sX / 2, sY, uX, uY))
//                        {
//                            v439 = 1;
//                            sprintf(tBuf, "%s", mPLAY.mNPC_OBJECT[i].tNPC_INFO->nName);
//                            sY = v491 - 15;
//                            sX = mUTIL.GetStringLength(tBuf);
//                            mUTIL.DrawFont2D(tBuf, v454 - sX / 2, sY, 1);
//                        }
//                    }
//                    v168 = mPLAY.mNPC_OBJECT[i].tNPC_INFO;
//                    if (v168->nIndex == mMYINFO.ReturnQuestNextNPCNumber())
//                    {
//                        sprintf(tBuf, "%s", mPLAY.mNPC_OBJECT[i].tNPC_INFO->nName);
//                        sY = v491 - 15;
//                        sX = mUTIL.GetStringLength(tBuf);
//                        mUTIL.DrawFont2D(tBuf, v454 - sX / 2, sY, 3);
//                    }
//                }
//            }
//        }
//    }
//    int v425;
//    for (i = 0; i < mPLAY.MAX_MONSTER_OBJECT; ++i)
//    {
//        if (mPLAY.mMONSTER_OBJECT[i].mCheckValidState)
//        {
//            v425 = tMiniMapZoomState;
//            if (v425)
//            {
//                if (v425 == 1)
//                {
//                    v473 = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[0];
//                    v474 = -mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[2];
//                    v454 = uX + (v443 * (v473 - v450) / (v451 - v450)) + 4 - v472;
//                    v491 = uY + (v444 * (v474 - v452) / (v453 - v452)) + 42 - v446;
//                    if (v454 >= uX + 4
//                        && v454 <= uX + 150
//                        && v491 >= uY + 42
//                        && v491 <= uY + 168
//                        && !mUTIL.CheckMonsterForMe(&mPLAY.mMONSTER_OBJECT[i]))
//                    {
//                        sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2371]);
//                        sY = v491 - sY / 2;
//                        sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2371]);
//                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2371], v454 - sX / 2, sY);
//                    }
//                }
//            }
//            else
//            {
//                v473 = mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[0];
//                v474 = -mPLAY.mMONSTER_OBJECT[i].mMONSTER.mAction.aLocation[2];
//                v454 = uX + (v443 * (v473 - v450) / (v451 - v450)) + 4 - v472;
//                v491 = uY + (v444 * (v474 - v452) / (v453 - v452)) + 42 - v446;
//                if (v454 >= uX + 4
//                    && v454 <= uX + 150
//                    && v491 >= uY + 42
//                    && v491 <= uY + 168
//                    && !mUTIL.CheckMonsterForMe(&mPLAY.mMONSTER_OBJECT[i]))
//                {
//                    sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2370]);
//                    sY = v491 - sY / 2;
//                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2370]);
//                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2370], v454 - sX / 2, sY);
//                }
//            }
//        }
//    }
//    int v424 = tMiniMapZoomState;
//    int v438, v437;
//    if (v424)
//    {
//        if (v424 == 1)
//        {
//            v473 = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
//            v474 = -mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
//            v438 = (v444 * (v474 - v452) / (v453 - v452));
//            v454 = uX + 76;
//            v491 = uY + 106;
//            iX = (v443 * (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] - v450) / (v451 - v450)) - 72;
//            if (iX >= 0)
//            {
//                if (iX > v443 - 145)
//                {
//                    v454 = iX + v454 - (v443 - 145);
//                    iX = v443 - 145;
//                }
//            }
//            else
//            {
//                v454 += iX;
//                iX = 0;
//            }
//            iY = v438 - 64;
//            if (v438 - 64 >= 0)
//            {
//                if (iY > v444 - 128)
//                {
//                    v491 = iY + v491 - (v444 - 128);
//                    iY = v444 - 128;
//                }
//            }
//            else
//            {
//                v491 += iY;
//                iY = 0;
//            }
//        }
//        else if (v424 == 2)
//        {
//            v473 = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
//            v474 = -mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
//            v454 = uX + (v443 * (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] - v450) / (v451 - v450)) + 4;
//            v491 = uY + (v444 * (v474 - v452) / (v453 - v452)) + 42;
//        }
//    }
//    else
//    {
//        v473 = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
//        v474 = -mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
//        v437 = (v444 * (v474 - v452) / (v453 - v452));
//        v454 = uX + 76;
//        v491 = uY + 106;
//        iX = (v443 * (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] - v450) / (v451 - v450)) - 72;
//        if (iX >= 0)
//        {
//            if (iX > v443 - 145)
//            {
//                v454 = iX + v454 - (v443 - 145);
//                iX = v443 - 145;
//            }
//        }
//        else
//        {
//            v454 += iX;
//            iX = 0;
//        }
//        iY = v437 - 64;
//        if (v437 - 64 >= 0)
//        {
//            if (iY > v444 - 128)
//            {
//                v491 = iY + v491 - (v444 - 128);
//                iY = v444 - 128;
//            }
//        }
//        else
//        {
//            v491 += iY;
//            iY = 0;
//        }
//    }
//    float v469 = 360.0 - mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aFront;
//    if (v469 == 360.0)
//    {
//        v469 = 0.0;
//    }
//    tDataIndex = (v469 / 30.0) + 249;
//    sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]);
//    sY = v491 - sY / 2;
//    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]);
//    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], v454 - sX / 2, sY);
//    v469 = 360.0 - mUTIL.GetYAngle(mGXD.mCameraEye.x, mGXD.mCameraEye.z, mGXD.mCameraLook.x, mGXD.mCameraLook.z);
//    if (v469 == 360.0)
//    {
//        v469 = 0.0;
//    }
//    tDataIndex = (v469 / 30.0) + 261;
//    sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[tDataIndex]);
//    sY = v491 - sY / 2;
//    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[tDataIndex]);
//    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], v454 - sX / 2, sY);
//    int v423, v455, v456;
//    if (strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
//    {
//        for (i = 1; i < mPLAY.MAX_AVATAR_OBJECT; ++i)
//        {
//            if (mPLAY.mAVATAR_OBJECT[i].mCheckValidState && mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState && !strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aPartyName, mMYINFO.mAvatarInfo.aPartyName))
//            {
//                v423 = tMiniMapZoomState;
//                if (v423)
//                {
//                    if (v423 == 1)
//                    {
//                        v473 = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
//                        v474 = -mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
//                        v456 = uX + (v443 * (v473 - v450) / (v451 - v450)) + 4 - v472;
//                        v491 = uY + (v444 * (v474 - v452) / (v453 - v452)) + 42 - v446;
//                        if (v456 >= uX + 4 && v456 <= uX + 150 && v491 >= uY + 42 && v491 <= uY + 168)
//                        {
//                            sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2368]);
//                            sY = v491 - sY / 2;
//                            sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2368]);
//                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2368], v456 - sX / 2, sY);
//                        }
//                    }
//                }
//                else
//                {
//                    v473 = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
//                    v474 = -mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
//                    v455 = uX + (v443 * (v473 - v450) / (v451 - v450)) + 4 - v472;
//                    v491 = uY + (v444 * (v474 - v452) / (v453 - v452)) + 42 - v446;
//                    if (v455 >= uX + 4 && v455 <= uX + 150 && v491 >= uY + 42 && v491 <= uY + 168)
//                    {
//                        sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2367]);
//                        sY = v491 - sY / 2;
//                        sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2367]);
//                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2367], v455 - sX / 2, sY);
//                    }
//                }
//            }
//        }
//    }
//    int v422, v457, v458;
//    if (strcmp(mMYINFO.mAvatarInfo.aGuildName, ""))
//    {
//        for (i = 1; i < mPLAY.MAX_AVATAR_OBJECT; ++i)
//        {
//            if (mPLAY.mAVATAR_OBJECT[i].mCheckValidState
//                && mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState
//                && !strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aGuildName, mMYINFO.mAvatarInfo.aGuildName))
//            {
//                v422 = tMiniMapZoomState;
//                if (v422)
//                {
//                    if (v422 == 1)
//                    {
//                        v473 = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
//                        v474 = -mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
//                        v458 = uX + (v443 * (v473 - v450) / (v451 - v450)) + 4 - v472;
//                        v491 = uY + (v444 * (v474 - v452) / (v453 - v452)) + 42 - v446;
//                        if (v458 >= uX + 4 && v458 <= uX + 150 && v491 >= uY + 42 && v491 <= uY + 168)
//                        {
//                            sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2365]);
//                            sY = v491 - sY / 2;
//                            sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2365]);
//                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2365], v458 - sX / 2, sY);
//                        }
//                    }
//                }
//                else
//                {
//                    v473 = mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[0];
//                    v474 = -mPLAY.mAVATAR_OBJECT[i].mDATA.aAction.aLocation[2];
//                    v457 = uX + (v443 * (v473 - v450) / (v451 - v450)) + 4 - v472;
//                    v491 = uY + (v444 * (v474 - v452) / (v453 - v452)) + 42 - v446;
//                    if (v457 >= uX + 4 && v457 <= uX + 150 && v491 >= uY + 42 && v491 <= uY + 168)
//                    {
//                        sY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2364]);
//                        sY = v491 - sY / 2;
//                        sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2364]);
//                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2364], v457 - sX / 2, sY);
//                    }
//                }
//            }
//        }
//    }
//    mZONEMOVEINFO.DrawZonePortalForMinimap( tMiniMapZoomState );
//    if (bIsClick[11])
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[244], uX + 4, uY + 153);
//    else
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[512], uX + 4, uY + 153);
//    if (bIsClick[12])
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[243], uX + 132, uY + 153);
//    else
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[513], uX + 132, uY + 153);
//LABEL_820:
//    uX = 0;
//    uY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[50]);
//    if (tIsMinimizeChatWindow == 1)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2404], uX, uY - 249, uX, uY))
//            mPOINTER.Set(0);
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[89], uX, uY - 173, uX, uY))
//            mPOINTER.Set(0);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2404], uX, uY - 93, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1369], uX, uY - 16, uX, uY))
//        mPOINTER.Set(0);
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[50], uX, uY, uX, uY))
//        mPOINTER.Set(0);
//    if (tIsMinimizeChatWindow == 1)
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2404], uX, uY - 249);
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[89], uX, uY - 173);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2404], uX, uY - 93);
//    }
//    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1369], uX, uY - 16);
//    GIMAGE2D::Display(&mGDATA.mUI_MAIN[50], uX, uY);
//    switch (tSelectChatMethodIndex)
//    {
//    case 1:
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1370], uX + 3, uY - 13);
//        break;
//    case 2:
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1371], uX + 80, uY - 13);
//        break;
//    case 3:
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1372], uX + 157, uY - 13);
//        break;
//    case 4:
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1373], uX + 234, uY - 13);
//        break;
//    case 5:
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1374], uX + 311, uY - 13);
//        break;
//    default:
//        break;
//    }
//    if (tAllowChatDisplayIndex[0] == 1)
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], uX + 65, uY - 13);
//    if (tAllowChatDisplayIndex[1] == 1)
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], uX + 142, uY - 13);
//    if (tAllowChatDisplayIndex[2] == 1)
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], uX + 219, uY - 13);
//    if (tAllowChatDisplayIndex[3] == 1)
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], uX + 296, uY - 13);
//    if (tAllowChatDisplayIndex[4] == 1)
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], uX + 373, uY - 13);
//    int tColor = 0;
//    if (mEDITBOX.mDataIndex == 4)
//    {
//        GetWindowTextA(mEDITBOX.mDATA[3], tBuf, 1000);
//        mUTIL.DrawFont2D(tBuf, uX + 85, uY + 23, 1);
//        sY = uY + 23;
//        sX = uX;
//        tStrLen = mUTIL.GetStringLength(tBuf);
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + tStrLen + 86, sY);
//    }
//    else
//    {
//        switch (tSelectChatMethodIndex)
//        {
//        case 0:
//            tColor = mFONTCOLOR.mData[46];
//            sY = uY + 23;
//            sX = uX + 123;
//            tStrLen = mUTIL.GetStringLength(tNameForWhisper);
//            mUTIL.DrawFont2D(tNameForWhisper, sX - tStrLen / 2, sY, tColor);
//            break;
//        case 1:
//            tColor = mFONTCOLOR.mData[45];
//            sY = uY + 23;
//            sX = uX + 123;
//            tStrLen = mUTIL.GetStringLength(tNameForWhisper);
//            mUTIL.DrawFont2D(tNameForWhisper, sX - tStrLen / 2, sY, tColor);
//            break;
//        case 2:
//            tColor = mFONTCOLOR.mData[48];
//            sY = uY + 23;
//            sX = uX + 123;
//            tStrLen = mUTIL.GetStringLength(tNameForWhisper);
//            mUTIL.DrawFont2D(tNameForWhisper, sX- tStrLen / 2, sY, tColor);
//            break;
//        case 3:
//            tColor = mFONTCOLOR.mData[49];
//            sY = uY + 23;
//            sX = uX + 123;
//            tStrLen = mUTIL.GetStringLength(tNameForWhisper);
//            mUTIL.DrawFont2D(tNameForWhisper, sX - tStrLen / 2, sY, tColor);
//            break;
//        case 4:
//            tColor = mFONTCOLOR.mData[50];
//            sY = uY + 23;
//            sX = uX + 123;
//            tStrLen = mUTIL.GetStringLength(tNameForWhisper);
//            mUTIL.DrawFont2D(tNameForWhisper, sX - tStrLen / 2, sY, tColor);
//            break;
//        case 5:
//            tColor = mFONTCOLOR.mData[47];
//            sY = uY + 23;
//            sX = uX + 123;
//            tStrLen = mUTIL.GetStringLength(tNameForWhisper);
//            mUTIL.DrawFont2D(tNameForWhisper, sX - tStrLen / 2, sY, tColor);
//            break;
//        default:
//            break;
//        }
//    }
//    GetWindowTextA(mEDITBOX.mDATA[4], tBuf, 1000);
//    mUTIL.DrawFont2D(tBuf, uX + 8, uY + 4, 1);
//    if (mEDITBOX.mDataIndex == 5)
//    {
//        sY = uY + 4;
//        sX = uX;
//        tStrLen = mUTIL.GetStringLength(tBuf);
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + tStrLen + 9, sY);
//    }
//    if (tIsMinimizeChatWindow == 1)
//    {
//        if (bIsClick[20])
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[312], uX + 375, uY + 2);
//        else
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[311], uX + 375, uY + 2);
//    }
//    else if (bIsClick[20])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[314], uX + 375, uY + 2);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[313], uX + 375, uY + 2);
//    }
//    if (tIsMinimizeChatWindow == 1)
//    {
//        for (i = tMessageNum; i < tMessageNum + 5 && i <= tMaxMessageNum - 1; ++i)
//            mUTIL.DrawFont2D(tSysMessage[i], uX + 26, uY + 15 * (i - tMessageNum) - 244, tDisplaySort[i]);
//        if (bIsClick[21])
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2405], uX + 3, uY - 247);
//        if (bIsClick[22])
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2406], uX + 3, uY - 228);
//        if (bIsClick[23])
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2407], uX + 3, uY - 209);
//        if (bIsClick[24])
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2408], uX + 3, uY - 190);
//        }
//        else if (tDisplayState)
//        {
//            if (mAPP->hPresentElapsedSeconds - tDisplayUpdateTime > 1.0)
//                tDisplayState = 0;
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2416], uX + 3, uY - 190);
//        }
//        for (i = tChatMessageNum; i < tChatMessageNum + 10 && i <= tMaxChatMessageNum - 1; ++i)
//            mUTIL.DrawFont2D(tChatMessage[i], uX + 26, uY + 15 * (i - tChatMessageNum) - 167, tChatMessageDisplaySort[i]);
//        if (bIsClick[25])
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2543], uX + 3, uY - 170);
//        if (bIsClick[26])
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2544], uX + 3, uY - 132);
//        if (bIsClick[27])
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2545], uX + 3, uY - 91);
//        if (bIsClick[28])
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2546], uX + 3, uY - 53);
//        }
//        else if (tDisplayState2)
//        {
//            if (mAPP->hPresentElapsedSeconds - tUpdateTime2 > 1.0)
//                tDisplayState2 = 0;
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2547], uX + 3, uY - 53);
//        }
//    }
//    else
//    {
//        for (i = tChatMessageNum; i < tChatMessageNum + 5 && i <= tMaxChatMessageNum - 1; ++i)
//            mUTIL.DrawFont2D(tChatMessage[i], uX + 26, uY + 15 * (i - tChatMessageNum) - 89, tChatMessageDisplaySort[i]);
//        if (bIsClick[25])
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2405], uX + 3, uY - 91);
//        if (bIsClick[26])
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2406], uX + 3, uY - 72);
//        if (bIsClick[27])
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2407], uX + 3, uY - 53);
//        if (bIsClick[28])
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2408], uX + 3, uY - 34);
//        }
//        else if (tDisplayState2)
//        {
//            if (mAPP->hPresentElapsedSeconds - tUpdateTime2 > 1.0)
//                tDisplayState2 = 0;
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2416], uX + 3, uY - 34);
//        }
//    }
//    if (bIsClick[30])
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[52], uX + 182, uY + 19);
//    if (bIsClick[31])
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[53], uX + 205, uY + 19);
//    if (bIsClick[32])
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[54], uX + 228, uY + 19);
//    if (bIsClick[33])
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[55], uX + 251, uY + 19);
//    if (bIsClick[34])
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[56], uX + 274, uY + 19);
//    if (bIsClick[35])
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[57], uX + 297, uY + 19);
//    if (bIsClick[36])
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[58], uX + 320, uY + 19);
//    if (bIsClick[37])
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[59], uX + 343, uY + 19);
//    if (bIsClick[38])
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[60], uX + 366, uY + 19);
//    if (mMYINFO.mOnlineAutoTime != -1)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4107], uX + 32, uY - 382, uX, uY))
//            mPOINTER.Set(0);
//        if (bIsClick[115])
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4109], uX + 32, uY - 382);
//        }
//        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4107], uX + 32, uY - 382, uX, uY))
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4108], uX + 32, uY - 382);
//        }
//        else
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4107], uX + 32, uY - 382);
//        }
//    }
//    if (mMYINFO.mAvatarInfo.aCitadelTicket > 0)
//    {
//        uX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4158]) - 1;
//        uY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[241]) + 3;
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4158], uX, uY + 23, uX, uY))
//            mPOINTER.Set(0);
//        if (mMYINFO.mPresentZoneNumber == 1 || mMYINFO.mPresentZoneNumber == 6 || mMYINFO.mPresentZoneNumber == 11 || mMYINFO.mPresentZoneNumber == 140)
//        {
//            if (bIsClick[117])
//            {
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4160], uX, uY + 23);
//            }
//            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4158], uX, uY + 23, uX, uY))
//            {
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4159], uX, uY + 23);
//            }
//            else
//            {
//                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4158], uX, uY + 23);
//            }
//        }
//    }
//    // Hotkey Buttons
//    if (mMYINFO.mScreenXSize > 1024)            // Set Coords for Button
//    {
//        sX = mMYINFO.mScreenXSize / 2;
//        uX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2422]) / 2;
//        uY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2422]);
//    }
//    else
//    {
//        uX = 391;
//        uY = 728;
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2422], uX, uY, uX, uY))
//        mPOINTER.Set(0);
//    if (mGAMEOPTION.tShortCutKey == 1)
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[36], uX, uY);
//    else
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2422], uX, uY);
//    sprintf(tBuf, "%d", mMYINFO.mHotKeyPage + 1);
//    mUTIL.DrawFont2D(tBuf, uX + 9, uY + 15, 1);
//    int v421, v490, v493;
//    SKILL_INFO* v447;
//    ITEM_INFO* v441;
//    for (i = 0; i < 14; ++i)
//    {
//        v421 = mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][2];
//        switch (v421)
//        {
//        case 1:
//            v447 = mSKILL.Search(mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][0]);
//            if (v447)
//            {
//                if (i == mMYINFO.mHotKeyIndex)
//                    v490 = mSKILLUI.CheckPossibleActionSkill(&mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][0]) ? v447->sDataNumber2D + 2 : v447->sDataNumber2D + 3;
//                else
//                    v490 = v447->sDataNumber2D + 1;
//                GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[v490], uX + 30 * i + 24, uY + 7);
//                if (v447->sLearnSkillPoint != v447->sMaxUpgradePoint)
//                {
//                    v493 = (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][1] * 11.0 / v447->sMaxUpgradePoint);
//                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[v493 + 616], uX + 30 * i + 24, uY + 7);
//                }
//            }
//            break;
//        case 2:
//            v490 = mSKILLUI.ReturnEmoticonImageIndex(mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][0]);
//            if (v490 != -1)
//            {
//                v490 += 2;
//                GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[v490], uX + 30 * i + 24, uY + 7);
//            }
//            break;
//        case 3:
//            v441 = mITEM.Search(mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][0]);
//            if (v441)
//            {
//                v490 = v441->iDataNumber2D - 1;
//                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v490], uX + 30 * i + 24, uY + 7);
//                if (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][1] > 0)
//                {
//                    sprintf(tBuf, "%d", mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][1]);
//                    mUTIL.DrawFont2D(tBuf, uX + 30 * i + 30, uY + 21, 1);
//                }
//            }
//            break;
//        }
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2548], uX, uY - 17, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (bIsClick[29])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2552], uX, uY - 17);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2548], uX, uY - 17, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2549], uX, uY - 17);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2548], uX, uY - 17);
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2705], uX + 434, uY - 17, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (bIsClick[99])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2707], uX + 434, uY - 17);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2705], uX + 434, uY - 17, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2706], uX + 434, uY - 17);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2705], uX + 434, uY - 17);
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2793], uX + 409, uY - 17, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (bIsClick[98])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2733], uX + 409, uY - 17);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2793], uX + 409, uY - 17, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2732], uX + 409, uY - 17);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2793], uX + 409, uY - 17);
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3218], uX + 309, uY - 17, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (bIsClick[100])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3220], uX + 309, uY - 17);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3218], uX + 309, uY - 17, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3219], uX + 309, uY - 17);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3218], uX + 309, uY - 17);
//    }
//    if (mMYINFO.mAvatarInfo.aBeginnerPackageIcon == 1)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2983], uX + 384, uY - 17, uX, uY))
//        {
//            mPOINTER.Set(0);
//        }
//        if (bIsClick[96])
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2985], uX + 384, uY - 17);
//        }
//        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2983], uX + 384, uY - 17, uX, uY))
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2984], uX + 384, uY - 17);
//        }
//        else
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2983], uX + 384, uY - 17);
//        }
//    }
//   /* if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3287], uX + 284, uY - 17, uX, uY)) // HOISUNDO_UI Draw
//        mPOINTER.Set(0);
//    if (bIsClick[101])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3289], uX + 284, uY - 17);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3287], uX + 284, uY - 17, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3288], uX + 284, uY - 17);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3287], uX + 284, uY - 17);
//    }*/
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3432], uX + 234, uY - 17, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (bIsClick[103])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3434], uX + 234, uY - 17);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3432], uX + 234, uY - 17, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3433], uX + 234, uY - 17);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3432], uX + 234, uY - 17);
//    }
//    if (mMYINFO.mPresentZoneNumber == 170 || mMYINFO.mPresentZoneNumber == 50 || mMYINFO.mPresentZoneNumber == 52)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3480], uX + 184, uY - 16, uX, uY))
//        {
//            mPOINTER.Set(0);
//        }
//        if (bIsClick[105])
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3482], uX + 184, uY - 16);
//        }
//        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3480], uX + 184, uY - 16, uX, uY))
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3481], uX + 184, uY - 16);
//        }
//        else
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3480], uX + 184, uY - 16);
//        }
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3495], uX + 159, uY - 16, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (bIsClick[107])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3497], uX + 159, uY - 16);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3495], uX + 159, uY - 16, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3496], uX + 159, uY - 16);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3495], uX + 159, uY - 16);
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3498], uX + 458, uY + 2, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (bIsClick[106])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3500], uX + 458, uY + 2);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3498], uX + 458, uY + 2, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3499], uX + 458, uY + 2);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3498], uX + 458, uY + 2);
//    }
//   /* if (!mPLAY.mWorldInfo.mTribeSymbolBattle)
//    {
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3524], uX + 134, uY - 16, uX, uY))
//            mPOINTER.Set(0);
//        if (bIsClick[108])
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3526], uX + 134, uY - 16);
//        }
//        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3524], uX + 134, uY - 16, uX, uY))
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3525], uX + 134, uY - 16);
//        }
//        else
//        {
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3524], uX + 134, uY - 16);
//        }
//    }*/
//    // Special Shop
//    if ( nIsClick[0] )
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3417], uX + 25, uY - 50);
//    }
//    else if ( GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3415], uX + 25, uY - 50, uX, uY) )
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3416], uX + 25, uY - 50);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3415], uX + 25, uY - 50);
//    }
//    // Constellation
//    /*#ifdef CONSTELLATION
//    if ( BASICUI::nIsClick[1] )
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3526], uX + 85, uY - 50);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3524], uX + 85, uY - 50, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3525], uX + 85, uY - 50);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3524], uX + 85, uY - 50);
//    }
//    #endif*/
//
//    if (bIsClick[109])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3590], uX + 109, uY - 16);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3588], uX + 109, uY - 16, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3589], uX + 109, uY - 16);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3588], uX + 109, uY - 16);
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3653], uX + 84, uY - 16, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (bIsClick[110]) // Capsule
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3655], uX + 84, uY - 16);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3653], uX + 84, uY - 16, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3654], uX + 84, uY - 16);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3653], uX + 84, uY - 16);
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3730], uX + 59, uY - 16, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (bIsClick[111])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3732], uX + 59, uY - 16);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3730], uX + 59, uY - 16, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3731], uX + 59, uY - 16);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3730], uX + 59, uY - 16);
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2988], uX + 359, uY - 17, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (bIsClick[95])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2990], uX + 359, uY - 17);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2988], uX + 359, uY - 17, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2989], uX + 359, uY - 17);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2988], uX + 359, uY - 17);
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2992], uX + 334, uY - 17, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (bIsClick[94])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2994], uX + 334, uY - 17);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2992], uX + 334, uY - 17, uX, uY) || mMYINFO.mAvatarInfo.iUseOrnament)
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2993], uX + 334, uY - 17);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2992], uX + 334, uY - 17);
//    }
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2796], uX + 25, uY - 17, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (bIsClick[97])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2798], uX + 25, uY - 17);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2796], uX + 25, uY - 17, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2797], uX + 25, uY - 17);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2796], uX + 25, uY - 17);
//    }
//    if (bIsClick[39])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[61], uX + 442, uY + 5);
//    }
//    if (bIsClick[40])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[62], uX + 442, uY + 22);
//    }
//    sY = uY + -33;
//    sX = 25;
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3942], uX + sX, sY, uX, uY))
//        mPOINTER.Set(0);
//    if (bIsClick[113])
//    {
//        sY = uY + -33;
//        sX = 25;
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3944], uX + sX, sY);
//    }
//    else
//    {
//        sY = uY + -33;
//        sX = 25;
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3942], uX + sX, sY, uX, uY))
//        {
//            sY = uY + -33;
//            sX = 25;
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3943], uX + sX, sY);
//        }
//        else
//        {
//            sY = uY + -33;
//            sX = 25;
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3942], uX + sX, sY);
//        }
//    }
//    // NEWSKILLUI Hotkey Button
//    /*sY = uY + -32;
//    sX = 59;
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3924], uX + sX, sY, uX, uY))
//        mPOINTER.Set(0);
//    if (bIsClick[114])
//    {
//        sY = uY + -32;
//        sX = 59;
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3926], uX + sX, sY);
//    }
//    else
//    {
//        sY = uY + -32;
//        sX = 59;
//        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3924], uX + sX, sY, uX, uY))
//        {
//            sY = uY + -32;
//            sX = 59;
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3925], uX + sX, sY);
//        }
//        else
//        {
//            sY = uY + -32;
//            sX = 59;
//            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3924], uX + sX, sY);
//        }
//    }*/
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4135], uX + 84, uY - 32, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    if (bIsClick[116])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4137], uX + 84, uY - 32);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4135], uX + 84, uY - 32, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4136], uX + 84, uY - 32);
//    }
//    else
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4135], uX + 84, uY - 32);
//    }
//    uX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2423]);
//    uY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2423]);
//    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2423], uX, uY, uX, uY))
//    {
//        mPOINTER.Set(0);
//    }
//    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2423], uX, uY);
//    if (bIsClick[41])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2000], uX + 3, uY + 6);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2000], uX + 3, uY + 6, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1999], uX + 3, uY + 6);
//    }
//    if (mMYINFO.mCheckHelpConditionEffect)
//    {
//        GIMAGE2D::Display( &mGDATA.mUI_MAIN[(int)(mAPP->hPresentElapsedSeconds * 12.0) % 6 + 1992], uX - 9, uY - 10);
//    }
//    if (bIsClick[42])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2003], uX + 31, uY + 6);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2003], uX + 31, uY + 6, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2002], uX + 31, uY + 6);
//    }
//    if (bIsClick[43])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2073], uX + 59, uY + 6);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2073], uX + 59, uY + 6, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2072], uX + 59, uY + 6);
//    }
//    if (bIsClick[44])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2076], uX + 87, uY + 6);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2076], uX + 87, uY + 6, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2075], uX + 87, uY + 6);
//    }
//    if (bIsClick[45])
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2079], uX + 115, uY + 6);
//    }
//    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2079], uX + 115, uY + 6, uX, uY))
//    {
//        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2078], uX + 115, uY + 6);
//    }
//    if (mPLAY.mWorldInfo.mTribeVoteState[mMYINFO.mAvatarInfo.aTribe])
//    {
//        GIMAGE2D::Display( &mGDATA.mUI_MAIN[(int)(mAPP->hPresentElapsedSeconds * 16.0) % 8 + 2091], uX + 115, uY + 6);
//    }
//    mMYINFO.DrawForQuestCall();
//    if (mMYINFO.mClientTickNew > 0 && mMYINFO.uUserSort > 0)
//    {
//        sprintf(tBuf, "NowTime : %d / %d %d:%d %s", mMYINFO.mServerMon, mMYINFO.mServerDay, mMYINFO.mServerHour, mMYINFO.mServerMin, mMYINFO.mServerWDay);
//        mUTIL.DrawFont2D(tBuf, 10, 150, 3);
//    }
//    mUTIL.DrawFont2D(ProgramName, 5, 75, 3);
//}

BOOL BASICUI::LBUTTONDOWN(int uX, int uY)
{
    int tIndex = 0;
    int i, j, k;
    int sX, sY;
    char* tSTR;
    int tStrLen = 0;
    int v10;
    ITEM_INFO* v12;
    int result = 0;

    if (mMAIN.mMainMode != 6 || mMAIN.mSubMode != 4)
    {
        return 0;
    }

    tIndex = BASICUI::GetHotkeyIndex1(uX, uY, -1);
    if (tIndex != -1)
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        if (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][2] == 1 || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][2] == 2)
        {
            mCHOICEUI.Set(5, mMYINFO.mHotKeyPage, tIndex, mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][0], mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][1], mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][2], 0, 0, 0, 0, 0, 0);
            return 1;
        }
        if (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][2] == 3)
        {
            v12 = mITEM.Search(mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][0]);
            if (!v12)
            {
                return 1;
            }
            if (v12->iSort == 2)
            {
                if (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][1] <= 1)
                {
                    mCHOICEUI.Set(5, mMYINFO.mHotKeyPage, tIndex, mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][0], 1, mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][2], 0, 0, 0, 0, 0, 0);
                    return 1;
                }
                if ((mGXD.mKeyboardImmediateData[42] & 0x80) != 0)
                {
                    mCHOICEUI.Set(5, mMYINFO.mHotKeyPage, tIndex, mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][0], 0, mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][2], 0, 0, 0, 1, uX - 52, uY - 72);
                    return 1;
                }
            }
            mCHOICEUI.Set(5, mMYINFO.mHotKeyPage, tIndex, mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][0], mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][1], mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][tIndex][2], 0, 0, 0, 0, 0, 0);
            return 1;
        }
    }
    sX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[241]);
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1050]) - 1;
    mY = 27;
    if (mMYINFO.mAvatarInfo.aEquip[8][0] > 0 && mITEM.Search(mMYINFO.mAvatarInfo.aEquip[8][0]))
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1050], mX, mY, uX, uY))
        {
            return 1;
        }
        mY += GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1050]);
    }
    if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10 && mMYINFO.mAvatarInfo.aAnimalIndex < 20)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3592], mX, mY, uX, uY))
        {
            return 1;
        }
        mY += GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3592]);
    }
    if (strcmp(mMYINFO.mAvatarInfo.aTeacher, "") || strcmp(mMYINFO.mAvatarInfo.aStudent, ""))
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[395], 116, 105, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1624], 0, 105, uX, uY))
        {
            return 1;
        }
    }
    if (!strcmp(mMYINFO.mAvatarInfo.aPartyName, mMYINFO.mAvatarInfo.aName))
    {
        for (i = 1; i < 5 && strcmp(mMYINFO.mPartyInfo[i], ""); ++i)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[395], 116, 50 * i + 155, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[i] = 1;
                return 1;
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[393], 0, 50 * i + 155, uX, uY))
            {
                return 1;
            }
        }
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[93], 0, 0, uX, uY))
    {
        return 1;
    }
    mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[241]);
    mY = 0;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[245], mX + 132, mY + 3, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[10] = 1;
        return 1;
    }
    if (mMinimap == 1)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[244], mX + 4, mY + 153, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[11] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[243], mX + 132, mY + 153, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[12] = 1;
            return 1;
        }
    }
    if (mMinimap == 1)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[241], mX, mY, uX, uY))
        {
            return 1;
        }
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[242], mX, mY, uX, uY))
    {
        return 1;
    }
    mX = 0;
    mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[50]);
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[311], mX + 375, mY + 2, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[20] = 1;
        return 1;
    }
    if (mChatWindow == 1)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2405], mX + 3, mY - 247, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[21] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2406], mX + 3, mY - 228, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[22] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2407], mX + 3, mY - 209, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[23] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2408], mX + 3, mY - 190, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[24] = 1;
            return 1;
        }
        for (j = mChatMessageNum; j < mChatMessageNum + 10 && j <= mMaxChatMessageNum - 1; ++j)
        {
            if (uX > mX + 25 && uX < mX + 106 && uY > mY + 15 * (j - mChatMessageNum) - 167 && uY < mY + 15 * (j - mChatMessageNum) - 157)
            {
                if (strcmp(mChatAvatarName[j], ""))
                {
                    mSelectChatIndex = 0;
                    strcpy(mChatName, mChatAvatarName[j]);
                }
                return 1;
            }
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2543], mX + 3, mY - 170, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[25] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2544], mX + 3, mY - 132, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[26] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2545], mX + 3, mY - 91, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[27] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2546], mX + 3, mY - 53, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[28] = 1;
            return 1;
        }
    }
    else
    {
        for (k = mChatMessageNum; k < mChatMessageNum + 5 && k <= mMaxChatMessageNum - 1; ++k)
        {
            if (uX > mX + 25 && uX < mX + 106 && uY > mY + 15 * (k - mChatMessageNum) - 89 && uY < mY + 15 * (k - mChatMessageNum) - 79)
            {
                if (strcmp(mChatAvatarName[k], ""))
                {
                    mSelectChatIndex = 0;
                    strcpy(mChatName, mChatAvatarName[k]);
                }
                return 1;
            }
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2405], mX + 3, mY - 91, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[25] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2406], mX + 3, mY - 72, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[26] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2407], mX + 3, mY - 53, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[27] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2408], mX + 3, mY - 34, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[28] = 1;
            return 1;
        }
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[52], mX + 182, mY + 19, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[30] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[53], mX + 205, mY + 19, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[31] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[54], mX + 228, mY + 19, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[32] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[55], mX + 251, mY + 19, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[33] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[56], mX + 274, mY + 19, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[34] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[57], mX + 297, mY + 19, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[35] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[58], mX + 320, mY + 19, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[36] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[59], mX + 343, mY + 19, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[37] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[60], mX + 366, mY + 19, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[38] = 1;
        return 1;
    }
    if (mChatWindow == 1)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2404], mX, mY - 249, uX, uY))
        {
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[89], mX, mY - 173, uX, uY))
        {
            return 1;
        }
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2404], mX, mY - 93, uX, uY))
    {
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1369], mX, mY - 16, uX, uY))
    {
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[50], mX, mY, uX, uY))
    {
        return 1;
    }

    if (mMYINFO.mOnlineAutoTime != -1 && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4107], mX + 32, mY - 382, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[115] = 1;
        return 1;
    }
    if (mMYINFO.mAvatarInfo.aCitadelTicket > 0 && (mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4158]) - 1, mY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[241]) + 3, GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4158], mX, mY + 23, uX, uY)))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[117] = 1;
        return 1;
    }

    if (mMYINFO.mScreenXSize > 1024)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2422]) / 2;
        mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2422]);
    }
    else
    {
        mX = 391;
        mY = 728;
    }
    // Hotkey Buttons
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2548], mX, mY - 17, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[29] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2705], mX + 434, mY - 17, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[99] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2793], mX + 409, mY - 17, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[98] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3218], mX + 309, mY - 17, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[100] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3415], mX + 434, mY - 35, uX, uY))  // Special Shop
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        nIsClick[0] = 1;
        return 1;
    }
    //#ifdef CONSTELLATION
    //if ( GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3524], uX + 85, uY - 50, uX, uY) ) // Constellation
    //{
    //    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
    //    BASICUI::nIsClick[1] = 1;
    //    return 1;
    //}
    //#endif
    if (mMYINFO.mAvatarInfo.aBeginnerPackageIcon == 1 && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2983], mX + 384, mY - 17, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[96] = 1;
        return 1;
    }
    /*if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3287], uX + 284, uY - 17, uX, uY)) // HOISUNDO_UI LBUTTONDOWN
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        bIsClick[101] = 1;
        return 1;
    }*/
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3432], mX + 234, mY - 17, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[103] = 1;
        return 1;
    }
    if ((mMYINFO.mPresentZoneNumber == 170 || mMYINFO.mPresentZoneNumber == 50 || mMYINFO.mPresentZoneNumber == 52) && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3482], mX + 184, mY - 16, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[105] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3498], mX + 458, mY + 2, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[106] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3495], mX + 159, mY - 16, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[107] = 1;
        return 1;
    }
    /*if ( !mPLAY.mWorldInfo.mTribeSymbolBattle && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3524], uX + 134, uY - 16, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        bIsClick[108] = 1;
        return 1;
    }*/
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3588], mX + 109, mY - 16, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[109] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3525], mX + 84, mY - 16, uX, uY)) // Capsule
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[9] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3730], mX + 59, mY - 16, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[111] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2988], mX + 359, mY - 17, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[95] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2992], mX + 334, mY - 17, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[94] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2796], mX + 25, mY - 17, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[97] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[61], mX + 442, mY + 5, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[39] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[62], mX + 442, mY + 22, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[40] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2548], mX, mY - 17, uX, uY))
    {
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2422], mX, mY, uX, uY))
    {
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3054], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[46] = 1;
        return 1;
    }
    sY = mY + -33;
    sX = 25;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3942], mX + sX, sY, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[113] = 1;
        return 1;
    }
    /*sY = uY + -32;
    sX = 59;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3924], uX + sX, sY, uX, uY)) // NEWSKILLUI LBUTTONDOWN
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        bIsClick[114] = 1;
        return 1;
    }*/
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4135], mX + 84, mY - 32, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[116] = 1;
        return 1;
    }
    mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2423]);
    mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2423]);
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2000], mX + 3, mY + 6, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[41] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2003], mX + 31, mY + 6, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[42] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2073], mX + 59, mY + 6, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[43] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2076], mX + 87, mY + 6, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[44] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2079], mX + 115, mY + 6, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[45] = 1;
        return 1;
    }
    return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2423], mX, mY, uX, uY);

}

BOOL BASICUI::LBUTTONUP(int uX, int uY)
{
    int tIndex = 0;
    int i, j, k;
    int sX, sY;
    char* tSTR;
    int tStrLen = 0;
    int v10;
    ITEM_INFO* v12;
    int result = 0;
    char tBuf[1000];
    int tColor = 0;

    if (mMAIN.mMainMode != 6 || mMAIN.mSubMode != 4)
    {
        return 0;
    }

    if ((strcmp(mMYINFO.mAvatarInfo.aTeacher, "") || strcmp(mMYINFO.mAvatarInfo.aStudent, "")) && mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[395], 116, 105, uX, uY))
        {
            tSTR = mMESSAGE.Return(533);
            mCBOXUI.Set(22, tSTR, "");
        }
        return 1;
    }
    if (!strcmp(mMYINFO.mAvatarInfo.aPartyName, mMYINFO.mAvatarInfo.aName))
    {
        for (i = 1; i < 5; ++i)
        {
            if (mIsClick[i])
            {
                mIsClick[i] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[395], 116, 50 * i + 155, uX, uY))
                {
                    mPartyIndex = i;
                    tSTR = mMESSAGE.Return(368);
                    sprintf(tBuf, "[%s]%s", mMYINFO.mPartyInfo[mPartyIndex], tSTR);
                    mCBOXUI.Set(13, tBuf, "");
                }
                return 1;
            }
        }
    }
    mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[241]);
    mY = 0;
    if (mIsClick[10])
    {
        mIsClick[10] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[245], mX + 132, mY + 3, uX, uY))
        {
            mMinimap = mMinimap != 1;
        }
        return 1;
    }
    if (mIsClick[11])
    {
        mIsClick[11] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[244], mX + 4, mY + 153, uX, uY))
        {
            if (!mMinimap)
            {
                return 1;
            }
            if (mMinimapZoom)
            {
                --mMinimapZoom;
            }
        }
        return 1;
    }
    if (mIsClick[12])
    {
        mIsClick[12] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[243], mX + 132, mY + 153, uX, uY))
        {
            if (!mMinimap)
            {
                return 1;
            }
            if (mMinimapZoom != 2)
            {
                ++mMinimapZoom;
            }
        }
        return 1;
    }
    mX = 0;
    mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[50]);
    if (mIsClick[20])
    {
        mIsClick[20] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[311], mX + 375, mY + 2, uX, uY))
        {
            if (mChatWindow == 1)
            {
                mChatWindow = 2;
                mChatMessageNum = mMaxChatMessageNum - 5;
                if (mChatMessageNum < 0)
                {
                    mChatMessageNum = 0;
                }
            }
            else
            {
                mChatWindow = 1;
                mChatMessageNum = mMaxChatMessageNum - 10;
                if (mChatMessageNum < 0)
                {
                    mChatMessageNum = 0;
                }
            }
        }
        return 1;
    }
    if (mChatWindow == 1)
    {
        if (mIsClick[21])
        {
            mIsClick[21] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2405], mX + 3, mY - 247, uX, uY))
            {
                mSysMessageNum = 0;
            }
            return 1;
        }
        if (mIsClick[22])
        {
            mIsClick[22] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2406], mX + 3, mY - 228, uX, uY))
            {
                mSysMessageNum -= 5;
                if (mSysMessageNum < 0)
                {
                    mSysMessageNum = 0;
                }
            }
            return 1;
        }
        if (mIsClick[23])
        {
            mIsClick[23] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2407], mX + 3, mY - 209, uX, uY))
            {
                if (mMaxSysMessageNum <= 5)
                {
                    mSysMessageNum = 0;
                }
                else
                {
                    mSysMessageNum += 5;
                    if (mSysMessageNum > mMaxSysMessageNum - 5)
                    {
                        mSysMessageNum = mMaxSysMessageNum - 5;
                    }
                }
            }
            return 1;
        }
        if (mIsClick[24])
        {
            mIsClick[24] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2408], mX + 3, mY - 190, uX, uY))
            {
                mSysMessageNum = mMaxSysMessageNum - 5;
                if (mSysMessageNum < 0)
                {
                    mSysMessageNum = 0;
                }
            }
            return 1;
        }
        if (mIsClick[25])
        {
            mIsClick[25] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2543], mX + 3, mY - 170, uX, uY))
            {
                mChatMessageNum = 0;
            }
            return 1;
        }
        if (mIsClick[26])
        {
            mIsClick[26] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2544], mX + 3, mY - 132, uX, uY))
            {
                mChatMessageNum -= 10;
                if (mChatMessageNum < 0)
                {
                    mChatMessageNum = 0;
                }
            }
            return 1;
        }
        if (mIsClick[27])
        {
            mIsClick[27] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2545], mX + 3, mY - 91, uX, uY))
            {
                if (mMaxChatMessageNum <= 10)
                {
                    mChatMessageNum = 0;
                }
                else
                {
                    mChatMessageNum += 10;
                    if (mChatMessageNum > mMaxChatMessageNum - 10)
                    {
                        mChatMessageNum = mMaxChatMessageNum - 10;
                    }
                }
            }
            return 1;
        }
        if (mIsClick[28])
        {
            mIsClick[28] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2546], mX + 3, mY - 53, uX, uY))
            {
                mChatMessageNum = mMaxChatMessageNum - 10;
                if (mChatMessageNum < 0)
                {
                    mChatMessageNum = 0;
                }
            }
            return 1;
        }
    }
    else
    {
        if (mIsClick[25])
        {
            mIsClick[25] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2405], mX + 3, mY - 91, uX, uY))
            {
                mChatMessageNum = 0;
            }
            return 1;
        }
        if (mIsClick[26])
        {
            mIsClick[26] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2406], mX + 3, mY - 72, uX, uY))
            {
                mChatMessageNum -= 5;
                if (mChatMessageNum < 0)
                {
                    mChatMessageNum = 0;
                }
            }
            return 1;
        }
        if (mIsClick[27])
        {
            mIsClick[27] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2407], mX + 3, mY - 53, uX, uY))
            {
                if (mMaxChatMessageNum <= 5)
                {
                    mChatMessageNum = 0;
                }
                else
                {
                    mChatMessageNum += 5;
                    if (mChatMessageNum > mMaxChatMessageNum - 5)
                    {
                        mChatMessageNum = mMaxChatMessageNum - 5;
                    }
                }
            }
            return 1;
        }
        if (mIsClick[28])
        {
            mIsClick[28] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2408], mX + 3, mY - 34, uX, uY))
            {
                mChatMessageNum = mMaxChatMessageNum - 5;
                if (mChatMessageNum < 0)
                {
                    mChatMessageNum = 0;
                }
            }
            return 1;
        }
    }
    if (mIsClick[30])
    {
        mIsClick[30] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[52], mX + 182, mY + 19, uX, uY))
        {
            if (mSTATUSUI.mActive)
            {
                mSTATUSUI.Off();
            }
            else
            {
                mUI.Off(0);
                mSTATUSUI.Set();
            }
        }
        return 1;
    }
    if (mIsClick[31])
    {
        mIsClick[31] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[53], mX + 205, mY + 19, uX, uY))
        {
            if (mINVENUI.mActive)
            {
                mINVENUI.Off();
            }
            else
            {
                mUI.Off(0);
                mINVENUI.Set();
            }
        }
        return 1;
    }
    if (mIsClick[32])
    {
        mIsClick[32] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[54], mX + 228, mY + 19, uX, uY))
        {
            if (mSKILLUI.mActive)
            {
                mSKILLUI.Off();
            }
            else
            {
                mUI.Off(1);
                mSKILLUI.Set(0);
            }
        }
        return 1;
    }
    if (mIsClick[33])
    {
        mIsClick[33] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[55], mX + 251, mY + 19, uX, uY))
        {
            if (mQUESTUI.mActive)
            {
                mQUESTUI.Off();
            }
            else
            {
                mUI.Off(1);
                mQUESTUI.Set(1);
            }
        }

        return 1;
    }
    if (mIsClick[34])
    {
        mIsClick[34] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[56], mX + 274, mY + 19, uX, uY))
        {
            if (mPARTYUI.mActive)
            {
                mPARTYUI.Off();
            }
            else
            {
                mUI.Off(1);
                mPARTYUI.Set();
            }
        }

        return 1;
    }
    if (mIsClick[35])
    {
        mIsClick[35] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[57], mX + 297, mY + 19, uX, uY))
        {
            if (mFRIENDUI.mActive)
            {
                mFRIENDUI.Off();
            }
            else
            {
                mUI.Off(1);
                mFRIENDUI.Set();
            }
        }

        return 1;
    }
    if (mIsClick[36])
    {
        mIsClick[36] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[58], mX + 320, mY + 19, uX, uY))
        {
            if (mGUILDUI.mActive)
            {
                mGUILDUI.Off();
            }
            else
            {
                mUI.Off(1);
                mGUILDUI.SetWithGuildInfo();
            }
        }

        return 1;
    }
    if (mIsClick[37])
    {
        mIsClick[37] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[59], mX + 343, mY + 19, uX, uY))
        {
            if (mMAIN.mWorldIndex == 40 && mMYINFO.mAvatarInfo.aLevel1 < 114)
            {
                BASICUI::Insert1(mMESSAGE.Return(1921), mFONTCOLOR.mData[44]);
            }
            else
            {
                mPSHOPUI.Off(1, mMYINFO.mAvatarInfo.aName, -1);
            }
        }
        return 1;
    }
    if (mIsClick[38])
    {
        mIsClick[38] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[60], mX + 366, mY + 19, uX, uY))
        {
            if (mGAMEOPTIONUI.mActive)
            {
                mGAMEOPTIONUI.Off();
            }
            else
            {
                mUI.Off(1);
                mGAMEOPTIONUI.Set();
            }
        }

        return 1;
    }
    if (mMYINFO.mOnlineAutoTime != -1 && mIsClick[115])
    {
        mIsClick[115] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4109], mX + 32, mY - 382, uX, uY))
        {
            tSTR = mMESSAGE.Return(2900);
            sprintf(tBuf, tSTR, mMYINFO.mOnlineAutoTime + 1);
            mCBOXUI.Set(87, tBuf, "");
        }
        return 1;
    }
    char* tNameBuf;
    if (mIsClick[117])
    {
        mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4158]) - 1;
        mY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[241]) + 3;
        mIsClick[117] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4160], mX, mY + 23, uX, uY))
        {
            if (mMYINFO.mAvatarInfo.aRebirth >= 12)
            {
                if (mMYINFO.mPresentZoneNumber == 1 || mMYINFO.mPresentZoneNumber == 6 || mMYINFO.mPresentZoneNumber == 11 || mMYINFO.mPresentZoneNumber == 140)
                {
                    if (mMYINFO.mAvatarInfo.aCitadelTicket <= 0)
                    {
                        tColor = mFONTCOLOR.mData[44];
                        tSTR = mMESSAGE.Return(2711);
                        BASICUI::Insert1(tSTR, tColor);
                    }
                    else
                    {
                        tNameBuf = mITEM.Search(1894)->iName;
                        tSTR = mMESSAGE.Return(2712);
                        sprintf(tBuf, tSTR, tNameBuf);
                        mCBOXUI.Set(93, tBuf, "");
                    }
                }
                else
                {
                    tColor = mFONTCOLOR.mData[44];
                    tSTR = mMESSAGE.Return(229);
                    BASICUI::Insert1(tSTR, tColor);
                }
            }
            else
            {
                tColor = mFONTCOLOR.mData[44];
                tSTR = mMESSAGE.Return(2330);
                BASICUI::Insert1(tSTR, tColor);
            }
        }

        return 1;
    }
    if (mMYINFO.mScreenXSize > 1024)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2422]) / 2;
        mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2422]);
    }
    else
    {
        mX = 391;
        mY = 728;
    }
    if (mIsClick[29])
    {
        mIsClick[29] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2548], mX, mY - 17, uX, uY))
        {
            if (mTRIBENOTICEUI.mActive)
            {
                mTRIBENOTICEUI.Off();
            }
            else
            {
                mUI.Off(1);
                mTRIBENOTICEUI.Set();
            }
        }

        return 1;
    }
    if (mIsClick[99])
    {
        mIsClick[99] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2705], mX + 434, mY - 17, uX, uY))
        {
            if (mAUTOUI.mActive)
            {
                mAUTOUI.Off();
            }
            else
            {
                mUI.Off(1);
                mAUTOUI.Set();
            }
        }

        return 1;
    }
    if (mIsClick[98])
    {
        mIsClick[98] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2793], mX + 409, mY - 17, uX, uY))
        {
            if (mANIMALUI.mActive)
            {
                mANIMALUI.Off();
            }
            else
            {
                mUI.Off(1);
                mANIMALUI.Set();
            }
        }

        return 1;
    }
    if (mIsClick[100])
    {
        mIsClick[100] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3218], mX + 309, mY - 17, uX, uY))
        {
            if (mCOSTUMEUI.mActive)
            {
                mCOSTUMEUI.Off();
            }
            else
            {
                mUI.Off(1);
                mCOSTUMEUI.Set();
            }
        }

        return 1;
    }
    if (mIsClick[96])
    {
        mIsClick[96] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2983], mX + 384, mY - 17, uX, uY))
        {
            if (mBONUSUI.mActive)
            {
                mBONUSUI.Off();
            }
            else
            {
                mUI.Off(1);
                mBONUSUI.Set();
            }
        }

        return 1;
    }
    int tZoneNum = 0;
    /*if (bIsClick[101]) // HOISUNDO_UI LBUTTONUP
    {
        bIsClick[101] = 0;
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3287], uX + 284, uY - 17, uX, uY))
            return 1;
        if (mMYINFO.mAvatarInfo.aLevel1 < 100 || mMYINFO.mAvatarInfo.aLevel1 > 112)
        {
            if (mMYINFO.mAvatarInfo.aLevel1 < 113 || mMYINFO.mAvatarInfo.aLevel1 > 145 || mMYINFO.mAvatarInfo.aLevel2)
            {
                if (mMYINFO.mAvatarInfo.aLevel2 <= 0)
                    return 1;
                tZoneNum = 299;
            }
            else
            {
                tZoneNum = 298;
            }
        }
        else
        {
            tZoneNum = 297;
        }
        if (mHOISUNDO_UI.mActive)
        {
            mHOISUNDO_UI.Off();
        }
        else
        {
            mUI.Off(1);
            mHOISUNDO_UI.Set();
        }
        return 1;
    }*/
    if (mIsClick[103])
    {
        mIsClick[103] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3432], mX + 234, mY - 17, uX, uY))
        {
            if (mMYINFO.mPresentZoneNumber == 319 || mMYINFO.mPresentZoneNumber == 320 || mMYINFO.mPresentZoneNumber == 321 || mMYINFO.mPresentZoneNumber == 322 || mMYINFO.mPresentZoneNumber == 323)
            {
                tColor = mFONTCOLOR.mData[44];
                tSTR = mMESSAGE.Return(1496);
                BASICUI::Insert1(tSTR, tColor);
            }
            else if (mMYINFO.mAvatarInfo.aEquip[7][0] > 0)
            {
                if (mCInnerAuto.mActive)
                {
                    mSKILLUI.Off();
                    mCInnerAuto.mActive = 0;
                    if (mEDITBOX.mDataIndex == 20)
                    {
                        mEDITBOX.Set(0);
                    }
                }
                else
                {
                    mUI.Off(1);
                    mCInnerAuto.Set();
                }
            }
        }

        return 1;
    }
    if (mIsClick[106])
    {
        mIsClick[106] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3498], mX + 458, mY + 2, uX, uY))
        {
            if (mGUILD_RANKING_UI.mActive)
            {
                mGUILD_RANKING_UI.Off();
            }
            else
            {
                mUI.Off(1);
                mGUILD_RANKING_UI.Set();
            }
        }

        return 1;
    }
    float v43, v42;
    if ((mMYINFO.mPresentZoneNumber == 170 || mMYINFO.mPresentZoneNumber == 50 || mMYINFO.mPresentZoneNumber == 52) && mIsClick[105])
    {
        mIsClick[105] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3482], mX + 184, mY - 16, uX, uY))
        {
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingState)
            {
                tSTR = mMESSAGE.Return(1958);
                mCBOXUI.Set(51, tSTR, "");
            }
            else
            {
                if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
                {
                    tColor = mFONTCOLOR.mData[44];
                    tSTR = mMESSAGE.Return(2016);
                    BASICUI::Insert1(tSTR, tColor);
                    return 1;
                }
                if (!mUTIL.CheckFishingZoneForLocation(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]))
                {
                    tColor = mFONTCOLOR.mData[44];
                    tSTR = mMESSAGE.Return(1976);
                    BASICUI::Insert1(tSTR, tColor);
                    return 1;
                }
                if (mMYINFO.mCheckSendActionPacket || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 1)
                {
                    tColor = mFONTCOLOR.mData[44];
                    tSTR = mMESSAGE.Return(120);
                    BASICUI::Insert1(tSTR, tColor);
                    return 1;
                }
                v43 = -(sin(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aFront * 3.141592 / 180.0) * 100.0);
                v42 = -(cos(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aFront * 3.141592 / 180.0) * 100.0);
                mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingLocation[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] + v43;
                mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingLocation[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1];
                mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingLocation[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] + v42;
                if (mUTIL.CheckGeneralMovingZoneForLocation(&mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingLocation[0]))
                {
                    tColor = mFONTCOLOR.mData[44];
                    tSTR = mMESSAGE.Return(1979);
                    BASICUI::Insert1(tSTR, tColor);
                    return 1;
                }
                mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingLocation[1] = 0.0;
                tSTR = mMESSAGE.Return(1957);
                mCBOXUI.Set(50, tSTR, "");
            }
        }
        return 1;
    }
    if (mIsClick[107])
    {
        mIsClick[107] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3495], mX + 159, mY - 16, uX, uY))
        {
            if (!mPSHOPUI.mActive)
            {
                mUI.Off(1);
                mPSHOPUI.Off(3, mMYINFO.mAvatarInfo.aName, -1);
            }
        }

        return 1;
    }
    if (!mPLAY.mWorldInfo.mTribeSymbolBattle && mIsClick[108])
    {
        mIsClick[108] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3524], mX + 134, mY - 16, mX, mY))
        {
            if (mHSBRANKUI.mActive)
            {
                mHSBRANKUI.Off();
            }
            else
            {
                mUI.Off(1);
                mHSBRANKUI.Set();
            }
        }

        return 1;
    }
    if (mIsClick[109])
    {
        mIsClick[109] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3588], mX + 109, mY - 16, uX, uY))
        {
            if (mMYINFO.mAvatarInfo.aFactionNoticeScroll)
            {
                if (mFACTIONNOTICEUI.mActive)
                {
                    mFACTIONNOTICEUI.SetEditBox();
                }
                else
                {
                    mUI.Off(1);
                    mFACTIONNOTICEUI.Set();
                }
            }
            else
            {
                tColor = mFONTCOLOR.mData[44];
                tSTR = mMESSAGE.Return(2119);
                BASICUI::Insert1(tSTR, tColor);
            }
        }
        return 1;
    }
    if (mIsClick[9]) // hsb rank
    {
        mIsClick[9] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3525], mX + 84, mY - 16, uX, uY))
        {
            if (mHSBRANKUI.mActive)
            {
                mHSBRANKUI.Off();
            }
            else
            {
                mUI.Off(1);
                mHSBRANKUI.Set();
            }
        }

        return 1;
    }
    if (mIsClick[111])
    {
        mIsClick[111] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3730], mX + 59, mY - 16, uX, uY))
        {
            if (mTOWERBUILDUI.mActive)
            {
                mTOWERBUILDUI.Off();
            }
            else
            {
                mUI.Off(1);
                mTOWERBUILDUI.Set(2);
            }
        }

        return 1;
    }
    // Special Shop
    if (nIsClick[0])
    {
        nIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3415], mX + 434, mY - 35, uX, uY))
        {
            if (mSPSHOP.mActive)
            {
                mSPSHOP.Off();
            }
            else
            {
                mSPSHOP.Set();
            }
        }
        return 1;
    }
    // Constellation
    /*#ifdef CONSTELLATION
    if (BASICUI::nIsClick[1])
    {
        BASICUI::nIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3524], uX + 85, uY - 50, uX, uY))
        {
            if (mCONSTELLATIONUI.mActive)
            {
                mCONSTELLATIONUI.Off();
            }
            else
            {
                mCONSTELLATIONUI.Set();
            }
        }
        return 1;
    }
    #endif*/

    int tWorkSort = 0;
    BYTE tData[100];
    if (mIsClick[95])
    {
        int tNextZoneNum = 0;
        float tNextLoc[3];
        mIsClick[95] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2988], mX + 359, mY - 17, uX, uY))
        {
            if (mUTIL.CheckInfiniteBattleZone())
            {
                BASICUI::Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mZONEMAININFO.CheckLevelBattleZoneNumber2())
            {
                return 1;
            }
            tNextZoneNum = mZONEMAININFO.ReturnLevelBattlerZoneNumber2();
            if (!tNextZoneNum)
            {
                return 1;
            }
            if (!mZONEMAININFO.CheckPossibleEnterLevelBattlerZoneNumber(tNextZoneNum))
            {
                return 1;
            }
            tNextZoneNum = mZONEMAININFO.CheckPossibleEnterZone319();
            if (!tNextZoneNum)
            {
                return 1;
            }
            if (mZONEMAININFO.CheckPossibleEnterLevelBattlerZoneNumber(tNextZoneNum))
            {
                if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, tNextZoneNum, &tNextLoc[0]))
                {
                    mZONEMOVEINFO.SetFirstCoord(tNextZoneNum, &tNextLoc[0]);
                }
                if (!mMYINFO.mMoveZoneState)
                {
                    mMYINFO.mMoveZoneState = 1;
                    mMYINFO.mMoveZoneSort = 6;
                    mMYINFO.mMoveZoneValue = 0;
                    mMYINFO.mNextZoneNumber = tNextZoneNum;
                    memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
                    mMYINFO.mAction.aType = 0;
                    mMYINFO.mAction.aSort = 1;
                    mMYINFO.mAction.aFrame = 0.0;
                    mMYINFO.mAction.aLocation[0] = tNextLoc[0];
                    mMYINFO.mAction.aLocation[1] = tNextLoc[1];
                    mMYINFO.mAction.aLocation[2] = tNextLoc[2];
                    mMYINFO.mAction.aFront = (rand() % 360);
                    mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
                    mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, tNextZoneNum);
                }
            }
            else
            {
                tColor = mFONTCOLOR.mData[44];
                tSTR = mMESSAGE.Return(1193);
                BASICUI::Insert1(tSTR, tColor);
            }
        }
        return 1;
    }
    if (mIsClick[94])
    {
        mIsClick[94] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2992], mX + 334, mY - 17, uX, uY))
        {
            if (!mUTIL.CheckInfiniteBattleZone())
            {
                if (mMYINFO.mAvatarInfo.iUseOrnament)
                {
                    tWorkSort = 10;
                }
                else
                {
                    tWorkSort = 9;
                }
                if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
                {
                    return 1;
                }
                mTRANSFER.T_TRIBE_WORK_SEND(tWorkSort, &tData[0]);
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
            }
            else
            {
                tColor = mFONTCOLOR.mData[44];
                tSTR = mMESSAGE.Return(1352);
                BASICUI::Insert1(tSTR, tColor);
            }
        }
        return 1;
    }
    if (mIsClick[97])
    {
        mIsClick[97] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2796], mX + 25, mY - 17, uX, uY))
        {
            if (mTRIBESKILL.mActive)
            {
                mTRIBESKILL.Off();
            }
            else
            {
                mTRIBESKILL.Set();
            }
        }
        return 1;
    }
    if (mIsClick[39])
    {
        mIsClick[39] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[61], mX + 442, mY + 5, uX, uY))
        {
            if (mMYINFO.mHotKeyPage < 2)
            {
                ++mMYINFO.mHotKeyPage;
                mMYINFO.mHotKeyIndex = -1;
            }
        }
        return 1;
    }
    if (mIsClick[40])
    {
        mIsClick[40] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[62], mX + 442, mY + 22, uX, uY))
        {
            if (mMYINFO.mHotKeyPage > 0)
            {
                --mMYINFO.mHotKeyPage;
                mMYINFO.mHotKeyIndex = -1;
            }
        }
        return 1;
    }
    if (mIsClick[46])
    {
        mIsClick[46] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3054], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55, uX, uY))
        {
            mUseItemDisplayState = mUseItemDisplayState != 1;
        }
        return 1;
    }
    else
    {
        if ((mMYINFO.mPresentZoneNumber == 319 || mMYINFO.mPresentZoneNumber == 320 || mMYINFO.mPresentZoneNumber == 321 || mMYINFO.mPresentZoneNumber == 322 || mMYINFO.mPresentZoneNumber == 323) && mMYINFO.mCheckLevelBattle319TypeInfo)
        {
            if (mMYINFO.mShowTop4Rank)
            {
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2799], 1000, 191, uX, uY))
                {
                    mMYINFO.mShowTop4Rank = 0;
                    return 1;
                }
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3802], 874, 191, uX, uY))
            {
                mMYINFO.mShowTop4Rank = 1;
                return 1;
            }
        }
    }
    if (mIsClick[113])
    {
        mIsClick[113] = 0;
        sY = mY + -33;
        sX = 25;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3942], mX + sX, sY, uX, uY))
        {
            if (mBOOZEUI.mActive)
            {
                mBOOZEUI.Off();
            }
            else
            {
                mUI.Off(1);
                mBOOZEUI.Set();
            }
        }
        return 1;
    }
    //if (bIsClick[114]) // NEWSKILLUI LBUTTONUP
    //{
    //    bIsClick[114] = 0;
    //    sY = uY + -32;
    //    sX = 59;
    //    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3924], uX + sX, sY, uX, uY))
    //    {
    //        if (mNEWSKILLUI->mActive)
    //        {
    //            NEWmSKILLUI.Off();
    //        }
    //        else
    //        {
    //            mUI.Off(1);
    //            NEWmSKILLUI.Set(0);
    //        }
    //    }
    //    return 1;
    //}
    if (mIsClick[116])
    {
        mIsClick[116] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4135], mX + 84, mY - 32, uX, uY))
        {
            mNPCUI.LButtonUp074();
        }
        return 1;
    }

    mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2423]);
    mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2423]);
    if (mIsClick[41])
    {
        mIsClick[41] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2000], mX + 3, mY + 6, uX, uY))
        {
            if (mHELPUI.mActive)
            {
                mHELPUI.Off();
            }
            else
            {
                mUI.Off(1);
                mHELPUI.Set();
            }
        }
        return 1;
    }
    if (mIsClick[42])
    {
        mIsClick[42] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2003], mX + 31, mY + 6, uX, uY))
        {
            mNPCUI.LButtonup021(1, 0);
        }
        return 1;
    }
    if (mIsClick[43])
    {
        mIsClick[43] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2073], mX + 59, mY + 6, uX, uY))
        {
            if (mTRIBEUI.mActive)
            {
                mTRIBEUI.Off();
            }
            else
            {
                mUI.Off(1);
                mTRIBEUI.Set();
            }
        }
        return 1;
    }
    if (mIsClick[44])
    {
        mIsClick[44] = 0;
        if (mMAIN.mWorldIndex == 40)
        {
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2076], mX + 87, mY + 6, uX, uY))
        {
            if (mTRIBEBANKUI.mActive)
            {
                mTRIBEBANKUI.Off();
            }
            else
            {
                mUI.Off(1);
                mTRIBEBANKUI.Set();
            }
        }
        return 1;
    }
    if (mIsClick[45])
    {
        mIsClick[45] = 0;
        if (mMAIN.mWorldIndex == 40)
        {
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2079], mX + 115, mY + 6, uX, uY))
        {
            if (mTRIBEVOTEUI.mActive)
            {
                mTRIBEVOTEUI.Off();
            }
            else
            {
                mUI.Off(1);
                mTRIBEVOTEUI.Set();
            }
        }
        return 1;
    }

    return 0;
}

int BASICUI::RBUTTONDOWN(int uX, int uY)
{
    if (mMAIN.mMainMode == 6 && mMAIN.mSubMode == 4)
    {
        return 0;
    }
    else
    {
        return 0;
    }
}
int BASICUI::RBUTTONUP(int uX, int uY)
{
    if (mMAIN.mMainMode == 6 && mMAIN.mSubMode == 4)
    {
        return 0;
    }
    else
    {
        return 0;
    }
}

int BASICUI::KEYBOARD()
{
    int i, j, k;
    char* tstr;
    int tstrlen;
    int result;

    if (mMAIN.mMainMode != 6 || mMAIN.mSubMode != 4)
    {
        return 0;
    }
    for (i = 0; i < mGXD.mKeyboardBufferedDataNum; ++i)
    {
        if ((mGXD.mKeyboardBufferedData[i].dwData & 0x80) == 0)
        {
            continue;
        }
        break;
    }
    if (i == mGXD.mKeyboardBufferedDataNum)
    {
        return 0;
    }
    switch (mGXD.mKeyboardBufferedData[i].dwOfs)
    {
    case 12:
        switch (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort)
        {
        case 41:
            return 1;
        case 2:
        case 32:
            mMYINFO.A001();
            break;
        case 1:
            break;
        default:
            return 1;
        }
        mSPECIALSKILL.CheckSkill(1);
        return 1;
    case 15:
        mMYINFO.mSelectObjSort = 0;
        return 1;
    case 22:
        if (mANIMALUI.mActive)
        {
            mANIMALUI.Off();
        }
        else
        {
            mUI.Off(1);
            mANIMALUI.Set();
        }
        return 1;
    case 24:
        if (mMYINFO.mAvatarInfo.aAutoBuffScroll <= 0)
            return 0;
        switch (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort)
        {
        case 41:
            return 1;
        case 2:
        case 32:
            mMYINFO.A001();
            break;
        case 1:
            break;
        default:
            return 1;
        }
        for (j = 0; j < 8; ++j)
        {
            if (mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[j][0] == 0)
            {
                continue;
            }
            break;
        }
        if (j == 8)
        {
            tstr = mMESSAGE.Return(1654);
            BASICUI::Insert1(tstr, mFONTCOLOR.mData[44]);
        }
        else
        {
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue >= (int)((float)mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue * 0.90f) - 1)
            {
                mTRANSFER.T_CONTINUE_SKILL_USE_SEND(1);
                mMYINFO.mCheckSendActionPacket = 1;
            }
            else
            {
                tstr = mMESSAGE.Return(1651);
                BASICUI::Insert1(tstr, mFONTCOLOR.mData[44]);
            }
        }
        return 1;

    case 36:
        if (!mAPP[0].hActiveApplication)
        {
            return 1;
        }
        if (mMYINFO.mAvatarInfo.aAutoHuntState == 0)
        {
            if (mAPP[0].hPresentElapsedSeconds - mMYINFO.mPostAutoTime <= 3.0f)
            {
                BASICUI::Insert1("[SYSTEM] AutoHunt Toggle on Cooldown", 15);
                return 1;
            }
        }
        if (mMYINFO.mPresentZoneNumber == 319 || mMYINFO.mPresentZoneNumber == 320 || mMYINFO.mPresentZoneNumber == 321 || mMYINFO.mPresentZoneNumber == 322 || mMYINFO.mPresentZoneNumber == 323 || mMYINFO.mPresentZoneNumber == 75 || mMYINFO.mPresentZoneNumber == 99)//Auto hunt kapatma
        {
            tstr = mMESSAGE.Return(1496);
            BASICUI::Insert1(tstr, mFONTCOLOR.mData[44]);
        }
        else
        {
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
            {
                mCInnerAuto.HotKeyAutoStop();
            }
            else
            {
                mCInnerAuto.HotKeyAutoStart();
            }
        }
        mMYINFO.mPostAutoTime = mAPP[0].hPresentElapsedSeconds;
        return 1;

    case 37:
        mNPCUI.LButtonup021(1, 0);
        return 1;

    case 38:
        /*if (mTOWERBUILDUI.mActive)
        {
            mTOWERBUILDUI.Off();
        }
        else
        {
            mUI.Off(1);
            mTOWERBUILDUI.Set(2);
        }*/
        return 1;

    case 44:
        GSOUND::Play(&mGDATA.mSOUND_5[286], 0, 100);
        if (--mMYINFO.mHotKeyPage == -1)
        {
            mMYINFO.mHotKeyPage = 2;
        }
        mMYINFO.mHotKeyIndex = -1;
        return 1;
    case 45:
        GSOUND::Play(&mGDATA.mSOUND_5[286], 0, 100);
        if (++mMYINFO.mHotKeyPage == 3)
        {
            mMYINFO.mHotKeyPage = 0;
        }
        mMYINFO.mHotKeyIndex = -1;
        return 1;

    case 47:
        mBOOZEUI.UseBooze(1, 1);
        return 1;

        case 48:
            if (mMYINFO.mAvatarInfo.aFuryCount >= 1)
            {
                if (mMYINFO.mAvatarInfo.aFuryState == 1)
                {
                    tstr = mMESSAGE.Return(2266);
                    BASICUI::Insert1( tstr, mFONTCOLOR.mData[44]);
                    result = 1;
                }
                else
                {
                    if (mMYINFO.mAvatarInfo.aRageBurstPill >= 1)
                    {
                        mTRANSFER.T_RAGE_SEND();
                    }
                    else
                    {
                        tstr = mMESSAGE.Return(2243);
                        BASICUI::Insert1( tstr, mFONTCOLOR.mData[44]);
                    }
                    result = 1;
                }
            }
            else
            {
                tstr = mMESSAGE.Return(2168);
                BASICUI::Insert1( tstr, mFONTCOLOR.mData[44]);
                result = 1;
            }
            return result;

    case 49:
        if (mHERORANKUI.mActive)
        {
            mHERORANKUI.Off();
        }
        else
        {
            mUI.Off(1);
            mHERORANKUI.Set();
        }
        return 1;

    default:
        return 0;
    }
}

BOOL BASICUI::DrawForRollOver(int uX, int uY)
{
    if (mMAIN.mMainMode != 6 || mMAIN.mSubMode != 4)
    {
        return 0;
    }

    int bX = 220;
    int bY = 0;
    int sX, sY;
    int tPosCount = 0;
    int i, j, k;
    char mBuffer[1000];
    int TowerQuality1 = 0;
    int TowerQuality2 = 0;

    for (i = 0; i < 3; ++i)
    {
        int v87 = mTOWERBUILDUI.mTower[3 * mMYINFO.mAvatarInfo.aTribe + i] % 100;
        int v88 = mTOWERBUILDUI.mTower[3 * mMYINFO.mAvatarInfo.aTribe + i] / 100;
        if (v87 == 1 && (v88 == 2 || v88 == 4 || v88 == 6 || v88 == 8 || v88 == 3 || v88 == 5 || v88 == 7))
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3734], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
            {
                switch (v88)
                {
                case 2:
                case 3:
                    TowerQuality1 = 5;
                    break;
                case 4:
                case 5:
                    TowerQuality1 = 10;
                    break;
                case 6:
                case 7:
                    TowerQuality1 = 15;
                    break;
                default:
                    TowerQuality1 = 20;
                    break;
                }
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3735], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                sprintf(mBuffer, "%d", TowerQuality1);
                sX = bX + 28 * (tPosCount % 7) + 121;
                sY = 28 * (tPosCount / 7) + 51;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
                return 1;
            }
            ++tPosCount;
        }
        if (v87 == 2 && (v88 == 2 || v88 == 4 || v88 == 6 || v88 == 8 || v88 == 3 || v88 == 5 || v88 == 7))
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3736], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
            {
                switch (v88)
                {
                case 2:
                case 3:
                    TowerQuality1 = 1;
                    break;
                case 4:
                case 5:
                    TowerQuality1 = 2;
                    break;
                case 6:
                case 7:
                    TowerQuality1 = 2;
                    TowerQuality2 = 1;
                    break;
                default:
                    TowerQuality1 = 2;
                    TowerQuality2 = 2;
                    break;
                }
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3737], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                sprintf(mBuffer, "%d", TowerQuality1);
                sX = bX + 28 * (tPosCount % 7) + 121;
                sY = 28 * (tPosCount / 7) + 51;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
                if (v88 == 6 || v88 == 8)
                {
                    sprintf(mBuffer, "%d", TowerQuality2);
                    sX = bX + 28 * (tPosCount % 7) + 121;
                    sY = 28 * (tPosCount / 7) + 68;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
                }
                return 1;
            }
            ++tPosCount;
        }
        if (v87 == 3 && (v88 == 2 || v88 == 4 || v88 == 6 || v88 == 8 || v88 == 3 || v88 == 5 || v88 == 7))
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3738], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
            {
                switch (v88)
                {
                case 2:
                case 3:
                    TowerQuality1 = 25;
                    break;
                case 4:
                case 5:
                    TowerQuality1 = 50;
                    break;
                case 6:
                case 7:
                    TowerQuality1 = 75;
                    break;
                default:
                    TowerQuality1 = 100;
                    break;
                }
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3739], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                sprintf(mBuffer, "%d", TowerQuality1);
                sX = bX + 28 * (tPosCount % 7) + 121;
                sY = 28 * (tPosCount / 7) + 51;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
                return 1;
            }
            ++tPosCount;
        }
    }

    switch (mPLAY.mWorldInfo.mTribeMasterCallAbility[mMYINFO.mAvatarInfo.aTribe])
    {
    case 1:
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2819], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2805], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            return 1;
        }
        ++tPosCount;
        break;
    case 2:
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2820], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2806], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            return 1;
        }
        ++tPosCount;
        break;
    case 3:
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2821], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2807], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            return 1;
        }
        ++tPosCount;
        break;
    case 4:
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2822], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2808], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            return 1;
        }
        ++tPosCount;
        break;
    }

    if (mMYINFO.mAvatarInfo.aTribe == mPLAY.mWorldInfo.mZone038WinTribe || mMYINFO.mAvatarInfo.aTribe == mPLAY.ReturnAlliance(mPLAY.mWorldInfo.mZone038WinTribe))
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[869], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1856], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            return 1;
        }
        ++tPosCount;
    }
    if (mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) == 1)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3989], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3990], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            return 1;
        }
        ++tPosCount;
    }
    else if (mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) == 2)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3991], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3992], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            return 1;
        }
        ++tPosCount;
    }

    if (mUTIL.ReturnItemSort2(mMYINFO.mAvatarInfo.aEquip[1][0]) == 8 || mUTIL.ReturnItemSort2(mMYINFO.mAvatarInfo.aEquip[1][0]) == 9)
    {
        int tCapeValue = 10 * (mUTIL.Return4thValue(mMYINFO.mAvatarInfo.aEquip[1][2]) / 10);
        switch (tCapeValue)
        {
        case 20:
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4191], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4195], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                return 1;
            }
            tPosCount++;
            break;
        case 30:
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4192], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4196], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                return 1;
            }
            tPosCount++;
            break;
        case 40:
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4194], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4198], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                return 1;
            }
            tPosCount++;
            break;
        case 50:
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4193], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4197], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                return 1;
            }
            tPosCount++;
            break;
        }
    }

    if (mMYINFO.mAvatarInfo.aVigilanteScroll > 0)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4119], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4120], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            return 1;
        }
        ++tPosCount;
    }

    if (mMYINFO.mPresentZoneNumber != 297 && mMYINFO.mPresentZoneNumber != 298 && mMYINFO.mPresentZoneNumber != 299)
    {
        if (mPLAY.ReturnDamageUpForTribeSymbol(mMYINFO.mAvatarInfo.aTribe) > 0)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[870], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1857], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                sprintf(mBuffer, "%d", mPLAY.ReturnTribeSymbolCount(mMYINFO.mAvatarInfo.aTribe));
                sX = bX + 28 * (tPosCount % 7) + 121;
                sY = 28 * (tPosCount / 7) + 51;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);

                sprintf(mBuffer, "%d", mPLAY.ReturnDamageUpForTribeSymbol(mMYINFO.mAvatarInfo.aTribe));
                sX = bX + 28 * (tPosCount % 7) + 133;
                sY = 28 * (tPosCount / 7) + 68;
                mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
                return 1;
            }
            ++tPosCount;
        }
        if (mPLAY.ReturnDamageDownForTribeSymbol(mMYINFO.mAvatarInfo.aTribe) < 0)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[871], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1855], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                return 1;
            }
            ++tPosCount;
        }
    }

    if (mPLAY.mWorldInfo.mProvingGroundsPoint[mMYINFO.mAvatarInfo.aTribe] > 0)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3749], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3954], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            sprintf(mBuffer, "%d", mPLAY.mWorldInfo.mProvingGroundsPoint[mMYINFO.mAvatarInfo.aTribe]);
            sX = bX + 28 * (tPosCount % 7) + 121;
            sY = 28 * (tPosCount / 7) + 51;
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);

            int v102 = 100 * mPLAY.mWorldInfo.mProvingGroundsPoint[mMYINFO.mAvatarInfo.aTribe];
            if (mPLAY.mWorldInfo.mProvingGroundsState[3] - 1 == mMYINFO.mAvatarInfo.aTribe)
            {
                v102 += 100;
            }
            sprintf(mBuffer, "%d", v102);
            sX = bX + 28 * (tPosCount % 7) + 121;
            sY = 28 * (tPosCount / 7) + 68;
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            return 1;
        }
        ++tPosCount;
    }

    if (mPLAY.mWorldInfo.mTribeGeneralExperienceUpRatioInfo[mMYINFO.mAvatarInfo.aTribe] > 0.0)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[873], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1848], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            sprintf(mBuffer, "%d", (int)(mPLAY.mWorldInfo.mTribeGeneralExperienceUpRatioInfo[mMYINFO.mAvatarInfo.aTribe] * 100.0));
            sX = 28 * (tPosCount % 7) + 355;
            sY = 28 * (tPosCount / 7) + 51;
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            return 1;
        }
        ++tPosCount;
    }
    if (mPLAY.mWorldInfo.mTribeItemDropUpRatioInfo[mMYINFO.mAvatarInfo.aTribe] > 0.0)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[874], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1849], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            sprintf(mBuffer, "%d", (int)(mPLAY.mWorldInfo.mTribeItemDropUpRatioInfo[mMYINFO.mAvatarInfo.aTribe] * 100.0));
            sX = bX + 28 * (tPosCount % 7) + 121;
            sY = 28 * (tPosCount / 7) + 51;
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            return 1;
        }
        ++tPosCount;
    }
    if (mPLAY.mWorldInfo.mTribeItemDropUpRatioForMyoungInfo[mMYINFO.mAvatarInfo.aTribe] > 0.0)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[875], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1850], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            sprintf(mBuffer, "%d", (int)(mPLAY.mWorldInfo.mTribeItemDropUpRatioForMyoungInfo[mMYINFO.mAvatarInfo.aTribe] * 100.0));
            sX = bX + 28 * (tPosCount % 7) + 121;
            sY = 28 * (tPosCount / 7) + 51;
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            return 1;
        }
        ++tPosCount;
    }
    if (mPLAY.mWorldInfo.mTribeKillOtherTribeAddValueInfo[mMYINFO.mAvatarInfo.aTribe] > 0)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[876], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1851], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            sprintf(mBuffer, "%d", mPLAY.mWorldInfo.mTribeKillOtherTribeAddValueInfo[mMYINFO.mAvatarInfo.aTribe]);
            sX = bX + 28 * (tPosCount % 7) + 121;
            sY = 28 * (tPosCount / 7) + 51;
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            return 1;
        }
        ++tPosCount;
    }

    int tEffectValue;
    for (j = 0; j < 35; ++j)
    {
        if (mMYINFO.mAvatarEffectValue[j][0] >= 1 && (j < 19 || j > 28))
        {
            int v100 = mMYINFO.mAvatarEffectValue[j][1] - (mAPP->hPresentElapsedSeconds - mMYINFO.mElementValue[j]);
            if (v100 > 10 && GIMAGE2D::CheckIn(&mGDATA.mUI_BUFFICON[mMYINFO.mAvatarInfo.aPreviousTribe][j], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
            {
                switch (j)
                {
                case 12:
                case 14:
                    tEffectValue = mMYINFO.mAvatarEffectValue[j][0];
                    if (j == 12 && mUTIL.CheckSpecialSkillState(1, 91392, 0, -1, -1, -1))
                    {
                        tEffectValue += (int)(tEffectValue * 0.40f);
                    }
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[j + 1833], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                    sprintf(mBuffer, "%d", tEffectValue / 10);
                    sX = bX + 28 * (tPosCount % 7) + 121;
                    sY = 28 * (tPosCount / 7) + 34;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);

                    sprintf(mBuffer, "%d", v100);
                    sX = bX + 28 * (tPosCount % 7) + 121;
                    sY = 28 * (tPosCount / 7) + 51;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
                    return 1;

                case 15:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2870], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                    sprintf(mBuffer, "%d", mMYINFO.mAvatarEffectValue[j][0]);
                    sX = bX + 28 * (tPosCount % 7) + 121;
                    sY = 28 * (tPosCount / 7) + 51;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);

                    sprintf(mBuffer, "%d", v100);
                    sX = bX + 28 * (tPosCount % 7) + 121;
                    sY = 28 * (tPosCount / 7) + 68;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
                    return 1;

                case 16:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2871], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                    sprintf(mBuffer, "%d", v100);
                    sX = bX + 28 * (tPosCount % 7) + 121;
                    sY = 28 * (tPosCount / 7) + 51;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
                    tPosCount++;
                    continue;

                case 17:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3222], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                    sprintf(mBuffer, "%d", v100);
                    sX = bX + 28 * (tPosCount % 7) + 121;
                    sY = 28 * (tPosCount / 7) + 51;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
                    tPosCount++;
                    continue;

                case 18:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3223], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                    sprintf(mBuffer, "%d", v100);
                    sX = bX + 28 * (tPosCount % 7) + 121;
                    sY = 28 * (tPosCount / 7) + 51;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
                    tPosCount++;
                    continue;

                case 29:
                case 30:
                case 31:
                case 32:
                case 33:
                case 34:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1842], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                    sprintf(mBuffer, "%d", mMYINFO.mAvatarEffectValue[j][0]);
                    sX = bX + 28 * (tPosCount % 7) + 121;
                    sY = 28 * (tPosCount / 7) + 34;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);

                    sprintf(mBuffer, "%d", v100);
                    sX = bX + 28 * (tPosCount % 7) + 121;
                    sY = 28 * (tPosCount / 7) + 51;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
                    return 1;

                default:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[j + 1833], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                    sprintf(mBuffer, "%d", mMYINFO.mAvatarEffectValue[j][0]);
                    sX = bX + 28 * (tPosCount % 7) + 121;
                    sY = 28 * (tPosCount / 7) + 34;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);

                    sprintf(mBuffer, "%d", v100);
                    sX = bX + 28 * (tPosCount % 7) + 121;
                    sY = 28 * (tPosCount / 7) + 51;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
                    return 1;
                }
            }
            tPosCount++;
        }
    }

    if (mMYINFO.mAvatarInfo.aTimeEffect > 0)
    {
        if (mMYINFO.mAvatarInfo.aTimeEffect == 5)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3651], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3652], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                return 1;
            }
            ++tPosCount;
        }
        else
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[mMYINFO.mAvatarInfo.aTimeEffect + 3268], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[mMYINFO.mAvatarInfo.aTimeEffect + 3272], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
                return 1;
            }
            ++tPosCount;
        }
    }
    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildBuff == 1 && mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort >= 0 && mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort <= 4)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort + 3296], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort + 3301], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            return 1;
        }
        ++tPosCount;
    }
    if (mMYINFO.mAvatarInfo.aRankAbility > 0)
    {
        int v82 = mMYINFO.mAvatarInfo.aRankAbility - 1;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[mMYINFO.mAvatarInfo.aRankAbility + 3527], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[v82 + 3535], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            return 1;
        }
        ++tPosCount;
    }

    if (mMYINFO.mAvatarInfo.aFuryState == 1)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3601], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3599], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            int tRage = mUTIL.ReturnRageDmgUp(mMYINFO.mAvatarInfo.aFuryCount) * 100.0f - 100.0f;
            sprintf(mBuffer, "%d", tRage);
            sX = bX + 28 * (tPosCount % 7) + 121;
            sY = 28 * (tPosCount / 7) + 34;
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);

            sprintf(mBuffer, "%d", mMYINFO.mAvatarInfo.aFuryEffectDuration);
            sX = bX + 28 * (tPosCount % 7) + 121;
            sY = 28 * (tPosCount / 7) + 51;
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            return 1;
        }
        ++tPosCount;
    }
    if (mMYINFO.mAvatarInfo.aRebirth > 0 && mMYINFO.mAvatarInfo.aRebirth < 13)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3224], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3226], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            if (mMYINFO.mAvatarInfo.aRebirth <= 6)
            {
                sprintf(mBuffer, "%d", mMYINFO.mAvatarInfo.aRebirth);
            }
            else
            {
                sprintf(mBuffer, "%d", 6);
            }

            sX = bX + 28 * (tPosCount % 7) + 121;
            sY = 28 * (tPosCount / 7) + 51;
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            return 1;
        }
        ++tPosCount;
    }
    if (mMYINFO.mAvatarInfo.aRebirth > 6 && mMYINFO.mAvatarInfo.aRebirth < 13)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3225], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3243], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            if (mMYINFO.mAvatarInfo.aRebirth == 12)
            {
                sprintf(mBuffer, "%d", 8);
            }
            else
            {
                sprintf(mBuffer, "%d", mMYINFO.mAvatarInfo.aRebirth - 6);
            }
            sX = bX + 28 * (tPosCount % 7) + 121;
            sY = 28 * (tPosCount / 7) + 51;
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            return 1;
        }
        ++tPosCount;
    }

    if (mMYINFO.mAvatarInfo.aDiamondPill > 0 && mMYINFO.mAvatarInfo.aDiamondPill < 13)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3839], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3840], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            sprintf(mBuffer, "%d", mMYINFO.mAvatarInfo.aDiamondPill);
            sX = bX + 28 * (tPosCount % 7) + 121;
            sY = 28 * (tPosCount / 7) + 34;
            mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
            return 1;
        }
        ++tPosCount;
    }

    ITEM_INFO* tITEM;
    if (mMYINFO.mAvatarInfo.aNewSkillsState > 0)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3928], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 5, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3929], bX + 28 * (tPosCount % 7), 28 * (tPosCount / 7) + 31);
            int v102 = 0;
            for (j = 0; j < 14; ++j)
            {
                if (mMYINFO.mAvatarInfo.aCombineSkills[1][j] >= 1)
                {
                    tITEM = mITEM.Search(mMYINFO.mAvatarInfo.aCombineSkills[1][j]);
                    if (tITEM)
                    {
                        sprintf(mBuffer, "%s", tITEM->iName);
                        sX = bX + 28 * (tPosCount % 7) + 67;
                        sY = 28 * (tPosCount / 7) + 17 * v102 + 41;
                        mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer), sY, 3);
                        ++v102;
                    }
                }
            }
            return 1;
        }
        ++tPosCount;
    }

    mX = 0;
    mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[50]);
    if (!mIsClick[30] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[52], mX + 182, mY + 19, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[275], mX + 130, mY - 3);
        return 1;
    }
    if (!mIsClick[31] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[53], mX + 205, mY + 19, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[276], mX + 153, mY - 3);
        return 1;
    }
    if (!mIsClick[32] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[54], mX + 228, mY + 19, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[277], mX + 176, mY - 3);
        return 1;
    }
    if (!mIsClick[33] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[55], mX + 251, mY + 19, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[278], mX + 199, mY - 3);
        return 1;
    }
    if (!mIsClick[34] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[56], mX + 274, mY + 19, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[279], mX + 222, mY - 3);
        return 1;
    }
    if (!mIsClick[35] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[57], mX + 297, mY + 19, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[280], mX + 245, mY - 3);
        return 1;
    }
    if (!mIsClick[36] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[58], mX + 320, mY + 19, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[281], mX + 268, mY - 3);
        return 1;
    }
    if (!mIsClick[37] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[59], mX + 343, mY + 19, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[282], mX + 291, mY - 3);
        return 1;
    }
    if (!mIsClick[38] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[60], mX + 366, mY + 19, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[283], mX + 314, mY - 3);
        return 1;
    }
    if (mMYINFO.mOnlineAutoTime != -1 && !mIsClick[115])
    {
        mX = 0;
        mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[50]);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4107], mX + 32, mY - 382, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4110], mX + 32, mY - 401);
            return 1;
        }
    }
    if (mMYINFO.mAvatarInfo.aCitadelTicket > 0 && !mIsClick[117])
    {
        mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4158]) - 1;
        mY = GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[241]) + 3;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4158], mX, mY + 23, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4163], mX - 25, mY + 25);
            return 1;
        }
    }

    if (mMYINFO.mScreenXSize > 1024)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2422]) / 2;
        mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2422]);
    }
    else
    {
        mX = 391;
        mY = 728;
    }
    for (j = 0; j < 14; j++)
    {
        if (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][j][2] == 1)
        {
            SKILL_INFO* v92 = mSKILL.Search(mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][j][0]);
            if (!v92)
            {
                continue;
            }
            int v98 = v92->sDataNumber2D + 1;
            if (!GIMAGE2D::CheckIn(&mGDATA.mUI_SKILLICON[v98], mX + 30 * j + 24, mY + 7, uX, uY))
            {
                continue;
            }
            GIMAGE2D::Display(&mGDATA.mUI_SKILLINFO[mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][j][0]], mX + 30 * j + 24, mY - 79);
            if (mFACTOR.GetBonusSkillValue(mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][j][0]) <= 0)
            {
                sprintf(mBuffer, "%d", mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][j][1]);
            }
            else
            {
                int v37 = mFACTOR.GetBonusSkillValue(mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][j][0]);
                sprintf(mBuffer, "%d(+%d)", mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][j][1], v37);
            }
            if (v92->sLearnSkillPoint != v92->sMaxUpgradePoint)
            {
                mUTIL.DrawFont2D(mBuffer, mX + 30 * j + 91, mY - 18, 3);
            }
            return 1;
        }
        if (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][j][2] == 3)
        {
            ITEM_INFO* v90 = mITEM.Search(mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][j][0]);
            if (v90)
            {
                int v98 = v90->iDataNumber2D - 1;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_ITEM[v98], mX + 30 * j + 24, mY + 7, uX, uY))
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[404], mX + 30 * j + 24, mY - 21);
                    strcpy(mBuffer, v90->iName);
                    sY = mY - 16;
                    sX = mX + 30 * j + 63;
                    mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 1);
                    return 1;
                }
            }
        }
    }

    /*#ifdef CONSTELLATION
    if ( !BASICUI::nIsClick[2] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3524], uX + 85, uY - 50, uX, uY))
    {
        mUTIL.DrawFont2D("Constellation", uX + 75, uY - 61, 3);
        result = 1;
    }
    #endif*/
    if (!nIsClick[0] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3415], mX + 434, mY - 35, uX, uY))
    {
        mUTIL.DrawFont2D("Special Shop", mX + 395, mY - 48, 3);
        return 1;
    }
    if (!mIsClick[29] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2552], mX, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2550], mX - 52, mY - 39);
        return 1;
    }
    if (!mIsClick[99] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2705], mX + 434, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2708], mX + 378, mY - 39);
        return 1;
    }
    if (!mIsClick[98] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2793], mX + 409, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2734], mX + 357, mY - 39);
        return 1;
    }
    if (!mIsClick[100] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3218], mX + 309, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3221], mX + 282, mY - 39);
        return 1;
    }
    if (mMYINFO.mAvatarInfo.aBeginnerPackageIcon == 1 && !mIsClick[96] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2983], mX + 384, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2987], mX + 311, mY - 39);
        return 1;
    }
    /*if ( !bIsClick[101] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3287], uX + 284, uY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3290], uX + 257, uY - 39);
        return 1;
    }*/
    if (!mIsClick[103] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3432], mX + 234, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3435], mX + 182, mY - 39);
        return 1;
    }
    if ((mMYINFO.mPresentZoneNumber == 170 || mMYINFO.mPresentZoneNumber == 50 || mMYINFO.mPresentZoneNumber == 52) && !mIsClick[105] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3480], mX + 184, mY - 16, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3483], mX + 132, mY - 38);
        return 1;
    }
    if (!mIsClick[107] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3495], mX + 159, mY - 16, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3494], mX + 107, mY - 38);
        return 1;
    }
    /*if (mPLAY.mWorldInfo.mTribeSymbolBattle == 0 && !bIsClick[108] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3524], uX + 134, uY - 16, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3527], uX + 82, uY - 38);
        result = 1;
    }*/
    if (!mIsClick[109] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3588], mX + 109, mY - 16, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3591], mX + 57, mY - 38);
        return 1;
    }
    if (!mIsClick[9] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3525], mX + 84, mY - 16, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3527], mX + 32, mY - 38);
        return 1;
    }
    if (!mIsClick[111] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3730], mX + 59, mY - 16, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3733], mX + 7, mY - 38);
        return 1;
    }
    if (!mIsClick[95] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2988], mX + 359, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2991], mX + 286, mY - 39);
        return 1;
    }
    if (!mIsClick[94] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2992], mX + 334, mY - 17, uX, uY))
    {
        if (mMYINFO.mAvatarInfo.iUseOrnament)
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2996], mX + 261, mY - 39);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2995], mX + 261, mY - 39);
        }
        return 1;
    }
    if (!mIsClick[97] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2796], mX + 25, mY - 17, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2799], mX - 26, mY - 39);
        return 1;
    }
    if (!mIsClick[46] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3054], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 55, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3050], mMYINFO.mScreenXSize - 174, mMYINFO.mScreenYSize - 73);
        return 1;
    }
    if (!mIsClick[113] && (sY = mY + -33, sX = 25, GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3942], mX + sX, sY, uX, uY)))
    {
        sY = mY + -55;
        sX = -26;
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3952], mX + sX, sY);
        return 1;
    }
    /*if ( !bIsClick[114] && (sY = uY + -32, sX = 59, GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3924], uX + sX, sY, uX, uY)))
    {
        sY = uY + -54;
        sX = 7;
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3927], uX + sX, sY);
        return 1;
    }*/
    if (!mIsClick[116] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4135], mX + 84, mY - 32, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4138], mX + 32, mY - 54);
        return 1;
    }
    mX = mMYINFO.mScreenXSize - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2423]);
    mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2423]);
    if (!mIsClick[41] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2000], mX + 3, mY + 6, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2010], mX - 49, mY - 16);
        return 1;
    }
    if (!mIsClick[42] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2003], mX + 31, mY + 6, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2011], mX - 21, mY - 16);
        return 1;
    }
    if (!mIsClick[43] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2073], mX + 59, mY + 6, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2108], mX + 7, mY - 16);
        return 1;
    }
    if (!mIsClick[44] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2076], mX + 87, mY + 6, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2109], mX + 35, mY - 16);
        return 1;
    }
    if (!mIsClick[45] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2079], mX + 115, mY + 6, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2110], mX + 63, mY - 16);
        return 1;
    }

    return FALSE;

}

void BASICUI::Insert1(char* tMessage, int tDisplaySort)
{
    BOOL v4;
    int i;

    if (mMaxSysMessageNum <= 5)
        v4 = 1;
    else
        v4 = mSysMessageNum == mMaxSysMessageNum - 5;
    if (mMaxSysMessageNum == 300)
    {
        for (i = 1; i < mMaxSysMessageNum; ++i)
        {
            strcpy(mSysMessagee[i - 1], mSysMessagee[i]);
            mSysMessageSort[i - 1] = mSysMessageSort[i];
        }
        --mMaxSysMessageNum;
    }
    strcpy(mSysMessagee[mMaxSysMessageNum], tMessage);
    mSysMessageSort[mMaxSysMessageNum++] = tDisplaySort;
    if (v4)
    {
        mSysMessageNum = mMaxSysMessageNum - 5;
        if (mSysMessageNum < 0)
            mSysMessageNum = 0;
    }
    else
    {
        mSysMessageState = 1;
        mSysMessageUpdateTime = mAPP->hPresentElapsedSeconds;
    }
}

void BASICUI::Insert2(char* tMessage, int tDisplaySort, char* tAvatarName)
{
    BOOL v5;
    BOOL v6;
    int i;
    int j;

    if (mChatWindow == 1)
    {
        if (mMaxChatMessageNum <= 10)
            v5 = 1;
        else
            v5 = mChatMessageNum == mMaxChatMessageNum - 10;
        if (mMaxChatMessageNum == 300)
        {
            for (i = 1; i < mMaxChatMessageNum; ++i)
            {
                strcpy(mChatMessage[i - 1], mChatMessage[i]);
                mChatMessageSort[i - 1] = mChatMessageSort[i];
                strcpy(mChatAvatarName[i - 1], mChatAvatarName[i]);
            }
            --mMaxChatMessageNum;
        }
        strcpy(mChatMessage[mMaxChatMessageNum], tMessage);
        mChatMessageSort[mMaxChatMessageNum] = tDisplaySort;
        strcpy(mChatAvatarName[mMaxChatMessageNum], tAvatarName);
        ++mMaxChatMessageNum;
        if (v5)
        {
            if (mChatMessageNum == mMaxChatMessageNum - 11)
            {
                mChatMessageNum = mMaxChatMessageNum - 10;
                if (mChatMessageNum < 0)
                    mChatMessageNum = 0;
            }
        }
        else
        {
            mChatState = 1;
            mChatUpdateTime = mAPP[0].hPresentElapsedSeconds;
        }
    }
    else
    {
        if (mMaxChatMessageNum <= 5)
            v6 = 1;
        else
            v6 = mChatMessageNum == mMaxChatMessageNum - 5;
        if (mMaxChatMessageNum == 300)
        {
            for (j = 1; j < mMaxChatMessageNum; ++j)
            {
                strcpy(mChatMessage[j - 1], mChatMessage[j]);
                mChatMessageSort[j - 1] = mChatMessageSort[j];
                strcpy(mChatAvatarName[j - 1], mChatAvatarName[j]);
            }
            --mMaxChatMessageNum;
        }
        strcpy(mChatMessage[mMaxChatMessageNum], tMessage);
        mChatMessageSort[mMaxChatMessageNum] = tDisplaySort;
        strcpy(mChatAvatarName[mMaxChatMessageNum], tAvatarName);
        ++mMaxChatMessageNum;
        if (v6)
        {
            if (mChatMessageNum == mMaxChatMessageNum - 6)
            {
                mChatMessageNum = mMaxChatMessageNum - 5;
                if (mChatMessageNum < 0)
                    mChatMessageNum = 0;
            }
        }
        else
        {
            mChatState = 1;
            mChatUpdateTime = mAPP[0].hPresentElapsedSeconds;
        }
    }
}

int BASICUI::GetHotkeyIndex1(int uX, int uY, int tInvalidIndex)
{
    int v5;
    int i;

    if (mMAIN.mMainMode != 6 || mMAIN.mSubMode != 4)
    {
        return -1;
    }
    if (mMYINFO.mScreenXSize > 1024)
    {
        v5 = mMYINFO.mScreenXSize / 2;
        mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2422]) / 2;
        mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2422]);
    }
    else
    {
        mX = 391;
        mY = 728;
    }
    for (i = 0; i < 14 && (uX < mX + 30 * i + 24 || uX > mX + 30 * i + 49 || uY < mY + 7 || uY > mY + 32); ++i)
    {
        ;
    }
    if (i == 14)
    {
        return -1;
    }
    if (i == tInvalidIndex)
    {
        return -1;
    }
    if (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][0] <= 0)
    {
        return -1;
    }
    return i;
}

int BASICUI::GetHotkeyIndex2(int uX, int uY, int tInvalidIndex)
{
    int v5;
    int i;

    if (mMAIN.mMainMode != 6 || mMAIN.mSubMode != 4)
    {
        return -1;
    }
    if (mMYINFO.mScreenXSize > 1024)
    {
        v5 = mMYINFO.mScreenXSize / 2;
        mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2422]) / 2;
        mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2422]);
    }
    else
    {
        mX = 391;
        mY = 728;
    }
    for (i = 0; i < 14 && (uX < mX + 30 * i + 24 || uX > mX + 30 * i + 49 || uY < mY + 7 || uY > mY + 32); ++i)
    {
        ;
    }
    if (i == 14)
    {
        return -1;
    }
    if (i == tInvalidIndex)
    {
        return -1;
    }
    if (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][i][0] >= 1)
    {
        return -1;
    }
    return i;
}

int BASICUI::PutHotkey1(int uX, int uY, int tItemIndex, int tQuantity, int tInvalidIndex)
{
    int v8;

    v8 = BASICUI::GetHotkeyIndex1(uX, uY, tInvalidIndex);
    if (v8 == -1)
    {
        return BASICUI::GetHotkeyIndex2(uX, uY, tInvalidIndex);
    }
    if (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][v8][2] == 3 && mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][v8][0] == tItemIndex && tQuantity + mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][v8][1] <= MAX_ITEM_DUPLICATION_NUM)
    {
        return v8;
    }
    return -1;
}

void BASICUI::ProcessEnterForEditBox00()
{
    if (mMAIN.mMainMode == 6 && mMAIN.mSubMode == 4)
    {
        if (mTRIBENOTICEUI.mActive || mFACTIONNOTICEUI.mActive)
        {
            mEDITBOX.Set(16);
        }
        else
        {
            mEDITBOX.Set(5);
        }
    }
}

void BASICUI::ProcessEnterForEditBox04()
{
    char String[1000];

    mEDITBOX.Set(5);
    if (GetWindowTextA(mEDITBOX.mDATA[3], String, 1000))
    {
        SetWindowTextA(mEDITBOX.mDATA[3], "");
        mSelectChatIndex = 0;
        strcpy(mChatName, String);
    }
    else
    {
        mSelectChatIndex = 1;
        strcpy(mChatName, mMESSAGE.Return(95));
    }
}

void BASICUI::ProcessEnterForEditBox05()
{
    char mBuffer[1000];
    int tZone[4];

    mEDITBOX.Set(0);
    if (GetWindowTextA(mEDITBOX.mDATA[4], mBuffer, 1000))
    {
        SetWindowTextA(mEDITBOX.mDATA[4], "");
        if (!mMYINFO.mMoveZoneState && (mMYINFO.uUserSort <= 0 || !BASICUI::ProcessForGMCommand(mBuffer)))
        {
            switch (mBuffer[0])
            {
            case '!':
                if (mBuffer[1])
                {
                    if (mUTIL.CheckInfiniteBattleZone())
                    {
                        BASICUI::Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
                        return;
                    }
                    if (!strcmp(mMYINFO.mAvatarInfo.aGuildName, ""))
                    {
                        BASICUI::Insert1(mMESSAGE.Return(371), mFONTCOLOR.mData[44]);
                    }
                    mTRANSFER.T_GUILD_CHAT_SEND(&mBuffer[1]);
                    strcpy(mBuffer, "!");
                    SetWindowTextA(mEDITBOX.mDATA[4], mBuffer);
                    SendMessageA(mEDITBOX.mDATA[4], 0xB1u, strlen(mBuffer), strlen(mBuffer));
                }
                return;

            case '#':
                if (mBuffer[1])
                {
                    if (mMYINFO.mPresentZoneNumber != 37 && mMYINFO.mPresentZoneNumber != 119 && mMYINFO.mPresentZoneNumber != 124 && mMYINFO.mPresentZoneNumber != 170 && mMYINFO.mPresentZoneNumber != 50 && mMYINFO.mPresentZoneNumber != 52)
                    {
                        BASICUI::Insert1(mMESSAGE.Return(111), mFONTCOLOR.mData[44]);
                        return;
                    }
                    tZone[0] = 138;
                    tZone[1] = 139;
                    tZone[2] = 165;
                    tZone[3] = 166;
                    if (mMYINFO.mPresentZoneNumber == tZone[mMYINFO.mAvatarInfo.aTribe])
                    {
                        return;
                    }
                    mTRANSFER.T_GENERAL_SHOUT_SEND(&mBuffer[1]);
                    strcpy(mBuffer, "#");
                    SetWindowTextA(mEDITBOX.mDATA[4], mBuffer);
                    SendMessageA(mEDITBOX.mDATA[4], 0xB1u, strlen(mBuffer), strlen(mBuffer));
                }
                return;

            case '@':
                if (mBuffer[1])
                {
                    if (mUTIL.CheckInfiniteBattleZone() || mMYINFO.mPresentZoneNumber == 291)
                    {
                        BASICUI::Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
                        return;
                    }
                    tZone[0] = 138;
                    tZone[1] = 139;
                    tZone[2] = 165;
                    tZone[3] = 166;
                    if (mMYINFO.mPresentZoneNumber == tZone[mMYINFO.mAvatarInfo.aTribe])
                    {
                        return;
                    }
                    mTRANSFER.T_TRIBE_CHAT_SEND(&mBuffer[1]);
                    strcpy(mBuffer, "@");
                    SetWindowTextA(mEDITBOX.mDATA[4], mBuffer);
                    SendMessageA(mEDITBOX.mDATA[4], 0xB1u, strlen(mBuffer), strlen(mBuffer));
                }
                return;

            case '~':
                if (mBuffer[1])
                {
                    if (mUTIL.CheckInfiniteBattleZone())
                    {
                        BASICUI::Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
                        return;
                    }
                    if (!strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
                    {
                        BASICUI::Insert1(mMESSAGE.Return(355), mFONTCOLOR.mData[44]);
                        return;
                    }
                    mTRANSFER.T_PARTY_CHAT_SEND(&mBuffer[1]);
                    strcpy(mBuffer, "~");
                    SetWindowTextA(mEDITBOX.mDATA[4], mBuffer);
                    SendMessageA(mEDITBOX.mDATA[4], 0xB1u, strlen(mBuffer), strlen(mBuffer));
                }
                return;

            default:
                switch (mSelectChatIndex)
                {
                case 0:
                    if (mUTIL.CheckInfiniteBattleZone())
                    {
                        BASICUI::Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
                        return;
                    }
                    if (!strcmp(mChatName, mMYINFO.mAvatarInfo.aName))
                    {
                        BASICUI::Insert1(mMESSAGE.Return(303), mFONTCOLOR.mData[44]);
                        return;
                    }
                    mTRANSFER.T_SECRET_CHAT_SEND(mChatName, mBuffer);
                    return;

                case 1:
                    tZone[0] = 138;
                    tZone[1] = 139;
                    tZone[2] = 165;
                    tZone[3] = 166;
                    if (mMYINFO.mPresentZoneNumber == tZone[mMYINFO.mAvatarInfo.aTribe])
                    {
                        BASICUI::Insert1(mMESSAGE.Return(2040), mFONTCOLOR.mData[44]);
                        return;
                    }
                    mTRANSFER.T_GENERAL_CHAT_SEND(mBuffer);
                    return;

                case 2:
                    if (mUTIL.CheckInfiniteBattleZone())
                    {
                        BASICUI::Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
                        return;
                    }
                    if (!strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
                    {
                        BASICUI::Insert1(mMESSAGE.Return(355), mFONTCOLOR.mData[44]);
                        return;
                    }
                    mTRANSFER.T_PARTY_CHAT_SEND(mBuffer);
                    return;

                case 3:
                    if (mUTIL.CheckInfiniteBattleZone())
                    {
                        BASICUI::Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
                        return;
                    }
                    if (!strcmp(mMYINFO.mAvatarInfo.aGuildName, ""))
                    {
                        BASICUI::Insert1(mMESSAGE.Return(371), mFONTCOLOR.mData[44]);
                        return;
                    }
                    mTRANSFER.T_GUILD_CHAT_SEND(mBuffer);
                    return;

                case 4:
                    if (mUTIL.CheckInfiniteBattleZone() || mMYINFO.mPresentZoneNumber == 291)
                    {
                        BASICUI::Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
                        return;
                    }
                    tZone[0] = 138;
                    tZone[1] = 139;
                    tZone[2] = 165;
                    tZone[3] = 166;
                    if (mMYINFO.mPresentZoneNumber == tZone[mMYINFO.mAvatarInfo.aTribe])
                    {
                        BASICUI::Insert1(mMESSAGE.Return(2041), mFONTCOLOR.mData[44]);
                        return;
                    }
                    mTRANSFER.T_TRIBE_CHAT_SEND(mBuffer);
                    return;

                case 5:
                    if (mUTIL.CheckInfiniteBattleZone() || mMYINFO.mPresentZoneNumber == 291)
                    {
                        BASICUI::Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
                        return;
                    }
                    if (mMYINFO.mPresentZoneNumber != 37 && mMYINFO.mPresentZoneNumber != 119 && mMYINFO.mPresentZoneNumber != 124 && mMYINFO.mPresentZoneNumber != 170 && mMYINFO.mPresentZoneNumber != 50 && mMYINFO.mPresentZoneNumber != 52)
                    {
                        BASICUI::Insert1(mMESSAGE.Return(111), mFONTCOLOR.mData[44]);
                        return;
                    }
                    tZone[0] = 138;
                    tZone[1] = 139;
                    tZone[2] = 165;
                    tZone[3] = 166;
                    if (mMYINFO.mPresentZoneNumber == tZone[mMYINFO.mAvatarInfo.aTribe])
                    {
                        return;
                    }
                    mTRANSFER.T_GENERAL_SHOUT_SEND(mBuffer);
                    return;
                }
                return;
            }
        }
    }
}
BOOL BASICUI::ProcessForGMCommand(char* tString)
{
    char* tstr;
    int tstrlen;
    char mBuffer[5][100];
    int tSpace = 0;
    int tCharNum = 0;
    int i, j, k;
    int v3;
    char v35;
    int tZoneNum = 0;
    int value;
    int value2;
    int value3;

    if (!strncmp(tString, "/notice ", 8))
    {
        mTRANSFER.T_GENERAL_NOTICE_SEND(&tString[8]);
        return 1;
    }
    for (i = 0; ; ++i)
    {
        v3 = strlen(tString);
        if (i > v3)
            break;
        v35 = tString[i];
        if (v35)
        {
            if (v35 == ' ')
            {
                mBuffer[tSpace++][tCharNum] = 0;
                tCharNum = 0;
                if (tSpace == 5)
                    return 0;
            }
            else
            {
                mBuffer[tSpace][tCharNum++] = tString[i];
                if (tCharNum == 100)
                    return 0;
            }
        }
        else
        {
            mBuffer[tSpace++][tCharNum] = 0;
            tCharNum = 0;
        }
    }
    if (tSpace == 2 && !strcmp(mBuffer[0], "/movezone"))
    {
        if (!mMYINFO.mMoveZoneState)
        {
            if (atoi(mBuffer[1]) < 1 || atoi(mBuffer[1]) > 350 || atoi(mBuffer[1]) == mMYINFO.mPresentZoneNumber || mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue < 1)
            {
                return 1;
            }
            mMYINFO.mMoveZoneState = 1;
            mMYINFO.mMoveZoneSort = 2;
            mMYINFO.mMoveZoneValue = 0;
            mMYINFO.mNextZoneNumber = atoi(mBuffer[1]);
            memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
            mMYINFO.mAction.aType = 0;
            mMYINFO.mAction.aSort = 1;
            mMYINFO.mAction.aFrame = 0.0;
            tZoneNum = atoi(mBuffer[1]);
            if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, tZoneNum, mMYINFO.mAction.aLocation))
            {
                tZoneNum = atoi(mBuffer[1]);
                mZONEMOVEINFO.SetFirstCoord(tZoneNum, mMYINFO.mAction.aLocation);
            }
            mMYINFO.mAction.aFront = (rand() % 360);
            mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
            tZoneNum = atoi(mBuffer[1]);
            mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, tZoneNum);
        }
        return 1;
    }
    if (tSpace == 3 && !strcmp(mBuffer[0], "/moncall"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        if (atoi(mBuffer[2]) < 1)
            return 1;
        for (i = 0; ; ++i)
        {
            value = atoi(mBuffer[2]);
            if (i >= value)
                break;
            value = atoi(mBuffer[1]);
            mPLAY.PROCESS_DATA_506_SEND(value);
        }
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 2 && !_stricmp(mBuffer[0], "/item"))
    {
        if (mMYINFO.uUserSort < 10)
            return 1;
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        value = atoi(mBuffer[1]);
        mPLAY.PROCESS_DATA_505_SEND(value);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 3 && !_stricmp(mBuffer[0], "/item"))
    {
        if (mMYINFO.uUserSort < 10)
            return 1;
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        value = atoi(mBuffer[2]);
        value2 = atoi(mBuffer[1]);
        mPLAY.PROCESS_DATA_523_SEND(value2, value);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 1 && !_stricmp(mBuffer[0], "/hide"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        mPLAY.PROCESS_DATA_501_SEND();
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 1 && !_stricmp(mBuffer[0], "/show"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        mPLAY.PROCESS_DATA_502_SEND();
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 1 && !_stricmp(mBuffer[0], "/die"))
    {
        if (mMYINFO.mSelectObjSort != 5)
            return 1;
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        mPLAY.PROCESS_DATA_508_SEND(mMYINFO.mSelectObjIndex);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 1 && !_stricmp(mBuffer[0], "/equip"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        mPLAY.PROCESS_DATA_511_SEND();
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 1 && !_stricmp(mBuffer[0], "/unequip"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        mPLAY.PROCESS_DATA_512_SEND();
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 2 && !_stricmp(mBuffer[0], "/find"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        mPLAY.PROCESS_DATA_513_SEND(mBuffer[1]);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 2 && !_stricmp(mBuffer[0], "/call"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        mPLAY.PROCESS_DATA_514_SEND(mBuffer[1]);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 2 && !_stricmp(mBuffer[0], "/move"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        mPLAY.PROCESS_DATA_515_SEND(mBuffer[1]);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 1 && !_stricmp(mBuffer[0], "/kick"))
    {
        if (!mMYINFO.GetSelectAvatarName(mBuffer[1]))
            return 1;
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        mPLAY.PROCESS_DATA_518_SEND(mBuffer[1]);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 2 && !_stricmp(mBuffer[0], "/kick"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        mPLAY.PROCESS_DATA_518_SEND(mBuffer[1]);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 1 && !_stricmp(mBuffer[0], "/block"))
    {
        if (!mMYINFO.GetSelectAvatarName(mBuffer[1]))
            return 1;
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        mPLAY.PROCESS_DATA_519_SEND(mBuffer[1]);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 2 && !_stricmp(mBuffer[0], "/block"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        mPLAY.PROCESS_DATA_519_SEND(mBuffer[1]);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 2 && !_stricmp(mBuffer[0], "/level"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        value = atoi(mBuffer[1]);
        if (value < 1 || value > 157)
        {
            BASICUI::Insert1("[SYSTEM] Invalid Value, must be 1 to 157", 3);
            return 1;
        }
        mPLAY.PROCESS_DATA_521_SEND(value);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 2 && !_stricmp(mBuffer[0], "/editstr"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        value = atoi(mBuffer[1]);
        mPLAY.PROCESS_DATA_522_SEND(1, value);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 2 && !_stricmp(mBuffer[0], "/editdex"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        value = atoi(mBuffer[1]);
        mPLAY.PROCESS_DATA_522_SEND(2, value);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 2 && !_stricmp(mBuffer[0], "/editcon"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        value = atoi(mBuffer[1]);
        mPLAY.PROCESS_DATA_522_SEND(3, value);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    if (tSpace == 2 && !_stricmp(mBuffer[0], "/editint"))
    {
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        value = atoi(mBuffer[1]);
        mPLAY.PROCESS_DATA_522_SEND(4, value);
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;
    }
    else if (*tString == '/')
    {
        BASICUI::Insert1("[SYSTEM] UNKNOWN_COMMAND", 2);
        return 1;
    }
    else
    {
        return 0;
    }
}




SPECIALSHOP mSPSHOP;

SPECIALSHOP::SPECIALSHOP()
{
    mItemList[0][0] = 23;
    mItemList[0][1] = 24;
    mItemList[0][2] = 25;
    mItemList[0][3] = 0;

    mItemList[0][4] = 29;
    mItemList[0][5] = 30;
    mItemList[0][6] = 31;
    mItemList[0][7] = 0;

    mItemList[0][8] = 32;
    mItemList[0][9] = 33;
    mItemList[0][10] = 34;
    mItemList[0][11] = 0;

    mItemList[0][16] = 1026;
    mItemList[0][17] = 1001;
    mItemList[0][18] = 1471;
    mItemList[0][19] = 1472;

	mItemList[0][20] = 0;
	mItemList[0][21] = 0;
    mItemList[0][22] = 0;
    mItemList[0][23] = 0;

    mMaxPage = 3;
    mCurrentPage = 0;
}

void SPECIALSHOP::Set()
{
    mActive = 1;
    for (int i = 0; i < 10; i++)
        mIsClick[i] = 0;
    mINVENUI.Set();
    mCurrentPage = 0;
}

void SPECIALSHOP::Off()
{
    if (mActive)
    {
        mActive = 0;
    }
}

void SPECIALSHOP::InitForEnterZone()
{
    mActive = 0;
}

void SPECIALSHOP::Draw(int uX, int uY)
{
    if (!mActive)
        return;

    mPOINTER.Set(0);

    int sX;
    int sY;
    char tBuffer[1000];
    ITEM_INFO* t;
    int i2D;
    int iSort;
    int index01;
    int tDrawX;
    int tDrawY;


    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[471]);
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[471], mX, mY);

    // Page Number
    sprintf(tBuffer, "%d / %d", mCurrentPage + 1, mMaxPage);
    tDrawX = mX + 114;
    tDrawY = mY + 12;
    mUTIL.DrawFont2D(tBuffer, tDrawX - mUTIL.GetStringLength(tBuffer) / 2, tDrawY, 3);


    for (index01 = 0; index01 < 28; index01++)
    {
        if (mItemList[mCurrentPage][index01] >= 1)
        {
            t = mITEM.Search(mItemList[mCurrentPage][index01]);
            if (t)
            {
                i2D = t->iDataNumber2D - 1;
                iSort = t->iSort;
                if (iSort == 2 || iSort == 7 || iSort == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2D], mX + 52 * (index01 % 4) + 24, mY + 52 * (index01 / 4) + 50);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2D], mX + 52 * (index01 % 4) + 11, mY + 52 * (index01 / 4) + 37);
            }
        }
    }
}

BOOL SPECIALSHOP::DrawForRollOver(int uX, int uY)
{
    int tSelectIndex = -1;

    if (!mActive)
        return FALSE;
    tSelectIndex = SearchWhatClick(uX, uY);
    if (tSelectIndex != -1)
    {
        // DrawTextInfo(uX, uY, tItemList[tCurrentPage][tSelectIndex], 0, 0, 2, 0, 0, 0, 0, 0, 0);
        mINVENUI.DrawItemInfo(uX, uY, mItemList[mCurrentPage][tSelectIndex], 0, 0, 2, 0, 0, 0, 0, 0, 0);
        return TRUE;
    }
    return FALSE;
}

int  SPECIALSHOP::SearchWhatClick(int uX, int uY)
{
    int sX;
    int sY;
    int index01;

    if (!mActive)
        return -1;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[471]);
    for (index01 = 0; index01 < 28 && (uX < mX + 52 * (index01 % 4) + 11 ||
        uX > mX + 52 * (index01 % 4) + 61 ||
        uY < mY + 52 * (index01 / 4) + 37 ||
        uY > mY + 52 * (index01 / 4) + 87); index01++)
    {
        ;
    }
    if (index01 == 28)
        return -1;
    if (mItemList[mCurrentPage][index01] <= 0)
        return -1;
    return index01;
}

BOOL SPECIALSHOP::RBUTTONDOWN(int uX, int uY)
{
    if (!mActive)
    {
        return FALSE;
    }

    int sX;
    int sY;
    int tClickIndex = -1;
    ITEM_INFO* t;
    int tQuantity;
    int tPage;
    int tIndex;
    int tInvenSlot;
    int tX;
    int tY;
    char* tString;
    int tItemCost;
    int tItemCPCost;
    BYTE tData[100];

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[471]);
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[471], mX, mY, uX, uY))
    {
        tClickIndex = SearchWhatClick(uX, uY);
        if (tClickIndex != -1)
        {
            t = mITEM.Search(mItemList[mCurrentPage][tClickIndex]);
            if (t)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                if (t->iSort == 2)
                    tQuantity = 99;//999 magazin portabil
                else
                    tQuantity = 0;
                if (!mUTIL.GetFreeInventorySpace(t, &tPage, &tInvenSlot))
                {
                    tString = mMESSAGE.Return(117);
                    mBASICUI.Insert1(tString, 15);
                    return TRUE;
                }
                tIndex = mUTIL.GetInventoryIndex(tPage);
                tX = tInvenSlot % 8;
                tY = tInvenSlot / 8;
                if (tIndex != -1)
                {
                    if (t->iSort == 2)
                        tItemCost = t->iBuyCost * tQuantity;
                    else
                        tItemCost = t->iBuyCost;
                    if (mMYINFO.mAvatarInfo.aMoney < tItemCost)
                    {
                        tString = mMESSAGE.Return(214);
                        mBASICUI.Insert1(tString, 15);
                        return TRUE;
                    }
                    if (mMYINFO.mAvatarInfo.aKillOtherTribe < t->iBuyCPCost)
                    {
                        tString = mMESSAGE.Return(1414);
                        mBASICUI.Insert1(tString, 15);
                        return TRUE;
                    }
                    if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
                    {
                        CopyMemory(&tData[0], &tPage, 4);
                        CopyMemory(&tData[4], &tIndex, 4);
                        CopyMemory(&tData[8], &tQuantity, 4);
                        CopyMemory(&tData[12], &mItemList[mCurrentPage][tClickIndex], 4);
                        CopyMemory(&tData[20], &tX, 4);
                        CopyMemory(&tData[24], &tY, 4);
                        mTRANSFER.T_PROCESS_DATA_SEND(900, &tData[0]);
                        return TRUE;
                    }
                }
            }
        }
    }
}

BOOL SPECIALSHOP::KEYBOARD()
{
    return 0;
}

BOOL SPECIALSHOP::LBUTTONDOWN(int uX, int uY)
{
    if (!mActive)
    {
        return FALSE;
    }

    int sX;
    int sY;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[471]);

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
    {
        mIsClick[0] = 1;
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        return TRUE;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))
    {
        mIsClick[1] = 1;
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        return TRUE;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
    {
        mIsClick[2] = 1;
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        return TRUE;
    }



    return FALSE;
}

BOOL SPECIALSHOP::LBUTTONUP(int uX, int uY)
{
    if (!mActive)
    {
        return FALSE;
    }

    int sX;
    int sY;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[471]);

    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            Off();
            return TRUE;
        }
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))
        {
            if (mCurrentPage > 0)
            {
                mCurrentPage--;
                return TRUE;
            }
        }
    }
    else if (mIsClick[2])
    {
        mIsClick[2] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
        {
            if (mCurrentPage < mMaxPage - 1)
            {
                mCurrentPage++;
                return TRUE;
            }
        }
    }


    return FALSE;
}