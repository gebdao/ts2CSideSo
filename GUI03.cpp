#include "gxdheader.h"

NPCUI mNPCUI;

void NPCUI::Set(NPC_OBJECT* tNPC)
{
    int index01;
    int index02;
    int tIndex;

    mUI.Off(1);
    mNPCInfo = tNPC->mNPC_INFO;
    mActive = 1;
    mPage[0] = -1;
    mPage[1] = -1;
    mPage[2] = -1;
    mPage[3] = -1;
    mPage[4] = -1;
    mPage[5] = -1;
    for (index01 = 0; index01 < 100; ++index01)
    {
        mIsClick[index01] = 0;
    }
    for (index01 = 0; index01 < 10; ++index01)
    {
        mChoice[index01] = 0;
    }
    for (index01 = 0; index01 < 6; ++index01)
    {
        mIndex[index01] = 0;
        mInv[index01].iIndex = 0;
        mInv[index01].iX = 0;
        mInv[index01].iY = 0;
        mInv[index01].iQuantity = 0;
        mInv[index01].iImproveState = 0;
        mInv[index01].iSerialNumber = 0;
        mInv[index01].iSocket[0] = 0;
        mInv[index01].iSocket[1] = 0;
        mInv[index01].iSocket[2] = 0;
        mInv[index01].iSocket[3] = 0;
        mInv[index01].iSocket[4] = 0;
    }
    mChoice[0] = 1;
    mChoice[1] = 2;
    tIndex = 2;
    for (index01 = 0; index01 < 100; ++index01)
    {
        if (mNPCInfo->nMenu[index01] == 2 && tIndex <= 8)
        {
            switch (index01)
            {
            case 0:
                mChoice[tIndex++] = 4;
                break;
            case 1:
                mChoice[tIndex++] = 5;
                break;
            case 2:
                mChoice[tIndex++] = 6;
                break;
            case 3:
                mChoice[tIndex++] = 7;
                break;
            case 4:
                mChoice[tIndex++] = 8;
                break;
            case 5:
                mChoice[tIndex++] = 9;
                break;
            case 6:
                mChoice[tIndex++] = 10;
                break;
            case 7:
                mChoice[tIndex++] = 11;
                break;
            case 8:
                mChoice[tIndex++] = 12;
                break;
            case 9:
                mChoice[tIndex++] = 13;
                break;
            case 10:
                mChoice[tIndex++] = 46;
                break;
            case 11:
                mChoice[tIndex++] = 22;
                break;
            case 12:
                mChoice[tIndex++] = 15;
                break;
            case 13:
                mChoice[tIndex++] = 16;
                break;
            case 14:
                mChoice[tIndex++] = 17;
                break;
            case 15:
                mChoice[tIndex++] = 41;
                break;
            case 16:
                mChoice[tIndex++] = 42;
                break;
            case 17:
                mChoice[tIndex++] = 18;
                break;
            case 18:
                mChoice[tIndex++] = 14;
                break;
            case 19:
                mChoice[tIndex++] = 20;
                break;
            case 20:
                mChoice[tIndex++] = 21;
                break;
            case 21:
                mChoice[tIndex++] = 47;
                break;
            case 22:
                mChoice[tIndex++] = 23;
                break;
            case 23:
                mChoice[tIndex++] = 19;
                break;
            case 24:
                if (mMAIN.mWorldIndex == 40)
                    mChoice[tIndex] = 0;
                else
                    mChoice[tIndex] = 24;
                ++tIndex;
                break;
            case 25:
                mChoice[tIndex++] = 25;
                break;
            case 26:
                mChoice[tIndex++] = 26;
                break;
            case 27:
                mChoice[tIndex++] = 27;
                break;
            case 28:
                if (mMAIN.mWorldIndex == 40)
                    mChoice[tIndex] = 0;
                else
                    mChoice[tIndex] = 28;
                ++tIndex;
                break;
            case 29:
                if (mMAIN.mWorldIndex == 40)
                    mChoice[tIndex] = 0;
                else
                    mChoice[tIndex] = 48;
                ++tIndex;
                break;
            case 30:
                mChoice[tIndex++] = 29;
                break;
            case 31:
                mChoice[tIndex++] = 30;
                break;
            case 32:
                mChoice[tIndex++] = 55;
                break;
            case 33:
                mChoice[tIndex++] = 40;
                break;
            case 34:
                mChoice[tIndex++] = 54;
                break;
            case 35:
                mChoice[tIndex++] = 36;
                break;
            case 36:
                mChoice[tIndex++] = 33;
                break;
            case 37:
                mChoice[tIndex++] = 34;
                break;
            case 38:
                if (mMAIN.mWorldIndex == 40)
                    mChoice[tIndex] = 0;
                else
                    mChoice[tIndex] = 35;
                ++tIndex;
                break;
            case 39:
                mChoice[tIndex++] = 37;
                break;
            case 40:
                mChoice[tIndex++] = 38;
                break;
            case 41:
                mChoice[tIndex++] = 39;
                break;
            case 42:
                mChoice[tIndex++] = 43;
                break;
            case 43:
                mChoice[tIndex++] = 44;
                break;
            case 44:
                mChoice[tIndex++] = 45;
                break;
            case 45:
                mChoice[tIndex++] = 49;
                break;
            case 46:
                mChoice[tIndex++] = 50;
                break;
            case 47:
                mChoice[tIndex++] = 51;
                break;
            case 48:
                mChoice[tIndex++] = 52;
                break;
            case 49:
                mChoice[tIndex++] = 53;
                break;
            case 52:
                mChoice[tIndex++] = 58;
                break;
            case 53:
                mChoice[tIndex++] = 59;
                break;
            case 54:
                mChoice[tIndex++] = 56;
                break;
            case 56:
                mChoice[tIndex++] = 61;
                break;
            case 57:
                mChoice[tIndex++] = 62;
                break;
            case 58:
                mChoice[tIndex++] = 63;
                break;
            case 62:
                mChoice[tIndex++] = 64;
                break;
            case 65:
                mChoice[tIndex++] = 66;
                break;
            case 66:
                mChoice[tIndex++] = 67;
                break;
            case 67:
                mChoice[tIndex++] = 68;
                break;
            case 68:
                mChoice[tIndex++] = 69;
                break;
            case 69:
                mChoice[tIndex++] = 70;
                break;
            case 70:
                mChoice[tIndex++] = 71;
                break;
            case 71:
                mChoice[tIndex++] = 72;
                break;
            case 72:
                mChoice[tIndex++] = 73;
                break;
            case 73:
                mChoice[tIndex++] = 75;
                break;
            case 74:
                mChoice[tIndex++] = 76;
                break;
            case 75:
                mChoice[tIndex++] = 77;
                break;
            default:
                continue;
            }
        }
    }
    mChoice[9] = 3;
    mWorkId = 0;
    for (index01 = 0; index01 < 5; ++index01)
    {
        mNPCSpeechNum[index01] = index01 >= mNPCInfo->nSpeechNum;
    }
    mNPCSpeechIndex = -1;
    if (tNPC->mMotionIndex != 1)
    {
        tNPC->mMotionIndex = 1;
        tNPC->mFrame = 0.0f;
        if (tNPC->mNPC_INFO->nIndex != 63 && tNPC->mNPC_INFO->nIndex != 113 && tNPC->mNPC_INFO->nIndex != 213 && tNPC->mNPC_INFO->nIndex != 313 && tNPC->mNPC_INFO->nIndex != 7)
        {
            tNPC->mFront = mUTIL.GetYAngle(tNPC->mLocation[0], tNPC->mLocation[2], mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0], mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2]);
        }
        tNPC->PlayActionSound();
    }
}

BOOL NPCUI::Init()
{
    int i, j, k;

    mActive = 0;
    mPage[0] = -1;
    mPage[1] = -1;
    mPage[2] = -1;
    mPage[3] = -1;
    mPage[4] = -1;
    mPage[5] = -1;
    mDemandBloodShopInfo = 0;
    for (i = 0; i < MAX_BLOODSTORE_PAGE_NUM; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                mBloodStoreInfo[i][j][k] = 0;
            }
        }
    }
    return 1;
}

void NPCUI::Reset()
{
    int index01;
    for (index01 = 0; index01 < 6; index01++)
    {
        if (mPage[index01] != -1)
        {
            mMYINFO.mAvatarInfo.aInventory[mPage[index01]][mIndex[index01]][0] = mInv[index01].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mPage[index01]][mIndex[index01]][1] = mInv[index01].iX;
            mMYINFO.mAvatarInfo.aInventory[mPage[index01]][mIndex[index01]][2] = mInv[index01].iY;
            mMYINFO.mAvatarInfo.aInventory[mPage[index01]][mIndex[index01]][3] += mInv[index01].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mPage[index01]][mIndex[index01]][4] = mInv[index01].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mPage[index01]][mIndex[index01]][5] = mInv[index01].iSerialNumber;
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[index01]][mIndex[index01]][0] = mInv[index01].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[index01]][mIndex[index01]][1] = mInv[index01].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[index01]][mIndex[index01]][2] = mInv[index01].iSocket[2];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[index01]][mIndex[index01]][3] = mInv[index01].iSocket[3];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[index01]][mIndex[index01]][4] = mInv[index01].iSocket[4];
            mPage[index01] = -1;
        }
    }
}

void NPCUI::SetInvalidIndex()
{
    int index01;
    int index02;
    for (index01 = 0; index01 < 6; index01++)
    {
        mPage[index01] = -1;
        mIndex[index01] = -1;
        mInv[index01].iIndex = 0;
        mInv[index01].iX = 0;
        mInv[index01].iY = 0;
        mInv[index01].iQuantity = 0;
        mInv[index01].iImproveState = 0;
        mInv[index01].iSerialNumber = 0;
        mInv[index01].iSocket[0] = 0;
        mInv[index01].iSocket[1] = 0;
        mInv[index01].iSocket[2] = 0;
        mInv[index01].iSocket[3] = 0;
        mInv[index01].iSocket[4] = 0;
    }
}
void NPCUI::Off()
{
    int index01;
    if (mActive)
    {
        mActive = 0;
        for (index01 = 0; index01 < 6; index01++)
        {
            if (mPage[index01] != -1)
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[index01]][mIndex[index01]][0] = mInv[index01].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[index01]][mIndex[index01]][1] = mInv[index01].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[index01]][mIndex[index01]][2] = mInv[index01].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[index01]][mIndex[index01]][3] += mInv[index01].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[index01]][mIndex[index01]][4] = mInv[index01].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[index01]][mIndex[index01]][5] = mInv[index01].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[index01]][mIndex[index01]][0] = mInv[index01].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[index01]][mIndex[index01]][1] = mInv[index01].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[index01]][mIndex[index01]][2] = mInv[index01].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[index01]][mIndex[index01]][3] = mInv[index01].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[index01]][mIndex[index01]][4] = mInv[index01].iSocket[4];
                mPage[index01] = -1;
            }
        }
        mINVENUI.Off();
        if (mEDITBOX.mDataIndex == 7 || mEDITBOX.mDataIndex == 17)
            mEDITBOX.Set(0);
    }
}

void NPCUI::InitForEnterZone()
{
    mActive = 0;
    mPage[0] = -1;
    mPage[1] = -1;
    mPage[2] = -1;
    mPage[3] = -1;
    mPage[4] = -1;
    mPage[5] = -1;
}

BOOL NPCUI::LBUTTONDOWN(int uX, int uY)
{
    if (!mActive)
        return FALSE;

    switch (mWorkId)
    {
    case 0:
        NPCUI::LButtonDown_000(uX, uY);
        return TRUE;
    case 1:
        return TRUE;
    case 2:
        NPCUI::LBUTTONDOWN2(uX, uY);
        return TRUE;
    case 3:
        return TRUE;
    case 4:
        return TRUE;
    case 5:
        NPCUI::LBUTTONDOWN5(uX, uY);
        return TRUE;
    case 6:
        NPCUI::LBUTTONDOWN6(uX, uY);
        return TRUE;
    case 7:
        NPCUI::LBUTTONDOWN7(uX, uY);
        return TRUE;
    case 8:
        NPCUI::LBUTTONDOWN8(uX, uY);
        return TRUE;
    case 9:
        return TRUE;
    case 10:
        NPCUI::LBUTTONDOWN10(uX, uY);
        return TRUE;
    case 11:
        NPCUI::LBUTTONDOWN11(uX, uY);
        return TRUE;
    case 12:
        NPCUI::LBUTTONDOWN12(uX, uY);
        return TRUE;
    case 13:
        NPCUI::LBUTTONDOWN13(uX, uY);
        return TRUE;
    case 14:
        NPCUI::LBUTTONDOWN14(uX, uY);
        return TRUE;
    case 15:
        return TRUE;
    case 16:
        return TRUE;
    case 17:
        NPCUI::LBUTTONDOWN17(uX, uY);
        return TRUE;
    case 18:
        NPCUI::LBUTTONDOWN18(uX, uY);
        return TRUE;
    case 19:
        NPCUI::LBUTTONDOWN19(uX, uY);
        return TRUE;
    case 20:
        NPCUI::LBUTTONDOWN20(uX, uY);
        return TRUE;
    case 21:
        NPCUI::LBUTTONDOWN21(uX, uY);
        return TRUE;
    case 22:
        NPCUI::LBUTTONDOWN22(uX, uY);
        return TRUE;
    case 23:
        NPCUI::LBUTTONDOWN23(uX, uY);
        return TRUE;
    case 24:
        return TRUE;
    case 25:
        NPCUI::LBUTTONDOWN25(uX, uY);
        return TRUE;
    case 26:
        NPCUI::LBUTTONDOWN26(uX, uY);
        return TRUE;
    case 27:
        NPCUI::LBUTTONDOWN27(uX, uY);
        return TRUE;
    case 28:
        NPCUI::LBUTTONDOWN28(uX, uY);
        return TRUE;
    case 29:
        NPCUI::LBUTTONDOWN29(uX, uY);
        return TRUE;
    case 30:
        NPCUI::LBUTTONDOWN30(uX, uY);
        return TRUE;
    case 33:
        NPCUI::LBUTTONDOWN33(uX, uY);
        return TRUE;
    case 34:
        NPCUI::LBUTTONDOWN34(uX, uY);
        return TRUE;
        break;
    case 35:
        NPCUI::LBUTTONDOWN35(uX, uY);
        return TRUE;
    case 36:
        NPCUI::LBUTTONDOWN36(uX, uY);
        return TRUE;
    case 37:
        NPCUI::LBUTTONDOWN37(uX, uY);
        return TRUE;
    case 38:
        NPCUI::LBUTTONDOWN38(uX, uY);
        return TRUE;
    case 39:
        NPCUI::LBUTTONDOWN39(uX, uY);
        return TRUE;
    case 40:
        NPCUI::LBUTTONDOWN40(uX, uY);
        return TRUE;
    case 41:
        NPCUI::LBUTTONDOWN41(uX, uY);
        return TRUE;
    case 42:
        NPCUI::LBUTTONDOWN42(uX, uY);
        return TRUE;
    case 43:
        NPCUI::LBUTTONDOWN43(uX, uY);
        return TRUE;
    case 44:
        NPCUI::LBUTTONDOWN44(uX, uY);
        return TRUE;
    case 45:
        NPCUI::LBUTTONDOWN45(uX, uY);
        return TRUE;
    case 46:
        NPCUI::LBUTTONDOWN46(uX, uY);
        return TRUE;
    case 47:
        return TRUE;
    case 48:
        return TRUE;
    case 49:
        return TRUE;
    case 50:
        return TRUE;
    case 51:
        NPCUI::LBUTTONDOWN51(uX, uY);
        return TRUE;
    case 52:
        NPCUI::LBUTTONDOWN52(uX, uY);
        return TRUE;
    case 53:
        return TRUE;
    case 54:
        NPCUI::LBUTTONDOWN54(uX, uY);
        return TRUE;
    case 55:
        return TRUE;
    case 56:
        NPCUI::LBUTTONDOWN56(uX, uY);
        return TRUE;
    case 58:
        NPCUI::LBUTTONDOWN58(uX, uY);
        return TRUE;
    case 61:
        NPCUI::LBUTTONDOWN61(uX, uY);
        return TRUE;
    case 62:
        NPCUI::LBUTTONDOWN62(uX, uY);
        return TRUE;
    case 63:
        NPCUI::LBUTTONDOWN63(uX, uY);
        return TRUE;
    case 64:
        return TRUE;
    case 66:
        NPCUI::LBUTTONDOWN66(uX, uY);
        return TRUE;
    case 67:
        NPCUI::LBUTTONDOWN67(uX, uY);
        return TRUE;
    case 68:
        NPCUI::LBUTTONDOWN68(uX, uY);
        return TRUE;
    case 69:
        NPCUI::LBUTTONDOWN69(uX, uY);
        return TRUE;
    case 70:
        NPCUI::LBUTTONDOWN70(uX, uY);
        return TRUE;
    case 72:
        NPCUI::LBUTTONDOWN72(uX, uY);
        return TRUE;
    case 73:
        NPCUI::LBUTTONDOWN73(uX, uY);
        return TRUE;
    case 74:
        NPCUI::LBUTTONDOWN74(uX, uY);
        return TRUE;
    case 75:
        NPCUI::LBUTTONDOWN75(uX, uY);
        return TRUE;
    case 76:
        NPCUI::LBUTTONDOWN76(uX, uY);
        return TRUE;
    case 77:
        NPCUI::LBUTTONDOWN77(uX, uY);
        return TRUE;
    default:
        return TRUE;
    }
}

void NPCUI::LButtonDown_000(int uX, int uY)
{
    int v3;
    int v4;
    int i;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[406]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[406]) / 2;
    for (i = 0; i < 10; ++i)
    {
        if (mChoice[i] >= 1 && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[408], mX + 12, mY + 22 * i + 7, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[i] = 1;
            return;
        }
    }
}

void NPCUI::LBUTTONDOWN2(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[904]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[904]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[909], mX + 344, mY + 416, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
}
void NPCUI::LBUTTONDOWN5(int uX, int uY)
{
    int v3;
    int v4;
    char* v5;
    char* v6;
    char* v7;
    char* v8;
    int v9;
    int v10;
    int v11;
    SKILL_INFO* v13;
    char Buffer[1000];
    int v15;
    int i;
    int j;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[516]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[516]) / 2;
    v15 = 0;
LABEL_2:
    if (v15 >= 3)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 252, mY + 25, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
        }
    }
    else
    {
        for (i = 0; ; ++i)
        {
            if (i >= 8)
            {
                ++v15;
                goto LABEL_2;
            }
            if (mNPCInfo->nSkillInfo1[v15][i] >= 1
                && uX > mX + 76 * v15 + 35
                && uX < mX + 76 * v15 + 85
                && uY > mY + 54 * i + 71
                && uY < mY + 54 * i + 121)
            {
                break;
            }
        }
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        v13 = mSKILL.Search(mNPCInfo->nSkillInfo1[v15][i]);
        if (v13)
        {
            if (mMYINFO.mAvatarInfo.aSkillPoint >= v13->sLearnSkillPoint)
            {
                for (j = 0; j < 40 && (mMYINFO.mAvatarInfo.aSkill[j][0] < 1 || mMYINFO.mAvatarInfo.aSkill[j][0] != v13->sIndex); ++j)
                {
                    ;
                }
                if (j >= 40)
                {
                    switch (v13->sType)
                    {
                    case 1:
                        for (j = 0; j < 10 && mMYINFO.mAvatarInfo.aSkill[j][0] >= 1; ++j)
                            ;
                        if (j != 10)
                            goto LABEL_58;
                        goto LABEL_57;
                    case 2:
                        for (j = 20; j < 30 && mMYINFO.mAvatarInfo.aSkill[j][0] >= 1; ++j)
                            ;
                        if (j != 30)
                            goto LABEL_58;
                        goto LABEL_57;
                    case 3:
                        for (j = 10; j < 20 && mMYINFO.mAvatarInfo.aSkill[j][0] >= 1; ++j)
                            ;
                        if (j != 20)
                            goto LABEL_58;
                        for (j = 30; j < 40 && mMYINFO.mAvatarInfo.aSkill[j][0] >= 1; ++j)
                            ;
                        if (j != 40)
                            goto LABEL_58;
                        goto LABEL_57;
                    case 4:
                        for (j = 10; j < 20 && mMYINFO.mAvatarInfo.aSkill[j][0] >= 1; ++j)
                            ;
                        if (j != 20)
                            goto LABEL_58;
                        for (j = 30; j < 40 && mMYINFO.mAvatarInfo.aSkill[j][0] >= 1; ++j)
                            ;
                        if (j == 40)
                        {
                        LABEL_57:
                            v11 = mFONTCOLOR.mData[44];
                            v7 = mMESSAGE.Return(137);
                            mBASICUI.Insert1(v7, v11);
                        }
                        else
                        {
                        LABEL_58:
                            mSkillIndex = mNPCInfo->nSkillInfo1[v15][i];
                            v8 = mMESSAGE.Return(144);
                            sprintf(Buffer, "[%s]%s", v13->sName, v8);
                            mCBOXUI.Set(3, Buffer, "");
                        }
                        break;
                    default:
                        return;
                    }
                }
                else
                {
                    v10 = mFONTCOLOR.mData[44];
                    v6 = mMESSAGE.Return(136);
                    mBASICUI.Insert1(v6, v10);
                }
            }
            else
            {
                v9 = mFONTCOLOR.mData[44];
                v5 = mMESSAGE.Return(135);
                mBASICUI.Insert1(v5, v9);
            }
        }
    }
}
void NPCUI::LBUTTONDOWN6(int uX, int uY)
{
    int v3;
    ITEM_INFO* v5;
    int a4;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[515]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        a4 = NPCUI::GetStoreItemIndex1(uX, uY, -1);
        if (a4 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[300], mX + 95, mY + 409, uX, uY) || GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3473], mX + 38, mY + 409, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[2] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[3] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            v5 = mITEM.Search(mMYINFO.mAvatarInfo.aStoreItem[mStorePage][a4][0]);
            if (!v5)
                return;
            if (v5->iSort == 2)
            {
                if (mMYINFO.mAvatarInfo.aStoreItem[mStorePage][a4][1] <= 1)
                {
                    mCHOICEUI.Set(
                        12,
                        mStorePage,
                        a4,
                        mMYINFO.mAvatarInfo.aStoreItem[mStorePage][a4][0],
                        1,
                        mMYINFO.mAvatarInfo.aStoreItem[mStorePage][a4][2],
                        mMYINFO.mAvatarInfo.aStoreItem[mStorePage][a4][3],
                        0,
                        0,
                        0,
                        0,
                        0);
                    return;
                }
                if ((mGXD.mKeyboardImmediateData[42] & 0x80) != 0)
                {
                    mCHOICEUI.Set(
                        12,
                        mStorePage,
                        a4,
                        mMYINFO.mAvatarInfo.aStoreItem[mStorePage][a4][0],
                        0,
                        mMYINFO.mAvatarInfo.aStoreItem[mStorePage][a4][2],
                        mMYINFO.mAvatarInfo.aStoreItem[mStorePage][a4][3],
                        0,
                        0,
                        1,
                        uX - 52,
                        uY - 72);
                    return;
                }
            }
            mCHOICEUI.Set(
                12,
                mStorePage,
                a4,
                mMYINFO.mAvatarInfo.aStoreItem[mStorePage][a4][0],
                mMYINFO.mAvatarInfo.aStoreItem[mStorePage][a4][1],
                mMYINFO.mAvatarInfo.aStoreItem[mStorePage][a4][2],
                mMYINFO.mAvatarInfo.aStoreItem[mStorePage][a4][3],
                0,
                0,
                0,
                0,
                0);
        }
    }
}
void NPCUI::LBUTTONDOWN7(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[760]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[760]) / 2;
    if (uX <= mEDITBOX.mEditBoxInfo[6][0] || uX >= mEDITBOX.mEditBoxInfo[6][2] || uY <= mEDITBOX.mEditBoxInfo[6][1] || uY >= mEDITBOX.mEditBoxInfo[6][3])
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[309], mX + 165, mY + 72, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[307], mX + 202, mY + 72, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
        }
    }
    else
    {
        mEDITBOX.Set(7);
    }
}
void NPCUI::LBUTTONDOWN8(int uX, int uY)
{
    int v3;
    ITEM_INFO* v5;
    int v6;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[471]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v6 = NPCUI::GetNPCShopIndex1(uX, uY);
        if (v6 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[2] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            v5 = mITEM.Search(mNPCInfo->nShopInfo[mShopPresentPage][v6]);
            if (v5)
            {
                if (v5->iSort == 2)
                {
                    if ((mGXD.mKeyboardImmediateData[42] & 0x80) != 0)
                        mCHOICEUI.Set(
                            7,
                            0,
                            mNPCInfo->nIndex,
                            mNPCInfo->nShopInfo[mShopPresentPage][v6],
                            0,
                            0,
                            0,
                            0,
                            0,
                            1,
                            uX - 52,
                            uY - 72);
                    else
                        mCHOICEUI.Set(
                            7,
                            0,
                            mNPCInfo->nIndex,
                            mNPCInfo->nShopInfo[mShopPresentPage][v6],
                            99,
                            0,
                            0,
                            0,
                            0,
                            0,
                            0,
                            0);
                }
                else
                {
                    mCHOICEUI.Set(
                        7,
                        0,
                        mNPCInfo->nIndex,
                        mNPCInfo->nShopInfo[mShopPresentPage][v6],
                        0,
                        0,
                        0,
                        0,
                        0,
                        0,
                        0,
                        0);
                }
            }
        }
    }
}

void NPCUI::LBUTTONDOWN10(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[612]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetMakeItemIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[2] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[3] = 1;
            }
        }
        else
        {
            switch (v5)
            {
            case 0:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    8,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 1:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 2:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    16,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 3:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    17,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            default:
                return;
            }
        }
    }
}


void NPCUI::LBUTTONDOWN11(int uX, int uY)
{
    int i;

    mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[596]) / 2;
    mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[596]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 4, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else
    {
        for (i = 0; i < ReturnMoneyMoveNum(); ++i)
        {
            if (ReturnMoneyMoveZoneNumber(i) != mMYINFO.mPresentZoneNumber && uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * i + 26 && uY < mY + 18 * i + 38)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[i + 1] = 1;
                return;
            }
        }
    }
}
void NPCUI::LBUTTONDOWN12(int uX, int uY)
{
    int v3;
    ITEM_INFO* v5;
    int a4;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[688]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        a4 = NPCUI::GetSaveItemIndex1(uX, uY, -1);
        if (a4 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[300], mX + 95, mY + 409, uX, uY) || GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3473], mX + 38, mY + 409, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            v5 = mITEM.Search(mMYINFO.mAvatarInfo.uSaveItem[a4][0]);
            if (!v5)
                return;
            if (v5->iSort == 2)
            {
                if (mMYINFO.mAvatarInfo.uSaveItem[a4][1] <= 1)
                {
                    mCHOICEUI.Set(
                        14,
                        0,
                        a4,
                        mMYINFO.mAvatarInfo.uSaveItem[a4][0],
                        1,
                        mMYINFO.mAvatarInfo.uSaveItem[a4][2],
                        mMYINFO.mAvatarInfo.uSaveItem[a4][3],
                        0,
                        0,
                        0,
                        0,
                        0);
                    return;
                }
                if ((mGXD.mKeyboardImmediateData[42] & 0x80) != 0)
                {
                    mCHOICEUI.Set(
                        14,
                        0,
                        a4,
                        mMYINFO.mAvatarInfo.uSaveItem[a4][0],
                        0,
                        mMYINFO.mAvatarInfo.uSaveItem[a4][2],
                        mMYINFO.mAvatarInfo.uSaveItem[a4][3],
                        0,
                        0,
                        1,
                        uX - 52,
                        uY - 72);
                    return;
                }
            }
            mCHOICEUI.Set(
                14,
                0,
                a4,
                mMYINFO.mAvatarInfo.uSaveItem[a4][0],
                mMYINFO.mAvatarInfo.uSaveItem[a4][1],
                mMYINFO.mAvatarInfo.uSaveItem[a4][2],
                mMYINFO.mAvatarInfo.uSaveItem[a4][3],
                0,
                0,
                0,
                0,
                0);
        }
    }
}

void NPCUI::LBUTTONDOWN13(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[725]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetImproveIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[726], mX + 171, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(9, mPage[v5] + 100 * v5, mIndex[v5], mInv[v5].iIndex, mInv[v5].iX, mInv[v5].iY, mInv[v5].iQuantity, mInv[v5].iImproveState, mInv[v5].iSerialNumber, 0, 0, 0);
            else
                mCHOICEUI.Set(8, mPage[0], mIndex[0], mInv[0].iIndex, mInv[0].iX, mInv[0].iY, mInv[0].iQuantity, mInv[0].iImproveState, mInv[0].iSerialNumber, 0, 0, 0);
        }
    }
}

void NPCUI::LBUTTONDOWN14(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3333]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetSocketInitIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[908], mX + 171, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
            else
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
        }
    }
}
void NPCUI::LBUTTONDOWN17(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[957]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetMakeSkillIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[958], mX + 172, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[2] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[3] = 1;
            }
        }
        else
        {
            switch (v5)
            {
            case 0:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    8,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 1:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 2:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    16,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 3:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    17,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            default:
                return;
            }
        }
    }
}

void NPCUI::LBUTTONDOWN18(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[972]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetHighIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[973], mX + 172, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
            else
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
        }
    }
}

void NPCUI::LBUTTONDOWN19(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3334]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        if (tUltimateUpgradeState[0] == 0)
        {
            v5 = NPCUI::GetSocketJewelDeleteIdx1(uX, uY);
            if (v5 == -1)
            {
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY)) // Close Window
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[0] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[908], mX + 171, mY + 414, uX, uY)) // Confirm
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[1] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3339], mX + 19, mY + 364, uX, uY)) // 1st Socket Box
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[2] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3339], mX + 60, mY + 364, uX, uY))// 2nd Socket Box
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[3] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3339], mX + 101, mY + 364, uX, uY))// 3rd Socket Box
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[4] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3339], mX + 142, mY + 364, uX, uY))// 4th Socket Box
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[5] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3339], mX + 183, mY + 364, uX, uY))// 5th Socket Box
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[6] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))// Left Arrow Page
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[7] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))// Right Arrow Page
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[8] = 1;
                }
            }
            else
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                if (v5)
                {
                    mCHOICEUI.Set(9, mPage[v5] + 100 * v5, mIndex[v5], mInv[v5].iIndex, mInv[v5].iX, mInv[v5].iY, mInv[v5].iQuantity, mInv[v5].iImproveState, mInv[v5].iSerialNumber, 0, 0, 0);
                }
                else
                {
                    mCHOICEUI.Set(8, mPage[0], mIndex[0], mInv[0].iIndex, mInv[0].iX, mInv[0].iY, mInv[0].iQuantity, mInv[0].iImproveState, mInv[0].iSerialNumber, 0, 0, 0);
                }
            }
            return;
        }
        if (tUltimateUpgradeState[0] == 1)
        {
            v5 = NPCUI::GetSocketJewelDeleteIdx1(uX, uY);
            if (v5 == -1)
            {
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY)) // Close Window
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[0] = 1;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[908], mX + 171, mY + 414, uX, uY)) // Confirm
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[1] = 1;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))// Left Arrow Page
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[7] = 1;
                }
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))// Right Arrow Page
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[8] = 1;
                }
            }
            else
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                if (v5)
                {
                    mCHOICEUI.Set(9, mPage[v5] + 100 * v5, mIndex[v5], mInv[v5].iIndex, mInv[v5].iX, mInv[v5].iY, mInv[v5].iQuantity, mInv[v5].iImproveState, mInv[v5].iSerialNumber, 0, 0, 0);
                }
                else
                {
                    mCHOICEUI.Set(8, mPage[0], mIndex[0], mInv[0].iIndex, mInv[0].iX, mInv[0].iY, mInv[0].iQuantity, mInv[0].iImproveState, mInv[0].iSerialNumber, 0, 0, 0);
                }
            }
            return;
        }
    }
}

void NPCUI::LBUTTONDOWN20(int uX, int uY)
{
    int v3;
    int v4;
    int a2;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[596]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[596]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 4, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else
    {
        for (a2 = 0; a2 < NPCUI::ReturnGuardMoveNum(); ++a2)
        {
            if (NPCUI::ReturnGuardMoveZone(a2) && uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * a2 + 9 && uY < mY + 18 * a2 + 21)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[a2 + 1] = 1;
                return;
            }
        }
    }
}

void NPCUI::LBUTTONDOWN21(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1164]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1165], mX + 28, mY + 9, uX, uY))
        {
            if (mCashShopMaxPage)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCashShopMaxPage = 0;
                mCashShopPage = 0;
                mCashShopIndex = -1;
            }
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1166], mX + 88, mY + 9, uX, uY))
        {
            if (mCashShopMaxPage != 1)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCashShopMaxPage = 1;
                mCashShopPage = 0;
                mCashShopIndex = -1;
            }
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1167], mX + 148, mY + 9, uX, uY))
        {
            if (mCashShopMaxPage != 2)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCashShopMaxPage = 2;
                mCashShopPage = 0;
                mCashShopIndex = -1;
            }
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1344], mX + 208, mY + 9, uX, uY))
        {
            if (mCashShopMaxPage != 3)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCashShopMaxPage = 3;
                mCashShopPage = 0;
                mCashShopIndex = -1;
            }
        }
        else
        {
            v5 = NPCUI::GetCashShopIndex1(uX, uY);
            if (v5 == -1)
            {
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 7, mY + 7, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[0] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 152, mY + 411, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[1] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 250, mY + 411, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[2] = 1;
                }
                else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1338], mX + 361, mY + 411, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[3] = 1;
                }
            }
            else if (v5 != mCashShopIndex)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCashShopIndex = v5;
            }
        }
    }
}
void NPCUI::LBUTTONDOWN22(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3313]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetSocketExchangeIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[908], mX + 172, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mCHOICEUI.Set(
                8,
                mPage[0] + 100 * v5,
                mIndex[0],
                mInv[0].iIndex,
                mInv[0].iX,
                mInv[0].iY,
                mInv[0].iQuantity,
                mInv[0].iImproveState,
                mInv[0].iSerialNumber,
                0,
                0,
                0);
        }
    }
}

void NPCUI::LBUTTONDOWN23(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3314]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetSocketJewelUpIdx1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3315], mX + 171, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
            else
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
        }
    }
}

void NPCUI::LBUTTONDOWN25(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1356]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetLowIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1357], mX + 172, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
            else
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
        }
    }
}

void NPCUI::LBUTTONDOWN26(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1477]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetAddIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1478], mX + 172, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
            else
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
        }
    }
}

void NPCUI::LBUTTONDOWN27(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;

    v7 = mGambleInfo[0];
    if (v7)
    {
        if (v7 == 1)
        {
            v5 = mMYINFO.mScreenXSize / 2;
            mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3262]) / 2;
            v6 = mMYINFO.mScreenYSize / 2;
            mY = v6 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3262]) / 2;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[997], mX + 513, mY + 283, uX, uY))
            {
                mIsClick[0] = 1;
                mIsClick[1] = 0;
                mIsClick[2] = 0;
                mIsClick[3] = 0;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[998], mX + 553, mY + 283, uX, uY))
            {
                mIsClick[1] = 1;
                mIsClick[0] = 0;
                mIsClick[2] = 0;
                mIsClick[3] = 0;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[999], mX + 593, mY + 283, uX, uY))
            {
                mIsClick[2] = 1;
                mIsClick[0] = 0;
                mIsClick[1] = 0;
                mIsClick[3] = 0;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1000], mX + 633, mY + 283, uX, uY))
            {
                mIsClick[3] = 1;
                mIsClick[0] = 0;
                mIsClick[1] = 0;
                mIsClick[2] = 0;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1001], mX + 517, mY + 328, uX, uY))
            {
                mIsClick[4] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1002], mX + 542, mY + 328, uX, uY))
            {
                mIsClick[5] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 515, mY + 380, uX, uY))
            {
                mGambleInfo[2] = 0;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 594, mY + 380, uX, uY))
            {
                mGambleInfo[2] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1491], mX + 522, mY + 457, uX, uY))
            {
                mIsClick[8] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1005], mX + 581, mY + 457, uX, uY))
            {
                mIsClick[9] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1007], mX + 639, mY + 457, uX, uY))
            {
                mIsClick[10] = 1;
            }
        }
    }
    else
    {
        v3 = mMYINFO.mScreenXSize / 2;
        mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3255]) / 2;
        v4 = mMYINFO.mScreenYSize / 2;
        mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3255]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3256], mX + 125, mY + 93, uX, uY))
        {
            mIsClick[0] = 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3259], mX + 249, mY + 93, uX, uY))
        {
            mIsClick[1] = 1;
        }
    }
}

void NPCUI::LBUTTONDOWN28(int uX, int uY)
{
    int v3;
    int v4;
    int i;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1593]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1593]) / 2;
    if (uX <= mEDITBOX.mEditBoxInfo[16][0] || uX >= mEDITBOX.mEditBoxInfo[16][2] || uY <= mEDITBOX.mEditBoxInfo[16][1] || uY >= mEDITBOX.mEditBoxInfo[16][3])
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1594], mX + 188, mY + 93, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
        }
        else
        {
            for (i = 0; i < 12; ++i)
            {
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2647], mX + 188, mY + 24 * i + 169, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mIsClick[i + 1] = 1;
                    return;
                }
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 213, mY + 464, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[13] = 1;
            }
        }
    }
    else
    {
        mEDITBOX.Set(17);
    }
}

void NPCUI::LBUTTONDOWN29(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1641]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1641]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1646], mX + 213, mY + 187, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1642], mX + 17, mY + 146, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
    }
}

void NPCUI::LBUTTONDOWN30(int uX, int uY)
{
    int v3;
    int v4;
    int v6;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    if (mPageSort)
    {
        if (mPageSort == 1)
        {
            v4 = mX + 23;
            mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4152]);
        }
    }
    else
    {
        v3 = mX + 23;
        mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1661]);
    }
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v6 = NPCUI::GetExchangeIndex1(uX, uY);
        if (v6 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 172, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[2] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[3] = 1;
            }
        }
        else if (v6)
        {
            if (v6 == 1)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    9,
                    mPage[1] + 100,
                    mIndex[1],
                    mInv[1].iIndex,
                    mInv[1].iX,
                    mInv[1].iY,
                    mInv[1].iQuantity,
                    mInv[1].iImproveState,
                    mInv[1].iSerialNumber,
                    0,
                    0,
                    0);
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mCHOICEUI.Set(
                8,
                mPage[0],
                mIndex[0],
                mInv[0].iIndex,
                mInv[0].iX,
                mInv[0].iY,
                mInv[0].iQuantity,
                mInv[0].iImproveState,
                mInv[0].iSerialNumber,
                0,
                0,
                0);
        }
    }
}

void NPCUI::LBUTTONDOWN33(int uX, int uY)
{
    int v3;
    int v4;
    int k;
    int i;
    int j;
    int v9;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2429]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v4 = mItemSearchInfo[0];
        if (v4)
        {
            if (v4 == 1)
            {
                for (i = 0; i < 4; ++i)
                {
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2458], mX + 64, mY + 18 * i + 33, uX, uY))
                    {
                        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                        mItemSearchInfo[1] = i;
                        mItemSearchInfo[0] = 0;
                        return;
                    }
                }
            }
            else if (v4 == 2)
            {
                for (j = 0; j < 20; ++j)
                {
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2435], mX + 241, mY + 18 * j + 33, uX, uY))
                    {
                        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                        mItemSearchInfo[2] = j;
                        mItemSearchInfo[0] = 0;
                        return;
                    }
                }
            }
        }
        else
        {
            for (k = 0; k < 10; ++k)
            {
                v9 = k + 10 * mItemSearchInfo[4];
                if (v9 <= mItemSearchInfo[6] - 1 && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2432], mX + 288 * (k / 5) + 27, mY + ((k % 5) << 6) + 74, uX, uY))
                {
                    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                    mItemSearchInfo[5] = v9;
                    return;
                }
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3150], mX + 164, mY + 13, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3152], mX + 341, mY + 13, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2029], mX + 509, mY + 13, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[2] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 252, mY + 411, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[3] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 350, mY + 411, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[4] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1338], mX + 500, mY + 412, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[5] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2386], mX + 557, mY + 412, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[6] = 1;
            }
        }
    }
}

void NPCUI::LBUTTONDOWN34(int uX, int uY)
{
    int v3;
    int v4;
    char* v5;
    char* v6;
    char* v7;
    char* v8;
    int v9;
    int v10;
    int v11;
    SKILL_INFO* v13;
    char Buffer[1000];
    int v15;
    int i;
    int j;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2645]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2645]) / 2;
    v15 = 0;
LABEL_2:
    if (v15 >= 3)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 173, mY + 357, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 232, mY + 357, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 252, mY + 25, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[2] = 1;
        }
    }
    else
    {
        for (i = 0; ; ++i)
        {
            if (i >= 8)
            {
                ++v15;
                goto LABEL_2;
            }
            if (mNPCInfo->nSkillInfo2[mMYINFO.mAvatarInfo.aPreviousTribe][mQuestData[4]][v15][i] >= 1
                && uX > mX + 76 * v15 + 35
                && uX < mX + 76 * v15 + 85
                && uY > mY + 54 * i + 71
                && uY < mY + 54 * i + 121)
            {
                break;
            }
        }
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        v13 = mSKILL.Search(mNPCInfo->nSkillInfo2[mMYINFO.mAvatarInfo.aPreviousTribe][mQuestData[4]][v15][i]);
        if (v13)
        {
            if (mMYINFO.mAvatarInfo.aSkillPoint >= v13->sLearnSkillPoint)
            {
                for (j = 0; j < 40 && (mMYINFO.mAvatarInfo.aSkill[j][0] < 1 || mMYINFO.mAvatarInfo.aSkill[j][0] != v13->sIndex); ++j)
                {
                    ;
                }
                if (j >= 40)
                {
                    switch (v13->sType)
                    {
                    case 1:
                        for (j = 0; j < 10 && mMYINFO.mAvatarInfo.aSkill[j][0] >= 1; ++j)
                            ;
                        if (j != 10)
                            goto LABEL_58;
                        goto LABEL_57;
                    case 2:
                        for (j = 20; j < 30 && mMYINFO.mAvatarInfo.aSkill[j][0] >= 1; ++j)
                            ;
                        if (j != 30)
                            goto LABEL_58;
                        goto LABEL_57;
                    case 3:
                        for (j = 10; j < 20 && mMYINFO.mAvatarInfo.aSkill[j][0] >= 1; ++j)
                            ;
                        if (j != 20)
                            goto LABEL_58;
                        for (j = 30; j < 40 && mMYINFO.mAvatarInfo.aSkill[j][0] >= 1; ++j)
                            ;
                        if (j != 40)
                            goto LABEL_58;
                        goto LABEL_57;
                    case 4:
                        for (j = 10; j < 20 && mMYINFO.mAvatarInfo.aSkill[j][0] >= 1; ++j)
                            ;
                        if (j != 20)
                            goto LABEL_58;
                        for (j = 30; j < 40 && mMYINFO.mAvatarInfo.aSkill[j][0] >= 1; ++j)
                            ;
                        if (j == 40)
                        {
                        LABEL_57:
                            v11 = mFONTCOLOR.mData[44];
                            v7 = mMESSAGE.Return(137);
                            mBASICUI.Insert1(v7, v11);
                        }
                        else
                        {
                        LABEL_58:
                            mSkillIndex = mNPCInfo->nSkillInfo2[mMYINFO.mAvatarInfo.aPreviousTribe][mQuestData[4]][v15][i];
                            v8 = mMESSAGE.Return(144);
                            sprintf(Buffer, "[%s]%s", v13->sName, v8);
                            mCBOXUI.Set(29, Buffer, "");
                        }
                        break;
                    default:
                        return;
                    }
                }
                else
                {
                    v10 = mFONTCOLOR.mData[44];
                    v6 = mMESSAGE.Return(136);
                    mBASICUI.Insert1(v6, v10);
                }
            }
            else
            {
                v9 = mFONTCOLOR.mData[44];
                v5 = mMESSAGE.Return(135);
                mBASICUI.Insert1(v5, v9);
            }
        }
    }
}

void NPCUI::LBUTTONDOWN35(int uX, int uY)
{
    int v3;
    int v4;
    int i;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2653]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2653]) / 2;
    for (i = 0; i < 10; ++i)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2654], mX + 296, mY + 33 * i + 44, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[i] = 1;
            return;
        }
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 298, mY + 377, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[10] = 1;
    }
}

void NPCUI::LBUTTONDOWN36(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2726]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2726]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 299, mY + 233, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 381, mY + 233, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
    }
}

void NPCUI::LBUTTONDOWN37(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;

    if (!mMYINFO.mAvatarInfo.aTitle && !mMYINFO.iTribeCallType)
    {
        v3 = mMYINFO.mScreenXSize / 2;
        mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3227]) / 2;
        v4 = mMYINFO.mScreenYSize / 2;
        mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3227]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3229], mX + 37, mY + 94, uX, uY))
        {
        LABEL_4:
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return;
        }
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3232], mX + 120, mY + 94, uX, uY))
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3235], mX + 203, mY + 94, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[2] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3238], mX + 286, mY + 94, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[3] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3241], mX + 369, mY + 94, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[4] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 441, mY + 7, uX, uY))
            {
                if (!mMYINFO.mAvatarInfo.aTitle)
                    mMYINFO.iTribeCallType = 0;
                NPCUI::Off();
            }
            return;
        }
    LABEL_19:
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
        return;
    }
    v5 = mMYINFO.mScreenXSize / 2;
    mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2816]) / 2;
    v6 = mMYINFO.mScreenYSize / 2;
    mY = v6 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2816]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2817], mX + 89, mY + 208, uX, uY))
        goto LABEL_4;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24, uX, uY))
        goto LABEL_19;
}

void NPCUI::LBUTTONDOWN38(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2979]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2979]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2980], mX + 89, mY + 208, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
    }
}

void NPCUI::LBUTTONDOWN39(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2997]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2997]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2141], mX + 89, mY + 208, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
    }
}

void NPCUI::LBUTTONDOWN40(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1818]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1818]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1819], mX + 17, mY + 134, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 214, mY + 177, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
    }
}

void NPCUI::LBUTTONDOWN41(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3143]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetMakeBirdIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[2] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[3] = 1;
            }
        }
        else
        {
            switch (v5)
            {
            case 0:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    8,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 1:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 2:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    16,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 3:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    17,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            default:
                return;
            }
        }
    }
}

void NPCUI::LBUTTONDOWN42(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3142]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetDestroyIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[908], mX + 172, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mCHOICEUI.Set(
                8,
                mPage[0] + 100 * v5,
                mIndex[0],
                mInv[0].iIndex,
                mInv[0].iX,
                mInv[0].iY,
                mInv[0].iQuantity,
                mInv[0].iImproveState,
                mInv[0].iSerialNumber,
                0,
                0,
                0);
        }
    }
}

void NPCUI::LBUTTONDOWN43(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3164]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3164]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 165, mY + 176, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 240, mY + 176, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
    }
}

void NPCUI::LBUTTONDOWN44(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3165]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3165]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 165, mY + 176, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 240, mY + 176, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
    }
}

void NPCUI::LBUTTONDOWN45(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3175]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3175]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1819], mX + 17, mY + 134, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 214, mY + 177, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
    }
}

void NPCUI::LBUTTONDOWN46(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3179]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetImprove2Index1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3180], mX + 171, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
            else
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
        }
    }
}

void NPCUI::LBUTTONDOWN51(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3247]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetSkyImproveIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3248], mX + 171, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
            else
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
        }
    }
}

void NPCUI::LBUTTONDOWN52(int uX, int uY)
{
    int i;
    int j;

    mMYINFO.AdjustScreenCoord(299, 389, 267, &mX, &mY);
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 149, mY + 203, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 47, mY + 203, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
    }
    else
    {
        for (i = 0; i < 5; ++i)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 20, mY + 28 * i + 57, uX, uY))
            {
                for (j = 2; j < 7; ++j)
                    mIsClick[j] = 0;
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[i + 2] = 1;
                mMYINFO.mAvatarInfo.aTimeEffect2 = i + 1;
                return;
            }
        }
    }
}

void NPCUI::LBUTTONDOWN54(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3456]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetSmeltIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 171, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
            else
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
        }
    }
}

void NPCUI::LBUTTONDOWN56(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3516]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetSocketAddUpIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1773], mX + 171, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
            else
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
        }
    }
}

void NPCUI::LBUTTONDOWN58(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3786]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetImprove3Index1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3788], mX + 171, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
            else
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
        }
    }
}

void NPCUI::LBUTTONDOWN61(int uX, int uY)
{
    int mIndex;

    mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[596]) / 2;
    mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[596]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 4, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else
    {
        for (mIndex = 0; mIndex < ReturnGuard2MoveNum(); ++mIndex)
        {
            if (ReturnGuard2MoveZone(mIndex) && uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * mIndex + 9 && uY < mY + 18 * mIndex + 21)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[mIndex + 1] = 1;
                return;
            }
        }
    }
}

void NPCUI::LBUTTONDOWN62(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3002]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3002]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3003], mX + 175, mY + 253, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 224, mY + 7, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
    }
}
void NPCUI::LBUTTONDOWN63(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3905]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetCloakUpIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3249], mX + 171, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
            else
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
        }
    }
}

void NPCUI::LBUTTONDOWN66(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3993]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetMakeG12PetIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3994], mX + 172, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[2] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[3] = 1;
            }
        }
        else
        {
            switch (v5)
            {
            case 0:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    8,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 1:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 2:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    16,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 3:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    17,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            default:
                return;
            }
        }
    }
}

void NPCUI::LBUTTONDOWN67(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3996]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetPetAddAbilityIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3997], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[726], mX + 171, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
            else
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
        }
    }
}

void NPCUI::LBUTTONDOWN68(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4021]);
    mY = mY;
    if (mINVENUI.LBUTTONDOWN(uX, uY))
        return;
    v5 = NPCUI::GetLegendHighIndex1(uX, uY);
    if (tUltimateUpgradeState[0])
    {
        if (tUltimateUpgradeState[0] == 1)
        {
            if (v5 != -1)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                switch (v5)
                {
                case 0:
                    goto LABEL_5;
                case 1:
                    mCHOICEUI.Set(
                        9,
                        mPage[1] + 100,
                        mIndex[1],
                        mInv[1].iIndex,
                        mInv[1].iX,
                        mInv[1].iY,
                        mInv[1].iQuantity,
                        mInv[1].iImproveState,
                        mInv[1].iSerialNumber,
                        0,
                        0,
                        0);
                    break;
                case 2:
                    mCHOICEUI.Set(
                        16,
                        mPage[2] + 200,
                        mIndex[2],
                        mInv[2].iIndex,
                        mInv[2].iX,
                        mInv[2].iY,
                        mInv[2].iQuantity,
                        mInv[2].iImproveState,
                        mInv[2].iSerialNumber,
                        0,
                        0,
                        0);
                    break;
                case 3:
                    mCHOICEUI.Set(
                        17,
                        mPage[3] + 300,
                        mIndex[3],
                        mInv[3].iIndex,
                        mInv[3].iX,
                        mInv[3].iY,
                        mInv[3].iQuantity,
                        mInv[3].iImproveState,
                        mInv[3].iSerialNumber,
                        0,
                        0,
                        0);
                    break;
                }
                return;
            }
        }
        else if (tUltimateUpgradeState[0] == 2 && v5 != -1)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
            {
                switch (v5)
                {
                case 1:
                    mCHOICEUI.Set(
                        9,
                        mPage[1] + 100,
                        mIndex[1],
                        mInv[1].iIndex,
                        mInv[1].iX,
                        mInv[1].iY,
                        mInv[1].iQuantity,
                        mInv[1].iImproveState,
                        mInv[1].iSerialNumber,
                        0,
                        0,
                        0);
                    break;
                case 2:
                    mCHOICEUI.Set(
                        16,
                        mPage[2] + 200,
                        mIndex[2],
                        mInv[2].iIndex,
                        mInv[2].iX,
                        mInv[2].iY,
                        mInv[2].iQuantity,
                        mInv[2].iImproveState,
                        mInv[2].iSerialNumber,
                        0,
                        0,
                        0);
                    break;
                case 3:
                    mCHOICEUI.Set(
                        17,
                        mPage[3] + 300,
                        mIndex[3],
                        mInv[3].iIndex,
                        mInv[3].iX,
                        mInv[3].iY,
                        mInv[3].iQuantity,
                        mInv[3].iImproveState,
                        mInv[3].iSerialNumber,
                        0,
                        0,
                        0);
                    break;
                }
            }
            else
            {
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[4] = 1;
            }
            return;
        }
    LABEL_32:
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3249], mX + 172, mY + 414, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[2] = 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[3] = 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[4] = 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX - 244, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[6] = 1;
        }
        return;
    }
    if (v5 == -1)
        goto LABEL_32;
    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
    if (!v5)
    {
    LABEL_5:
        mCHOICEUI.Set(
            8,
            mPage[0],
            mIndex[0],
            mInv[0].iIndex,
            mInv[0].iX,
            mInv[0].iY,
            mInv[0].iQuantity,
            mInv[0].iImproveState,
            mInv[0].iSerialNumber,
            0,
            0,
            0);
        return;
    }
    mCHOICEUI.Set(
        9,
        mPage[v5] + 100 * v5,
        mIndex[v5],
        mInv[v5].iIndex,
        mInv[v5].iX,
        mInv[v5].iY,
        mInv[v5].iQuantity,
        mInv[v5].iImproveState,
        mInv[v5].iSerialNumber,
        0,
        0,
        0);
}

void NPCUI::LBUTTONDOWN69(int uX, int uY)
{
    int sX, sY;
    int tstrlen;
    char* tstr;
    char* tstr2;
    char* tstr3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4025]);
    mY = mY;
    if (mINVENUI.LBUTTONDOWN(uX, uY))
        return;

    if (tUltimateUpgradeState[0] == 0)
    {
        v5 = NPCUI::GetLegendImproveIndex1(uX, uY);
        if (v5 != -1)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (!v5)
            {
                mCHOICEUI.Set(8, mPage[0], mIndex[0], mInv[0].iIndex, mInv[0].iX, mInv[0].iY, mInv[0].iQuantity, mInv[0].iImproveState, mInv[0].iSerialNumber, 0, 0, 0);
                return;
            }
            else
            {
                mCHOICEUI.Set(9, mPage[v5] + 100 * v5, mIndex[v5], mInv[v5].iIndex, mInv[v5].iX, mInv[v5].iY, mInv[v5].iQuantity, mInv[v5].iImproveState, mInv[v5].iSerialNumber, 0, 0, 0);
                return;
            }
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[726], mX + 171, mY + 414, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[2] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX - 244, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[4], 0, 100);
            mIsClick[4] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[5] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[6] = 1;
            return;
        }
        return;
    }
    if (tUltimateUpgradeState[0] == 1)
    {
        v5 = NPCUI::GetLegendEngraveIndex1(uX, uY);
        if (v5 != -1)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (!v5)
            {
                mCHOICEUI.Set(8, mPage[0], mIndex[0], mInv[0].iIndex, mInv[0].iX, mInv[0].iY, mInv[0].iQuantity, mInv[0].iImproveState, mInv[0].iSerialNumber, 0, 0, 0);
                return;
            }
            else
            {
                mCHOICEUI.Set(9, mPage[v5] + 100 * v5, mIndex[v5], mInv[v5].iIndex, mInv[v5].iX, mInv[v5].iY, mInv[v5].iQuantity, mInv[v5].iImproveState, mInv[v5].iSerialNumber, 0, 0, 0);
                return;
            }
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[726], mX + 171, mY + 414, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[2] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX - 244, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[4], 0, 100);
            mIsClick[4] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[5] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[6] = 1;
            return;
        }
        return;
    }
    if (tUltimateUpgradeState[0] == 2)
    {

        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[726], mX + 171, mY + 414, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[2] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX - 244, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[4], 0, 100);
            mIsClick[4] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[5] = 1;
            return;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[6] = 1;
            return;
        }
        return;
    }
}

void NPCUI::LBUTTONDOWN70(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4029]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetLegendImprove2Index1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3180], mX + 172, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[2] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[3] = 1;
            }
        }
        else
        {
            switch (v5)
            {
            case 0:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    8,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 1:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 2:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    16,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            case 3:
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(
                    17,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
                break;
            default:
                return;
            }
        }
    }
}

void NPCUI::LBUTTONDOWN72(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4129]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetRequiemSmeltIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[610], mX + 171, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[2] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX - 244, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[4], 0, 100);
                mIsClick[4] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
            else
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
        }
    }
}

void NPCUI::LBUTTONDOWN73(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4145]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetAccTransferIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4146], mX + 171, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[2] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX - 244, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[4], 0, 100);
                mIsClick[4] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
            {
                switch (v5)
                {
                case 1:
                    mCHOICEUI.Set(
                        9,
                        mPage[1] + 100,
                        mIndex[1],
                        mInv[1].iIndex,
                        mInv[1].iX,
                        mInv[1].iY,
                        mInv[1].iQuantity,
                        mInv[1].iImproveState,
                        mInv[1].iSerialNumber,
                        0,
                        0,
                        0);
                    break;
                case 2:
                    mCHOICEUI.Set(
                        16,
                        mPage[2] + 200,
                        mIndex[2],
                        mInv[2].iIndex,
                        mInv[2].iX,
                        mInv[2].iY,
                        mInv[2].iQuantity,
                        mInv[2].iImproveState,
                        mInv[2].iSerialNumber,
                        0,
                        0,
                        0);
                    break;
                case 3:
                    mCHOICEUI.Set(
                        17,
                        mPage[3] + 300,
                        mIndex[3],
                        mInv[3].iIndex,
                        mInv[3].iX,
                        mInv[3].iY,
                        mInv[3].iQuantity,
                        mInv[3].iImproveState,
                        mInv[3].iSerialNumber,
                        0,
                        0,
                        0);
                    break;
                case 4:
                    mCHOICEUI.Set(
                        30,
                        mPage[4] + 400,
                        mIndex[4],
                        mInv[4].iIndex,
                        mInv[4].iX,
                        mInv[4].iY,
                        mInv[4].iQuantity,
                        mInv[4].iImproveState,
                        mInv[4].iSerialNumber,
                        0,
                        0,
                        0);
                    break;
                case 5:
                    mCHOICEUI.Set(
                        31,
                        mPage[5] + 500,
                        mIndex[5],
                        mInv[5].iIndex,
                        mInv[5].iX,
                        mInv[5].iY,
                        mInv[5].iQuantity,
                        mInv[5].iImproveState,
                        mInv[5].iSerialNumber,
                        0,
                        0,
                        0);
                    break;
                }
            }
            else
            {
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
            }
        }
    }
}

void NPCUI::LBUTTONDOWN74(int uX, int uY)
{
    int tIndex;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    mX = mX + 23 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4141]);

    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        tIndex = NPCUI::GetBloodShopIndex1(uX, uY);
        if (tIndex == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 7, mY + 7, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 152, mY + 411, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 250, mY + 411, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[2] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1338], mX + 361, mY + 411, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[3] = 1;
            }
        }
        else if (tIndex != mBloodStoreIndex)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mBloodStoreIndex = tIndex;
        }
    }
}

void NPCUI::LBUTTONDOWN75(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4175]);
    mY = mY;
    if (!mINVENUI.LBUTTONDOWN(uX, uY))
    {
        v5 = NPCUI::GetLegendSocketIndex1(uX, uY);
        if (v5 == -1)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4176], mX + 171, mY + 414, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (v5)
                mCHOICEUI.Set(
                    9,
                    mPage[v5] + 100 * v5,
                    mIndex[v5],
                    mInv[v5].iIndex,
                    mInv[v5].iX,
                    mInv[v5].iY,
                    mInv[v5].iQuantity,
                    mInv[v5].iImproveState,
                    mInv[v5].iSerialNumber,
                    0,
                    0,
                    0);
            else
                mCHOICEUI.Set(
                    8,
                    mPage[0],
                    mIndex[0],
                    mInv[0].iIndex,
                    mInv[0].iX,
                    mInv[0].iY,
                    mInv[0].iQuantity,
                    mInv[0].iImproveState,
                    mInv[0].iSerialNumber,
                    0,
                    0,
                    0);
        }
    }
}

void NPCUI::LBUTTONDOWN76(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int i;

    v5 = mMYINFO.mScreenXSize / 2;
    mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[596]) / 2;
    v6 = mMYINFO.mScreenYSize / 2;
    v7 = v6 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[596]) / 2;
    mY = v7;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 4, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else
    {
        for (i = 0; i < 4; ++i)
        {
            if (NPCUI::ReturnAtributeMoveZone(i) != mMYINFO.mPresentZoneNumber && uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * i + 26 && uY < mY + 18 * i + 38)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[i + 1] = 1;
                return;
            }
        }
    }
}

void NPCUI::LBUTTONDOWN77(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;

    v5 = mMYINFO.mScreenXSize / 2;
    mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4444]) / 2;
    v6 = mMYINFO.mScreenYSize / 2;
    mY = v6 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[4444]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4446], mX + 28, mY + 332, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4449], mX + 152, mY + 332, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[2] = 1;
    }
}

BOOL NPCUI::LBUTTONUP(int uX, int uY)
{
    if (!mActive)
        return FALSE;
    switch (mWorkId)
    {
    case 0:
        NPCUI::LBUTTONUP000(uX, uY);
        return TRUE;
    case 1:
        return TRUE;
    case 2:
        NPCUI::LBUTTONUP2(uX, uY);
        return TRUE;
    case 3:
        return TRUE;
    case 4:
        return TRUE;
    case 5:
        NPCUI::LBUTTONUP5(uX, uY);
        return TRUE;
    case 6:
        NPCUI::LBUTTONUP6(uX, uY);
        return TRUE;
    case 7:
        NPCUI::LBUTTONUP7(uX, uY);
        return TRUE;
    case 8:
        NPCUI::LBUTTONUP8(uX, uY);
        return TRUE;
    case 9:
        return TRUE;
    case 10:
        NPCUI::LBUTTONUP10(uX, uY);
        return TRUE;
    case 11:
        NPCUI::LBUTTONUP11(uX, uY);
        return TRUE;
    case 12:
        NPCUI::LBUTTONUP12(uX, uY);
        return TRUE;
    case 13:
        NPCUI::LBUTTONUP13(uX, uY);
        return TRUE;
    case 14:
        NPCUI::LBUTTONUP14(uX, uY);
        return TRUE;
    case 15:
        return TRUE;
    case 16:
        return TRUE;
    case 17:
        NPCUI::LBUTTONUP17(uX, uY);// Craft Skill Elder
        return TRUE;
    case 18:
        NPCUI::LBUTTONUP18(uX, uY);
        return TRUE;
    case 19:
        NPCUI::LBUTTONUP19(uX, uY);
        return TRUE;
    case 20:
        NPCUI::LBUTTONUP20(uX, uY);
        return TRUE;
    case 21:
        NPCUI::LBUTTONUP21(uX, uY);
        return TRUE;
    case 22:
        NPCUI::LBUTTONUP22(uX, uY);
        return TRUE;
    case 23:
        NPCUI::LBUTTONUP23(uX, uY);
        return TRUE;
    case 24:
        return TRUE;
    case 25:
        NPCUI::LBUTTONUP25(uX, uY);
        return TRUE;
    case 26:
        NPCUI::LBUTTONUP26(uX, uY);
        return TRUE;
    case 27:
        NPCUI::LBUTTONUP27(uX, uY);
        return TRUE;
    case 28:
        NPCUI::LBUTTONUP28(uX, uY);
        return TRUE;
    case 29:
        NPCUI::LBUTTONUP29(uX, uY);
        return TRUE;
    case 30:
        NPCUI::LBUTTONUP30(uX, uY);
        return TRUE;
    case 33:
        NPCUI::LBUTTONUP33(uX, uY);
        return TRUE;
    case 34:
        NPCUI::LBUTTONUP34(uX, uY);
        return TRUE;
    case 35:
        NPCUI::LBUTTONUP35(uX, uY);
        return TRUE;
    case 36:
        NPCUI::LBUTTONUP36(uX, uY);
        return TRUE;
    case 37:
        NPCUI::LBUTTONUP37(uX, uY);
        return TRUE;
    case 38:
        NPCUI::LBUTTONUP38(uX, uY);
        return TRUE;
    case 39:
        NPCUI::LBUTTONUP39(uX, uY);
        return TRUE;
    case 40:
        NPCUI::LBUTTONUP40(uX, uY);
        return TRUE;
    case 41:
        NPCUI::LBUTTONUP41(uX, uY);// Craft Pet Trader Nungsi 
        return TRUE;
    case 42:
        NPCUI::LBUTTONUP42(uX, uY);
        return TRUE;
    case 43:
        NPCUI::LBUTTONUP43(uX, uY);
        return TRUE;
    case 44:
        NPCUI::LBUTTONUP44(uX, uY);
        return TRUE;
    case 45:
        NPCUI::LBUTTONUP45(uX, uY);
        return TRUE;
    case 46:
        NPCUI::LBUTTONUP46(uX, uY);
        return TRUE;
    case 47:
        return TRUE;
    case 48:
        return TRUE;
    case 49:
        return TRUE;
    case 50:
        return TRUE;
    case 51:
        NPCUI::LBUTTONUP51(uX, uY);
        return TRUE;
    case 52:
        NPCUI::LBUTTONUP52(uX, uY);
        return TRUE;
    case 53:
        return TRUE;
    case 54:
        NPCUI::LBUTTONUP54(uX, uY);
        return TRUE;
    case 55:
        return TRUE;
    case 56:
        NPCUI::LBUTTONUP56(uX, uY);
        return TRUE;
    case 58:
        NPCUI::LBUTTONUP58(uX, uY);
        return TRUE;
    case 61:
        NPCUI::LBUTTONUP61(uX, uY);
        return TRUE;
    case 62:
        NPCUI::LBUTTONUP62(uX, uY);
        return TRUE;
    case 63:
        NPCUI::LBUTTONUP63(uX, uY);
        return TRUE;
    case 64:
        return TRUE;
    case 66:
        NPCUI::LBUTTONUP66(uX, uY);// Craft Begar
        return TRUE;
    case 67:
        NPCUI::LBUTTONUP67(uX, uY);
        return TRUE;
    case 68:
        NPCUI::LBUTTONUP68(uX, uY);
        return TRUE;
    case 69:
        NPCUI::LBUTTONUP69(uX, uY);
        return TRUE;
    case 70:
        NPCUI::LBUTTONUP70(uX, uY);// Craft 2 Tailor
        return TRUE;
    case 72:
        NPCUI::LBUTTONUP72(uX, uY);
        return TRUE;
    case 73:
        NPCUI::LBUTTONUP73(uX, uY);
        return TRUE;
    case 74:
        NPCUI::LBUTTONUP74(uX, uY);
        return TRUE;
    case 75:
        NPCUI::LBUTTONUP75(uX, uY);
        return TRUE;
    case 77:
        NPCUI::LBUTTONUP77(uX, uY);
        return TRUE;
    default:
        return TRUE;
    }
}

BOOL NPCUI::RBUTTONDOWN(int uX, int uY)
{
    if (!mActive)
        return 0;

    switch (mWorkId)
    {
    case 6:
        NPCUI::RBUTTONDOWN6(uX, uY);
        return FALSE;
    case 8:
        NPCUI::RBUTTONDOWN8(uX, uY);
        return FALSE;
    case 10:
        NPCUI::RBUTTONDOWN10(uX, uY);
        return FALSE;
    case 12:
        NPCUI::RBUTTONDOWN12(uX, uY);
        return FALSE;
    case 13:
        NPCUI::RBUTTONDOWN13(uX, uY);
        return FALSE;
    case 14:
        NPCUI::RBUTTONDOWN14(uX, uY);
        return FALSE;
    case 17:
        NPCUI::RBUTTONDOWN17(uX, uY);
        return FALSE;
    case 18:
        NPCUI::RBUTTONDOWN18(uX, uY);
        return FALSE;
    case 19:
        NPCUI::RBUTTONDOWN19(uX, uY);
        return FALSE;
    case 22:
        NPCUI::RBUTTONDOWN22(uX, uY);
        return FALSE;
    case 23:
        NPCUI::RBUTTONDOWN23(uX, uY);
        return FALSE;
    case 25:
        NPCUI::RBUTTONDOWN25(uX, uY);
        return FALSE;
    case 26:
        NPCUI::RBUTTONDOWN26(uX, uY);
        return FALSE;
    case 30:
        NPCUI::RBUTTONDOWN30(uX, uY);
        return FALSE;
    case 41:
        NPCUI::RBUTTONDOWN41(uX, uY);
        return FALSE;
    case 42:
        NPCUI::RBUTTONDOWN42(uX, uY);
        return FALSE;
    case 46:
        NPCUI::RBUTTONDOWN46(uX, uY);
        return FALSE;
    case 51:
        NPCUI::RBUTTONDOWN51(uX, uY);
        return FALSE;
    case 54:
        NPCUI::RBUTTONDOWN54(uX, uY);
        return FALSE;
    case 56:
        NPCUI::RBUTTONDOWN56(uX, uY);
        return FALSE;
    case 58:
        NPCUI::RBUTTONDOWN58(uX, uY);
        return FALSE;
    case 63:
        NPCUI::RBUTTONDOWN63(uX, uY);
        return FALSE;
    case 66:
        NPCUI::RBUTTONDOWN66(uX, uY);
        return FALSE;
    case 67:
        NPCUI::RBUTTONDOWN67(uX, uY);
        return FALSE;
    case 68:
        NPCUI::RBUTTONDOWN68(uX, uY);
        return FALSE;
    case 69:
        NPCUI::RBUTTONDOWN69(uX, uY);
        return FALSE;
    case 70:
        NPCUI::RBUTTONDOWN70(uX, uY);
        return FALSE;
    case 72:
        NPCUI::RBUTTONDOWN72(uX, uY);
        return FALSE;
    case 73:
        NPCUI::RBUTTONDOWN73(uX, uY);
        return FALSE;
    case 75:
        NPCUI::RBUTTONDOWN75(uX, uY);
        return FALSE;
    default:
        return TRUE;
    }
}

void NPCUI::RBUTTONDOWN6(int uX, int uY)
{
    int v3;
    char* v4;
    int v5;
    ITEM_INFO* a1;
    int a3;
    int tYPost1;
    int tPage2;
    int tQuantity1;
    int tIndex2;
    int tPage1;
    int tXPost1;
    int tIndex1;

    tIndex1 = 0;
    tQuantity1 = 0;
    tPage2 = 0;
    a3 = 0;
    tIndex2 = 0;
    tXPost1 = 0;
    tYPost1 = 0;
    tPage1 = 0;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[515]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[515], mX, mY, uX, uY))
    {
        tIndex1 = NPCUI::GetStoreItemIndex1(uX, uY, -1);
        if (tIndex1 != -1)
        {
            a1 = mITEM.Search(mMYINFO.mAvatarInfo.aStoreItem[mStorePage][tIndex1][0]);
            if (a1)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                tQuantity1 = mMYINFO.mAvatarInfo.aStoreItem[mStorePage][tIndex1][1];
                if (a1->iSort == 8 || a1->iSort == 9 || a1->iSort == 16 || a1->iSort == 17)
                    tPage1 = mStorePage % 100;
                else
                    tPage1 = mStorePage;
                if (mUTIL.GetFreeInventorySpace(a1, &tPage2, &a3))
                {
                    tIndex2 = mUTIL.GetInventoryIndex(tPage2);
                    tXPost1 = a3 % 8;
                    tYPost1 = a3 / 8;
                    if (tIndex2 != -1 && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        mPLAY.PROCESS_DATA_248_SEND(tPage1, tIndex1, tQuantity1, tPage2, tIndex2, tXPost1, tYPost1);
                        mCHOICEUI.mIsClick = 1;
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                    }
                }
                else
                {
                    v5 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(117);
                    mBASICUI.Insert1(v4, v5);
                }
            }
        }
    }
}

void NPCUI::RBUTTONDOWN8(int uX, int uY)
{
    int sX, sY;
    int tPage1;
    int tIndex1;
    int tQuantity1;
    int tPage2;
    int tIndex2;
    int tXPost1;
    int tYPost1;
    int v36;
    ITEM_INFO* tItem;
    int tInvenSlot;
    char* tstr;
    int tCost;
    int i;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[471]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[471], mX, mY, uX, uY))
    {
        v36 = NPCUI::GetNPCShopIndex1(uX, uY);
        if (v36 != -1)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            tItem = mITEM.Search(mNPCInfo->nShopInfo[mShopPresentPage][v36]);
            if (tItem)
            {
                if (tItem->iSort == 2)
                    tQuantity1 = 999;// 999 magazin pharma 
                else
                    tQuantity1 = 0;
                if (!mUTIL.GetFreeInventorySpace(tItem, &tPage2, &tInvenSlot))
                {
                    tstr = mMESSAGE.Return(117);
                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                    return;
                }
                tIndex2 = mUTIL.GetInventoryIndex(tPage2);
                tXPost1 = tInvenSlot % 8;
                tYPost1 = tInvenSlot / 8;
                if (tIndex2 != -1)
                {
                    switch (tItem->iIndex)
                    {
                    case 1098:
                        if (mMYINFO.mAvatarInfo.aLevel1 < 113)
                            goto LABEL_18;
                        break;
                    case 1097:
                        if (mMYINFO.mAvatarInfo.aLevel1 < 113)
                            goto LABEL_18;
                        break;
                    case 1047:
                        if (mMYINFO.mAvatarInfo.aLevel1 < 113)
                        {
                        LABEL_18:
                            tstr = mMESSAGE.Return(606);
                            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                            return;
                        }
                        break;
                    case 1434:
                        if (mMYINFO.mAvatarInfo.aRebirth < 1)
                        {
                            tstr = mMESSAGE.Return(1416);
                            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                            return;
                        }
                        break;
                    case 537:
                        if (mMYINFO.mAvatarInfo.aRebirth < 7)
                        {
                            tstr = mMESSAGE.Return(1909);
                            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                            return;
                        }
                        break;
                    case 667:
                        if (mMYINFO.mAvatarInfo.aLevel1 < 145)
                        {
                            tstr = mMESSAGE.Return(2307);
                            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                            return;
                        }
                        break;
                    case 979:
                        if (mMAIN.mWorldIndex == 50)
                        {
                            tstr = mMESSAGE.Return(2385);
                            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                            return;
                        }
                        break;
                    default:
                        if ((mPLAY.mWorldInfo.mTribeVoteState[0] || mPLAY.mWorldInfo.mTribeVoteState[1] || mPLAY.mWorldInfo.mTribeVoteState[2] || mPLAY.mWorldInfo.mTribeVoteState[3])
                            && (tItem->iIndex == 1447 || tItem->iIndex == 1448 || tItem->iIndex == 1449 || tItem->iIndex == 1499))
                        {
                            for (i = 0; i < 10 && strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][i], mMYINFO.mAvatarInfo.aName); ++i)
                            {
                                ;
                            }
                            if (i < 10)
                            {
                                tstr = mMESSAGE.Return(1506);
                                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                return;
                            }
                        }
                        break;
                    }
                    if (tItem->iSort == 2)
                    {
                        if (mMYINFO.mPresentZoneNumber == 291)
                            tCost = tQuantity1 * (tItem->iBuyCost * 0.8999999761581421);
                        else
                            tCost = tQuantity1 * tItem->iBuyCost;
                    }
                    else if (mMYINFO.mPresentZoneNumber == 291)
                    {
                        tCost = (tItem->iBuyCost * 0.8999999761581421);
                    }
                    else
                    {
                        tCost = tItem->iBuyCost;
                    }
                    if (mMYINFO.mAvatarInfo.aMoney < tCost)
                    {
                        tstr = mMESSAGE.Return(214);
                        mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                        return;
                    }
                    if (mMYINFO.mAvatarInfo.aKillOtherTribe < tItem->iBuyCPCost)
                    {
                        tstr = mMESSAGE.Return(1414);
                        mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                        return;
                    }
                    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        if (tItem->iIndex == 2141 && mMAIN.mWorldIndex != 2 || tItem->iIndex == 574 && mMAIN.mWorldIndex == 40)
                        {
                            goto LABEL_70;
                        }
                        if (tItem->iIndex == 2314)
                        {
                            if (mMAIN.mWorldIndex != 40)
                            {
                            LABEL_70:
                                tstr = mMESSAGE.Return(2055);
                                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                return;
                            }
                            if (mMYINFO.Rcmd1 >= 1)
                            {
                                tstr = mMESSAGE.Return(2347);
                                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                return;
                            }
                        }
                        mPLAY.PROCESS_DATA_215_SEND(
                            mNPCInfo->nIndex,
                            mNPCInfo->nShopInfo[mShopPresentPage][v36],
                            tQuantity1,
                            tPage2,
                            tIndex2,
                            tXPost1,
                            tYPost1);
                        mCHOICEUI.mIsClick = 1;
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                        return;
                    }
                }
            }
        }
    }
}
void NPCUI::RBUTTONDOWN10(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[612]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[612], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetMakeItemIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN12(int uX, int uY)
{
    int v3;
    char* v4;
    int v5;
    ITEM_INFO* a1;
    int a3;
    int tYPost1;
    int tPage2;
    int tQuantity1;
    int tIndex2;
    int tXPost1;
    int tIndex1;

    tIndex1 = 0;
    tQuantity1 = 0;
    tPage2 = 0;
    a3 = 0;
    tIndex2 = 0;
    tXPost1 = 0;
    tYPost1 = 0;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[688]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[688], mX, mY, uX, uY))
    {
        tIndex1 = NPCUI::GetSaveItemIndex1(uX, uY, -1);
        if (tIndex1 != -1)
        {
            a1 = mITEM.Search(mMYINFO.mAvatarInfo.uSaveItem[tIndex1][0]);
            if (a1)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                tQuantity1 = mMYINFO.mAvatarInfo.uSaveItem[tIndex1][1];
                if (mUTIL.GetFreeInventorySpace(a1, &tPage2, &a3))
                {
                    tIndex2 = mUTIL.GetInventoryIndex(tPage2);
                    tXPost1 = a3 % 8;
                    tYPost1 = a3 / 8;
                    if (tIndex2 != -1 && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        mPLAY.PROCESS_DATA_249_SEND(0, tIndex1, tQuantity1, tPage2, tIndex2, tXPost1, tYPost1);
                        mCHOICEUI.mIsClick = 1;
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                    }
                }
                else
                {
                    v5 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(117);
                    mBASICUI.Insert1(v4, v5);
                }
            }
        }
    }
}

void NPCUI::RBUTTONDOWN13(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[725]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[725], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetImproveIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN14(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3333]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3333], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetSocketInitIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN17(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[957]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[957], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetMakeSkillIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN18(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[972]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[972], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetHighIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN19(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3334]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3334], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetSocketJewelDeleteIdx1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN22(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3313]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3313], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetSocketExchangeIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN23(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3314]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3314], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetSocketJewelUpIdx1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN25(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1356]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1356], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetLowIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN26(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1477]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1477], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetAddIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN30(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1661]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1661], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetExchangeIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN41(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3143]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3143], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetMakeBirdIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN42(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3142]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3142], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetDestroyIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN46(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3179]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3179], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetImprove2Index1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN51(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3247]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3247], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetSkyImproveIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN54(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3456]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3456], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetSmeltIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN56(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3516]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3516], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetSocketAddUpIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN58(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3786]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3786], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetImprove3Index1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN63(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3905]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3905], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetCloakUpIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN66(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3993]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3993], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetMakeG12PetIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN67(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3996]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3996], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetPetAddAbilityIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN68(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4021]);
    mY = mY;
    if (tUltimateUpgradeState[0])
    {
        if (tUltimateUpgradeState[0] == 1)
        {
            if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4156], mX, mY, uX, uY))
                return;
        }
        else if (tUltimateUpgradeState[0] == 2 && !GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4157], mX, mY, uX, uY))
        {
            return;
        }
    }
    else if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4021], mX, mY, uX, uY))
    {
        return;
    }
    v5 = NPCUI::GetLegendHighIndex1(uX, uY);
    if (v5 != -1)
    {
        if (mITEM.Search(mInv[v5].iIndex))
        {
            mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
            mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
            mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
            mPage[v5] = -1;
            mIndex[v5] = 0;
            mInv[v5].iIndex = 0;
            mInv[v5].iX = 0;
            mInv[v5].iY = 0;
            mInv[v5].iQuantity = 0;
            mInv[v5].iImproveState = 0;
            mInv[v5].iSerialNumber = 0;
            mInv[v5].iSocket[0] = 0;
            mInv[v5].iSocket[1] = 0;
            mInv[v5].iSocket[2] = 0;
            mInv[v5].iSocket[3] = 0;
            mInv[v5].iSocket[4] = 0;
        }
    }
}

void NPCUI::RBUTTONDOWN69(int uX, int uY)
{
    int v3;
    int v4;
    int v6;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    if (tUltimateUpgradeState[0])
    {
        if (tUltimateUpgradeState[0] != 1)
            return;
        v4 = mX + 23;
        mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4199]);
        mY = mY;
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4199], mX, mY, uX, uY))
            return;
        v6 = NPCUI::GetLegendEngraveIndex1(uX, uY);
    }
    else
    {
        v3 = mX + 23;
        mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4025]);
        mY = mY;
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4025], mX, mY, uX, uY))
            return;
        v6 = NPCUI::GetLegendImproveIndex1(uX, uY);
    }
    if (v6 != -1)
    {
        if (mITEM.Search(mInv[v6].iIndex))
        {
            mMYINFO.mAvatarInfo.aInventory[mPage[v6]][mIndex[v6]][0] = mInv[v6].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mPage[v6]][mIndex[v6]][1] = mInv[v6].iX;
            mMYINFO.mAvatarInfo.aInventory[mPage[v6]][mIndex[v6]][2] = mInv[v6].iY;
            mMYINFO.mAvatarInfo.aInventory[mPage[v6]][mIndex[v6]][3] = mInv[v6].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mPage[v6]][mIndex[v6]][4] = mInv[v6].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mPage[v6]][mIndex[v6]][5] = mInv[v6].iSerialNumber;
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[v6]][mIndex[v6]][0] = mInv[v6].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[v6]][mIndex[v6]][1] = mInv[v6].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[v6]][mIndex[v6]][2] = mInv[v6].iSocket[2];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[v6]][mIndex[v6]][3] = mInv[v6].iSocket[3];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage[v6]][mIndex[v6]][4] = mInv[v6].iSocket[4];
            mPage[v6] = -1;
            mIndex[v6] = 0;
            mInv[v6].iIndex = 0;
            mInv[v6].iX = 0;
            mInv[v6].iY = 0;
            mInv[v6].iQuantity = 0;
            mInv[v6].iImproveState = 0;
            mInv[v6].iSerialNumber = 0;
            mInv[v6].iSocket[0] = 0;
            mInv[v6].iSocket[1] = 0;
            mInv[v6].iSocket[2] = 0;
            mInv[v6].iSocket[3] = 0;
            mInv[v6].iSocket[4] = 0;
        }
    }
}

void NPCUI::RBUTTONDOWN70(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4029]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4029], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetLegendImprove2Index1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN72(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4129]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4129], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetRequiemSmeltIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN73(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4145]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4145], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetAccTransferIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

void NPCUI::RBUTTONDOWN75(int uX, int uY)
{
    int v3;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4175]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4175], mX, mY, uX, uY))
    {
        v5 = NPCUI::GetLegendSocketIndex1(uX, uY);
        if (v5 != -1)
        {
            if (mITEM.Search(mInv[v5].iIndex))
            {
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][0] = mInv[v5].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][1] = mInv[v5].iX;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][2] = mInv[v5].iY;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][3] = mInv[v5].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][4] = mInv[v5].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mPage[v5]][mIndex[v5]][5] = mInv[v5].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][0] = mInv[v5].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][1] = mInv[v5].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][2] = mInv[v5].iSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][3] = mInv[v5].iSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPage[v5]][mIndex[v5]][4] = mInv[v5].iSocket[4];
                mPage[v5] = -1;
                mIndex[v5] = 0;
                mInv[v5].iIndex = 0;
                mInv[v5].iX = 0;
                mInv[v5].iY = 0;
                mInv[v5].iQuantity = 0;
                mInv[v5].iImproveState = 0;
                mInv[v5].iSerialNumber = 0;
                mInv[v5].iSocket[0] = 0;
                mInv[v5].iSocket[1] = 0;
                mInv[v5].iSocket[2] = 0;
                mInv[v5].iSocket[3] = 0;
                mInv[v5].iSocket[4] = 0;
            }
        }
    }
}

BOOL NPCUI::RBUTTONUP(int uX, int uY)
{
    return mActive != 0;
}

int NPCUI::KEYBOARD()
{
    int i;

    if (!mActive)
        return 0;
    for (i = 0; i < mGXD.mKeyboardBufferedDataNum && (mGXD.mKeyboardBufferedData[i].dwData & 0x80) == 0; ++i)
        ;
    if (i == mGXD.mKeyboardBufferedDataNum)
        return 1;
    if (mGXD.mKeyboardBufferedData[i].dwOfs != 1)
        return 1;
    if (!mMYINFO.mAvatarInfo.aTitle)
        mMYINFO.iTribeCallType = 0;
    if (mGambleInfo[0] == 4)
    {
        if (mGambleInfo[1])
        {
            if (mGambleInfo[1] == 1)
                mMYINFO.mAvatarInfo.aMoney += mGambleInfo[6] * mGambleInfo[3];
        }
        else
        {
            mMYINFO.mAvatarInfo.aKillOtherTribe += mGambleInfo[6] * mGambleInfo[3];
        }
        mGambleInfo[0] = 1;
        mGambleInfo[2] = -1;
        mGambleInfo[3] = 0;
        mGambleInfo[7] = 0;
        mGambleInfo[8] = 0;
    }
    NPCUI::Off();
    return 1;
}

void NPCUI::Draw(int uX, int uY)
{
    if (!mActive)
        return;

    mPOINTER.Set();

    switch (mWorkId)
    {
    case 0:
        NPCUI::Draw_000(uX, uY);
        break;
    case 1:
        break;
    case 2:
        NPCUI::Draw2(uX, uY);
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        NPCUI::Draw5(uX, uY);
        break;
    case 6:
        NPCUI::Draw6(uX, uY);
        break;
    case 7:
        NPCUI::Draw7(uX, uY);
        break;
    case 8:
        NPCUI::Draw8(uX, uY);
        break;
    case 9:
        break;
    case 10:
        NPCUI::Draw10(uX, uY);
        break;
    case 11:
        NPCUI::Draw11(uX, uY);
        break;
    case 12:
        NPCUI::Draw12(uX, uY);
        break;
    case 13:
        NPCUI::Draw13(uX, uY);
        break;
    case 14:
        NPCUI::Draw14(uX, uY);
        break;
    case 15:
        break;
    case 16:
        break;
    case 17:
        NPCUI::Draw17(uX, uY);
        break;
    case 18:
        NPCUI::Draw18(uX, uY);
        break;
    case 19:
        NPCUI::Draw19(uX, uY);
        break;
    case 20:
        NPCUI::Draw20(uX, uY);
        break;
    case 21:
        NPCUI::Draw21(uX, uY);
        break;
    case 22:
        NPCUI::Draw22(uX, uY);
        break;
    case 23:
        NPCUI::Draw23(uX, uY);
        break;
    case 24:
        break;
    case 25:
        NPCUI::Draw25(uX, uY);
        break;
    case 26:
        NPCUI::Draw26(uX, uY);
        break;
    case 27:
        NPCUI::Draw27(uX, uX);
        break;
    case 28:
        NPCUI::Draw28(uX, uY);
        break;
    case 29:
        NPCUI::Draw29(uX, uY);
        break;
    case 30:
        NPCUI::Draw30(uX, uY);
        break;
    case 33:
        NPCUI::Draw33(uX, uY);
        break;
    case 34:
        NPCUI::Draw34(uX, uY);
        break;
    case 35:
        NPCUI::Draw35(uX, uY);
        break;
    case 36:
        NPCUI::Draw36(uX, uY);
        break;
    case 37:
        NPCUI::Draw37(uX, uY);
        break;
    case 38:
        NPCUI::Draw38(uX, uY);
        break;
    case 39:
        NPCUI::Draw39(uX, uY);
        break;
    case 40:
        NPCUI::Draw40(uX, uY);
        break;
    case 41:
        NPCUI::Draw41(uX, uY);
        break;
    case 42:
        NPCUI::Draw42(uX, uY);
        break;
    case 43:
        NPCUI::Draw43(uX, uY);
        break;
    case 44:
        NPCUI::Draw44(uX, uY);
        break;
    case 45:
        NPCUI::Draw45(uX, uY);
        break;
    case 46:
        NPCUI::Draw46(uX, uY);
        break;
    case 47:
        break;
    case 48:
        break;
    case 49:
        break;
    case 50:
        break;
    case 51:
        NPCUI::Draw51(uX, uY);
        break;
    case 52:
        NPCUI::Draw52(uX, uY);
        break;
    case 53:
        break;
    case 54:
        NPCUI::Draw54(uX, uY);
        break;
    case 55:
        break;
    case 56:
        NPCUI::Draw56(uX, uY);
        break;
    case 58:
        NPCUI::Draw58(uX, uY);
        break;
    case 61:
        NPCUI::Draw61(uX, uY);
        break;
    case 62:
        NPCUI::Draw62(uX, uY);
        break;
    case 63:
        NPCUI::Draw63(uX, uY);
        break;
    case 64:
        break;
    case 66:
        NPCUI::Draw66(uX, uY);
        break;
    case 67:
        NPCUI::Draw67(uX, uY);
        break;
    case 68:
        NPCUI::Draw68(uX, uY);
        break;
    case 69:
        NPCUI::Draw69(uX, uY);
        break;
    case 70:
        NPCUI::Draw70(uX, uY);
        break;
    case 72:
        NPCUI::Draw72(uX, uY);
        break;
    case 73:
        NPCUI::Draw73(uX, uY);
        break;
    case 74:
        NPCUI::Draw74(uX, uY);
        break;
    case 75:
        NPCUI::Draw75(uX, uY);
        break;
    case 77:
        NPCUI::Draw77(uX, uY);
        break;
    default:
        return;
    }
}

BOOL NPCUI::DrawForRollOver(int uX, int uY)
{
    if (!mActive)
        return 0;
    switch (mWorkId)
    {

    case 0:
        return TRUE;
    case 1:
        return TRUE;
    case 2:
        return TRUE;
    case 3:
        return TRUE;
    case 4:
        return TRUE;
    case 5:
        NPCUI::DrawForRollOver5(uX, uY);
        return TRUE;
    case 6:
        NPCUI::DrawForRollOver6(uX, uY);
        return TRUE;
    case 7:
        return TRUE;
    case 8:
        NPCUI::DrawForRollOver8(uX, uY);
        return TRUE;
    case 9:
        return TRUE;
    case 10:
        NPCUI::DrawForRollOver10(uX, uY);
        return TRUE;
    case 11:
        return TRUE;
    case 12:
        NPCUI::DrawForRollOver12(uX, uY);
        return TRUE;
    case 13:
        NPCUI::DrawForRollOver13(uX, uY);
        return TRUE;
    case 14:
        NPCUI::DrawForRollOver14(uX, uY);
        return TRUE;
    case 15:
        return TRUE;
    case 16:
        return TRUE;
    case 17:
        NPCUI::DrawForRollOver17(uX, uY);
        return TRUE;
    case 18:
        NPCUI::DrawForRollOver18(uX, uY);
        return TRUE;
    case 19:
        NPCUI::DrawForRollOver19(uX, uY);
        return TRUE;
    case 20:
        return TRUE;
    case 21:
        NPCUI::DrawForRollOver21(uX, uY);
        return TRUE;
    case 22:
        NPCUI::DrawForRollOver22(uX, uY);
        return TRUE;
    case 23:
        NPCUI::DrawForRollOver23(uX, uY);
        return TRUE;
    case 24:
        return TRUE;
    case 25:
        NPCUI::DrawForRollOver25(uX, uY);
        return TRUE;
    case 26:
        NPCUI::DrawForRollOver26(uX, uY);
        return TRUE;
    case 27:
        return TRUE;
    case 28:
        return TRUE;
    case 29:
        return TRUE;
    case 30:
        NPCUI::DrawForRollOver30(uX, uY);
        return TRUE;
    case 33:
        NPCUI::DrawForRollOver33(uX, uY);
        return TRUE;
    case 34:
        NPCUI::DrawForRollOver34(uX, uY);
        return TRUE;
    case 35:
        return TRUE;
    case 36:
        return TRUE;
    case 37:
        return TRUE;
    case 38:
        return TRUE;
    case 39:
        return TRUE;
    case 40:
        return TRUE;
    case 41:
        NPCUI::DrawForRollOver41(uX, uY);
        return TRUE;
    case 42:
        NPCUI::DrawForRollOver42(uX, uY);
        return TRUE;
    case 43:
        return TRUE;
    case 44:
        return TRUE;
    case 45:
        return TRUE;
    case 46:
        NPCUI::DrawForRollOver46(uX, uY);
        return TRUE;
    case 47:
        return TRUE;
    case 48:
        return TRUE;
    case 49:
        return TRUE;
    case 50:
        return TRUE;
    case 51:
        NPCUI::DrawForRollOver51(uX, uY);
        return TRUE;
    case 52:
        return TRUE;
    case 53:
        return TRUE;
    case 54:
        NPCUI::DrawForRollOver54(uX, uY);
        return TRUE;
    case 55:
        return TRUE;
    case 56:
        NPCUI::DrawForRollOver56(uX, uY);
        return TRUE;
    case 58:
        NPCUI::DrawForRollOver58(uX, uY);
        return TRUE;
    case 61:
        return TRUE;
    case 62:
        return TRUE;
    case 63:
        NPCUI::DrawForRollOver63(uX, uY);
        return TRUE;
    case 64:
        return TRUE;
    case 66:
        NPCUI::DrawForRollOver66(uX, uY);
        return TRUE;
    case 67:
        NPCUI::DrawForRollOver67(uX, uY);
        return TRUE;
    case 68:
        NPCUI::DrawForRollOver68(uX, uY);
        return TRUE;
    case 69:
        NPCUI::DrawForRollOver69(uX, uY);
        return TRUE;
    case 70:
        NPCUI::DrawForRollOver70(uX, uY);
        return TRUE;
    case 72:
        NPCUI::DrawForRollOver72(uX, uY);
        return TRUE;
    case 73:
        NPCUI::DrawForRollOver73(uX, uY);
        return TRUE;
    case 74:
        NPCUI::DrawForRollOver74(uX, uY);
        return TRUE;
    case 75:
        NPCUI::DrawForRollOver75(uX, uY);
        return TRUE;
    default:
        return TRUE;
    }
}

void NPCUI::DrawForRollOver5(int uX, int uY)
{
    int v3;
    int v4;
    SKILL_INFO* v6;
    int v7;
    int i;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[516]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[516]) / 2;
    v7 = 0;
LABEL_2:
    if (v7 < 3)
    {
        for (i = 0; ; ++i)
        {
            if (i >= 8)
            {
                ++v7;
                goto LABEL_2;
            }
            if (mNPCInfo->nSkillInfo1[v7][i] >= 1
                && uX > mX + 76 * v7 + 35
                && uX < mX + 76 * v7 + 85
                && uY > mY + 54 * i + 71
                && uY < mY + 54 * i + 121)
            {
                break;
            }
        }
        v6 = mSKILL.Search(mNPCInfo->nSkillInfo1[v7][i]);
        if (v6)
        {
            mSKILLUI.DrawSkillInfo(uX, uY, v6->sIndex, v6->sLearnSkillPoint);
        }
    }
}

void NPCUI::DrawForRollOver6(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetStoreItemIndex1(uX, uY, -1);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mMYINFO.mAvatarInfo.aStoreItem[mStorePage][v4][0],
                mMYINFO.mAvatarInfo.aStoreItem[mStorePage][v4][1],
                mMYINFO.mAvatarInfo.aStoreItem[mStorePage][v4][2],
                1,
                mMYINFO.mAvatarInfo.aStoreSocket[mStorePage][v4][0],
                mMYINFO.mAvatarInfo.aStoreSocket[mStorePage][v4][1],
                mMYINFO.mAvatarInfo.aStoreSocket[mStorePage][v4][2],
                mMYINFO.mAvatarInfo.aStoreSocket[mStorePage][v4][3],
                mMYINFO.mAvatarInfo.aStoreSocket[mStorePage][v4][4],
                0);
    }
}

void NPCUI::DrawForRollOver8(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetNPCShopIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(uX, uY, mNPCInfo->nShopInfo[mShopPresentPage][v4], 0, 0, 2, 0, 0, 0, 0, 0, 0);
    }
}

void NPCUI::DrawForRollOver10(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetMakeItemIndex1(uX, uY);
        if (v4 != -1)
        {
            switch (v4)
            {
            case 0:
            case 1:
            case 2:
            case 3:
                mINVENUI.DrawItemInfo(uX, uY, mInv[v4].iIndex, 0, mInv[v4].iImproveState, 1, mInv[v4].iSocket[0], mInv[v4].iSocket[1], mInv[v4].iSocket[2], mInv[v4].iSocket[3], mInv[v4].iSocket[4], 0);
                break;
            case 4:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][0], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 5:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][1], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 6:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][2], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 7:
                if (mMakeItemInfo[mMakeItemPresentPage][3] >= 219 && mMakeItemInfo[mMakeItemPresentPage][3] <= 230)
                {
                    mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][3], 0, 40, 1, 0, 0, 0, 0, 0, 0);
                }
                else
                {
                    mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][3], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                }
                break;
            case 8:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][4], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            default:
                return;
            }
        }
    }
}
void NPCUI::DrawForRollOver12(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetSaveItemIndex1(uX, uY, -1);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mMYINFO.mAvatarInfo.uSaveItem[v4][0],
                mMYINFO.mAvatarInfo.uSaveItem[v4][1],
                mMYINFO.mAvatarInfo.uSaveItem[v4][2],
                1,
                mMYINFO.mAvatarInfo.aSaveSocket[v4][0],
                mMYINFO.mAvatarInfo.aSaveSocket[v4][1],
                mMYINFO.mAvatarInfo.aSaveSocket[v4][2],
                mMYINFO.mAvatarInfo.aSaveSocket[v4][3],
                mMYINFO.mAvatarInfo.aSaveSocket[v4][4],
                0);
    }
}

void NPCUI::DrawForRollOver13(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetImproveIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}

void NPCUI::DrawForRollOver14(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetSocketInitIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}

void NPCUI::DrawForRollOver17(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetMakeSkillIndex1(uX, uY);
        if (v4 != -1)
        {
            switch (v4)
            {
            case 0:
            case 1:
            case 2:
            case 3:
                mINVENUI.DrawItemInfo(
                    uX,
                    uY,
                    mInv[v4].iIndex,
                    0,
                    mInv[v4].iImproveState,
                    1,
                    mInv[v4].iSocket[0],
                    mInv[v4].iSocket[1],
                    mInv[v4].iSocket[2],
                    mInv[v4].iSocket[3],
                    mInv[v4].iSocket[4],
                    0);
                break;
            case 4:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][0], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 5:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][1], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 6:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][2], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 7:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][3], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 8:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][4], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            default:
                return;
            }
        }
    }
}
void NPCUI::DrawForRollOver18(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetHighIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}

void NPCUI::DrawForRollOver19(int uX, int uY)
{
    char* v3;
    int v4;
    int v5;
    char* v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int i;
    int sGems[5];
    int v17;
    int sGemMode;
    char Buffer[1000];
    int a4;
    int sGemLevel;
    int a3;
    int v23;
    int tMessageNum;
    int v25;

    sGems[0] = 0;
    sGems[1] = 0;
    sGems[2] = 0;
    sGems[3] = 0;
    sGems[4] = 0;
    sGemMode = 0;
    sGemLevel = 0;
    tMessageNum = 0;
    a3 = 0;
    a4 = 0;
    v23 = 0;
    v25 = 0;
    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v17 = NPCUI::GetSocketJewelDeleteIdx1(uX, uY);
        if (v17 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v17].iIndex,
                0,
                mInv[v17].iImproveState,
                1,
                mInv[v17].iSocket[0],
                mInv[v17].iSocket[1],
                mInv[v17].iSocket[2],
                mInv[v17].iSocket[3],
                mInv[v17].iSocket[4],
                0);
        for (i = 0; i < 5; ++i)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3339], mX + 41 * i + 19, mY + 364, uX, uY))
            {
                mUTIL.GetSocketAbility(
                    mInv[0].iSocket[0],
                    mInv[0].iSocket[1],
                    mInv[0].iSocket[2],
                    &sGems[0],
                    &sGems[1],
                    &sGems[2],
                    &sGems[3],
                    &sGems[4]);
                sGemMode = sGems[i] / 1000;
                sGemLevel = sGems[i] % 1000;
                if (sGemMode == 1)
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[sGemLevel + 3380], mX + 41 * i + 31, mY + 376);
                }
                else if (sGemMode > 1 && sGemMode < 39)
                {
                    tMessageNum = mINVENUI.GetSocketMessage1(sGemMode, sGemLevel, &a3, &a4);
                    if (tMessageNum > 0)
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4106], mX + 41 * i + 31, mY + 376);
                        mUTIL.SetSocketInfo(sGemMode, sGemLevel, &a3, &a4);
                        if (a4)
                        {
                            if (a3 > 0)
                            {
                                v13 = a4;
                                v10 = a3;
                                v6 = mMESSAGE.Return(tMessageNum);
                                sprintf(Buffer, v6, v10, v13);
                                v23 = mX + 41 * i + 31;
                                v25 = mY + 376;
                                v11 = v25 + 4;
                                v7 = v23 + 110;
                                v8 = mUTIL.GetStringLength(Buffer);
                                mUTIL.DrawFont2D(Buffer, v7 - v8 / 2, v11, 3);
                            }
                        }
                        else
                        {
                            v12 = a3;
                            v3 = mMESSAGE.Return(tMessageNum);
                            sprintf(Buffer, v3, v12);
                            v23 = mX + 41 * i + 31;
                            v25 = mY + 376;
                            v9 = v25 + 4;
                            v4 = v23 + 110;
                            v5 = mUTIL.GetStringLength(Buffer);
                            mUTIL.DrawFont2D(Buffer, v4 - v5 / 2, v9, 3);
                        }
                    }
                }
                return;
            }
        }
    }
}

void NPCUI::DrawForRollOver21(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetCashShopIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mCashShopInfo[mCashShopMaxPage][mCashShopPage][v4][1],
                mCashShopInfo[mCashShopMaxPage][mCashShopPage][v4][2],
                0,
                1,
                0,
                0,
                0,
                0,
                0,
                0);
    }
}

void NPCUI::DrawForRollOver22(int uX, int uY)
{
    if (!mINVENUI.DrawForRollOver(uX, uY) && NPCUI::GetSocketExchangeIndex1(uX, uY) != -1)
    {
        mINVENUI.DrawItemInfo(
            uX,
            uY,
            mInv[0].iIndex,
            0,
            mInv[0].iImproveState,
            1,
            mInv[0].iSocket[0],
            mInv[0].iSocket[1],
            mInv[0].iSocket[2],
            mInv[0].iSocket[3],
            mInv[0].iSocket[4],
            0);
    }
}

void NPCUI::DrawForRollOver23(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetSocketJewelUpIdx1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}

void NPCUI::DrawForRollOver25(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetLowIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}
void NPCUI::DrawForRollOver26(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetAddIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}

void NPCUI::DrawForRollOver30(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetExchangeIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[0].iIndex,
                0,
                mInv[0].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}

void NPCUI::DrawForRollOver33(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetSearchBuyIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mItemSearchData[v4][0],
                mItemSearchData[v4][1],
                mItemSearchData[v4][2],
                1,
                mItemSearchSocket[v4][0],
                mItemSearchSocket[v4][1],
                mItemSearchSocket[v4][2],
                mItemSearchSocket[v4][3],
                mItemSearchSocket[v4][4],
                0);
    }
}
void NPCUI::DrawForRollOver34(int uX, int uY)
{
    int v3;
    int v4;
    SKILL_INFO* v6;
    int v7;
    int i;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2645]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2645]) / 2;
    v7 = 0;
LABEL_2:
    if (v7 < 3)
    {
        for (i = 0; ; ++i)
        {
            if (i >= 8)
            {
                ++v7;
                goto LABEL_2;
            }
            if (mNPCInfo->nSkillInfo2[mMYINFO.mAvatarInfo.aPreviousTribe][mQuestData[4]][v7][i] >= 1
                && uX > mX + 76 * v7 + 35
                && uX < mX + 76 * v7 + 85
                && uY > mY + 54 * i + 71
                && uY < mY + 54 * i + 121)
            {
                break;
            }
        }
        v6 = mSKILL.Search(mNPCInfo->nSkillInfo2[mMYINFO.mAvatarInfo.aPreviousTribe][mQuestData[4]][v7][i]);
        if (v6)
        {
            mSKILLUI.DrawSkillInfo(uX, uY, v6->sIndex, v6->sLearnSkillPoint);
        }
    }
}

void NPCUI::DrawForRollOver41(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetMakeBirdIndex1(uX, uY);
        if (v4 != -1)
        {
            switch (v4)
            {
            case 0:
            case 1:
            case 2:
            case 3:
                mINVENUI.DrawItemInfo(
                    uX,
                    uY,
                    mInv[v4].iIndex,
                    0,
                    mInv[v4].iImproveState,
                    1,
                    mInv[v4].iSocket[0],
                    mInv[v4].iSocket[1],
                    mInv[v4].iSocket[2],
                    mInv[v4].iSocket[3],
                    mInv[v4].iSocket[4],
                    0);
                break;
            default:
                return;
            }
        }
    }
}

void NPCUI::DrawForRollOver42(int uX, int uY)
{
    if (!mINVENUI.DrawForRollOver(uX, uY) && NPCUI::GetDestroyIndex1(uX, uY) != -1)
    {
        mINVENUI.DrawItemInfo(
            uX,
            uY,
            mInv[0].iIndex,
            0,
            mInv[0].iImproveState,
            1,
            mInv[0].iSocket[0],
            mInv[0].iSocket[1],
            mInv[0].iSocket[2],
            mInv[0].iSocket[3],
            mInv[0].iSocket[4],
            0);
    }
}

void NPCUI::DrawForRollOver46(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetImprove2Index1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}

void NPCUI::DrawForRollOver51(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetSkyImproveIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}

void NPCUI::DrawForRollOver54(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetSmeltIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}
void NPCUI::DrawForRollOver56(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetSocketAddUpIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}

void NPCUI::DrawForRollOver58(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetImprove3Index1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}
void NPCUI::DrawForRollOver63(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetCloakUpIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}
void NPCUI::DrawForRollOver66(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetMakeG12PetIndex1(uX, uY);
        if (v4 != -1)
        {
            switch (v4)
            {
            case 0:
            case 1:
            case 2:
            case 3:
                mINVENUI.DrawItemInfo(
                    uX,
                    uY,
                    mInv[v4].iIndex,
                    0,
                    mInv[v4].iImproveState,
                    1,
                    mInv[v4].iSocket[0],
                    mInv[v4].iSocket[1],
                    mInv[v4].iSocket[2],
                    mInv[v4].iSocket[3],
                    mInv[v4].iSocket[4],
                    0);
                break;
            case 4:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][0], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 5:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][1], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 6:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][2], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 7:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][3], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 8:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][4], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            default:
                return;
            }
        }
    }
}
void NPCUI::DrawForRollOver67(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetPetAddAbilityIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}

void NPCUI::DrawForRollOver68(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetLegendHighIndex1(uX, uY);
        switch (tUltimateUpgradeState[0])
        {
        case 0:
            if (v4 != -1)
                mINVENUI.DrawItemInfo(
                    uX,
                    uY,
                    mInv[v4].iIndex,
                    0,
                    mInv[v4].iImproveState,
                    1,
                    mInv[v4].iSocket[0],
                    mInv[v4].iSocket[1],
                    mInv[v4].iSocket[2],
                    mInv[v4].iSocket[3],
                    mInv[v4].iSocket[4],
                    0);
            return;
        case 1:
            switch (v4)
            {
            case 0:
            case 1:
            case 2:
            case 3:
            LABEL_26:
                mINVENUI.DrawItemInfo(
                    uX,
                    uY,
                    mInv[v4].iIndex,
                    0,
                    mInv[v4].iImproveState,
                    1,
                    mInv[v4].iSocket[0],
                    mInv[v4].iSocket[1],
                    mInv[v4].iSocket[2],
                    mInv[v4].iSocket[3],
                    mInv[v4].iSocket[4],
                    0);
                return;
            case 4:
                mINVENUI.DrawItemInfo(
                    uX,
                    uY,
                    1874,
                    0,
                    mInv[4].iImproveState,
                    1,
                    mInv[4].iSocket[0],
                    mInv[4].iSocket[1],
                    mInv[4].iSocket[2],
                    mInv[4].iSocket[3],
                    mInv[4].iSocket[4],
                    0);
                break;
            case 5:
                mINVENUI.DrawItemInfo(
                    uX,
                    uY,
                    1875,
                    0,
                    mInv[5].iImproveState,
                    1,
                    mInv[5].iSocket[0],
                    mInv[5].iSocket[1],
                    mInv[5].iSocket[2],
                    mInv[5].iSocket[3],
                    mInv[5].iSocket[4],
                    0);
                break;
            case 6:
                mINVENUI.DrawItemInfo(
                    uX,
                    uY,
                    1876,
                    0,
                    mIsClick[4],
                    1,
                    mIsClick[6],
                    mIsClick[7],
                    mIsClick[8],
                    mIsClick[9],
                    mIsClick[10],
                    0);
                break;
            case 7:
                mINVENUI.DrawItemInfo(
                    uX,
                    uY,
                    2394,
                    0,
                    mIsClick[13],
                    1,
                    mIsClick[15],
                    mIsClick[16],
                    mIsClick[17],
                    mIsClick[18],
                    mIsClick[19],
                    0);
                break;
            }
            break;
        case 2:
            switch (v4)
            {
            case 0:
            case 1:
            case 2:
            case 3:
                goto LABEL_26;
            case 4:
                mINVENUI.DrawItemInfo(
                    uX,
                    uY,
                    1877,
                    0,
                    mInv[4].iImproveState,
                    1,
                    mInv[4].iSocket[0],
                    mInv[4].iSocket[1],
                    mInv[4].iSocket[2],
                    mInv[4].iSocket[3],
                    mInv[4].iSocket[4],
                    0);
                break;
            case 5:
                mINVENUI.DrawItemInfo(
                    uX,
                    uY,
                    2394,
                    0,
                    mInv[5].iImproveState,
                    1,
                    mInv[5].iSocket[0],
                    mInv[5].iSocket[1],
                    mInv[5].iSocket[2],
                    mInv[5].iSocket[3],
                    mInv[5].iSocket[4],
                    0);
                break;
            }
            break;
        default:
            return;
        }
    }
}

void NPCUI::DrawForRollOver69(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY) && !tUltimateUpgradeState[0])
    {
        v4 = NPCUI::GetLegendImproveIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}
void NPCUI::DrawForRollOver70(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetLegendImprove2Index1(uX, uY);
        if (v4 != -1)
        {
            switch (v4)
            {
            case 0:
            case 1:
            case 2:
            case 3:
                mINVENUI.DrawItemInfo(
                    uX,
                    uY,
                    mInv[v4].iIndex,
                    0,
                    mInv[v4].iImproveState,
                    1,
                    mInv[v4].iSocket[0],
                    mInv[v4].iSocket[1],
                    mInv[v4].iSocket[2],
                    mInv[v4].iSocket[3],
                    mInv[v4].iSocket[4],
                    0);
                break;
            case 4:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][0], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 5:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][1], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 6:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][2], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 7:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][3], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            case 8:
                mINVENUI.DrawItemInfo(uX, uY, mMakeItemInfo[mMakeItemPresentPage][4], 0, 0, 1, 0, 0, 0, 0, 0, 0);
                break;
            default:
                return;
            }
        }
    }
}

void NPCUI::DrawForRollOver72(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetRequiemSmeltIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}
void NPCUI::DrawForRollOver73(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetAccTransferIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}

void NPCUI::DrawForRollOver74(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetBloodShopIndex1(uX, uY);
        if (v4 != -1)
        {
            mINVENUI.DrawItemInfo(uX, uY, mBloodStoreInfo[mBloodStoreCurrentPage][v4][0], mBloodStoreInfo[mBloodStoreCurrentPage][v4][2], 0, 1, 0, 0, 0, 0, 0, 0);
        }
    }
}

void NPCUI::DrawForRollOver75(int uX, int uY)
{
    int v4;

    if (!mINVENUI.DrawForRollOver(uX, uY))
    {
        v4 = NPCUI::GetLegendSocketIndex1(uX, uY);
        if (v4 != -1)
            mINVENUI.DrawItemInfo(
                uX,
                uY,
                mInv[v4].iIndex,
                0,
                mInv[v4].iImproveState,
                1,
                mInv[v4].iSocket[0],
                mInv[v4].iSocket[1],
                mInv[v4].iSocket[2],
                mInv[v4].iSocket[3],
                mInv[v4].iSocket[4],
                0);
    }
}

void NPCUI::Draw_000(int uX, int uY)
{
    int v3;
    int v4;
    char Buffer[1004];
    int i;
    int v8;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[406]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[406]) / 2;
    if (mNPCSpeechIndex != -1)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[405], mX, mY - 160);
        sprintf(Buffer, "%s.....", mNPCInfo->nName);
        mUTIL.DrawFont2D(Buffer, mX + 22, mY - 144, 3);
        if (mNPCSpeechIndex != 5)
        {
            for (i = 0; i < 5; ++i)
                mUTIL.DrawFont2D(mNPCInfo->nSpeech[mNPCSpeechIndex][i], mX + 22, mY + 20 * i - 121, 1);
        }
    }
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[406], mX, mY);
    for (i = 0; i < 10; ++i)
    {
        if (mChoice[i] >= 1)
        {
            if (mIsClick[i])
            {
                v8 = NPCUI::ReturnMenuImage(mChoice[i]) + 2;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[408], mX + 12, mY + 22 * i + 7, uX, uY))
            {
                v8 = NPCUI::ReturnMenuImage(mChoice[i]) + 1;
            }
            else
            {
                v8 = NPCUI::ReturnMenuImage(mChoice[i]);
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[v8], mX + 12, mY + 22 * i + 7);
        }
    }
}

void NPCUI::Draw2(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    char Destination[1000];
    int i;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[904]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[904]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[904], mX, mY);
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[mNPCInfo->nDataSortNumber2D - 1], mX + 31, mY + 27);
    strcpy(Destination, mNPCInfo->nName);
    v8 = mUTIL.ReturnNPCNameColor(mNPCInfo->nIndex);
    v7 = mY + 54;
    v5 = mX + 192;
    v6 = mUTIL.GetStringLength(Destination);
    mUTIL.DrawFont2D(Destination, v5 - v6 / 2, v7, v8);
    switch (mQuestSort)
    {
    case 1:
        for (i = 0; i < 15; ++i)
        {
            mUTIL.DrawFont2D(mQuestInfo->qStartSpeech[i], mX + 37, mY + 19 * i + 107, mQuestInfo->qStartSpeechColor[i]);
        }
        break;
    case 2:
        for (i = 0; i < 15; ++i)
        {
            mUTIL.DrawFont2D(mQuestInfo->qHurrySpeech[i], mX + 37, mY + 19 * i + 107, mQuestInfo->qHurrySpeechColor[i]);
        }
        break;
    case 3:
        for (i = 0; i < 15; ++i)
        {
            mUTIL.DrawFont2D(mQuestInfo->qSuccessSpeech[i], mX + 37, mY + 19 * i + 107, mQuestInfo->qSuccessSpeechColor[i]);
        }
        break;
    case 4:
        for (i = 0; i < 15; ++i)
        {
            mUTIL.DrawFont2D(mQuestInfo->qProcessSpeech1[i], mX + 37, mY + 19 * i + 107, mQuestInfo->qProcessSpeech1Color[i]);
        }
        break;
    default:
        break;
    }
    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[910], mX + 344, mY + 416);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[909], mX + 344, mY + 416, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[909], mX + 344, mY + 416);
    }
}


void NPCUI::Draw5(int uX, int uY)
{
    int v3;
    int v4;
    const char* v5;
    int v6;
    int v7;
    int v8;
    int v9;
    SKILL_INFO* v11;
    char Buffer[1000];
    int i;
    int j;
    int v15;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[516]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[516]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[516], mX, mY);
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 8; ++j)
        {
            if (mNPCInfo->nSkillInfo1[i][j] >= 1)
            {
                v11 = mSKILL.Search(mNPCInfo->nSkillInfo1[i][j]);
                if (v11)
                {
                    v15 = v11->sDataNumber2D - 1;
                    if (mSkillIndex == v11->sIndex)
                        ++v15;
                    GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[v15], mX + 76 * i + 35, mY + 54 * j + 71);
                }
            }
        }
    }
    v9 = mMYINFO.mAvatarInfo.aSkillPoint;
    v5 = mMESSAGE.Return(133);
    sprintf(Buffer, "%s : %d", v5, v9);
    v8 = mY + 361;
    v6 = mX + 74;
    v7 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v6 - v7 / 2, v8, 3);
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 252, mY + 25);
}

void NPCUI::Draw6(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    ITEM_INFO* a2;
    int tDisplaySort;
    char Buffer[1004];
    int i;
    int v21;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[515]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[515], mX, mY);
    if (mMYINFO.mAvatarInfo.aExpandStoreDate >= 1)
        sprintf(Buffer, "%d / 2", mStorePage + 1);
    else
        sprintf(Buffer, "%d / 1", mStorePage + 1);
    v10 = mY + 12;
    v4 = mX + 114;
    v5 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v4 - v5 / 2, v10, 1);
    for (i = 0; i < 28; ++i)
    {
        if (mMYINFO.mAvatarInfo.aStoreItem[mStorePage][i][0] >= 1)
        {
            a2 = mITEM.Search(mMYINFO.mAvatarInfo.aStoreItem[mStorePage][i][0]);
            if (a2)
            {
                v21 = a2->iDataNumber2D - 1;
                v15 = a2->iSort;
                if (v15 == 2 || v15 == 7 || v15 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v21], mX + 52 * (i % 4) + 24, mY + 52 * (i / 4) + 50);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v21], mX + 52 * (i % 4) + 11, mY + 52 * (i / 4) + 37);
                switch (a2->iSort)
                {
                case 2:
                    if (mMYINFO.mAvatarInfo.aStoreItem[mStorePage][i][1] > 0)
                    {
                        sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aStoreItem[mStorePage][i][1]);
                        mUTIL.DrawFont2D(Buffer, mX + 52 * (i % 4) + 38, mY + 52 * (i / 4) + 64, 1);
                    }
                    break;
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 28:
                case 29:
                case 31:
                case 32:
                    if (!mINVENUI.CheckPossibleEquip(a2, -1))
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[304], mX + 52 * (i % 4) + 11, mY + 52 * (i / 4) + 37);
                    break;
                default:
                    continue;
                }
            }
        }
    }
    mUTIL.ChangeMoneyToString(mMYINFO.mAvatarInfo.aStoreMoney, Buffer, &tDisplaySort);
    v13 = tDisplaySort;
    v11 = mY + 414;
    v6 = mX + 208;
    v7 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v6 - v7, v11, v13);
    mUTIL.ChangeMoneyToString(mMYINFO.mAvatarInfo.aStoreMoney2, Buffer, &tDisplaySort);
    v14 = tDisplaySort;
    v12 = mY + 414;
    v8 = mX + 88;
    v9 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v8 - v9, v12, v14);
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[301], mX + 95, mY + 409, uX, uY))
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[301], mX + 95, mY + 409);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3474], mX + 38, mY + 409, uX, uY))
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3474], mX + 38, mY + 409);
    }
    else
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[300], mX + 95, mY + 409, uX, uY))
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[300], mX + 95, mY + 409);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3473], mX + 38, mY + 409, uX, uY))
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3473], mX + 38, mY + 409);
    }
    if (mIsClick[2])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10);
    if (mIsClick[3])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10);
}

void NPCUI::Draw7(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    char String[1000];

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[760]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[760]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[760], mX, mY);
    GetWindowTextA(mEDITBOX.mDATA[6], String, 1000);
    mUTIL.DrawFont2D(String, mX + 75, mY + 74, 1);
    if (mEDITBOX.mDataIndex == 7)
    {
        v7 = mY + 74;
        v5 = mX;
        v6 = mUTIL.GetStringLength(String);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], v5 + v6 + 76, v7);
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[309], mX + 165, mY + 72);
    if (mIsClick[1])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[307], mX + 202, mY + 72);
}
void NPCUI::Draw8(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v7;
    int v8;
    ITEM_INFO* v10;
    char Buffer[1000];
    int i;
    int v13;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[471]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[471], mX, mY);
    sprintf(Buffer, "%d / %d", mShopPresentPage + 1, mShopTotalPage);
    v7 = mY + 12;
    v4 = mX + 114;
    v5 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v4 - v5 / 2, v7, 1);
    for (i = 0; i < 28; ++i)
    {
        if (mNPCInfo->nShopInfo[mShopPresentPage][i] >= 1)
        {
            v10 = mITEM.Search(mNPCInfo->nShopInfo[mShopPresentPage][i]);
            if (v10)
            {
                v13 = v10->iDataNumber2D - 1;
                v8 = v10->iSort;
                if (v8 == 2 || v8 == 7 || v8 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v13], mX + 52 * (i % 4) + 24, mY + 52 * (i / 4) + 50);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v13], mX + 52 * (i % 4) + 11, mY + 52 * (i / 4) + 37);
            }
        }
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10);
    if (mIsClick[2])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10);
}

void NPCUI::Draw10(int uX, int uY)// Crafting Tailor BlackSmith
{

    char* tStr;
    char* tStr2;
    int sX;
    int sY;
    char tBuf[1000];
    int tStrLen;
    int i;
    ITEM_INFO* v31;
    int v36;
    int v29;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[612]);
    mY = mY;
    if (mMakeItemSort == 2)
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3785], mX, mY);
    else
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[612], mX, mY);
    switch (mMakeItemSort)
    {
    case 1:
        sprintf(tBuf, "%d / %d", mMakeItemPresentPage - 19, mMakeItemTotalPage - 20);
        break;
    case 2:
        sprintf(tBuf, "%d / %d", mMakeItemPresentPage - 39, mMakeItemTotalPage - 40);
        break;
    case 3:
        sprintf(tBuf, "%d / %d", mMakeItemPresentPage - 59, mMakeItemTotalPage - 60);
        break;
    default:
        sprintf(tBuf, "%d / %d", mMakeItemPresentPage + 1, mMakeItemTotalPage);
        break;
    }
    sY = mY + 13;
    sX = mX + 114;
    tStrLen = mUTIL.GetStringLength(tBuf);
    mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
    switch (mMakeItemPresentPage)
    {
    case 40:// Wings V0
        tStr = mMESSAGE.Return(239);
        tStr2 = mMESSAGE.Return(215);
        sprintf(tBuf, "%s : %d (%s)", tStr2, 50, tStr);
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2834), mMESSAGE.Return(2836));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 300, 21);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3787], mX + 167, mY + 74);
        break;

    case 41:// White Feather=Black Feather
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3787], mX + 167, mY + 74);
        break;

    case 42:// Black Feather=Gold Feather
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3787], mX + 167, mY + 74);
        break;

    case 43:// Blue Dragon Wings V2==Yellow Phoenix Wings V1
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 3000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2834), mMESSAGE.Return(2835));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 300, 21);
        break;

    case 44:// Yellow Phoenix Wings V1==Blue Phoenix Wings Wings V2
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 5000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2825));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2834), mMESSAGE.Return(2835));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 300, 21);
        break;

    case 45:// Blue Phoenix Wings V2==Golden Sparrow Wings V3
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 5000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2825));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2834), mMESSAGE.Return(2835));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 300, 21);
        break;

    case 46:// Golden Sparrow Wings V3==Suzaku Wings V4
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 5000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2825));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2834), mMESSAGE.Return(2835));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 300, 21);
        break;

    case 47:// Suzaku Wings V4 ==Dragon Wings V5
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 5000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2825));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2834), mMESSAGE.Return(2835));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 300, 21);
        break;

    case 0:// 4x Mats 3%=Random Mats
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2834), mMESSAGE.Return(2837));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 300, 21);
        break;

    case 1:// 4x Mats 15%=PUS 6%
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 2:// 4xBlue Jade Stone=Upgrade Stone
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 3:// 4xPUS=Upgrade Perfect Stone 3%
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 4:// Ultimate Cape=War Lord Cape
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 3000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2834), mMESSAGE.Return(2833));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 300, 21);
        break;

    case 5:// War Lord Cape=God Warrior Cape
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 5000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2825));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2834), mMESSAGE.Return(2833));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 300, 21);
        break;

    case 6:// God Warrior Cape=Zeus Cape
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 10000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2826));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2834), mMESSAGE.Return(2833));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 300, 21);
        break;

    case 7:// Deco V0=Deco V1 Mask
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 1000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 8:// Deco V0=Deco V1 Daiko
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 1000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 9:// Deco V0=Deco V1 Gaunlet
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 1000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 10:// Deco V1 Legendary Glasses=Deco V2 Legendary Glasses
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 2000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 11:// Deco V1 Legendary Fauld=Deco V2 Legendary Fauld
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 2000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 12:// Deco V1 Legendary Gloves=Deco V2 Legendary Gloves
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 2000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 13:// Deco V2 Legendary Glasses=Deco V3 Legendary Glasses
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 3000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 14:// Deco V2 Legendary Fauld=Deco V3 Legendary Fauld
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 3000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 15:// Deco V2 Legendary Gloves=Deco V3 Legendary Gloves
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 3000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

	case 60:// Produce Pet M1
		sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 1000, mMESSAGE.Return(239));
		mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
		sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
		mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
		break;

	case 61:// Produce Pet M15
		sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 2000, mMESSAGE.Return(239));
		mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
		sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
		mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
		break;

	case 62:// Produce Pet G1
		sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 3000, mMESSAGE.Return(239));
		mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
		sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
		mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
		break;

	case 63:// Produce Amulet Pet G12
		sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 1000, mMESSAGE.Return(239));
		mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
		sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
		mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
		break;

    default:
        break;
    }
    for (i = 0; i < 4; ++i)
    {
        if (mMakeItemInfo[mMakeItemPresentPage][i] >= 1)
        {
            v31 = mITEM.Search(mMakeItemInfo[mMakeItemPresentPage][i]);
            if (v31)
            {
                v36 = v31->iDataNumber2D - 1;
                v29 = v31->iSort;
                if (v29 == 7 || v29 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 24, mY + 87);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 11, mY + 74);
            }
        }
    }
    if (mMakeItemInfo[mMakeItemPresentPage][4] > 0)
    {
        v31 = mITEM.Search(mMakeItemInfo[mMakeItemPresentPage][4]);
        if (v31)
        {
            v36 = v31->iDataNumber2D - 1;
            v29 = v31->iSort;
            if (v29 == 7 || v29 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 102, mY + 193);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 89, mY + 180);
        }
    }
    for (i = 0; i < 4; ++i)
    {
        if (mPage[i] != -1)
        {
            v31 = mITEM.Search(mInv[i].iIndex);
            if (v31)
            {
                v36 = v31->iDataNumber2D - 1;
                v29 = v31->iSort;
                if (v29 == 7 || v29 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 24, mY + 340);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 11, mY + 327);
            }
        }
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[614], mX + 172, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414);
    }
    if (mIsClick[2])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10);
    if (mIsClick[3])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10);

}

void NPCUI::Draw11(int uX, int uY)
{
    int i;
    int tColorNumber;
    char Destination[1000];

    mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[596]) / 2;
    mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[596]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[596], mX, mY);
    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 235, mY + 4);
    }
    for (i = 0; i < ReturnMoneyMoveNum(); ++i)
    {
        if (ReturnMoneyMoveZoneNumber(i) != mMYINFO.mPresentZoneNumber)
        {
            if (mIsClick[i + 1])
            {
                tColorNumber = 2;
            }
            else if (uX <= mX + 37 || uX >= mX + 217 || uY <= mY + 18 * i + 26 || uY >= mY + 18 * i + 38)
            {
                tColorNumber = 1;
            }
            else
            {
                tColorNumber = 3;
            }
            strcpy(Destination, ReturnMoneyMoveInfo(i));
            mUTIL.DrawFont2D(Destination, mX + 127 - mUTIL.GetStringLength(Destination) / 2, mY + 18 * i + 26, tColorNumber);
        }
    }
}
void NPCUI::Draw12(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    ITEM_INFO* a2;
    int tDisplaySort;
    char Buffer[1004];
    int i;
    int v18;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[688]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[688], mX, mY);
    for (i = 0; i < 28; ++i)
    {
        if (mMYINFO.mAvatarInfo.uSaveItem[i][0] >= 1)
        {
            a2 = mITEM.Search(mMYINFO.mAvatarInfo.uSaveItem[i][0]);
            if (a2)
            {
                v18 = a2->iDataNumber2D - 1;
                v12 = a2->iSort;
                if (v12 == 2 || v12 == 7 || v12 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v18], mX + 52 * (i % 4) + 24, mY + 52 * (i / 4) + 50);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v18], mX + 52 * (i % 4) + 11, mY + 52 * (i / 4) + 37);
                switch (a2->iSort)
                {
                case 2:
                    if (mMYINFO.mAvatarInfo.uSaveItem[i][1] > 0)
                    {
                        sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.uSaveItem[i][1]);
                        mUTIL.DrawFont2D(Buffer, mX + 52 * (i % 4) + 38, mY + 52 * (i / 4) + 64, 1);
                    }
                    break;
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 18:
                case 19:
                case 20:
                case 21:
                case 22:
                case 28:
                case 29:
                case 31:
                case 32:
                    if (!mINVENUI.CheckPossibleEquip(a2, -1))
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[304], mX + 52 * (i % 4) + 11, mY + 52 * (i / 4) + 37);
                    break;
                default:
                    continue;
                }
            }
        }
    }
    mUTIL.ChangeMoneyToString(mMYINFO.mAvatarInfo.uSaveMoney, Buffer, &tDisplaySort);
    v10 = tDisplaySort;
    v8 = mY + 414;
    v4 = mX + 208;
    v5 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v4 - v5, v8, v10);
    mUTIL.ChangeMoneyToString(mMYINFO.mAvatarInfo.uSaveMoney2, Buffer, &tDisplaySort);
    v11 = tDisplaySort;
    v9 = mY + 414;
    v6 = mX + 88;
    v7 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v6 - v7, v9, v11);
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[301], mX + 95, mY + 409, uX, uY))
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[301], mX + 95, mY + 409);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3474], mX + 38, mY + 409, uX, uY))
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3474], mX + 38, mY + 409);
    }
    else
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[300], mX + 95, mY + 409, uX, uY))
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[300], mX + 95, mY + 409);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3473], mX + 38, mY + 409, uX, uY))
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3473], mX + 38, mY + 409);
    }
}

void NPCUI::Draw13(int uX, int uY)
{
    int sX;
    int sY;
    ITEM_INFO* t;
    int iSort;
    int i2D;
    int tCost = 0;
    char tBuf[1000];
    int tStrLen = 0;
    int tProbability1 = 0;
    int tEnchValue = 0;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[725]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[725], mX, mY);

    if (mPage[0] != -1)
    {
        t = mITEM.Search(mInv[0].iIndex);
        if (t)
        {
            i2D = (t->iDataNumber2D - 1);
            iSort = t->iSort;
            if (iSort == 7 || iSort == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2D], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2D], mX + 154, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        t = mITEM.Search(mInv[1].iIndex);
        if (t)
        {
            i2D = (t->iDataNumber2D - 1);
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2D], mX + 22, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        t = mITEM.Search(mInv[1].iIndex);
        if (t)
        {
            switch (t->iIndex)
            {
            case 1019: tCost = 10000; tEnchValue = 1; break;
            case 1020: tCost = 30000; tEnchValue = 2; break;
            case 1021: tCost = 50000; tEnchValue = 3; break;
            case 1022: tCost = 70000; tEnchValue = 4; break;
            case 1023: tCost = 90000; tEnchValue = 5; break;
            case 1437: tCost = 130000; break;
            }
            if (mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService > 0 || mMYINFO.uLoginPremium == 3)
            {
                tCost = (int)((float)tCost * 0.80f);
            }
            // Overenchant 25m
            if (mUTIL.ReturnISValue(mInv[0].iImproveState) >= 41)
            {
                tCost = 25000000;
            }

            sprintf(tBuf, "%s : %d %s", mMESSAGE.Return(215), tCost, mMESSAGE.Return(216));
            mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 21);

            // Draw Success Rate
            if (t->iIndex >= 1019 && t->iIndex <= 1023)
            {
                tProbability1 = 93 - (mUTIL.ReturnISValue(mInv[0].iImproveState) + tEnchValue) * 3 + (int)((float)mFACTOR.GetLuck() / 100.0f);
                if (tProbability1 > 100)
                    tProbability1 = 100;
                if (tProbability1 < 20)
                    tProbability1 = 20;
                sprintf(tBuf, "Success Rate: %d%%", tProbability1);
                mUTIL.DrawFont2D(tBuf, mX + 60, mY + 282, 3);
            }
            else if (t->iIndex == 1437)
            {
                mUTIL.DrawFont2D("Success Rate: 30%", mX + 60, mY + 282, 3);
            }
        }
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[727], mX + 171, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[726], mX + 171, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[726], mX + 171, mY + 414);
    }
}

void NPCUI::Draw14(int uX, int uY)
{
    int v3;
    int v4;
    ITEM_INFO* v6;
    ITEM_INFO* v7;
    int v8;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3333]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3333], mX, mY);
    if (mPage[0] != -1)
    {
        v6 = mITEM.Search(mInv[0].iIndex);
        if (v6)
        {
            v8 = v6->iDataNumber2D - 1;
            v4 = v6->iSort;
            if (v4 == 7 || v4 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v8], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v8], mX + 154, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        v7 = mITEM.Search(mInv[1].iIndex);
        if (v7)
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v7->iDataNumber2D - 1], mX + 22, mY + 212);
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[909], mX + 171, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[908], mX + 171, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[908], mX + 171, mY + 414);
    }
}
void NPCUI::Draw17(int uX, int uY)// Craft Skill Elder
{

    char* tStr;
    char* tStr2;
    int sX;
    int sY;
    char tBuf[1000];
    int tStrLen;
    int i;
    ITEM_INFO* v31;
    int v36;
    int v29;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[612]);
    mY = mY;
    if (mMakeItemSort == 2)
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3785], mX, mY);
    else
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[612], mX, mY);
    switch (mMakeItemSort)
    {
    case 1:
        sprintf(tBuf, "%d / %d", mMakeItemPresentPage - 19, mMakeItemTotalPage - 20);
        break;
    default:
        sprintf(tBuf, "%d / %d", mMakeItemPresentPage + 1, mMakeItemTotalPage);
        break;
    }
    sY = mY + 13;
    sX = mX + 114;
    tStrLen = mUTIL.GetStringLength(tBuf);
    mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
    switch (mMakeItemPresentPage)
    {
    case 0:// Produce Skill 8th Box
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 1000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    default:
        break;
    }
    for (i = 0; i < 4; ++i)
    {
        if (mMakeItemInfo[mMakeItemPresentPage][i] >= 1)
        {
            v31 = mITEM.Search(mMakeItemInfo[mMakeItemPresentPage][i]);
            if (v31)
            {
                v36 = v31->iDataNumber2D - 1;
                v29 = v31->iSort;
                if (v29 == 7 || v29 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 24, mY + 87);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 11, mY + 74);
            }
        }
    }
    if (mMakeItemInfo[mMakeItemPresentPage][4] > 0)
    {
        v31 = mITEM.Search(mMakeItemInfo[mMakeItemPresentPage][4]);
        if (v31)
        {
            v36 = v31->iDataNumber2D - 1;
            v29 = v31->iSort;
            if (v29 == 7 || v29 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 102, mY + 193);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 89, mY + 180);
        }
    }
    for (i = 0; i < 4; ++i)
    {
        if (mPage[i] != -1)
        {
            v31 = mITEM.Search(mInv[i].iIndex);
            if (v31)
            {
                v36 = v31->iDataNumber2D - 1;
                v29 = v31->iSort;
                if (v29 == 7 || v29 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 24, mY + 340);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 11, mY + 327);
            }
        }
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[614], mX + 172, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414);
    }
    if (mIsClick[2])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10);
    if (mIsClick[3])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10);

}

void NPCUI::Draw18(int uX, int uY)
{
    int v3;
    const char* v4;
    const char* v5;
    int v6;
    int v7;
    ITEM_INFO* v9;
    ITEM_INFO* v10;
    ITEM_INFO* v11;
    int v12;
    char Buffer[1000];
    int v14;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[972]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[972], mX, mY);
    if (mPage[0] != -1)
    {
        v9 = mITEM.Search(mInv[0].iIndex);
        if (v9)
        {
            v14 = v9->iDataNumber2D - 1;
            v7 = v9->iSort;
            if (v7 == 7 || v7 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v14], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v14], mX + 154, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        v10 = mITEM.Search(mInv[1].iIndex);
        if (v10)
        {
            v14 = v10->iDataNumber2D - 1;
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v14], mX + 22, mY + 212);
        }
    }
    if (mPage[0] != -1)
    {
        v11 = mITEM.Search(mInv[0].iIndex);
        if (v11)
        {
            v6 = v11->iType;
            if (v6 == 3)
            {
                switch (v11->iLevel)
                {
                case 45:
                    v12 = 100000;
                    break;
                case 55:
                    v12 = 200000;
                    break;
                case 65:
                    v12 = 300000;
                    break;
                case 75:
                    v12 = 400000;
                    break;
                case 85:
                    v12 = 500000;
                    break;
                case 95:
                    v12 = 600000;
                    break;
                case 105:
                    v12 = 700000;
                    break;
                case 114:
                    v12 = 800000;
                    break;
                case 117:
                    v12 = 900000;
                    break;
                case 120:
                    v12 = 1000000;
                    break;
                case 123:
                    v12 = 1100000;
                    break;
                case 126:
                    v12 = 1200000;
                    break;
                case 129:
                    v12 = 1300000;
                    break;
                case 132:
                    v12 = 1400000;
                    break;
                case 135:
                    v12 = 1500000;
                    break;
                case 138:
                    v12 = 1600000;
                    break;
                case 141:
                    v12 = 1700000;
                    break;
                case 144:
                    v12 = 1800000;
                    break;
                case 145:
                    switch (v11->iMartialLevel)
                    {
                    case 0:
                        v12 = 1900000;
                        break;
                    case 1:
                        v12 = 2000000;
                        break;
                    case 2:
                        v12 = 2100000;
                        break;
                    case 3:
                        v12 = 2200000;
                        break;
                    case 4:
                        v12 = 2300000;
                        break;
                    case 5:
                        v12 = 2400000;
                        break;
                    case 6:
                        v12 = 2500000;
                        break;
                    case 7:
                        v12 = 2600000;
                        break;
                    case 8:
                        v12 = 2700000;
                        break;
                    case 9:
                        v12 = 2800000;
                        break;
                    case 0xA:
                        v12 = 2900000;
                        break;
                    case 0xB:
                        v12 = 3000000;
                        break;
                    default:
                        goto LABEL_74;
                    }
                    break;
                default:
                    break;
                }
            }
            else if (v6 == 4)
            {
                switch (v11->iLevel)
                {
                case 100:
                    v12 = 1000000;
                    break;
                case 110:
                    v12 = 2000000;
                    break;
                case 115:
                    v12 = 3000000;
                    break;
                case 118:
                    v12 = 4000000;
                    break;
                case 121:
                    v12 = 5000000;
                    break;
                case 124:
                    v12 = 6000000;
                    break;
                case 127:
                    v12 = 7000000;
                    break;
                case 130:
                    v12 = 8000000;
                    break;
                case 133:
                    v12 = 9000000;
                    break;
                case 136:
                    v12 = 10000000;
                    break;
                case 139:
                    v12 = 11000000;
                    break;
                case 142:
                    v12 = 12000000;
                    break;
                case 145:
                    switch (v11->iMartialLevel)
                    {
                    case 0:
                        v12 = 13000000;
                        break;
                    case 1:
                        v12 = 14000000;
                        break;
                    case 2:
                        v12 = 15000000;
                        break;
                    case 3:
                        v12 = 16000000;
                        break;
                    case 4:
                        v12 = 17000000;
                        break;
                    case 5:
                        v12 = 18000000;
                        break;
                    case 6:
                        v12 = 19000000;
                        break;
                    case 7:
                        v12 = 20000000;
                        break;
                    case 8:
                        v12 = 21000000;
                        break;
                    case 9:
                        v12 = 22000000;
                        break;
                    case 0xA:
                        v12 = 23000000;
                        break;
                    case 0xB:
                        v12 = 24000000;
                        break;
                    default:
                        goto LABEL_74;
                    }
                    break;
                default:
                    break;
                }
            }
        LABEL_74:
            if (mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService > 0 || mMYINFO.uLoginPremium == 3)
                v12 = (v12 * 0.800000011920929);
            v5 = mMESSAGE.Return(216);
            v4 = mMESSAGE.Return(215);
            sprintf(Buffer, "%s : %d %s", v4, v12, v5);
            mUTIL.DrawFont2D(Buffer, mX + 15, mY + 415, 21);
        }
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[974], mX + 172, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[973], mX + 172, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[973], mX + 172, mY + 414);
    }
}

void NPCUI::Draw19(int uX, int uY)
{
    int sX, sY;
    char* tstr;
    char* tstr2;
    char* tstr3;
    int tstrlen;
    ITEM_INFO* v37;
    int v44, v32;
    char Buffer[1000];
    int tGems[5];
    int tSocketNum;
    int i, j, k;
    int tGemImg;
    int sGemMode;
    int sGemLevel;
    int sAdd1;
    int sAdd2;
    int tMessageNum;
    int dX;
    int dY;


    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3334]);
    mY = mY;
    if (tUltimateUpgradeState[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4229], mX, mY);
    else
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3334], mX, mY);

    if (mPage[0] != -1)
    {
        v37 = mITEM.Search(mInv[0].iIndex);
        if (v37)
        {
            v44 = v37->iDataNumber2D - 1;
            v32 = v37->iSort;
            if (v32 == 7 || v32 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v44], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v44], mX + 154, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        v37 = mITEM.Search(mInv[1].iIndex);
        if (v37)
        {
            v44 = v37->iDataNumber2D - 1;
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v44], mX + 22, mY + 212);
        }
    }
    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    }
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[909], mX + 171, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[908], mX + 171, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[908], mX + 171, mY + 414);
    }
    if (mIsClick[7])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10);
    if (mIsClick[8])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10);
    sprintf(Buffer, "%d / %d", tUltimateUpgradeState[0] + 1, 2);
    sY = mY + 13;
    sX = mX + 114;
    tstrlen = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 3);

    if (tUltimateUpgradeState[0] == 0)
    {
        if (mPage[0] != -1)
        {
            tGems[0] = 0;
            tGems[1] = 0;
            tGems[2] = 0;
            tGems[3] = 0;
            tGems[4] = 0;
            mUTIL.GetSocketAbility(mInv[0].iSocket[0], mInv[0].iSocket[1], mInv[0].iSocket[2], &tGems[0], &tGems[1], &tGems[2], &tGems[3], &tGems[4]);
            for (i = 0; i < 5; ++i)
            {
                if (tGems[i] > 0)
                {
                    tGemImg = mUTIL.GetSocketImage(tGems[i] / 1000, tGems[i] % 1000);
                    if (tGemImg > 0)
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tGemImg], mX + 41 * i + 19, mY + 364);
                    }
                    if (mIsClick[i + 2])
                    {
                        tGemImg = mUTIL.GetSocketImage(tGems[i] / 1000, tGems[i] % 1000);
                        if (tGemImg > 0)
                        {
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[tGemImg + 14], mX + 41 * i + 19, mY + 364);
                        }
                    }
                    else
                    {
                        tGemImg = mUTIL.GetSocketImage(tGems[i] / 1000, tGems[i] % 1000);
                        if (tGemImg > 0)
                        {
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[tGemImg], mX + 41 * i + 19, mY + 364);
                        }
                    }
                }
            }
            if (tRemovGemIndex > 0 && tRemovGemIndex <= 5)
            {
                sGemMode = tGems[tRemovGemIndex - 1] / 1000;
                sGemLevel = tGems[tRemovGemIndex - 1] % 1000;
                tGemImg = mUTIL.GetSocketImage(sGemMode, sGemLevel);
                if (tGemImg > 0 && sGemMode >= 1 && sGemMode <= 38)
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[tGemImg + 37], mX + 41 * (tRemovGemIndex - 1) + 19, mY + 364);
                }
                if (sGemMode == 1)
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[sGemLevel + 3380], mX + 41 * (tRemovGemIndex - 1) + 31, mY + 376);
                    return;
                }
                if (sGemMode > 1 && sGemMode < 39)
                {
                    tMessageNum = mINVENUI.GetSocketMessage1(sGemMode, sGemLevel, &sAdd1, &sAdd2);
                    if (tMessageNum > 0)
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4106], mX + 41 * (tRemovGemIndex - 1) + 31, mY + 376);
                        mUTIL.SetSocketInfo(sGemMode, sGemLevel, &sAdd1, &sAdd2);
                        if (sAdd2)
                        {
                            if (sAdd1 > 0)
                            {
                                tstr = mMESSAGE.Return(tMessageNum);
                                sprintf(Buffer, tstr, sAdd1, sAdd2);
                                sX = mX + 41 * (tRemovGemIndex - 1) + 31;
                                sY = mY + 376;
                                dY = sY + 4;
                                dX = sX + 110;
                                tstrlen = mUTIL.GetStringLength(Buffer);
                                mUTIL.DrawFont2D(Buffer, dX - tstrlen / 2, dY, 3);
                            }
                        }
                        else
                        {
                            tstr = mMESSAGE.Return(tMessageNum);
                            sprintf(Buffer, tstr, sAdd1);
                            sX = mX + 41 * (tRemovGemIndex - 1) + 31;
                            sY = mY + 376;
                            dY = sY + 4;
                            dX = sX + 110;
                            tstrlen = mUTIL.GetStringLength(Buffer);
                            mUTIL.DrawFont2D(Buffer, dX - tstrlen / 2, dY, 3);
                        }
                    }
                    return;
                }
                if (sGemMode >= 39 && sGemMode <= 42)
                {
                    tMessageNum = mINVENUI.GetSocketMessage1(sGemMode, sGemLevel, &sAdd1, &sAdd2);
                    if (tMessageNum <= 0)
                    {
                        return;
                    }
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[4106], mX + 41 * (tRemovGemIndex - 1) + 31, mY + 376);
                    mUTIL.SetSocketInfo(sGemMode, sGemLevel, &sAdd1, &sAdd2);
                    if (sAdd2)
                    {
                        if (sAdd1 > 0)
                        {
                            tstr = mMESSAGE.Return(tMessageNum);
                            sprintf(Buffer, tstr, sAdd1, sAdd2);
                            sX = mX + 41 * (tRemovGemIndex - 1) + 31;
                            sY = mY + 376;
                            dY = sY + 4;
                            dX = sX + 110;
                            tstrlen = mUTIL.GetStringLength(Buffer);
                            mUTIL.DrawFont2D(Buffer, dX - tstrlen / 2, dY, 3);
                        }
                        return;
                    }
                LABEL_58:
                    float v24 = sAdd1 / 10.0f;
                    tstr = mMESSAGE.Return(tMessageNum);
                    sprintf(Buffer, tstr, v24);
                    sX = mX + 41 * (tRemovGemIndex - 1) + 31;
                    sY = mY + 376;
                    dY = sY + 4;
                    dX = sX + 110;
                    tstrlen = mUTIL.GetStringLength(Buffer);
                    mUTIL.DrawFont2D(Buffer, dX - tstrlen / 2, dY, 3);
                    return;
                }
                if (sGemMode < 43)
                    return;
                if (sGemMode > 46)
                    return;
                tMessageNum = mINVENUI.GetSocketMessage1(sGemMode, sGemLevel, &sAdd1, &sAdd2);
                if (tMessageNum <= 0)
                    return;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4106], mX + 41 * (tRemovGemIndex - 1) + 31, mY + 376);
                mUTIL.SetSocketInfo(sGemMode, sGemLevel, &sAdd1, &sAdd2);
                if (!sAdd2)
                {
                    goto LABEL_58;
                }
                if (sAdd1 > 0)
                {
                    tstr = mMESSAGE.Return(tMessageNum);
                    sprintf(Buffer, tstr, sAdd1, sAdd2);
                    sX = mX + 41 * (tRemovGemIndex - 1) + 31;
                    sY = mY + 376;
                    dY = sY + 4;
                    dX = sX + 110;
                    tstrlen = mUTIL.GetStringLength(Buffer);
                    mUTIL.DrawFont2D(Buffer, dX - tstrlen / 2, dY, 3);
                }
            }
        }
    }
    else if (tUltimateUpgradeState[0] == 1)
    {

    }

}

void NPCUI::Draw20(int uX, int uY)
{
    int v3;
    int v4;
    char* v5;
    int v6;
    int v7;
    int v8;
    int tColorNumber;
    char Destination[1000];
    int mIndex;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[596]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[596]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[596], mX, mY);
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 235, mY + 4);
    for (mIndex = 0; mIndex < NPCUI::ReturnGuardMoveNum(); ++mIndex)
    {
        if (NPCUI::ReturnGuardMoveZone(mIndex))
        {
            if (mIsClick[mIndex + 1])
            {
                tColorNumber = 2;
            }
            else if (uX <= mX + 37 || uX >= mX + 217 || uY <= mY + 18 * mIndex + 9 || uY >= mY + 18 * mIndex + 21)
            {
                tColorNumber = 1;
            }
            else
            {
                tColorNumber = 3;
            }
            v5 = NPCUI::ReturnGuardMoveName(mIndex);
            strcpy(Destination, v5);
            v8 = mY + 18 * mIndex + 9;
            v6 = mX + 127;
            v7 = mUTIL.GetStringLength(Destination);
            mUTIL.DrawFont2D(Destination, v6 - v7 / 2, v8, tColorNumber);
            if (NPCUI::ReturnGuardMoveZone(mIndex) == 84 && GetTickCount() - mUpdateTime > 3000)
            {
                mUpdateTime = GetTickCount();
                //mTRANSFER.T_GET_ZONE_CONNECT_USER_SEND(84);
            }
        }
    }
}

void NPCUI::Draw21(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    char* v6;
    char* v7;
    char* v8;
    char* v9;
    int v10;
    int v11;
    int v12;
    int v13;
    char* v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    ITEM_INFO* v26;
    int tDisplaySort;
    char Destination[1000];
    int i;
    char tBuffer[1000];
    int v31;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1164]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1164], mX, mY);
    switch (mCashShopMaxPage)
    {
    case 0:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1165], mX + 28, mY + 9);
        break;
    case 1:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1166], mX + 88, mY + 9);
        break;
    case 2:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1167], mX + 148, mY + 9);
        break;
    case 3:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1344], mX + 208, mY + 9);
        break;
    default:
        break;
    }
    mUTIL.ChangeMoneyToString(mCashItemAmount, Destination, &tDisplaySort);
    v19 = mY + 14;
    v4 = mX + 394;
    v5 = mUTIL.GetStringLength(Destination);
    mUTIL.DrawFont2D(Destination, v4 - v5, v19, 3);
    for (i = 0; i < 10; ++i)
    {
        if (mCashShopInfo[mCashShopMaxPage][mCashShopPage][i][0] >= 0)
        {
            v26 = mITEM.Search(mCashShopInfo[mCashShopMaxPage][mCashShopPage][i][1]);
            if (v26)
            {
                v31 = v26->iDataNumber2D - 1;
                v24 = v26->iSort;
                if (v24 == 2 || v24 == 7 || v24 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v31], mX + 195 * (i / 5) + 41, mY + 69 * (i % 5) + 67);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v31], mX + 195 * (i / 5) + 28, mY + 69 * (i % 5) + 54);
                if (v26->iSort == 2 && mCashShopInfo[mCashShopMaxPage][mCashShopPage][i][2] > 0)
                {
                    sprintf(Destination, "%d", mCashShopInfo[mCashShopMaxPage][mCashShopPage][i][2]);
                    mUTIL.DrawFont2D(Destination, mX + 195 * (i / 5) + 55, mY + 69 * (i % 5) + 81, 1);
                }
                if (i == mCashShopIndex)
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2627], mX + 195 * (i / 5) + 28, mY + 69 * (i % 5) + 54);
                switch (v26->iEquipInfo[0])
                {
                case 1:
                    v6 = mMESSAGE.Return(585);
                    strcpy(Destination, v6);
                    break;
                case 2:
                    v7 = mMESSAGE.Return(586);
                    strcpy(Destination, v7);
                    break;
                case 3:
                    v8 = mMESSAGE.Return(587);
                    strcpy(Destination, v8);
                    break;
                case 4:
                    v9 = mMESSAGE.Return(588);
                    strcpy(Destination, v9);
                    break;
                default:
                    break;
                }
                v20 = mY + 69 * (i % 5) + 57;
                v10 = mX + 195 * (i / 5) + 144;
                v11 = mUTIL.GetStringLength(Destination);
                mUTIL.DrawFont2D(Destination, v10 - v11 / 2, v20, 1);
                strcpy(Destination, v26->iName);
                v21 = mY + 69 * (i % 5) + 73;
                v12 = mX + 195 * (i / 5) + 144;
                v13 = mUTIL.GetStringLength(Destination);
                mUTIL.DrawFont2D(Destination, v12 - v13 / 2, v21, 1);
                mUTIL.ChangeMoneyToString(mCashShopInfo[mCashShopMaxPage][mCashShopPage][i][3], tBuffer, &tDisplaySort);
                v14 = mMESSAGE.Return(684);
                sprintf(Destination, "%s%s", tBuffer, v14);
                v22 = mY + 69 * (i % 5) + 89;
                v15 = mX + 195 * (i / 5) + 144;
                v16 = mUTIL.GetStringLength(Destination);
                mUTIL.DrawFont2D(Destination, v15 - v16 / 2, v22, 3);
            }
        }
    }
    sprintf(Destination, "%d / %d", mCashShopPage + 1, mCashShopItem[mCashShopMaxPage]);
    v23 = mY + 414;
    v17 = mX + 210;
    v18 = mUTIL.GetStringLength(Destination);
    mUTIL.DrawFont2D(Destination, v17 - v18 / 2, v23, 1);
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 7, mY + 7);
    if (mIsClick[1])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 152, mY + 411);
    if (mIsClick[2])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 250, mY + 411);
    if (mIsClick[3])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1339], mX + 361, mY + 411);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1338], mX + 361, mY + 411, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1338], mX + 361, mY + 411);
    }
}

void NPCUI::Draw22(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    int v6;
    ITEM_INFO* v8;
    char Buffer[1000];
    int v10;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3313]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3313], mX, mY);
    if (mPage[0] != -1)
    {
        v8 = mITEM.Search(mInv[0].iIndex);
        if (v8)
        {
            v10 = v8->iDataNumber2D - 1;
            v6 = v8->iSort;
            if (v6 == 7 || v6 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v10], mX + 101, mY + 307);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v10], mX + 88, mY + 294);
        }
    }
    if (mPage[0] != -1 && mITEM.Search(mInv[0].iIndex))
    {
        v5 = mMESSAGE.Return(216);
        v4 = mMESSAGE.Return(215);
        sprintf(Buffer, "%s : 100,000,000 %s", v4, v5);
        mUTIL.DrawFont2D(Buffer, mX + 15, mY + 415, 21);
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[909], mX + 172, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[908], mX + 172, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[908], mX + 172, mY + 414);
    }
}

void NPCUI::Draw23(int uX, int uY)
{
    int v3;
    int v4;
    ITEM_INFO* v6;
    ITEM_INFO* v7;
    int v8;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3314]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3314], mX, mY);
    if (mPage[0] != -1)
    {
        v6 = mITEM.Search(mInv[0].iIndex);
        if (v6)
        {
            v8 = v6->iDataNumber2D - 1;
            v4 = v6->iSort;
            if (v4 == 7 || v4 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v8], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v8], mX + 154, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        v7 = mITEM.Search(mInv[1].iIndex);
        if (v7)
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v7->iDataNumber2D - 1], mX + 22, mY + 212);
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3316], mX + 171, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3315], mX + 171, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3315], mX + 171, mY + 414);
    }
}

void NPCUI::Draw25(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    int v6;
    int v7;
    ITEM_INFO* v9;
    ITEM_INFO* v10;
    ITEM_INFO* v11;
    int v12;
    char Buffer[1000];
    int v14;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1356]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1356], mX, mY);
    if (mPage[0] != -1)
    {
        v9 = mITEM.Search(mInv[0].iIndex);
        if (v9)
        {
            v14 = v9->iDataNumber2D - 1;
            v7 = v9->iSort;
            if (v7 == 7 || v7 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v14], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v14], mX + 154, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        v10 = mITEM.Search(mInv[1].iIndex);
        if (v10)
        {
            v14 = v10->iDataNumber2D - 1;
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v14], mX + 22, mY + 212);
        }
    }
    if (mPage[0] != -1)
    {
        v11 = mITEM.Search(mInv[0].iIndex);
        if (v11)
        {
            v6 = v11->iType;
            if (v6 == 3)
            {
                switch (v11->iLevel)
                {
                case 55:
                    v12 = 100000;
                    break;
                case 65:
                    v12 = 200000;
                    break;
                case 75:
                    v12 = 300000;
                    break;
                case 85:
                    v12 = 400000;
                    break;
                case 95:
                    v12 = 500000;
                    break;
                case 105:
                    v12 = 600000;
                    break;
                case 114:
                    v12 = 700000;
                    break;
                case 117:
                    v12 = 800000;
                    break;
                case 120:
                    v12 = 900000;
                    break;
                case 123:
                    v12 = 1000000;
                    break;
                case 126:
                    v12 = 1100000;
                    break;
                case 129:
                    v12 = 1200000;
                    break;
                case 132:
                    v12 = 1300000;
                    break;
                case 135:
                    v12 = 1400000;
                    break;
                case 138:
                    v12 = 1500000;
                    break;
                case 0x8D:
                    v12 = 1600000;
                    break;
                case 144:
                    v12 = 1700000;
                    break;
                case 145:
                    switch (v11->iMartialLevel)
                    {
                    case 0:
                        v12 = 1800000;
                        break;
                    case 1:
                        v12 = 1900000;
                        break;
                    case 2:
                        v12 = 2000000;
                        break;
                    case 3:
                        v12 = 2100000;
                        break;
                    case 4:
                        v12 = 2200000;
                        break;
                    case 5:
                        v12 = 2300000;
                        break;
                    case 6:
                        v12 = 2400000;
                        break;
                    case 7:
                        v12 = 2500000;
                        break;
                    case 8:
                        v12 = 2600000;
                        break;
                    case 9:
                        v12 = 2700000;
                        break;
                    case 10:
                        v12 = 2800000;
                        break;
                    case 11:
                        v12 = 2900000;
                        break;
                    case 12:
                        v12 = 3000000;
                        break;
                    default:
                        goto LABEL_74;
                    }
                    break;
                default:
                    break;
                }
            }
            else if (v6 == 4)
            {
                switch (v11->iLevel)
                {
                case 110:
                    v12 = 1000000;
                    break;
                case 115:
                    v12 = 2000000;
                    break;
                case 118:
                    v12 = 3000000;
                    break;
                case 121:
                    v12 = 4000000;
                    break;
                case 124:
                    v12 = 5000000;
                    break;
                case 127:
                    v12 = 6000000;
                    break;
                case 130:
                    v12 = 7000000;
                    break;
                case 133:
                    v12 = 8000000;
                    break;
                case 136:
                    v12 = 9000000;
                    break;
                case 139:
                    v12 = 10000000;
                    break;
                case 142:
                    v12 = 11000000;
                    break;
                case 145:
                    switch (v11->iMartialLevel)
                    {
                    case 0:
                        v12 = 12000000;
                        break;
                    case 1:
                        v12 = 13000000;
                        break;
                    case 2:
                        v12 = 14000000;
                        break;
                    case 3:
                        v12 = 15000000;
                        break;
                    case 4:
                        v12 = 16000000;
                        break;
                    case 5:
                        v12 = 17000000;
                        break;
                    case 6:
                        v12 = 18000000;
                        break;
                    case 7:
                        v12 = 19000000;
                        break;
                    case 8:
                        v12 = 20000000;
                        break;
                    case 9:
                        v12 = 21000000;
                        break;
                    case 10:
                        v12 = 22000000;
                        break;
                    case 11:
                        v12 = 23000000;
                        break;
                    case 12:
                        v12 = 24000000;
                        break;
                    default:
                        goto LABEL_74;
                    }
                    break;
                default:
                    break;
                }
            }
        LABEL_74:
            if (mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService > 0 || mMYINFO.uLoginPremium == 3)
                v12 = (int)((float)v12 * 0.80f);
            v5 = mMESSAGE.Return(216);
            v4 = mMESSAGE.Return(215);
            sprintf(Buffer, "%s : %d %s", v4, v12, v5);
            mUTIL.DrawFont2D(Buffer, mX + 15, mY + 415, 21);
        }
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1358], mX + 172, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1357], mX + 172, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1357], mX + 172, mY + 414);
    }
}

void NPCUI::Draw26(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    int v6;
    int v7;
    ITEM_INFO* v9;
    int v10;
    char Buffer[1000];
    int v12;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1477]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1477], mX, mY);
    if (mPage[1] != -1)
    {
        v9 = mITEM.Search(mInv[1].iIndex);
        if (v9)
        {
            v12 = v9->iDataNumber2D - 1;
            v7 = v9->iSort;
            if (v7 == 7 || v7 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v12], mX + 35, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v12], mX + 22, mY + 212);
        }
    }
    if (mPage[0] != -1)
    {
        v9 = mITEM.Search(mInv[0].iIndex);
        if (v9)
        {
            v12 = v9->iDataNumber2D - 1;
            v6 = v9->iSort;
            if (v6 == 7 || v6 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v12], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v12], mX + 154, mY + 212);
        }
    }
    if (mPage[0] != -1)
    {
        switch (mUTIL.ReturnIUValue(mInv[0].iImproveState))
        {
        case 0:
            v10 = 1000000;
            break;
        case 1:
            v10 = 1500000;
            break;
        case 2:
            v10 = 2000000;
            break;
        case 3:
            v10 = 2500000;
            break;
        case 4:
            v10 = 3000000;
            break;
        case 5:
            v10 = 3500000;
            break;
        case 6:
            v10 = 4000000;
            break;
        case 7:
            v10 = 4500000;
            break;
        case 8:
            v10 = 5000000;
            break;
        case 9:
            v10 = 5500000;
            break;
        case 10:
            v10 = 6000000;
            break;
        case 11:
            v10 = 6500000;
            break;
        default:
            break;
        }
        if (mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService > 0 || mMYINFO.uLoginPremium == 3)
            v10 = (int)((float)v10 * 0.80f);
        if (v9->iCheckItemSet == 2)
        {
            switch (mUTIL.ReturnIUValue(mInv[0].iImproveState))
            {
            case 0:
                v10 = 100000000;
                break;
            case 1:
                v10 = 150000000;
                break;
            case 2:
                v10 = 200000000;
                break;
            case 3:
                v10 = 250000000;
                break;
            case 4:
                v10 = 300000000;
                break;
            case 5:
                v10 = 350000000;
                break;
            case 6:
                v10 = 400000000;
                break;
            case 7:
                v10 = 450000000;
                break;
            case 8:
                v10 = 500000000;
                break;
            case 9:
                v10 = 550000000;
                break;
            case 10:
                v10 = 600000000;
                break;
            case 11:
                v10 = 650000000;
                break;
            default:
                break;
            }
        }
        v5 = mMESSAGE.Return(216);
        v4 = mMESSAGE.Return(215);
        sprintf(Buffer, "%s : %d %s", v4, v10, v5);
        mUTIL.DrawFont2D(Buffer, mX + 15, mY + 415, 21);
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1479], mX + 172, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1478], mX + 172, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1478], mX + 172, mY + 414);
    }
}

void NPCUI::Draw27(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    char* v15;
    char* v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v23;
    int v24;
    int v25;
    int v26;
    int v27;
    int v28;
    int v29;
    int tY;
    int tYa;
    char Buffer[1000];
    int a5;

    v21 = mGambleInfo[0];
    if (v21)
    {
        if (v21 > 0 && v21 <= 4)
        {
            v20 = mGambleInfo[1];
            if (v20)
            {
                if (v20 == 1)
                {
                    v9 = mMYINFO.mScreenXSize / 2;
                    mX = v9 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1490]) / 2;
                    v10 = mMYINFO.mScreenYSize / 2;
                    mY = v10 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1490]) / 2;
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1490], mX, mY);
                    v26 = mX + 663;
                    v27 = mY + 333;
                    sprintf(Buffer, "%d", mGambleInfo[3]);
                    v11 = mUTIL.GetStringLength(Buffer);
                    mUTIL.DrawFont2D(Buffer, v26 - v11, v27, 3);
                    v28 = mY + 410;
                    sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aMoney - mGambleInfo[3]);
                    v12 = mUTIL.GetStringLength(Buffer);
                    mUTIL.DrawFont2D(Buffer, v26 - v12, v28, 3);
                }
            }
            else
            {
                v5 = mMYINFO.mScreenXSize / 2;
                mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3262]) / 2;
                v6 = mMYINFO.mScreenYSize / 2;
                mY = v6 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3262]) / 2;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3262], mX, mY);
                v29 = mX + 663;
                tY = mY + 333;
                sprintf(Buffer, "%d", mGambleInfo[3]);
                v7 = mUTIL.GetStringLength(Buffer);
                mUTIL.DrawFont2D(Buffer, v29 - v7, tY, 3);
                tYa = mY + 410;
                sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aKillOtherTribe - mGambleInfo[3]);
                v8 = mUTIL.GetStringLength(Buffer);
                mUTIL.DrawFont2D(Buffer, v29 - v8, tYa, 3);
            }
            if (mIsClick[0])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[997], mX + 513, mY + 283);
            if (mIsClick[1])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[998], mX + 553, mY + 283);
            if (mIsClick[2])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[999], mX + 593, mY + 283);
            if (mIsClick[3])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1000], mX + 633, mY + 283);
            if (mIsClick[4])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1001], mX + 517, mY + 328);
            if (mIsClick[5])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1002], mX + 542, mY + 328);
            if (mGambleInfo[2])
            {
                if (mGambleInfo[2] == 1)
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 594, mY + 380);
            }
            else
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 515, mY + 380);
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1491], mX + 522, mY + 457, uY, a5))
            {
                if (mIsClick[8])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1492], mX + 522, mY + 457);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1491], mX + 522, mY + 457);
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1005], mX + 581, mY + 457, uY, a5))
            {
                if (mIsClick[9])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1006], mX + 581, mY + 457);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1005], mX + 581, mY + 457);
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1007], mX + 639, mY + 457, uY, a5))
            {
                if (mIsClick[10])
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1008], mX + 639, mY + 457);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1007], mX + 639, mY + 457);
            }
            if (mGambleInfo[0] == 2)
            {
                if (mGambleInfo[4] > 24)
                    mGambleInfo[4] = 0;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[mGambleInfo[4] + 1493], mX + 137, mY + 104);
                ++mGambleInfo[4];
                if (timeGetTime() - mGambleInfo[5] > 5000)
                {
                    mGambleInfo[0] = 3;
                    //mTRANSFER.T_DICE_BATTLE_SEND(tGambleState[1], tGambleState[2], tGambleState[3]);
                }
            }
            if (mGambleInfo[0] == 4)
            {
                v13 = mMYINFO.mScreenXSize / 2;
                mX = v13 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1555]) / 2;
                v14 = mMYINFO.mScreenYSize / 2;
                mY = v14 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1555]) / 2;
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1555], mX, mY);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[mGambleInfo[7] + 1555], mX + 107, mY + 61);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[mGambleInfo[8] + 1555], mX + 247, mY + 61);
                v23 = mX + 240;
                v19 = mY + 199;
                v15 = mMESSAGE.Return(1659 - mGambleInfo[6]);
                v18 = v23 - mUTIL.GetStringLength(v15) / 2;
                v16 = mMESSAGE.Return(1659 - mGambleInfo[6]);
                mUTIL.DrawFont2D(v16, v18, v19, 3);
                v24 = mX + 573;
                v25 = mY + 200;
                sprintf(Buffer, "%d", mGambleInfo[6] * mGambleInfo[3]);
                v17 = mUTIL.GetStringLength(Buffer);
                mUTIL.DrawFont2D(Buffer, v24 - v17, v25, 3);
                if (timeGetTime() - mGambleInfo[9] > 3000)
                {
                    if (mGambleInfo[1])
                    {
                        if (mGambleInfo[1] == 1)
                            mMYINFO.mAvatarInfo.aMoney += mGambleInfo[6] * mGambleInfo[3];
                    }
                    else
                    {
                        mMYINFO.mAvatarInfo.aKillOtherTribe += mGambleInfo[6] * mGambleInfo[3];
                    }
                    mGambleInfo[0] = 1;
                    mGambleInfo[2] = -1;
                    mGambleInfo[3] = 0;
                    mGambleInfo[7] = 0;
                    mGambleInfo[8] = 0;
                }
            }
        }
    }
    else
    {
        v3 = mMYINFO.mScreenXSize / 2;
        mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3255]) / 2;
        v4 = mMYINFO.mScreenYSize / 2;
        mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3255]) / 2;
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3255], mX, mY);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3256], mX + 125, mY + 93, uY, a5))
        {
            if (mIsClick[0])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3258], mX + 125, mY + 93);
            else
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3257], mX + 125, mY + 93);
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3259], mX + 249, mY + 93, uY, a5))
        {
            if (mIsClick[1])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3261], mX + 249, mY + 93);
            else
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3260], mX + 249, mY + 93);
        }
    }
}

void NPCUI::Draw28(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    char String[1000];
    int i;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1593]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1593]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1593], mX, mY);
    GetWindowTextA(mEDITBOX.mDATA[16], String, 1000);
    mUTIL.DrawFont2D(String, mX + 79, mY + 96, 1);
    if (mEDITBOX.mDataIndex == 17)
    {
        v10 = mY + 96;
        v5 = mX;
        v6 = mUTIL.GetStringLength(String);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], v5 + v6 + 80, v10);
    }
    for (i = 0; i < 12; ++i)
    {
        if (strcmp(mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][i], ""))
        {
            strcpy(String, mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][i]);
            v9 = mY + 24 * i + 172;
            v7 = mX + 117;
            v8 = mUTIL.GetStringLength(String);
            mUTIL.DrawFont2D(String, v7 - v8 / 2, v9, 1);
        }
    }
    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1595], mX + 188, mY + 93);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1594], mX + 188, mY + 93, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1594], mX + 188, mY + 93);
    }
    for (i = 0; i < 12; ++i)
    {
        if (mIsClick[i + 1])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2648], mX + 188, mY + 24 * i + 169);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2647], mX + 188, mY + 24 * i + 169, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2647], mX + 188, mY + 24 * i + 169);
        }
    }
    if (mIsClick[13])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2601], mX + 213, mY + 464);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 213, mY + 464, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2600], mX + 213, mY + 464);
    }
}

void NPCUI::Draw29(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    char Buffer[1000];

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1641]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1641]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1641], mX, mY);
    sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aTeacherPoint);
    v7 = mY + 54;
    v5 = mX + 174;
    v6 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v5 - v6 / 2, v7, 1);
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1646], mX + 213, mY + 187);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1643], mX + 17, mY + 146);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1642], mX + 17, mY + 146, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1642], mX + 17, mY + 146);
    }
}

void NPCUI::Draw30(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    char* v6;
    char* v7;
    char* v8;
    char* v9;
    char* v10;
    char* v11;
    char* v12;
    char* v13;
    char* v14;
    char* v15;
    char* v16;
    char* v17;
    char* v18;
    char* v19;
    char* v20;
    char* v21;
    char* v22;
    char* v23;
    char* v24;
    char* v25;
    char* v26;
    char* v27;
    char* v28;
    char* v29;
    char* v30;
    char* v31;
    char* v32;
    char* v33;
    char* v34;
    char* v35;
    char* v36;
    char* v37;
    char* v38;
    char* v39;
    char* v40;
    char* v41;
    char* v42;
    char* v43;
    char* v44;
    char* v45;
    char* v46;
    char* v47;
    char* v48;
    char* v49;
    char* v50;
    char* v51;
    char* v52;
    int v53;
    char* v54;
    char* v55;
    char* v56;
    char* v57;
    char* v58;
    char* v59;
    char* v60;
    char* v61;
    char* v62;
    char* v63;
    char* v64;
    char* v65;
    char* v66;
    char* v67;
    char* v68;
    char* v69;
    char* v70;
    char* v71;
    char* v72;
    char* v73;
    char* v74;
    char* v75;
    char* v76;
    char* v77;
    char* v78;
    char* v79;
    char* v80;
    char* v81;
    char* v82;
    char* v83;
    char* v84;
    char* v85;
    char* v86;
    char* v87;
    char* v88;
    char* v89;
    char* v90;
    char* v91;
    char* v92;
    char* v93;
    char* v94;
    char* v95;
    char* v96;
    char* v97;
    char* v98;
    char* v99;
    char* v100;
    char* v101;
    char* v102;
    int v103;
    int v104;
    ITEM_INFO* v106;
    ITEM_INFO* v107;
    ITEM_INFO* v108;
    char Buffer[1000];
    int v110;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    if (mPageSort)
    {
        if (mPageSort == 1)
        {
            v53 = mX + 23;
            mX = v53 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4152]);
            mY = mY;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4152], mX, mY);
            if (mPage[0] != -1)
            {
                v107 = mITEM.Search(mInv[0].iIndex);
                if (v107)
                {
                    v110 = v107->iDataNumber2D - 1;
                    v103 = v107->iSort;
                    if (v103 == 7 || v103 == 11)
                        GIMAGE2D::Display(&mGDATA.mUI_ITEM[v110], mX + 167, mY + 225);
                    else
                        GIMAGE2D::Display(&mGDATA.mUI_ITEM[v110], mX + 154, mY + 212);
                }
            }
            if (mPage[1] != -1)
            {
                v108 = mITEM.Search(mInv[1].iIndex);
                if (v108)
                {
                    v110 = v108->iDataNumber2D - 1;
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v110], mX + 22, mY + 212);
                }
            }
        }
    }
    else
    {
        v3 = mX + 23;
        mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1661]);
        mY = mY;
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1661], mX, mY);
        if (mPage[0] != -1)
        {
            v106 = mITEM.Search(mInv[0].iIndex);
            if (v106)
            {
                v110 = v106->iDataNumber2D - 1;
                v104 = v106->iSort;
                if (v104 == 7 || v104 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v110], mX + 101, mY + 307);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v110], mX + 88, mY + 294);
                if (v106->iType == 3)
                {
                    switch (v106->iLevel)
                    {
                    case 45:
                        v54 = mMESSAGE.Return(216);
                        v4 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 1,000,000 %s", v4, v54);
                        break;
                    case 55:
                        v55 = mMESSAGE.Return(216);
                        v5 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 1,200,000 %s", v5, v55);
                        break;
                    case 65:
                        v56 = mMESSAGE.Return(216);
                        v6 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 1,400,000 %s", v6, v56);
                        break;
                    case 75:
                        v57 = mMESSAGE.Return(216);
                        v7 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 1,600,000 %s", v7, v57);
                        break;
                    case 85:
                        v58 = mMESSAGE.Return(216);
                        v8 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 1,800,000 %s", v8, v58);
                        break;
                    case 95:
                        v59 = mMESSAGE.Return(216);
                        v9 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 2,000,000 %s", v9, v59);
                        break;
                    case 105:
                        v60 = mMESSAGE.Return(216);
                        v10 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 2,200,000 %s", v10, v60);
                        break;
                    case 114:
                        v61 = mMESSAGE.Return(216);
                        v11 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 2,400,000 %s", v11, v61);
                        break;
                    case 117:
                        v62 = mMESSAGE.Return(216);
                        v12 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 2,600,000 %s", v12, v62);
                        break;
                    case 120:
                        v63 = mMESSAGE.Return(216);
                        v13 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 2,800,000 %s", v13, v63);
                        break;
                    case 123:
                        v64 = mMESSAGE.Return(216);
                        v14 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 3,000,000 %s", v14, v64);
                        break;
                    case 126:
                        v65 = mMESSAGE.Return(216);
                        v15 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 3,200,000 %s", v15, v65);
                        break;
                    case 129:
                        v66 = mMESSAGE.Return(216);
                        v16 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 3,400,000 %s", v16, v66);
                        break;
                    case 132:
                        v67 = mMESSAGE.Return(216);
                        v17 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 3,600,000 %s", v17, v67);
                        break;
                    case 135:
                        v68 = mMESSAGE.Return(216);
                        v18 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 3,800,000 %s", v18, v68);
                        break;
                    case 138:
                        goto LABEL_35;
                    case 141:
                        v69 = mMESSAGE.Return(216);
                        v19 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 4,200,000 %s", v19, v69);
                        break;
                    case 144:
                        goto LABEL_36;
                    case 145:
                        switch (v106->iMartialLevel)
                        {
                        case 0:
                            v70 = mMESSAGE.Return(216);
                            v20 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 4,600,000 %s", v20, v70);
                            break;
                        case 1:
                            goto LABEL_37;
                        case 2:
                            v71 = mMESSAGE.Return(216);
                            v21 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 5,000,000 %s", v21, v71);
                            break;
                        case 3:
                            goto LABEL_38;
                        case 4:
                            v72 = mMESSAGE.Return(216);
                            v22 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 5,400,000 %s", v22, v72);
                            break;
                        case 5:
                            goto LABEL_39;
                        case 6:
                            v73 = mMESSAGE.Return(216);
                            v23 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 5,800,000 %s", v23, v73);
                            break;
                        case 7:
                            goto LABEL_40;
                        case 8:
                            v74 = mMESSAGE.Return(216);
                            v24 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 6,200,000 %s", v24, v74);
                            break;
                        case 9:
                            goto LABEL_41;
                        case 10:
                            v75 = mMESSAGE.Return(216);
                            v25 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 6,600,000 %s", v25, v75);
                            break;
                        case 11:
                            goto LABEL_42;
                        case 12:
                            v76 = mMESSAGE.Return(216);
                            v26 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 7,000,000 %s", v26, v76);
                            break;
                        default:
                            goto LABEL_62;
                        }
                        break;
                    default:
                        break;
                    }
                }
                else
                {
                    switch (v106->iLevel)
                    {
                    case 100:
                    LABEL_35:
                        v77 = mMESSAGE.Return(216);
                        v27 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 4,000,000 %s", v27, v77);
                        break;
                    case 110:
                    LABEL_36:
                        v78 = mMESSAGE.Return(216);
                        v28 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 4,400,000 %s", v28, v78);
                        break;
                    case 113:
                    LABEL_37:
                        v79 = mMESSAGE.Return(216);
                        v29 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 4,800,000 %s", v29, v79);
                        break;
                    case 115:
                    LABEL_38:
                        v80 = mMESSAGE.Return(216);
                        v30 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 5,200,000 %s", v30, v80);
                        break;
                    case 118:
                    LABEL_39:
                        v81 = mMESSAGE.Return(216);
                        v31 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 5,600,000 %s", v31, v81);
                        break;
                    case 121:
                    LABEL_40:
                        v82 = mMESSAGE.Return(216);
                        v32 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 6,000,000 %s", v32, v82);
                        break;
                    case 124:
                    LABEL_41:
                        v83 = mMESSAGE.Return(216);
                        v33 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 6,400,000 %s", v33, v83);
                        break;
                    case 127:
                    LABEL_42:
                        v84 = mMESSAGE.Return(216);
                        v34 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 6,800,000 %s", v34, v84);
                        break;
                    case 130:
                        v85 = mMESSAGE.Return(216);
                        v35 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 7,200,000 %s", v35, v85);
                        break;
                    case 133:
                        v86 = mMESSAGE.Return(216);
                        v36 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 7,600,000 %s", v36, v86);
                        break;
                    case 136:
                        v87 = mMESSAGE.Return(216);
                        v37 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 8,000,000 %s", v37, v87);
                        break;
                    case 139:
                        v88 = mMESSAGE.Return(216);
                        v38 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 8,400,000 %s", v38, v88);
                        break;
                    case 142:
                        v89 = mMESSAGE.Return(216);
                        v39 = mMESSAGE.Return(215);
                        sprintf(Buffer, "%s : 8,800,000 %s", v39, v89);
                        break;
                    case 145:
                        switch (v106->iMartialLevel)
                        {
                        case 0:
                            v90 = mMESSAGE.Return(216);
                            v40 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 9,200,000 %s", v40, v90);
                            break;
                        case 1:
                            v91 = mMESSAGE.Return(216);
                            v41 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 9,600,000 %s", v41, v91);
                            break;
                        case 2:
                            v92 = mMESSAGE.Return(216);
                            v42 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 10,000,000 %s", v42, v92);
                            break;
                        case 3:
                            v93 = mMESSAGE.Return(216);
                            v43 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 10,400,000 %s", v43, v93);
                            break;
                        case 4:
                            v94 = mMESSAGE.Return(216);
                            v44 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 10,800,000 %s", v44, v94);
                            break;
                        case 5:
                            v95 = mMESSAGE.Return(216);
                            v45 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 11,200,000 %s", v45, v95);
                            break;
                        case 6:
                            v96 = mMESSAGE.Return(216);
                            v46 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 11,600,000 %s", v46, v96);
                            break;
                        case 7:
                            v97 = mMESSAGE.Return(216);
                            v47 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 12,000,000 %s", v47, v97);
                            break;
                        case 8:
                            v98 = mMESSAGE.Return(216);
                            v48 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 12,400,000 %s", v48, v98);
                            break;
                        case 9:
                            v99 = mMESSAGE.Return(216);
                            v49 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 12,800,000 %s", v49, v99);
                            break;
                        case 10:
                            v100 = mMESSAGE.Return(216);
                            v50 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 13,200,000 %s", v50, v100);
                            break;
                        case 11:
                            v101 = mMESSAGE.Return(216);
                            v51 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 13,600,000 %s", v51, v101);
                            break;
                        case 12:
                            v102 = mMESSAGE.Return(216);
                            v52 = mMESSAGE.Return(215);
                            sprintf(Buffer, "%s : 14,000,000 %s", v52, v102);
                            break;
                        default:
                            goto LABEL_62;
                        }
                        break;
                    default:
                        break;
                    }
                }
            LABEL_62:
                mUTIL.DrawFont2D(Buffer, mX + 15, mY + 415, 21);
            }
        }
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[836], mX + 172, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 172, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[835], mX + 172, mY + 414);
    }
    if (mIsClick[2])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10);
    if (mIsClick[3])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10);
}

void NPCUI::Draw33(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    ITEM_INFO* v17;
    int tDisplaySort;
    char Buffer[1000];
    int i;
    int v21;
    int v22;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2429]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2429], mX, mY);
    switch (mItemSearchInfo[1])
    {
    case 0:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2434], mX + 64, mY + 13);
        break;
    case 1:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2458], mX + 64, mY + 13);
        break;
    case 2:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2459], mX + 64, mY + 13);
        break;
    case 3:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2460], mX + 64, mY + 13);
        break;
    default:
        break;
    }
    switch (mItemSearchInfo[2])
    {
    case 0:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2434], mX + 241, mY + 13);
        break;
    case 1:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2435], mX + 241, mY + 13);
        break;
    case 2:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2436], mX + 241, mY + 13);
        break;
    case 3:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2437], mX + 241, mY + 13);
        break;
    case 4:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2438], mX + 241, mY + 13);
        break;
    case 5:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2439], mX + 241, mY + 13);
        break;
    case 6:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2440], mX + 241, mY + 13);
        break;
    case 7:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2441], mX + 241, mY + 13);
        break;
    case 8:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3507], mX + 241, mY + 13);
        break;
    case 9:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3508], mX + 241, mY + 13);
        break;
    case 10:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3509], mX + 241, mY + 13);
        break;
    case 11:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3510], mX + 241, mY + 13);
        break;
    case 12:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3511], mX + 241, mY + 13);
        break;
    case 13:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3512], mX + 241, mY + 13);
        break;
    case 14:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2452], mX + 241, mY + 13);
        break;
    case 15:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2453], mX + 241, mY + 13);
        break;
    case 16:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2454], mX + 241, mY + 13);
        break;
    case 17:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3082], mX + 241, mY + 13);
        break;
    case 18:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3083], mX + 241, mY + 13);
        break;
    case 19:
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3523], mX + 241, mY + 13);
        break;
    default:
        break;
    }
    for (i = 0; i < 10; ++i)
    {
        v21 = i + 10 * mItemSearchInfo[4];
        if (v21 <= mItemSearchInfo[6] - 1)
        {
            if (mItemSearchInfo[5] == v21)
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2432], mX + 288 * (i / 5) + 27, mY + ((i % 5) << 6) + 74);
            v10 = mY + ((i % 5) << 6) + 99;
            v4 = mX + 288 * (i / 5) + 101;
            v9 = v4 - mUTIL.GetStringLength(mItemSearchAvtName[v21]) / 2;
            mUTIL.DrawFont2D(mItemSearchAvtName[v21], v9, v10, 1);
            v17 = mITEM.Search(mItemSearchData[v21][0]);
            if (v17)
            {
                v22 = v17->iDataNumber2D - 1;
                v15 = v17->iSort;
                if (v15 == 7 || v15 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v22], mX + 288 * (i / 5) + 169, mY + ((i % 5) << 6) + 92);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v22], mX + 288 * (i / 5) + 156, mY + ((i % 5) << 6) + 79);
            }
            mUTIL.ChangeMoneyToString(mItemSearchData[v21][4], Buffer, &tDisplaySort);
            v13 = tDisplaySort;
            v11 = mY + ((i % 5) << 6) + 100;
            v5 = mX + 288 * (i / 5) + 296;
            v6 = mUTIL.GetStringLength(Buffer);
            mUTIL.DrawFont2D(Buffer, v5 - v6, v11, v13);
        }
    }
    sprintf(Buffer, "%d / %d", mItemSearchInfo[4] + 1, mItemSearchInfo[3]);
    v12 = mY + 415;
    v7 = mX + 310;
    v8 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v7 - v8 / 2, v12, 3);
    v14 = mItemSearchInfo[0];
    if (v14 == 1)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2456], mX + 64, mY + 33);
        for (i = 0; i < 4; ++i)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2458], mX + 64, mY + 18 * i + 33, uX, uY))
            {
                switch (i)
                {
                case 0:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2434], mX + 64, mY + 18 * i + 33);
                    break;
                case 1:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2458], mX + 64, mY + 18 * i + 33);
                    break;
                case 2:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2459], mX + 64, mY + 18 * i + 33);
                    break;
                case 3:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2460], mX + 64, mY + 18 * i + 33);
                    break;
                default:
                    goto LABEL_77;
                }
                break;
            }
        }
    }
    else if (v14 == 2)
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2433], mX + 241, mY + 33);
        for (i = 0; i < 20; ++i)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2435], mX + 241, mY + 18 * i + 33, uX, uY))
            {
                switch (i)
                {
                case 0:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2434], mX + 241, mY + 18 * i + 33);
                    break;
                case 1:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2435], mX + 241, mY + 18 * i + 33);
                    break;
                case 2:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2436], mX + 241, mY + 18 * i + 33);
                    break;
                case 3:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2437], mX + 241, mY + 18 * i + 33);
                    break;
                case 4:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2438], mX + 241, mY + 18 * i + 33);
                    break;
                case 5:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2439], mX + 241, mY + 18 * i + 33);
                    break;
                case 6:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2440], mX + 241, mY + 18 * i + 33);
                    break;
                case 7:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2441], mX + 241, mY + 18 * i + 33);
                    break;
                case 8:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3507], mX + 241, mY + 18 * i + 33);
                    break;
                case 9:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3508], mX + 241, mY + 18 * i + 33);
                    break;
                case 10:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3509], mX + 241, mY + 18 * i + 33);
                    break;
                case 11:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3510], mX + 241, mY + 18 * i + 33);
                    break;
                case 12:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3511], mX + 241, mY + 18 * i + 33);
                    break;
                case 13:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3512], mX + 241, mY + 18 * i + 33);
                    break;
                case 14:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2452], mX + 241, mY + 18 * i + 33);
                    break;
                case 15:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2453], mX + 241, mY + 18 * i + 33);
                    break;
                case 16:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2454], mX + 241, mY + 18 * i + 33);
                    break;
                case 17:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3082], mX + 241, mY + 18 * i + 33);
                    break;
                case 18:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3083], mX + 241, mY + 18 * i + 33);
                    break;
                case 19:
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3523], mX + 241, mY + 18 * i + 33);
                    break;
                default:
                    goto LABEL_77;
                }
                break;
            }
        }
    }
LABEL_77:
    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3151], mX + 164, mY + 13);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3150], mX + 164, mY + 13, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3150], mX + 164, mY + 13);
    }
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3153], mX + 341, mY + 13);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3152], mX + 341, mY + 13, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3152], mX + 341, mY + 13);
    }
    if (mIsClick[2])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2030], mX + 509, mY + 13);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2029], mX + 509, mY + 13, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2029], mX + 509, mY + 13);
    }
    if (mIsClick[3])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 252, mY + 411);
    if (mIsClick[4])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 350, mY + 411);
    if (mIsClick[5])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1339], mX + 500, mY + 412);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1338], mX + 500, mY + 412, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1338], mX + 500, mY + 412);
    }
    if (mIsClick[6])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1604], mX + 557, mY + 412);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2386], mX + 557, mY + 412, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2386], mX + 557, mY + 412);
    }
}

void NPCUI::Draw34(int uX, int uY)
{
    int v3;
    int v4;
    char* v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v12;
    SKILL_INFO* v14;
    char Buffer[1000];
    int i;
    int j;
    int v18;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2645]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2645]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2645], mX, mY);
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 8; ++j)
        {
            if (mNPCInfo->nSkillInfo2[mMYINFO.mAvatarInfo.aPreviousTribe][mQuestData[4]][i][j] >= 1)
            {
                v14 = mSKILL.Search(mNPCInfo->nSkillInfo2[mMYINFO.mAvatarInfo.aPreviousTribe][mQuestData[4]][i][j]);
                if (v14)
                {
                    v18 = v14->sDataNumber2D - 1;
                    if (mSkillIndex == v14->sIndex)
                        ++v18;
                    GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[v18], mX + 76 * i + 35, mY + 54 * j + 71);
                }
            }
        }
    }
    v12 = mMYINFO.mAvatarInfo.aSkillPoint;
    v5 = mMESSAGE.Return(133);
    sprintf(Buffer, "%s : %d", v5, v12);
    v10 = mY + 361;
    v6 = mX + 74;
    v7 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v6 - v7 / 2, v10, 3);
    sprintf(Buffer, "%d / 3", mQuestData[4] + 1);
    v11 = mY + 361;
    v8 = mX + 212;
    v9 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v8 - v9 / 2, v11, 1);
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 173, mY + 357);
    if (mIsClick[1])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 232, mY + 357);
    if (mIsClick[2])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 252, mY + 25);
}

void NPCUI::Draw35(int uX, int uY)
{
    int mX, mY;
    char* tSTR, tSTR2;
    int i, j, k;
    ITEM_INFO* t;
    char tBuf[1000];
    int tDrawX, tDrawY;
    int tStrLen;


    mX = mMYINFO.mScreenXSize / 2;
    mX = mX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2653]) / 2;
    mY = mMYINFO.mScreenYSize / 2;
    mY = mY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2653]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2653], mX, mY);
    for (i = 0; i < 10; ++i)
    {
        if (mTribeWeaponIndex[i] >= 1)
        {
            t = mITEM.Search(mTribeWeaponIndex[i]);
            if (t)
            {
                strcpy(tBuf, t->iName);
                tDrawY = mY + 33 * i + 50;
                tDrawX = mX + 108;
                tStrLen = mUTIL.GetStringLength(tBuf);
                mUTIL.DrawFont2D(tBuf, tDrawX - tStrLen / 2, tDrawY, 3);
                switch (i)
                {
                case 0: // Catapult
                    strcpy(tBuf, "100 CP");
                    tDrawY = mY + 33 * i + 50;
                    tDrawX = mX + 281;
                    tStrLen = mUTIL.GetStringLength(tBuf);
                    mUTIL.DrawFont2D(tBuf, tDrawX - tStrLen, tDrawY, 3);
                    break;
                case 1: // FL TP Scroll
                    strcpy(tBuf, "1 CP");
                    tDrawY = mY + 33 * i + 50;
                    tDrawX = mX + 281;
                    tStrLen = mUTIL.GetStringLength(tBuf);
                    mUTIL.DrawFont2D(tBuf, tDrawX - tStrLen, tDrawY, 3);
                    break;
                case 2: // Alert Charm
                    strcpy(tBuf, "100 CP");
                    tDrawY = mY + 33 * i + 50;
                    tDrawX = mX + 281;
                    tStrLen = mUTIL.GetStringLength(tBuf);
                    mUTIL.DrawFont2D(tBuf, tDrawX - tStrLen, tDrawY, 3);
                    break;
                case 3: // Construction Scroll
                    strcpy(tBuf, "500M Silver");
                    tDrawY = mY + 33 * i + 50;
                    tDrawX = mX + 281;
                    tStrLen = mUTIL.GetStringLength(tBuf);
                    mUTIL.DrawFont2D(tBuf, tDrawX - tStrLen, tDrawY, 3);
                    break;
                default:
                    continue;
                }
            }
        }
    }
    for (i = 0; i < 10; ++i)
    {
        if (mIsClick[i])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2655], mX + 296, mY + 33 * i + 44);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2654], mX + 296, mY + 33 * i + 44, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2654], mX + 296, mY + 33 * i + 44);
        }
    }
    if (mIsClick[10])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2601], mX + 298, mY + 377);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 298, mY + 377, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2600], mX + 298, mY + 377);
    }
}

void NPCUI::Draw36(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    char Buffer[1000];

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2726]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2726]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2726], mX, mY);
    sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aKillOtherTribe);
    v7 = mY + 66;
    v5 = mX + 277;
    v6 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v5 - v6 / 2, v7, 1);
    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], mX + 299, mY + 233);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 299, mY + 233, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[9], mX + 299, mY + 233);
    }
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[13], mX + 381, mY + 233);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 381, mY + 233, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[12], mX + 381, mY + 233);
    }
}

void NPCUI::Draw37(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    char* v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    char Buffer[1000];

    if (mMYINFO.mAvatarInfo.aTitle || mMYINFO.iTribeCallType)
    {
        v5 = mMYINFO.mScreenXSize / 2;
        mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2816]) / 2;
        v6 = mMYINFO.mScreenYSize / 2;
        mY = v6 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2816]) / 2;
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2816], mX, mY);
        sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aKillOtherTribe);
        v14 = mY + 58;
        v7 = mX + 176;
        v8 = mUTIL.GetStringLength(Buffer);
        mUTIL.DrawFont2D(Buffer, v7 - v8 / 2, v14, 1);
        v9 = mUTIL.ReturnCharTitleName(mMYINFO.iTribeCallType, mMYINFO.mAvatarInfo.aTitle + 1);
        sprintf(Buffer, "%s", v9);
        v15 = mY + 82;
        v10 = mX + 176;
        v11 = mUTIL.GetStringLength(Buffer);
        mUTIL.DrawFont2D(Buffer, v10 - v11 / 2, v15, 1);
        sprintf(Buffer, "%d", mAvatarTitleCost);
        v16 = mY + 154;
        v12 = mX + 85;
        v13 = mUTIL.GetStringLength(Buffer);
        mUTIL.DrawFont2D(Buffer, v12 - v13, v16, 3);
        if (mIsClick[0])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2818], mX + 89, mY + 208);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2817], mX + 89, mY + 208, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2817], mX + 89, mY + 208);
        }
        if (mIsClick[1])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24);
    }
    else
    {
        v3 = mMYINFO.mScreenXSize / 2;
        mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3227]) / 2;
        v4 = mMYINFO.mScreenYSize / 2;
        mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3227]) / 2;
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3227], mX, mY);
        if (mIsClick[0])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3230], mX + 37, mY + 94);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3229], mX + 37, mY + 94, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3229], mX + 37, mY + 94);
        }
        if (mIsClick[1])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3233], mX + 120, mY + 94);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3232], mX + 120, mY + 94, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3232], mX + 120, mY + 94);
        }
        if (mIsClick[2])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3236], mX + 203, mY + 94);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3235], mX + 203, mY + 94, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3235], mX + 203, mY + 94);
        }
        if (mIsClick[3])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3239], mX + 286, mY + 94);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3238], mX + 286, mY + 94, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3238], mX + 286, mY + 94);
        }
        if (mIsClick[4])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3242], mX + 369, mY + 94);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3241], mX + 369, mY + 94, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3241], mX + 369, mY + 94);
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 202, mY + 90, uX, uY))
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 202, mY + 90);
    }
}

void NPCUI::Draw38(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    char Buffer[1000];

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2979]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2979]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2979], mX, mY);
    sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aKillOtherTribe);
    v7 = mY + 58;
    v5 = mX + 176;
    v6 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v5 - v6 / 2, v7, 1);
    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2981], mX + 89, mY + 208);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2980], mX + 89, mY + 208, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2980], mX + 89, mY + 208);
    }
    if (mIsClick[1])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24);
}

void NPCUI::Draw39(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    char Buffer[1000];

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2997]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2997]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2997], mX, mY);
    sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aKillOtherTribe);
    v7 = mY + 58;
    v5 = mX + 176;
    v6 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v5 - v6 / 2, v7, 1);
    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2142], mX + 89, mY + 208);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2141], mX + 89, mY + 208, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2141], mX + 89, mY + 208);
    }
    if (mIsClick[1])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24);
}

void NPCUI::Draw40(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    char Buffer[1000];

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1818]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1818]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[1818], mX, mY);
    sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aCapsuleOnlineTime);
    v7 = mY + 40;
    v5 = mX + 175;
    v6 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v5 - v6 / 2, v7, 1);
    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1820], mX + 17, mY + 134);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1819], mX + 17, mY + 134, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1819], mX + 17, mY + 134);
    }
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2601], mX + 214, mY + 177);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 214, mY + 177, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2600], mX + 214, mY + 177);
    }
}

void NPCUI::Draw41(int uX, int uY)// Craft Pet Trader Nungsi 
{

	char* tStr;
	char* tStr2;
	int sX;
	int sY;
	char tBuf[1000];
	int tStrLen;
	int i;
	ITEM_INFO* v31;
	int v36;
	int v29;

	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	sX = mX + 23;
	mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[612]);
	mY = mY;
	if (mMakeItemSort == 2)
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[3785], mX, mY);
	else
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[612], mX, mY);
	switch (mMakeItemSort)
	{
	default:
		sprintf(tBuf, "%d / %d", mMakeItemPresentPage + 1, mMakeItemTotalPage);
		break;
	}
	sY = mY + 13;
	sX = mX + 114;
	tStrLen = mUTIL.GetStringLength(tBuf);
	mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
	switch (mMakeItemPresentPage)
	{
    case 0:// Produce Pet M1
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 1000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 1:// Produce Pet M15
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 2000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 2:// Produce Pet G1
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 3000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 3:// Produce Amulet Pet G12
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 1000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2819));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    default:
        break;
    }
    for (i = 0; i < 4; ++i)
    {
        if (mMakeItemInfo[mMakeItemPresentPage][i] >= 1)
        {
            v31 = mITEM.Search(mMakeItemInfo[mMakeItemPresentPage][i]);
            if (v31)
            {
                v36 = v31->iDataNumber2D - 1;
                v29 = v31->iSort;
                if (v29 == 7 || v29 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 24, mY + 87);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 11, mY + 74);
            }
        }
    }
    if (mMakeItemInfo[mMakeItemPresentPage][4] > 0)
    {
        v31 = mITEM.Search(mMakeItemInfo[mMakeItemPresentPage][4]);
        if (v31)
        {
            v36 = v31->iDataNumber2D - 1;
            v29 = v31->iSort;
            if (v29 == 7 || v29 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 102, mY + 193);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 89, mY + 180);
        }
    }
    for (i = 0; i < 4; ++i)
    {
        if (mPage[i] != -1)
        {
            v31 = mITEM.Search(mInv[i].iIndex);
            if (v31)
            {
                v36 = v31->iDataNumber2D - 1;
                v29 = v31->iSort;
                if (v29 == 7 || v29 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 24, mY + 340);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 11, mY + 327);
            }
        }
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[614], mX + 172, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414);
    }
    if (mIsClick[2])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10);
    if (mIsClick[3])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10);

}

void NPCUI::Draw42(int uX, int uY)
{
    int v3;
    int v4;
    ITEM_INFO* v6;
    int v7;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3142]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3142], mX, mY);
    if (mPage[0] != -1)
    {
        v6 = mITEM.Search(mInv[0].iIndex);
        if (v6)
        {
            v7 = v6->iDataNumber2D - 1;
            v4 = v6->iSort;
            if (v4 == 7 || v4 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v7], mX + 101, mY + 307);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v7], mX + 88, mY + 294);
        }
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[910], mX + 172, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[908], mX + 172, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[909], mX + 172, mY + 414);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[908], mX + 172, mY + 414);
    }
}

void NPCUI::Draw43(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3164]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3164]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3164], mX, mY);
    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], mX + 165, mY + 176);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 165, mY + 176, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[9], mX + 165, mY + 176);
    }
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[13], mX + 240, mY + 176);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 240, mY + 176, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[12], mX + 240, mY + 176);
    }
}

void NPCUI::Draw44(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3165]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3165]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3165], mX, mY);
    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], mX + 165, mY + 176);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 165, mY + 176, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[9], mX + 165, mY + 176);
    }
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[13], mX + 240, mY + 176);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 240, mY + 176, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[12], mX + 240, mY + 176);
    }
}

void NPCUI::Draw45(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    char Buffer[1000];

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3175]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3175]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3175], mX, mY);
    sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aPCCafeOnlineTimeToMerit);
    v7 = mY + 40;
    v5 = mX + 175;
    v6 = mUTIL.GetStringLength(Buffer);
    mUTIL.DrawFont2D(Buffer, v5 - v6 / 2, v7, 1);
    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1820], mX + 17, mY + 134);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1819], mX + 17, mY + 134, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1819], mX + 17, mY + 134);
    }
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2601], mX + 214, mY + 177);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 214, mY + 177, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2600], mX + 214, mY + 177);
    }
}

void NPCUI::Draw46(int uX, int uY)
{
    int v3;
    int v4;
    ITEM_INFO* v6;
    ITEM_INFO* v7;
    int v8;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3179]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3179], mX, mY);
    if (mPage[0] != -1)
    {
        v6 = mITEM.Search(mInv[0].iIndex);
        if (v6)
        {
            v8 = v6->iDataNumber2D - 1;
            v4 = v6->iSort;
            if (v4 == 7 || v4 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v8], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v8], mX + 154, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        v7 = mITEM.Search(mInv[1].iIndex);
        if (v7)
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v7->iDataNumber2D - 1], mX + 22, mY + 212);
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3181], mX + 171, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3180], mX + 171, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3180], mX + 171, mY + 414);
    }
}

void NPCUI::Draw51(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    int v6;
    ITEM_INFO* v8;
    ITEM_INFO* v9;
    int v10;
    char Buffer[1000];
    int v12;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3247]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3247], mX, mY);
    if (mPage[0] != -1)
    {
        v8 = mITEM.Search(mInv[0].iIndex);
        if (v8)
        {
            v12 = v8->iDataNumber2D - 1;
            v6 = v8->iSort;
            if (v6 == 7 || v6 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v12], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v12], mX + 154, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        v9 = mITEM.Search(mInv[1].iIndex);
        if (v9)
        {
            v12 = v9->iDataNumber2D - 1;
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v12], mX + 22, mY + 212);
        }
    }
    if (mPage[1] != -1 && mITEM.Search(mInv[1].iIndex))
    {
        v10 = 50000000;
        if (mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService > 0 || mMYINFO.uLoginPremium == 3)
            v10 = (int)((float)50000000 * 0.80f);
        v5 = mMESSAGE.Return(216);
        v4 = mMESSAGE.Return(215);
        sprintf(Buffer, "%s : %d %s", v4, v10, v5);
        mUTIL.DrawFont2D(Buffer, mX + 15, mY + 415, 21);
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3250], mX + 171, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3248], mX + 171, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3249], mX + 171, mY + 414);
    }
    else
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3248], mX + 171, mY + 414);
    }
}

void NPCUI::Draw52(int uX, int uY)
{
    int i;

    mMYINFO.AdjustScreenCoord(299, 389, 267, &mX, &mY);
    mX = mX;
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3437], mX, mY);
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[13], mX + 149, mY + 203);
    if (mIsClick[1])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], mX + 47, mY + 203);
    for (i = 0; i < 5; ++i)
    {
        if (mIsClick[i + 2])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 20, mY + 28 * i + 57);
    }
}
//Refine sistem//
void NPCUI::Draw54(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    int v6;
    ITEM_INFO* v8;
    ITEM_INFO* v9;
    char Buffer[1000];
    int v11;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3456]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3456], mX, mY);
    if (mPage[0] != -1)
    {
        v8 = mITEM.Search(mInv[0].iIndex);
        if (v8)
        {
            v11 = v8->iDataNumber2D - 1;
            v6 = v8->iSort;
            if (v6 == 7 || v6 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v11], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v11], mX + 154, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        v9 = mITEM.Search(mInv[1].iIndex);
        if (v9)
        {
            v11 = v9->iDataNumber2D - 1;
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v11], mX + 22, mY + 212);
        }
    }
    if (mPage[1] != -1 && mITEM.Search(mInv[1].iIndex))
    {
        v5 = mMESSAGE.Return(1415);
        v4 = mMESSAGE.Return(215);
        sprintf(Buffer, "%s : %d %s", v4, 50, v5);
        mUTIL.DrawFont2D(Buffer, mX + 15, mY + 415, 2);
        sprintf(Buffer, "%s : %s", mMESSAGE.Return(2839), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(Buffer, mX + 48, mY + 369, 3);
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[836], mX + 171, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 171, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[835], mX + 171, mY + 414);
    }
}

void NPCUI::Draw56(int uX, int uY)
{
    int v3;
    int v4;
    ITEM_INFO* v6;
    ITEM_INFO* v7;
    int v8;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3516]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3516], mX, mY);
    if (mPage[0] != -1)
    {
        v6 = mITEM.Search(mInv[0].iIndex);
        if (v6)
        {
            v8 = v6->iDataNumber2D - 1;
            v4 = v6->iSort;
            if (v4 == 7 || v4 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v8], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v8], mX + 154, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        v7 = mITEM.Search(mInv[1].iIndex);
        if (v7)
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v7->iDataNumber2D - 1], mX + 22, mY + 212);
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1774], mX + 171, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1773], mX + 171, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1773], mX + 171, mY + 414);
    }
}

void NPCUI::Draw58(int uX, int uY)
{
    int sX, sY;
    char* tSTR;
    char* tSTR2;
    char tBuf[1000];
    ITEM_INFO* t;
    int i2D;
    int iSort;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3786]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3786], mX, mY);
    if (mPage[0] != -1)
    {
        t = mITEM.Search(mInv[0].iIndex);
        if (t)
        {
            i2D = t->iDataNumber2D - 1;
            iSort = t->iSort;
            if (iSort == 7 || iSort == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2D], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2D], mX + 154, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        t = mITEM.Search(mInv[1].iIndex);
        if (t)
        {
            i2D = t->iDataNumber2D - 1;
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2D], mX + 22, mY + 212);
        }

        tSTR = mMESSAGE.Return(239);
        tSTR2 = mMESSAGE.Return(215);
        sprintf(tBuf, "%s : %d (%s)", tSTR2, 50, tSTR);
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 21);
    }
    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    }
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3789], mX + 171, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3788], mX + 171, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3788], mX + 171, mY + 414);
    }
}

void NPCUI::Draw61(int uX, int uY)
{
    int tColorNumber;
    char mBuffer[1000];
    int mIndex;

    mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[596]) / 2;
    mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[596]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[596], mX, mY);
    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 235, mY + 4);
    }
    for (mIndex = 0; mIndex < NPCUI::ReturnGuard2MoveNum(); ++mIndex)
    {
        if (ReturnGuard2MoveZone(mIndex))
        {
            if (mIsClick[mIndex + 1])
            {
                tColorNumber = 2;
            }
            else if (uX <= mX + 37 || uX >= mX + 217 || uY <= mY + 18 * mIndex + 9 || uY >= mY + 18 * mIndex + 21)
            {
                tColorNumber = 1;
            }
            else
            {
                tColorNumber = 3;
            }
            strcpy(mBuffer, ReturnGuard2MoveName(mIndex));
            mUTIL.DrawFont2D(mBuffer, mX + 127 - mUTIL.GetStringLength(mBuffer) / 2, mY + 18 * mIndex + 9, tColorNumber);
            if (NPCUI::ReturnGuard2MoveZone(mIndex) == 84 && GetTickCount() - mUpdateTime > 3000)
            {
                mUpdateTime = GetTickCount();
                //TRANSFER::T_GET_ZONE_CONNECT_USER_SEND(&mTRANSFER, 84);
            }
        }
    }
}

void NPCUI::Draw62(int uX, int uY)
{
    int sX;
    int sY;
    int tWarCount = mMYINFO.mAvatarInfo.aDailyWarCount;
    int tPVPCount = mMYINFO.mAvatarInfo.aDailyPVPCount;
    int tPVMCount = mMYINFO.mAvatarInfo.aDailyPVMKillCount;
    int tOnlineTime = mMYINFO.mAvatarInfo.aDailyOnlineTime;
    int tDrawX;
    int tDrawY;
    char tBuffer[1000];

    if (tWarCount > 3)
        tWarCount = 3;
    if (tPVPCount > 10)
        tPVPCount = 10;
    if (tPVMCount > 1000)
        tPVMCount = 1000;
    if (tOnlineTime > 60)
        tOnlineTime = 60;

    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3002]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3002]) / 2;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3002], mX, mY);

    sprintf(tBuffer, "%d / %d", tWarCount, 3);
    tDrawX = mX + 191;
    tDrawY = mY + 58;
    mUTIL.DrawFont2D(tBuffer, tDrawX - mUTIL.GetStringLength(tBuffer) / 2, tDrawY, 3);

    sprintf(tBuffer, "%d / %d", tPVPCount, 10);
    tDrawX = mX + 191;
    tDrawY = mY + 86;
    mUTIL.DrawFont2D(tBuffer, tDrawX - mUTIL.GetStringLength(tBuffer) / 2, tDrawY, 3);

    sprintf(tBuffer, "%d / %d", tPVMCount, 1000);
    tDrawX = mX + 191;
    tDrawY = mY + 114;
    mUTIL.DrawFont2D(tBuffer, tDrawX - mUTIL.GetStringLength(tBuffer) / 2, tDrawY, 3);

    sprintf(tBuffer, "%d / %d", tOnlineTime, 60);
    tDrawX = mX + 191;
    tDrawY = mY + 142;
    mUTIL.DrawFont2D(tBuffer, tDrawX - mUTIL.GetStringLength(tBuffer) / 2, tDrawY, 3);

    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3004], mX + 175, mY + 253);
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3004], mX + 175, mY + 253, uX, uY))
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3003], mX + 175, mY + 253);
    if (mIsClick[1])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 224, mY + 7);

}

void NPCUI::Draw63(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    ITEM_INFO* v7;
    ITEM_INFO* v8;
    int v9;
    char Buffer[1000];
    int v11;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3905]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3905], mX, mY);
    if (mPage[0] != -1)
    {
        v7 = mITEM.Search(mInv[0].iIndex);
        if (v7)
        {
            v11 = v7->iDataNumber2D - 1;
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v11], mX + 154, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        v8 = mITEM.Search(mInv[1].iIndex);
        if (v8)
        {
            v11 = v8->iDataNumber2D - 1;
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v11], mX + 22, mY + 212);
        }
    }
    if (mPage[1] != -1 && mITEM.Search(mInv[1].iIndex))
    {
        v9 = 10000000;
        if (mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService > 0 || mMYINFO.uLoginPremium == 3)
            v9 = (int)((double)10000000 * 0.800000011920929);
        v5 = mMESSAGE.Return(226);
        v4 = mMESSAGE.Return(215);
        sprintf(Buffer, "%s : %d %s", v4, v9, v5);
        mUTIL.DrawFont2D(Buffer, mX + 15, mY + 415, 21);
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3250], mX + 171, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3249], mX + 171, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3249], mX + 171, mY + 414);
    }
}
void NPCUI::Draw66(int uX, int uY)// Craft Begar
{

    char* tStr;
    char* tStr2;
    int sX;
    int sY;
    char tBuf[1000];
    int tStrLen;
    int i;
    ITEM_INFO* v31;
    int v36;
    int v29;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[612]);
    mY = mY;
    if (mMakeItemSort == 2)
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3785], mX, mY);
    else
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[612], mX, mY);
    switch (mMakeItemSort)
    {
    case 1:
        sprintf(tBuf, "%d / %d", mMakeItemPresentPage - 19, mMakeItemTotalPage - 20);
        break;
    default:
        sprintf(tBuf, "%d / %d", mMakeItemPresentPage + 1, mMakeItemTotalPage);
        break;
    }
    sY = mY + 13;
    sX = mX + 114;
    tStrLen = mUTIL.GetStringLength(tBuf);
    mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
    switch (mMakeItemPresentPage)
    {
    case 0:// Ultimate Cape=War Lord Cape
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 3000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2834), mMESSAGE.Return(2833));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 300, 21);
        break;

    case 1:// War Lord Cape=God Warrior Cape
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 5000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2825));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2834), mMESSAGE.Return(2833));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 300, 21);
        break;

    case 2:// God Warrior Cape=Zeus Cape
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 10000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2826));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2834), mMESSAGE.Return(2833));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 300, 21);
        break;

    default:
        break;
    }
    for (i = 0; i < 4; ++i)
    {
        if (mMakeItemInfo[mMakeItemPresentPage][i] >= 1)
        {
            v31 = mITEM.Search(mMakeItemInfo[mMakeItemPresentPage][i]);
            if (v31)
            {
                v36 = v31->iDataNumber2D - 1;
                v29 = v31->iSort;
                if (v29 == 7 || v29 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 24, mY + 87);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 11, mY + 74);
            }
        }
    }
    if (mMakeItemInfo[mMakeItemPresentPage][4] > 0)
    {
        v31 = mITEM.Search(mMakeItemInfo[mMakeItemPresentPage][4]);
        if (v31)
        {
            v36 = v31->iDataNumber2D - 1;
            v29 = v31->iSort;
            if (v29 == 7 || v29 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 102, mY + 193);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 89, mY + 180);
        }
    }
    for (i = 0; i < 4; ++i)
    {
        if (mPage[i] != -1)
        {
            v31 = mITEM.Search(mInv[i].iIndex);
            if (v31)
            {
                v36 = v31->iDataNumber2D - 1;
                v29 = v31->iSort;
                if (v29 == 7 || v29 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 24, mY + 340);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 11, mY + 327);
            }
        }
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[614], mX + 172, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414);
    }
    if (mIsClick[2])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10);
    if (mIsClick[3])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10);

}

void NPCUI::Draw67(int uX, int uY)
{
    int v3;
    ITEM_INFO* v5;
    ITEM_INFO* v6;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3996]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[3996], mX, mY);
    if (mPage[0] != -1)
    {
        v5 = mITEM.Search(mInv[0].iIndex);
        if (v5)
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v5->iDataNumber2D - 1], mX + 154, mY + 212);
    }
    if (mPage[1] != -1)
    {
        v6 = mITEM.Search(mInv[1].iIndex);
        if (v6)
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v6->iDataNumber2D - 1], mX + 22, mY + 212);
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3998], mX + 171, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3997], mX + 171, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3997], mX + 171, mY + 414);
    }
}

void NPCUI::Draw68(int uX, int uY)// Craft 3 Tailor
{

    char* tStr;
    char* tStr2;
    int sX;
    int sY;
    char tBuf[1000];
    int tStrLen;
    int i;
    ITEM_INFO* v31;
    int v36;
    int v29;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[612]);
    mY = mY;
    if (mMakeItemSort == 2)
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3785], mX, mY);
    else
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[612], mX, mY);
    switch (mMakeItemSort)
    {
    case 1:
        sprintf(tBuf, "%d / %d", mMakeItemPresentPage - 19, mMakeItemTotalPage - 20);
        break;
    default:
        sprintf(tBuf, "%d / %d", mMakeItemPresentPage + 1, mMakeItemTotalPage);
        break;
    }
    sY = mY + 13;
    sX = mX + 114;
    tStrLen = mUTIL.GetStringLength(tBuf);
    mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
    switch (mMakeItemPresentPage)
    {
    case 0:// Ultimate Cape=War Lord Cape
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 3000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2834), mMESSAGE.Return(2833));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 300, 21);
        break;

    default:
        break;
    }
    for (i = 0; i < 4; ++i)
    {
        if (mMakeItemInfo[mMakeItemPresentPage][i] >= 1)
        {
            v31 = mITEM.Search(mMakeItemInfo[mMakeItemPresentPage][i]);
            if (v31)
            {
                v36 = v31->iDataNumber2D - 1;
                v29 = v31->iSort;
                if (v29 == 7 || v29 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 24, mY + 87);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 11, mY + 74);
            }
        }
    }
    if (mMakeItemInfo[mMakeItemPresentPage][4] > 0)
    {
        v31 = mITEM.Search(mMakeItemInfo[mMakeItemPresentPage][4]);
        if (v31)
        {
            v36 = v31->iDataNumber2D - 1;
            v29 = v31->iSort;
            if (v29 == 7 || v29 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 102, mY + 193);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 89, mY + 180);
        }
    }
    for (i = 0; i < 4; ++i)
    {
        if (mPage[i] != -1)
        {
            v31 = mITEM.Search(mInv[i].iIndex);
            if (v31)
            {
                v36 = v31->iDataNumber2D - 1;
                v29 = v31->iSort;
                if (v29 == 7 || v29 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 24, mY + 340);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 11, mY + 327);
            }
        }
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[614], mX + 172, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414);
    }
    if (mIsClick[2])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10);
    if (mIsClick[3])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10);

}

void NPCUI::Draw69(int uX, int uY)
{
    int v3;
    char* v4;
    int v5;
    int v6;
    int v7;
    char* v8;
    int v9;
    int v10;
    int v11;
    int v12;
    char* v13;
    char* v14;
    int v15;
    int v16;
    ITEM_INFO* v18;
    ITEM_INFO* v19;
    ITEM_INFO* v20;
    ITEM_INFO* v21;
    int v22;
    char Buffer[1000];
    int v24;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    if (tUltimateUpgradeState[0])
    {
        if (tUltimateUpgradeState[0] == 1)
        {
            v7 = mX + 23;
            mX = v7 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4199]);
            mY = mY;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4199], mX, mY);
            if (mPage[0] != -1)
            {
                v20 = mITEM.Search(mInv[0].iIndex);
                if (v20)
                {
                    v24 = v20->iDataNumber2D - 1;
                    v15 = v20->iSort;
                    if (v15 == 7 || v15 == 11)
                        GIMAGE2D::Display(&mGDATA.mUI_ITEM[v24], mX + 167, mY + 225);
                    else
                        GIMAGE2D::Display(&mGDATA.mUI_ITEM[v24], mX + 154, mY + 212);
                }
            }
            if (mPage[1] != -1)
            {
                v21 = mITEM.Search(mInv[1].iIndex);
                if (v21)
                {
                    v24 = v21->iDataNumber2D - 1;
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v24], mX + 22, mY + 212);
                }
            }
            if (mPage[1] != -1 && mITEM.Search(mInv[1].iIndex))
            {
                v14 = mMESSAGE.Return(239);
                v8 = mMESSAGE.Return(215);
                sprintf(Buffer, "%s : %d %s", v8, 1000, v14);
                mUTIL.DrawFont2D(Buffer, mX + 15, mY + 415, 21);
            }
            sprintf(Buffer, "%d / %d", tUltimateUpgradeState[0] + 1, 2);
            v12 = mY + 13;
            v9 = mX + 114;
            v10 = mUTIL.GetStringLength(Buffer);
            mUTIL.DrawFont2D(Buffer, v9 - v10 / 2, v12, 3);
            if (mIsClick[0])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
            if (mIsClick[1])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2711], mX + 171, mY + 414);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2710], mX + 171, mY + 414, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2710], mX + 171, mY + 414);
            }
        }
    }
    else
    {
        v3 = mX + 23;
        mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4025]);
        mY = mY;
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4025], mX, mY);
        if (mPage[0] != -1)
        {
            v18 = mITEM.Search(mInv[0].iIndex);
            if (v18)
            {
                v24 = v18->iDataNumber2D - 1;
                v16 = v18->iSort;
                if (v16 == 7 || v16 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v24], mX + 167, mY + 225);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v24], mX + 154, mY + 212);
            }
        }
        if (mPage[1] != -1)
        {
            v19 = mITEM.Search(mInv[1].iIndex);
            if (v19)
            {
                v24 = v19->iDataNumber2D - 1;
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v24], mX + 22, mY + 212);
            }
        }
        if (mPage[1] != -1 && mITEM.Search(mInv[1].iIndex))
        {
            v22 = 1000000;
            if (mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService > 0 || mMYINFO.uLoginPremium == 3)
                v22 = (int)((float)1000000 * 0.80f);
            v13 = mMESSAGE.Return(216);
            v4 = mMESSAGE.Return(215);
            sprintf(Buffer, "%s : %d %s", v4, v22, v13);
            mUTIL.DrawFont2D(Buffer, mX + 15, mY + 415, 21);
        }
        sprintf(Buffer, "%d / %d", tUltimateUpgradeState[0] + 1, 2);
        v11 = mY + 13;
        v5 = mX + 114;
        v6 = mUTIL.GetStringLength(Buffer);
        mUTIL.DrawFont2D(Buffer, v5 - v6 / 2, v11, 3);
        if (mIsClick[0])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
        if (mIsClick[1])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[727], mX + 171, mY + 414);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[726], mX + 171, mY + 414, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[726], mX + 171, mY + 414);
        }
        if (mIsClick[2])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4132], mX + 68, mY + 80);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80);
        }
        if (mIsClick[3])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4134], mX - 252, mY);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX - 244, mY + 6);
        }
    }
}

void NPCUI::Draw70(int uX, int uY)// Craft 2 Tailor
{

    char* tStr;
    char* tStr2;
    int sX;
    int sY;
    char tBuf[1000];
    int tStrLen;
    int i;
    ITEM_INFO* v31;
    int v36;
    int v29;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[612]);
    mY = mY;
    if (mMakeItemSort == 2)
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3785], mX, mY);
    else
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[612], mX, mY);
    switch (mMakeItemSort)
    {
    case 1:
        sprintf(tBuf, "%d / %d", mMakeItemPresentPage - 19, mMakeItemTotalPage - 20);
        break;
    default:
        sprintf(tBuf, "%d / %d", mMakeItemPresentPage + 1, mMakeItemTotalPage);
        break;
    }
    sY = mY + 13;
    sX = mX + 114;
    tStrLen = mUTIL.GetStringLength(tBuf);
    mUTIL.DrawFont2D(tBuf, sX - tStrLen / 2, sY, 3);
    switch (mMakeItemPresentPage)
    {
    case 0:// Deco V0=Deco V1 Mask
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 1000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 1:// Deco V0=Deco V1 Daiko
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 1000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 2:// Deco V0=Deco V1 Gaunlet
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 1000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 3:// Deco V1 Legendary Glasses=Deco V2 Legendary Glasses
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 2000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 4:// Deco V1 Legendary Fauld=Deco V2 Legendary Fauld
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 2000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 5:// Deco V1 Legendary Gloves=Deco V2 Legendary Gloves
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 2000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 6:// Deco V2 Legendary Glasses=Deco V3 Legendary Glasses
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 3000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 7:// Deco V2 Legendary Fauld=Deco V3 Legendary Fauld
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 3000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    case 8:// Deco V2 Legendary Gloves=Deco V3 Legendary Gloves
        sprintf(tBuf, "%s : %d (%s)", mMESSAGE.Return(215), 3000, mMESSAGE.Return(239));
        mUTIL.DrawFont2D(tBuf, mX + 15, mY + 415, 2);
        sprintf(tBuf, "%s : %s", mMESSAGE.Return(2832), mMESSAGE.Return(2824));
        mUTIL.DrawFont2D(tBuf, mX + 45, mY + 270, 3);
        break;

    default:
        break;
    }
    for (i = 0; i < 4; ++i)
    {
        if (mMakeItemInfo[mMakeItemPresentPage][i] >= 1)
        {
            v31 = mITEM.Search(mMakeItemInfo[mMakeItemPresentPage][i]);
            if (v31)
            {
                v36 = v31->iDataNumber2D - 1;
                v29 = v31->iSort;
                if (v29 == 7 || v29 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 24, mY + 87);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 11, mY + 74);
            }
        }
    }
    if (mMakeItemInfo[mMakeItemPresentPage][4] > 0)
    {
        v31 = mITEM.Search(mMakeItemInfo[mMakeItemPresentPage][4]);
        if (v31)
        {
            v36 = v31->iDataNumber2D - 1;
            v29 = v31->iSort;
            if (v29 == 7 || v29 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 102, mY + 193);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 89, mY + 180);
        }
    }
    for (i = 0; i < 4; ++i)
    {
        if (mPage[i] != -1)
        {
            v31 = mITEM.Search(mInv[i].iIndex);
            if (v31)
            {
                v36 = v31->iDataNumber2D - 1;
                v29 = v31->iSort;
                if (v29 == 7 || v29 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 24, mY + 340);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v36], mX + 52 * i + 11, mY + 327);
            }
        }
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[614], mX + 172, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414);
    }
    if (mIsClick[2])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10);
    if (mIsClick[3])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10);

}

void NPCUI::Draw72(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    int v6;
    ITEM_INFO* v8;
    ITEM_INFO* v9;
    char Buffer[1000];
    int v11;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3456]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[4129], mX, mY);
    if (mPage[0] != -1)
    {
        v8 = mITEM.Search(mInv[0].iIndex);
        if (v8)
        {
            v11 = v8->iDataNumber2D - 1;
            v6 = v8->iSort;
            if (v6 == 7 || v6 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v11], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v11], mX + 154, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        v9 = mITEM.Search(mInv[1].iIndex);
        if (v9)
        {
            v11 = v9->iDataNumber2D - 1;
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v11], mX + 22, mY + 212);
        }
    }
    if (mPage[1] != -1 && mITEM.Search(mInv[1].iIndex))
    {
        v5 = mMESSAGE.Return(1415);
        v4 = mMESSAGE.Return(215);
        sprintf(Buffer, "%s : %d %s", v4, 50, v5);
        mUTIL.DrawFont2D(Buffer, mX + 15, mY + 415, 21);
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[611], mX + 171, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[610], mX + 171, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[610], mX + 171, mY + 414);
    }
    if (mIsClick[2])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4132], mX + 68, mY + 80);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80);
    }
    if (mIsClick[3])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4133], mX - 252, mY);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX - 244, mY + 6);
    }
}

void NPCUI::Draw73(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    ITEM_INFO* v7;
    ITEM_INFO* v8;
    ITEM_INFO* v9;
    int i;
    int v11;
    int v12;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4145]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[4145], mX, mY);
    if (mPage[0] != -1)
    {
        v7 = mITEM.Search(mInv[0].iIndex);
        if (v7)
        {
            v11 = v7->iDataNumber2D - 1;
            v5 = v7->iSort;
            if (v5 == 7 || v5 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v11], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v11], mX + 154, mY + 212);
        }
    }
    if (mPage[1] != -1)
    {
        v8 = mITEM.Search(mInv[1].iIndex);
        if (v8)
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v8->iDataNumber2D - 1], mX + 22, mY + 212);
    }
    for (i = 2; i < 6; ++i)
    {
        if (mPage[i] != -1)
        {
            v9 = mITEM.Search(mInv[i].iIndex);
            if (v9)
            {
                v12 = v9->iDataNumber2D - 1;
                v4 = v9->iSort;
                if (v4 == 7 || v4 == 11)
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v12], mX + 52 * (i - 2) + 24, mY + 340);
                else
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v12], mX + 52 * (i - 2) + 11, mY + 327);
            }
        }
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4147], mX + 171, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4146], mX + 171, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4146], mX + 171, mY + 414);
    }
    if (mIsClick[2])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4132], mX + 68, mY + 80);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80);
    }
    if (mIsClick[3])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4151], mX - 252, mY);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX - 244, mY + 6);
    }
}

void NPCUI::Draw74(int uX, int uY)
{
    char mBuffer[1000];
    char tBuffer[1000];
    int tDisplaySort;
    int i;
    ITEM_INFO* tITEM_INFO;
    int i2D;
    int iSort;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    mX = mX + 23 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4141]);
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[4141], mX, mY);

    mUTIL.ChangeMoneyToString(mMYINFO.mAvatarInfo.aPK, mBuffer, &tDisplaySort);
    mUTIL.DrawFont2D(mBuffer, mX + 394 - mUTIL.GetStringLength(mBuffer), mY + 14, 3);

    for (i = 0; i < 10; i++)
    {
        if (mBloodStoreInfo[mBloodStoreCurrentPage][i][0] > 0)
        {
            tITEM_INFO = mITEM.Search(mBloodStoreInfo[mBloodStoreCurrentPage][i][0]);
            if (!tITEM_INFO)
            {
                continue;
            }
            i2D = tITEM_INFO->iDataNumber2D - 1;
            iSort = tITEM_INFO->iSort;
            if (iSort == 2 || iSort == 7 || iSort == 11)
            {
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2D], mX + 195 * (i / 5) + 41, mY + 69 * (i % 5) + 67);
            }
            else
            {
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2D], mX + 195 * (i / 5) + 28, mY + 69 * (i % 5) + 54);
            }

            if (tITEM_INFO->iSort == 2 && mBloodStoreInfo[mBloodStoreCurrentPage][i][2] > 0)
            {
                sprintf(mBuffer, "%d", mBloodStoreInfo[mBloodStoreCurrentPage][i][2]);
                mUTIL.DrawFont2D(mBuffer, mX + 195 * (i / 5) + 55, mY + 69 * (i % 5) + 81, 1);
            }

            if (i == mBloodStoreIndex)
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2627], mX + 195 * (i / 5) + 28, mY + 69 * (i % 5) + 54);
            }

            switch (tITEM_INFO->iEquipInfo[0])
            {
            case 1:
                strcpy(mBuffer, mMESSAGE.Return(585));
                break;
            case 2:
                strcpy(mBuffer, mMESSAGE.Return(586));
                break;
            case 3:
                strcpy(mBuffer, mMESSAGE.Return(587));
                break;
            case 4:
                strcpy(mBuffer, mMESSAGE.Return(588));
                break;
            default:
                break;
            }
            mUTIL.DrawFont2D(mBuffer, mX + 195 * (i / 5) + 144 - mUTIL.GetStringLength(mBuffer) / 2, mY + 69 * (i % 5) + 57, 1);

            strcpy(mBuffer, tITEM_INFO->iName);
            mUTIL.DrawFont2D(mBuffer, mX + 195 * (i / 5) + 144 - mUTIL.GetStringLength(mBuffer) / 2, mY + 69 * (i % 5) + 73, 1);

            mUTIL.ChangeMoneyToString(mBloodStoreInfo[mBloodStoreCurrentPage][i][1], tBuffer, &tDisplaySort);
            sprintf(mBuffer, "%s %s", tBuffer, mMESSAGE.Return(2706));
            mUTIL.DrawFont2D(mBuffer, mX + 195 * (i / 5) + 144 - mUTIL.GetStringLength(mBuffer) / 2, mY + 69 * (i % 5) + 89, 3);
        }
    }

    sprintf(mBuffer, "%d / %d", mBloodStoreCurrentPage + 1, mBloodStoreMaxPage + 1);
    mUTIL.DrawFont2D(mBuffer, mX + 210 - mUTIL.GetStringLength(mBuffer) / 2, mY + 414, 1);

    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 7, mY + 7);
    }
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 152, mY + 411);
    }
    if (mIsClick[2])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 250, mY + 411);
    }
    if (mIsClick[3])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1339], mX + 361, mY + 411);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1338], mX + 361, mY + 411, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1338], mX + 361, mY + 411);
    }
}

void NPCUI::Draw75(int uX, int uY)
{
    int v3;
    char* v4;
    int v5;
    char* v6;
    int v7;
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;
    int v14;
    int v15;
    ITEM_INFO* v16;
    char Buffer[1000];
    int v18;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4175]);
    mY = mY;
    GIMAGE2D::Display(&mGDATA.mUI_MAIN[4175], mX, mY);
    if (mPage[0] != -1)
    {
        v16 = mITEM.Search(mInv[0].iIndex);
        if (v16)
        {
            v18 = v16->iDataNumber2D - 1;
            v7 = v16->iSort;
            if (v7 == 7 || v7 == 11)
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v18], mX + 167, mY + 225);
            else
                GIMAGE2D::Display(&mGDATA.mUI_ITEM[v18], mX + 154, mY + 212);
            s1 = 0;
            s2 = 0;
            s3 = 0;
            s4 = 0;
            s5 = 0;
            v15 = mUTIL.GetSocketAbility(mInv[0].iSocket[0], mInv[0].iSocket[1], mInv[0].iSocket[2], &s1, &s2, &s3, &s4, &s5);
            v14 = 0;
            if (v15)
            {
                switch (v15)
                {
                case 1:
                    v14 = 15000;
                    break;
                case 2:
                    v14 = 20000;
                    break;
                case 3:
                    v14 = 25000;
                    break;
                case 4:
                    v14 = 30000;
                    break;
                }
            }
            else
            {
                v14 = 10000;
            }
            v6 = mMESSAGE.Return(239);
            v5 = v14;
            v4 = mMESSAGE.Return(215);
            sprintf(Buffer, "%s : %d %s", v4, v5, v6);
            mUTIL.DrawFont2D(Buffer, mX + 15, mY + 415, 21);
        }
    }
    if (mPage[1] != -1)
    {
        v16 = mITEM.Search(mInv[1].iIndex);
        if (v16)
        {
            v18 = v16->iDataNumber2D - 1;
            GIMAGE2D::Display(&mGDATA.mUI_ITEM[v18], mX + 22, mY + 212);
        }
    }
    if (mIsClick[0])
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4177], mX + 172, mY + 414);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4176], mX + 172, mY + 414, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4176], mX + 172, mY + 414);
    }
}

void NPCUI::Draw77(int uX, int uY)
{
    char* str;
    int len;
    int sX;
    int sY;
    char Buffer[1000];

    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4444]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[4444]) / 2;

    GIMAGE2D::Display(&mGDATA.mUI_MAIN[4444], mX, mY);
    sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aMetastatisLevel);
    sY = mY + 66;
    sX = mX + 190;
    sX = sX - mUTIL.GetStringLength(Buffer) / 2;
    mUTIL.DrawFont2D(Buffer, sX, sY, 1);

    sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aKillOtherTribe);
    sY = mY + 106;
    sX = mX + 190;
    sX = sX - mUTIL.GetStringLength(Buffer) / 2;
    mUTIL.DrawFont2D(Buffer, sX, sY, 1);

    sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aHwangoldan);
    sY = mY + 138;
    sX = mX + 190;
    sX = sX - mUTIL.GetStringLength(Buffer) / 2;
    mUTIL.DrawFont2D(Buffer, sX, sY, 1);

    sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aMetastatisStrOrb);
    sY = mY + 173;
    sX = mX + 106;
    sX = sX - mUTIL.GetStringLength(Buffer) / 2;
    mUTIL.DrawFont2D(Buffer, sX, sY, 1);

    sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aMetastatisDexOrb);
    sY = mY + 173;
    sX = mX + 228;
    sX = sX - mUTIL.GetStringLength(Buffer) / 2;
    mUTIL.DrawFont2D(Buffer, sX, sY, 1);

    sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aMetastatisVitOrb);
    sY = mY + 196;
    sX = mX + 106;
    sX = sX - mUTIL.GetStringLength(Buffer) / 2;
    mUTIL.DrawFont2D(Buffer, sX, sY, 1);

    sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aMetastatisIntOrb);
    sY = mY + 196;
    sX = mX + 228;
    sX = sX - mUTIL.GetStringLength(Buffer) / 2;
    mUTIL.DrawFont2D(Buffer, sX, sY, 1);

    sprintf(Buffer, "%d (+%d)", mMYINFO.mAvatarInfo.aMetastatisStr / 100, mMYINFO.mAvatarInfo.aMetastatisStr % 100);
    sY = mY + 268;
    sX = mX + 102;
    sX = sX - mUTIL.GetStringLength(Buffer) / 2;
    mUTIL.DrawFont2D(Buffer, sX, sY, 1);

    sprintf(Buffer, "%d (+%d)", mMYINFO.mAvatarInfo.aMetastatisDex / 100, mMYINFO.mAvatarInfo.aMetastatisDex % 100);
    sY = mY + 268;
    sX = mX + 216;
    sX = sX - mUTIL.GetStringLength(Buffer) / 2;
    mUTIL.DrawFont2D(Buffer, sX, sY, 1);

    sprintf(Buffer, "%d (+%d)", mMYINFO.mAvatarInfo.aMetastatisVit / 100, mMYINFO.mAvatarInfo.aMetastatisVit % 100);
    sY = mY + 291;
    sX = mX + 102;
    sX = sX - mUTIL.GetStringLength(Buffer) / 2;
    mUTIL.DrawFont2D(Buffer, sX, sY, 1);

    sprintf(Buffer, "%d (+%d)", mMYINFO.mAvatarInfo.aMetastatisInt / 100, mMYINFO.mAvatarInfo.aMetastatisInt % 100);
    sY = mY + 291;
    sX = mX + 216;
    sX = sX - mUTIL.GetStringLength(Buffer) / 2;
    mUTIL.DrawFont2D(Buffer, sX, sY, 1);

    if (mIsClick[0])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4447], mX + 28, mY + 332);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4446], mX + 28, mY + 332, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4446], mX + 28, mY + 332);
    }
    if (mIsClick[1])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4450], mX + 152, mY + 332);
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4449], mX + 152, mY + 332, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4449], mX + 152, mY + 332);
    }
    if (mIsClick[2])
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24);
    }
}

int NPCUI::ReturnGuardMoveNum()
{
    switch (mMYINFO.mPresentZoneNumber)
    {
    case 1:
        if (mMYINFO.mAvatarInfo.aTribe == 0)
        {
            return 24;
        }
        break;

    case 6:
        if (mMYINFO.mAvatarInfo.aTribe == 1)
        {
            return 24;
        }
        break;

    case 11:
        if (mMYINFO.mAvatarInfo.aTribe == 2)
        {
            return 24;
        }
        break;

    case 140:
        if (mMYINFO.mAvatarInfo.aTribe == 3)
        {
            return 24;
        }
        break;
    }
    return 0;
}
int NPCUI::ReturnGuardMoveZone(int a2)
{
    switch (mMYINFO.mPresentZoneNumber)
    {
    case 1:
        if (mMYINFO.mAvatarInfo.aLevel2 < 1)
        {
            switch (a2)
            {
            case 0: return 0;
            case 1: return NPCUI::ReturnLevelBattleZoneNumber();
            case 2: return NPCUI::ReturnLevel319ZoneNumber();
            case 3: return NPCUI::ReturnZone195TypeZoneNumber();
            case 4: return 0;
            case 5: return 55;
            case 6: return 89;
            case 7: return 125;
            case 8: return NPCUI::ReturnZone175TypeZoneNumber();
            case 12: return 194;
//			case 13: return NPCUI::ReturnZone267TypeZoneNumber();
            default: return 0;
            }
        }
        else if (mMYINFO.mAvatarInfo.aLevel2 >= 1 && mMYINFO.mAvatarInfo.aRebirth <= 6)
        {
            switch (a2)
            {
            case 0: return 0;
            case 1: return NPCUI::ReturnLevelBattleZoneNumber();
            case 2: return NPCUI::ReturnLevel319ZoneNumber();
            case 3: return NPCUI::ReturnZone195TypeZoneNumber();
            case 4: return 0;
            case 5: return 55;
            case 6: return 89;
            case 7: return 125;
            case 8: return NPCUI::ReturnZone175TypeZoneNumber();
            case 10: return 234;
            case 11: return NPCUI::ReturnZone241TypeZoneNumber();
            case 12: return 194;
//			case 13: return NPCUI::ReturnZone267TypeZoneNumber();
            default: return 0;
            }

        }
        else if (mMYINFO.mAvatarInfo.aLevel2 >= 1 && mMYINFO.mAvatarInfo.aRebirth >= 7)
        {
            switch (a2)
            {
            case 0: return 0;
            case 1: return NPCUI::ReturnLevelBattleZoneNumber();
            case 2: return NPCUI::ReturnLevel319ZoneNumber();
            case 3: return NPCUI::ReturnZone195TypeZoneNumber();
            case 4: return 0;
            case 5: return 55;
            case 6: return 89;
            case 7: return 125;
            case 8: return NPCUI::ReturnZone175TypeZoneNumber();
            case 10: return 234;
            case 11: return NPCUI::ReturnZone241TypeZoneNumber();
            case 12: return 194;
//			case 13: return NPCUI::ReturnZone267TypeZoneNumber();
            default: return 0;
            }
        }
        return 0;

    case 6:
        if (mMYINFO.mAvatarInfo.aLevel2 < 1)
        {
            switch (a2)
            {
            case 0: return 0;
            case 1: return NPCUI::ReturnLevelBattleZoneNumber();
            case 2: return NPCUI::ReturnLevel319ZoneNumber();
            case 3: return NPCUI::ReturnZone195TypeZoneNumber();
            case 4: return 0;
            case 5: return 55;
            case 6: return 89;
            case 7: return 125;
            case 8: return NPCUI::ReturnZone175TypeZoneNumber();
            case 12: return 194;
//			case 13: return NPCUI::ReturnZone267TypeZoneNumber();
            default: return 0;
            }
        }
        else if (mMYINFO.mAvatarInfo.aLevel2 >= 1 && mMYINFO.mAvatarInfo.aRebirth <= 6)
        {
            switch (a2)
            {
            case 0: return 0;
            case 1: return NPCUI::ReturnLevelBattleZoneNumber();
            case 2: return NPCUI::ReturnLevel319ZoneNumber();
            case 3: return NPCUI::ReturnZone195TypeZoneNumber();
            case 4: return 0;
            case 5: return 55;
            case 6: return 89;
            case 7: return 125;
            case 8: return NPCUI::ReturnZone175TypeZoneNumber();
            case 10: return 234;
            case 11: return NPCUI::ReturnZone241TypeZoneNumber();
            case 12: return 194;
//			case 13: return NPCUI::ReturnZone267TypeZoneNumber();
            default: return 0;
            }

        }
        else if (mMYINFO.mAvatarInfo.aLevel2 >= 1 && mMYINFO.mAvatarInfo.aRebirth >= 7)
        {
            switch (a2)
            {
            case 0: return 0;
            case 1: return NPCUI::ReturnLevelBattleZoneNumber();
            case 2: return NPCUI::ReturnLevel319ZoneNumber();
            case 3: return NPCUI::ReturnZone195TypeZoneNumber();
            case 4: return 0;
            case 5: return 55;
            case 6: return 89;
            case 7: return 125;
            case 8: return NPCUI::ReturnZone175TypeZoneNumber();
            case 10: return 234;
            case 11: return NPCUI::ReturnZone241TypeZoneNumber();
            case 12: return 194;
//			case 13: return NPCUI::ReturnZone267TypeZoneNumber();
            default: return 0;
            }
        }
        return 0;

    case 11:
        if (mMYINFO.mAvatarInfo.aLevel2 < 1)
        {
            switch (a2)
            {
            case 0: return 0;
            case 1: return NPCUI::ReturnLevelBattleZoneNumber();
            case 2: return NPCUI::ReturnLevel319ZoneNumber();
            case 3: return NPCUI::ReturnZone195TypeZoneNumber();
            case 4: return 0;
            case 5: return 55;
            case 6: return 89;
            case 7: return 125;
            case 8: return NPCUI::ReturnZone175TypeZoneNumber();
            case 12: return 194;
//			case 13: return NPCUI::ReturnZone267TypeZoneNumber();
            default: return 0;
            }
        }
        else if (mMYINFO.mAvatarInfo.aLevel2 >= 1 && mMYINFO.mAvatarInfo.aRebirth <= 6)
        {
            switch (a2)
            {
            case 0: return 0;
            case 1: return NPCUI::ReturnLevelBattleZoneNumber();
            case 2: return NPCUI::ReturnLevel319ZoneNumber();
            case 3: return NPCUI::ReturnZone195TypeZoneNumber();
            case 4: return 0;
            case 5: return 55;
            case 6: return 89;
            case 7: return 125;
            case 8: return NPCUI::ReturnZone175TypeZoneNumber();
            case 10: return 234;
            case 11: return NPCUI::ReturnZone241TypeZoneNumber();
            case 12: return 194;
//			case 13: return NPCUI::ReturnZone267TypeZoneNumber();
            default: return 0;
            }

        }
        else if (mMYINFO.mAvatarInfo.aLevel2 >= 1 && mMYINFO.mAvatarInfo.aRebirth >= 7)
        {
            switch (a2)
            {
            case 0: return 0;
            case 1: return NPCUI::ReturnLevelBattleZoneNumber();
            case 2: return NPCUI::ReturnLevel319ZoneNumber();
            case 3: return NPCUI::ReturnZone195TypeZoneNumber();
            case 4: return 0;
            case 5: return 55;
            case 6: return 89;
            case 7: return 125;
            case 8: return NPCUI::ReturnZone175TypeZoneNumber();
            case 10: return 234;
            case 11: return NPCUI::ReturnZone241TypeZoneNumber();
            case 12: return 194;
//			case 13: return NPCUI::ReturnZone267TypeZoneNumber();
            default: return 0;
            }
        }
        return 0;

    case 140:
        if (mMYINFO.mAvatarInfo.aLevel2 < 1)
        {
            switch (a2)
            {
            case 0: return 0;
            case 1: return NPCUI::ReturnLevelBattleZoneNumber();
            case 2: return NPCUI::ReturnLevel319ZoneNumber();
            case 3: return NPCUI::ReturnZone195TypeZoneNumber();
            case 4: return 0;
            case 5: return 55;
            case 6: return 89;
            case 7: return 125;
            case 8: return NPCUI::ReturnZone175TypeZoneNumber();
            case 12: return 194;
//			case 13: return NPCUI::ReturnZone267TypeZoneNumber();
            default: return 0;
            }
        }
        else if (mMYINFO.mAvatarInfo.aLevel2 >= 1 && mMYINFO.mAvatarInfo.aRebirth <= 6)
        {
            switch (a2)
            {
            case 0: return 0;
            case 1: return NPCUI::ReturnLevelBattleZoneNumber();
            case 2: return NPCUI::ReturnLevel319ZoneNumber();
            case 3: return NPCUI::ReturnZone195TypeZoneNumber();
            case 4: return 0;
            case 5: return 55;
            case 6: return 89;
            case 7: return 125;
            case 8: return NPCUI::ReturnZone175TypeZoneNumber();
            case 10: return 234;
            case 11: return NPCUI::ReturnZone241TypeZoneNumber();
            case 12: return 194;
//			case 13: return NPCUI::ReturnZone267TypeZoneNumber();
            default: return 0;
            }

        }
        else if (mMYINFO.mAvatarInfo.aLevel2 >= 1 && mMYINFO.mAvatarInfo.aRebirth >= 7)
        {
            switch (a2)
            {
            case 0: return 0;
            case 1: return NPCUI::ReturnLevelBattleZoneNumber();
            case 2: return NPCUI::ReturnLevel319ZoneNumber();
            case 3: return NPCUI::ReturnZone195TypeZoneNumber();
            case 4: return 0;
            case 5: return 55;
            case 6: return 89;
            case 7: return 125;
            case 8: return NPCUI::ReturnZone175TypeZoneNumber();
            case 10: return 234;
            case 11: return NPCUI::ReturnZone241TypeZoneNumber();
            case 12: return 194;
//			case 13: return NPCUI::ReturnZone267TypeZoneNumber();
            default: return 0;
            }
        }
        return 0;
    }
}
char* NPCUI::ReturnGuardMoveName(int mIndex)
{
    int v3;
    char* v4;
    char* v5;
    char Buffer[1000];

    if (!NPCUI::ReturnGuardMoveZone(mIndex))
        return "";
    v5 = mMESSAGE.Return(225);
    v3 = NPCUI::ReturnGuardMoveZone(mIndex);
    v4 = mZONENAME.Return(v3);
    sprintf(Buffer, "%s %s", v4, v5);
    return Buffer;
}
char* NPCUI::ReturnGuard2MoveName(int tZoneNumber)
{
    int v3;
    char* v4;
    char* v5;
    char Buffer[1000];

    if (!NPCUI::ReturnGuard2MoveZone(tZoneNumber))
        return "";
    v5 = mMESSAGE.Return(225);
    v3 = NPCUI::ReturnGuard2MoveZone(tZoneNumber);
    v4 = mZONENAME.Return(v3);
    sprintf(Buffer, "%s %s", v4, v5);
    return Buffer;
}


int NPCUI::ReturnLevelBattleZoneNumber()
{
    int v1;
    int v2;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;

    v1 = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
    if (v1 >= mZONEMAININFO.ReturnMinZoneLevelInfo(49))
    {
        v2 = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
        if (v2 <= mZONEMAININFO.ReturnMaxZoneLevelInfo(49))
            return 49;
    }
    v4 = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
    if (v4 >= mZONEMAININFO.ReturnMinZoneLevelInfo(120))
    {
        v5 = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
        if (v5 <= mZONEMAININFO.ReturnMaxZoneLevelInfo(120))
            return 120;
    }
    v6 = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
    if (v6 >= mZONEMAININFO.ReturnMinZoneLevelInfo(154))
    {
        v7 = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
        if (v7 <= mZONEMAININFO.ReturnMaxZoneLevelInfo(154))
            return 154;
    }
    v8 = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
    if (v8 < mZONEMAININFO.ReturnMinZoneLevelInfo(295))
        return 0;
    v9 = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
    if (v9 > mZONEMAININFO.ReturnMinZoneLevelInfo(295))
        return 0;
    if (mMYINFO.mAvatarInfo.aRebirth < 4)
        return 295;
    if (mMYINFO.mAvatarInfo.aRebirth >= 7)
        return 296;
    return 295;
}

int NPCUI::CheckPossibleMoveLevelBattleZone()
{
    int result;
    int v2;

    v2 = NPCUI::ReturnLevelBattleZoneNumber();
    if (v2 > 319)
    {
        switch (v2)
        {
        case 320:
            if (mPLAY.mWorldInfo.mZone319TypeState[1] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 321:
            if (mPLAY.mWorldInfo.mZone319TypeState[2] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 322:
            if (mPLAY.mWorldInfo.mZone319TypeState[3] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 323:
            if (mPLAY.mWorldInfo.mZone319TypeState[4] != 1)
                goto LABEL_97;
            result = 1;
            break;
        default:
            goto LABEL_97;
        }
    }
    else if (v2 == 319)
    {
        if (mPLAY.mWorldInfo.mZone319TypeState[0] == 1)
            result = 1;
        else
            LABEL_97:
        result = 0;
    }
    else
    {
        switch (v2)
        {
        case 49:
            if (mPLAY.mWorldInfo.mZone049TypeState[0] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 51:
            if (mPLAY.mWorldInfo.mZone051TypeState[0] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 53:
            if (mPLAY.mWorldInfo.mZone053TypeState[0] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 120:
            if (mPLAY.mWorldInfo.mZone049TypeState[6] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 121:
            if (mPLAY.mWorldInfo.mZone049TypeState[7] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 122:
            if (mPLAY.mWorldInfo.mZone049TypeState[8] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 146:
            if (mPLAY.mWorldInfo.mZone049TypeState[1] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 147:
            if (mPLAY.mWorldInfo.mZone051TypeState[1] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 148:
            if (mPLAY.mWorldInfo.mZone053TypeState[1] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 149:
            if (mPLAY.mWorldInfo.mZone049TypeState[2] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 150:
            if (mPLAY.mWorldInfo.mZone051TypeState[2] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 151:
            if (mPLAY.mWorldInfo.mZone053TypeState[2] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 152:
            if (mPLAY.mWorldInfo.mZone053TypeState[3] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 153:
            if (mPLAY.mWorldInfo.mZone053TypeState[4] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 154:
            if (mPLAY.mWorldInfo.mZone049TypeState[3] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 155:
            if (mPLAY.mWorldInfo.mZone051TypeState[3] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 156:
            if (mPLAY.mWorldInfo.mZone053TypeState[5] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 157:
            if (mPLAY.mWorldInfo.mZone049TypeState[4] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 158:
            if (mPLAY.mWorldInfo.mZone051TypeState[4] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 159:
            if (mPLAY.mWorldInfo.mZone053TypeState[6] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 160:
            if (mPLAY.mWorldInfo.mZone049TypeState[5] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 161:
            if (mPLAY.mWorldInfo.mZone051TypeState[5] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 162:
            if (mPLAY.mWorldInfo.mZone053TypeState[7] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 163:
            if (mPLAY.mWorldInfo.mZone053TypeState[8] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 164:
            if (mPLAY.mWorldInfo.mZone053TypeState[9] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 295:
            if (mPLAY.mWorldInfo.mZone049TypeState[9] != 1)
                goto LABEL_97;
            result = 1;
            break;
        case 296:
            if (mPLAY.mWorldInfo.mZone049TypeState[10] != 1)
                goto LABEL_97;
            result = 1;
            break;
        default:
            goto LABEL_97;
        }
    }
    return result;
}

int NPCUI::ReturnLevel319ZoneNumber()
{
    int tLevel;
    int tLevell;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;

    tLevel = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
    if (tLevel >= mZONEMAININFO.ReturnMinZoneLevelInfo(319))
    {
        tLevell = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
        if (tLevell <= mZONEMAININFO.ReturnMaxZoneLevelInfo(319))
            return 319;
    }
    v4 = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
    if (v4 >= mZONEMAININFO.ReturnMinZoneLevelInfo(320))
    {
        v5 = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
        if (v5 <= mZONEMAININFO.ReturnMaxZoneLevelInfo(320))
            return 320;
    }
    v6 = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
    if (v6 >= mZONEMAININFO.ReturnMinZoneLevelInfo(321))
    {
        v7 = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
        if (v7 <= mZONEMAININFO.ReturnMaxZoneLevelInfo(321))
            return 321;
    }
    v8 = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
    if (v8 < mZONEMAININFO.ReturnMinZoneLevelInfo(322))
        return 0;
    v9 = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
    if (v9 > mZONEMAININFO.ReturnMinZoneLevelInfo(322))
        return 0;
    if (mMYINFO.mAvatarInfo.aRebirth >= 7)
        return 323;
    return 322;
}

int NPCUI::CheckPossibleMove319ZoneNumber()
{
    int result;

    switch (NPCUI::ReturnLevel319ZoneNumber())
    {
    case 319:
        if (mPLAY.mWorldInfo.mZone319TypeState[0] != 1)
            goto LABEL_16;
        result = 1;
        break;
    case 320:
        if (mPLAY.mWorldInfo.mZone319TypeState[1] != 1)
            goto LABEL_16;
        result = 1;
        break;
    case 321:
        if (mPLAY.mWorldInfo.mZone319TypeState[2] != 1)
            goto LABEL_16;
        result = 1;
        break;
    case 322:
        if (mPLAY.mWorldInfo.mZone319TypeState[3] != 1)
            goto LABEL_16;
        result = 1;
        break;
    case 323:
        if (mPLAY.mWorldInfo.mZone319TypeState[4] != 1)
            goto LABEL_16;
        result = 1;
        break;
    default:
    LABEL_16:
        result = 0;
        break;
    }
    return result;
}

int NPCUI::ReturnZone195TypeZoneNumber()
{
    int tLevel = mMYINFO.mAvatarInfo.aLevel1 + mMYINFO.mAvatarInfo.aLevel2;

    if (tLevel >= 113 && tLevel <= 145)
    {
        return 196;
    }
    else if (tLevel >= 146 && tLevel < 157)
    {
        return 85;
    }
    else if (tLevel == 157 && mMYINFO.mAvatarInfo.aRebirth <= 6)
    {
        return 99;
    }
    else if (tLevel == 157 && mMYINFO.mAvatarInfo.aRebirth >= 7)
    {
        return 100;
    }
}
int NPCUI::ReturnZone175TypeZoneNumber()
{
    int result;

    if (mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1 < 100
        || mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1 > 112)
    {
    LABEL_8:
        if (mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1 < 113
            || mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1 > 145)
        {
        LABEL_15:
            if (mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1 < 146
                || mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1 > 157)
            {
            LABEL_22:
                result = 0;
            }
            else
            {
                switch (mMYINFO.mAvatarInfo.aTribe)
                {
                case 0:
                    result = 19;
                    break;
                case 1:
                    result = 20;
                    break;
                case 2:
                    result = 21;
                    break;
                case 3:
                    result = 34;
                    break;
                default:
                    goto LABEL_22;
                }
            }
        }
        else
        {
            switch (mMYINFO.mAvatarInfo.aTribe)
            {
            case 0:
                result = 190;
                break;
            case 1:
                result = 191;
                break;
            case 2:
                result = 192;
                break;
            case 3:
                result = 193;
                break;
            default:
                goto LABEL_15;
            }
        }
    }
    else
    {
        switch (mMYINFO.mAvatarInfo.aTribe)
        {
        case 0:
            result = 175;
            break;
        case 1:
            result = 176;
            break;
        case 2:
            result = 177;
            break;
        case 3:
            result = 0;
            break;
        default:
            goto LABEL_8;
        }
    }
    return result;
}

int NPCUI::CheckPossibleMoveZone175TypeZone()
{
    int result;

    switch (NPCUI::ReturnZone175TypeZoneNumber())
    {
    case 19:
        if (mPLAY.mWorldInfo.mZone175TypeState[0][5] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 20:
        if (mPLAY.mWorldInfo.mZone175TypeState[1][5] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 21:
        if (mPLAY.mWorldInfo.mZone175TypeState[2][5] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 25:
        if (mPLAY.mWorldInfo.mZone175TypeState[0][6] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 26:
        if (mPLAY.mWorldInfo.mZone175TypeState[1][6] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 27:
        if (mPLAY.mWorldInfo.mZone175TypeState[2][6] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 31:
        if (mPLAY.mWorldInfo.mZone175TypeState[0][7] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 32:
        if (mPLAY.mWorldInfo.mZone175TypeState[1][7] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 33:
        if (mPLAY.mWorldInfo.mZone175TypeState[2][7] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 34:
        if (mPLAY.mWorldInfo.mZone175TypeState[3][5] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 35:
        if (mPLAY.mWorldInfo.mZone175TypeState[3][6] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 36:
        if (mPLAY.mWorldInfo.mZone175TypeState[3][7] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 175:
        if (mPLAY.mWorldInfo.mZone175TypeState[0][0] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 176:
        if (mPLAY.mWorldInfo.mZone175TypeState[1][0] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 177:
        if (mPLAY.mWorldInfo.mZone175TypeState[2][0] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 178:
        if (mPLAY.mWorldInfo.mZone175TypeState[0][1] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 179:
        if (mPLAY.mWorldInfo.mZone175TypeState[1][1] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 180:
        if (mPLAY.mWorldInfo.mZone175TypeState[2][1] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 181:
        if (mPLAY.mWorldInfo.mZone175TypeState[3][1] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 182:
        if (mPLAY.mWorldInfo.mZone175TypeState[0][2] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 183:
        if (mPLAY.mWorldInfo.mZone175TypeState[1][2] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 184:
        if (mPLAY.mWorldInfo.mZone175TypeState[2][2] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 185:
        if (mPLAY.mWorldInfo.mZone175TypeState[3][2] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 186:
        if (mPLAY.mWorldInfo.mZone175TypeState[0][3] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 187:
        if (mPLAY.mWorldInfo.mZone175TypeState[1][3] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 188:
        if (mPLAY.mWorldInfo.mZone175TypeState[2][3] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 189:
        if (mPLAY.mWorldInfo.mZone175TypeState[3][3] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 190:
        if (mPLAY.mWorldInfo.mZone175TypeState[0][4] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 191:
        if (mPLAY.mWorldInfo.mZone175TypeState[1][4] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 192:
        if (mPLAY.mWorldInfo.mZone175TypeState[2][4] != 1)
            goto LABEL_94;
        result = 1;
        break;
    case 193:
        if (mPLAY.mWorldInfo.mZone175TypeState[3][4] != 1)
            goto LABEL_94;
        result = 1;
        break;
    default:
    LABEL_94:
        result = 0;
        break;
    }
    return result;
}

int NPCUI::ReturnZone267TypeZoneNumber()
{
    int tLevel = mMYINFO.mAvatarInfo.aLevel2;

    if (mMYINFO.mAvatarInfo.aLevel2 == 12)// || mMYINFO.mAvatarInfo.aRebirth > 0
        return 267;

    return 0;
}

int NPCUI::CheckPossibleEnter267TypeZoneNumber()
{
    int tLevel = mMYINFO.mAvatarInfo.aLevel2;


    //if (tLevel >= 70 && tLevel <= 112)
    //{
    //	if (mPLAY.mWorldInfo.mZone267TypeState[0] == 1)
    //		return 1;
    //	return 0;
    //}
    //if (tLevel >= 113 && tLevel <= 145)
    //{
    //	if (mPLAY.mWorldInfo.mZone267TypeState[1] == 1)
    //		return 1;
    //	return 0;
    //}
    if (mMYINFO.mAvatarInfo.aLevel2 == 12 )
    {
        if (mPLAY.mWorldInfo.mZone267TypeState[0] == 1)
            return 1;
        return 0;
    }
    return 0;
}

int NPCUI::ReturnZone241TypeZoneNumber()
{
    int result;

    if (mMYINFO.uUserSort >= 10)
    {
        switch (mMYINFO.mAvatarInfo.aRebirth)
        {
        case 1:
        	result = 241;
        	break;
        case 2:
        	result = 242;
        	break;
        case 3:
        	result = 243;
        	break;
        case 4:
        	result = 244;
        	break;
        case 5:
        	result = 245;
        	break;
        case 6:
        	result = 246;
        	break;
        case 7:
            result = 247;
            break;
        case 8:
            result = 248;
            break;
        case 9:
            result = 249;
            break;
        case 0xA:
            result = 292;
            break;
        case 0xB:
            result = 293;
            break;
        case 0xC:
            result = 294;
            break;
        default:
            goto LABEL_30;
        }
    }
    else if (mMYINFO.mAvatarInfo.aLifeOrDeath <= 0)
    {
    LABEL_30:
        result = 0;
    }
    else
    {
        switch (mMYINFO.mAvatarInfo.aRebirth)
        {
		case 1:
			result = 241;
			break;
		case 2:
			result = 242;
			break;
		case 3:
			result = 243;
			break;
		case 4:
			result = 244;
			break;
		case 5:
			result = 245;
			break;
		case 6:
			result = 246;
			break;
        case 7:
            result = 247;
            break;
        case 8:
            result = 248;
            break;
        case 9:
            result = 249;
            break;
        case 10:
            result = 292;
            break;
        case 11:
            result = 293;
            break;
        case 12:
            result = 294;
            break;
        default:
            goto LABEL_30;
        }
    }
    return result;
}
void NPCUI::LBUTTONUP000(int uX, int uY)
{
    int sX, sY;
    char* tstr;
    int i;

    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[406]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[406]) / 2;
    for (i = 0; i < 10; ++i)
    {
        if (mIsClick[i])
        {
            mIsClick[i] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[408], mX + 12, mY + 22 * i + 7, uX, uY))
            {
                switch (mChoice[i])
                {
                case 1:
                    NPCUI::LButtonup001();
                    break;
                case 2:
                    break;
                case 3:
                    NPCUI::LButtonup003();
                    break;
                case 4:
                    NPCUI::LButtonup004();
                    break;
                case 5:
                    NPCUI::LButtonup005();
                    break;
                case 6:
                    NPCUI::LButtonup006();
                    break;
                case 7:
                    NPCUI::LButtonup007();
                    break;
                case 8:
                    NPCUI::LButtonup008();
                    break;
                case 9:
                    NPCUI::LButtonup009();
                    break;
                case 10:
                    mMakeItemSort = 0;
                    NPCUI::LButtonup010();
                    break;
                case 11:
                    NPCUI::LButtonup011();
                    break;
                case 12:
                    NPCUI::LButtonup012();
                    break;
                case 13:
                    NPCUI::LButtonup013();
                    break;
                case 14:
                    NPCUI::LButtonup014();
                    break;
                case 15:
                    NPCUI::LButtonup015();
                    break;
                case 16:
                    NPCUI::LButtonup016();
                    break;
                case 17:
                    NPCUI::LButtonup017();// Craft Skill Elder
                    break;
                case 18:
                    NPCUI::LButtonup018();
                    break;
                case 19:
                    NPCUI::LButtonup019();
                    break;
                case 20:
                    NPCUI::LButtonup020();
                    break;
                case 21:
                    NPCUI::LButtonup021(1, 0);
                    break;
                case 22:
                    NPCUI::LButtonup022();
                    break;
                case 23:
                    NPCUI::LButtonup023();
                    break;
                case 24:
                    break;
                case 25:
                    NPCUI::LButtonup025();
                    break;
                case 26:
                    NPCUI::LButtonup026();
                    break;
                case 27:
                    NPCUI::LButtonup027();
                    break;
                case 28:
                    NPCUI::LButtonup028();
                    break;
                case 29:
                    NPCUI::LButtonup029();
                    break;
                case 30:
                    NPCUI::LButtonup030();
                    break;
                case 33:
                    NPCUI::LButtonup033();
                    break;
                case 34:
                    NPCUI::LButtonup034();
                    break;
                case 35:
                    NPCUI::LButtonup035();
                    break;
                case 36:
                    NPCUI::LButtonup036();
                    break;
                case 37:
                    NPCUI::LButtonup037();
                    break;
                case 38:
                    NPCUI::LButtonup038();
                    break;
                case 39:
                    NPCUI::LButtonup039();
                    break;
                case 40:
                    NPCUI::LButtonup040();
                    break;
                case 41:
                    NPCUI::LButtonup041();// Craft Pet Trader Nungsi 
                    break;
                case 42:
                    NPCUI::LButtonup042();
                    break;
                case 43:
                    NPCUI::LButtonup043();
                    break;
                case 44:
                    NPCUI::LButtonup044();
                    break;
                case 45:
                    NPCUI::LButtonup045();
                    break;
                case 46:
                    NPCUI::LButtonup046();
                    break;
                case 47:
                    NPCUI::LButtonup047();
                    break;
                case 48:
                    NPCUI::LButtonup048();
                    break;
                case 49:
                    NPCUI::LButtonup049();
                    break;
                case 50:
                    NPCUI::LButtonup050();
                    break;
                case 51:
                    NPCUI::LButtonup051();
                    break;
                case 52:
                    NPCUI::LButtonup052();
                    break;
                case 53:
                    NPCUI::LButtonup053();
                    break;
                case 54:
                    NPCUI::LButtonup054();
                    break;
                case 55:
                    NPCUI::LButtonup055();
                    break;
                case 56:
                    NPCUI::LButtonup056();
                    break;
                case 58:
                    mMakeItemSort = 2;
                    NPCUI::LButtonup010();
                    break;
                case 59:
                    NPCUI::LButtonup059();
                    break;
                case 61:
                    NPCUI::LButtonup061();
                    break;
                case 62:
                    NPCUI::LButtonup062();
                    break;
                case 63:
                    NPCUI::LButtonup063();
                    break;
                case 64:
                    NPCUI::LButtonup064();
                    break;
                case 66:
                    NPCUI::LButtonup066();// Craft Begar
                    break;
                case 67:
                    NPCUI::LButtonup067();
                    break;
                case 68:
                    NPCUI::LButtonup068();// Craft 3 Tailor
                    break;
                case 69:
                    NPCUI::LButtonup069();
                    break;
                case 70:
                    NPCUI::LButtonup070();// Craft 2 Tailor
                    break;
                case 71:
                    mMakeItemSort = 3;
                    NPCUI::LButtonup010();
                    break;
                case 72:
                    NPCUI::LButtonup072();
                    break;
                case 73:
                    NPCUI::LButtonup073();
                    break;
                case 75:
                    NPCUI::LButtonup075();
                    break;
                case 77:
                    NPCUI::LButtonup077();
                    break;
                default:
                    return;
                }
                return;
            }
        }
    }
}

void NPCUI::LButtonup001()
{
    int i;

    if (mNPCSpeechIndex != 5)
    {
        for (i = 0; i < 5 && mNPCSpeechNum[i]; ++i)
            ;
        if (i == 5)
        {
            mNPCSpeechIndex = 5;
        }
        else
        {
            do
            {
                mNPCSpeechIndex = rand() % 5;
            } while (mNPCSpeechNum[mNPCSpeechIndex]);
            mNPCSpeechNum[mNPCSpeechIndex] = 1;
        }
    }
}
void NPCUI::LButtonup003()
{
    NPCUI::Off();
}
void NPCUI::LButtonup004()
{
    char* v1;
    int v2;
    float tCoord[3];
    int tZoneNumber;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        tZoneNumber = 0;
        if (mMYINFO.mAvatarInfo.aTribe)
        {
            if (mMYINFO.mAvatarInfo.aTribe == 1)
            {
                tZoneNumber = 72;
            }
            else if (mMYINFO.mAvatarInfo.aTribe == 2)
            {
                tZoneNumber = 73;
            }
        }
        else
        {
            tZoneNumber = 71;
        }
        if (tZoneNumber)
        {
            if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, tZoneNumber, tCoord))
            {
                mZONEMOVEINFO.SetFirstCoord(tZoneNumber, tCoord);
            }
            if (!mMYINFO.mMoveZoneState)
            {
                mMYINFO.mMoveZoneState = 1;
                mMYINFO.mMoveZoneSort = 10;
                mMYINFO.mMoveZoneValue = 0;
                mMYINFO.mNextZoneNumber = tZoneNumber;
                memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
                mMYINFO.mAction.aType = 0;
                mMYINFO.mAction.aSort = 1;
                mMYINFO.mAction.aFrame = 0.0;
                mMYINFO.mAction.aLocation[0] = tCoord[0];
                mMYINFO.mAction.aLocation[1] = tCoord[1];
                mMYINFO.mAction.aLocation[2] = tCoord[2];
                mMYINFO.mAction.aFront = (rand() % 360);
                mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
                mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, tZoneNumber);
            }
            NPCUI::Off();
        }
    }
    else
    {
        v2 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v2);
    }
}
void NPCUI::LButtonup005()
{
    char* v1;
    int v2;
    int i;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        mWorkId = 5;
        for (i = 0; i < 100; ++i)
            mIsClick[i] = 0;
        mQuestData[4] = 0;
        mSkillIndex = 0;
    }
    else
    {
        v2 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v2);
    }
}
void NPCUI::LButtonup006()
{
    char* v1;
    int v2;
    int i;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        mWorkId = 6;
        for (i = 0; i < 100; ++i)
            mIsClick[i] = 0;
        mStorePage = 0;
        mINVENUI.Set();
    }
    else
    {
        v2 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v2);
    }
}
void NPCUI::LButtonup007()
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int i;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        if (!strcmp(mMYINFO.mAvatarInfo.aGuildName, ""))
        {
            if (mMYINFO.mAvatarInfo.aLevel1 >= 30)
            {
                if (mMYINFO.mAvatarInfo.aMoney >= 10000000)
                {
                    mWorkId = 7;
                    for (i = 0; i < 100; ++i)
                        mIsClick[i] = 0;
                    mEDITBOX.Set(7);
                    SetWindowTextA(mEDITBOX.mDATA[6], "");
                }
                else
                {
                    v8 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(387);
                    mBASICUI.Insert1(v4, v8);
                }
            }
            else
            {
                v7 = mFONTCOLOR.mData[44];
                v3 = mMESSAGE.Return(386);
                mBASICUI.Insert1(v3, v7);
            }
        }
        else
        {
            v6 = mFONTCOLOR.mData[44];
            v2 = mMESSAGE.Return(385);
            mBASICUI.Insert1(v2, v6);
        }
    }
    else
    {
        v5 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v5);
    }
}

void NPCUI::LButtonup008()
{
    char* v1;
    int v2;
    int i;

    if (mNPCInfo->nType == 13 && mMYINFO.mAvatarInfo.aLevel1 < 113)
    {
        v2 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(1461);
        mBASICUI.Insert1(v1, v2);
    }
    else
    {
        mWorkId = 8;
        for (i = 0; i < 100; ++i)
            mIsClick[i] = 0;
        mShopTotalPage = 3;
        mShopPresentPage = 0;
        mINVENUI.Set();
    }
}

void NPCUI::LButtonup009()
{
    char* tstr;
    int tstrlen;
    int i, j, k;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        if (mMYINFO.mAvatarInfo.aTribe == 3)
        {
            tstr = mMESSAGE.Return(261);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        }
        else if (mMYINFO.mAvatarInfo.aLevel1 >= 113)
        {
            if (mUTIL.ReturnTribePoint(mMYINFO.mAvatarInfo.aTribe) >= 100)
            {
                if (mPLAY.ReturnLowOrHighTribe(mMYINFO.mAvatarInfo.aTribe) == 1)
                {
                    tstr = mMESSAGE.Return(264);
                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                }
                else if (mPLAY.ReturnLowOrHighTribe(mMYINFO.mAvatarInfo.aTribe) == 2)
                {
                    tstr = mMESSAGE.Return(811);
                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                }
                else if (mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe))
                {
                    tstr = mMESSAGE.Return(265);
                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                }
                else
                {
                    if (!mPLAY.mWorldInfo.mTribeVoteState[mMYINFO.mAvatarInfo.aTribe])
                    {
                        goto LABEL_22;
                    }
                    for (i = 0; i < 10 && strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][i], mMYINFO.mAvatarInfo.aName); ++i)
                    {
                        ;
                    }
                    if (i < 10)
                    {
                        tstr = mMESSAGE.Return(844);
                        mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                    }
                    else
                    {
                    LABEL_22:
                        if (!strcmp(mMYINFO.mAvatarInfo.aGuildName, ""))
                        {
                            if (!strcmp(mMYINFO.mAvatarInfo.aTeacher, ""))
                            {
                                if (!strcmp(mMYINFO.mAvatarInfo.aStudent, ""))
                                {
                                    for (j = 0; j < 10 && !strcmp(mMYINFO.mAvatarInfo.aFriend[j], ""); ++j)
                                        ;
                                    if (j >= 10)
                                    {
                                        if (mPLAY.CheckPossibleChangeToTribe4() == mMYINFO.mAvatarInfo.aTribe)
                                        {
                                            NPCUI::Off();
                                            tstr = mMESSAGE.Return(270);
                                            mCBOXUI.Set(5, tstr, "");
                                        }
                                        else
                                        {
                                            tstr = mMESSAGE.Return(1134);
                                            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                        }
                                    }
                                    else
                                    {
                                        tstr = mMESSAGE.Return(269);
                                        mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                    }
                                }
                                else
                                {
                                    tstr = mMESSAGE.Return(268);
                                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                }
                            }
                            else
                            {
                                tstr = mMESSAGE.Return(267);
                                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                            }
                        }
                        else
                        {
                            tstr = mMESSAGE.Return(266);
                            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                        }
                    }
                }
            }
            else
            {
                tstr = mMESSAGE.Return(263);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            }
        }
        else
        {
            tstr = mMESSAGE.Return(262);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        }

    }
    else
    {
        tstr = mMESSAGE.Return(143);
        mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
    }
}

void NPCUI::LButtonup010()// Crafting Tailor BlackSmith
{
    int i;

    mWorkId = 10;
    for (i = 0; i < 100; ++i)
    {
        mIsClick[i] = 0;
        mMakeItemInfo[i][0] = 0;
        mMakeItemInfo[i][1] = 0;
        mMakeItemInfo[i][2] = 0;
        mMakeItemInfo[i][3] = 0;
        mMakeItemInfo[i][4] = 0;
        mMakeItemInfo[i][5] = 0;
    }
    switch (mMakeItemSort)
    {
    case 0:// 4x Mats 3%=Random Mats
        mMakeItemTotalPage = 4;
        mMakeItemPresentPage = 0;
        mMakeItemInfo[0][0] = 1019;
        mMakeItemInfo[0][1] = 1019;
        mMakeItemInfo[0][2] = 1019;
        mMakeItemInfo[0][3] = 1019;
        mMakeItemInfo[0][4] = 0;
        mMakeItemInfo[0][5] = 0;
        // 4x Mats 15%=PUS 6%
        mMakeItemInfo[1][0] = 1023;
        mMakeItemInfo[1][1] = 1023;
        mMakeItemInfo[1][2] = 1023;
        mMakeItemInfo[1][3] = 1023;
        mMakeItemInfo[1][4] = 1437;
        mMakeItemInfo[1][5] = 0;
        // 4xBlue Jade Stone=Upgrade Stone
        mMakeItemInfo[2][0] = 983;
        mMakeItemInfo[2][1] = 983;
        mMakeItemInfo[2][2] = 983;
        mMakeItemInfo[2][3] = 983;
        mMakeItemInfo[2][4] = 984;
        mMakeItemInfo[2][5] = 0;
        // 4xPUS=Upgrade Perfect Stone 3%
        mMakeItemInfo[3][0] = 1437;
        mMakeItemInfo[3][1] = 1437;
        mMakeItemInfo[3][2] = 1437;
        mMakeItemInfo[3][3] = 1437;
        mMakeItemInfo[3][4] = 633;
        mMakeItemInfo[3][5] = 0;
        // Ultimate Cape=War Lord Cape
        mMakeItemInfo[4][0] = 984;
        mMakeItemInfo[4][1] = 984;
        mMakeItemInfo[4][2] = 984;
        mMakeItemInfo[4][3] = 1401;
        mMakeItemInfo[4][4] = 1403;
        mMakeItemInfo[4][5] = 0;
        // War Lord Cape=God Warrior Cape
        mMakeItemInfo[5][0] = 984;
        mMakeItemInfo[5][1] = 984;
        mMakeItemInfo[5][2] = 984;
        mMakeItemInfo[5][3] = 1403;
        mMakeItemInfo[5][4] = 1404;
        mMakeItemInfo[5][5] = 0;
        // God Warrior Cape=Zeus Cape
        mMakeItemInfo[6][0] = 984;
        mMakeItemInfo[6][1] = 984;
        mMakeItemInfo[6][2] = 984;
        mMakeItemInfo[6][3] = 1404;
        mMakeItemInfo[6][4] = 1406;
        mMakeItemInfo[6][5] = 0;
        // Deco V0=Deco V1 Mask
        mMakeItemInfo[7][0] = 2383;
        mMakeItemInfo[7][1] = 2383;
        mMakeItemInfo[7][2] = 2150;
        mMakeItemInfo[7][3] = mMYINFO.mAvatarInfo.aPreviousTribe + 101;
        mMakeItemInfo[7][4] = 240;
        mMakeItemInfo[7][5] = 0;
        // Deco V0=Deco V1 Daiko
        mMakeItemInfo[8][0] = 2383;
        mMakeItemInfo[8][1] = 2383;
        mMakeItemInfo[8][2] = 2150;
        mMakeItemInfo[8][3] = mMYINFO.mAvatarInfo.aPreviousTribe + 107;
        mMakeItemInfo[8][4] = 243;
        mMakeItemInfo[8][5] = 0;
        // Deco V0=Deco V1 Gaunlet
        mMakeItemInfo[9][0] = 2383;
        mMakeItemInfo[9][1] = 2383;
        mMakeItemInfo[9][2] = 2150;
        mMakeItemInfo[9][3] = mMYINFO.mAvatarInfo.aPreviousTribe + 110;
        mMakeItemInfo[9][4] = 246;
        mMakeItemInfo[9][5] = 0;
        // Deco V1 Legendary Glasses=Deco V2 Legendary Glasses
        mMakeItemInfo[10][0] = 2383;
        mMakeItemInfo[10][1] = 2383;
        mMakeItemInfo[10][2] = 2150;
        mMakeItemInfo[10][3] = 240;
        mMakeItemInfo[10][4] = 241;
        mMakeItemInfo[10][5] = 0;
        // Deco V1 Legendary Fauld=Deco V2 Legendary Fauld
        mMakeItemInfo[11][0] = 2383;
        mMakeItemInfo[11][1] = 2383;
        mMakeItemInfo[11][2] = 2150;
        mMakeItemInfo[11][3] = 243;
        mMakeItemInfo[11][4] = 244;
        mMakeItemInfo[11][5] = 0;
        // Deco V1 Legendary Gloves=Deco V2 Legendary Gloves
        mMakeItemInfo[12][0] = 2383;
        mMakeItemInfo[12][1] = 2383;
        mMakeItemInfo[12][2] = 2150;
        mMakeItemInfo[12][3] = 246;
        mMakeItemInfo[12][4] = 247;
        mMakeItemInfo[12][5] = 0;
        // Deco V2 Legendary Glasses=Deco V3 Legendary Glasses
        mMakeItemInfo[13][0] = 2383;
        mMakeItemInfo[13][1] = 2383;
        mMakeItemInfo[13][2] = 2150;
        mMakeItemInfo[13][3] = 241;
        mMakeItemInfo[13][4] = 242;
        mMakeItemInfo[13][5] = 0;
        // Deco V2 Legendary Fauld=Deco V3 Legendary Fauld
        mMakeItemInfo[14][0] = 2383;
        mMakeItemInfo[14][1] = 2383;
        mMakeItemInfo[14][2] = 2150;
        mMakeItemInfo[14][3] = 244;
        mMakeItemInfo[14][4] = 245;
        mMakeItemInfo[14][5] = 0;
        // Deco V2 Legendary Gloves=Deco V3 Legendary Gloves
        mMakeItemInfo[15][0] = 2383;
        mMakeItemInfo[15][1] = 2383;
        mMakeItemInfo[15][2] = 2150;
        mMakeItemInfo[15][3] = 247;
        mMakeItemInfo[15][4] = 248;
        mMakeItemInfo[15][5] = 0;
        break;

    case 1:
        mMakeItemTotalPage = 22;
        mMakeItemPresentPage = 20;
        mMakeItemInfo[20][0] = 755;
        mMakeItemInfo[20][1] = 755;
        mMakeItemInfo[20][2] = 755;
        mMakeItemInfo[20][3] = 755;
        mMakeItemInfo[20][4] = 755;
        mMakeItemInfo[20][5] = 755;

        mMakeItemInfo[21][0] = 755;
        mMakeItemInfo[21][1] = 755;
        mMakeItemInfo[21][2] = 755;
        mMakeItemInfo[21][3] = 755;
        mMakeItemInfo[21][4] = 755;
        mMakeItemInfo[21][5] = 755;
        break;//CRAFT_BLACKSMITH_END

    case 2:// Wings V0
        mMakeItemTotalPage = 44;
        mMakeItemPresentPage = 40;
        mMakeItemInfo[40][0] = 695;
        mMakeItemInfo[40][1] = 695;
        mMakeItemInfo[40][2] = 695;
        mMakeItemInfo[40][3] = 0;
        mMakeItemInfo[40][4] = 0;
        mMakeItemInfo[40][5] = 0;
        // White Feather=Black Feather
        mMakeItemInfo[41][0] = 695;
        mMakeItemInfo[41][1] = 695;
        mMakeItemInfo[41][2] = 695;
        mMakeItemInfo[41][3] = 695;
        mMakeItemInfo[41][4] = 696;
        mMakeItemInfo[41][5] = 0;
        // Black Feather=Gold Feather
        mMakeItemInfo[42][0] = 696;
        mMakeItemInfo[42][1] = 696;
        mMakeItemInfo[42][2] = 696;
        mMakeItemInfo[42][3] = 696;
        mMakeItemInfo[42][4] = 698;
        mMakeItemInfo[42][5] = 0;
        // Blue Dragon Wings V2==Yellow Phoenix Wings V1
        mMakeItemInfo[43][0] = 698;
        mMakeItemInfo[43][1] = 698;
        mMakeItemInfo[43][2] = 1473;
        mMakeItemInfo[43][3] = mMYINFO.mAvatarInfo.aPreviousTribe + 213;
        mMakeItemInfo[43][4] = mMYINFO.mAvatarInfo.aPreviousTribe + 219;
        mMakeItemInfo[43][5] = 0;
        // Yellow Phoenix Wings V1==Blue Phoenix Wings Wings V2
        mMakeItemInfo[44][0] = 698;
        mMakeItemInfo[44][1] = 698;
        mMakeItemInfo[44][2] = 1473;
        mMakeItemInfo[44][3] = mMYINFO.mAvatarInfo.aPreviousTribe + 219;
        mMakeItemInfo[44][4] = mMYINFO.mAvatarInfo.aPreviousTribe + 222;
        mMakeItemInfo[44][5] = 0;
        // Blue Phoenix Wings V2==Golden Sparrow Wings V3
        mMakeItemInfo[45][0] = 698;
        mMakeItemInfo[45][1] = 698;
        mMakeItemInfo[45][2] = 1473;
        mMakeItemInfo[45][3] = mMYINFO.mAvatarInfo.aPreviousTribe + 222;
        mMakeItemInfo[45][4] = mMYINFO.mAvatarInfo.aPreviousTribe + 225;
        mMakeItemInfo[45][5] = 0;
        // Golden Sparrow Wings V3==Suzaku Wings V4
        mMakeItemInfo[46][0] = 698;
        mMakeItemInfo[46][1] = 698;
        mMakeItemInfo[46][2] = 1473;
        mMakeItemInfo[46][3] = mMYINFO.mAvatarInfo.aPreviousTribe + 225;
        mMakeItemInfo[46][4] = mMYINFO.mAvatarInfo.aPreviousTribe + 228;
        mMakeItemInfo[46][5] = 0;
        // Suzaku Wings V4 ==Dragon Wings V5
        mMakeItemInfo[47][0] = 698;
        mMakeItemInfo[47][1] = 698;
        mMakeItemInfo[47][2] = 1473;
        mMakeItemInfo[47][3] = mMYINFO.mAvatarInfo.aPreviousTribe + 228;
        mMakeItemInfo[47][4] = mMYINFO.mAvatarInfo.aPreviousTribe + 231;
        mMakeItemInfo[47][5] = 0;
        break;

    case 3:// Produce Pet M1
        mMakeItemTotalPage = 63;
        mMakeItemPresentPage = 60;
        mMakeItemInfo[60][0] = 996;
        mMakeItemInfo[60][1] = 996;
        mMakeItemInfo[60][2] = 996;
        mMakeItemInfo[60][3] = 1235;
        mMakeItemInfo[60][4] = 524;
        mMakeItemInfo[60][5] = 0;
        // Produce Pet M15
        mMakeItemInfo[61][0] = 1845;
        mMakeItemInfo[61][1] = 1845;
        mMakeItemInfo[61][2] = 1845;
        mMakeItemInfo[61][3] = 1235;
        mMakeItemInfo[61][4] = 522;
        mMakeItemInfo[61][5] = 0;
        // Produce Pet G1
        mMakeItemInfo[62][0] = 2168;
        mMakeItemInfo[62][1] = 2168;
        mMakeItemInfo[62][2] = 2168;
        mMakeItemInfo[62][3] = 1235;
        mMakeItemInfo[62][4] = 525;
        mMakeItemInfo[62][5] = 0;
        // Produce Amulet Pet G12
		mMakeItemInfo[63][0] = 2168;
		mMakeItemInfo[63][1] = 2168;
		mMakeItemInfo[63][2] = 2150;
		mMakeItemInfo[63][3] = 2150;
		mMakeItemInfo[63][4] = 2169;
		mMakeItemInfo[63][5] = 0;
        break;

    }

    mINVENUI.Set();
}
void NPCUI::LButtonup011()
{
    int i;

    mWorkId = 11;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
}
void NPCUI::LButtonup012()
{
    int i;

    mWorkId = 12;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}

void NPCUI::LButtonup013()
{
    int i;

    mWorkId = 13;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
    mUseTalismanNum = 0;
}
void NPCUI::LButtonup014()
{
    int i;

    mWorkId = 14;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}

void NPCUI::LButtonup015()
{
    char* v1;
    char* v2;
    char* v3;
    int v4;
    int v5;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        if (mMYINFO.mAvatarInfo.aLevel1 <= 39)
        {
            v3 = mMESSAGE.Return(600);
            mCBOXUI.Set(27, v3, "");
            NPCUI::Off();
        }
        else
        {
            v5 = mFONTCOLOR.mData[44];
            v2 = mMESSAGE.Return(599);
            mBASICUI.Insert1(v2, v5);
        }
    }
    else
    {
        v4 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v4);
    }
}

void NPCUI::LButtonup016()
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
    int v5;
    int v6;
    int v7;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        if (!strcmp(mMYINFO.mAvatarInfo.aGuildName, ""))
        {
            v6 = mFONTCOLOR.mData[44];
            v2 = mMESSAGE.Return(565);
            mBASICUI.Insert1(v2, v6);
        }
        else if (mMYINFO.mAvatarInfo.aGuildRole)
        {
            v7 = mFONTCOLOR.mData[44];
            v3 = mMESSAGE.Return(566);
            mBASICUI.Insert1(v3, v7);
        }
        else
        {
            v4 = mMESSAGE.Return(567);
            mCBOXUI.Set(26, v4, "");
            NPCUI::Off();
        }
    }
    else
    {
        v5 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v5);
    }
}

void NPCUI::LButtonup017()// Craft Skill Elder
{

    int i;

    mWorkId = 17;
    for (i = 0; i < 100; ++i)
    {// Produce Skill 8th Box
        mIsClick[i] = 0;
        mMakeItemTotalPage = 1;
        mMakeItemInfo[0][0] = 2150;
        mMakeItemInfo[0][1] = 2150;
        mMakeItemInfo[0][2] = 2150;
        mMakeItemInfo[0][3] = 2150;
        mMakeItemInfo[0][4] = 717;
        mMakeItemInfo[0][5] = 0;
        
        mMakeItemInfo[1][0] = 0;
        mMakeItemInfo[1][1] = 0;
        mMakeItemInfo[1][2] = 0;
        mMakeItemInfo[1][3] = 0;
        mMakeItemInfo[1][4] = 0;
        mMakeItemInfo[1][5] = 0;
        
        mMakeItemInfo[2][0] = 0;
        mMakeItemInfo[2][1] = 0;
        mMakeItemInfo[2][2] = 0;
        mMakeItemInfo[2][3] = 0;
        mMakeItemInfo[2][4] = 0;
        mMakeItemInfo[2][5] = 0;
        mMakeItemPresentPage = 0;
        mINVENUI.Set();
    }
}
void NPCUI::LButtonup018()
{
    int i;

    mWorkId = 18;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}

void NPCUI::LButtonup019()
{
    int i;

    mWorkId = 19;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
    tRemovGemIndex = 0;
}

void NPCUI::LButtonup020()
{
    char* v1;
    int v2;
    int i;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        mWorkId = 20;
        for (i = 0; i < 100; ++i)
            mIsClick[i] = 0;
        //mTRANSFER.T_GET_ZONE_CONNECT_USER_SEND(&mTRANSFER, 84);
        //mTRANSFER.T_GET_ZONE_CONNECT_USER_SEND(&mTRANSFER, 84);
        mUpdateTime = GetTickCount();
    }
    else
    {
        v2 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v2);
    }
}

void NPCUI::LButtonup021(int tSort, int tCash)
{
    int i;

    if (mPossibleGetCashInfo)
    {
        mTRANSFER.T_GET_CASH_ITEM_INFO_SEND();
        mPossibleGetCashInfo = 0;
        mPossibleBuyCashItem = 0;
    }
    if (mUTIL.CheckInfiniteBattleZone())
    {
        mBASICUI.Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
    }
    else
    {
        if (tSort == 1)
        {
            if (!mActive)
            {
                mUI.Off(1);
                mActive = 1;
                mNPCInfo = 0;
                mPage[0] = -1;
                mPage[1] = -1;
                mPage[2] = -1;
                mPage[3] = -1;
            }
            mTRANSFER.T_GET_CASH_SIZE_SEND(1);
        }
        mWorkId = 21;
        for (i = 0; i < 100; ++i)
        {
            mIsClick[i] = 0;
        }
        mCashItemAmount = tCash;
        mCashShopMaxPage = 0;
        mCashShopPage = 0;
        mCashShopIndex = -1;
        mINVENUI.Set();
    }
}

void NPCUI::LButtonup022()
{
    int i;

    mWorkId = 22;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}

void NPCUI::LButtonup023()
{
    int i;

    mWorkId = 23;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}

void NPCUI::LButtonup025()
{
    int i;

    mWorkId = 25;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}
void NPCUI::LButtonup026()
{
    int i;

    mWorkId = 26;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}

void NPCUI::LButtonup027()
{
    int i;

    mWorkId = 27;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mGambleInfo[0] = 0;
    mGambleInfo[1] = -1;
    mGambleInfo[2] = -1;
    mGambleInfo[3] = 0;
    mGambleInfo[4] = 0;
    mGambleInfo[5] = 0;
    mGambleInfo[6] = 0;
    mGambleInfo[7] = 0;
    mGambleInfo[8] = 0;
    mGambleInfo[9] = 0;
}

void NPCUI::LButtonup028()
{
    char* v1;
    char* v2;
    char* v3;
    int v4;
    int v5;
    int v6;
    int i;

    if (mMAIN.mWorldIndex == 40)
    {
        v4 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(110);
        mBASICUI.Insert1(v1, v4);
    }
    else if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        if (mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) == 1)
        {
            mWorkId = 28;
            for (i = 0; i < 100; ++i)
                mIsClick[i] = 0;
            mEDITBOX.Set(17);
            SetWindowTextA(mEDITBOX.mDATA[16], "");
        }
        else
        {
            v6 = mFONTCOLOR.mData[44];
            v3 = mMESSAGE.Return(519);
            mBASICUI.Insert1(v3, v6);
        }
    }
    else
    {
        v5 = mFONTCOLOR.mData[44];
        v2 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v2, v5);
    }
}

void NPCUI::LButtonup029()
{
    char* v1;
    int v2;
    int i;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        mWorkId = 29;
        for (i = 0; i < 100; ++i)
            mIsClick[i] = 0;
    }
    else
    {
        v2 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v2);
    }
}

void NPCUI::LButtonup030()
{
    int i;

    mWorkId = 30;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mPageSort = 0;
    mINVENUI.Set();
}

void NPCUI::LButtonup033()
{
    char* v1;
    char* v2;
    int v3;
    int v4;
    int i;

    switch (mMYINFO.mPresentZoneNumber)
    {
    case 1:
        if (!mMYINFO.mAvatarInfo.aTribe  || mMYINFO.mAvatarInfo.aTribe == mPLAY.ReturnAlliance(0))
        {
            goto LABEL_15;
        }
        goto LABEL_14;
    case 6:
        if (mMYINFO.mAvatarInfo.aTribe == 1 || mMYINFO.mAvatarInfo.aTribe == mPLAY.ReturnAlliance(1))
        {
            goto LABEL_15;
        }
        goto LABEL_14;
    case 11:
        if (mMYINFO.mAvatarInfo.aTribe == 2 || mMYINFO.mAvatarInfo.aTribe == mPLAY.ReturnAlliance(2))
        {
            goto LABEL_15;
        }
        goto LABEL_14;
    case 37:
        goto LABEL_15;
    case 140:
        if (mMYINFO.mAvatarInfo.aTribe == 3 || mMYINFO.mAvatarInfo.aTribe == mPLAY.ReturnAlliance(3))
        {
        LABEL_15:
            if (mMYINFO.mAvatarInfo.aSearchAndBuyDate >= 1)
            {
                mWorkId = 33;
                for (i = 0; i < 100; ++i)
                    mIsClick[i] = 0;
                mItemSearchInfo[0] = 0;
                mItemSearchInfo[1] = 0;
                mItemSearchInfo[2] = 0;
                mItemSearchInfo[3] = 1;
                mItemSearchInfo[4] = 0;
                mItemSearchInfo[5] = -1;
                mItemSearchInfo[6] = 0;
                mItemSearchInfo[7] = 0;
                mINVENUI.Set();
                mTRANSFER.T_PSHOP_ITEM_INFO_SEND(mItemSearchInfo[1], mItemSearchInfo[2]);
            }
            else
            {
                v4 = mFONTCOLOR.mData[44];
                v2 = mMESSAGE.Return(1321);
                mBASICUI.Insert1(v2, v4);
            }
        }
        else
        {
        LABEL_14:
            v3 = mFONTCOLOR.mData[44];
            v1 = mMESSAGE.Return(143);
            mBASICUI.Insert1(v1, v3);
        }
        break;
    default:
        return;
    }
}

void NPCUI::LButtonup034()
{
    char* v1;
    int v2;
    int i;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        mWorkId = 34;
        for (i = 0; i < 100; ++i)
            mIsClick[i] = 0;
        mQuestData[4] = 0;
        mSkillIndex = 0;
    }
    else
    {
        v2 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v2);
    }
}
void NPCUI::LButtonup035()
{
    char* v1;
    char* v2;
    char* v3;
    int v4;
    int v5;
    int v6;
    int i;
    int j;

    if (mMAIN.mWorldIndex == 40)
    {
        v4 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(110);
        mBASICUI.Insert1(v1, v4);
    }
    else if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        if (mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) == 1 || mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) == 2)
        {
            mWorkId = 35;
            for (i = 0; i < 100; ++i)
                mIsClick[i] = 0;
            for (j = 0; j < 10; ++j)
                mTribeWeaponIndex[j] = 0;
            switch (mMYINFO.mAvatarInfo.aTribe)
            {
            case 0:
                mTribeWeaponIndex[0] = 1075;
                mTribeWeaponIndex[1] = 591;
                mTribeWeaponIndex[2] = 590;
                break;
            case 1:
                mTribeWeaponIndex[0] = 1076;
                mTribeWeaponIndex[1] = 591;
                mTribeWeaponIndex[2] = 590;
                break;
            case 2:
                mTribeWeaponIndex[0] = 1077;
                mTribeWeaponIndex[1] = 591;
                mTribeWeaponIndex[2] = 590;
                break;
            case 3:
                mTribeWeaponIndex[0] = 1078;
                mTribeWeaponIndex[1] = 591;
                mTribeWeaponIndex[2] = 590;
                break;
            default:
                break;
            }
            mTribeWeaponIndex[3] = 665;
        }
        else
        {
            v6 = mFONTCOLOR.mData[44];
            v3 = mMESSAGE.Return(785);
            mBASICUI.Insert1(v3, v6);
        }
    }
    else
    {
        v5 = mFONTCOLOR.mData[44];
        v2 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v2, v5);
    }
}

void NPCUI::LButtonup036()
{
    char* v1;
    char* v2;
    int v3;
    int v4;
    int i;

    if (mMYINFO.mAvatarInfo.aLevel1 >= 113)
    {
        if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
        {
            mWorkId = 36;
            for (i = 0; i < 100; ++i)
                mIsClick[i] = 0;
        }
        else
        {
            v4 = mFONTCOLOR.mData[44];
            v2 = mMESSAGE.Return(143);
            mBASICUI.Insert1(v2, v4);
        }
    }
    else
    {
        v3 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(879);
        mBASICUI.Insert1(v1, v3);
    }
}
void NPCUI::LButtonup037()
{
    char* v1;
    char* v2;
    int v3;
    int v4;
    int i;

    if (mMYINFO.mAvatarInfo.aTitle % 100 < 12)
    {
        if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
        {
            if (mMYINFO.mAvatarInfo.aTitle <= 400)
            {
                if (mMYINFO.mAvatarInfo.aTitle <= 300)
                {
                    if (mMYINFO.mAvatarInfo.aTitle <= 200)
                    {
                        if (mMYINFO.mAvatarInfo.aTitle <= 100)
                            mMYINFO.iTribeCallType = mMYINFO.mAvatarInfo.aTitle > 0;
                        else
                            mMYINFO.iTribeCallType = 2;
                    }
                    else
                    {
                        mMYINFO.iTribeCallType = 3;
                    }
                }
                else
                {
                    mMYINFO.iTribeCallType = 4;
                }
            }
            else
            {
                mMYINFO.iTribeCallType = 5;
            }
            switch (mMYINFO.mAvatarInfo.aTitle % 100)
            {
            case 0:
                mAvatarTitleCost = 800;
                goto LABEL_27;
            case 1:
                mAvatarTitleCost = 1700;
                goto LABEL_27;
            case 2:
                mAvatarTitleCost = 2500;
                goto LABEL_27;
            case 3:
                mAvatarTitleCost = 3400;
                goto LABEL_27;
            case 4:
                mAvatarTitleCost = 4200;
                goto LABEL_27;
            case 5:
                mAvatarTitleCost = 5100;
                goto LABEL_27;
            case 6:
                mAvatarTitleCost = 5900;
                goto LABEL_27;
            case 7:
                mAvatarTitleCost = 6800;
                goto LABEL_27;
            case 8:
                mAvatarTitleCost = 7600;
                goto LABEL_27;
            case 9:
                mAvatarTitleCost = 8500;
                goto LABEL_27;
            case 10:
                mAvatarTitleCost = 9300;
                goto LABEL_27;
            case 11:
                mAvatarTitleCost = 10000;
            LABEL_27:
                mWorkId = 37;
                for (i = 0; i < 100; ++i)
                    mIsClick[i] = 0;
                break;
            default:
                return;
            }
        }
        else
        {
            v4 = mFONTCOLOR.mData[44];
            v2 = mMESSAGE.Return(143);
            mBASICUI.Insert1(v2, v4);
        }
    }
    else
    {
        v3 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(940);
        mBASICUI.Insert1(v1, v3);
    }
}

void NPCUI::LButtonup038()
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int i;

    if (mMYINFO.mAvatarInfo.aUpgradeValue < 96)
    {
        if (mMYINFO.mAvatarInfo.aKillOtherTribe >= 100)
        {
            if (mMYINFO.mAvatarInfo.aMoney >= 1000000)
            {
                if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
                {
                    mWorkId = 38;
                    for (i = 0; i < 100; ++i)
                        mIsClick[i] = 0;
                }
                else
                {
                    v8 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(143);
                    mBASICUI.Insert1(v4, v8);
                }
            }
            else
            {
                v7 = mFONTCOLOR.mData[44];
                v3 = mMESSAGE.Return(1142);
                mBASICUI.Insert1(v3, v7);
            }
        }
        else
        {
            v6 = mFONTCOLOR.mData[44];
            v2 = mMESSAGE.Return(1141);
            mBASICUI.Insert1(v2, v6);
        }
    }
    else
    {
        v5 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(1140);
        mBASICUI.Insert1(v1, v5);
    }
}
void NPCUI::LButtonup039()
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
    char* v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int i;

    if (mMYINFO.mAvatarInfo.aLevel2 >= 12)//Max aRebirth
    {
        if (mMYINFO.mAvatarInfo.aGeneralExperience2 >= 1481117817)
        {
            if (mMYINFO.mAvatarInfo.aKillOtherTribe >= 10000)
            {
                if (mMYINFO.mAvatarInfo.aRebirth < 6)
                {
                    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
                    {
                        mWorkId = 39;
                        for (i = 0; i < 100; ++i)
                            mIsClick[i] = 0;
                    }
                    else
                    {
                        v10 = mFONTCOLOR.mData[44];
                        v5 = mMESSAGE.Return(143);
                        mBASICUI.Insert1(v5, v10);
                    }
                }
                else
                {
                    v9 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(1238);
                    mBASICUI.Insert1(v4, v9);
                }
            }
            else
            {
                v8 = mFONTCOLOR.mData[44];
                v3 = mMESSAGE.Return(1237);
                mBASICUI.Insert1(v3, v8);
            }
        }
        else
        {
            v7 = mFONTCOLOR.mData[44];
            v2 = mMESSAGE.Return(1236);
            mBASICUI.Insert1(v2, v7);
        }
    }
    else
    {
        v6 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(1235);
        mBASICUI.Insert1(v1, v6);
    }
}

void NPCUI::LButtonup040()
{
    char* v1;
    int v2;
    int i;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        mWorkId = 40;
        for (i = 0; i < 100; ++i)
            mIsClick[i] = 0;
    }
    else
    {
        v2 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v2);
    }
}

void NPCUI::LButtonup041()// Craft Pet Trader Nungsi 
{

    int i;

    mWorkId = 41;
    for (i = 0; i < 100; ++i)
    {// Produce Pet M1
        mIsClick[i] = 0;
        mMakeItemTotalPage = 0;
        mMakeItemInfo[0][0] = 996;
        mMakeItemInfo[0][1] = 996;
        mMakeItemInfo[0][2] = 996;
        mMakeItemInfo[0][3] = 1235;
        mMakeItemInfo[0][4] = 524;
        mMakeItemInfo[0][5] = 0;
        // Produce Pet 15
        mMakeItemInfo[1][0] = 1845;
        mMakeItemInfo[1][1] = 1845;
        mMakeItemInfo[1][2] = 1845;
        mMakeItemInfo[1][3] = 1235;
        mMakeItemInfo[1][4] = 522;
        mMakeItemInfo[1][5] = 0;
        // Produce Pet G1
        mMakeItemInfo[2][0] = 2168;
        mMakeItemInfo[2][1] = 2168;
        mMakeItemInfo[2][2] = 2168;
        mMakeItemInfo[2][3] = 1235;
        mMakeItemInfo[2][4] = 525;
        mMakeItemInfo[2][5] = 0;
        // Produce Amulet Pet G12
        mMakeItemInfo[3][0] = 2168;
        mMakeItemInfo[3][1] = 2168;
        mMakeItemInfo[3][2] = 2150;
        mMakeItemInfo[3][3] = 2150;
        mMakeItemInfo[3][4] = 2169;
        mMakeItemInfo[3][5] = 0;
        mMakeItemPresentPage = 0;
        mINVENUI.Set();
    }
}
void NPCUI::LButtonup042()
{
    int i;

    mWorkId = 42;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}
void NPCUI::LButtonup043()
{
    char* v1;
    int v2;
    int i;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        mWorkId = 43;
        for (i = 0; i < 100; ++i)
            mIsClick[i] = 0;
    }
    else
    {
        v2 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v2);
    }
}
void NPCUI::LButtonup044()
{
    char* v1;
    int v2;
    int i;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        mWorkId = 44;
        for (i = 0; i < 100; ++i)
            mIsClick[i] = 0;
    }
    else
    {
        v2 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v2);
    }
}

void NPCUI::LButtonup045()
{
    int i;

    mWorkId = 45;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
}

void NPCUI::LButtonup046()
{
    int i;

    mWorkId = 46;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}

void NPCUI::LButtonup047()
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
    char* v5;
    char* v6;
    char* v7;
    char* v8;
    char* v9;
    char* v10;
    char* v11;
    int v12;
    char* v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int i;
    int j;

    if (mNPCInfo->nTribe - 2 != mMYINFO.mAvatarInfo.aTribe)
    {
        v14 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v14);
        return;
    }
    if (mMYINFO.mAvatarInfo.aTribe != 3)
    {
        v15 = mFONTCOLOR.mData[44];
        v2 = mMESSAGE.Return(1434);
        mBASICUI.Insert1(v2, v15);
        return;
    }
    if (mPLAY.ReturnTribePointForReturnFaction(mMYINFO.mAvatarInfo.aPreviousTribe) == 1)
    {
        goto LABEL_6;
    }
    if (mPLAY.ReturnTribePointForReturnFaction(mMYINFO.mAvatarInfo.aTribe) == 2)
    {
        v17 = mFONTCOLOR.mData[44];
        v4 = mMESSAGE.Return(1460);
        mBASICUI.Insert1(v4, v17);
    }
    else if (mMYINFO.mAvatarInfo.aFactionReturnScroll >= 1)
    {
        if (mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe))
        {
            v19 = mFONTCOLOR.mData[44];
            v6 = mMESSAGE.Return(265);
            mBASICUI.Insert1(v6, v19);
        }
        else
        {
            if (!mPLAY.mWorldInfo.mTribeVoteState[mMYINFO.mAvatarInfo.aTribe])
            {
                goto LABEL_20;
            }
            for (i = 0; i < 10 && strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][i], mMYINFO.mAvatarInfo.aName); ++i)
            {
                ;
            }
            if (i < 10)
            {
                v20 = mFONTCOLOR.mData[44];
                v7 = mMESSAGE.Return(844);
                mBASICUI.Insert1(v7, v20);
            }
            else
            {
            LABEL_20:
                if (!strcmp(mMYINFO.mAvatarInfo.aGuildName, ""))
                {
                    if (!strcmp(mMYINFO.mAvatarInfo.aTeacher, ""))
                    {
                        if (!strcmp(mMYINFO.mAvatarInfo.aStudent, ""))
                        {
                            for (j = 0; j < 10 && !strcmp(mMYINFO.mAvatarInfo.aFriend[j], ""); ++j)
                            {
                                ;
                            }
                            if (j >= 10)
                            {
                                v12 = mUTIL.ReturnTribePoint(3);
                                if (v12 < mUTIL.ReturnTribePoint(mMYINFO.mAvatarInfo.aPreviousTribe))
                                {
                                LABEL_6:
                                    v16 = mFONTCOLOR.mData[44];
                                    v3 = mMESSAGE.Return(1459);
                                    mBASICUI.Insert1(v3, v16);
                                    return;
                                }
                                NPCUI::Off();
                                v13 = mMESSAGE.Return(1442);
                                mCBOXUI.Set(40, v13, "");
                            }
                            else
                            {
                                v24 = mFONTCOLOR.mData[44];
                                v11 = mMESSAGE.Return(269);
                                mBASICUI.Insert1(v11, v24);
                            }
                        }
                        else
                        {
                            v23 = mFONTCOLOR.mData[44];
                            v10 = mMESSAGE.Return(268);
                            mBASICUI.Insert1(v10, v23);
                        }
                    }
                    else
                    {
                        v22 = mFONTCOLOR.mData[44];
                        v9 = mMESSAGE.Return(267);
                        mBASICUI.Insert1(v9, v22);
                    }
                }
                else
                {
                    v21 = mFONTCOLOR.mData[44];
                    v8 = mMESSAGE.Return(266);
                    mBASICUI.Insert1(v8, v21);
                }
            }
        }
    }
    else
    {
        v18 = mFONTCOLOR.mData[44];
        v5 = mMESSAGE.Return(1441);
        mBASICUI.Insert1(v5, v18);
    }
}

void NPCUI::LButtonup048()
{
    char* v1;
    char* v2;
    int v3;
    int v4;
    float tCoord[3];
    int tZoneNumber;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        if (strcmp(mMYINFO.mAvatarInfo.aGuildName, "") && (!strcmp(mPLAY.mWorldInfo.mHoldingGuild, mMYINFO.mAvatarInfo.aGuildName) || !strcmp(mPLAY.mWorldInfo.mChallangeGuild, mMYINFO.mAvatarInfo.aGuildName)))
        {
            tZoneNumber = 291;
            if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, 291, tCoord))
            {
                mZONEMOVEINFO.SetFirstCoord(tZoneNumber, tCoord);
            }
            if (!mMYINFO.mMoveZoneState)
            {
                mMYINFO.mMoveZoneState = 1;
                mMYINFO.mMoveZoneSort = 6;
                mMYINFO.mMoveZoneValue = 0;
                mMYINFO.mNextZoneNumber = tZoneNumber;
                memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
                mMYINFO.mAction.aType = 0;
                mMYINFO.mAction.aSort = 1;
                mMYINFO.mAction.aFrame = 0.0;
                mMYINFO.mAction.aLocation[0] = tCoord[0];
                mMYINFO.mAction.aLocation[1] = tCoord[1];
                mMYINFO.mAction.aLocation[2] = tCoord[2];
                mMYINFO.mAction.aFront = (rand() % 360);
                mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
                mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, tZoneNumber);
            }
            NPCUI::Off();
        }
        else
        {
            v4 = mFONTCOLOR.mData[44];
            v2 = mMESSAGE.Return(1474);
            mBASICUI.Insert1(v2, v4);
        }
    }
    else
    {
        v3 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v3);
    }
}

void NPCUI::LButtonup049()
{
    float tCoord[3];
    int tZoneNumber;

    tZoneNumber = 0;
    switch (mMYINFO.mAvatarInfo.aTribe)
    {
    case 0:
        tZoneNumber = 1;
        break;
    case 1:
        tZoneNumber = 6;
        break;
    case 2:
        tZoneNumber = 11;
        break;
    case 3:
        tZoneNumber = 140;
        break;
    default:
        break;
    }
    if (tZoneNumber)
    {
        mZONEMOVEINFO.SetFirstCoord(tZoneNumber, tCoord);
        if (!mMYINFO.mMoveZoneState)
        {
            mMYINFO.mMoveZoneState = 1;
            mMYINFO.mMoveZoneSort = 6;
            mMYINFO.mMoveZoneValue = 0;
            mMYINFO.mNextZoneNumber = tZoneNumber;
            memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
            mMYINFO.mAction.aType = 0;
            mMYINFO.mAction.aSort = 1;
            mMYINFO.mAction.aFrame = 0.0;
            mMYINFO.mAction.aLocation[0] = tCoord[0];
            mMYINFO.mAction.aLocation[1] = tCoord[1];
            mMYINFO.mAction.aLocation[2] = tCoord[2];
            mMYINFO.mAction.aFront = (rand() % 360);
            mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
            mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, tZoneNumber);
        }
        NPCUI::Off();
    }
}
void NPCUI::LButtonup050()
{
    char* v1;
    char* v2;
    int v3;
    int v4;
    BYTE tData[100];

    if (!strcmp(mPLAY.mWorldInfo.mHoldingGuild, mMYINFO.mAvatarInfo.aGuildName))
    {
        if (mMYINFO.mAvatarInfo.aGuildRole)
        {
            v4 = mFONTCOLOR.mData[44];
            v2 = mMESSAGE.Return(1497);
            mBASICUI.Insert1(v2, v4);
        }
        else if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mTRANSFER.T_TRIBE_WORK_SEND(14, tData);
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            NPCUI::Off();
        }
    }
    else
    {
        v3 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(1492);
        mBASICUI.Insert1(v1, v3);
    }
}

void NPCUI::LButtonup051()
{
    int i;

    mWorkId = 51;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}

void NPCUI::LButtonup052()
{
    int i;

    mWorkId = 52;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mMYINFO.mAvatarInfo.aTimeEffect2 = mMYINFO.mAvatarInfo.aTimeEffect / 60 - 1;
    /*if (mMYINFO.mAvatarInfo.aTimeEffect / 60 - 1 < 0)
    {
        mMYINFO.mAvatarInfo.aTimeEffect2 = 0;
    }*/
    switch (mMYINFO.mAvatarInfo.aTimeEffect2)
    {
    case 1:
        mIsClick[2] = 1;
        break;
    case 2:
        mIsClick[3] = 1;
        break;
    case 3:
        mIsClick[4] = 1;
        break;
    case 4:
        mIsClick[5] = 1;
        break;
    case 5:
        mIsClick[6] = 1;
        break;
    default:
        return;
    }
}

void NPCUI::LButtonup053()
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
    char* v5;
    char* v6;
    char* v7;
    int v8;
    char* v9;
    int v10;

    if (mMYINFO.mAvatarInfo.aLevel2 <= 0)
    {
        if (mMYINFO.mAvatarInfo.aLevel1 < 113 || mMYINFO.mAvatarInfo.aLevel1 > 145 || mMYINFO.mAvatarInfo.aLevel2)
        {
            if (mMYINFO.mAvatarInfo.aLevel1 < 100 || mMYINFO.mAvatarInfo.aLevel1 > 112)
            {
                v10 = mFONTCOLOR.mData[44];
                v5 = mMESSAGE.Return(1801);
                mBASICUI.Insert1(v5, v10);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 20)
            {
            LABEL_13:
                v8 = mFONTCOLOR.mData[44];
                v3 = mMESSAGE.Return(965);
                mBASICUI.Insert1(v3, v8);
                return;
            }
            v9 = mMESSAGE.Return(1756);
            v4 = mMESSAGE.Return(1753);
            mCBOXUI.Set(46, v4, v9);
        }
        else
        {
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 50)
                goto LABEL_13;
            v7 = mMESSAGE.Return(1755);
            v2 = mMESSAGE.Return(1753);
            mCBOXUI.Set(46, v2, v7);
        }
    }
    else
    {
        if (mMYINFO.mAvatarInfo.aKillOtherTribe < 100)
            goto LABEL_13;
        v6 = mMESSAGE.Return(1754);
        v1 = mMESSAGE.Return(1753);
        mCBOXUI.Set(46, v1, v6);
    }
    NPCUI::Off();
}
void NPCUI::LButtonup054()
{
    int i;

    mWorkId = 54;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}
void NPCUI::LButtonup055()
{
    char* v1;
    int v2;

    v2 = mFONTCOLOR.mData[44];
    v1 = mMESSAGE.Return(2238);
    mBASICUI.Insert1(v1, v2);
    NPCUI::Off();
}

void NPCUI::LButtonup056()
{
    int i;

    mWorkId = 56;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}

void NPCUI::LButtonup059()
{
    int i;

    mWorkId = 58;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}

void NPCUI::LButtonup061()
{
    char* v1;
    int v2;
    int i;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        mWorkId = 61;
        for (i = 0; i < 100; ++i)
            mIsClick[i] = 0;
        //TRANSFER::T_GET_ZONE_CONNECT_USER_SEND(&mTRANSFER, 84);
        //TRANSFER::T_GET_ZONE_CONNECT_USER_SEND(&mTRANSFER, 84);
        mUpdateTime = GetTickCount();
    }
    else
    {
        v2 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, v2);
    }
}

void NPCUI::LButtonup062()
{
    switch (mMYINFO.mPresentZoneNumber)
    {
    case 1:
        if (!mMYINFO.mAvatarInfo.aTribe || mMYINFO.mAvatarInfo.aTribe == mPLAY.ReturnAlliance(0))
        {
            if (mMYINFO.mAvatarInfo.aLevel1 >= 113)
            {
                mTRANSFER.T_DAILY_MISSION_SEND(1, -1, -1, -1, -1);
                return;
            }
            mBASICUI.Insert1(mMESSAGE.Return(879), mFONTCOLOR.mData[44]);
            return;
        }
        mBASICUI.Insert1(mMESSAGE.Return(143), mFONTCOLOR.mData[44]);
        return;

    case 6:
        if (mMYINFO.mAvatarInfo.aTribe == 1 || mMYINFO.mAvatarInfo.aTribe == mPLAY.ReturnAlliance(1))
        {
            if (mMYINFO.mAvatarInfo.aLevel1 >= 113)
            {
                mTRANSFER.T_DAILY_MISSION_SEND(1, -1, -1, -1, -1);
                return;
            }
            mBASICUI.Insert1(mMESSAGE.Return(879), mFONTCOLOR.mData[44]);
            return;
        }
        mBASICUI.Insert1(mMESSAGE.Return(143), mFONTCOLOR.mData[44]);
        return;

    case 11:
        if (mMYINFO.mAvatarInfo.aTribe == 2 || mMYINFO.mAvatarInfo.aTribe == mPLAY.ReturnAlliance(2))
        {
            if (mMYINFO.mAvatarInfo.aLevel1 >= 113)
            {
                mTRANSFER.T_DAILY_MISSION_SEND(1, -1, -1, -1, -1);
                return;
            }
            mBASICUI.Insert1(mMESSAGE.Return(879), mFONTCOLOR.mData[44]);
            return;
        }
        mBASICUI.Insert1(mMESSAGE.Return(143), mFONTCOLOR.mData[44]);
        return;

    case 37:
        if (mMYINFO.mAvatarInfo.aLevel1 >= 113)
        {
            mTRANSFER.T_DAILY_MISSION_SEND(1, -1, -1, -1, -1);
            return;
        }
        mBASICUI.Insert1(mMESSAGE.Return(879), mFONTCOLOR.mData[44]);
        return;

    case 140:
        if (mMYINFO.mAvatarInfo.aTribe == 3 || mMYINFO.mAvatarInfo.aTribe == mPLAY.ReturnAlliance(3))
        {
            if (mMYINFO.mAvatarInfo.aLevel1 >= 113)
            {
                mTRANSFER.T_DAILY_MISSION_SEND(1, -1, -1, -1, -1);
                return;
            }
            mBASICUI.Insert1(mMESSAGE.Return(879), mFONTCOLOR.mData[44]);
            return;
        }
        mBASICUI.Insert1(mMESSAGE.Return(143), mFONTCOLOR.mData[44]);
        return;

    default:
        return;
    }
}

void NPCUI::LButtonup063()
{
    int i;

    mWorkId = 63;
    for (i = 0; i < 100; ++i)
    {
        mIsClick[i] = 0;
    }
    mINVENUI.Set();
}

void NPCUI::LButtonup064()
{
    int tZoneNumber;
    float tCoord[3];

    if (mMYINFO.mAvatarInfo.aLevel2 < 12)
    {
        mBASICUI.Insert1(mMESSAGE.Return(2449), mFONTCOLOR.mData[44]);
        return;
    }
    if (mMYINFO.mAvatarInfo.aRebirth < 12)
    {
        mBASICUI.Insert1(mMESSAGE.Return(2330), mFONTCOLOR.mData[44]);
        return;
    }
    if (strcmp(mMYINFO.mAvatarInfo.aPartyName, "") != 0)
    {
        mBASICUI.Insert1(mMESSAGE.Return(2689), mFONTCOLOR.mData[44]);
        return;
    }
    if (mPLAY.mWorldInfo.mRainWaterHeavenState2 != 1)
    {
        mBASICUI.Insert1(mMESSAGE.Return(1347), mFONTCOLOR.mData[44]);
        return;
    }
    tZoneNumber = 324;
    if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, 324, tCoord))
    {
        mZONEMOVEINFO.SetFirstCoord(tZoneNumber, tCoord);
    }
    if (mMYINFO.mAvatarInfo.aHeavenlyWarTicket < 1)
    {
        mBASICUI.Insert1(mMESSAGE.Return(2701), mFONTCOLOR.mData[44]);
        return;
    }
    if (!mMYINFO.mMoveZoneState)
    {
        mMYINFO.mMoveZoneState = 1;
        mMYINFO.mMoveZoneSort = 6;
        mMYINFO.mMoveZoneValue = 0;
        mMYINFO.mNextZoneNumber = tZoneNumber;
        memset(&mMYINFO.mAction, 0, sizeof(ACTION_INFO));
        mMYINFO.mAction.aType = 0;
        mMYINFO.mAction.aSort = 1;
        mMYINFO.mAction.aFrame = 0.0;
        mMYINFO.mAction.aLocation[0] = tCoord[0];
        mMYINFO.mAction.aLocation[1] = tCoord[1];
        mMYINFO.mAction.aLocation[2] = tCoord[2];
        mMYINFO.mAction.aFront = (rand() % 360);
        mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
        mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, tZoneNumber);
    }
    NPCUI::Off();
}

void NPCUI::LButtonup066()// Craft Begar
{

    int i;

    mWorkId = 66;
    for (i = 0; i < 100; ++i)
    {
        mIsClick[i] = 0;
        mMakeItemTotalPage = 1;
        // Ultimate Cape=War Lord Cape
        mMakeItemInfo[0][0] = 984;
        mMakeItemInfo[0][1] = 984;
        mMakeItemInfo[0][2] = 984;
        mMakeItemInfo[0][3] = 1401;
        mMakeItemInfo[0][4] = 1403;
        mMakeItemInfo[0][5] = 0;
        // War Lord Cape=God Warrior Cape
        mMakeItemInfo[1][0] = 984;
        mMakeItemInfo[1][1] = 984;
        mMakeItemInfo[1][2] = 984;
        mMakeItemInfo[1][3] = 1403;
        mMakeItemInfo[1][4] = 1404;
        mMakeItemInfo[1][5] = 0;
        // God Warrior Cape=Zeus Cape
        mMakeItemInfo[2][0] = 984;
        mMakeItemInfo[2][1] = 984;
        mMakeItemInfo[2][2] = 984;
        mMakeItemInfo[2][3] = 1404;
        mMakeItemInfo[2][4] = 1406;
        mMakeItemInfo[2][5] = 0;
        mMakeItemPresentPage = 0;
        mINVENUI.Set();
    }
}

void NPCUI::LButtonup067()
{
    int i;

    mWorkId = 67;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}
void NPCUI::LButtonup068()// Craft 3 Tailor
{

    int i;

    mWorkId = 68;
    for (i = 0; i < 100; ++i)
    {
        mIsClick[i] = 0;
        mMakeItemTotalPage = 3;
        // Ultimate Cape=War Lord Cape
        mMakeItemInfo[0][0] = 984;
        mMakeItemInfo[0][1] = 984;
        mMakeItemInfo[0][2] = 984;
        mMakeItemInfo[0][3] = 1401;
        mMakeItemInfo[0][4] = 1403;
        mMakeItemInfo[0][5] = 0;
        // War Lord Cape=God Warrior Cape
        mMakeItemInfo[1][0] = 0;
        mMakeItemInfo[1][1] = 0;
        mMakeItemInfo[1][2] = 0;
        mMakeItemInfo[1][3] = 0;
        mMakeItemInfo[1][4] = 0;
        mMakeItemInfo[1][5] = 0;
        // God Warrior Cape=Zeus Cape
        mMakeItemInfo[2][0] = 0;
        mMakeItemInfo[2][1] = 0;
        mMakeItemInfo[2][2] = 0;
        mMakeItemInfo[2][3] = 0;
        mMakeItemInfo[2][4] = 0;
        mMakeItemInfo[2][5] = 0;
        mMakeItemPresentPage = 0;
        mINVENUI.Set();
    }
}

void NPCUI::LButtonup069()
{
    int i;

    mWorkId = 69;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    tUltimateUpgradeState[0] = 0;
    tUltimateUpgradeState[1] = 2;
    mINVENUI.Set();
}

void NPCUI::LButtonup070()// Craft 2 Tailor
{

    int i;

    mWorkId = 70;
    for (i = 0; i < 100; ++i)
    {
        mIsClick[i] = 0;
        mMakeItemTotalPage = 3;
        // Deco V0=Deco V1 MaskS
        mMakeItemInfo[0][0] = 2383;
        mMakeItemInfo[0][1] = 2383;
        mMakeItemInfo[0][2] = 2150;
        mMakeItemInfo[0][3] = mMYINFO.mAvatarInfo.aPreviousTribe + 101;
        mMakeItemInfo[0][4] = 240;
        mMakeItemInfo[0][5] = 0;
        // Deco V0=Deco V1 Daiko
        mMakeItemInfo[1][0] = 2383;
        mMakeItemInfo[1][1] = 2383;
        mMakeItemInfo[1][2] = 2150;
        mMakeItemInfo[1][3] = mMYINFO.mAvatarInfo.aPreviousTribe + 107;
        mMakeItemInfo[1][4] = 243;
        mMakeItemInfo[1][5] = 0;
        // Deco V0=Deco V1 Gaunlet
        mMakeItemInfo[2][0] = 2383;
        mMakeItemInfo[2][1] = 2383;
        mMakeItemInfo[2][2] = 2150;
        mMakeItemInfo[2][3] = mMYINFO.mAvatarInfo.aPreviousTribe + 110;
        mMakeItemInfo[2][4] = 246;
        mMakeItemInfo[2][5] = 0;
        // Deco V1 Legendary Glasses=Deco V2 Legendary Glasses
        mMakeItemInfo[3][0] = 2383;
        mMakeItemInfo[3][1] = 2383;
        mMakeItemInfo[3][2] = 2150;
        mMakeItemInfo[3][3] = 240;
        mMakeItemInfo[3][4] = 241;
        mMakeItemInfo[3][5] = 0;
        // Deco V1 Legendary Fauld=Deco V2 Legendary Fauld
        mMakeItemInfo[4][0] = 2383;
        mMakeItemInfo[4][1] = 2383;
        mMakeItemInfo[4][2] = 2150;
        mMakeItemInfo[4][3] = 243;
        mMakeItemInfo[4][4] = 244;
        mMakeItemInfo[4][5] = 0;
        // Deco V1 Legendary Gloves=Deco V2 Legendary Gloves
        mMakeItemInfo[5][0] = 2383;
        mMakeItemInfo[5][1] = 2383;
        mMakeItemInfo[5][2] = 2150;
        mMakeItemInfo[5][3] = 246;
        mMakeItemInfo[5][4] = 247;
        mMakeItemInfo[5][5] = 0;
        // Deco V2 Legendary Glasses=Deco V3 Legendary Glasses
        mMakeItemInfo[6][0] = 2383;
        mMakeItemInfo[6][1] = 2383;
        mMakeItemInfo[6][2] = 2150;
        mMakeItemInfo[6][3] = 241;
        mMakeItemInfo[6][4] = 242;
        mMakeItemInfo[6][5] = 0;
        // Deco V2 Legendary Fauld=Deco V3 Legendary Fauld
        mMakeItemInfo[7][0] = 2383;
        mMakeItemInfo[7][1] = 2383;
        mMakeItemInfo[7][2] = 2150;
        mMakeItemInfo[7][3] = 244;
        mMakeItemInfo[7][4] = 245;
        mMakeItemInfo[7][5] = 0;
        // Deco V2 Legendary Gloves=Deco V3 Legendary Gloves
        mMakeItemInfo[8][0] = 2383;
        mMakeItemInfo[8][1] = 2383;
        mMakeItemInfo[8][2] = 2150;
        mMakeItemInfo[8][3] = 247;
        mMakeItemInfo[8][4] = 248;
        mMakeItemInfo[8][5] = 0;
        mMakeItemPresentPage = 0;
        mINVENUI.Set();
    }
}

void NPCUI::LButtonup072()
{
    int i;

    mWorkId = 72;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}

void NPCUI::LButtonup073()
{
    int i;

    mWorkId = 73;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}

void NPCUI::LButtonUp074()
{
    int i;

    if (!mDemandBloodShopInfo)
    {
        mTRANSFER.T_DEMAND_BLOODSTAINED_INFO_SEND();
        mDemandBloodShopInfo = 1;
    }
    mUI.Off(1);
    mActive = 1;
    mPage[0] = -1;
    mPage[1] = -1;
    mPage[2] = -1;
    mPage[3] = -1;
    mPage[5] = -1;
    mIndex[0] = -1;
    mWorkId = 74;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mBloodStoreCurrentPage = 0;
    mBloodStoreIndex = -1;
    mINVENUI.Set();
}

void NPCUI::LButtonup075()
{
    int i;

    mWorkId = 75;
    for (i = 0; i < 100; ++i)
        mIsClick[i] = 0;
    mINVENUI.Set();
}

void NPCUI::LButtonup077()
{
    char* v1;
    int v2;
    int i;

    if (mNPCInfo->nTribe - 2 == mMYINFO.mAvatarInfo.aTribe)
    {
        mWorkId = 77;
        for (i = 0; i < 100; ++i)
        {
            mIsClick[i] = 0;
        }
    }
    else
    {
        v1 = mMESSAGE.Return(143);
        mBASICUI.Insert1(v1, mFONTCOLOR.mData[44]);
    }
}

void NPCUI::LBUTTONUP2(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    char* v10;
    int v11;
    int v12;
    int v13;
    int v14;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[904]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[904]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        mBASICUI.Insert1("[SYSTEM] Quests is disabled in this client.", 15);
    }
    /*if (bIsClicked[0])
    {
        bIsClicked[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[909], uX + 344, uY + 416, uX, uY))
        {
            NPCUI::Off();
            switch (mMYINFO.mAvatarInfo.aQuestInfo[2])
            {
            case 0:
                if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    tQuestInfo[0] = -1;
                    v14 = tQuest_Info->mSort2;
                    if (v14 == 3 || v14 == 6)
                    {
                        mINVENUI.PutInventory2(
                            tQuest_Info->mUnknown3,
                            tQuestInfo,
                            &tQuestInfo[1],
                            &tQuestInfo[2],
                            &tQuestInfo[3]);
                        if (tQuestInfo[0] == -1)
                            goto LABEL_67;
                    }
                    TRANSFER::T_PROCESS_QUEST_SEND(
                        &mTRANSFER,
                        1,
                        tQuestInfo[0],
                        tQuestInfo[1],
                        tQuestInfo[2],
                        tQuestInfo[3]);
                    mMYINFO.mNetworkLock = 1;
                    mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                }
                break;
            case 1:
            case 2:
            case 5:
            case 8:
                if (mMYINFO.ReturnQuestPresentState(mMYINFO) == 3 && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    tQuestInfo[0] = -1;
                    if (mMYINFO.ReturnItemNumberForQuestReward(mMYINFO) > 0)
                    {
                        v5 = mMYINFO.ReturnItemNumberForQuestReward(mMYINFO);
                        mINVENUI.PutInventory2(
                            v5,
                            tQuestInfo,
                            &tQuestInfo[1],
                            &tQuestInfo[2],
                            &tQuestInfo[3]);
                        if (tQuestInfo[0] == -1)
                            goto LABEL_67;
                    }
                    goto LABEL_68;
                }
                break;
            case 3:
                v13 = mMYINFO.ReturnQuestPresentState(mMYINFO);
                if (v13 == 2)
                {
                    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        mINVENUI.PutInventory2(
                            tQuest_Info->mUnknown3,
                            tQuestInfo,
                            &tQuestInfo[1],
                            &tQuestInfo[2],
                            &tQuestInfo[3]);
                        if (tQuestInfo[0] == -1)
                            goto LABEL_67;
                        goto LABEL_24;
                    }
                }
                else if (v13 == 3 && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    tQuestInfo[0] = -1;
                    if (mMYINFO.ReturnItemNumberForQuestReward(mMYINFO) <= 0)
                        goto LABEL_68;
                    v6 = mMYINFO.ReturnItemNumberForQuestReward(mMYINFO);
                    mINVENUI.PutInventory2(
                        v6,
                        tQuestInfo,
                        &tQuestInfo[1],
                        &tQuestInfo[2],
                        &tQuestInfo[3]);
                    if (tQuestInfo[0] != -1)
                        goto LABEL_68;
                    goto LABEL_67;
                }
                break;
            case 4:
                v12 = mMYINFO.ReturnQuestPresentState(mMYINFO);
                if (v12 == 2)
                {
                    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        mINVENUI.PutInventory2(
                            tQuest_Info->mUnknown3,
                            tQuestInfo,
                            &tQuestInfo[1],
                            &tQuestInfo[2],
                            &tQuestInfo[3]);
                        if (tQuestInfo[0] == -1)
                            goto LABEL_67;
                    LABEL_24:
                        TRANSFER::T_PROCESS_QUEST_SEND(
                            &mTRANSFER,
                            3,
                            tQuestInfo[0],
                            tQuestInfo[1],
                            tQuestInfo[2],
                            tQuestInfo[3]);
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                    }
                }
                else if (v12 == 3 && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    tQuestInfo[0] = -1;
                    if (mMYINFO.ReturnItemNumberForQuestReward(mMYINFO) <= 0)
                        goto LABEL_68;
                    v7 = mMYINFO.ReturnItemNumberForQuestReward(mMYINFO);
                    mINVENUI.PutInventory2(
                        v7,
                        tQuestInfo,
                        &tQuestInfo[1],
                        &tQuestInfo[2],
                        &tQuestInfo[3]);
                    if (tQuestInfo[0] != -1)
                        goto LABEL_68;
                    goto LABEL_67;
                }
                break;
            case 6:
                switch (mMYINFO.ReturnQuestPresentState(mMYINFO))
                {
                case 2:
                    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        mINVENUI.PutInventory2(
                            tQuest_Info->mUnknown3,
                            tQuestInfo,
                            &tQuestInfo[1],
                            &tQuestInfo[2],
                            &tQuestInfo[3]);
                        if (tQuestInfo[0] == -1)
                            goto LABEL_67;
                        goto LABEL_24;
                    }
                    break;
                case 3:
                    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        TRANSFER::T_PROCESS_QUEST_SEND(
                            &mTRANSFER,
                            4,
                            tQuestInfo[0],
                            tQuestInfo[1],
                            tQuestInfo[2],
                            tQuestInfo[3]);
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                    }
                    break;
                case 4:
                    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        mINVENUI.PutInventory2(
                            tQuest_Info->mUnknown3,
                            tQuestInfo,
                            &tQuestInfo[1],
                            &tQuestInfo[2],
                            &tQuestInfo[3]);
                        if (tQuestInfo[0] != -1)
                            goto LABEL_24;
                        goto LABEL_67;
                    }
                    break;
                case 5:
                    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        tQuestInfo[0] = -1;
                        if (mMYINFO.ReturnItemNumberForQuestReward(mMYINFO) > 0)
                        {
                            v8 = mMYINFO.ReturnItemNumberForQuestReward(mMYINFO);
                            mINVENUI.PutInventory2(
                                v8,
                                tQuestInfo,
                                &tQuestInfo[1],
                                &tQuestInfo[2],
                                &tQuestInfo[3]);
                            if (tQuestInfo[0] == -1)
                                goto LABEL_67;
                        }
                        goto LABEL_68;
                    }
                    break;
                default:
                    return;
                }
                break;
            case 7:
                if (mMYINFO.ReturnQuestPresentState(mMYINFO) == 2 && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    tQuestInfo[0] = -1;
                    if (mMYINFO.ReturnItemNumberForQuestReward(mMYINFO) > 0
                        && (v9 = mMYINFO.ReturnItemNumberForQuestReward(mMYINFO),
                            mINVENUI.PutInventory2(
                                v9,
                                tQuestInfo,
                                &tQuestInfo[1],
                                &tQuestInfo[2],
                                &tQuestInfo[3]),
                            tQuestInfo[0] == -1))
                    {
                    LABEL_67:
                        v11 = mFONTCOLOR.mData[44];
                        v10 = mMESSAGE.Return(&mMESSAGE, 58);
                        mBASICUI.Insert1(mBASICUI, v10, v11);
                    }
                    else
                    {
                    LABEL_68:
                        TRANSFER::T_PROCESS_QUEST_SEND(
                            &mTRANSFER,
                            2,
                            tQuestInfo[0],
                            tQuestInfo[1],
                            tQuestInfo[2],
                            tQuestInfo[3]);
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                    }
                }
                break;
            default:
                return;
            }
        }
    }*/
}
void NPCUI::LBUTTONUP5(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[516]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[516]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 252, mY + 25, uX, uY))
            NPCUI::Off();
    }
}

void NPCUI::LBUTTONUP6(int uX, int uY)
{
    int v3;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[515]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[300], mX + 95, mY + 409, uX, uY))
            {
                if (mMYINFO.mAvatarInfo.aStoreMoney >= 1)
                {
                    mCHOICEUI.Set(13, 0, 0, 0, 0, 0, 0, 0, 0, 1, uX - 52, uY - 72);
                }
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3473], mX + 38, mY + 409, uX, uY) && mMYINFO.mAvatarInfo.aStoreMoney2 >= 1)
            {
                mCHOICEUI.Set(25, 0, 0, 0, 0, 0, 0, 0, 0, 1, uX - 52, uY - 72);
            }
        }
        else if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY) && mStorePage > 0)
            {
                --mStorePage;
            }
        }
        else if (mIsClick[3])
        {
            mIsClick[3] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
            {
                if (mStorePage < 1 && mMYINFO.mAvatarInfo.aExpandStoreDate > 0)
                {
                    ++mStorePage;
                }
            }
        }
    }
}
void NPCUI::LBUTTONUP7(int uX, int uY)
{
    int v3;
    int v4;
    char* v5;
    char* v6;
    char* v7;
    int v8;
    int v9;
    int v10;
    char String[1000];

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[760]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[760]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[309], mX + 165, mY + 72, uX, uY))
        {
            if (GetWindowTextA(mEDITBOX.mDATA[6], String, 1000))
            {
                if (mUTIL.CheckNameString(String))
                {
                    if ( strlen(String) > 12 )
                    {
                        v10 = mFONTCOLOR.mData[44];
                        v7 = mMESSAGE.Return(390);
                        mBASICUI.Insert1(v7, v10);
                    }
                    else
                    {
                        mPLAY.DemandGuildCreate(String);
                        NPCUI::Off();
                    }
                }
                else
                {
                    v9 = mFONTCOLOR.mData[44];
                    v6 = mMESSAGE.Return(389);
                    mBASICUI.Insert1(v6, v9);
                }
            }
            else
            {
                v8 = mFONTCOLOR.mData[44];
                v5 = mMESSAGE.Return(388);
                mBASICUI.Insert1(v5, v8);
            }
        }
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[307], mX + 202, mY + 72, uX, uY))
            NPCUI::Off();
    }
}

void NPCUI::LBUTTONUP8(int uX, int uY)
{
    int v3;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[471]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY)
                && mShopPresentPage >= 1)
            {
                --mShopPresentPage;
            }
        }
        else if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
            {
                if (mShopPresentPage < mShopTotalPage - 1)
                    ++mShopPresentPage;
            }
        }
    }
}

void NPCUI::LBUTTONUP10(int uX, int uY)// Crafting Tailor BlackSmith
{
    int sX;
    int sY;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[612]);

    if (mINVENUI.LBUTTONUP(uX, uY))
    {
        return;
    }

    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            Off();
        }
        return;
    }
    if (mIsClick[1])
    {
        mIsClick[1] = 0;
        switch (mMakeItemPresentPage)
        {
        case 0:// 4x Mats 3%=Random Mats
            if (mInv[0].iIndex != 1019 ||
                mInv[1].iIndex != 1019 ||
                mInv[2].iIndex != 1019 ||
                mInv[3].iIndex != 1019)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            break;

        case 1:// 4x Mats 15%=PUS 6%
            if (mInv[0].iIndex != 1023 ||
                mInv[1].iIndex != 1023 ||
                mInv[2].iIndex != 1023 ||
                mInv[3].iIndex != 1023)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            break;

        case 2:// 4xBlue Jade Stone=Upgrade Stone
            if (mInv[0].iIndex != 983 ||
                mInv[1].iIndex != 983 ||
                mInv[2].iIndex != 983 ||
                mInv[3].iIndex != 983)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            break;

        case 3:// 4xPUS=Upgrade Perfect Stone 3%
            if (mInv[0].iIndex != 1437 ||
                mInv[1].iIndex != 1437 ||
                mInv[2].iIndex != 1437 ||
                mInv[3].iIndex != 1437)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            break;

        case 4:// Ultimate Cape=War Lord Cape
            if (mInv[0].iIndex != 984 ||
                mInv[1].iIndex != 984 ||
                mInv[2].iIndex != 984 ||
                mInv[3].iIndex != 1401)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 3000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

        case 5:// War Lord Cape=God Warrior Cape
            if (mInv[0].iIndex != 984 ||
                mInv[1].iIndex != 984 ||
                mInv[2].iIndex != 984 ||
                mInv[3].iIndex != 1403)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 5000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

        case 6:// God Warrior Cape=Zeus Cape
            if (mInv[0].iIndex != 984 ||
                mInv[1].iIndex != 984 ||
                mInv[2].iIndex != 984 ||
                mInv[3].iIndex != 1404)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 10000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

        case 7:// Deco V0=Deco V1 Mask
            if (mInv[0].iIndex != 2383 ||
                mInv[1].iIndex != 2383 ||
                mInv[2].iIndex != 2150 ||
                mInv[3].iIndex != 101 &&
                mInv[3].iIndex != 102 &&
                mInv[3].iIndex != 103)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

        case 8:// Deco V0=Deco V1 Daiko
            if (mInv[0].iIndex != 2383 ||
                mInv[1].iIndex != 2383 ||
                mInv[2].iIndex != 2150 ||
                mInv[3].iIndex != 107 &&
                mInv[3].iIndex != 108 &&
                mInv[3].iIndex != 109)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

        case 9:// Deco V0=Deco V1 Gaunlet
            if (mInv[0].iIndex != 2383 ||
                mInv[1].iIndex != 2383 ||
                mInv[2].iIndex != 2150 ||
                mInv[3].iIndex != 110 &&
                mInv[3].iIndex != 111 &&
                mInv[3].iIndex != 112)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

        case 10:// Deco V1 Legendary Glasses=Deco V2 Legendary Glasses
            if (mInv[0].iIndex != 2383 ||
                mInv[1].iIndex != 2383 ||
                mInv[2].iIndex != 2150 ||
                mInv[3].iIndex != 240)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 2000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

        case 11:// Deco V1 Legendary Fauld=Deco V2 Legendary Fauld
            if (mInv[0].iIndex != 2383 ||
                mInv[1].iIndex != 2383 ||
                mInv[2].iIndex != 2150 ||
                mInv[3].iIndex != 243)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 2000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

        case 12:// Deco V1 Legendary Gloves=Deco V2 Legendary Gloves
            if (mInv[0].iIndex != 2383 ||
                mInv[1].iIndex != 2383 ||
                mInv[2].iIndex != 2150 ||
                mInv[3].iIndex != 246)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 2000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

        case 13:// Deco V2 Legendary Glasses=Deco V3 Legendary Glasses
            if (mInv[0].iIndex != 2383 ||
                mInv[1].iIndex != 2383 ||
                mInv[2].iIndex != 2150 ||
                mInv[3].iIndex != 241)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 3000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

        case 14:// Deco V2 Legendary Fauld=Deco V3 Legendary Fauld
            if (mInv[0].iIndex != 2383 ||
                mInv[1].iIndex != 2383 ||
                mInv[2].iIndex != 2150 ||
                mInv[3].iIndex != 244)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 3000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

        case 15:// Deco V2 Legendary Gloves=Deco V3 Legendary Gloves
            if (mInv[0].iIndex != 2383 ||
                mInv[1].iIndex != 2383 ||
                mInv[2].iIndex != 2150 ||
                mInv[3].iIndex != 247)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 3000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

        case 40:// Wings V0
            if (mInv[0].iIndex != 695 && mInv[0].iIndex != 892 ||
                mInv[1].iIndex != 695 && mInv[1].iIndex != 892 ||
                mInv[2].iIndex != 695 && mInv[2].iIndex != 892 ||
                mInv[3].iIndex != 126 && mInv[3].iIndex != 129 &&
                mInv[3].iIndex != 132 && mInv[3].iIndex != 135 &&
                mInv[3].iIndex != 138 && mInv[3].iIndex != 141 &&
                mInv[3].iIndex != 144 && mInv[3].iIndex != 147 &&
                mInv[3].iIndex != 150)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 50)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

        case 41:// White Feather -> Black Feather
            if (mInv[0].iIndex != 695 && mInv[0].iIndex != 2387 ||
                mInv[1].iIndex != 695 && mInv[1].iIndex != 2387 ||
                mInv[2].iIndex != 695 && mInv[2].iIndex != 2387 ||
                mInv[3].iIndex != 695 && mInv[3].iIndex != 2387)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            break;
            
        case 42:// Black Feathr to Gold Feather
            if (mInv[0].iIndex != 696 && mInv[0].iIndex != 2387 ||
                mInv[1].iIndex != 696 && mInv[1].iIndex != 2387 ||
                mInv[2].iIndex != 696 && mInv[2].iIndex != 2387 ||
                mInv[3].iIndex != 696 && mInv[3].iIndex != 2387)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            break;

        case 43:// Blue Dragon Wings V2==Yellow Phoenix Wings V1
            if (mInv[0].iIndex != 698 ||
                mInv[1].iIndex != 698 ||
                mInv[2].iIndex != 1473 ||
                mInv[3].iIndex != mMYINFO.mAvatarInfo.aPreviousTribe + 213 && mUTIL.ReturnISValue(mInv[3].iImproveState) != 40)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 3000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            if (mUTIL.ReturnISValue(mInv[3].iImproveState) != 40)// enchant requirement.
            {
                mBASICUI.Insert1("[SYSTEM] Wings need to be 120% to upgrade.", 15);
                return;
            }
            break;

        case 44:// Yellow Phoenix Wings V1==Blue Phoenix Wings Wings V2
            if (mInv[0].iIndex != 698 ||
                mInv[1].iIndex != 698 ||
                mInv[2].iIndex != 1473 ||
                mInv[3].iIndex != mMYINFO.mAvatarInfo.aPreviousTribe + 219 && mUTIL.ReturnISValue(mInv[3].iImproveState) != 40)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 5000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            if (mUTIL.ReturnISValue(mInv[3].iImproveState) != 40)// enchant requirement.
            {
                mBASICUI.Insert1("[SYSTEM] Wings need to be 120% to upgrade.", 15);
                return;
            }
            break;

        case 45:// Blue Phoenix Wings V2==Golden Sparrow Wings V3
            if (mInv[0].iIndex != 698 ||
                mInv[1].iIndex != 698 ||
                mInv[2].iIndex != 1473 ||
                mInv[3].iIndex != mMYINFO.mAvatarInfo.aPreviousTribe + 222 && mUTIL.ReturnISValue(mInv[3].iImproveState) != 40)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 5000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            if (mUTIL.ReturnISValue(mInv[3].iImproveState) != 40)// enchant requirement.
            {
                mBASICUI.Insert1("[SYSTEM] Wings need to be 120% to upgrade.", 15);
                return;
            }
            break;

        case 46:// Golden Sparrow Wings V3==Suzaku Wings V4
            if (mInv[0].iIndex != 698 ||
                mInv[1].iIndex != 698 ||
                mInv[2].iIndex != 1473 ||
                mInv[3].iIndex != mMYINFO.mAvatarInfo.aPreviousTribe + 225 && mUTIL.ReturnISValue(mInv[3].iImproveState) != 40)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 5000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            if (mUTIL.ReturnISValue(mInv[3].iImproveState) != 40)// enchant requirement.
            {
                mBASICUI.Insert1("[SYSTEM] Wings need to be 120% to upgrade.", 15);
                return;
            }
            break;

        case 47:// Suzaku Wings V4 ==Dragon Wings V5
            if (mInv[0].iIndex != 698 ||
                mInv[1].iIndex != 698 ||
                mInv[2].iIndex != 1473 ||
                mInv[3].iIndex != mMYINFO.mAvatarInfo.aPreviousTribe + 228 && mUTIL.ReturnISValue(mInv[3].iImproveState) != 40)
            {
            if (mUTIL.ReturnISValue(mInv[3].iImproveState) != 40)// enchant requirement.
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 5000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
                mBASICUI.Insert1("[SYSTEM] Wings need to be 120% to upgrade.", 15);
                return;
            }
            break;

        case 60:
            if (mInv[0].iIndex != 1002 && mInv[0].iIndex != 1003 && mInv[0].iIndex != 1004 && mInv[0].iIndex != 1005 ||
                mInv[1].iIndex != 1002 && mInv[1].iIndex != 1003 && mInv[1].iIndex != 1004 && mInv[1].iIndex != 1005 ||
                mInv[2].iIndex != 1002 && mInv[2].iIndex != 1003 && mInv[2].iIndex != 1004 && mInv[2].iIndex != 1005 ||
                mInv[3].iIndex != 1235)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

        case 61:
            if (mInv[0].iIndex != 1006 && mInv[0].iIndex != 1007 && mInv[0].iIndex != 1008 && mInv[0].iIndex != 1009 && mInv[0].iIndex != 1010 && mInv[0].iIndex != 1011 ||
                mInv[1].iIndex != 1006 && mInv[1].iIndex != 1007 && mInv[1].iIndex != 1008 && mInv[1].iIndex != 1009 && mInv[1].iIndex != 1010 && mInv[1].iIndex != 1011 ||
                mInv[2].iIndex != 1006 && mInv[2].iIndex != 1007 && mInv[2].iIndex != 1008 && mInv[2].iIndex != 1009 && mInv[2].iIndex != 1010 && mInv[2].iIndex != 1011 ||
                mInv[3].iIndex != 1235)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 2000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;
        
        case 62:
            if (mInv[0].iIndex != 1012 && mInv[0].iIndex != 1013 && mInv[0].iIndex != 1014 && mInv[0].iIndex != 1015 && mInv[0].iIndex != 1016 ||
                mInv[1].iIndex != 1012 && mInv[1].iIndex != 1013 && mInv[1].iIndex != 1014 && mInv[1].iIndex != 1015 && mInv[1].iIndex != 1016 ||
                mInv[2].iIndex != 1012 && mInv[2].iIndex != 1013 && mInv[2].iIndex != 1014 && mInv[2].iIndex != 1015 && mInv[2].iIndex != 1016 ||
                mInv[3].iIndex != 1235)
            {
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 3000)
            {
                mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                return;
            }
            break;

		case 63:// Produce Amulet Box
			if (mInv[0].iIndex != 1310 && mInv[0].iIndex != 1311 && mInv[0].iIndex != 1312 ||
				mInv[1].iIndex != 1310 && mInv[1].iIndex != 1311 && mInv[1].iIndex != 1312 ||
				mInv[2].iIndex != 2150 ||
				mInv[3].iIndex != 2150)
			{
				mBASICUI.Insert1(mMESSAGE.Return(728), 15);
				return;
			}
			if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1000)
			{
				mBASICUI.Insert1(mMESSAGE.Return(871), 15);
				return;
			}
			break;

        default:
            mBASICUI.Insert1(mMESSAGE.Return(728), 15);
            return;
        }
        if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
        {
            mTRANSFER.T_MAKE_ITEM_SEND(mMakeItemPresentPage, mPage[0], mIndex[0], mPage[1], mIndex[1], mPage[2], mIndex[2], mPage[3], mIndex[3]);
            mMYINFO.mNetworkLock = TRUE;
            mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
        }
        return;
    }
    if (mIsClick[2])
    {
        mIsClick[2] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10, uX, uY))
        {
            mMakeItemPresentPage--;
            if (mMakeItemSort == 1)
            {
                if (mMakeItemPresentPage < 20)
                {
                    mMakeItemPresentPage = 20;
                }
            }
            if (mMakeItemSort == 2)
            {
                if (mMakeItemPresentPage < 40)
                {
                    mMakeItemPresentPage = 40;
                }
            }
            if (mMakeItemSort == 3)
            {
                if (mMakeItemPresentPage < 60)
                {
                    mMakeItemPresentPage = 60;
                }
            }
            if (mMakeItemPresentPage < 0)
            {
                mMakeItemPresentPage = 0;
            }
        }
        Reset();
        SetInvalidIndex();
        return;
    }
    if (mIsClick[3])
    {
        mIsClick[3] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10, uX, uY))
        {
            mMakeItemPresentPage++;
            if (mMakeItemPresentPage > mMakeItemTotalPage - 1)
            {
                mMakeItemPresentPage = mMakeItemTotalPage - 1;
            }
        }
        Reset();
        SetInvalidIndex();
        return;
    }
}

void NPCUI::LBUTTONUP17(int uX, int uY)// Craft Skill Elder
{
    int v3;
    char* v4;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3143]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
            return;
        }
        if (!mIsClick[1])
        {
            if (mIsClick[2])
            {
                mIsClick[2] = 0;
                if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10, uX, uY))
                    return;
                if (--mMakeItemPresentPage < 0)
                {
                    mMakeItemPresentPage = 0;
                    return;
                }
            }
            else
            {
                if (!mIsClick[3])
                    return;
                mIsClick[3] = 0;
                if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10, uX, uY))
                    return;
                if (++mMakeItemPresentPage > mMakeItemTotalPage - 1)
                {
                    mMakeItemPresentPage = mMakeItemTotalPage - 1;
                    return;
                }
            }
            NPCUI::Reset();
            NPCUI::SetInvalidIndex();
            return;
        }
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414, uX, uY))
        {
            switch (mMakeItemPresentPage)
            {
            case 0:// Produce Skill 8th Box
                if (mInv[0].iIndex != 2150 ||
                    mInv[1].iIndex != 2150 ||
                    mInv[2].iIndex != 2150 ||
                    mInv[3].iIndex != 2150)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            default:
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
            {
                mTRANSFER.T_MAKE_SKILL_SEND(mMakeItemPresentPage, mPage[0], mIndex[0], mPage[1], mIndex[1], mPage[2], mIndex[2], mPage[3], mIndex[3]);
                mMYINFO.mNetworkLock = TRUE;
                mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
            }
            return;
        }
    }
}



void NPCUI::LBUTTONUP11(int uX, int uY)
{
    int v3;
    int v4;
    char* v5;
    char* v6;
    char* v7;
    char* v8;
    char* v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    float tCoord[3];
    int tZoneNum;
    int i;

    mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[596]) / 2;
    mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[596]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 4, uX, uY))
        {
            Off();
        }
    }
    else
    {
        for (i = 0; i < ReturnMoneyMoveNum(); ++i)
        {
            if (mIsClick[i + 1])
            {
                mIsClick[i + 1] = 0;
                if (uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * i + 26 && uY < mY + 18 * i + 38)
                {
                    tZoneNum = ReturnMoneyMoveZoneNumber(i);
                    if (tZoneNum)
                    {
                        if (mMYINFO.mAvatarInfo.aLevel1 < mZONEMAININFO.ReturnMinZoneLevelInfo(tZoneNum) || mMYINFO.mAvatarInfo.aLevel1 > mZONEMAININFO.ReturnMaxZoneLevelInfo(tZoneNum))
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(227), mFONTCOLOR.mData[44]);
                            return;
                        }
                        if (mMYINFO.mAvatarInfo.aMoney < 1000)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(214), mFONTCOLOR.mData[44]);
                            return;
                        }
                        if (mZONEMOVEINFO.ReturnNPCTelepoterCoord1(tZoneNum, tCoord))
                        {
                            if (tZoneNum == 170 || tZoneNum == 50 || tZoneNum == 52)
                            {
                                if (mPLAY.mWorldInfo.mTribeSymbolBattle == 1)
                                {
                                    mBASICUI.Insert1(mMESSAGE.Return(2042), mFONTCOLOR.mData[44]);
                                    return;
                                }
                                if (mMYINFO.mAvatarInfo.aCriticalBoostScroll < 1)
                                {
                                    mBASICUI.Insert1(mMESSAGE.Return(2014), mFONTCOLOR.mData[44]);
                                    return;
                                }
                                if (mMYINFO.mAvatarInfo.aLevel1 < 113)
                                {
                                    mBASICUI.Insert1(mMESSAGE.Return(2116), mFONTCOLOR.mData[44]);
                                    return;
                                }
                            }
                            if (!mMYINFO.mMoveZoneState)
                            {
                                mMYINFO.mMoveZoneState = 1;
                                mMYINFO.mMoveZoneSort = 5;
                                mMYINFO.mMoveZoneValue = 1000;
                                mMYINFO.mNextZoneNumber = tZoneNum;
                                memset(&mMYINFO.mAction, 0, sizeof(ACTION_INFO));
                                mMYINFO.mAction.aType = 0;
                                mMYINFO.mAction.aSort = 1;
                                mMYINFO.mAction.aFrame = 0.0;
                                mMYINFO.mAction.aLocation[0] = tCoord[0];
                                mMYINFO.mAction.aLocation[1] = tCoord[1];
                                mMYINFO.mAction.aLocation[2] = tCoord[2];
                                mMYINFO.mAction.aFront = (rand() % 360);
                                mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
                                mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, tZoneNum);
                            }
                            NPCUI::Off();
                        }
                    }
                }
                return;
            }
        }
    }
}

void NPCUI::LBUTTONUP12(int uX, int uY)
{
    int v3;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[688]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[300], mX + 95, mY + 409, uX, uY))
            {
                if (mMYINFO.mAvatarInfo.uSaveMoney >= 1)
                    mCHOICEUI.Set(15, 0, 0, 0, 0, 0, 0, 0, 0, 1, uX - 52, uY - 72);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3473], mX + 38, mY + 409, uX, uY)
                && mMYINFO.mAvatarInfo.uSaveMoney2 >= 1)
            {
                mCHOICEUI.Set(26, 0, 0, 0, 0, 0, 0, 0, 0, 1, uX - 52, uY - 72);
            }
        }
    }
}
void NPCUI::LBUTTONUP13(int uX, int uY) // Enchant Button Work
{
    int sX;
    int sY;
    char* tString;
    char* tString2;
    int tCost;
    ITEM_INFO* t;


    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[725]);

    if (mINVENUI.LBUTTONUP(uX, uY))
    {
        return;
    }

    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            Off();
        }
        return;
    }
    if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[726], mX + 171, mY + 414, uX, uY))
        {
            if (mPage[0] == -1 || mPage[1] == -1)
            {
                tString = mMESSAGE.Return(221);
                mBASICUI.Insert1(tString, 15);
                return;
            }
            switch (mInv[1].iIndex)
            {
            case 1019: tCost = 10000; break;
            case 1020: tCost = 30000; break;
            case 1021: tCost = 50000; break;
            case 1022: tCost = 70000; break;
            case 1023: tCost = 90000; break;
            case 1437: tCost = 130000; break;
            default: tCost = 0; break;
            }

            if (mMYINFO.uLoginPremium == 1 || mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService > 0)
            {
                tCost = (int)((float)tCost * 0.80f);
            }
            // Overenchant 25m
            if (mUTIL.ReturnISValue(mInv[0].iImproveState) >= 41)
            {
                tCost = 25000000;
            }

            if (mMYINFO.mAvatarInfo.aMoney < tCost)
            {
                tString = mMESSAGE.Return(214);
                mBASICUI.Insert1(tString, 15);
                return;
            }
            if (mUTIL.ReturnISValue(mInv[0].iImproveState) >= 20 && mMYINFO.mAvatarInfo.aProtectForDestroy < 1)
            {
                tString = mMESSAGE.Return(809);
                tString2 = mMESSAGE.Return(808);
                if (mUTIL.ReturnISValue(mInv[0].iImproveState) < 40)
                    mCBOXUI.Set(101, tString2, tString);
                else
                    mCBOXUI.Set(103, tString2, tString);
                return;
            }
            if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
            {
                if (mUTIL.ReturnISValue(mInv[0].iImproveState) < 40)
                    mTRANSFER.T_IMPROVE_ITEM_SEND(1, mPage[0], mIndex[0], mPage[1], mIndex[1]); // 0 ~ 120
                else
                    mTRANSFER.T_IMPROVE_ITEM_SEND(3, mPage[0], mIndex[0], mPage[1], mIndex[1]); // 123 ~ 150
                return;
            }
        }
        return;
    }

}

void NPCUI::LBUTTONUP14(int uX, int uY) // Socket Remove
{
    int sX;
    int sY;
    char* tString;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3333]);

    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                Off();
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[908], mX + 171, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 || mIndex[0] == -1)
                {
                    tString = mMESSAGE.Return(221);
                    mBASICUI.Insert1(tString, 15);
                    return;
                }
                if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
                {
                    mTRANSFER.T_SOCKET_ITEM_SEND(2, mPage[0], mIndex[0], mPage[1], mIndex[1]);
                    mMYINFO.mNetworkLock = TRUE;
                    mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                    return;
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP18(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    int v6;
    int v7;
    int v8;
    ITEM_INFO* v10;
    int v11;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[972]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[973], mX + 172, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 || mPage[1] == -1)
                {
                    v6 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(221);
                    mBASICUI.Insert1(v4, v6);
                }
                else
                {
                    v10 = mITEM.Search(mInv[0].iIndex);
                    if (v10)
                    {
                        v8 = v10->iType;
                        if (v8 == 3)
                        {
                            switch (v10->iLevel)
                            {
                            case 45:
                                v11 = 100000;
                                break;
                            case 55:
                                v11 = 200000;
                                break;
                            case 65:
                                v11 = 300000;
                                break;
                            case 75:
                                v11 = 400000;
                                break;
                            case 85:
                                v11 = 500000;
                                break;
                            case 95:
                                v11 = 600000;
                                break;
                            case 105:
                                v11 = 700000;
                                break;
                            case 114:
                                v11 = 800000;
                                break;
                            case 117:
                                v11 = 900000;
                                break;
                            case 120:
                                v11 = 1000000;
                                break;
                            case 123:
                                v11 = 1100000;
                                break;
                            case 126:
                                v11 = 1200000;
                                break;
                            case 129:
                                v11 = 1300000;
                                break;
                            case 132:
                                v11 = 1400000;
                                break;
                            case 135:
                                v11 = 1500000;
                                break;
                            case 138:
                                v11 = 1600000;
                                break;
                            case 141:
                                v11 = 1700000;
                                break;
                            case 144:
                                v11 = 1800000;
                                break;
                            case 145:
                                switch (v10->iMartialLevel)
                                {
                                case 0:
                                    v11 = 1900000;
                                    break;
                                case 1:
                                    v11 = 2000000;
                                    break;
                                case 2:
                                    v11 = 2100000;
                                    break;
                                case 3:
                                    v11 = 2200000;
                                    break;
                                case 4:
                                    v11 = 2300000;
                                    break;
                                case 5:
                                    v11 = 2400000;
                                    break;
                                case 6:
                                    v11 = 2500000;
                                    break;
                                case 7:
                                    v11 = 2600000;
                                    break;
                                case 8:
                                    v11 = 2700000;
                                    break;
                                case 9:
                                    v11 = 2800000;
                                    break;
                                case 10:
                                    v11 = 2900000;
                                    break;
                                case 11:
                                    v11 = 3000000;
                                    break;
                                default:
                                    goto LABEL_73;
                                }
                                break;
                            default:
                                break;
                            }
                        }
                        else if (v8 == 4)
                        {
                            switch (v10->iLevel)
                            {
                            case 100:
                                v11 = 1000000;
                                break;
                            case 110:
                                v11 = 2000000;
                                break;
                            case 115:
                                v11 = 3000000;
                                break;
                            case 118:
                                v11 = 4000000;
                                break;
                            case 121:
                                v11 = 5000000;
                                break;
                            case 124:
                                v11 = 6000000;
                                break;
                            case 127:
                                v11 = 7000000;
                                break;
                            case 130:
                                v11 = 8000000;
                                break;
                            case 133:
                                v11 = 9000000;
                                break;
                            case 136:
                                v11 = 10000000;
                                break;
                            case 139:
                                v11 = 11000000;
                                break;
                            case 142:
                                v11 = 12000000;
                                break;
                            case 145:
                                switch (v10->iMartialLevel)
                                {
                                case 0:
                                    v11 = 13000000;
                                    break;
                                case 1:
                                    v11 = 14000000;
                                    break;
                                case 2:
                                    v11 = 15000000;
                                    break;
                                case 3:
                                    v11 = 16000000;
                                    break;
                                case 4:
                                    v11 = 17000000;
                                    break;
                                case 5:
                                    v11 = 18000000;
                                    break;
                                case 6:
                                    v11 = 19000000;
                                    break;
                                case 7:
                                    v11 = 20000000;
                                    break;
                                case 8:
                                    v11 = 21000000;
                                    break;
                                case 9:
                                    v11 = 22000000;
                                    break;
                                case 10:
                                    v11 = 23000000;
                                    break;
                                case 11:
                                    v11 = 24000000;
                                    break;
                                default:
                                    goto LABEL_73;
                                }
                                break;
                            default:
                                break;
                            }
                        }
                    LABEL_73:
                        if (mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService > 0 || mMYINFO.uLoginPremium == 3)
                        {
                            v11 = (int)((float)v11 * 0.80f);
                        }
                        if (mMYINFO.mAvatarInfo.aMoney >= v11)
                        {
                            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                                mTRANSFER.T_HIGH_ITEM_SEND(mPage[0], mIndex[0], mPage[1], mIndex[1]);
                                mMYINFO.mNetworkLock = 1;
                                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                            }
                        }
                        else
                        {
                            v7 = mFONTCOLOR.mData[44];
                            v5 = mMESSAGE.Return(214);
                            mBASICUI.Insert1(v5, v7);
                        }
                    }
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP19(int uX, int uY) // Gem Remove
{
    int sX;
    int sY;
    ITEM_INFO* t;
    ITEM_INFO* t2;
    char* tString;
    char* tString2;
    int tMaxSocket = 0;
    int tSockets[5];

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3314]);
    if (mINVENUI.LBUTTONUP(uX, uY))
        return;
    if (tUltimateUpgradeState[0] == 0) // Page Number
    {
        if (mIsClick[0]) // Close Window
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                Off();
            }
            return;
        }
        if (mIsClick[1]) // Confirm
        {
            mIsClick[1] = 0;
            if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[908], mX + 171, mY + 414, uX, uY))
            {
                return;
            }
            if (mPage[0] == -1 || mPage[1] == -1)
            {
                tString = mMESSAGE.Return(221);
                mBASICUI.Insert1(tString, 15);
                return;
            }
            tMaxSocket = mUTIL.ReturnIUValue(mInv[0].iSocket[0]);
            if (tMaxSocket > 0 && tRemovGemIndex <= tMaxSocket)
            {
                if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
                {
                    mTRANSFER.T_SOCKET_ITEM_SEND(500 + tRemovGemIndex, mPage[0], mIndex[0], mPage[1], mIndex[1]);
                    mMYINFO.mNetworkLock = TRUE;
                    mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                    return;
                }
            }
            else
            {
                tString = mMESSAGE.Return(1802);
                mBASICUI.Insert1(tString, 15);
                return;
            }
            return;
        }
        // Choosing Gem to Remove
        tSockets[0] = 0;
        tSockets[1] = 0;
        tSockets[2] = 0;
        tSockets[3] = 0;
        tSockets[4] = 0;
        mUTIL.GetSocketAbility(mInv[0].iSocket[0], mInv[0].iSocket[1], mInv[0].iSocket[2], &tSockets[0], &tSockets[1], &tSockets[2], &tSockets[3], &tSockets[4]);
        if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3339], mX + 19, mY + 364, uX, uY))
            {
                return;
            }
            tRemovGemIndex = 1;
        }
        if (mIsClick[3])
        {
            mIsClick[3] = 0;
            if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3339], mX + 60, mY + 364, uX, uY))
                return;
            tRemovGemIndex = 2;
        }
        if (mIsClick[4])
        {
            mIsClick[4] = 0;
            if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3339], mX + 101, mY + 364, uX, uY))
                return;
            tRemovGemIndex = 3;
        }
        if (mIsClick[5])
        {
            mIsClick[5] = 0;
            if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3339], mX + 142, mY + 364, uX, uY))
                return;
            tRemovGemIndex = 4;
        }
        if (mIsClick[6])
        {
            mIsClick[6] = 0;
            if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3339], mX + 183, mY + 364, uX, uY))
                return;
            tRemovGemIndex = 5;
        }
        if (mIsClick[7])
        {
            mIsClick[7] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))
            {
                if (tUltimateUpgradeState[0] > 0)
                    tUltimateUpgradeState[0]--;
                Reset();
                SetInvalidIndex();
            }
        }
        if (mIsClick[8])
        {
            mIsClick[8] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
            {
                if (tUltimateUpgradeState[0] < tUltimateUpgradeState[1] - 1)
                    tUltimateUpgradeState[0]++;
                Reset();
                SetInvalidIndex();
            }
        }
        return;
    }
    if (tUltimateUpgradeState[0] == 1)
    {
        if (mIsClick[0]) // Close Window
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                Off();
            }
            return;
        }
        if (mIsClick[1]) // Confirm
        {
            mIsClick[1] = 0;
            if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[908], mX + 171, mY + 414, uX, uY))
            {
                return;
            }
            if (mPage[0] == -1 || mPage[1] == -1)
            {
                tString = mMESSAGE.Return(221);
                mBASICUI.Insert1(tString, 15);
                return;
            }
            if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
            {
                mTRANSFER.T_SOCKET_ITEM_SEND(7, mPage[0], mIndex[0], mPage[1], mIndex[1]);
                mMYINFO.mNetworkLock = TRUE;
                mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                return;
            }
        }
        if (mIsClick[7])
        {
            mIsClick[7] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))
            {
                if (tUltimateUpgradeState[0] > 0)
                    tUltimateUpgradeState[0]--;
                Reset();
                SetInvalidIndex();
            }
        }
        if (mIsClick[8])
        {
            mIsClick[8] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
            {
                if (tUltimateUpgradeState[0] < tUltimateUpgradeState[1] - 1)
                    tUltimateUpgradeState[0]++;
                Reset();
                SetInvalidIndex();
            }
        }
        return;
    }
}

void NPCUI::LBUTTONUP20(int uX, int uY)
{
    int sX, sY;
    int i, j, k;
    char* tstr;
    int tstrlen;
    int tZoneNumber;
    int tLevel;
    float tLocation[3];

    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[596]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[596]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 4, uX, uY))
            NPCUI::Off();
    }
    else
    {
        for (i = 0; i < NPCUI::ReturnGuardMoveNum(); ++i)
        {
            if (mIsClick[i + 1])
            {
                mIsClick[i + 1] = 0;
                if (uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * i + 9 && uY < mY + 18 * i + 21)
                {
                    tZoneNumber = NPCUI::ReturnGuardMoveZone(i);
                    if (tZoneNumber)
                    {
                        tLevel = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
                        if (tLevel >= mZONEMAININFO.ReturnMinZoneLevelInfo(tZoneNumber) && tLevel <= mZONEMAININFO.ReturnMaxZoneLevelInfo(tZoneNumber))
                        {
                            switch (i)
                            {
                            case 1:
                                if (!NPCUI::CheckPossibleMoveLevelBattleZone())
                                {
                                    tstr = mMESSAGE.Return(229);
                                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                    return;
                                }
                                break;
                            case 2:
                                if (!NPCUI::CheckPossibleMove319ZoneNumber())
                                {
                                    tstr = mMESSAGE.Return(229);
                                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                    return;
                                }
                                break;
                            case 3:
                                if (mPLAY.mWorldInfo.mTribeSymbolBattle == 1)
                                {
                                    tstr = mMESSAGE.Return(229);
                                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                    return;
                                }
                                break;

                            case 7:
                                if (mMYINFO.mAvatarInfo.aZone125TypeTime < 1)
                                {
                                    mBASICUI.Insert1(mMESSAGE.Return(484), mFONTCOLOR.mData[44]);
                                    return;
                                }
                                break;

                            case 8:
                                if (!NPCUI::CheckPossibleMoveZone175TypeZone())
                                {
                                    tstr = mMESSAGE.Return(229);
                                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                    return;
                                }
                                if (mMYINFO.mAvatarInfo.aNineTowerKeyNum < 1)
                                {
                                    tstr = mMESSAGE.Return(819);
                                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                    return;
                                }
                                break;

                            case 10:
                                if (mMYINFO.mAvatarInfo.aLevel2 < 12)
                                {
                                    tstr = mMESSAGE.Return(229);
                                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                    return;
                                }
                                if (mMYINFO.mAvatarInfo.aIslandOfBloodTime < 1)
                                {
                                    tstr = mMESSAGE.Return(1222);
                                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                    return;
                                }
                                break;

                            case 11:
                                if (mMYINFO.mAvatarInfo.aRebirth < 1)
                                {
                                    tstr = mMESSAGE.Return(229);
                                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                    return;
                                }
                                if (mPLAY.mWorldInfo.mLifeOrDeathState[mMYINFO.mAvatarInfo.aRebirth - 1])
                                {
                                    tstr = mMESSAGE.Return(229);
                                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                    return;
                                }
                                break;

                            case 12:
                                if (mPLAY.mWorldInfo.mZone194State != 1)
                                {
                                    tstr = mMESSAGE.Return(229);
                                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                    return;
                                }
                                break;

                            case 13:
                                if (!NPCUI::CheckPossibleEnter267TypeZoneNumber())
                                {
                                    tstr = mMESSAGE.Return(229);
                                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                    return;
                                }
                                break;


                            default:
                                break;
                            }


                            // Teleport  Instructions
                            if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, tZoneNumber, &tLocation[0]))
                            {
                                mZONEMOVEINFO.SetFirstCoord(tZoneNumber, &tLocation[0]);
                            }
                            if (!mMYINFO.mMoveZoneState)
                            {
                                mMYINFO.mMoveZoneState = 1;
                                mMYINFO.mMoveZoneSort = 6;
                                mMYINFO.mMoveZoneValue = 0;
                                mMYINFO.mNextZoneNumber = tZoneNumber;
                                memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
                                mMYINFO.mAction.aType = 0;
                                mMYINFO.mAction.aSort = 1;
                                mMYINFO.mAction.aFrame = 0.0;
                                mMYINFO.mAction.aLocation[0] = tLocation[0];
                                mMYINFO.mAction.aLocation[1] = tLocation[1];
                                mMYINFO.mAction.aLocation[2] = tLocation[2];
                                mMYINFO.mAction.aFront = (rand() % 360);
                                mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
                                mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, tZoneNumber);
                            }
                            NPCUI::Off();
                        }
                    }
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP21(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    char* v6;
    char* v7;
    int v8;
    int v9;
    int v10;
    int a7;
    int a9;
    int a6;
    int a8;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1164]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 7, mY + 7, uX, uY))
                NPCUI::Off();
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 152, mY + 411, uX, uY) && mCashShopPage > 0)
            {
                --mCashShopPage;
                mCashShopIndex = -1;
            }
        }
        else if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 250, mY + 411, uX, uY)
                && mCashShopPage < mCashShopItem[mCashShopMaxPage] - 1)
            {
                ++mCashShopPage;
                mCashShopIndex = -1;
            }
        }
        else if (mIsClick[3])
        {
            mIsClick[3] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1338], mX + 361, mY + 411, uX, uY))
            {
                if (mCashShopIndex == -1)
                {
                    v8 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(685);
                    mBASICUI.Insert1(v4, v8);
                }
                else if (mCashItemAmount >= mCashShopInfo[mCashShopMaxPage][mCashShopPage][mCashShopIndex][3])
                {
                    mINVENUI.PutInventory1(-1, -1, mCashShopInfo[mCashShopMaxPage][mCashShopPage][mCashShopIndex][1], mCashShopInfo[mCashShopMaxPage][mCashShopPage][mCashShopIndex][2], &a6, &a7, &a8, &a9, -1);
                    if (a6 == -1)
                    {
                        v10 = mFONTCOLOR.mData[44];
                        v6 = mMESSAGE.Return(117);
                        mBASICUI.Insert1(v6, v10);
                    }
                    else
                    {
                        v7 = mMESSAGE.Return(687);
                        mCBOXUI.Set(28, v7, "");
                    }
                }
                else
                {
                    v9 = mFONTCOLOR.mData[44];
                    v5 = mMESSAGE.Return(686);
                    mBASICUI.Insert1(v5, v9);
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP22(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    int v6;
    int v7;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3313]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[908], mX + 172, mY + 414, uX, uY))
            {
                if (mPage[0] == -1)
                {
                    v6 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(221);
                    mBASICUI.Insert1(v4, v6);
                }
                else if (mMYINFO.mAvatarInfo.aMoney >= 100000000)
                {
                    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        mTRANSFER.T_SOCKET_ITEM_SEND(1, mPage[0], mIndex[0], -1, -1);
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                    }
                }
                else
                {
                    v7 = mFONTCOLOR.mData[44];
                    v5 = mMESSAGE.Return(214);
                    mBASICUI.Insert1(v5, v7);
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP23(int uX, int uY)
{
    int sX;
    int sY;
    ITEM_INFO* t;
    ITEM_INFO* t2;
    char* tString;
    char* tString2;
    char* tString3;
    int tItemSort = 0;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3314]);
    if (mINVENUI.LBUTTONUP(uX, uY))
    {
        return;
    }
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            return;
        }
        Off();
        return;
    }
    if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (mPageSort == 0)
        {
            if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3315], mX + 171, mY + 414, uX, uY))
            {
                return;
            }
            if (mPage[0] == -1 || mIndex[0] == -1)
            {
                tString = mMESSAGE.Return(221);
                mBASICUI.Insert1(tString, 15);
                return;
            }
            t = mITEM.Search(mInv[0].iIndex);
            t2 = mITEM.Search(mInv[1].iIndex);
            if (!t || !t2)
                return;
            if (t->iType == 3 || t->iType == 4)
            {
                if (t->iSort != 7 && t->iSort != 8 && t->iSort != 9 && t->iSort != 10 && t->iSort != 11 && t->iSort != 12 && t->iSort != 13 && t->iSort != 14
                    && t->iSort != 15 && t->iSort != 16 && t->iSort != 17 && t->iSort != 18 && t->iSort != 19 && t->iSort != 20 && t->iSort != 21)
                {
                    mBASICUI.Insert1("[SYSTEM] Can not inlay gems on non-gear Items.", 15);
                    return;
                }
                if (t2->iIndex != 531 && t2->iIndex != 1244)
                {
                    //tString = mMESSAGE.Return();
                    mBASICUI.Insert1("[SYSTEM] Can only use Normal Diamonds on Rare or Elite Gears.", 15);
                    return;
                }
                if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
                {
                    mTRANSFER.T_SOCKET_ITEM_SEND(3, mPage[0], mIndex[0], mPage[1], mIndex[1]);
                    mMYINFO.mNetworkLock = TRUE;
                    mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                    return;
                }
            }
            if (t->iType == 5 || t->iType == 6 || t->iType == 7 || t->iType == 8)
            {
                if (t->iSort != 7 && t->iSort != 8 && t->iSort != 9 && t->iSort != 10 && t->iSort != 11 && t->iSort != 12 && t->iSort != 13 && t->iSort != 14
                    && t->iSort != 15 && t->iSort != 16 && t->iSort != 17 && t->iSort != 18 && t->iSort != 19 && t->iSort != 20 && t->iSort != 21)
                {
                    mBASICUI.Insert1("[SYSTEM] Can not inlay gems on non-gear Items.", 15);
                    return;
                }
                if (t2->iIndex != 2385 && t2->iIndex != 2449)
                {
                    mBASICUI.Insert1("[SYSTEM] Can only use Legendary Diamonds on Legendary Gears.", 15);
                    return;
                }
                if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
                {
                    mTRANSFER.T_SOCKET_ITEM_SEND(4, mPage[0], mIndex[0], mPage[1], mIndex[1]);
                    mMYINFO.mNetworkLock = TRUE;
                    mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                    return;
                }
            }
            /*if ( !mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState )
            {
                mTRANSFER.T_SOCKET_ITEM_SEND(3, uInfo[0], uInfo2[0], uInfo[1], uInfo2[1]);
                mMYINFO.mNetworkLock = TRUE;
                mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                return;
            }*/
        }
    }
    if (mIsClick[4]) // Celestial Star Inlay System
    {
        mIsClick[4] = 0;
        if (mPageSort != 1)
        {
            Off();
            return;
        }
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3315], mX + 171, mX + 414, uX, uY))
        {
            return;
        }
        if (mPage[0] == -1 || mIndex[0] == -1)
        {
            tString = mMESSAGE.Return(221);
            mBASICUI.Insert1(tString, 15);
            return;
        }
        t = mITEM.Search(mInv[0].iIndex);
        t2 = mITEM.Search(mInv[1].iIndex);
        if (!t || !t2)
            return;
        tItemSort = mUTIL.ReturnItemSort(t);
        if (tItemSort != 11 && tItemSort != 12)
        {
            tString = mMESSAGE.Return(2871);
            mBASICUI.Insert1(tString, 15);
            return;
        }
        if (t2->iIndex < 19301 || t2->iIndex > 19350 &&
            t2->iIndex < 19357 || t2->iIndex > 19406)
        {
            tString = mMESSAGE.Return(2507);
            mBASICUI.Insert1(tString, 15);
            return;
        }
        if (mInv[0].iSocket[4] % 1000 <= 0)
        {
            if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
            {
                mTRANSFER.T_SOCKET_ITEM_SEND(6, mPage[0], mIndex[0], mPage[1], mIndex[1]);
                mMYINFO.mNetworkLock = TRUE;
                mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                return;
            }
        }
        else
        {
            tString = mMESSAGE.Return(1799);
            mBASICUI.Insert1(tString, 15);
            return;
        }
        return;
    }
    if (mIsClick[2])
    {
        mIsClick[2] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))
        {
            if (tUltimateUpgradeState[0] > 0)
                tUltimateUpgradeState[0]--;
            Reset();
            SetInvalidIndex();
        }
        return;
    }
    if (mIsClick[3])
    {
        mIsClick[3] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
        {
            if (tUltimateUpgradeState[0] < tUltimateUpgradeState[1] - 1)
            {
                tUltimateUpgradeState[0]++;
                Reset();
                SetInvalidIndex();
            }
        }
        return;
    }


}

void NPCUI::LBUTTONUP25(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    int v6;
    int v7;
    int v8;
    ITEM_INFO* v10;
    int v11;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1356]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1357], mX + 172, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 || mPage[1] == -1)
                {
                    v6 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(221);
                    mBASICUI.Insert1(v4, v6);
                }
                else
                {
                    v10 = mITEM.Search(mInv[0].iIndex);
                    if (v10)
                    {
                        v8 = v10->iType;
                        if (v8 == 3)
                        {
                            switch (v10->iLevel)
                            {
                            case 55:
                                v11 = 100000;
                                break;
                            case 65:
                                v11 = 200000;
                                break;
                            case 75:
                                v11 = 300000;
                                break;
                            case 85:
                                v11 = 400000;
                                break;
                            case 95:
                                v11 = 500000;
                                break;
                            case 105:
                                v11 = 600000;
                                break;
                            case 114:
                                v11 = 700000;
                                break;
                            case 117:
                                v11 = 800000;
                                break;
                            case 120:
                                v11 = 900000;
                                break;
                            case 123:
                                v11 = 1000000;
                                break;
                            case 126:
                                v11 = 1100000;
                                break;
                            case 129:
                                v11 = 1200000;
                                break;
                            case 132:
                                v11 = 1300000;
                                break;
                            case 135:
                                v11 = 1400000;
                                break;
                            case 138:
                                v11 = 1500000;
                                break;
                            case 141:
                                v11 = 1600000;
                                break;
                            case 144:
                                v11 = 1700000;
                                break;
                            case 145:
                                switch (v10->iMartialLevel)
                                {
                                case 0:
                                    v11 = 1800000;
                                    break;
                                case 1:
                                    v11 = 1900000;
                                    break;
                                case 2:
                                    v11 = 2000000;
                                    break;
                                case 3:
                                    v11 = 2100000;
                                    break;
                                case 4:
                                    v11 = 2200000;
                                    break;
                                case 5:
                                    v11 = 2300000;
                                    break;
                                case 6:
                                    v11 = 2400000;
                                    break;
                                case 7:
                                    v11 = 2500000;
                                    break;
                                case 8:
                                    v11 = 2600000;
                                    break;
                                case 9:
                                    v11 = 2700000;
                                    break;
                                case 10:
                                    v11 = 2800000;
                                    break;
                                case 11:
                                    v11 = 2900000;
                                    break;
                                case 12:
                                    v11 = 3000000;
                                    break;
                                default:
                                    goto LABEL_73;
                                }
                                break;
                            default:
                                break;
                            }
                        }
                        else if (v8 == 4)
                        {
                            switch (v10->iLevel)
                            {
                            case 110:
                                v11 = 1000000;
                                break;
                            case 115:
                                v11 = 2000000;
                                break;
                            case 118:
                                v11 = 3000000;
                                break;
                            case 121:
                                v11 = 4000000;
                                break;
                            case 124:
                                v11 = 5000000;
                                break;
                            case 127:
                                v11 = 6000000;
                                break;
                            case 130:
                                v11 = 7000000;
                                break;
                            case 133:
                                v11 = 8000000;
                                break;
                            case 136:
                                v11 = 9000000;
                                break;
                            case 139:
                                v11 = 10000000;
                                break;
                            case 142:
                                v11 = 11000000;
                                break;
                            case 145:
                                switch (v10->iMartialLevel)
                                {
                                case 0:
                                    v11 = 12000000;
                                    break;
                                case 1:
                                    v11 = 13000000;
                                    break;
                                case 2:
                                    v11 = 14000000;
                                    break;
                                case 3:
                                    v11 = 15000000;
                                    break;
                                case 4:
                                    v11 = 16000000;
                                    break;
                                case 5:
                                    v11 = 17000000;
                                    break;
                                case 6:
                                    v11 = 18000000;
                                    break;
                                case 7:
                                    v11 = 19000000;
                                    break;
                                case 8:
                                    v11 = 20000000;
                                    break;
                                case 9:
                                    v11 = 21000000;
                                    break;
                                case 10:
                                    v11 = 22000000;
                                    break;
                                case 11:
                                    v11 = 23000000;
                                    break;
                                case 12:
                                    v11 = 24000000;
                                    break;
                                default:
                                    goto LABEL_73;
                                }
                                break;
                            default:
                                break;
                            }
                        }
                    LABEL_73:
                        if (mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService > 0 || mMYINFO.uLoginPremium == 3)
                        {
                            v11 = (int)((float)v11 * 0.80f);
                        }
                        if (mMYINFO.mAvatarInfo.aMoney >= v11)
                        {
                            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                                mTRANSFER.T_LOW_ITEM_SEND(mPage[0], mIndex[0], mPage[1], mIndex[1]);
                                mMYINFO.mNetworkLock = 1;
                                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                            }
                        }
                        else
                        {
                            v7 = mFONTCOLOR.mData[44];
                            v5 = mMESSAGE.Return(214);
                            mBASICUI.Insert1(v5, v7);
                        }
                    }
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP26(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    char* v6;
    char* v7;
    char* v8;
    char* v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int v14;
    char* v15;
    int v16;
    ITEM_INFO* tITEM2;
    int v19;
    ITEM_INFO* tITEM1;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1477]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
            return;
        }
        if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1478], mX + 172, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 || mPage[1] == -1)
                {
                    v10 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(221);
                    mBASICUI.Insert1(v4, v10);
                    return;
                }
                tITEM1 = mITEM.Search(mInv[0].iIndex);
                if (tITEM1)
                {
                    tITEM2 = mITEM.Search(mInv[1].iIndex);
                    if (tITEM2)
                    {
                        if (mUTIL.ReturnIUMaterialRate(tITEM2->iIndex) <= 0)
                        {
                            if (tITEM1->iSort != tITEM2->iSort)
                            {
                                v11 = mFONTCOLOR.mData[44];
                                v5 = mMESSAGE.Return(692);
                                mBASICUI.Insert1(v5, v11);
                                return;
                            }
                            if (tITEM1->iCheckItemSet == 2)
                            {
                                if (tITEM1->iCheckItemSet != tITEM2->iCheckItemSet || tITEM1->iType != tITEM2->iType)
                                    goto LABEL_21;
                            }
                            else if (tITEM2->iCheckItemSet == 2)
                            {
                            LABEL_21:
                                v12 = mFONTCOLOR.mData[44];
                                v6 = mMESSAGE.Return(698);
                                mBASICUI.Insert1(v6, v12);
                                return;
                            }
                            v16 = tITEM1->iType;
                            if (v16 == 3)
                            {
                                if (tITEM2->iMartialLevel + tITEM2->iLevel == tITEM1->iMartialLevel + tITEM1->iLevel)
                                    goto LABEL_65;
                            }
                            else
                            {
                                if (v16 != 4)
                                    goto LABEL_65;
                                switch (tITEM1->iLevel)
                                {
                                case 100:
                                    if (tITEM2->iLevel == 95)
                                        goto LABEL_65;
                                    break;
                                case 110:
                                    if (tITEM2->iLevel == 105)
                                        goto LABEL_65;
                                    break;
                                case 115:
                                    if (tITEM2->iLevel != 114)
                                        break;
                                    goto LABEL_65;
                                case 118:
                                    if (tITEM2->iLevel == 117)
                                        goto LABEL_65;
                                    break;
                                case 121:
                                    if (tITEM2->iLevel != 120)
                                        break;
                                    goto LABEL_65;
                                case 124:
                                    if (tITEM2->iLevel == 123)
                                        goto LABEL_65;
                                    break;
                                case 127:
                                    if (tITEM2->iLevel != 126)
                                        break;
                                    goto LABEL_65;
                                case 130:
                                    if (tITEM2->iLevel == 129)
                                        goto LABEL_65;
                                    break;
                                case 133:
                                    if (tITEM2->iLevel != 132)
                                        break;
                                    goto LABEL_65;
                                case 136:
                                    if (tITEM2->iLevel == 135)
                                        goto LABEL_65;
                                    break;
                                case 139:
                                    if (tITEM2->iLevel != 138)
                                        break;
                                    goto LABEL_65;
                                case 142:
                                    if (tITEM2->iLevel == 141)
                                        goto LABEL_65;
                                    break;
                                case 145:
                                    if (tITEM1->iMartialLevel >= 1)
                                    {
                                        if (tITEM2->iMartialLevel + tITEM2->iLevel == tITEM1->iMartialLevel + tITEM1->iLevel)
                                            goto LABEL_65;
                                    }
                                    else if (tITEM2->iLevel == 144 || tITEM2->iLevel == 145)
                                    {
                                        goto LABEL_65;
                                    }
                                    break;
                                default:
                                    goto LABEL_65;
                                }
                            }
                            v13 = mFONTCOLOR.mData[44];
                            v7 = mMESSAGE.Return(693);
                            mBASICUI.Insert1(v7, v13);
                            return;
                        }
                    LABEL_65:
                        switch (mUTIL.ReturnIUValue(mInv[0].iImproveState))
                        {
                        case 0:
                            v19 = 1000000;
                            break;
                        case 1:
                            v19 = 1500000;
                            break;
                        case 2:
                            v19 = 2000000;
                            break;
                        case 3:
                            v19 = 2500000;
                            break;
                        case 4:
                            v19 = 3000000;
                            break;
                        case 5:
                            v19 = 3500000;
                            break;
                        case 6:
                            v19 = 4000000;
                            break;
                        case 7:
                            v19 = 4500000;
                            break;
                        case 8:
                            v19 = 5000000;
                            break;
                        case 9:
                            v19 = 5500000;
                            break;
                        case 10:
                            v19 = 6000000;
                            break;
                        case 11:
                            v19 = 6500000;
                            break;
                        default:
                            break;
                        }
                        if (tITEM1->iCheckItemSet == 2)
                        {
                            switch (mUTIL.ReturnIUValue(mInv[0].iImproveState))
                            {
                            case 0:
                                v19 = 100000000;
                                break;
                            case 1:
                                v19 = 150000000;
                                break;
                            case 2:
                                v19 = 200000000;
                                break;
                            case 3:
                                v19 = 250000000;
                                break;
                            case 4:
                                v19 = 300000000;
                                break;
                            case 5:
                                v19 = 350000000;
                                break;
                            case 6:
                                v19 = 400000000;
                                break;
                            case 7:
                                v19 = 450000000;
                                break;
                            case 8:
                                v19 = 500000000;
                                break;
                            case 9:
                                v19 = 550000000;
                                break;
                            case 10:
                                v19 = 600000000;
                                break;
                            case 11:
                                v19 = 650000000;
                                break;
                            default:
                                break;
                            }
                        }
                        if (mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService > 0 || mMYINFO.uLoginPremium == 3)
                        {
                            v19 = (int)((float)v19 * 0.80f);
                        }
                        if (mMYINFO.mAvatarInfo.aMoney >= v19)
                        {
                            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                                if (tITEM2->iCheckItemSet == 2 && mUTIL.ReturnISValue(mInv[1].iImproveState) > 0)
                                {
                                    v15 = mMESSAGE.Return(2358);
                                    v9 = mMESSAGE.Return(2357);
                                    mCBOXUI.Set(82, v9, v15);
                                }
                                else
                                {
                                    mTRANSFER.T_ADD_ITEM_SEND(
                                        mPage[0],
                                        mIndex[0],
                                        mPage[1],
                                        mIndex[1]);
                                    mMYINFO.mNetworkLock = 1;
                                    mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                                }
                            }
                        }
                        else
                        {
                            v14 = mFONTCOLOR.mData[44];
                            v8 = mMESSAGE.Return(214);
                            mBASICUI.Insert1(v8, v14);
                        }
                        return;
                    }
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP27(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    char* v7;
    char* v8;
    char* v9;
    char* v10;
    char* v11;
    char* v12;
    char* v13;
    char* v14;
    char* v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int v27;

    v27 = mGambleInfo[3];
    v25 = mGambleInfo[0];
    if (v25)
    {
        if (v25 == 1)
        {
            v5 = mMYINFO.mScreenXSize / 2;
            mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3262]) / 2;
            v6 = mMYINFO.mScreenYSize / 2;
            mY = v6 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3262]) / 2;
            if (mIsClick[4])
            {
                mIsClick[4] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1001], mX + 517, mY + 328, uX, uY))
                {
                    if (mGambleInfo[1])
                    {
                        if (mGambleInfo[1] == 1)
                        {
                            if (mIsClick[0])
                            {
                                v27 += 100000;
                            }
                            else if (mIsClick[1])
                            {
                                v27 += 500000;
                            }
                            else if (mIsClick[2])
                            {
                                v27 += 1000000;
                            }
                            else if (mIsClick[3])
                            {
                                v27 += 5000000;
                            }
                            if (v27 <= 10000000)
                            {
                                if (v27 <= mMYINFO.mAvatarInfo.aMoney)
                                {
                                    mGambleInfo[3] = v27;
                                }
                                else
                                {
                                    v19 = mFONTCOLOR.mData[44];
                                    v10 = mMESSAGE.Return(1666);
                                    mBASICUI.Insert1(v10, v19);
                                }
                            }
                            else
                            {
                                v18 = mFONTCOLOR.mData[44];
                                v9 = mMESSAGE.Return(1664);
                                mBASICUI.Insert1(v9, v18);
                            }
                        }
                    }
                    else
                    {
                        if (mIsClick[0])
                        {
                            ++v27;
                        }
                        else if (mIsClick[1])
                        {
                            v27 += 5;
                        }
                        else if (mIsClick[2])
                        {
                            v27 += 10;
                        }
                        else if (mIsClick[3])
                        {
                            v27 += 50;
                        }
                        if (v27 <= 100)
                        {
                            if (v27 <= mMYINFO.mAvatarInfo.aKillOtherTribe)
                            {
                                mGambleInfo[3] = v27;
                            }
                            else
                            {
                                v17 = mFONTCOLOR.mData[44];
                                v8 = mMESSAGE.Return(1667);
                                mBASICUI.Insert1(v8, v17);
                            }
                        }
                        else
                        {
                            v16 = mFONTCOLOR.mData[44];
                            v7 = mMESSAGE.Return(1665);
                            mBASICUI.Insert1(v7, v16);
                        }
                    }
                }
            }
            else if (mIsClick[5])
            {
                mIsClick[5] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1002], mX + 542, mY + 328, uX, uY))
                {
                    if (mGambleInfo[1])
                    {
                        if (mGambleInfo[1] == 1)
                        {
                            if (mIsClick[0])
                            {
                                v27 -= 100000;
                            }
                            else if (mIsClick[1])
                            {
                                v27 -= 500000;
                            }
                            else if (mIsClick[2])
                            {
                                v27 -= 1000000;
                            }
                            else if (mIsClick[3])
                            {
                                v27 -= 5000000;
                            }
                            if (v27 >= 0)
                            {
                                mGambleInfo[3] = v27;
                            }
                            else
                            {
                                v21 = mFONTCOLOR.mData[44];
                                v12 = mMESSAGE.Return(1668);
                                mBASICUI.Insert1(v12, v21);
                            }
                        }
                    }
                    else
                    {
                        if (mIsClick[0])
                        {
                            --v27;
                        }
                        else if (mIsClick[1])
                        {
                            v27 -= 5;
                        }
                        else if (mIsClick[2])
                        {
                            v27 -= 10;
                        }
                        else if (mIsClick[3])
                        {
                            v27 -= 50;
                        }
                        if (v27 >= 0)
                        {
                            mGambleInfo[3] = v27;
                        }
                        else
                        {
                            v20 = mFONTCOLOR.mData[44];
                            v11 = mMESSAGE.Return(1669);
                            mBASICUI.Insert1(v11, v20);
                        }
                    }
                }
            }
            else if (mIsClick[6])
            {
                mIsClick[6] = 0;
                GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 515, mY + 380, uX, uY);
            }
            else if (mIsClick[7])
            {
                mIsClick[7] = 0;
                GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 594, mY + 380, uX, uY);
            }
            else if (mIsClick[8])
            {
                mIsClick[8] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1491], mX + 522, mY + 457, uX, uY))
                {
                    if (mGambleInfo[3])
                    {
                        if (!mGambleInfo[2] || mGambleInfo[2] == 1)
                        {
                            mGambleInfo[0] = 2;
                            GSOUND::Play(&mGDATA.mSOUND_5[149], 0, 100);
                            mGambleInfo[5] = timeGetTime();
                        }
                        else
                        {
                            v24 = mFONTCOLOR.mData[44];
                            v15 = mMESSAGE.Return(1663);
                            mBASICUI.Insert1(v15, v24);
                        }
                    }
                    else if (mGambleInfo[1])
                    {
                        if (mGambleInfo[1] == 1)
                        {
                            v23 = mFONTCOLOR.mData[44];
                            v14 = mMESSAGE.Return(1661);
                            mBASICUI.Insert1(v14, v23);
                        }
                    }
                    else
                    {
                        v22 = mFONTCOLOR.mData[44];
                        v13 = mMESSAGE.Return(1662);
                        mBASICUI.Insert1(v13, v22);
                    }
                }
            }
            else if (mIsClick[9])
            {
                mIsClick[9] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1005], mX + 581, mY + 457, uX, uY))
                {
                    mGambleInfo[3] = 0;
                    mGambleInfo[2] = -1;
                }
            }
            else if (mIsClick[10])
            {
                mIsClick[10] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1007], mX + 639, mY + 457, uX, uY))
                    NPCUI::Off();
            }
        }
    }
    else
    {
        v3 = mMYINFO.mScreenXSize / 2;
        mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3255]) / 2;
        v4 = mMYINFO.mScreenYSize / 2;
        mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3255]) / 2;
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3256], mX + 125, mY + 93, uX, uY))
            {
                mGambleInfo[1] = 0;
                mGambleInfo[0] = 1;
            }
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3259], mX + 249, mY + 93, uX, uY))
            {
                mGambleInfo[1] = 1;
                mGambleInfo[0] = 1;
            }
        }
    }
}
void NPCUI::LBUTTONUP28(int uX, int uY)
{
    int v3;
    int v4;
    char* v5;
    char* v6;
    char* v7;
    char* v8;
    char* v9;
    char* v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int i;
    int j;
    int k;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1593]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1593]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1594], mX + 188, mY + 93, uX, uY))
        {
            if (GetWindowTextA(mEDITBOX.mDATA[16], tTribePosAvtName, 13))
            {
                for (i = 0; i < 12 && strcmp(mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][i], ""); ++i)
                    ;
                if (i == 12)
                {
                    v12 = mFONTCOLOR.mData[44];
                    v6 = mMESSAGE.Return(772);
                    mBASICUI.Insert1(v6, v12);
                }
                else
                {
                    for (j = 0; j < 12 && strcmp(mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][j], tTribePosAvtName); ++j)
                    {
                        ;
                    }
                    if (j >= 12)
                    {
                        v8 = mMESSAGE.Return(768);
                        mCBOXUI.Set(33, v8, "");
                    }
                    else
                    {
                        v13 = mFONTCOLOR.mData[44];
                        v7 = mMESSAGE.Return(1148);
                        mBASICUI.Insert1(v7, v13);
                    }
                }
            }
            else
            {
                v11 = mFONTCOLOR.mData[44];
                v5 = mMESSAGE.Return(771);
                mBASICUI.Insert1(v5, v11);
            }
        }
    }
    else
    {
        for (k = 0; k < 12; ++k)
        {
            if (mIsClick[k + 1])
            {
                mIsClick[k + 1] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2647], mX + 188, mY + 24 * k + 169, uX, uY))
                {
                    if (!strcmp(mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][k], ""))
                    {
                        v14 = mFONTCOLOR.mData[44];
                        v9 = mMESSAGE.Return(769);
                        mBASICUI.Insert1(v9, v14);
                    }
                    else
                    {
                        strcpy(tTribePosAvtName, mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][k]);
                        v10 = mMESSAGE.Return(770);
                        mCBOXUI.Set(34, v10, "");
                    }
                }
                return;
            }
        }
        if (mIsClick[13])
        {
            mIsClick[13] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 213, mY + 464, uX, uY))
                NPCUI::Off();
        }
    }
}

void NPCUI::LBUTTONUP29(int uX, int uY)
{
    int v3;
    int v4;
    char* v5;
    int v6;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1641]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1641]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1646], mX + 213, mY + 187, uX, uY))
            NPCUI::Off();
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1642], mX + 17, mY + 146, uX, uY))
        {
            if (mMYINFO.mAvatarInfo.aTeacherPoint >= 100000)
            {
                if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    if (mMYINFO.mAvatarInfo.aTeacherPoint >= 10000000)
                        mPLAY.PROCESS_DATA_235_SEND(100);
                    else
                        mPLAY.PROCESS_DATA_235_SEND(mMYINFO.mAvatarInfo.aTeacherPoint / 100000);
                    mMYINFO.mNetworkLock = 1;
                    mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                }
            }
            else
            {
                v6 = mFONTCOLOR.mData[44];
                v5 = mMESSAGE.Return(831);
                mBASICUI.Insert1(v5, v6);
            }
        }
    }
}

void NPCUI::LBUTTONUP30(int uX, int uY)
{
    int v3;
    int v4;
    char* v5;
    char* v6;
    char* v7;
    char* v8;
    char* v9;
    int v10;
    int v11;
    int v12;
    int v13;
    ITEM_INFO* a1;
    ITEM_INFO* a1a;
    int v17;
    ITEM_INFO* v18;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    if (mPageSort)
    {
        if (mPageSort == 1)
        {
            v4 = mX + 23;
            mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4152]);
        }
    }
    else
    {
        v3 = mX + 23;
        mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1661]);
    }
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
            return;
        }
        if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 172, mY + 414, uX, uY))
                return;
            if (mPageSort)
            {
                if (mPageSort != 1)
                    return;
                if (mPage[0] == -1 || mPage[1] == -1)
                {
                LABEL_86:
                    v11 = mFONTCOLOR.mData[44];
                    v6 = mMESSAGE.Return(221);
                    mBASICUI.Insert1(v6, v11);
                    return;
                }
                a1a = mITEM.Search(mInv[0].iIndex);
                if (a1a)
                {
                    v18 = mITEM.Search(mInv[1].iIndex);
                    if (v18)
                    {
                        if (mUTIL.ReturnItemSort(a1a) != 2 || a1a->iEquipInfo[1] == 12)
                        {
                            v12 = mFONTCOLOR.mData[44];
                            v7 = mMESSAGE.Return(714);
                            mBASICUI.Insert1(v7, v12);
                        }
                        else if (v18->iIndex == 984 || v18->iIndex == 2394)
                        {
                            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                                v9 = mMESSAGE.Return(2696);
                                mCBOXUI.Set(91, v9, "");
                            }
                        }
                        else
                        {
                            v13 = mFONTCOLOR.mData[44];
                            v8 = mMESSAGE.Return(2507);
                            mBASICUI.Insert1(v8, v13);
                        }
                    }
                }
            }
            else
            {
                if (mPage[0] == -1)
                    goto LABEL_86;
                a1 = mITEM.Search(mInv[0].iIndex);
                if (a1)
                {
                    if (a1->iType == 3)
                    {
                        switch (a1->iLevel)
                        {
                        case 45:
                            v17 = 1000000;
                            break;
                        case 55:
                            v17 = 1200000;
                            break;
                        case 65:
                            v17 = 1400000;
                            break;
                        case 75:
                            v17 = 1600000;
                            break;
                        case 85:
                            v17 = 1800000;
                            break;
                        case 95:
                            v17 = 2000000;
                            break;
                        case 105:
                            v17 = 2200000;
                            break;
                        case 114:
                            v17 = 2400000;
                            break;
                        case 117:
                            v17 = 2600000;
                            break;
                        case 120:
                            v17 = 2800000;
                            break;
                        case 123:
                            v17 = 3000000;
                            break;
                        case 126:
                            v17 = 3200000;
                            break;
                        case 129:
                            v17 = 3400000;
                            break;
                        case 132:
                            v17 = 3600000;
                            break;
                        case 135:
                            v17 = 3800000;
                            break;
                        case 138:
                            v17 = 4000000;
                            break;
                        case 141:
                            v17 = 4200000;
                            break;
                        case 144:
                            v17 = 4400000;
                            break;
                        case 145:
                            switch (a1->iMartialLevel)
                            {
                            case 0:
                                v17 = 4600000;
                                break;
                            case 1:
                                v17 = 4800000;
                                break;
                            case 2:
                                v17 = 5000000;
                                break;
                            case 3:
                                v17 = 5200000;
                                break;
                            case 4:
                                v17 = 5400000;
                                break;
                            case 5:
                                v17 = 5600000;
                                break;
                            case 6:
                                v17 = 5800000;
                                break;
                            case 7:
                                v17 = 6000000;
                                break;
                            case 8:
                                v17 = 6200000;
                                break;
                            case 9:
                                v17 = 6400000;
                                break;
                            case 0xA:
                                v17 = 6600000;
                                break;
                            case 0xB:
                                v17 = 6800000;
                                break;
                            case 0xC:
                                v17 = 7000000;
                                break;
                            default:
                                goto LABEL_78;
                            }
                            break;
                        default:
                            break;
                        }
                    }
                    else
                    {
                        switch (a1->iLevel)
                        {
                        case 100:
                            v17 = 4000000;
                            break;
                        case 110:
                            v17 = 4400000;
                            break;
                        case 113:
                            v17 = 4800000;
                            break;
                        case 115:
                            v17 = 5200000;
                            break;
                        case 118:
                            v17 = 5600000;
                            break;
                        case 121:
                            v17 = 6000000;
                            break;
                        case 124:
                            v17 = 6400000;
                            break;
                        case 127:
                            v17 = 6800000;
                            break;
                        case 130:
                            v17 = 7200000;
                            break;
                        case 133:
                            v17 = 7600000;
                            break;
                        case 136:
                            v17 = 8000000;
                            break;
                        case 139:
                            v17 = 8400000;
                            break;
                        case 142:
                            v17 = 8800000;
                            break;
                        case 145:
                            switch (a1->iMartialLevel)
                            {
                            case 0:
                                v17 = 9200000;
                                break;
                            case 1:
                                v17 = 9600000;
                                break;
                            case 2:
                                v17 = 10000000;
                                break;
                            case 3:
                                v17 = 10400000;
                                break;
                            case 4:
                                v17 = 10800000;
                                break;
                            case 5:
                                v17 = 11200000;
                                break;
                            case 6:
                                v17 = 11600000;
                                break;
                            case 7:
                                v17 = 12000000;
                                break;
                            case 8:
                                v17 = 12400000;
                                break;
                            case 9:
                                v17 = 12800000;
                                break;
                            case 10:
                                v17 = 13200000;
                                break;
                            case 11:
                                v17 = 13600000;
                                break;
                            case 12:
                                v17 = 14000000;
                                break;
                            default:
                                goto LABEL_78;
                            }
                            break;
                        default:
                            break;
                        }
                    }
                LABEL_78:
                    if (mMYINFO.mAvatarInfo.aMoney >= v17)
                    {
                        if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                        {
                            mTRANSFER.T_EXCHANGE_ITEM_SEND(
                                mPageSort,
                                mPage[0],
                                mIndex[0],
                                mPage[1],
                                mIndex[1]);
                            mMYINFO.mNetworkLock = 1;
                            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                        }
                    }
                    else
                    {
                        v10 = mFONTCOLOR.mData[44];
                        v5 = mMESSAGE.Return(214);
                        mBASICUI.Insert1(v5, v10);
                    }
                }
            }
        }
        else if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10, uX, uY))
            {
                if (--mPageSort < 0)
                    mPageSort = 0;
                if (mPage[0] != -1)
                {
                    mMYINFO.mAvatarInfo.aInventory[mPage[0]][mIndex[0]][0] = mInv[0].iIndex;
                    mMYINFO.mAvatarInfo.aInventory[mPage[0]][mIndex[0]][1] = mInv[0].iX;
                    mMYINFO.mAvatarInfo.aInventory[mPage[0]][mIndex[0]][2] = mInv[0].iY;
                    mMYINFO.mAvatarInfo.aInventory[mPage[0]][mIndex[0]][3] += mInv[0].iQuantity;
                    mMYINFO.mAvatarInfo.aInventory[mPage[0]][mIndex[0]][4] = mInv[0].iImproveState;
                    mMYINFO.mAvatarInfo.aInventory[mPage[0]][mIndex[0]][5] = mInv[0].iSerialNumber;
                    mMYINFO.mAvatarInfo.aInventorySocket[mPage[0]][mIndex[0]][0] = mInv[0].iSocket[0];
                    mMYINFO.mAvatarInfo.aInventorySocket[mPage[0]][mIndex[0]][1] = mInv[0].iSocket[1];
                    mMYINFO.mAvatarInfo.aInventorySocket[mPage[0]][mIndex[0]][2] = mInv[0].iSocket[2];
                    mPage[0] = -1;
                }
                if (mPage[1] != -1)
                {
                    mMYINFO.mAvatarInfo.aInventory[mPage[1]][mIndex[1]][0] = mInv[1].iIndex;
                    mMYINFO.mAvatarInfo.aInventory[mPage[1]][mIndex[1]][1] = mInv[1].iX;
                    mMYINFO.mAvatarInfo.aInventory[mPage[1]][mIndex[1]][2] = mInv[1].iY;
                    mMYINFO.mAvatarInfo.aInventory[mPage[1]][mIndex[1]][3] += mInv[1].iQuantity;
                    mMYINFO.mAvatarInfo.aInventory[mPage[1]][mIndex[1]][4] = mInv[1].iImproveState;
                    mMYINFO.mAvatarInfo.aInventory[mPage[1]][mIndex[1]][5] = mInv[1].iSerialNumber;
                    mMYINFO.mAvatarInfo.aInventorySocket[mPage[1]][mIndex[1]][0] = mInv[1].iSocket[0];
                    mMYINFO.mAvatarInfo.aInventorySocket[mPage[1]][mIndex[1]][1] = mInv[1].iSocket[1];
                    mMYINFO.mAvatarInfo.aInventorySocket[mPage[1]][mIndex[1]][2] = mInv[1].iSocket[2];
                    mPage[1] = -1;
                }
            }
        }
        else if (mIsClick[3])
        {
            mIsClick[3] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10, uX, uY))
            {
                if (++mPageSort > 1)
                    mPageSort = 1;
                if (mPage[0] != -1)
                {
                    mMYINFO.mAvatarInfo.aInventory[mPage[0]][mIndex[0]][0] = mInv[0].iIndex;
                    mMYINFO.mAvatarInfo.aInventory[mPage[0]][mIndex[0]][1] = mInv[0].iX;
                    mMYINFO.mAvatarInfo.aInventory[mPage[0]][mIndex[0]][2] = mInv[0].iY;
                    mMYINFO.mAvatarInfo.aInventory[mPage[0]][mIndex[0]][3] += mInv[0].iQuantity;
                    mMYINFO.mAvatarInfo.aInventory[mPage[0]][mIndex[0]][4] = mInv[0].iImproveState;
                    mMYINFO.mAvatarInfo.aInventory[mPage[0]][mIndex[0]][5] = mInv[0].iSerialNumber;
                    mMYINFO.mAvatarInfo.aInventorySocket[mPage[0]][mIndex[0]][0] = mInv[0].iSocket[0];
                    mMYINFO.mAvatarInfo.aInventorySocket[mPage[0]][mIndex[0]][1] = mInv[0].iSocket[1];
                    mMYINFO.mAvatarInfo.aInventorySocket[mPage[0]][mIndex[0]][2] = mInv[0].iSocket[2];
                    mPage[0] = -1;
                }
                if (mPage[1] != -1)
                {
                    mMYINFO.mAvatarInfo.aInventory[mPage[1]][mIndex[1]][0] = mInv[1].iIndex;
                    mMYINFO.mAvatarInfo.aInventory[mPage[1]][mIndex[1]][1] = mInv[1].iX;
                    mMYINFO.mAvatarInfo.aInventory[mPage[1]][mIndex[1]][2] = mInv[1].iY;
                    mMYINFO.mAvatarInfo.aInventory[mPage[1]][mIndex[1]][3] += mInv[1].iQuantity;
                    mMYINFO.mAvatarInfo.aInventory[mPage[1]][mIndex[1]][4] = mInv[1].iImproveState;
                    mMYINFO.mAvatarInfo.aInventory[mPage[1]][mIndex[1]][5] = mInv[1].iSerialNumber;
                    mMYINFO.mAvatarInfo.aInventorySocket[mPage[1]][mIndex[1]][0] = mInv[1].iSocket[0];
                    mMYINFO.mAvatarInfo.aInventorySocket[mPage[1]][mIndex[1]][1] = mInv[1].iSocket[1];
                    mMYINFO.mAvatarInfo.aInventorySocket[mPage[1]][mIndex[1]][2] = mInv[1].iSocket[2];
                    mPage[1] = -1;
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP33(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    char* v6;
    char* v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int tValue[7];
    int tIndex2;
    int tYPost1;
    int tPage2;
    int tXPost1;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2429]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY) && !mItemSearchInfo[0])
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3150], mX + 164, mY + 13, uX, uY))
                mItemSearchInfo[0] = 1;
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3152], mX + 341, mY + 13, uX, uY))
                mItemSearchInfo[0] = 2;
        }
        else if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2029], mX + 509, mY + 13, uX, uY))
            {
                mItemSearchInfo[3] = 1;
                mItemSearchInfo[4] = 0;
                mItemSearchInfo[5] = -1;
                mItemSearchInfo[6] = 0;
                mTRANSFER.T_PSHOP_ITEM_INFO_SEND(mItemSearchInfo[1], mItemSearchInfo[2]);
            }
        }
        else if (mIsClick[3])
        {
            mIsClick[3] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 252, mY + 411, uX, uY)
                && mItemSearchInfo[4] > 0)
            {
                --mItemSearchInfo[4];
                mItemSearchInfo[5] = -1;
            }
        }
        else if (mIsClick[4])
        {
            mIsClick[4] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 350, mY + 411, uX, uY)
                && mItemSearchInfo[4] < mItemSearchInfo[3] - 1)
            {
                ++mItemSearchInfo[4];
                mItemSearchInfo[5] = -1;
            }
        }
        else if (mIsClick[5])
        {
            mIsClick[5] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1338], mX + 500, mY + 412, uX, uY))
            {
                if (mItemSearchInfo[5] == -1)
                {
                    v8 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(1324);
                    mBASICUI.Insert1(v4, v8);
                }
                else if (mMYINFO.mAvatarInfo.aMoney >= mItemSearchData[mItemSearchInfo[5]][4])
                {
                    mINVENUI.PutInventory1(
                        -1,
                        -1,
                        mItemSearchData[mItemSearchInfo[5]][0],
                        mItemSearchData[mItemSearchInfo[5]][1],
                        &tPage2,
                        &tIndex2,
                        &tXPost1,
                        &tYPost1,
                        -1);
                    if (tPage2 == -1)
                    {
                        v10 = mFONTCOLOR.mData[44];
                        v6 = mMESSAGE.Return(117);
                        mBASICUI.Insert1(v6, v10);
                    }
                    else if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        if (mItemSearchData[mItemSearchInfo[5]][5] == -1)
                        {
                            if (!strcmp(mItemSearchAvtName[mItemSearchInfo[5]], mMYINFO.mAvatarInfo.aName))
                            {
                                v11 = mFONTCOLOR.mData[44];
                                v7 = mMESSAGE.Return(2070);
                                mBASICUI.Insert1(v7, v11);
                            }
                            else
                            {
                                tValue[0] = mItemSearchData[mItemSearchInfo[5]][1];
                                tValue[1] = mItemSearchData[mItemSearchInfo[5]][2];
                                tValue[2] = mItemSearchData[mItemSearchInfo[5]][3];
                                tValue[3] = mItemSearchData[mItemSearchInfo[5]][4];
                                tValue[4] = mItemSearchSocket[mItemSearchInfo[5]][0];
                                tValue[5] = mItemSearchSocket[mItemSearchInfo[5]][1];
                                tValue[6] = mItemSearchSocket[mItemSearchInfo[5]][2];
                                mTRANSFER.T_SET_DEPUTY_PSHOP_SEND(
                                    2,
                                    mItemSearchAvtName[mItemSearchInfo[5]],
                                    mItemSearchPage[mItemSearchInfo[5]],
                                    mItemSearchIndex[mItemSearchInfo[5]],
                                    mItemSearchData[mItemSearchInfo[5]][0],
                                    tPage2,
                                    tIndex2,
                                    tXPost1,
                                    tYPost1,
                                    tValue);
                            }
                        }
                        else
                        {
                            mTRANSFER.T_BUY_PSHOP_SEND(
                                mItemSearchUserIndex[mItemSearchInfo[5]],
                                mItemSearchAvtName[mItemSearchInfo[5]],
                                mItemSearchPage[mItemSearchInfo[5]],
                                mItemSearchIndex[mItemSearchInfo[5]],
                                0,
                                tPage2,
                                tIndex2,
                                tXPost1,
                                tYPost1);
                            mMYINFO.mNetworkLock = 1;
                            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                        }
                    }
                }
                else
                {
                    v9 = mFONTCOLOR.mData[44];
                    v5 = mMESSAGE.Return(214);
                    mBASICUI.Insert1(v5, v9);
                }
            }
        }
        else if (mIsClick[6])
        {
            mIsClick[6] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2386], mX + 557, mY + 412, uX, uY))
                NPCUI::Off();
        }
    }
}
void NPCUI::LBUTTONUP34(int uX, int uY)
{
    int v3;
    int v4;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2645]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2645]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 173, mY + 357, uX, uY))
        {
            if (--mQuestData[4] < 0)
                mQuestData[4] = 0;
        }
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 232, mY + 357, uX, uY))
        {
            if (++mQuestData[4] > 2)
                mQuestData[4] = 2;
        }
    }
    else if (mIsClick[2])
    {
        mIsClick[2] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 252, mY + 25, uX, uY))
            NPCUI::Off();
    }
}
void NPCUI::LBUTTONUP35(int uX, int uY)
{
    int mX, mY;
    char* tSTR, tSTR2;
    int i, j, k;
    ITEM_INFO* t;
    char tBuf[1000];
    int tDrawX, tDrawY;
    int tStrLen;

    mX = mMYINFO.mScreenXSize / 2;
    mX = mX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2653]) / 2;
    mY = mMYINFO.mScreenYSize / 2;
    mY = mY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2653]) / 2;
    for (i = 0; i < 10; ++i)
    {
        if (mIsClick[i])
        {
            mIsClick[i] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2654], mX + 296, mY + 33 * i + 44, uX, uY))
            {
                if (mTribeWeaponIndex[i] >= 1)
                {
                    switch (i)
                    {
                    case 0:
                        if (mMYINFO.mAvatarInfo.aKillOtherTribe < 100)
                        {
                            tSTR = mMESSAGE.Return(871);
                            mBASICUI.Insert1(tSTR, 15);
                            break;
                        }
                        tSTR = mMESSAGE.Return(781);
                        mCBOXUI.Set(35, tSTR, "");
                        NPCUI::Off();
                        break;
                    case 1:
                        if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1)
                        {
                            tSTR = mMESSAGE.Return(871);
                            mBASICUI.Insert1(tSTR, 15);
                            break;
                        }
                        tSTR = mMESSAGE.Return(781);
                        mCBOXUI.Set(48, tSTR, "");
                        NPCUI::Off();
                        break;
                    case 2:
                        if (mMYINFO.mAvatarInfo.aKillOtherTribe < 100)
                        {
                            tSTR = mMESSAGE.Return(871);
                            mBASICUI.Insert1(tSTR, 15);
                            break;
                        }
                        tSTR = mMESSAGE.Return(781);
                        mCBOXUI.Set(52, tSTR, "");
                        NPCUI::Off();
                        break;
                    case 3:
                        if (mMYINFO.mAvatarInfo.aMoney < 500000000)
                        {
                            tSTR = mMESSAGE.Return(214);
                            mBASICUI.Insert1(tSTR, 15);
                            break;
                        }
                        tSTR = mMESSAGE.Return(781);
                        mCBOXUI.Set(78, tSTR, "");
                        NPCUI::Off();
                        break;
                    default:
                        return;
                    }
                }
                else
                {
                    tSTR = mMESSAGE.Return(780);
                    mBASICUI.Insert1(tSTR, 15);
                }
            }
            return;
        }
    }
    if (mIsClick[10])
    {
        mIsClick[10] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 298, mY + 377, uX, uY))
            NPCUI::Off();
    }
}
void NPCUI::LBUTTONUP36(int uX, int uY)
{
    int v3;
    int v4;
    char* v5;
    int v6;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2726]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2726]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 299, mY + 233, uX, uY))
        {
            if (mMYINFO.mAvatarInfo.aKillOtherTribe >= 30)
            {
                if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    mPLAY.PROCESS_DATA_236_SEND();
                    mMYINFO.mNetworkLock = 1;
                    mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                    NPCUI::Off();
                }
            }
            else
            {
                v6 = mFONTCOLOR.mData[44];
                v5 = mMESSAGE.Return(871);
                mBASICUI.Insert1(v5, v6);
            }
        }
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 381, mY + 233, uX, uY))
            NPCUI::Off();
    }
}

void NPCUI::LBUTTONUP37(int uX, int uY)
{
    int v3;
    int v4;
    int v5;
    int v6;
    char* v7;
    int v8;
    int i;
    BYTE tData[100];

    if (mMYINFO.mAvatarInfo.aTitle || mMYINFO.iTribeCallType)
    {
        v5 = mMYINFO.mScreenXSize / 2;
        mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2816]) / 2;
        v6 = mMYINFO.mScreenYSize / 2;
        mY = v6 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2816]) / 2;
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2817], mX + 89, mY + 208, uX, uY))
            {
                if (mMYINFO.mAvatarInfo.aKillOtherTribe >= mAvatarTitleCost)
                {
                    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        memcpy(tData, &mMYINFO.iTribeCallType, 4);
                        mTRANSFER.T_TRIBE_WORK_SEND(6, tData);
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                        NPCUI::Off();
                    }
                }
                else
                {
                    v8 = mFONTCOLOR.mData[44];
                    v7 = mMESSAGE.Return(965);
                    mBASICUI.Insert1(v7, v8);
                }
            }
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24, uX, uY))
                NPCUI::Off();
        }
    }
    else
    {
        v3 = mMYINFO.mScreenXSize / 2;
        mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3227]) / 2;
        v4 = mMYINFO.mScreenYSize / 2;
        mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3227]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3229], mX + 37, mY + 94, uX, uY))
            mMYINFO.iTribeCallType = 1;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3232], mX + 120, mY + 94, uX, uY))
            mMYINFO.iTribeCallType = 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3235], mX + 203, mY + 94, uX, uY))
            mMYINFO.iTribeCallType = 3;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3238], mX + 286, mY + 94, uX, uY))
            mMYINFO.iTribeCallType = 4;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3241], mX + 369, mY + 94, uX, uY))
            mMYINFO.iTribeCallType = 5;
        for (i = 0; i < 100; ++i)
            mIsClick[i] = 0;
    }
}

void NPCUI::LBUTTONUP38(int uX, int uY)
{
    int v3;
    int v4;
    BYTE tData[100];

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2979]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2979]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2980], mX + 89, mY + 208, uX, uY) && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mTRANSFER.T_TRIBE_WORK_SEND(7, tData);
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            NPCUI::Off();
        }
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24, uX, uY))
            NPCUI::Off();
    }
}

void NPCUI::LBUTTONUP39(int uX, int uY)
{
    int v3;
    int v4;
    BYTE tData[100];

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2997]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2997]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2141], mX + 89, mY + 208, uX, uY) && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mTRANSFER.T_TRIBE_WORK_SEND(11, tData);
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            NPCUI::Off();
        }
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24, uX, uY))
            NPCUI::Off();
    }
}
void NPCUI::LBUTTONUP40(int uX, int uY)
{
    int v3;
    int v4;
    char* v5;
    int v6;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1818]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1818]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1819], mX + 17, mY + 134, uX, uY))
        {
            if (mMYINFO.mAvatarInfo.aCapsuleOnlineTime >= 1)
            {
                if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    mPLAY.PROCESS_DATA_237_SEND();
                    mMYINFO.mNetworkLock = 1;
                    mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                    NPCUI::Off();
                }
            }
            else
            {
                v6 = mFONTCOLOR.mData[44];
                v5 = mMESSAGE.Return(1280);
                mBASICUI.Insert1(v5, v6);
            }
        }
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 214, mY + 177, uX, uY))
            NPCUI::Off();
    }
}
void NPCUI::LBUTTONUP41(int uX, int uY)// Craft Pet Trader Nungsi 
{
    int v3;
    char* v4;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3143]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
            return;
        }
        if (!mIsClick[1])
        {
            if (mIsClick[2])
            {
                mIsClick[2] = 0;
                if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10, uX, uY))
                    return;
                if (--mMakeItemPresentPage < 0)
                {
                    mMakeItemPresentPage = 0;
                    return;
                }
            }
            else
            {
                if (!mIsClick[3])
                    return;
                mIsClick[3] = 0;
                if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10, uX, uY))
                    return;
                if (++mMakeItemPresentPage > mMakeItemTotalPage - 1)
                {
                    mMakeItemPresentPage = mMakeItemTotalPage - 1;
                    return;
                }
            }
            NPCUI::Reset();
            NPCUI::SetInvalidIndex();
            return;
        }
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414, uX, uY))
        {
            switch (mMakeItemPresentPage)
            {
            case 0:// Produce Pet M1
                if (mInv[0].iIndex != 1002 && mInv[0].iIndex != 1003 && mInv[0].iIndex != 1004 && mInv[0].iIndex != 1005 ||
                    mInv[1].iIndex != 1002 && mInv[1].iIndex != 1003 && mInv[1].iIndex != 1004 && mInv[1].iIndex != 1005 ||
                    mInv[2].iIndex != 1002 && mInv[2].iIndex != 1003 && mInv[2].iIndex != 1004 && mInv[2].iIndex != 1005 ||
                    mInv[3].iIndex != 1235)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            case 1:// Produce Pet M15
                if (mInv[0].iIndex != 1006 && mInv[0].iIndex != 1007 && mInv[0].iIndex != 1008 && mInv[0].iIndex != 1009 && mInv[0].iIndex != 1010 && mInv[0].iIndex != 1011 ||
                    mInv[1].iIndex != 1006 && mInv[1].iIndex != 1007 && mInv[1].iIndex != 1008 && mInv[1].iIndex != 1009 && mInv[1].iIndex != 1010 && mInv[1].iIndex != 1011 ||
                    mInv[2].iIndex != 1006 && mInv[2].iIndex != 1007 && mInv[2].iIndex != 1008 && mInv[2].iIndex != 1009 && mInv[2].iIndex != 1010 && mInv[2].iIndex != 1011 ||
                    mInv[3].iIndex != 1235)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 2000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            case 2:// Produce Pet G1
                if (mInv[0].iIndex != 1012 && mInv[0].iIndex != 1013 && mInv[0].iIndex != 1014 && mInv[0].iIndex != 1015 && mInv[0].iIndex != 1016 ||
                    mInv[1].iIndex != 1012 && mInv[1].iIndex != 1013 && mInv[1].iIndex != 1014 && mInv[1].iIndex != 1015 && mInv[1].iIndex != 1016 ||
                    mInv[2].iIndex != 1012 && mInv[2].iIndex != 1013 && mInv[2].iIndex != 1014 && mInv[2].iIndex != 1015 && mInv[2].iIndex != 1016 ||
                    mInv[3].iIndex != 1235)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 3000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            case 3:// Produce Amulet Box
                if (mInv[0].iIndex != 1310 && mInv[0].iIndex != 1311 && mInv[0].iIndex != 1312 ||
                    mInv[1].iIndex != 1310 && mInv[1].iIndex != 1311 && mInv[1].iIndex != 1312 ||
                    mInv[2].iIndex != 2150 ||
                    mInv[3].iIndex != 2150)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            default:
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
            {
                mTRANSFER.T_PET_COMBINE_SEND(mMakeItemPresentPage, mPage[0], mIndex[0], mPage[1], mIndex[1], mPage[2], mIndex[2], mPage[3], mIndex[3]);
                mMYINFO.mNetworkLock = TRUE;
                mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
            }
            return;
        }
    }
}

void NPCUI::LBUTTONUP42(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    int v6;
    int v7;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3142]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[908], mX + 172, mY + 414, uX, uY))
            {
                if (mPage[0] == -1)
                {
                    v6 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(221);
                    mBASICUI.Insert1(v4, v6);
                }
                else if (mMYINFO.mAvatarInfo.aMoney <= 1900000000)
                {
                    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        mTRANSFER.T_DESTROY_ITEM_SEND(mPage[0], mIndex[0]);
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                    }
                }
                else
                {
                    v7 = mFONTCOLOR.mData[44];
                    v5 = mMESSAGE.Return(101);
                    mBASICUI.Insert1(v5, v7);
                }
            }
        }
    }
}
void NPCUI::LBUTTONUP43(int uX, int uY)
{
    int v3;
    int v4;
    char* v5;
    char* v6;
    int v7;
    int v8;
    BYTE tData[100];

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3164]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3164]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 165, mY + 176, uX, uY))
            return;
        if (mMYINFO.mAvatarInfo.aLevel2 < 12)
        {
            v7 = mFONTCOLOR.mData[44];
            v5 = mMESSAGE.Return(1335);
            mBASICUI.Insert1(v5, v7);
            NPCUI::Off();
            return;
        }
        if (mMYINFO.mAvatarInfo.aRegistrationTicket < 1)
        {
            v8 = mFONTCOLOR.mData[44];
            v6 = mMESSAGE.Return(1336);
            mBASICUI.Insert1(v6, v8);
            NPCUI::Off();
            return;
        }
        if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mTRANSFER.T_TRIBE_WORK_SEND(12, tData);
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            NPCUI::Off();
            return;
        }
        goto LABEL_13;
    }
    if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 240, mY + 176, uX, uY))
        {
        LABEL_13:
            NPCUI::Off();
            return;
        }
    }
}

void NPCUI::LBUTTONUP44(int uX, int uY)
{
    int v3;
    int v4;
    char* v5;
    char* v6;
    int v7;
    int v8;
    BYTE tData[100];

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3165]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3165]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 165, mY + 176, uX, uY))
            return;
        if (mMYINFO.mAvatarInfo.aLevel1 < 145)
        {
            v7 = mFONTCOLOR.mData[44];
            v5 = mMESSAGE.Return(1337);
            mBASICUI.Insert1(v5, v7);
            NPCUI::Off();
            return;
        }
        if (mMYINFO.mAvatarInfo.aRegistration < 1)
        {
            v8 = mFONTCOLOR.mData[44];
            v6 = mMESSAGE.Return(1338);
            mBASICUI.Insert1(v6, v8);
            NPCUI::Off();
            return;
        }
        if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mTRANSFER.T_TRIBE_WORK_SEND(13, tData);
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            NPCUI::Off();
            return;
        }
        goto LABEL_13;
    }
    if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 240, mY + 176, uX, uY))
        {
        LABEL_13:
            NPCUI::Off();
            return;
        }
    }
}

void NPCUI::LBUTTONUP45(int uX, int uY)
{
    int v3;
    int v4;
    char* v5;
    int v6;

    v3 = mMYINFO.mScreenXSize / 2;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3175]) / 2;
    v4 = mMYINFO.mScreenYSize / 2;
    mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3175]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1819], mX + 17, mY + 134, uX, uY))
        {
            if (mMYINFO.mAvatarInfo.aPCCafeOnlineTimeToMerit >= 1)
            {
                if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    mPLAY.PROCESS_DATA_238_SEND();
                    mMYINFO.mNetworkLock = 1;
                    mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                    NPCUI::Off();
                }
            }
            else
            {
                v6 = mFONTCOLOR.mData[44];
                v5 = mMESSAGE.Return(1370);
                mBASICUI.Insert1(v5, v6);
            }
        }
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 214, mY + 177, uX, uY))
            NPCUI::Off();
    }
}

void NPCUI::LBUTTONUP46(int uX, int uY) // Unseal Item
{
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    mX = mX + 23 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3179]);

    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                Off();
            }
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3180], mX + 171, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 || mPage[1] == -1)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(221), 15);
                    return;
                }
                if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
                {
                    mTRANSFER.T_IMPROVE_ITEM_SEND(4, mPage[0], mIndex[0], mPage[1], mIndex[1]);
                    mMYINFO.mNetworkLock = TRUE;
                    mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                }
            }
        }
    }
}
void NPCUI::LBUTTONUP51(int uX, int uY)
{
    int tCost;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    mX = mX + 23 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[725]);
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                NPCUI::Off();
            }
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3248], mX + 171, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 || mPage[1] == -1)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(221), mFONTCOLOR.mData[44]);
                    return;
                }
                tCost = 50000000;
                if (mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService > 0 || mMYINFO.uLoginPremium == 3)
                {
                    tCost = (int)((float)50000000 * 0.80f);
                }
                if (mMYINFO.mAvatarInfo.aMoney < tCost)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(214), mFONTCOLOR.mData[44]);
                    return;
                }
                if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    mTRANSFER.T_SKY_UP_ITEM_SEND(mPage[0], mIndex[0], mPage[1], mIndex[1]);
                    mMYINFO.mNetworkLock = 1;
                    mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP52(int uX, int uY)
{
    mMYINFO.AdjustScreenCoord(299, 389, 267, &mX, &mY);
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 149, mY + 203, uX, uY))
            NPCUI::Off();
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 47, mY + 203, uX, uY))
        {
            mTRANSFER.T_TIME_EFFECT_SEND(mMYINFO.mAvatarInfo.aTimeEffect2);
            NPCUI::Off();
        }
    }
}
//Refine sistem//
void NPCUI::LBUTTONUP54(int uX, int uY)
{
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    mX = mX + 23 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3456]);
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                NPCUI::Off();
            }
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 171, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 || mPage[1] == -1)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(221), mFONTCOLOR.mData[44]);
                    return;
                }
                if (mInv[1].iIndex != 576 && mInv[1].iIndex != 824 && mInv[1].iIndex != 699 && mInv[1].iIndex != 2390 && mInv[1].iIndex != 2395)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1916), mFONTCOLOR.mData[44]);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 50)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), mFONTCOLOR.mData[44]);
                    return;
                }
                if (mUTIL.ReturnRFValue(mInv[0].iImproveState) > 9 && mMYINFO.mAvatarInfo.aPreventRefineBreak < 1)
                {
                    mCBOXUI.Set(49, mMESSAGE.Return(1914), mMESSAGE.Return(1915));
                }
                else
                {
                    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        mTRANSFER.T_SMELT_ITEM_SEND( mPage[0], mIndex[0], mPage[1], mIndex[1]);
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                    }
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP56(int uX, int uY)
{
    int v3;
    char* v4;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3516]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1773], mX + 171, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 || mPage[1] == -1)
                {
                    v5 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(221);
                    mBASICUI.Insert1(v4, v5);
                }
                else if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    mTRANSFER.T_ADDITIONAL_SOCKET_SEND(mPage[0], mIndex[0], mPage[1], mIndex[1]);
                    mMYINFO.mNetworkLock = 1;
                    mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP58(int uX, int uY) // Wing Enchant
{
    int sX;
    int sY;
    char* tString;
    char* tString2;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3786]);

    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                Off();
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3788], mX + 171, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 || mPage[1] == -1)
                {
                    tString = mMESSAGE.Return(221);
                    mBASICUI.Insert1(tString, 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 50)
                {
                    tString = mMESSAGE.Return(871);
                    mBASICUI.Insert1(tString, 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aWingProtectionScroll < 1)
                {
                    tString = mMESSAGE.Return(2320);
                    tString2 = mMESSAGE.Return(808);
                    //mCBOXUI.Set(36, tString2, tString);
                    mCBOXUI.Set(102, tString2, tString);
                    return;
                }
                if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
                {
                    mTRANSFER.T_IMPROVE_ITEM_SEND(2, mPage[0], mIndex[0], mPage[1], mIndex[1]);
                    mMYINFO.mNetworkLock = TRUE;
                    mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                }
            }
        }
    }
}
void NPCUI::LBUTTONUP61(int uX, int uY)
{
    float tLocation[3];
    int tZoneNumber;
    int mIndex;
    int tLevel;

    mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[596]) / 2;
    mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[596]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 4, uX, uY))
        {
            NPCUI::Off();(mMESSAGE.Return(2582));
        }
    }
    else
    {
        for (mIndex = 0; mIndex < ReturnGuard2MoveNum(); mIndex++)
        {
            if (mIsClick[mIndex + 1])
            {
                mIsClick[mIndex + 1] = 0;
                if (uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * mIndex + 9 && uY < mY + 18 * mIndex + 21)
                {
                    tZoneNumber = ReturnGuard2MoveZone(mIndex);
                    if (tZoneNumber)
                    {
                        tLevel = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
                        if ( tLevel >= mZONEMAININFO.ReturnMinZoneLevelInfo(tZoneNumber) && tLevel <= mZONEMAININFO.ReturnMaxZoneLevelInfo(tZoneNumber) )
                        {
                            switch (mIndex)
                            {
                            case 1:
                                if (mMYINFO.uLoginPremium != 2 && mMYINFO.mAvatarInfo.aPremiumService < 1 && mMYINFO.uLoginPremium != 3 && mMYINFO.mAvatarInfo.aZone126TypeTime < 1) // guard telepor movezonesi
                                {
                                    mBASICUI.Insert1(mMESSAGE.Return(814), mFONTCOLOR.mData[44]);
                                    return;
                                }
                            case 2:
                            case 3:
                            case 4:
                            case 5:
								if (mMYINFO.mAvatarInfo.aZone101TypeTime < 1)
								{
									mBASICUI.Insert1(mMESSAGE.Return(483), mFONTCOLOR.mData[44]);
									return;
								}
								break;
                            case 6:
                            case 7:
                            case 8:
                            case 9:
                            case 10:
                            case 11:
                                if (mMYINFO.mAvatarInfo.aLifeOrDeath < 1) // guard telepor movezonesi
                                {
                                    mBASICUI.Insert1(mMESSAGE.Return(1420), mFONTCOLOR.mData[44]);
                                    return;
                                }
                                break;
                            case 12:
                                if (mMYINFO.mAvatarInfo.aRebirth > 1) // guard telepor movezonesi
                                {
                                    mBASICUI.Insert1(mMESSAGE.Return(1421), mFONTCOLOR.mData[44]);
                                    return;
                                }
                                break;
                            case 13:
                            case 14:
                            default:
                                break;
                            }
                            // Teleport
                            if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, tZoneNumber, tLocation))
                            {
                                mZONEMOVEINFO.SetFirstCoord(tZoneNumber, tLocation);
                            }
                            if (!mMYINFO.mMoveZoneState)
                            {
                                mMYINFO.mMoveZoneState = 1;
                                mMYINFO.mMoveZoneSort = 6;
                                mMYINFO.mMoveZoneValue = 0;
                                mMYINFO.mNextZoneNumber = tZoneNumber;
                                memset(&mMYINFO.mAction, 0, sizeof(ACTION_INFO));
                                mMYINFO.mAction.aType = 0;
                                mMYINFO.mAction.aSort = 1;
                                mMYINFO.mAction.aFrame = 0.0;
                                mMYINFO.mAction.aLocation[0] = tLocation[0];
                                mMYINFO.mAction.aLocation[1] = tLocation[1];
                                mMYINFO.mAction.aLocation[2] = tLocation[2];
                                mMYINFO.mAction.aFront = (rand() % 360);
                                mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
                                mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, tZoneNumber);
                            }
                            Off();
                            return;
                        }
                        else
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(227), mFONTCOLOR.mData[44]);
                            return;
                        }
                    }
                }
                return;
            }
        }
    }
}
void NPCUI::LBUTTONUP62(int uX, int uY)
{
    int sX;
    int sY;
    char* tString;
    int tPage, tIndex, tXPost, tYPost;


    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3002]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3002]) / 2;

    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3003], mX + 175, mY + 253, uX, uY))
        {
            if (mMYINFO.mAvatarInfo.aDailyWarCount < 3)
            {
                tString = mMESSAGE.Return(2372);
                mBASICUI.Insert1(tString, 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aDailyPVPCount < 10)
            {
                tString = mMESSAGE.Return(2374);
                mBASICUI.Insert1(tString, 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aDailyPVMKillCount < 1000)
            {
                tString = mMESSAGE.Return(2375);
                mBASICUI.Insert1(tString, 15);
                return;
            }
            if (mMYINFO.mAvatarInfo.aDailyOnlineTime < 60)
            {
                tString = mMESSAGE.Return(2376);
                mBASICUI.Insert1(tString, 15);
                return;
            }
            // Get Possible Bag
            mINVENUI.PutInventory2(1102, &tPage, &tIndex, &tXPost, &tYPost);
            if (tPage == -1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(117), mFONTCOLOR.mData[44]);
                return;
            }

            mTRANSFER.T_DAILY_MISSION_SEND(2, tPage, tIndex, tXPost, tYPost);
            return;
        }
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 224, mY + 7, uX, uY))
            Off();
    }
}

void NPCUI::LBUTTONUP63(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    char* v6;
    char* v7;
    int v8;
    int v9;
    int v10;
    int v11;
    int v13;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3905]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3249], mX + 171, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 || mPage[1] == -1)
                {
                    v8 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(221);
                    mBASICUI.Insert1(v4, v8);
                }
                else if (mUTIL.CheckIfEliteCape(mInv[0].iIndex))
                {
                    if (mInv[1].iIndex == 984 || mInv[1].iIndex == 2394)
                    {
                        v13 = 10000000;
                        if (mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService > 0 || mMYINFO.uLoginPremium == 3)
                        {
                            v13 = (int)((float)10000000 * 0.800000011920929);
                        }
                        if (mMYINFO.mAvatarInfo.aMoney >= v13)
                        {
                            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                            {
                                mTRANSFER.T_CLOAK_UPGRADE_SEND(mPage[0], mIndex[0], mPage[1], mIndex[1]);
                                mMYINFO.mNetworkLock = 1;
                                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                            }
                        }
                        else
                        {
                            v11 = mFONTCOLOR.mData[44];
                            v7 = mMESSAGE.Return(214);
                            mBASICUI.Insert1(v7, v11);
                        }
                    }
                    else
                    {
                        v10 = mFONTCOLOR.mData[44];
                        v6 = mMESSAGE.Return(2386);
                        mBASICUI.Insert1(v6, v10);
                    }
                }
                else
                {
                    v9 = mFONTCOLOR.mData[44];
                    v5 = mMESSAGE.Return(2387);
                    mBASICUI.Insert1(v5, v9);
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP66(int uX, int uY)// Craft Begar
{
    int v3;
    char* v4;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3143]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
            return;
        }
        if (!mIsClick[1])
        {
            if (mIsClick[2])
            {
                mIsClick[2] = 0;
                if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10, uX, uY))
                    return;
                if (--mMakeItemPresentPage < 0)
                {
                    mMakeItemPresentPage = 0;
                    return;
                }
            }
            else
            {
                if (!mIsClick[3])
                    return;
                mIsClick[3] = 0;
                if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10, uX, uY))
                    return;
                if (++mMakeItemPresentPage > mMakeItemTotalPage - 1)
                {
                    mMakeItemPresentPage = mMakeItemTotalPage - 1;
                    return;
                }
            }
            NPCUI::Reset();
            NPCUI::SetInvalidIndex();
            return;
        }
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414, uX, uY))
        {
            switch (mMakeItemPresentPage)
            {
            case 0:// Ultimate Cape=War Lord Cape
                if (mInv[0].iIndex != 984 ||
                    mInv[1].iIndex != 984 ||
                    mInv[2].iIndex != 984 ||
                    mInv[3].iIndex != 1401)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 3000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            case 1:// War Lord Cape=God Warrior Cape
                if (mInv[0].iIndex != 984 ||
                    mInv[1].iIndex != 984 ||
                    mInv[2].iIndex != 984 ||
                    mInv[3].iIndex != 1403)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 5000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            case 2:// God Warrior Cape=Zeus Cape
                if (mInv[0].iIndex != 984 ||
                    mInv[1].iIndex != 984 ||
                    mInv[2].iIndex != 984 ||
                    mInv[3].iIndex != 1404)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 10000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            default:
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
            {
                mTRANSFER.T_COMBINE_G12_PET_SEND(mMakeItemPresentPage, mPage[0], mIndex[0], mPage[1], mIndex[1], mPage[2], mIndex[2], mPage[3], mIndex[3]);
                mMYINFO.mNetworkLock = TRUE;
                mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
            }
            return;
        }
    }
}

void NPCUI::LBUTTONUP67(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    char* v6;
    char* v7;
    int v8;
    int v9;
    int v10;
    int v11;
    ITEM_INFO* v13;
    ITEM_INFO* v14;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3996]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
            return;
        }
        if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3997], mX + 171, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 || mPage[1] == -1)
                {
                    v8 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(221);
                    mBASICUI.Insert1(v4, v8);
                    return;
                }
                if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    v14 = mITEM.Search(mInv[0].iIndex);
                    v13 = mITEM.Search(mInv[1].iIndex);
                    if (!v14 || !v13)
                    {
                        goto LABEL_36;
                    }
                    if (v14->iSort == 28)
                    {
                        if (v14->iIndex != 2253 && v14->iIndex != 2254 && v14->iIndex != 2261 && v14->iIndex != 2262 && v14->iIndex != 2300 && v14->iIndex != 2301
                            && (v13->iIndex == 2155 || v13->iIndex == 2156 || v13->iIndex == 2157 || v13->iIndex == 2190 || v13->iIndex == 2324 || v13->iIndex == 2325))
                        {
                            goto LABEL_44;
                        }
                    }
                    else if (v14->iSort == 29)
                    {
                        if (v13->iIndex == 2150 || v13->iIndex == 1878)
                        {
                            if (mMYINFO.mAvatarInfo.aKillOtherTribe < 100)
                            {
                                v9 = mFONTCOLOR.mData[44];
                                v5 = mMESSAGE.Return(1414);
                                mBASICUI.Insert1(v5, v9);
                                return;
                            }
                            if (mUTIL.ReturnIUValue(mInv[0].iImproveState) > 0)
                            {
                                goto LABEL_36;
                            }
                        LABEL_44:
                            mTRANSFER.T_ADD_PET_ABILITY_SEND(mPage[0], mIndex[0], mPage[1], mIndex[1]);
                            mMYINFO.mNetworkLock = 1;
                            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                            return;
                        }
                        if (v13->iIndex == 2447)
                        {
                            if (!mUTIL.ReturnIUValue(mInv[0].iImproveState))
                            {
                                v11 = mFONTCOLOR.mData[44];
                                v7 = mMESSAGE.Return(728);
                                mBASICUI.Insert1(v7, v11);
                                return;
                            }
                            goto LABEL_44;
                        }
                    }
                LABEL_36:
                    v10 = mFONTCOLOR.mData[44];
                    v6 = mMESSAGE.Return(2519);
                    mBASICUI.Insert1(v6, v10);
                    return;
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP68(int uX, int uY)// Craft 3 Tailor
{
    int v3;
    char* v4;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3143]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
            return;
        }
        if (!mIsClick[1])
        {
            if (mIsClick[2])
            {
                mIsClick[2] = 0;
                if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10, uX, uY))
                    return;
                if (--mMakeItemPresentPage < 0)
                {
                    mMakeItemPresentPage = 0;
                    return;
                }
            }
            else
            {
                if (!mIsClick[3])
                    return;
                mIsClick[3] = 0;
                if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10, uX, uY))
                    return;
                if (++mMakeItemPresentPage > mMakeItemTotalPage - 1)
                {
                    mMakeItemPresentPage = mMakeItemTotalPage - 1;
                    return;
                }
            }
            NPCUI::Reset();
            NPCUI::SetInvalidIndex();
            return;
        }
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414, uX, uY))
        {
            switch (mMakeItemPresentPage)
            {
            case 0:// Ultimate Cape=War Lord Cape
                if (mInv[0].iIndex != 984 ||
                    mInv[1].iIndex != 984 ||
                    mInv[2].iIndex != 984 ||
                    mInv[3].iIndex != 1401)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 3000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            default:
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
            {
                mTRANSFER.T_CRAFT_COSTUME_SEND(mMakeItemPresentPage, mPage[0], mIndex[0], mPage[1], mIndex[1], mPage[2], mIndex[2], mPage[3], mIndex[3]);
                mMYINFO.mNetworkLock = TRUE;
                mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
            }
            return;
        }
    }
}
void NPCUI::LBUTTONUP69(int uX, int uY)
{
    int sX, sY;
    int tstrlen;
    char* tstr;
    char* tstr2;
    char* tstr3;
    int tCost = 0;
    ITEM_INFO* tITEM;
    int tItemSort;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    if (tUltimateUpgradeState[0] == 0) // Legendary Enchant
    {
        sX = mX + 23;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4025]);
        mY = mY;
        if (mINVENUI.LBUTTONUP(uX, uY))
        {
            return;
        }
        if (mIsClick[0]) // Close Window
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                mIsClick[3] = 0;
                NPCUI::Off();
            }
            return;
        }
        if (mIsClick[1]) // Confirm
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[726], mX + 171, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 && mPage[1] == -1)
                {
                    tstr = mMESSAGE.Return(221);
                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                    return;
                }
                tCost = 1000000;
                if (mMYINFO.mAvatarInfo.aMoney < tCost)
                {
                    tstr = mMESSAGE.Return(214);
                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                    return;
                }
                tITEM = mITEM.Search(mInv[0].iIndex);
                if (!tITEM)
                {
                    tstr = mMESSAGE.Return(2565);
                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                    return;
                }
                if (mUTIL.ReturnItemSort2(mInv[0].iIndex) == 1) // Gears/Equipment
                {
                    switch (mInv[1].iIndex)
                    {
                    case 2332:
                    case 2383:
                    case 18006:
                    case 1831:
                    case 1832:
                    case 17133:
                        if (mUTIL.ReturnISValue(mInv[0].iImproveState) >= 15)
                        {
                            tstr = mMESSAGE.Return(220);
                            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                            return;
                        }
                        mTRANSFER.T_IMPROVE_LEGENDARY_SEND(0, mPage[0], mIndex[0], mPage[1], mIndex[1]);
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                        return;

                        /*case 2150:
                        case 1878:
                            if (mUTIL.ReturnIUValue(uInv[0].iImproveState) > 0)
                            {
                                tstr = mMESSAGE.Return(2668);
                                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                                return;
                            }
                            mTRANSFER.T_IMPROVE_LEGENDARY_SEND(1, uInfo[0], uInfo2[0], uInfo[1], uInfo2[1]);
                            mMYINFO.mNetworkLock = 1;
                            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                            return;*/

                            //case 2477:
                            //	if (mUTIL.ReturnIUValue(uInv[0].iImproveState) == 0)
                            //	{
                            //		tstr = mMESSAGE.Return(2679);
                            //		mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                            //		return;
                            //	}
                            //	//sub_4BD0B0(&mTRANSFER, uInfo[0], uInfo2[0], uInfo[1], uInfo2[1]);
                            //	mMYINFO.mNetworkLock = 1;
                            //	mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                            //	return;

                    default:
                        tstr = mMESSAGE.Return(2507);
                        mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                        return;
                    }
                }
                if (mUTIL.ReturnItemSort2(mInv[0].iIndex) == 8) // Legendary Cape
                {
                    switch (mInv[1].iIndex)
                    {
                    case 2332:
                    case 2383:
                    case 18006:
                    case 1831:
                    case 1832:
                    case 17133:
                        if (mUTIL.ReturnISValue(mInv[0].iImproveState) >= 15)
                        {
                            tstr = mMESSAGE.Return(220);
                            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                            return;
                        }
                        tstr = mMESSAGE.Return(2656);
                        tstr2 = mMESSAGE.Return(808);
                        mCBOXUI.Set(88, tstr2, tstr);
                        return;

                    case 1948:
                    case 1949:
                    case 1950:
                    case 1951:
                    case 1952:
                    case 1953:
                    case 1954:
                    case 1955:
                        if (mUTIL.ReturnISValue(mInv[0].iImproveState) >= 16)
                        {
                            tstr = mMESSAGE.Return(2562);
                            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                            return;
                        }
                        mBASICUI.Insert1("[SYSTEM] Feature Disabled", mFONTCOLOR.mData[44]);
                        return;
                    }
                }

            }
        }
        if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
            {
                mIsClick[3] = mIsClick[3] != 1;
            }
            return;
        }
        if (mIsClick[4])
        {
            mIsClick[4] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX - 244, mY + 6, uX, uY))
                mIsClick[3] = 0;
            return;
        }
        if (mIsClick[5])
        {
            mIsClick[5] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))
            {
                if (tUltimateUpgradeState[0] > 0)
                {
                    --tUltimateUpgradeState[0];
                    NPCUI::Reset();
                    NPCUI::SetInvalidIndex();
                }
            }
            return;
        }
        if (mIsClick[6])
        {
            mIsClick[6] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
            {
                if (tUltimateUpgradeState[0] < 2)
                {
                    ++tUltimateUpgradeState[0];
                    mIsClick[3] = 0;
                    NPCUI::Reset();
                    NPCUI::SetInvalidIndex();
                }
            }
            return;
        }
    }
    if (tUltimateUpgradeState[0] == 1) // Engrave
    {
        sX = mX + 23;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4199]);
        mY = mY;
        if (mINVENUI.LBUTTONUP(uX, uY))
        {
            return;
        }
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                NPCUI::Off();
            }
            return;
        }
        if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2710], mX + 171, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 || mPage[1] == -1)
                {
                    tstr = mMESSAGE.Return(221);
                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1000)
                {
                    tstr = mMESSAGE.Return(871);
                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                    return;
                }
                tITEM = mITEM.Search(mInv[0].iIndex);
                if (!tITEM)
                {
                    tstr = mMESSAGE.Return(221);
                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                    return;
                }
                tItemSort = mUTIL.ReturnItemSort(tITEM);
                if (tItemSort == 8)
                {
                    if (mInv[1].iIndex >= 20045 && mInv[1].iIndex <= 20072 || mInv[1].iIndex >= 20105 && mInv[1].iIndex <= 20132)
                    {
                        if (mUTIL.ReturnISValue(mInv[0].iImproveState) >= 16)
                        {
                            tstr = mMESSAGE.Return(2562);
                            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                            return;
                        }
                        if (mUTIL.Return4thValue(mInv[0].iImproveState) > 0)
                        {
                            tstr = mMESSAGE.Return(2751);
                            tstr2 = mMESSAGE.Return(2750);
                            mCBOXUI.Set(95, tstr2, tstr);
                            return;
                        }
                        mTRANSFER.T_ENGRAVE_ITEM_SEND(mPage[0], mIndex[0], mPage[1], mIndex[1]);
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                        return;
                    }
                    if (mInv[1].iIndex >= 20073 && mInv[1].iIndex <= 20103 || mInv[1].iIndex >= 20133 && mInv[1].iIndex <= 20163)
                    {
                        if (mUTIL.ReturnISValue(mInv[0].iImproveState) >= 16)
                        {
                            tstr = mMESSAGE.Return(2562);
                            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                            return;
                        }
                        if (mUTIL.Return4thValue(mInv[0].iImproveState) > 0)
                        {
                            tstr = mMESSAGE.Return(2751);
                            tstr2 = mMESSAGE.Return(2750);
                            mCBOXUI.Set(94, tstr2, tstr);
                            return;
                        }
                        if (mMYINFO.mAvatarInfo.aProtectForDestroy < 1)
                        {
                            tstr = mMESSAGE.Return(809);
                            tstr2 = mMESSAGE.Return(2752);
                            mCBOXUI.Set(95, tstr2, tstr);
                            return;
                        }
                        mTRANSFER.T_ENGRAVE_ITEM_SEND(mPage[0], mIndex[0], mPage[1], mIndex[1]);
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                        return;
                    }
                    tstr = mMESSAGE.Return(2745);
                    mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                    return;
                }
                if (tItemSort == 1 || tItemSort == 4)
                {
                    if (tITEM->iSort != 7 && tITEM->iSort != 9 && tITEM->iSort != 10 && tITEM->iSort != 11 && tITEM->iSort != 12)
                    {
                        tstr = mMESSAGE.Return(2745);
                        mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                        return;
                    }
                    if (mInv[1].iIndex >= 17216 && mInv[1].iIndex <= 17243 || mInv[1].iIndex >= 17276 && mInv[1].iIndex <= 17303)
                    {
                        if (mUTIL.ReturnISValue(mInv[0].iImproveState) >= 16)
                        {
                            tstr = mMESSAGE.Return(2562);
                            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                            return;
                        }
                        if (mUTIL.Return4thValue(mInv[0].iImproveState) > 0)
                        {
                            tstr = mMESSAGE.Return(2751);
                            tstr2 = mMESSAGE.Return(2750);
                            mCBOXUI.Set(95, tstr2, tstr);
                            return;
                        }
                        mTRANSFER.T_ENGRAVE_ITEM_SEND(mPage[0], mIndex[0], mPage[1], mIndex[1]);
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                        return;
                    }
                    if (mInv[1].iIndex >= 17244 && mInv[1].iIndex <= 17274 || mInv[1].iIndex >= 17304 && mInv[1].iIndex <= 17334)
                    {
                        if (mUTIL.ReturnISValue(mInv[0].iImproveState) >= 16)
                        {
                            tstr = mMESSAGE.Return(2562);
                            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                            return;
                        }
                        if (mUTIL.Return4thValue(mInv[0].iImproveState) > 0)
                        {
                            tstr = mMESSAGE.Return(2751);
                            tstr2 = mMESSAGE.Return(2750);
                            mCBOXUI.Set(94, tstr2, tstr);
                            return;
                        }
                        if (mMYINFO.mAvatarInfo.aProtectForDestroy >= 1)
                        {
                            mTRANSFER.T_ENGRAVE_ITEM_SEND(mPage[0], mIndex[0], mPage[1], mIndex[1]);
                            mMYINFO.mNetworkLock = 1;
                            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                            return;
                        }
                        tstr = mMESSAGE.Return(809);
                        tstr2 = mMESSAGE.Return(2752);
                        mCBOXUI.Set(95, tstr2, tstr);
                        return;
                    }
                }
                tstr = mMESSAGE.Return(2746);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                return;
            }
            return;
        }
        if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
            {
                mIsClick[3] = mIsClick[3] != 1;
            }
            return;
        }
        if (mIsClick[4])
        {
            mIsClick[4] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX - 244, mY + 6, uX, uY))
            {
                mIsClick[3] = 0;
            }
            return;
        }
        if (mIsClick[5])
        {
            mIsClick[5] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))
            {
                if (tUltimateUpgradeState[0] > 0)
                {
                    --tUltimateUpgradeState[0];
                    NPCUI::Reset();
                    NPCUI::SetInvalidIndex();
                }
            }
            return;
        }
        if (mIsClick[6])
        {
            mIsClick[6] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
            {
                if (tUltimateUpgradeState[0] < 2)
                {
                    ++tUltimateUpgradeState[0];
                    mIsClick[3] = 0;
                    NPCUI::Reset();
                    NPCUI::SetInvalidIndex();
                }
            }
            return;
        }
    }
    if (tUltimateUpgradeState[0] == 2)
    {
        sX = mX + 23;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4199]);
        mY = mY;
        if (mINVENUI.LBUTTONUP(uX, uY))
        {
            return;
        }
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                NPCUI::Off();
            }
            return;
        }
        if (mIsClick[1])
        {
            mIsClick[1] = 0;
            return;
        }
        if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
            {
                mIsClick[3] = mIsClick[3] != 1;
            }
            return;
        }
        if (mIsClick[4])
        {
            mIsClick[4] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX - 244, mY + 6, uX, uY))
            {
                mIsClick[3] = 0;
            }
            return;
        }
        if (mIsClick[5])
        {
            mIsClick[5] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 56, mY + 10, uX, uY))
            {
                if (tUltimateUpgradeState[0] > 0)
                {
                    --tUltimateUpgradeState[0];
                    NPCUI::Reset();
                    NPCUI::SetInvalidIndex();
                }
            }
            return;
        }
        if (mIsClick[6])
        {
            mIsClick[6] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 154, mY + 10, uX, uY))
            {
                if (tUltimateUpgradeState[0] < 2)
                {
                    ++tUltimateUpgradeState[0];
                    mIsClick[3] = 0;
                    NPCUI::Reset();
                    NPCUI::SetInvalidIndex();
                }
            }
            return;
        }

        return;
    }
}

void NPCUI::LBUTTONUP70(int uX, int uY)// Craft 2 Tailor
{
    int v3;
    char* v4;
    int v5;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3143]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
            return;
        }
        if (!mIsClick[1])
        {
            if (mIsClick[2])
            {
                mIsClick[2] = 0;
                if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 56, mY + 10, uX, uY))
                    return;
                if (--mMakeItemPresentPage < 0)
                {
                    mMakeItemPresentPage = 0;
                    return;
                }
            }
            else
            {
                if (!mIsClick[3])
                    return;
                mIsClick[3] = 0;
                if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 154, mY + 10, uX, uY))
                    return;
                if (++mMakeItemPresentPage > mMakeItemTotalPage - 1)
                {
                    mMakeItemPresentPage = mMakeItemTotalPage - 1;
                    return;
                }
            }
            NPCUI::Reset();
            NPCUI::SetInvalidIndex();
            return;
        }
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[613], mX + 172, mY + 414, uX, uY))
        {
            switch (mMakeItemPresentPage)
            {
            case 0:// Deco V0=Deco V1 Mask
                if (mInv[0].iIndex != 2383 ||
                    mInv[1].iIndex != 2383 ||
                    mInv[2].iIndex != 2150 ||
                    mInv[3].iIndex != 101 &&
                    mInv[3].iIndex != 102 &&
                    mInv[3].iIndex != 103)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            case 1:// Deco V0=Deco V1 Daiko
                if (mInv[0].iIndex != 2383 ||
                    mInv[1].iIndex != 2383 ||
                    mInv[2].iIndex != 2150 ||
                    mInv[3].iIndex != 107 &&
                    mInv[3].iIndex != 108 &&
                    mInv[3].iIndex != 109)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            case 2:// Deco V0=Deco V1 Gaunlet
                if (mInv[0].iIndex != 2383 ||
                    mInv[1].iIndex != 2383 ||
                    mInv[2].iIndex != 2150 ||
                    mInv[3].iIndex != 110 &&
                    mInv[3].iIndex != 111 &&
                    mInv[3].iIndex != 112)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            case 3:// Deco V1 Legendary Glasses=Deco V2 Legendary Glasses
                if (mInv[0].iIndex != 2383 ||
                    mInv[1].iIndex != 2383 ||
                    mInv[2].iIndex != 2150 ||
                    mInv[3].iIndex != 240)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 2000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            case 4:// Deco V1 Legendary Fauld=Deco V2 Legendary Fauld
                if (mInv[0].iIndex != 2383 ||
                    mInv[1].iIndex != 2383 ||
                    mInv[2].iIndex != 2150 ||
                    mInv[3].iIndex != 243)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 2000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            case 5:// Deco V1 Legendary Gloves=Deco V2 Legendary Gloves
                if (mInv[0].iIndex != 2383 ||
                    mInv[1].iIndex != 2383 ||
                    mInv[2].iIndex != 2150 ||
                    mInv[3].iIndex != 246)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 2000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            case 6:// Deco V2 Legendary Glasses=Deco V3 Legendary Glasses
                if (mInv[0].iIndex != 2383 ||
                    mInv[1].iIndex != 2383 ||
                    mInv[2].iIndex != 2150 ||
                    mInv[3].iIndex != 241)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 3000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            case 7:// Deco V2 Legendary Fauld=Deco V3 Legendary Fauld
                if (mInv[0].iIndex != 2383 ||
                    mInv[1].iIndex != 2383 ||
                    mInv[2].iIndex != 2150 ||
                    mInv[3].iIndex != 244)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 3000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            case 8:// Deco V2 Legendary Gloves=Deco V3 Legendary Gloves
                if (mInv[0].iIndex != 2383 ||
                    mInv[1].iIndex != 2383 ||
                    mInv[2].iIndex != 2150 ||
                    mInv[3].iIndex != 247)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 3000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), 15);
                    return;
                }
                break;

            default:
                mBASICUI.Insert1(mMESSAGE.Return(728), 15);
                return;
            }
            if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
            {
                mTRANSFER.T_UNSEAL_LEGENDARY_SEND(mMakeItemPresentPage, mPage[0], mIndex[0], mPage[1], mIndex[1], mPage[2], mIndex[2], mPage[3], mIndex[3]);
                mMYINFO.mNetworkLock = TRUE;
                mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
            }
            return;
        }
    }
}
void NPCUI::LBUTTONUP72(int uX, int uY)
{
    int tIUValue = 0;
    int tRFValue = 0;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    mX = mX + 23 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4129]);
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                NPCUI::Off();
            }
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[610], mX + 171, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 || mPage[1] == -1)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(221), mFONTCOLOR.mData[44]);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aKillOtherTribe < 50)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(871), mFONTCOLOR.mData[44]);
                    return;
                }
                tIUValue = mUTIL.ReturnIUValue(mInv[0].iImproveState);
                tRFValue = mUTIL.ReturnRFValue(mInv[0].iImproveState);
                if (mInv[1].iIndex == 2476 || mInv[1].iIndex == 2482)
                {
                    if (tIUValue >= 5)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(1932), mFONTCOLOR.mData[44]);
                        return;
                    }
                }
                else
                {
                    if (mInv[1].iIndex != 2477)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(1916), mFONTCOLOR.mData[44]);
                        return;
                    }
                    if (!tRFValue)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(2679), mFONTCOLOR.mData[44]);
                        return;
                    }
                }
                if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    //sub_4BD490(&mTRANSFER, uInfo[0], uInfo2[0], uInfo[1], uInfo2[1]);
                    mMYINFO.mNetworkLock = 1;
                    mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                }
            }
            return;
        }
        else
        {
            if (mIsClick[2])
            {
                mIsClick[2] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
                {
                    mIsClick[3] = mIsClick[3] != 1;
                }
                return;
            }
            if (mIsClick[4])
            {
                mIsClick[4] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX - 244, mY + 6, uX, uY))
                {
                    mIsClick[3] = 0;
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP73(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    char* v6;
    char* v7;
    char* v8;
    int v9;
    int v10;
    int v11;
    int v12;
    char* v13;
    int i;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4145]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
            return;
        }
        if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4146], mX + 171, mY + 414, uX, uY))
                return;
            if (mPage[0] == -1 || mPage[1] == -1 || mPage[2] == -1)
            {
                v9 = mFONTCOLOR.mData[44];
                v4 = mMESSAGE.Return(221);
                mBASICUI.Insert1(v4, v9);
                return;
            }
            v19 = 0;
            for (i = 2; i < 6; ++i)
            {
                if (mPage[i] != -1)
                {
                    ++v19;
                    if (mInv[i].iIndex != 2373 && mInv[i].iIndex != 2400)
                    {
                        v10 = mFONTCOLOR.mData[44];
                        v5 = mMESSAGE.Return(2507);
                        mBASICUI.Insert1(v5, v10);
                        return;
                    }
                }
            }
            v25 = mUTIL.ReturnISValue(mInv[0].iImproveState);
            v20 = mUTIL.ReturnIUValue(mInv[0].iImproveState);
            v18 = mUTIL.ReturnRFValue(mInv[0].iImproveState);
            v16 = mUTIL.Return4thValue(mInv[0].iImproveState);
            v23 = mUTIL.ReturnISValue(mInv[1].iImproveState);
            v17 = mUTIL.ReturnIUValue(mInv[1].iImproveState);
            v21 = mUTIL.ReturnRFValue(mInv[1].iImproveState);
            v22 = mUTIL.Return4thValue(mInv[1].iImproveState);
            v24 = v23 > 0;
            if (v17 > 0)
                ++v24;
            if (v21 > 0)
                ++v24;
            if (v22 > 0)
                ++v24;
            switch (v19)
            {
            case 1:
                if (!v23)
                {
                LABEL_47:
                    v11 = mFONTCOLOR.mData[44];
                    v6 = mMESSAGE.Return(153);
                    mBASICUI.Insert1(v6, v11);
                    return;
                }
                if (v24 < 1)
                {
                LABEL_49:
                    v12 = mFONTCOLOR.mData[44];
                    v7 = mMESSAGE.Return(2704);
                    mBASICUI.Insert1(v7, v12);
                    return;
                }
                break;
            case 2:
                if (!v23 && !v17)
                    goto LABEL_47;
                if (v24 < 2)
                    goto LABEL_49;
                break;
            case 3:
                if (!v23 && !v17 && !v21)
                    goto LABEL_47;
                if (v24 < 3)
                    goto LABEL_49;
                break;
            case 4:
                if (!v23 && !v17 && !v21 && !v22)
                    goto LABEL_47;
                if (v24 < 4)
                    goto LABEL_49;
                break;
            }
            if (v25 || v20 || v18 || v16)
            {
                v13 = mMESSAGE.Return(2692);
                v8 = mMESSAGE.Return(2691);
                mCBOXUI.Set(89, v8, v13);
            }
            else if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
            {
                //sub_4BD650( v19, uInfo[0], uInfo2[0], uInfo[1], uInfo2[1], uInfo[2], uInfo2[2], uInfo[3], uInfo2[3], uInfo[4] uInfo2[4], uInfo[5], uInfo2[5]);
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            }
        }
        else
        {
            if (mIsClick[2])
            {
                mIsClick[2] = 0;
                if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4131], mX + 68, mY + 80, uX, uY))
                    return;
                mIsClick[3] = mIsClick[3] != 1;
            }
            if (mIsClick[4])
            {
                mIsClick[4] = 0;
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX - 244, mY + 6, uX, uY))
                    mIsClick[3] = 0;
            }
        }
    }
}

void NPCUI::LBUTTONUP74(int uX, int uY)
{
    int tIndex1;
    int tYPost1;
    int tPage1;
    int tXPost1;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    mX = mX + 23 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4141]);

    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 7, mY + 7, uX, uY))
            {
                NPCUI::Off();
            }
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 152, mY + 411, uX, uY) && mBloodStoreCurrentPage > 0)
            {
                --mBloodStoreCurrentPage;
                mBloodStoreIndex = -1;
            }
        }
        else if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 250, mY + 411, uX, uY) && mBloodStoreCurrentPage < mBloodStoreMaxPage)
            {
                ++mBloodStoreCurrentPage;
                mBloodStoreIndex = -1;
            }
        }
        else if (mIsClick[3])
        {
            mIsClick[3] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1338], mX + 361, mY + 411, uX, uY))
            {
                if (mBloodStoreIndex == -1 || mBloodStoreIndex < 0 /*|| tBloodStoreInfo[0] < mBloodStoreSelectIndex*/)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1324), mFONTCOLOR.mData[44]);
                    return;
                }
                if (mMYINFO.mAvatarInfo.aPK < mBloodStoreInfo[mBloodStoreCurrentPage][mBloodStoreIndex][1])
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2705), mFONTCOLOR.mData[44]);
                    return;
                }
                mINVENUI.PutInventory1(-1, -1, mBloodStoreInfo[mBloodStoreCurrentPage][mBloodStoreIndex][0], mBloodStoreInfo[mBloodStoreCurrentPage][mBloodStoreIndex][2], &tPage1, &tIndex1, &tXPost1, &tYPost1, -1);
                if (tPage1 == -1)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(117), mFONTCOLOR.mData[44]);
                    return;
                }
                mCBOXUI.Set(90, mMESSAGE.Return(687), "");
            }
        }
    }
}

void NPCUI::LBUTTONUP75(int uX, int uY)
{
    int v3;
    char* v4;
    char* v5;
    char* v6;
    char* v7;
    char* v8;
    char* v9;
    char* v10;
    int v11;
    int v12;
    int v13;
    int v14;
    int v15;
    int v16;
    int v17;
    int v19;
    int v20;
    int v21;
    int v22;
    int v23;
    int v24;
    int v25;
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;
    int v31;
    int v32;
    ITEM_INFO* v33;
    int v34;
    ITEM_INFO* a1;

    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v3 = mX + 23;
    mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4175]);
    mY = mY;
    if (!mINVENUI.LBUTTONUP(uX, uY))
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
                NPCUI::Off();
            return;
        }
        if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4176], mX + 171, mY + 414, uX, uY))
            {
                if (mPage[0] == -1 || mPage[1] == -1)
                {
                    v11 = mFONTCOLOR.mData[44];
                    v4 = mMESSAGE.Return(221);
                    mBASICUI.Insert1(v4, v11);
                    return;
                }
                a1 = mITEM.Search(mInv[0].iIndex);
                v33 = mITEM.Search(mInv[1].iIndex);
                if (a1)
                {
                    if (v33)
                    {
                        v34 = mUTIL.ReturnItemSort(a1);
                        if (v34 == 8)
                        {
                            if (mInv[1].iIndex != 1878 && mInv[1].iIndex != 2150)
                            {
                                goto LABEL_16;
                            }
                            s1 = 0;
                            s2 = 0;
                            s3 = 0;
                            s4 = 0;
                            s5 = 0;
                            v32 = mUTIL.GetSocketAbility(mInv[0].iSocket[0], mInv[0].iSocket[1], mInv[0].iSocket[2], &s1, &s2, &s3, &s4, &s5);
                            if (v32 > 4)
                            {
                                v13 = mFONTCOLOR.mData[44];
                                v6 = mMESSAGE.Return(2507);
                                mBASICUI.Insert1(v6, v13);
                                return;
                            }
                            v31 = 0;
                            if (!v32)
                            {
                                v31 = 10000;
                            }
                            if (mMYINFO.mAvatarInfo.aKillOtherTribe < v31)
                            {
                                v14 = mFONTCOLOR.mData[44];
                                v7 = mMESSAGE.Return(871);
                                mBASICUI.Insert1(v7, v14);
                                return;
                            }
                        }
                        else
                        {
                            if (v34 != 9)
                            {
                                v17 = mFONTCOLOR.mData[44];
                                v10 = mMESSAGE.Return(2739);
                                mBASICUI.Insert1(v10, v17);
                                return;
                            }
                            if (mInv[1].iIndex != 1878 && mInv[1].iIndex != 2150)
                            {
                            LABEL_16:
                                v12 = mFONTCOLOR.mData[44];
                                v5 = mMESSAGE.Return(2507);
                                mBASICUI.Insert1(v5, v12);
                                return;
                            }
                            v19 = 0;
                            v20 = 0;
                            v21 = 0;
                            v22 = 0;
                            v23 = 0;
                            v25 = mUTIL.GetSocketAbility(mInv[0].iSocket[0], mInv[0].iSocket[1], mInv[0].iSocket[2], &v19, &v20, &v21, &v22, &v23);
                            if (v25 > 4)
                            {
                                v15 = mFONTCOLOR.mData[44];
                                v8 = mMESSAGE.Return(2507);
                                mBASICUI.Insert1(v8, v15);
                                return;
                            }
                            v24 = 0;
                            if (!v25)
                            {
                                v24 = 10000;
                            }
                            if (mMYINFO.mAvatarInfo.aKillOtherTribe < v24)
                            {
                                v16 = mFONTCOLOR.mData[44];
                                v9 = mMESSAGE.Return(871);
                                mBASICUI.Insert1(v9, v16);
                                return;
                            }
                        }
                        if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                        {
                            mTRANSFER.T_SOCKET_ITEM_SEND(5, mPage[0], mIndex[0], mPage[1], mIndex[1]);
                            mMYINFO.mNetworkLock = 1;
                            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                        }
                        return;
                    }
                }
            }
        }
    }
}

void NPCUI::LBUTTONUP77(int uX, int uY)
{
    mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4444]) / 2;
    mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[4444]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4446], mX + 28, mY + 332, uX, uY))
        {
            if (mMYINFO.mAvatarInfo.aMetastatisLevel < 1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(2933), mFONTCOLOR.mData[44]);
                return;
            }
            mCBOXUI.Set(101, mMESSAGE.Return(2934), "");
            return;
        }
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4449], mX + 152, mY + 332, uX, uY))
        {
            if (mMYINFO.mAvatarInfo.aUpgradeValue < 96)
            {
                mBASICUI.Insert1(mMESSAGE.Return(2938), mFONTCOLOR.mData[44]);
                return;
            }
            if (mMYINFO.mAvatarInfo.aMetastatisLevel > 100)
            {
                mBASICUI.Insert1(mMESSAGE.Return(2939), mFONTCOLOR.mData[44]);
                return;
            }
            mCBOXUI.Set(102, mMESSAGE.Return(2936), mMESSAGE.Return(2937));
            return;
        }
    }
    else if (mIsClick[2])
    {
        mIsClick[2] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24, uX, uY))
        {
            NPCUI::Off();
        }
    }
}

int NPCUI::ReturnAtributeMoveZone(int tIndex)
{
    switch (tIndex)
    {
    case 0:
        return 313;
    case 1:
        return 316;
    case 2:
        return 331;
    case 3:
        return 334;
    default:
        return 0;
    }
}

int NPCUI::ReturnGuard2MoveNum()
{
    switch (mMYINFO.mPresentZoneNumber)
    {
    case 1:
        if (mMYINFO.mAvatarInfo.aTribe == 0)
        {
            return 18;
        }
        return 0;
    case 6:
        if (mMYINFO.mAvatarInfo.aTribe == 1)
        {
            return 18;
        }
        return 0;
    case 11:
        if (mMYINFO.mAvatarInfo.aTribe == 2)
        {
            return 18;
        }
        return 0;
    case 140:
        if (mMYINFO.mAvatarInfo.aTribe == 3)
        {
            return 18;
        }
        return 0;
    }
}
int NPCUI::ReturnGuard2MoveZone(int mIndex)//Guard teleport movezonesi
{
    switch (mMYINFO.mPresentZoneNumber)
    {
    case 1:
        if (mMYINFO.mAvatarInfo.aTribe != 0)//Teleport Guard Dragon Clan
        {
            return 0;
        }
        if (mMYINFO.mAvatarInfo.aLevel2 < 1)
        {
            switch (mIndex)
            {
            case 0: return 0;
            case 1: return 101;//SOS Solemn 
            case 2: return 102;//SOS Solemn Ground M3-M15
            case 3: return 103;//SOS Solemn Ground M16-M33
			case 4: return 0;
			case 5: return 0;
			case 6: return 0;
            case 7: return 104;//Odawa Cave 1st (Dragon Clan)
            case 8: return 105;//Odawa Cave 2nd (Dragon Clan)
            case 9: return 110;//Odawa Cave 3st (Dragon Clan)
            case 10: return 0;
            case 11: return 0;
            case 12: return 0;
            case 13: return 0;
            case 14: return 126;//Marolo Island(Dragon)
            case 15: return 127;//Ancient Island(Dragon)
            case 16: return 128;//Cardinal Island(Dragon)
            case 17: return 129;//Infernal Island(Dragon)
            default: return 0;
            }
        }
        else
        {
            switch (mIndex)
            {
            case 0: return 111;//Odawa Cave 4th (Dragon Clan)
            case 1: return 251;//Odawa Cave 5th (Dragon Clan)
            case 2: return 252;//Odawa Cave 6th (Dragon Clan)
            case 3: return 259;//Odawa Cave 7th (Dragon Clan)
            case 4: return 260;//Odawa Cave 8th (Dragon Clan)
            case 5: return 0;
			case 6: return 241;//Life or Death(s1)
			case 7: return 242;//Life or Death(s2)
			case 8: return 243;//Life or Death(s3)
			case 9: return 244;//Life or Death(s4)
			case 10: return 245;//Life or Death(s5)
			case 11: return 246;//Life or Death(s6)
            case 12: return 0;
            case 13: return 0;
            case 14: return 287;//Sword Grave(Dragon Clan)
            case 15: return 210;//Temple Exterior 1(Dragon) Problem Mobs
            case 16: return 211;//Temple Exterior 2(Dragon)
            case 17: return 212;//Temple Exterior 3(Dragon)
                if (mMYINFO.mAvatarInfo.aLevel2 == 12)
                {
                    return ReturnZone275TypeZoneNumber();
                }
            default: return 0;
            }
        }
        break;

    case 6:
        if (mMYINFO.mAvatarInfo.aTribe != 1)//Teleport Guard Dragon Clan
        {
            return 0;
        }
        if (mMYINFO.mAvatarInfo.aLevel2 < 1)
        {
            switch (mIndex)
            {
            case 0: return 0;
            case 1: return 101;//SOS Solemn 
            case 2: return 102;//SOS Solemn Ground M3-M15
            case 3: return 103;//SOS Solemn Ground M16-M33
            case 4: return 0;
            case 5: return 0;
            case 6: return 0;
            case 7: return 130;//Marolo Island(Snake)
            case 8: return 131;//Ancient Island(Snake)
            case 9: return 132;//Cardinal Island(Snake)
            case 10: return 133;//Infernal Island(Snake)
            case 11: return 0;
            case 12: return 0;
            case 13: return 0;
            case 14: return 106;//Odawa Cave 1st  (Snake Clan)
            case 15: return 107;//Odawa Cave 2nd (Snake Clan)
            case 16: return 112;//Odawa Cave 3rd  (Tiger Clan) Problem (No Mobs)
            case 17: return 0;
            default: return 0;
            }
        }
        else
        {
            switch (mIndex)
            {
            case 0: return 113;//Odawa Cave 4th (Snake Clan)
            case 1: return 253;//Odawa Cave 5th  (Snake Clan)
            case 2: return 254;//Odawa Cave 6th (Snake Clan)
            case 3: return 261;//Odawa Cave 7th  (Snake Clan)
            case 4: return 262;//Odawa Cave 8th (Snake Clan)
            case 5: return 0;
			case 6: return 241;//Life or Death(s1)
			case 7: return 242;//Life or Death(s2)
			case 8: return 243;//Life or Death(s3)
			case 9: return 244;//Life or Death(s4)
			case 10: return 245;//Life or Death(s5)
			case 11: return 246;//Life or Death(s6)
            case 12: return 0;
            case 13: return 288;//Sword Grave(RS)
            case 14: return 213;//Temple Interior 1(Snake)
            case 15: return 214;//Temple Interior 2(Snake)
            case 16: return 215;//Temple Interior 3(Snake)
            case 17: return 0;
                if (mMYINFO.mAvatarInfo.aLevel2 == 12)
                {
                    return ReturnZone275TypeZoneNumber();
                }
            default: return 0;
            }
        }
        break;

    case 11:
        if (mMYINFO.mAvatarInfo.aTribe != 2)//Teleport Guard Tiger Clan
        {
            return 0;
        }
        if (mMYINFO.mAvatarInfo.aLevel2 < 1)
        {
            switch (mIndex)
            {
            case 0: return 0;
            case 1: return 101;//SOS Solemn 
            case 2: return 102;//SOS Solemn Ground M3-M15
            case 3: return 103;//SOS Solemn Ground M16-M33
            case 4: return 0;
            case 5: return 0;
            case 6: return 0;
            case 7: return 134;//Marolo Island(Tiger)
            case 8: return 135;//Ancient Island(Tiger)
            case 9: return 136;//Cardinal Island(Tiger)
            case 10: return 137;//Infernal Island(Tiger)
            case 11: return 0;
            case 12: return 0;
            case 13: return 0;
            case 14: return 108;//Odawa Cave 1st (Tiger Clan)
            case 15: return 109;//Odawa Cave 2nd (Tiger Clan)
            case 16: return 114;//Odawa Cave 3rd  (Tiger Clan) Problem (No Mobs)
            case 17: return 0;
            default: return 0;
            }
        }
        else
        {
            switch (mIndex)
            {
            case 0: return 115;//Odawa Cave 4th (Tiger Clan)
            case 1: return 255;//Odawa Cave 5th (Tiger Clan)
            case 2: return 256;//Odawa Cave 6th (Tiger Clan)
            case 3: return 263;//Odawa Cave 7th (Tiger Clan)
            case 4: return 264;//Odawa Cave 8th (Tiger Clan)
            case 5: return 0;
			case 6: return 241;//Life or Death(s1)
			case 7: return 242;//Life or Death(s2)
			case 8: return 243;//Life or Death(s3)
			case 9: return 244;//Life or Death(s4)
			case 10: return 245;//Life or Death(s5)
			case 11: return 246;//Life or Death(s6)
            case 12: return 0;
            case 13: return 289;//Sword Grave(GT)
            case 14: return 216;//Temple Interior 1(Tiger)
            case 15: return 217;//Temple Interior 2(Tiger)
            case 16: return 218;//Temple Interior 3(Tiger)
            case 17: return 0;
                if (mMYINFO.mAvatarInfo.aLevel2 == 12) // map level
                {
                    return ReturnZone275TypeZoneNumber();
                }
            default: return 0;
            }
        }
        break;

    case 140:
        if (mMYINFO.mAvatarInfo.aTribe != 3)//Teleport Guard Sky Clan
        {
            return 0;
        }
        if (mMYINFO.mAvatarInfo.aLevel2 < 1)
        {
            switch (mIndex)
            {
            case 0: return 0;
            case 1: return 0;
            case 2: return 117;//Odawa Cave 4th (Sky Clan)
            case 3: return 0;
            case 4: return 0;
            case 5: return 0;
            case 6: return 0;
            case 7: return 0;
            case 8: return 167;//SOS Solemn Ground (SKY)
            case 9: return 0;
            case 10: return 0;
            case 11: return 0;
            case 12: return 0;
            case 13: return 0;
            case 14: return 0;
            case 15: return 219;//Temple Interior 1(Sky)
            case 16: return 220;//Temple Interior 2(Sky)
            case 17: return 221;//Temple Interior 3(Sky)
            default: return 0;
            }
        }
        else
        {
            switch (mIndex)
            {
            case 0: return 117;//Odawa Cave 4th (Sky Clan)
            case 1: return 257;//Odawa Cave 5th  (Sky Clan)
            case 2: return 258;//Odawa Cave 6th (Sky Clan)
            case 3: return 265;//Odawa Cave 7th (Sky Clan)
            case 4: return 266;//Odawa Cave 8th (Sky Clan)
            case 5: return 0;
			case 6: return 241;//Life or Death(s1)
			case 7: return 242;//Life or Death(s2)
			case 8: return 243;//Life or Death(s3)
			case 9: return 244;//Life or Death(s4)
			case 10: return 245;//Life or Death(s5)
			case 11: return 246;//Life or Death(s6)
            case 12: return 0;
            case 13: return 290;////Sword Grave(N)
            case 14: return 219;//Temple Interior 1(Sky)
            case 15: return 220;//Temple Interior 2(Sky)
            case 16: return 221;//Temple Interior 3(Sky)
            case 17: return 0;
                if (mMYINFO.mAvatarInfo.aLevel2 == 12)
                {
                    return ReturnZone275TypeZoneNumber();
                }
            default: return 0;
            }
        }
        break;
    }
}
int NPCUI::ReturnZone275TypeZoneNumber()
{
    switch (mMYINFO.mPresentZoneNumber)
    {
    case 1:
        switch (mMYINFO.mAvatarInfo.aRebirth)
        {
        case 1:
        case 2:
        case 3:
            return 200;
        case 4:
        case 5:
        case 6:
            return 279;
        case 7:
        case 8:
        case 9:
            return 283;
        case 10:
        case 11:
        case 12:
            return 287;
        default:
            return 0;
        }
        break;
    case 6:
        switch (mMYINFO.mAvatarInfo.aRebirth)
        {
        case 1:
        case 2:
        case 3:
            return 200;
        case 4:
        case 5:
        case 6:
            return 280;
        case 7:
        case 8:
        case 9:
            return 284;
        case 10:
        case 11:
        case 12:
            return 288;
        default:
            return 0;
        }
        break;
    case 11:
        switch (mMYINFO.mAvatarInfo.aRebirth)
        {
        case 1:
        case 2:
        case 3:
            return 200;
        case 4:
        case 5:
        case 6:
            return 281;
        case 7:
        case 8:
        case 9:
            return 285;
        case 10:
        case 11:
        case 12:
            return 289;
        default:
            return 0;
        }
        break;
    case 140:
        switch (mMYINFO.mAvatarInfo.aRebirth)
        {
        case 1:
        case 2:
        case 3:
            return 200;
        case 4:
        case 5:
        case 6:
            return 282;
        case 7:
        case 8:
        case 9:
            return 286;
        case 10:
        case 11:
        case 12:
            return 290;
        default:
            return 0;
        }
        break;
    default:
        return 0;
    }
}

void NPCUI::ChangeTribeMasters(int tSort)
{
    if (tSort == 1)
    {
        SetWindowTextA(mEDITBOX.mDATA[16], "");
        mPLAY.DemandInsertTribeSubMaster(tTribePosAvtName);
    }
    else if (tSort == 2)
    {
        mPLAY.DemandDeleteTribeSubMaster(tTribePosAvtName);
    }
}

int NPCUI::GetStoreItemIndex1(int uX, int uY, int tInvalidIndex)
{
    int v5;
    int i;

    if (!mActive || mWorkId != 6)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v5 = mX + 23;
    mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[515]);
    mY = mY;
    for (i = 0;
        i < 28
        && (i == tInvalidIndex
            || uX < mX + 52 * (i % 4) + 11
            || uX > mX + 52 * (i % 4) + 61
            || uY < mY + 52 * (i / 4) + 37
            || uY > mY + 52 * (i / 4) + 87);
        ++i)
    {
        ;
    }
    if (i == 28)
        return -1;
    if (mMYINFO.mAvatarInfo.aStoreItem[mStorePage][i][0] <= 0)
        return -1;
    return i;
}

int NPCUI::GetStoreItemIndex2(int uX, int uY, int tInvalidIndex)
{
    int v5;
    int i;

    if (!mActive || mWorkId != 6)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v5 = mX + 23;
    mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[515]);
    mY = mY;
    for (i = 0;
        i < 28
        && (i == tInvalidIndex
            || uX < mX + 52 * (i % 4) + 11
            || uX > mX + 52 * (i % 4) + 61
            || uY < mY + 52 * (i / 4) + 37
            || uY > mY + 52 * (i / 4) + 87);
        ++i)
    {
        ;
    }
    if (i == 28)
        return -1;
    if (mMYINFO.mAvatarInfo.aStoreItem[mStorePage][i][0] >= 1)
        return -1;
    return i;
}

int NPCUI::PutStoreItem1(int uX, int uY, int tItemIndex, int tQuantity, int tInvalidIndex)
{
    int v8;
    ITEM_INFO* v9;

    v8 = NPCUI::GetStoreItemIndex1(uX, uY, tInvalidIndex);
    if (v8 == -1)
        return NPCUI::GetStoreItemIndex2(uX, uY, tInvalidIndex);
    v9 = mITEM.Search(tItemIndex);
    if (!v9)
        return -1;
    if (v9->iSort != 2)
        return -1;
    if (mMYINFO.mAvatarInfo.aStoreItem[mStorePage][v8][0] == tItemIndex
        && tQuantity + mMYINFO.mAvatarInfo.aStoreItem[mStorePage][v8][1] <= MAX_ITEM_DUPLICATION_NUM)
    {
        return v8;
    }
    return -1;
}
BOOL NPCUI::PutStoreMoney(int uX, int uY, int tInvalidIndex)
{
    BOOL result;
    int v5;

    if (!mActive || mWorkId != 6)
        return 0;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v5 = mX + 23;
    mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[515]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[515], mX, mY, uX, uY))
        result = !mUTIL.CheckOverMaximum(mMYINFO.mAvatarInfo.aStoreMoney, tInvalidIndex);
    else
        result = 0;
    return result;
}
BOOL NPCUI::PutSaveMoney(int uX, int uY, int tInvalidIndex)
{
    BOOL result;
    int v5;

    if (!mActive || mWorkId != 12)
        return 0;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v5 = mX + 23;
    mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[688]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[688], mX, mY, uX, uY))
        result = !mUTIL.CheckOverMaximum(mMYINFO.mAvatarInfo.uSaveMoney, tInvalidIndex);
    else
        result = 0;
    return result;
}
int NPCUI::PutBigStoreMoney(int uX, int uY, int tInvalidIndex)
{
    int v5;
    char* v6;
    int v7;

    if (!mActive || mWorkId != 6)
        return 0;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v5 = mX + 23;
    mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[515]);
    mY = mY;
    if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[515], mX, mY, uX, uY))
        return 0;
    if (!mUTIL.CheckOverBigMoneyMaximum(mMYINFO.mAvatarInfo.aStoreMoney2, tInvalidIndex))
        return 1;
    v7 = mFONTCOLOR.mData[44];
    v6 = mMESSAGE.Return(1918);
    mBASICUI.Insert1(v6, v7);
    return 0;
}
int NPCUI::PutBigSaveMoney(int uX, int uY, int tInvalidIndex)
{
    int v5;
    char* v6;
    int v7;

    if (!mActive || mWorkId != 12)
        return 0;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v5 = mX + 23;
    mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[688]);
    mY = mY;
    if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[688], mX, mY, uX, uY))
        return 0;
    if (!mUTIL.CheckOverBigMoneyMaximum(mMYINFO.mAvatarInfo.uSaveMoney2, tInvalidIndex))
        return 1;
    v7 = mFONTCOLOR.mData[44];
    v6 = mMESSAGE.Return(1918);
    mBASICUI.Insert1(v6, v7);
    return 0;
}
int NPCUI::GetSaveItemIndex1(int uX, int uY, int tInvalidIndex)
{
    int v5;
    int i;

    if (!mActive || mWorkId != 12)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v5 = mX + 23;
    mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[688]);
    mY = mY;
    for (i = 0;
        i < 28
        && (i == tInvalidIndex
            || uX < mX + 52 * (i % 4) + 11
            || uX > mX + 52 * (i % 4) + 61
            || uY < mY + 52 * (i / 4) + 37
            || uY > mY + 52 * (i / 4) + 87);
        ++i)
    {
        ;
    }
    if (i == 28)
        return -1;
    if (mMYINFO.mAvatarInfo.uSaveItem[i][0] <= 0)
        return -1;
    return i;
}

int NPCUI::GetSaveItemIndex2(int uX, int uY, int tInvalidIndex)
{
    int v5;
    int i;

    if (!mActive || mWorkId != 12)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v5 = mX + 23;
    mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[688]);
    mY = mY;
    for (i = 0;
        i < 28
        && (i == tInvalidIndex
            || uX < mX + 52 * (i % 4) + 11
            || uX > mX + 52 * (i % 4) + 61
            || uY < mY + 52 * (i / 4) + 37
            || uY > mY + 52 * (i / 4) + 87);
        ++i)
    {
        ;
    }
    if (i == 28)
        return -1;
    if (mMYINFO.mAvatarInfo.uSaveItem[i][0] >= 1)
        return -1;
    return i;
}

int NPCUI::PutSaveItem1(int uX, int uY, int tItemIndex, int tQuantity, int tInvalidIndex)
{
    int v8;
    ITEM_INFO* v9;

    v8 = NPCUI::GetSaveItemIndex1(uX, uY, tInvalidIndex);
    if (v8 == -1)
        return NPCUI::GetSaveItemIndex2(uX, uY, tInvalidIndex);
    v9 = mITEM.Search(tItemIndex);
    if (!v9)
        return -1;
    if (v9->iSort != 2)
        return -1;
    if (mMYINFO.mAvatarInfo.uSaveItem[v8][0] == tItemIndex
        && tQuantity + mMYINFO.mAvatarInfo.uSaveItem[v8][1] <= 999)
    {
        return v8;
    }
    return -1;
}

int NPCUI::GetNPCShopIndex1(int uX, int uY)
{
    int v4;
    int i;

    if (!mActive || mWorkId != 8)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[471]);
    mY = mY;
    for (i = 0;
        i < 28
        && (uX < mX + 52 * (i % 4) + 11
            || uX > mX + 52 * (i % 4) + 61
            || uY < mY + 52 * (i / 4) + 37
            || uY > mY + 52 * (i / 4) + 87);
        ++i)
    {
        ;
    }
    if (i == 28)
        return -1;
    if (mNPCInfo->nShopInfo[mShopPresentPage][i] <= 0)
        return -1;
    return i;
}

int NPCUI::GetNPCShopIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 8)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[471]);
    mY = mY;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[471], mX, mY, uX, uY))
        result = 0;
    else
        result = -1;
    return result;
}

int NPCUI::GetImproveIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 13)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[725]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetImproveIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 13)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[725]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetImprove2Index1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 46)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3179]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetImprove2Index2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 46)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3179]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetImprove3Index1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 58)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3786]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetImprove3Index2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 58)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3786]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetAddIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 26)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1477]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetAddIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 26)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1477]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetSmeltIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 54)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3456]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetSmeltIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 54)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3456]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetAccTransferIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 73)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4145]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
                {
                    if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
                    {
                        if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                        {
                            result = -1;
                        }
                        else if (mPage[5] == -1)
                        {
                            result = -1;
                        }
                        else
                        {
                            result = 5;
                        }
                    }
                    else if (mPage[4] == -1)
                    {
                        result = -1;
                    }
                    else
                    {
                        result = 4;
                    }
                }
                else if (mPage[3] == -1)
                {
                    result = -1;
                }
                else
                {
                    result = 3;
                }
            }
            else if (mPage[2] == -1)
            {
                result = -1;
            }
            else
            {
                result = 2;
            }
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetAccTransferIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 73)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4145]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
                {
                    if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
                    {
                        if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                        {
                            result = -1;
                        }
                        else if (mPage[5] == -1)
                        {
                            result = 5;
                        }
                        else
                        {
                            result = -1;
                        }
                    }
                    else if (mPage[4] == -1)
                    {
                        result = 4;
                    }
                    else
                    {
                        result = -1;
                    }
                }
                else if (mPage[3] == -1)
                {
                    result = 3;
                }
                else
                {
                    result = -1;
                }
            }
            else if (mPage[2] == -1)
            {
                result = 2;
            }
            else
            {
                result = -1;
            }
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetRequiemSmeltIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 72)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4129]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetRequiemSmeltIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 72)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4129]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetExchangeIndex1(int uX, int uY)
{
    int result;
    int v4;
    int v5;

    if (!mActive || mWorkId != 30)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    if (!mPageSort)
    {
        v4 = mX + 23;
        mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1661]);
        mY = mY;
        if (uX > mX + 88 && uX < mX + 138 && uY > mY + 294 && uY < mY + 344)
        {
            if (mPage[0] == -1)
                result = -1;
            else
                result = 0;
            return result;
        }
        return -1;
    }
    if (mPageSort != 1)
        return -1;
    v5 = mX + 23;
    mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4152]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
            return -1;
        if (mPage[1] == -1)
            result = -1;
        else
            result = 1;
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetExchangeIndex2(int uX, int uY)
{
    int result;
    int v4;
    int v5;

    if (!mActive || mWorkId != 30)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    if (!mPageSort)
    {
        v4 = mX + 23;
        mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1661]);
        mY = mY;
        if (uX > mX + 88 && uX < mX + 138 && uY > mY + 294 && uY < mY + 344)
        {
            if (mPage[0] == -1)
                result = 0;
            else
                result = -1;
            return result;
        }
        return -1;
    }
    if (mPageSort != 1)
        return -1;
    v5 = mX + 23;
    mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4152]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
            return -1;
        if (mPage[1] == -1)
            result = 1;
        else
            result = -1;
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetHighIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 18)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[972]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetHighIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 18)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[972]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetLegendHighIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 68)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4021]);
    mY = mY;
    switch (tUltimateUpgradeState[0])
    {
    case 0:
        if (uX > mX + 154 && uX < mX + 204 && uY > mY + 212 && uY < mY + 262)
        {
            if (mPage[0] == -1)
                result = -1;
            else
                result = 0;
            return result;
        }
        if (uX > mX + 22 && uX < mX + 72 && uY > mY + 212 && uY < mY + 262)
        {
            if (mPage[1] == -1)
                result = -1;
            else
                result = 1;
            return result;
        }
        return -1;
    case 1:
        if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
        {
            if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
                {
                    if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                    {
                        if (uX > mX + 11 && uX < mX + 61 && uY > mY + 140 && uY < mY + 190)
                            return 4;
                        if (uX > mX + 63 && uX < mX + 113 && uY > mY + 140 && uY < mY + 190)
                            return 5;
                        if (uX > mX + 115 && uX < mX + 165 && uY > mY + 140 && uY < mY + 190)
                            return 6;
                        if (uX > mX + 167 && uX < mX + 217 && uY > mY + 140 && uY < mY + 190)
                            return 7;
                        if (uX > mX + 89 && uX < mX + 139 && uY > mY + 180 && uY < mY + 230)
                            return 8;
                        return -1;
                    }
                    if (mPage[3] == -1)
                        result = -1;
                    else
                        result = 3;
                }
                else if (mPage[2] == -1)
                {
                    result = -1;
                }
                else
                {
                    result = 2;
                }
            }
            else if (mPage[1] == -1)
            {
                result = -1;
            }
            else
            {
                result = 1;
            }
        }
        else if (mPage[0] == -1)
        {
            result = -1;
        }
        else
        {
            result = 0;
        }
        break;
    case 2:
        if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
        {
            if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
                {
                    if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                    {
                        if (uX > mX + 11 && uX < mX + 61 && uY > mY + 140 && uY < mY + 190)
                            return 4;
                        if (uX > mX + 63 && uX < mX + 113 && uY > mY + 140 && uY < mY + 190)
                            return 5;
                        if (uX > mX + 89 && uX < mX + 139 && uY > mY + 180 && uY < mY + 230)
                            return 8;
                        return -1;
                    }
                    if (mPage[3] == -1)
                        result = -1;
                    else
                        result = 3;
                }
                else if (mPage[2] == -1)
                {
                    result = -1;
                }
                else
                {
                    result = 2;
                }
            }
            else if (mPage[1] == -1)
            {
                result = -1;
            }
            else
            {
                result = 1;
            }
        }
        else if (mPage[0] == -1)
        {
            result = -1;
        }
        else
        {
            result = 0;
        }
        break;
    default:
        return -1;
    }
    return result;
}

int NPCUI::GetLegendHighIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 68)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4021]);
    mY = mY;
    if (!tUltimateUpgradeState[0])
    {
        if (uX > mX + 154 && uX < mX + 204 && uY > mY + 212 && uY < mY + 262)
        {
            if (mPage[0] == -1)
                result = 0;
            else
                result = -1;
            return result;
        }
        if (uX > mX + 22 && uX < mX + 72 && uY > mY + 212 && uY < mY + 262)
        {
            if (mPage[1] == -1)
                result = 1;
            else
                result = -1;
            return result;
        }
        return -1;
    }
    if (tUltimateUpgradeState[0] != 1 && tUltimateUpgradeState[0] != 2)
        return -1;
    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
    {
        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
        {
            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                    return -1;
                if (mPage[3] == -1)
                    result = 3;
                else
                    result = -1;
            }
            else if (mPage[2] == -1)
            {
                result = 2;
            }
            else
            {
                result = -1;
            }
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetLegendImproveIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 69 || tUltimateUpgradeState[0])
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4025]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetLegendImproveIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 69 || tUltimateUpgradeState[0])
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4025]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetLegendImprove2Index1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 70)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4029]);
    mY = mY;
    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
    {
        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
        {
            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                {
                    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 74 || uY >= mY + 124)
                    {
                        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 74 || uY >= mY + 124)
                        {
                            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 74 || uY >= mY + 124)
                            {
                                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 74 || uY >= mY + 124)
                                {
                                    if (uX <= mX + 89 || uX >= mX + 139 || uY <= mY + 180 || uY >= mY + 230)
                                    {
                                        result = -1;
                                    }
                                    else if (mMakeItemInfo[mMakeItemPresentPage][4] <= 0)
                                    {
                                        result = -1;
                                    }
                                    else
                                    {
                                        result = 8;
                                    }
                                }
                                else if (mMakeItemInfo[mMakeItemPresentPage][3] <= 0)
                                {
                                    result = -1;
                                }
                                else
                                {
                                    result = 7;
                                }
                            }
                            else if (mMakeItemInfo[mMakeItemPresentPage][2] <= 0)
                            {
                                result = -1;
                            }
                            else
                            {
                                result = 6;
                            }
                        }
                        else if (mMakeItemInfo[mMakeItemPresentPage][1] <= 0)
                        {
                            result = -1;
                        }
                        else
                        {
                            result = 5;
                        }
                    }
                    else if (mMakeItemInfo[mMakeItemPresentPage][0] <= 0)
                    {
                        result = -1;
                    }
                    else
                    {
                        result = 4;
                    }
                }
                else if (mPage[3] == -1)
                {
                    result = -1;
                }
                else
                {
                    result = 3;
                }
            }
            else if (mPage[2] == -1)
            {
                result = -1;
            }
            else
            {
                result = 2;
            }
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetLegendImprove2Index2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 70)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4029]);
    mY = mY;
    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
    {
        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
        {
            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                {
                    result = -1;
                }
                else if (mPage[3] == -1)
                {
                    result = 3;
                }
                else
                {
                    result = -1;
                }
            }
            else if (mPage[2] == -1)
            {
                result = 2;
            }
            else
            {
                result = -1;
            }
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetLegendEngraveIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 69 || tUltimateUpgradeState[0] != 1)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4199]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetLegendEngraveIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 69 || tUltimateUpgradeState[0] != 1)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4199]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetLowIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 25)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1356]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetLowIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 25)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1356]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetMakeItemIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 10)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[612]);
    mY = mY;
    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
    {
        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
        {
            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                {
                    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 74 || uY >= mY + 124)
                    {
                        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 74 || uY >= mY + 124)
                        {
                            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 74 || uY >= mY + 124)
                            {
                                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 74 || uY >= mY + 124)
                                {
                                    if (uX <= mX + 89 || uX >= mX + 139 || uY <= mY + 180 || uY >= mY + 230)
                                    {
                                        result = -1;
                                    }
                                    else if (mMakeItemInfo[mMakeItemPresentPage][4] <= 0)
                                    {
                                        result = -1;
                                    }
                                    else
                                    {
                                        result = 8;
                                    }
                                }
                                else if (mMakeItemInfo[mMakeItemPresentPage][3] <= 0)
                                {
                                    result = -1;
                                }
                                else
                                {
                                    result = 7;
                                }
                            }
                            else if (mMakeItemInfo[mMakeItemPresentPage][2] <= 0)
                            {
                                result = -1;
                            }
                            else
                            {
                                result = 6;
                            }
                        }
                        else if (mMakeItemInfo[mMakeItemPresentPage][1] <= 0)
                        {
                            result = -1;
                        }
                        else
                        {
                            result = 5;
                        }
                    }
                    else if (mMakeItemInfo[mMakeItemPresentPage][0] <= 0)
                    {
                        result = -1;
                    }
                    else
                    {
                        result = 4;
                    }
                }
                else if (mPage[3] == -1)
                {
                    result = -1;
                }
                else
                {
                    result = 3;
                }
            }
            else if (mPage[2] == -1)
            {
                result = -1;
            }
            else
            {
                result = 2;
            }
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetMakeItemIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 10)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[612]);
    mY = mY;
    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
    {
        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
        {
            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                {
                    result = -1;
                }
                else if (mPage[3] == -1)
                {
                    result = 3;
                }
                else
                {
                    result = -1;
                }
            }
            else if (mPage[2] == -1)
            {
                result = 2;
            }
            else
            {
                result = -1;
            }
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetMakeBirdIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 41)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3143]);
    mY = mY;
    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
    {
        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
        {
            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                {
                    result = -1;
                }
                else if (mPage[3] == -1)
                {
                    result = -1;
                }
                else
                {
                    result = 3;
                }
            }
            else if (mPage[2] == -1)
            {
                result = -1;
            }
            else
            {
                result = 2;
            }
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetMakeBirdIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 41)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3143]);
    mY = mY;
    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
    {
        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
        {
            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                {
                    result = -1;
                }
                else if (mPage[3] == -1)
                {
                    result = 3;
                }
                else
                {
                    result = -1;
                }
            }
            else if (mPage[2] == -1)
            {
                result = 2;
            }
            else
            {
                result = -1;
            }
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetMakeSkillIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 17)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[957]);
    mY = mY;
    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
    {
        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
        {
            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                {
                    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 74 || uY >= mY + 124)
                    {
                        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 74 || uY >= mY + 124)
                        {
                            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 74 || uY >= mY + 124)
                            {
                                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 74 || uY >= mY + 124)
                                {
                                    if (uX <= mX + 89 || uX >= mX + 139 || uY <= mY + 180 || uY >= mY + 230)
                                    {
                                        result = -1;
                                    }
                                    else if (mMakeItemInfo[mMakeItemPresentPage][4] <= 0)
                                    {
                                        result = -1;
                                    }
                                    else
                                    {
                                        result = 8;
                                    }
                                }
                                else if (mMakeItemInfo[mMakeItemPresentPage][3] <= 0)
                                {
                                    result = -1;
                                }
                                else
                                {
                                    result = 7;
                                }
                            }
                            else if (mMakeItemInfo[mMakeItemPresentPage][2] <= 0)
                            {
                                result = -1;
                            }
                            else
                            {
                                result = 6;
                            }
                        }
                        else if (mMakeItemInfo[mMakeItemPresentPage][1] <= 0)
                        {
                            result = -1;
                        }
                        else
                        {
                            result = 5;
                        }
                    }
                    else if (mMakeItemInfo[mMakeItemPresentPage][0] <= 0)
                    {
                        result = -1;
                    }
                    else
                    {
                        result = 4;
                    }
                }
                else if (mPage[3] == -1)
                {
                    result = -1;
                }
                else
                {
                    result = 3;
                }
            }
            else if (mPage[2] == -1)
            {
                result = -1;
            }
            else
            {
                result = 2;
            }
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetMakeSkillIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 17)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[957]);
    mY = mY;
    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
    {
        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
        {
            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                {
                    result = -1;
                }
                else if (mPage[3] == -1)
                {
                    result = 3;
                }
                else
                {
                    result = -1;
                }
            }
            else if (mPage[2] == -1)
            {
                result = 2;
            }
            else
            {
                result = -1;
            }
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetDestroyIndex1(int uX, int uY)
{
    int v4;

    if (!mActive || mWorkId != 42)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3142]);
    mY = mY;
    if (uX <= mX + 88 || uX >= mX + 138 || uY <= mY + 294 || uY >= mY + 344)
        return -1;
    if (mPage[0] == -1)
        return -1;
    return 0;
}

int NPCUI::GetDestroyIndex2(int uX, int uY)
{
    int v4;

    if (!mActive || mWorkId != 42)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3142]);
    mY = mY;
    if (uX <= mX + 88 || uX >= mX + 138 || uY <= mY + 294 || uY >= mY + 344)
        return -1;
    if (mPage[0] == -1)
        return 0;
    return -1;
}

int NPCUI::GetSkyImproveIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 51)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3247]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetSkyImproveIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 51)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3247]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetSocketExchangeIndex1(int uX, int uY)
{
    int v4;

    if (!mActive || mWorkId != 22)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3313]);
    mY = mY;
    if (uX <= mX + 88 || uX >= mX + 138 || uY <= mY + 294 || uY >= mY + 344)
        return -1;
    if (mPage[0] == -1)
        return -1;
    return 0;
}

int NPCUI::GetSocketExchangeIndex2(int uX, int uY)
{
    int v4;

    if (!mActive || mWorkId != 22)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3313]);
    mY = mY;
    if (uX <= mX + 88 || uX >= mX + 138 || uY <= mY + 294 || uY >= mY + 344)
        return -1;
    if (mPage[0] == -1)
        return 0;
    return -1;
}

int NPCUI::GetSocketInitIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 14)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3333]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetSocketInitIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 14)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3333]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetSocketJewelUpIdx1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 23)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3314]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetSocketJewelUpIdx2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 23)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3314]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetSocketJewelDeleteIdx1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 19)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3334]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetSocketJewelDeleteIdx2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 19)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3334]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetSocketAddUpIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 56)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3516]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetSocketAddUpIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 56)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3516]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetCloakUpIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 63)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3905]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetCloakUpIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 63)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3905]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetMakeG12PetIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 66)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3993]);
    mY = mY;
    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
    {
        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
        {
            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                {
                    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 74 || uY >= mY + 124)
                    {
                        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 74 || uY >= mY + 124)
                        {
                            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 74 || uY >= mY + 124)
                            {
                                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 74 || uY >= mY + 124)
                                {
                                    if (uX <= mX + 89 || uX >= mX + 139 || uY <= mY + 180 || uY >= mY + 230)
                                    {
                                        result = -1;
                                    }
                                    else if (mMakeItemInfo[mMakeItemPresentPage][4] <= 0)
                                    {
                                        result = -1;
                                    }
                                    else
                                    {
                                        result = 8;
                                    }
                                }
                                else if (mMakeItemInfo[mMakeItemPresentPage][3] <= 0)
                                {
                                    result = -1;
                                }
                                else
                                {
                                    result = 7;
                                }
                            }
                            else if (mMakeItemInfo[mMakeItemPresentPage][2] <= 0)
                            {
                                result = -1;
                            }
                            else
                            {
                                result = 6;
                            }
                        }
                        else if (mMakeItemInfo[mMakeItemPresentPage][1] <= 0)
                        {
                            result = -1;
                        }
                        else
                        {
                            result = 5;
                        }
                    }
                    else if (mMakeItemInfo[mMakeItemPresentPage][0] <= 0)
                    {
                        result = -1;
                    }
                    else
                    {
                        result = 4;
                    }
                }
                else if (mPage[3] == -1)
                {
                    result = -1;
                }
                else
                {
                    result = 3;
                }
            }
            else if (mPage[2] == -1)
            {
                result = -1;
            }
            else
            {
                result = 2;
            }
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetMakeG12PetIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 66)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3993]);
    mY = mY;
    if (uX <= mX + 11 || uX >= mX + 61 || uY <= mY + 327 || uY >= mY + 377)
    {
        if (uX <= mX + 63 || uX >= mX + 113 || uY <= mY + 327 || uY >= mY + 377)
        {
            if (uX <= mX + 115 || uX >= mX + 165 || uY <= mY + 327 || uY >= mY + 377)
            {
                if (uX <= mX + 167 || uX >= mX + 217 || uY <= mY + 327 || uY >= mY + 377)
                {
                    result = -1;
                }
                else if (mPage[3] == -1)
                {
                    result = 3;
                }
                else
                {
                    result = -1;
                }
            }
            else if (mPage[2] == -1)
            {
                result = 2;
            }
            else
            {
                result = -1;
            }
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetLegendSocketIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 75)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4175]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int NPCUI::GetLegendSocketIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 75)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4175]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetPetAddAbilityIndex1(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 67)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3996]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = -1;
    }
    else
    {
        result = 0;
    }
    return result;
}
int NPCUI::GetPetAddAbilityIndex2(int uX, int uY)
{
    int result;
    int v4;

    if (!mActive || mWorkId != 67)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3996]);
    mY = mY;
    if (uX <= mX + 154 || uX >= mX + 204 || uY <= mY + 212 || uY >= mY + 262)
    {
        if (uX <= mX + 22 || uX >= mX + 72 || uY <= mY + 212 || uY >= mY + 262)
        {
            result = -1;
        }
        else if (mPage[1] == -1)
        {
            result = 1;
        }
        else
        {
            result = -1;
        }
    }
    else if (mPage[0] == -1)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }
    return result;
}

int NPCUI::GetCashShopIndex1(int uX, int uY)
{
    int v4;
    int i;

    if (!mActive || mWorkId != 21)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1164]);
    mY = mY;
    for (i = 0;
        i < 10
        && (uX < mX + 195 * (i / 5) + 28
            || uX > mX + 195 * (i / 5) + 78
            || uY < mY + 69 * (i % 5) + 54
            || uY > mY + 69 * (i % 5) + 104);
        ++i)
    {
        ;
    }
    if (i == 10)
        return -1;
    if (mCashShopInfo[mCashShopMaxPage][mCashShopPage][i][0] <= -1)
        return -1;
    return i;
}
int NPCUI::GetSearchBuyIndex1(int uX, int uY)
{
    int v4;
    int i;

    if (!mActive || mWorkId != 33)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    v4 = mX + 23;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2429]);
    mY = mY;
    for (i = 0; i < 10; ++i)
    {
        if (i + 10 * mItemSearchInfo[4] <= mItemSearchInfo[6] - 1
            && uX > mX + 288 * (i / 5) + 156
            && uX < mX + 288 * (i / 5) + 216
            && uY > mY + ((i % 5) << 6) + 79
            && uY < mY + ((i % 5) << 6) + 129)
        {
            return i + 10 * mItemSearchInfo[4];
        }
    }
    return -1;
}
int NPCUI::GetBloodShopIndex1(int uX, int uY)
{
    int i;

    if (!mActive || mWorkId != 74)
    {
        return -1;
    }
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    mX = mX + 23 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4141]);
    for (i = 0; i < 10 && (uX < mX + 195 * (i / 5) + 28 || uX > mX + 195 * (i / 5) + 78 || uY < mY + 69 * (i % 5) + 54 || uY > mY + 69 * (i % 5) + 104); ++i)
    {
        ;
    }
    if (i == 10)
    {
        return -1;
    }
    if (mBloodStoreInfo[mBloodStoreCurrentPage][i][0] <= -1)
    {
        return -1;
    }
    return i;
}

char* NPCUI::DrawTeleportBoardInfo(int mIndex)
{
    char mBuffer[100];

    if (!ReturnGuardMoveZone(mIndex))
    {
        return "";
    }
    sprintf(mBuffer, "%s %s", mZONENAME.Return(ReturnGuardMoveZone(mIndex)), mMESSAGE.Return(225));
    return mBuffer;
}

int NPCUI::ReturnMenuImage(int tWorkSort)
{
    int result;

    switch (tWorkSort)
    {
    case 1:
        result = 408;
        break;
    case 2:
        result = 411;
        break;
    case 3:
        result = 423;
        break;
    case 4:
        result = 468;
        break;
    case 5:
        result = 456;
        break;
    case 6:
        result = 450;
        break;
    case 7:
        result = 447;
        break;
    case 8:
        result = 414;
        break;
    case 9:
        result = 2394;
        break;
    case 10:
        result = 462;
        break;
    case 11:
        result = 417;
        break;
    case 12:
        result = 459;
        break;
    case 13:
        result = 728;
        break;
    case 14:
        result = 3327;
        break;
    case 15:
        result = 746;
        break;
    case 16:
        result = 831;
        break;
    case 17:
        result = 960;
        break;
    case 18:
        result = 976;
        break;
    case 19:
        result = 3330;
        break;
    case 20:
        result = 417;
        break;
    case 21:
        result = 1172;
        break;
    case 22:
        result = 3307;
        break;
    case 23:
        result = 3310;
        break;
    case 24:
        result = 3502;
        break;
    case 25:
        result = 1360;
        break;
    case 26:
        result = 1480;
        break;
    case 27:
        result = 1565;
        break;
    case 28:
        result = 1590;
        break;
    case 29:
        result = 1631;
        break;
    case 30:
        result = 1662;
        break;
    case 33:
        result = 2426;
        break;
    case 34:
        result = 456;
        break;
    case 35:
        result = 2650;
        break;
    case 36:
        result = 1815;
        break;
    case 37:
        result = 2813;
        break;
    case 38:
        result = 2976;
        break;
    case 39:
        result = 3079;
        break;
    case 40:
        result = 3133;
        break;
    case 41:
        result = 3144;
        break;
    case 42:
        result = 3139;
        break;
    case 43:
        result = 3158;
        break;
    case 44:
        result = 3161;
        break;
    case 45:
        result = 3172;
        break;
    case 46:
        result = 3176;
        break;
    case 47:
        result = 3195;
        break;
    case 48:
        result = 3199;
        break;
    case 49:
        result = 3202;
        break;
    case 50:
        result = 3205;
        break;
    case 51:
        result = 3244;
        break;
    case 52:
        result = 3266;
        break;
    case 53:
        result = 3291;
        break;
    case 54:
        result = 3449;
        break;
    case 55:
        result = 3706;
        break;
    case 56:
        result = 3513;
        break;
    case 58:
        result = 3779;
        break;
    case 59:
        result = 3782;
        break;
    case 61:
        result = 417;
        break;
    case 62:
        result = 2999;
        break;
    case 63:
        result = 3902;
        break;
    case 64:
        result = 3970;
        break;
    case 66:
        result = 3999;
        break;
    case 67:
        result = 4002;
        break;
    case 68:
        result = 4018;
        break;
    case 69:
        result = 4022;
        break;
    case 70:
        result = 4026;
        break;
    case 71:
        result = 4122;
        break;
    case 72:
        result = 4126;
        break;
    case 73:
        result = 4148;
        break;
    case 75:
        result = 4172;
        break;
    case 76:
        result = 4224;
        break;
    case 77:
        result = 4462;
        break;
    default:
        result = 0;
        break;
    }
    return result;
}

int NPCUI::ReturnMoneyMoveNum()
{
    switch (mMYINFO.mAvatarInfo.aTribe)
    {
    case 0:
        switch (mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe))
        {
        case -1:
            return 8;
        case 0:
            return 8;
        case 1:
            return 14;
        case 2:
            return 14;
        case 3:
            return 12;
        default:
            return 0;
        }
        break;
    case 1:
        switch (mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe))
        {
        case -1:
            return 8;
        case 0:
            return 14;
        case 1:
            return 8;
        case 2:
            return 14;
        case 3:
            return 12;
        default:
            return 0;
        }
        break;
    case 2:
        switch (mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe))
        {
        case -1:
            return 8;
        case 0:
            return 14;
        case 1:
            return 14;
        case 2:
            return 8;
        case 3:
            return 12;
        default:
            return 0;
        }
        break;
    case 3:
        switch (mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe))
        {
        case -1:
            return 6;
        case 0:
            return 12;
        case 1:
            return 12;
        case 2:
            return 12;
        case 3:
            return 6;
        default:
            return 0;
        }
        break;
    default:
        return 0;
    }
}

int NPCUI::ReturnMoneyMoveZoneNumber(int tIndex)
{
    switch (mMYINFO.mAvatarInfo.aTribe)
    {
    case 0:
        switch (mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe))
        {
        case -1:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 1;
            case 2:
                return 2;
            case 3:
                return 3;
            case 4:
                return 4;
            case 5:
                return 43;
            case 6:
                return 56;
            case 7:
                return 170;
            default:
                return 0;
            }
            break;
        case 0:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 1;
            case 2:
                return 2;
            case 3:
                return 3;
            case 4:
                return 4;
            case 5:
                return 43;
            case 6:
                return 56;
            case 7:
                return 170;
            default:
                return 0;
            }
            break;
        case 1:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 1;
            case 2:
                return 20;
            case 3:
                return 3;
            case 4:
                return 4;
            case 5:
                return 43;
            case 6:
                return 56;
            case 7:
                return 6;
            case 8:
                return 7;
            case 9:
                return 8;
            case 10:
                return 9;
            case 11:
                return 44;
            case 12:
                return 57;
            case 13:
                return 170;
            default:
                return 0;
            }
            break;
        case 2:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 1;
            case 2:
                return 2;
            case 3:
                return 3;
            case 4:
                return 4;
            case 5:
                return 43;
            case 6:
                return 56;
            case 7:
                return 11;
            case 8:
                return 12;
            case 9:
                return 13;
            case 10:
                return 14;
            case 11:
                return 45;
            case 12:
                return 58;
            case 13:
                return 170;
            default:
                return 0;
            }
            break;
        case 3:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 1;
            case 2:
                return 2;
            case 3:
                return 3;
            case 4:
                return 4;
            case 5:
                return 43;
            case 6:
                return 56;
            case 7:
                return 140;
            case 8:
                return 141;
            case 9:
                return 142;
            case 10:
                return 143;
            case 11:
                return 170;
            default:
                return 0;
            }
            break;
        default:
            return 0;
        }
        break;
    case 1:
        switch (mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe))
        {
        case -1:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 6;
            case 2:
                return 7;
            case 3:
                return 8;
            case 4:
                return 9;
            case 5:
                return 44;
            case 6:
                return 57;
            case 7:
                return 170;
            default:
                return 0;
            }
            break;
        case 0:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 6;
            case 2:
                return 7;
            case 3:
                return 8;
            case 4:
                return 9;
            case 5:
                return 44;
            case 6:
                return 57;
            case 7:
                return 1;
            case 8:
                return 2;
            case 9:
                return 3;
            case 10:
                return 4;
            case 11:
                return 43;
            case 12:
                return 56;
            case 13:
                return 170;
            default:
                return 0;
            }
            break;
        case 1:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 6;
            case 2:
                return 7;
            case 3:
                return 8;
            case 4:
                return 9;
            case 5:
                return 44;
            case 6:
                return 57;
            case 7:
                return 170;
            default:
                return 0;
            }
            break;
        case 2:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 6;
            case 2:
                return 7;
            case 3:
                return 8;
            case 4:
                return 9;
            case 5:
                return 44;
            case 6:
                return 57;
            case 7:
                return 11;
            case 8:
                return 12;
            case 9:
                return 13;
            case 10:
                return 14;
            case 11:
                return 45;
            case 12:
                return 58;
            case 13:
                return 170;
            default:
                return 0;
            }
            break;
        case 3:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 6;
            case 2:
                return 7;
            case 3:
                return 8;
            case 4:
                return 9;
            case 5:
                return 44;
            case 6:
                return 57;
            case 7:
                return 140;
            case 8:
                return 141;
            case 9:
                return 142;
            case 10:
                return 143;
            case 11:
                return 170;
            default:
                return 0;
            }
            break;
        default:
            return 0;
        }
        break;
    case 2:
        switch (mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe))//Seyis teleport
        {
        case -1:
            switch (tIndex)
            {
            case 0:
                return 37;
            //case 1:
            //	return 1;
            case 1:
                return 12;
            case 2:
                return 13;
            case 3:
                return 14;
            case 4:
                return 45;
            case 5:
                return 58;
            case 6:
                return 170;
            default:
                return 0;
            }
            break;
        case 0:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 11;
            case 2:
                return 12;
            case 3:
                return 13;
            case 4:
                return 14;
            case 5:
                return 45;
            case 6:
                return 58;
            case 7:
                return 1;
            case 8:
                return 2;
            case 9:
                return 3;
            case 10:
                return 4;
            case 11:
                return 43;
            case 12:
                return 56;
            case 13:
                return 170;
            default:
                return 0;
            }
            break;
        case 1:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 11;
            case 2:
                return 12;
            case 3:
                return 13;
            case 4:
                return 14;
            case 5:
                return 45;
            case 6:
                return 58;
            case 7:
                return 6;
            case 8:
                return 7;
            case 9:
                return 8;
            case 10:
                return 9;
            case 11:
                return 44;
            case 12:
                return 57;
            case 13:
                return 170;
            default:
                return 0;
            }
            break;
        case 2:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 11;
            case 2:
                return 12;
            case 3:
                return 13;
            case 4:
                return 170;
            case 5:
                return 45;
            case 6:
                return 58;
            case 7:
                return 170;
            default:
                return 0;
            }
            break;
        case 3:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 11;
            case 2:
                return 12;
            case 3:
                return 13;
            case 4:
                return 14;
            case 5:
                return 45;
            case 6:
                return 58;
            case 7:
                return 140;
            case 8:
                return 141;
            case 9:
                return 142;
            case 10:
                return 143;
            case 11:
                return 170;
            default:
                return 0;
            }
            break;
        default:
            return 0;
        }
        break;
    case 3:
        switch (mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe))//Teleport sky clan
        {
        case -1:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 140;
            case 2:
                return 141;
            case 3:
                return 142;
            case 4:
                return 143;
            case 5:
                return 170;
            default:
                return 0;
            }
            break;
        case 0:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 140;
            case 2:
                return 141;
            case 3:
                return 142;
            case 4:
                return 143;
            case 5:
                return 1;
            case 6:
                return 2;
            case 7:
                return 3;
            case 8:
                return 4;
            case 9:
                return 43;
            case 10:
                return 56;
            case 11:
                return 170;
            default:
                return 0;
            }
            break;
        case 1:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 140;
            case 2:
                return 141;
            case 3:
                return 142;
            case 4:
                return 143;
            case 5:
                return 6;
            case 6:
                return 7;
            case 7:
                return 8;
            case 8:
                return 9;
            case 9:
                return 44;
            case 10:
                return 57;
            case 11:
                return 170;
            default:
                return 0;
            }
            break;
        case 2:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 140;
            case 2:
                return 141;
            case 3:
                return 142;
            case 4:
                return 143;
            case 5:
                return 11;
            case 6:
                return 12;
            case 7:
                return 13;
            case 8:
                return 14;
            case 9:
                return 45;
            case 10:
                return 58;
            case 11:
                return 170;
            default:
                return 0;
            }
            break;
        case 3:
            switch (tIndex)
            {
            case 0:
                return 37;
            case 1:
                return 140;
            case 2:
                return 141;
            case 3:
                return 142;
            case 4:
                return 143;
            case 5:
                return 170;
            default:
                return 0;
            }
            break;
        default:
            return 0;
        }
        break;
    default:
        return 0;
    }
}

char* NPCUI::ReturnMoneyMoveInfo(int tZone)
{
    char mBuffer[1000];

    sprintf(mBuffer, "%s %s (%s 1000)", mZONENAME.Return(ReturnMoneyMoveZoneNumber(tZone)), mMESSAGE.Return(225), mMESSAGE.Return(226));
    return mBuffer;
}

void NPCUI::FourGuildMoveZone(int tZoneIndex, float tCoord[3])
{
    int tZone[4];

    tZone[0] = 138;
    tZone[1] = 139;
    tZone[2] = 165;
    tZone[3] = 166;
    if (tZoneIndex <= 3u && !mMYINFO.mMoveZoneState)
    {
        mMYINFO.mMoveZoneState = 1;
        mMYINFO.mMoveZoneSort = 6;
        mMYINFO.mMoveZoneValue = 0;
        mMYINFO.mNextZoneNumber = tZone[tZoneIndex];
        memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
        mMYINFO.mAction.aType = 0;
        mMYINFO.mAction.aSort = 1;
        mMYINFO.mAction.aFrame = 0.0;
        mMYINFO.mAction.aLocation[0] = *tCoord;
        mMYINFO.mAction.aLocation[1] = tCoord[1];
        mMYINFO.mAction.aLocation[2] = tCoord[2];
        mMYINFO.mAction.aFront = (rand() % 360);
        mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
        mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, tZone[tZoneIndex]);
    }
}
int NPCUI::FourGuildZoneCoord(int tTribe, char* tGuildName, float tLocation[3])
{
    int i;
    float tCoords[3][3];
    float v6;
    float v7;
    float v8;

    tCoords[0][0] = -6.0;
    tCoords[0][1] = 20.0;
    tCoords[0][2] = 4584.0;
    tCoords[1][0] = -13.0;
    tCoords[1][1] = 15.0;
    tCoords[1][2] = 2386.0;
    tCoords[2][0] = -3.0;
    tCoords[2][1] = 10.0;
    tCoords[2][2] = 182.0;
    v6 = 0.0;
    v7 = 5.0;
    v8 = -2011.0;
    tLocation[0] = 0.0;
    tLocation[1] = 0.0;
    tLocation[2] = 0.0;
    if (tTribe > 3)
    {
        return 0;
    }
    for (i = 0; i < 4; ++i)
    {
        if (!strcmp(mPLAY.mWorldInfo.mBigForGuildName[tTribe][i], tGuildName))
        {
            tLocation[0] = tCoords[i][0];
            tLocation[1] = tCoords[i][1];
            tLocation[2] = tCoords[i][2];
            return 1;
        }
    }
    if (strcmp(mPLAY.mWorldInfo.mBigFourGuildForChallenge[tTribe], tGuildName))
    {
        return 0;
    }
    tLocation[0] = -14.0;
    tLocation[1] = 0.0;
    tLocation[2] = -4242.0;
    return 1;
}