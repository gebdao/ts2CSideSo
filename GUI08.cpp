#include "gxdheader.h"

PSHOPUI mPSHOPUI;

BOOL PSHOPUI::Init()
{
    mActive = 0;
    return TRUE;
}

void PSHOPUI::InitForEnterZone()
{
    mActive = 0;
    mDisplaySort = 0;
}
void PSHOPUI::Set()
{
    int i;
    int k;
    int m;
    int ii;
    int kk;
    int j;
    int l;
    int n;
    int jj;
    int ll;

    if (mActive)
    {
        mActive = 0;
        mDisplaySort = 0;
        switch (mPShopSort)
        {
        case 1:
            for (i = 0; i < 5; ++i)
            {
                for (j = 0; j < 5; ++j)
                {
                    if (mPShopInfo.mItemInfo[i][j][0] >= 1)
                    {
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][0] = mPShopInfo.mItemInfo[i][j][0];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][1] = mPShopInfo.mItemInfo[i][j][7];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][2] = mPShopInfo.mItemInfo[i][j][8];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][3] = mPShopInfo.mItemInfo[i][j][1];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][4] = mPShopInfo.mItemInfo[i][j][2];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][5] = mPShopInfo.mItemInfo[i][j][3];
                        mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][0] = mPShopInfo.mItemSocket[i][j][0];
                        mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][1] = mPShopInfo.mItemSocket[i][j][1];
                        mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][2] = mPShopInfo.mItemSocket[i][j][2];
                    }
                }
            }
            if (mEDITBOX.mDataIndex == 14)
                mEDITBOX.Set(0);
            break;
        case 2:
            for (k = 0; k < 5; ++k)
            {
                for (l = 0; l < 5; ++l)
                {
                    if (mPShopInfo.mItemInfo[k][l][0] >= 1)
                    {
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[k][l][5]][mPShopInfo.mItemInfo[k][l][6]][0] = mPShopInfo.mItemInfo[k][l][0];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[k][l][5]][mPShopInfo.mItemInfo[k][l][6]][1] = mPShopInfo.mItemInfo[k][l][7];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[k][l][5]][mPShopInfo.mItemInfo[k][l][6]][2] = mPShopInfo.mItemInfo[k][l][8];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[k][l][5]][mPShopInfo.mItemInfo[k][l][6]][3] = mPShopInfo.mItemInfo[k][l][1];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[k][l][5]][mPShopInfo.mItemInfo[k][l][6]][4] = mPShopInfo.mItemInfo[k][l][2];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[k][l][5]][mPShopInfo.mItemInfo[k][l][6]][5] = mPShopInfo.mItemInfo[k][l][3];
                        mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[k][l][5]][mPShopInfo.mItemInfo[k][l][6]][0] = mPShopInfo.mItemSocket[k][l][0];
                        mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[k][l][5]][mPShopInfo.mItemInfo[k][l][6]][1] = mPShopInfo.mItemSocket[k][l][1];
                        mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[k][l][5]][mPShopInfo.mItemInfo[k][l][6]][2] = mPShopInfo.mItemSocket[k][l][2];
                    }
                }
            }
            mTRANSFER.T_END_PSHOP_SEND(1);
            break;
        case 4:
            for (m = 0; m < 5; ++m)
            {
                for (n = 0; n < 5; ++n)
                {
                    if (mPShopInfo.mItemInfo[m][n][0] >= 1)
                    {
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[m][n][5]][mPShopInfo.mItemInfo[m][n][6]][0] = mPShopInfo.mItemInfo[m][n][0];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[m][n][5]][mPShopInfo.mItemInfo[m][n][6]][1] = mPShopInfo.mItemInfo[m][n][7];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[m][n][5]][mPShopInfo.mItemInfo[m][n][6]][2] = mPShopInfo.mItemInfo[m][n][8];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[m][n][5]][mPShopInfo.mItemInfo[m][n][6]][3] = mPShopInfo.mItemInfo[m][n][1];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[m][n][5]][mPShopInfo.mItemInfo[m][n][6]][4] = mPShopInfo.mItemInfo[m][n][2];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[m][n][5]][mPShopInfo.mItemInfo[m][n][6]][5] = mPShopInfo.mItemInfo[m][n][3];
                        mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[m][n][5]][mPShopInfo.mItemInfo[m][n][6]][0] = mPShopInfo.mItemSocket[m][n][0];
                        mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[m][n][5]][mPShopInfo.mItemInfo[m][n][6]][1] = mPShopInfo.mItemSocket[m][n][1];
                        mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[m][n][5]][mPShopInfo.mItemInfo[m][n][6]][2] = mPShopInfo.mItemSocket[m][n][2];
                    }
                }
            }
            if (mEDITBOX.mDataIndex == 14)
                mEDITBOX.Set(0);
            break;
        case 5:
            for (ii = 0; ii < 5; ++ii)
            {
                for (jj = 0; jj < 5; ++jj)
                {
                    if (mPShopInfo.mItemInfo[ii][jj][0] <= 0 || mPShopInfo.mItemInfo[ii][jj][6] <= -1)
                    {
                        mPShopInfo.mItemInfo[ii][jj][0] = 0;
                        mPShopInfo.mItemInfo[ii][jj][1] = 0;
                        mPShopInfo.mItemInfo[ii][jj][2] = 0;
                        mPShopInfo.mItemInfo[ii][jj][3] = 0;
                        mPShopInfo.mItemInfo[ii][jj][4] = 0;
                        mPShopInfo.mItemInfo[ii][jj][5] = -1;
                        mPShopInfo.mItemInfo[ii][jj][6] = -1;
                        mPShopInfo.mItemInfo[ii][jj][7] = -1;
                        mPShopInfo.mItemInfo[ii][jj][8] = -1;
                        mPShopInfo.mItemSocket[ii][jj][0] = 0;
                        mPShopInfo.mItemSocket[ii][jj][1] = 0;
                        mPShopInfo.mItemSocket[ii][jj][2] = 0;
                    }
                    else
                    {
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[ii][jj][5]][mPShopInfo.mItemInfo[ii][jj][6]][0] = mPShopInfo.mItemInfo[ii][jj][0];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[ii][jj][5]][mPShopInfo.mItemInfo[ii][jj][6]][1] = mPShopInfo.mItemInfo[ii][jj][7];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[ii][jj][5]][mPShopInfo.mItemInfo[ii][jj][6]][2] = mPShopInfo.mItemInfo[ii][jj][8];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[ii][jj][5]][mPShopInfo.mItemInfo[ii][jj][6]][3] = mPShopInfo.mItemInfo[ii][jj][1];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[ii][jj][5]][mPShopInfo.mItemInfo[ii][jj][6]][4] = mPShopInfo.mItemInfo[ii][jj][2];
                        mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[ii][jj][5]][mPShopInfo.mItemInfo[ii][jj][6]][5] = mPShopInfo.mItemInfo[ii][jj][3];
                        mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[ii][jj][5]][mPShopInfo.mItemInfo[ii][jj][6]][0] = mPShopInfo.mItemSocket[ii][jj][0];
                        mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[ii][jj][5]][mPShopInfo.mItemInfo[ii][jj][6]][1] = mPShopInfo.mItemSocket[ii][jj][1];
                        mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[ii][jj][5]][mPShopInfo.mItemInfo[ii][jj][6]][2] = mPShopInfo.mItemSocket[ii][jj][2];
                    }
                }
            }
            if (mEDITBOX.mDataIndex == 14)
                mEDITBOX.Set(0);
            break;
        case 6:
        case 7:
            for (kk = 0; kk < 5; ++kk)
            {
                for (ll = 0; ll < 5; ++ll)
                {
                    mPShopInfo.mItemInfo[kk][ll][0] = 0;
                    mPShopInfo.mItemInfo[kk][ll][1] = 0;
                    mPShopInfo.mItemInfo[kk][ll][2] = 0;
                    mPShopInfo.mItemInfo[kk][ll][3] = 0;
                    mPShopInfo.mItemInfo[kk][ll][4] = 0;
                    mPShopInfo.mItemInfo[kk][ll][5] = -1;
                    mPShopInfo.mItemInfo[kk][ll][6] = -1;
                    mPShopInfo.mItemInfo[kk][ll][7] = -1;
                    mPShopInfo.mItemInfo[kk][ll][8] = -1;
                    mPShopInfo.mItemSocket[kk][ll][0] = 0;
                    mPShopInfo.mItemSocket[kk][ll][1] = 0;
                    mPShopInfo.mItemSocket[kk][ll][2] = 0;
                }
            }
            break;
        default:
            return;
        }
    }
}
void PSHOPUI::Off(int tSort, char* tAvatarName, DWORD mUniqueNumber)
{
    char* v4;
    char* v5;
    char* v6;
    char* v7;
    char* v8;
    int v9;
    int v10;
    int v11;
    int v12;
    int v13;
    int i;
    int j;
    int l;
    int m;
    int ii;
    int jj;
    int k;
    int n;
    int kk;

    if (mUTIL.CheckInfiniteBattleZone())
    {
        v9 = mFONTCOLOR.mData[44];
        v4 = mMESSAGE.Return(1352);
        mBASICUI.Insert1(v4, v9);
        return;
    }
    if (!mDisplaySort)
    {
        switch (tSort)
        {
        case 1:
            if (PSHOPUI::CheckPossiblePShopRegion(
                mMYINFO.mAvatarInfo.aTribe,
                mMYINFO.mPresentZoneNumber,
                mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
            {
                if (mMYINFO.mCheckSendActionPacket || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 1)
                    goto LABEL_9;
                mUI.Off(1);
                mActive = 1;
                for (i = 0; i < 7; ++i)
                    mIsClick[i] = 0;
                mPShopSort = 1;
                strcpy(mAvatarName, tAvatarName);
                strcpy(mPShopInfo.mName, "");
                for (j = 0; j < 5; ++j)
                {
                    for (k = 0; k < 5; ++k)
                    {
                        mPShopInfo.mItemInfo[j][k][0] = 0;
                        mPShopInfo.mItemInfo[j][k][1] = 0;
                        mPShopInfo.mItemInfo[j][k][2] = 0;
                        mPShopInfo.mItemInfo[j][k][3] = 0;
                        mPShopInfo.mItemInfo[j][k][4] = 0;
                        mPShopInfo.mItemSocket[j][k][0] = 0;
                        mPShopInfo.mItemSocket[j][k][1] = 0;
                        mPShopInfo.mItemSocket[j][k][2] = 0;
                    }
                }
                mPage = 0;
                mEDITBOX.Set(14);
                SetWindowTextA(mEDITBOX.mDATA[13], "");
                mINVENUI.Set();
            }
            else
            {
                v10 = mFONTCOLOR.mData[44];
                v5 = mMESSAGE.Return(582);
                mBASICUI.Insert1(v5, v10);
            }
            break;
        case 2:
            mUI.Off(1);
            mActive = 1;
            for (l = 0; l < 7; ++l)
                mIsClick[l] = 0;
            mPShopSort = 3;
            strcpy(mAvatarName, tAvatarName);
            strcpy(mPShopInfo.mName, "");
            for (m = 0; m < 5; ++m)
            {
                for (n = 0; n < 5; ++n)
                {
                    mPShopInfo.mItemInfo[m][n][0] = 0;
                    mPShopInfo.mItemInfo[m][n][1] = 0;
                    mPShopInfo.mItemInfo[m][n][2] = 0;
                    mPShopInfo.mItemInfo[m][n][3] = 0;
                    mPShopInfo.mItemInfo[m][n][4] = 0;
                    mPShopInfo.mItemSocket[m][n][0] = 0;
                    mPShopInfo.mItemSocket[m][n][1] = 0;
                    mPShopInfo.mItemSocket[m][n][2] = 0;
                }
            }
            mPage = 0;
            mINVENUI.Set();
            mTRANSFER.T_DEMAND_PSHOP_SEND(mAvatarName);
            break;
        case 3:
        case 4:
        case 5:
            if (tSort == 3)
            {
                if (mMYINFO.mAvatarInfo.aProxyShopTime <= 0)
                {
                    v12 = mFONTCOLOR.mData[44];
                    v7 = mMESSAGE.Return(2015);
                    mBASICUI.Insert1(v7, v12);
                    return;
                }
                if (!PSHOPUI::CheckPossibleDeputyPShopRegion(
                    mMYINFO.mAvatarInfo.aTribe,
                    mMYINFO.mPresentZoneNumber,
                    mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
                {
                    v13 = mFONTCOLOR.mData[44];
                    v8 = mMESSAGE.Return(2089);
                    mBASICUI.Insert1(v8, v13);
                    return;
                }
                if (mMYINFO.mCheckSendActionPacket || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 1)
                {
                LABEL_9:
                    v11 = mFONTCOLOR.mData[44];
                    v6 = mMESSAGE.Return(120);
                    mBASICUI.Insert1(v6, v11);
                    return;
                }
            }
            mUI.Off(1);
            for (ii = 0; ii < 7; ++ii)
                mIsClick[ii] = 0;
            strcpy(mAvatarName, tAvatarName);
            strcpy(mPShopInfo.mName, "");
            for (jj = 0; jj < 5; ++jj)
            {
                for (kk = 0; kk < 5; ++kk)
                {
                    mPShopInfo.mItemInfo[jj][kk][0] = 0;
                    mPShopInfo.mItemInfo[jj][kk][1] = 0;
                    mPShopInfo.mItemInfo[jj][kk][2] = 0;
                    mPShopInfo.mItemInfo[jj][kk][3] = 0;
                    mPShopInfo.mItemInfo[jj][kk][4] = 0;
                    mPShopInfo.mItemInfo[jj][kk][5] = -1;
                    mPShopInfo.mItemInfo[jj][kk][6] = -1;
                    mPShopInfo.mItemInfo[jj][kk][7] = -1;
                    mPShopInfo.mItemInfo[jj][kk][8] = -1;
                    mPShopInfo.mItemSocket[jj][kk][0] = 0;
                    mPShopInfo.mItemSocket[jj][kk][1] = 0;
                    mPShopInfo.mItemSocket[jj][kk][2] = 0;
                }
            }
            mPage = 0;
            switch (tSort)
            {
            case 3:
                mTRANSFER.T_GET_DEPUTY_PSHOP_SEND(1, -1, mAvatarName);
                break;
            case 4:
                mTRANSFER.T_GET_DEPUTY_PSHOP_SEND(2, mUniqueNumber, mAvatarName);
                break;
            case 5:
                mTRANSFER.T_GET_DEPUTY_PSHOP_SEND(3, mUniqueNumber, mAvatarName);
                break;
            }
            break;
        default:
            return;
        }
    }
}
int PSHOPUI::LBUTTONDOWN(int uX, int uY)
{
    int sX;
    int tIndex;

    if (!mActive)
    {
        return 0;
    }
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[669]);
    mY = mY;
    switch (mPShopSort)
    {
    case 1:
        if (mINVENUI.LBUTTONDOWN(uX, uY))
        {
            return 1;
        }
        if (uX > mEDITBOX.mEditBoxInfo[13][0] && uX < mEDITBOX.mEditBoxInfo[13][2] && uY > mEDITBOX.mEditBoxInfo[13][1] && uY < mEDITBOX.mEditBoxInfo[13][3])
        {
            mEDITBOX.Set(14);
            return 1;
        }
        tIndex = PSHOPUI::GetPShopIndex1(uX, uY, -1);
        if (tIndex != -1)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mCHOICEUI.Set(18, mPage, tIndex, mPShopInfo.mItemInfo[mPage][tIndex][0], mPShopInfo.mItemInfo[mPage][tIndex][7], mPShopInfo.mItemInfo[mPage][tIndex][8], mPShopInfo.mItemInfo[mPage][tIndex][1], mPShopInfo.mItemInfo[mPage][tIndex][2], mPShopInfo.mItemInfo[mPage][tIndex][3], 0, mPShopInfo.mItemInfo[mPage][tIndex][5], mPShopInfo.mItemInfo[mPage][tIndex][6]);
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2006], mX + 21, mY + 411, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2007], mX + 119, mY + 411, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[2] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[670], mX + 167, mY + 411, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[3] = 1;
            return 1;
        }
        return 1;

    case 2:
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2006], mX + 21, mY + 411, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2007], mX + 119, mY + 411, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[2] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[673], mX + 167, mY + 411, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[3] = 1;
            return 1;
        }
        return 1;

    case 3:
        if (mINVENUI.LBUTTONDOWN(uX, uY))
        {
            return 1;
        }
        tIndex = PSHOPUI::GetPShopIndex1(uX, uY, -1);
        if (tIndex != -1)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mCHOICEUI.Set(19, mPage, tIndex, mPShopInfo.mItemInfo[mPage][tIndex][0], mPShopInfo.mItemInfo[mPage][tIndex][7], mPShopInfo.mItemInfo[mPage][tIndex][8], mPShopInfo.mItemInfo[mPage][tIndex][1], mPShopInfo.mItemInfo[mPage][tIndex][2], mPShopInfo.mItemInfo[mPage][tIndex][3], 0, mPShopInfo.mItemInfo[mPage][tIndex][5], mPShopInfo.mItemInfo[mPage][tIndex][6]);
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2006], mX + 21, mY + 411, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2007], mX + 119, mY + 411, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[2] = 1;
            return 1;
        }
        return 1;

    case 4:
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[28], mX + 107, mY + 69 * mIndex + 65, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (atoi(mPrice) >= 1)
            {
                mPShopInfo.mItemInfo[mPage][mIndex][4] = atoi(mPrice);
            }
            else
            {
                mPShopInfo.mItemInfo[mPage][mIndex][4] = 1;
            }
            if (mDisplaySort)
            {
                mPShopSort = 5;
            }
            else
            {
                mPShopSort = 1;
            }
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[306], mX + 149, mY + 69 * mIndex + 65, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mPShopInfo.mItemInfo[mPage][mIndex][4] = 1;
            if (mDisplaySort)
            {
                mPShopSort = 5;
            }
            else
            {
                mPShopSort = 1;
            }
            return 1;
        }
        return 1;

    case 5:
        if (mMenuSort == 2)
        {
            if (mINVENUI.LBUTTONDOWN(uX, uY))
            {
                return 1;
            }
        }
        else if (mINVENUI.mActive)
        {
            mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2402], mX + 30, mY + 173, uX, uY) && mINVENUI.mInvenPage == 1)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mINVENUI.mInvenPage = 0;
            }
            if (mMYINFO.mAvatarInfo.aExpandInventoryDate > 0 && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2403], mX + 80, mY + 173, uX, uY) && !mINVENUI.mInvenPage)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mINVENUI.mInvenPage = 1;
            }
        }
        if (uX > mEDITBOX.mEditBoxInfo[13][0] && uX < mEDITBOX.mEditBoxInfo[13][2] && uY > mEDITBOX.mEditBoxInfo[13][1] && uY < mEDITBOX.mEditBoxInfo[13][3])
        {
            mEDITBOX.Set(14);
            return 1;
        }
        else if (mMenuSort == 1)
        {
            tIndex = PSHOPUI::GetPShopIndex1(uX, uY, -1);
            if (tIndex != -1)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mCHOICEUI.Set(27, mPage, tIndex, mPShopInfo.mItemInfo[mPage][tIndex][0], mPShopInfo.mItemInfo[mPage][tIndex][7], mPShopInfo.mItemInfo[mPage][tIndex][8], mPShopInfo.mItemInfo[mPage][tIndex][1], mPShopInfo.mItemInfo[mPage][tIndex][2], mPShopInfo.mItemInfo[mPage][tIndex][3], 0, mPShopInfo.mItemInfo[mPage][tIndex][5], mPShopInfo.mItemInfo[mPage][tIndex][6]);
                return 1;
            }
            goto GENERAL;
        }
        else
        {
        GENERAL:
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[0] = 1;
                return 1;
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2006], mX + 9, mY + 411, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[1] = 1;
                return 1;
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2007], mX + 97, mY + 411, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[2] = 1;
                return 1;
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[670], mX + 175, mY + 411, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[3] = 1;
                return 1;
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3491], mX + 119, mY + 411, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[4] = 1;
                return 1;
            }
            else if (mMenuSort == 1 && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3517], mX, mY - 17, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[5] = 1;
                return 1;
            }
            else if (mMenuSort == 2 && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3520], mX + 126, mY - 17, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[6] = 1;
                return 1;
            }
        }
        return 1;

    case 6:
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2006], mX + 9, mY + 411, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2007], mX + 97, mY + 411, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[2] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[673], mX + 175, mY + 411, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[3] = 1;
            return 1;
        }
        return 1;

    case 7:
        if (mINVENUI.LBUTTONDOWN(uX, uY))
        {
            return 1;
        }
        tIndex = PSHOPUI::GetPShopIndex1(uX, uY, -1);
        if (tIndex != -1)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mCHOICEUI.Set(28, mPage, tIndex, mPShopInfo.mItemInfo[mPage][tIndex][0], mPShopInfo.mItemInfo[mPage][tIndex][7], mPShopInfo.mItemInfo[mPage][tIndex][8], mPShopInfo.mItemInfo[mPage][tIndex][1], mPShopInfo.mItemInfo[mPage][tIndex][2], mPShopInfo.mItemInfo[mPage][tIndex][3], 0, mPShopInfo.mItemInfo[mPage][tIndex][5], mPShopInfo.mItemInfo[mPage][tIndex][6]);
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2006], mX + 9, mY + 411, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2007], mX + 97, mY + 411, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[2] = 1;
            return 1;
        }
        return 1;

    default:
        return 1;
    }
}
int PSHOPUI::LBUTTONUP(int uX, int uY)
{
    int sX;
    int tIndex;
    int i, j, k;

    if (!mActive)
    {
        return 0;
    }
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[669]);
    mY = mY;

    switch (mPShopSort)
    {
    case 1:
        if (mINVENUI.LBUTTONUP(uX, uY))
        {
            return 1;
        }
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                mINVENUI.Off();
                PSHOPUI::Set();
            }
            return 1;
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2006], mX + 21, mY + 411, uX, uY))
            {
                if (--mPage < 0)
                {
                    mPage = 0;
                }
            }
            return 1;
        }
        else if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2007], mX + 119, mY + 411, uX, uY))
            {
                if (++mPage > 4)
                {
                    mPage = 4;
                }
            }
            return 1;
        }
        else if (mIsClick[3])
        {
            mIsClick[3] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[670], mX + 167, mY + 411, uX, uY))
            {
                GetWindowTextA(mEDITBOX.mDATA[13], mPShopInfo.mName, 25);
                if (!strcmp(mPShopInfo.mName, ""))
                {
                    mBASICUI.Insert1(mMESSAGE.Return(591), mFONTCOLOR.mData[44]);
                    return 1;
                }
                for (i = 0; i < 5; ++i)
                {
                    for (j = 0; j < 5; ++j)
                    {
                        if (mPShopInfo.mItemInfo[i][j][0] <= 0)
                        {
                            continue;
                        }
                        break;
                    }
                    if (j < 5)
                    {
                        break;
                    }
                }
                if (i == 5)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(592), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    mTRANSFER.T_START_PSHOP_SEND(1, &mPShopInfo);
                    mMYINFO.mNetworkLock = 1;
                    mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                }
                return 1;
            }
        }
        return 1;

    case 2:
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                PSHOPUI::Set();
            }
            return 1;
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2006], mX + 21, mY + 411, uX, uY))
            {
                if (--mPage < 0)
                {
                    mPage = 0;
                }
            }
            return 1;
        }
        else if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2007], mX + 119, mY + 411, uX, uY))
            {
                if (++mPage > 4)
                {
                    mPage = 4;
                }
            }
            return 1;
        }
        else if (mIsClick[3])
        {
            mIsClick[3] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[673], mX + 167, mY + 411, uX, uY))
            {
                mTRANSFER.T_END_PSHOP_SEND(1);
            }
            return 1;
        }
        return 1;

    case 3:
        if (mINVENUI.LBUTTONUP(uX, uY))
        {
            return 1;
        }
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                mINVENUI.Off();
                PSHOPUI::Set();
            }
            return 1;
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2006], mX + 21, mY + 411, uX, uY))
            {
                if (--mPage < 0)
                {
                    mPage = 0;
                }
            }
            return 1;
        }
        else if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2007], mX + 119, mY + 411, uX, uY))
            {
                if (++mPage > 4)
                {
                    mPage = 4;
                }
            }
            return 1;
        }
        return 1;

    case 4:
        return 1;

    case 5:
        if (mINVENUI.LBUTTONUP(uX, uY))
        {
            return 1;
        }
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                mINVENUI.Off();
                PSHOPUI::Set();
            }
            return 1;
        }
        else if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2006], mX + 9, mY + 411, uX, uY))
            {
                if (--mPage < 0)
                {
                    mPage = 0;
                }
            }
            return 1;
        }
        else if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2007], mX + 97, mY + 411, uX, uY))
            {
                if (++mPage > 4)
                {
                    mPage = 4;
                }
            }
            return 1;
        }
        else if (mIsClick[3])
        {
            mIsClick[3] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[670], mX + 175, mY + 411, uX, uY))
            {
                GetWindowTextA(mEDITBOX.mDATA[13], mPShopInfo.mName, 25);
                if (!strcmp(mPShopInfo.mName, ""))
                {
                    mBASICUI.Insert1(mMESSAGE.Return(591), mFONTCOLOR.mData[44]);
                    return 1;
                }
                else
                {
                    for (i = 0; i < 5; ++i)
                    {
                        for (j = 0; j < 5; ++j)
                        {
                            if (mPShopInfo.mItemInfo[i][j][0] <= 0)
                            {
                                continue;
                            }
                            break;
                        }
                        if (j < 5)
                        {
                            break;
                        }
                    }
                    if (i == 5)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(592), mFONTCOLOR.mData[44]);
                        return 1;
                    }

                    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        mTRANSFER.T_START_PSHOP_SEND(2, &mPShopInfo);
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                    }
                }
            }
            return 1;
        }
        if (mIsClick[4])
        {
            mIsClick[4] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3492], mX + 119, mY + 411, uX, uY))
            {
                if (mMoney <= 0 && mMoney2 <= 0)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2052), mFONTCOLOR.mData[44]);
                    return 1;
                }
                mTRANSFER.T_SET_DEPUTY_PSHOP_MONEY_SEND(mMoney, mMoney2);
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
            }
            return 1;
        }
        if (mIsClick[5])
        {
            mIsClick[5] = 0;
            mMenuSort = 2;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3517], mX, mY - 17, uX, uY))
            {
                PSHOPUI::DeputyPShopSubReset();
            }
            return 1;
        }
        if (mIsClick[6])
        {
            mIsClick[6] = 0;
            mMenuSort = 1;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3520], mX + 126, mY - 17, uX, uY))
            {
                PSHOPUI::DeputyPShopSubReset();
            }
            return 1;
        }
        return 1;

    case 6:
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                PSHOPUI::Set();
            }
            return 1;
        }
        if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2006], mX + 9, mY + 411, uX, uY))
            {
                if (--mPage < 0)
                {
                    mPage = 0;
                }
            }
            return 1;
        }
        if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2007], mX + 97, mY + 411, uX, uY))
            {
                if (++mPage > 4)
                {
                    mPage = 4;
                }
            }
            return 1;
        }
        if (mIsClick[3])
        {
            mIsClick[3] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[673], mX + 175, mY + 411, uX, uY))
            {
                mTRANSFER.T_END_PSHOP_SEND(2);
            }
        }
        return 1;

    case 7:
        if (mINVENUI.LBUTTONUP(uX, uY))
        {
            return 1;
        }
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                mINVENUI.Off();
                PSHOPUI::Set();
            }
            return 1;
        }
        if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2006], mX + 9, mY + 411, uX, uY))
            {
                if (--mPage < 0)
                {
                    mPage = 0;
                }
            }
            return 1;
        }
        if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2007], mX + 97, mY + 411, uX, uY))
            {
                if (++mPage > 4)
                {
                    mPage = 4;
                }
            }
            return 1;
        }
        return 1;

    default:
        return 1;
    }
}

BOOL PSHOPUI::RBUTTONDOWN(int uX, int uY)
{
    return mActive != 0;
}
BOOL PSHOPUI::RBUTTONUP(int uX, int uY)
{
    return mActive != 0;
}
BOOL PSHOPUI::KEYBOARD()
{
    int result;
    char* v2;
    int v3;
    int j;
    int i;
    char v6;

    if (mActive)
    {
        if (mPShopSort == 4 && !mEDITBOX.mDataIndex)
        {
            for (i = 0; i < mGXD.mKeyboardBufferedDataNum && (mGXD.mKeyboardBufferedData[i].dwData & 0x80) == 0; ++i)
                ;
            if (i == mGXD.mKeyboardBufferedDataNum)
            {
                result = 1;
            }
            else
            {
                switch (mGXD.mKeyboardBufferedData[i].dwOfs)
                {
                case 2u:
                case 79u:
                    v6 = 49;
                    goto LABEL_43;
                case 3u:
                case 80u:
                    v6 = 50;
                    goto LABEL_43;
                case 4u:
                case 81u:
                    v6 = 51;
                    goto LABEL_43;
                case 5u:
                case 75u:
                    v6 = 52;
                    goto LABEL_43;
                case 6u:
                case 76u:
                    v6 = 53;
                    goto LABEL_43;
                case 7u:
                case 77u:
                    v6 = 54;
                    goto LABEL_43;
                case 8u:
                case 71u:
                    v6 = 55;
                    goto LABEL_43;
                case 9u:
                case 72u:
                    v6 = 56;
                    goto LABEL_43;
                case 10u:
                case 73u:
                    v6 = 57;
                    goto LABEL_43;
                case 11u:
                case 82u:
                    if (mPriceIdx)
                    {
                        v6 = 48;
                    LABEL_43:
                        if (mPriceIdx != 9)
                        {
                            mPrice[mPriceIdx++] = v6;
                            mPrice[mPriceIdx] = 0;
                        }
                        result = 1;
                    }
                    else
                    {
                        result = 1;
                    }
                    break;
                case 14u:
                    if (mPriceIdx)
                        mPrice[--mPriceIdx] = 0;
                    return 1;
                default:
                    return 1;
                }
            }
        }
        else
        {
            result = 1;
        }
    }
    else if (mMAIN.mMainMode == 6 && mMAIN.mSubMode == 4)
    {
        for (j = 0; j < mGXD.mKeyboardBufferedDataNum && (mGXD.mKeyboardBufferedData[j].dwData & 0x80) == 0; ++j)
            ;
        if (j == mGXD.mKeyboardBufferedDataNum)
        {
            result = 0;
        }
        else if (mGXD.mKeyboardBufferedData[j].dwOfs == 20)
        {
            if (mMAIN.mWorldIndex == 40 && mMYINFO.mAvatarInfo.aLevel1 < 113)
            {
                v3 = mFONTCOLOR.mData[44];
                v2 = mMESSAGE.Return(1921);
                mBASICUI.Insert1(v2, v3);
                result = 1;
            }
            else
            {
                PSHOPUI::Off(1, mMYINFO.mAvatarInfo.aName, -1);
                result = 1;
            }
        }
        else
        {
            result = 0;
        }
    }
    else
    {
        result = 0;
    }
    return result;
}

void PSHOPUI::Draw(int uX, int uY)
{
    int sX, sY, tstrlen, i, j, k;
    char* tstr;
    int tDataIndex;
    char String[1000];
    char tBuffer[200];
    int tDisplaySort;
    ITEM_INFO* a2;
    int i2d, isort;
    int tValue;

    if (mActive)
    {
        if (mDisplaySort)
        {
            if (mPShopSort == 5)
                tDataIndex = 3490;
            else
                tDataIndex = 3505;
        }
        else
        {
            tDataIndex = 669;
        }
        mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
        sX = mX + 23;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[669]);
        mY = mY;
        mPOINTER.Set(0);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX, mY);
        switch (mPShopSort)
        {
        case 1:
            GetWindowTextA(mEDITBOX.mDATA[13], mPShopInfo.mName, 25);
            mUTIL.DrawFont2D(mPShopInfo.mName, mX + 45, mY + 12, 1);
            if (mEDITBOX.mDataIndex == 14)
            {
                sY = mY + 12;
                sX = mX;
                tstrlen = mUTIL.GetStringLength(mPShopInfo.mName);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + tstrlen + 46, sY);
            }
            break;
        case 2:
        case 3:
        case 6:
        case 7:
            mUTIL.DrawFont2D(mPShopInfo.mName, mX + 45, mY + 12, 1);
            break;
        case 4:
            GetWindowTextA(mEDITBOX.mDATA[13], mPShopInfo.mName, 25);
            mUTIL.DrawFont2D(mPShopInfo.mName, mX + 45, mY + 12, 1);
            if (mEDITBOX.mDataIndex == 14)
            {
                sY = mY + 12;
                sX = mX;
                tstrlen = mUTIL.GetStringLength(mPShopInfo.mName);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + tstrlen + 46, sY);
            }
            break;
        case 5:
            GetWindowTextA(mEDITBOX.mDATA[13], mPShopInfo.mName, 25);
            mUTIL.DrawFont2D(mPShopInfo.mName, mX + 45, mY + 12, 1);
            if (mEDITBOX.mDataIndex == 14)
            {
                sY = mY + 12;
                sX = mX;
                tstrlen = mUTIL.GetStringLength(mPShopInfo.mName);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + tstrlen + 46, sY);
            }
            mUTIL.ChangeMoneyToString(mMoney2, String, &tDisplaySort);
            mUTIL.DrawFont2D(String, mX + 93, mY + 439, tDisplaySort);
            mUTIL.ChangeMoneyToString(mMoney, String, &tDisplaySort);
            mUTIL.DrawFont2D(String, mX + 149, mY + 439, tDisplaySort);
            break;
        default:
            break;
        }
        for (i = 0; i < 5; ++i)
        {
            if (mPShopInfo.mItemInfo[mPage][i][0] >= 1)
            {
                a2 = mITEM.Search(mPShopInfo.mItemInfo[mPage][i][0]);
                if (a2)
                {
                    i2d = a2->iDataNumber2D - 1;
                    isort = a2->iSort;
                    if (isort == 2 || isort == 7 || isort == 11)
                        GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2d], mX + 41, mY + 69 * i + 67);
                    else
                        GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2d], mX + 28, mY + 69 * i + 54);
                    switch (a2->iSort)
                    {
                    case 2:
                        if (mPShopInfo.mItemInfo[mPage][i][1] > 0)
                        {
                            sprintf(String, "%d", mPShopInfo.mItemInfo[mPage][i][1]);
                            mUTIL.DrawFont2D(String, mX + 55, mY + 69 * i + 81, 1);
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
                            GIMAGE2D::Display(&mGDATA.mUI_MAIN[304], mX + 28, mY + 69 * i + 54);
                        break;
                    default:
                        break;
                    }
                    switch (a2->iEquipInfo[0])
                    {
                    case 1:
                        tstr = mMESSAGE.Return(585);
                        strcpy(String, tstr);
                        break;
                    case 2:
                        tstr = mMESSAGE.Return(586);
                        strcpy(String, tstr);
                        break;
                    case 3:
                        tstr = mMESSAGE.Return(587);
                        strcpy(String, tstr);
                        break;
                    case 4:
                        tstr = mMESSAGE.Return(588);
                        strcpy(String, tstr);
                        break;
                    default:
                        break;
                    }
                    sY = mY + 69 * i + 57;
                    sX = mX + 144;
                    tstrlen = mUTIL.GetStringLength(String);
                    mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 1);
                    strcpy(String, a2->iName);
                    switch (a2->iType)
                    {
                    case 1:
                        sY = mY + 69 * i + 73;
                        sX = mX + 144;
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 1);
                        break;
                    case 2:
                        sY = mY + 69 * i + 73;
                        sX = mX + 144;
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 24);
                        break;
                    case 3:
                        sY = mY + 69 * i + 73;
                        sX = mX + 144;
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 3);
                        break;
                    case 4:
                        sY = mY + 69 * i + 73;
                        sX = mX + 144;
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 25);
                        break;
                    case 5:
                    case 6:
                        sY = mY + 69 * i + 73;
                        sX = mX + 144;
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 2);
                        break;
                    default:
                        break;
                    }
                    mUTIL.ChangeMoneyToString(mPShopInfo.mItemInfo[mPage][i][4], tBuffer, &tDisplaySort);
                    tstr = mMESSAGE.Return(589);
                    sprintf(String, "%s%s", tBuffer, tstr);
                    sY = mY + 69 * i + 89;
                    sX = mX + 144;
                    tstrlen = mUTIL.GetStringLength(String);
                    mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, tDisplaySort);
                }
            }
        }
        if (mDisplaySort)
        {
            sprintf(String, "%d / %d", mPage + 1, 5);
            sY = mY + 414;
            sX = mX + 60;
        }
        else
        {
            sprintf(String, "%d / %d", mPage + 1, 5);
            sY = mY + 414;
            sX = mX + 79;
        }
        tstrlen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 1);
        switch (mPShopSort)
        {
        case 1:
            if (mIsClick[0])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
            if (mIsClick[1])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2006], mX + 21, mY + 411);
            if (mIsClick[2])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2007], mX + 119, mY + 411);
            if (mIsClick[3])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[672], mX + 167, mY + 411);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[670], mX + 167, mY + 411, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[671], mX + 167, mY + 411);
            }
            else
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[670], mX + 167, mY + 411);
            }
            break;
        case 2:
            if (mIsClick[0])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
            if (mIsClick[1])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2006], mX + 21, mY + 411);
            if (mIsClick[2])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2007], mX + 119, mY + 411);
            if (mIsClick[3])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[675], mX + 167, mY + 411);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[673], mX + 167, mY + 411, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[674], mX + 167, mY + 411);
            }
            else
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[673], mX + 167, mY + 411);
            }
            break;
        case 3:
            if (mIsClick[0])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
            if (mIsClick[1])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2006], mX + 21, mY + 411);
            if (mIsClick[2])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2007], mX + 119, mY + 411);
            break;
        case 4:
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[305], mX + 92, mY + 69 * mIndex + 25);
            if (mPriceIdx > 0)
            {
                tValue = atoi(mPrice);
                mUTIL.ChangeMoneyToString(tValue, String, &tDisplaySort);
                sY = mY + 69 * mIndex + 35;
                sX = mX + 175;
                tstrlen = mUTIL.GetStringLength(String);
                mUTIL.DrawFont2D(String, sX - tstrlen, sY, tDisplaySort);
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], mX + 176, mY + 69 * mIndex + 35);
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[28], mX + 107, mY + 69 * mIndex + 65, uX, uY))
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[28], mX + 107, mY + 69 * mIndex + 65);
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[306], mX + 149, mY + 69 * mIndex + 65, uX, uY))
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[306], mX + 149, mY + 69 * mIndex + 65);
            break;
        case 5:
            if (mIsClick[0])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
            if (mIsClick[1])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2006], mX + 9, mY + 411);
            if (mIsClick[2])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2007], mX + 97, mY + 411);
            if (mIsClick[3])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[672], mX + 175, mY + 411);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[670], mX + 175, mY + 411, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[671], mX + 175, mY + 411);
            }
            else
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[670], mX + 175, mY + 411);
            }
            if (mIsClick[4])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3493], mX + 119, mY + 411);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3491], mX + 119, mY + 411, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3492], mX + 119, mY + 411);
            }
            else
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3491], mX + 119, mY + 411);
            }
            if (mMenuSort != 2 || mIsClick[5])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3519], mX, mY - 17);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3517], mX, mY - 17, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3518], mX, mY - 17);
            }
            else
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3517], mX, mY - 17);
            }
            if (mMenuSort != 1 || mIsClick[6])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3522], mX + 126, mY - 17);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3520], mX + 126, mY - 17, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3521], mX + 126, mY - 17);
            }
            else
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3520], mX + 126, mY - 17);
            }
            break;
        case 6:
            if (mIsClick[0])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
            if (mIsClick[1])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2006], mX + 9, mY + 411);
            if (mIsClick[2])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2007], mX + 97, mY + 411);
            if (mIsClick[3])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[675], mX + 175, mY + 411);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[673], mX + 175, mY + 411, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[674], mX + 175, mY + 411);
            }
            else
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[673], mX + 175, mY + 411);
            }
            break;
        case 7:
            if (mIsClick[0])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
            if (mIsClick[1])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2006], mX + 9, mY + 411);
            if (mIsClick[2])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2007], mX + 97, mY + 411);
            break;
        default:
            return;
        }
    }
}
int PSHOPUI::DrawForRollOver(int uX, int uY)
{
    int tIndex;

    if (!mActive)
    {
        return 0;
    }
    switch (mPShopSort)
    {
    case 1:
    case 5:
        if (mINVENUI.DrawForRollOver(uX, uY))
        {
            return 1;
        }
        tIndex = PSHOPUI::GetPShopIndex1(uX, uY, -1);
        if (tIndex != -1)
        {
            mINVENUI.DrawItemInfo(uX, uY, mPShopInfo.mItemInfo[mPage][tIndex][0], mPShopInfo.mItemInfo[mPage][tIndex][1], mPShopInfo.mItemInfo[mPage][tIndex][2], 1, mPShopInfo.mItemSocket[mPage][tIndex][0], mPShopInfo.mItemSocket[mPage][tIndex][1], mPShopInfo.mItemSocket[mPage][tIndex][2], mPShopInfo.mItemSocket[mPage][tIndex][3], mPShopInfo.mItemSocket[mPage][tIndex][4], 0);
        }
        return 1;

    case 2:
    case 6:
        tIndex = PSHOPUI::GetPShopIndex1(uX, uY, -1);
        if (tIndex != -1)
        {
            mINVENUI.DrawItemInfo(uX, uY, mPShopInfo.mItemInfo[mPage][tIndex][0], mPShopInfo.mItemInfo[mPage][tIndex][1], mPShopInfo.mItemInfo[mPage][tIndex][2], 1, mPShopInfo.mItemSocket[mPage][tIndex][0], mPShopInfo.mItemSocket[mPage][tIndex][1], mPShopInfo.mItemSocket[mPage][tIndex][2], mPShopInfo.mItemSocket[mPage][tIndex][3], mPShopInfo.mItemSocket[mPage][tIndex][4], 0);
        }
        return 1;

    case 3:
    case 7:
        if (mINVENUI.DrawForRollOver(uX, uY))
        {
            return 1;
        }
        tIndex = PSHOPUI::GetPShopIndex1(uX, uY, -1);
        if (tIndex != -1)
        {
            mINVENUI.DrawItemInfo(uX, uY, mPShopInfo.mItemInfo[mPage][tIndex][0], mPShopInfo.mItemInfo[mPage][tIndex][1], mPShopInfo.mItemInfo[mPage][tIndex][2], 1, mPShopInfo.mItemSocket[mPage][tIndex][0], mPShopInfo.mItemSocket[mPage][tIndex][1], mPShopInfo.mItemSocket[mPage][tIndex][2], mPShopInfo.mItemSocket[mPage][tIndex][3], mPShopInfo.mItemSocket[mPage][tIndex][4], 0);
        }
        return 1;

    case 4:
        return 1;

    default:
        return 1;
    }
}
void PSHOPUI::InitForInputPrice(int tIndex)
{
    mEDITBOX.Set(0);
    mPShopSort = 4;
    mIndex = tIndex;
    mPriceIdx = 0;
    mPrice[mPriceIdx] = 0;
}
int PSHOPUI::GetPShopIndex1(int uX, int uY, int tInvalidIndex)
{
    int sX;
    int i;

    if (!mActive)
    {
        return -1;
    }
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[669]);
    mY = mY;
    for (i = 0; i < 5; i++)
    {
        if (i == tInvalidIndex || uX < mX + 28 || uX > mX + 78 || uY < mY + 69 * i + 54 || uY > mY + 69 * i + 104)
        {
            continue;
        }
        break;
    }
    if (i == 5)
    {
        return -1;
    }
    if (mPShopInfo.mItemInfo[mPage][i][0] <= 0)
    {
        return -1;
    }
    return i;
}
int PSHOPUI::GetPShopIndex2(int uX, int uY, int tInvalidIndex)
{
    int sX;
    int i;

    if (!mActive)
        return -1;
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[669]);
    mY = mY;
    for (i = 0; i < 5; i++)
    {
        if (i == tInvalidIndex || uX < mX + 28 || uX > mX + 78 || uY < mY + 69 * i + 54 || uY > mY + 69 * i + 104)
        {
            continue;
        }
        break;
    }
    if (i == 5)
    {
        return -1;
    }
    if (mPShopInfo.mItemInfo[mPage][i][0] >= 1)
    {
        return -1;
    }
    return i;
}
int PSHOPUI::PutPShop1(int uX, int uY, int tItemIndex, int tQuantity, int tInvalidIndex)
{
    if (!mActive)
    {
        return -1;
    }
    if (mPShopSort != 1 && mPShopSort != 5)
    {
        return -1;
    }
    if (PSHOPUI::GetPShopIndex1(uX, uY, tInvalidIndex) == -1)
    {
        return PSHOPUI::GetPShopIndex2(uX, uY, tInvalidIndex);
    }
    return -1;
}
BOOL PSHOPUI::CheckPossiblePShopRegion(int tTribe, int tZoneNumber, float tCoord[3])
{
    float fCoord[3];

    switch (tZoneNumber)
    {
    case 1:
        if (tTribe != 0)
        {
            return FALSE;
        }
        fCoord[0] = 4.0f;
        fCoord[1] = 0.0f;
        fCoord[2] = -2.0f;
        if (mUTIL.GetLengthXYZ(tCoord, fCoord) > 1000.0f)
        {
            return FALSE;
        }
        return TRUE;

    case 6:
        if (tTribe != 1)
        {
            return FALSE;
        }
        fCoord[0] = -189.0f;
        fCoord[1] = 0.0f;
        fCoord[2] = 1150.0f;
        if (mUTIL.GetLengthXYZ(tCoord, fCoord) > 1000.0f)
        {
            return FALSE;
        }
        return TRUE;

    case 11:
        if (tTribe != 2)
        {
            return FALSE;
        }
        fCoord[0] = 449.0f;
        fCoord[1] = 1.0f;
        fCoord[2] = 439.0f;
        if (mUTIL.GetLengthXYZ(tCoord, fCoord) > 1000.0f)
        {
            return FALSE;
        }
        return TRUE;

    case 37:
        fCoord[0] = 1.0f;
        fCoord[1] = 0.0f;
        fCoord[2] = -1478.0f;
        if (mUTIL.GetLengthXYZ(tCoord, fCoord) > 1000.0f)
        {
            return FALSE;
        }
        return TRUE;

    case 140:
        if (tTribe != 3)
        {
            return FALSE;
        }
        fCoord[0] = 452.0f;
        fCoord[1] = 0.0f;
        fCoord[2] = 487.0f;
        if (mUTIL.GetLengthXYZ(tCoord, fCoord) > 1000.0f)
        {
            return FALSE;
        }
        return TRUE;

    default:
        return FALSE;
    }
}
BOOL PSHOPUI::CheckPossibleDeputyPShopRegion(int tTribe, int tZoneNumber, float tCoord[3])
{
    float fCoord[3];

    switch (tZoneNumber)
    {
    case 1:
        if (tTribe != 0)
        {
            return FALSE;
        }
        fCoord[0] = 4.0f;
        fCoord[1] = 0.0f;
        fCoord[2] = -2.0f;
        if (mUTIL.GetLengthXYZ(tCoord, fCoord) > 1000.0f)
        {
            return FALSE;
        }
        return TRUE;

    case 6:
        if (tTribe != 1)
        {
            return FALSE;
        }
        fCoord[0] = -189.0f;
        fCoord[1] = 0.0f;
        fCoord[2] = 1150.0f;
        if (mUTIL.GetLengthXYZ(tCoord, fCoord) > 1000.0f)
        {
            return FALSE;
        }
        return TRUE;

    case 11:
        if (tTribe != 2)
        {
            return FALSE;
        }
        fCoord[0] = 449.0f;
        fCoord[1] = 1.0f;
        fCoord[2] = 439.0f;
        if (mUTIL.GetLengthXYZ(tCoord, fCoord) > 1000.0f)
        {
            return FALSE;
        }
        return TRUE;

    case 37:
        fCoord[0] = 1.0f;
        fCoord[1] = 0.0f;
        fCoord[2] = -1478.0f;
        if (mUTIL.GetLengthXYZ(tCoord, fCoord) > 1000.0f)
        {
            return FALSE;
        }
        return TRUE;

    case 140:
        if (tTribe != 3)
        {
            return FALSE;
        }
        fCoord[0] = 452.0f;
        fCoord[1] = 0.0f;
        fCoord[2] = 487.0f;
        if (mUTIL.GetLengthXYZ(tCoord, fCoord) > 1000.0f)
        {
            return FALSE;
        }
        return TRUE;

    default:
        return FALSE;
    }
}
void PSHOPUI::DeputyPShopSubReset()
{
    int i;
    int j;

    for (i = 0; i < 5; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            if (mPShopInfo.mItemInfo[i][j][0] > 0 && mPShopInfo.mItemInfo[i][j][6] > -1)
            {
                mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][0] = mPShopInfo.mItemInfo[i][j][0];
                mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][1] = mPShopInfo.mItemInfo[i][j][7];
                mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][2] = mPShopInfo.mItemInfo[i][j][8];
                mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][3] = mPShopInfo.mItemInfo[i][j][1];
                mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][4] = mPShopInfo.mItemInfo[i][j][2];
                mMYINFO.mAvatarInfo.aInventory[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][5] = mPShopInfo.mItemInfo[i][j][3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][0] = mPShopInfo.mItemSocket[i][j][0];
                mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][1] = mPShopInfo.mItemSocket[i][j][1];
                mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][2] = mPShopInfo.mItemSocket[i][j][2];
                mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][3] = mPShopInfo.mItemSocket[i][j][3];
                mMYINFO.mAvatarInfo.aInventorySocket[mPShopInfo.mItemInfo[i][j][5]][mPShopInfo.mItemInfo[i][j][6]][4] = mPShopInfo.mItemSocket[i][j][4];
                mPShopInfo.mItemInfo[i][j][0] = 0;
                mPShopInfo.mItemInfo[i][j][1] = 0;
                mPShopInfo.mItemInfo[i][j][2] = 0;
                mPShopInfo.mItemInfo[i][j][3] = 0;
                mPShopInfo.mItemInfo[i][j][4] = 0;
                mPShopInfo.mItemInfo[i][j][5] = -1;
                mPShopInfo.mItemInfo[i][j][6] = -1;
                mPShopInfo.mItemInfo[i][j][7] = -1;
                mPShopInfo.mItemInfo[i][j][8] = -1;
            }
        }
    }
}





TRIBENOTICEUI mTRIBENOTICEUI;

BOOL TRIBENOTICEUI::Init()
{
    mActive = 0;
    return 1;
}

void TRIBENOTICEUI::Set()
{
    int i;

    if (mMAIN.mWorldIndex == 40)
    {
        mBASICUI.Insert1(mMESSAGE.Return(110), mFONTCOLOR.mData[44]);
    }
    else if (mUTIL.CheckInfiniteBattleZone() || mMYINFO.mPresentZoneNumber == 291)
    {
        mBASICUI.Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
    }
    else if (mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe))
    {
        mActive = 1;
        for (i = 0; i < 1; ++i)
        {
            mIsClick[i] = 0;
        }
        mEDITBOX.Set(16);
        SetWindowTextA(mEDITBOX.mDATA[15], "");
    }
    else
    {
        mBASICUI.Insert1(mMESSAGE.Return(842), mFONTCOLOR.mData[44]);
    }
}
void TRIBENOTICEUI::InitForEnterZone()
{
    mActive = 0;
}
void TRIBENOTICEUI::Off()
{
    if (mActive)
    {
        mActive = 0;
        if (mEDITBOX.mDataIndex == 16)
        {
            mEDITBOX.Set(0);
        }
    }
}
BOOL TRIBENOTICEUI::LBUTTONDOWN(int uX, int uY)
{
    int sX;

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1602]) / 2;
    mY = mMYINFO.mScreenYSize - 160;
    if (uX <= mEDITBOX.mEditBoxInfo[15][0] || uX >= mEDITBOX.mEditBoxInfo[15][2] || uY <= mEDITBOX.mEditBoxInfo[15][1] || uY >= mEDITBOX.mEditBoxInfo[15][3])
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1604], mX + 334, mY + 72, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return 1;
        }

        return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1602], mX, mY, uX, uY);
    }
    else
    {
        mEDITBOX.Set(16);
        return 1;
    }
}
int TRIBENOTICEUI::LBUTTONUP(int uX, int uY)
{
    int sX;

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1602]) / 2;
    mY = mMYINFO.mScreenYSize - 160;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1604], mX + 334, mY + 72, uX, uY))
        {
            TRIBENOTICEUI::Off();
        }
        return 1;
    }

    return 0;
}
int TRIBENOTICEUI::RBUTTONDOWN(int uX, int uY)
{
    return 0;
}
int TRIBENOTICEUI::RBUTTONUP(int uX, int uY)
{
    return 0;
}
int TRIBENOTICEUI::KEYBOARD()
{
    return 0;
}
void TRIBENOTICEUI::Draw(int uX, int uY)
{
    int sX;
    int sY;
    int tstrlen;
    char mBuffer[1000];

    if (mActive)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1602]) / 2;
        mY = mMYINFO.mScreenYSize - 160;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1602], mX, mY, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[1602], mX, mY);
        GetWindowTextA(mEDITBOX.mDATA[15], mBuffer, 1000);
        mUTIL.DrawFont2D(mBuffer, mX + 13, mY + 42, 1);
        if (mEDITBOX.mDataIndex == 16)
        {
            sY = mY + 42;
            sX = mX;
            tstrlen = mUTIL.GetStringLength(mBuffer);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + tstrlen + 14, sY);
        }
        if (mIsClick[0])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1604], mX + 334, mY + 72);
        }
    }
}
int TRIBENOTICEUI::DrawForRollOver(int uX, int uY)
{
    return 0;
}
void TRIBENOTICEUI::ProcessForTribeNotice()
{
    char* v0;
    int v1;
    char String[1000];

    mEDITBOX.Set(0);
    if (GetWindowTextA(mEDITBOX.mDATA[15], String, 1000))
    {
        SetWindowTextA(mEDITBOX.mDATA[15], "");
        mTRANSFER.T_TRIBE_NOTICE_SEND(String);
    }
}






AUTOUI mAUTOUI;

BOOL AUTOUI::Init()
{
    mActive = 0;
    return 1;
}

void AUTOUI::Set()
{
    int i;

    mActive = 1;
    for (i = 0; i < 5; ++i)
        mIsClick[i] = 0;
}
void AUTOUI::InitForEnterZone()
{
    mActive = 0;
}
void AUTOUI::Off()
{
    if (mActive)
        mActive = 0;
}
BOOL AUTOUI::LBUTTONDOWN(int uX, int uY)
{
    int sX;
    int sY;

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2709]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2709]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 64, mY + 71, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 273, mY + 71, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 64, mY + 98, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[2] = 1;
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 273, mY + 98, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[3] = 1;
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 259, mY + 134, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[4] = 1;
        return 1;
    }

    return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2709], mX, mY, uX, uY);
}
int AUTOUI::LBUTTONUP(int uX, int uY)
{
    int sX;
    int sY;

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2709]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2709]) / 2;

    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 64, mY + 71, uX, uY))
        {
            if (!mMYINFO.mMoveZoneState)
            {
                if (mMYINFO.mAvatarInfo.aAutoLifeRatio >= 1)
                {
                    mTRANSFER.T_CHANGE_AUTO_INFO(--mMYINFO.mAvatarInfo.aAutoLifeRatio, mMYINFO.mAvatarInfo.aAutoChiRatio);
                }
            }
        }
        return 1;
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 273, mY + 71, uX, uY))
        {
            if (!mMYINFO.mMoveZoneState)
            {
                if (mMYINFO.mAvatarInfo.aAutoLifeRatio <= 4)
                {
                    mTRANSFER.T_CHANGE_AUTO_INFO(++mMYINFO.mAvatarInfo.aAutoLifeRatio, mMYINFO.mAvatarInfo.aAutoChiRatio);
                }
            }
        }
        return 1;
    }
    else if (mIsClick[2])
    {
        mIsClick[2] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[474], mX + 64, mY + 98, uX, uY))
        {
            if (!mMYINFO.mMoveZoneState)
            {
                if (mMYINFO.mAvatarInfo.aAutoChiRatio >= 1)
                {
                    mTRANSFER.T_CHANGE_AUTO_INFO(mMYINFO.mAvatarInfo.aAutoLifeRatio, --mMYINFO.mAvatarInfo.aAutoChiRatio);
                }
            }
        }
        return 1;
    }
    else if (mIsClick[3])
    {
        mIsClick[3] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[475], mX + 273, mY + 98, uX, uY))
        {
            if (!mMYINFO.mMoveZoneState)
            {
                if (mMYINFO.mAvatarInfo.aAutoChiRatio <= 4)
                {
                    mTRANSFER.T_CHANGE_AUTO_INFO(mMYINFO.mAvatarInfo.aAutoLifeRatio, ++mMYINFO.mAvatarInfo.aAutoChiRatio);
                }
            }
        }
        return 1;
    }
    else if (mIsClick[4])
    {
        mIsClick[4] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 259, mY + 134, uX, uY))
        {
            AUTOUI::Off();
        }
        return 1;
    }

    return 0;
}
int AUTOUI::RBUTTONDOWN(int uX, int uY)
{
    return 0;
}
int AUTOUI::RBUTTONUP(int uX, int uY)
{
    return 0;
}
int AUTOUI::KEYBOARD()
{
    return 0;
}

void AUTOUI::Draw(int uX, int uY)
{
    int v3;
    int v4;

    if (mActive)
    {
        v3 = mMYINFO.mScreenXSize / 2;
        mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2709]) / 2;
        v4 = mMYINFO.mScreenYSize / 2;
        mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2709]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2709], mX, mY, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2709], mX, mY);
        switch (mMYINFO.mAvatarInfo.aAutoLifeRatio)
        {
        case 0:
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2713], mX + 88, mY + 75);
            break;
        case 1:
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2714], mX + 88, mY + 75);
            break;
        case 2:
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2715], mX + 88, mY + 75);
            break;
        case 3:
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2716], mX + 88, mY + 75);
            break;
        case 4:
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2717], mX + 88, mY + 75);
            break;
        case 5:
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2718], mX + 88, mY + 75);
            break;
        default:
            break;
        }
        switch (mMYINFO.mAvatarInfo.aAutoChiRatio)
        {
        case 0:
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2713], mX + 88, mY + 102);
            break;
        case 1:
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2719], mX + 88, mY + 102);
            break;
        case 2:
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2720], mX + 88, mY + 102);
            break;
        case 3:
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2721], mX + 88, mY + 102);
            break;
        case 4:
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2722], mX + 88, mY + 102);
            break;
        case 5:
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2723], mX + 88, mY + 102);
            break;
        default:
            break;
        }
        if (mIsClick[0])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[474], mX + 64, mY + 71);
        if (mIsClick[1])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[475], mX + 273, mY + 71);
        if (mIsClick[2])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[474], mX + 64, mY + 98);
        if (mIsClick[3])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[475], mX + 273, mY + 98);
        if (mIsClick[4])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2601], mX + 259, mY + 134);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2600], mX + 259, mY + 134, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2600], mX + 259, mY + 134);
        }
    }
}
int AUTOUI::DrawForRollOver(int uX, int uY)
{
    return 0;
}
void AUTOUI::ProcessForAuto()
{
    float v0;
    float v1;
    ITEM_INFO* v2;
    ITEM_INFO* v3;
    ITEM_INFO* v4;
    ITEM_INFO* v5;
    int i;
    int j;

    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue < 1
        || mMYINFO.mMoveZoneState
        || !mMYINFO.mEatDrugStateForAuto
        || mMYINFO.mNetworkLock
        || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 11
        || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 12
        || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 38)
    {
        return;
    }

    if (mMYINFO.mAvatarInfo.aAutoLifeRatio >= 1 || mMYINFO.mAvatarInfo.aAutoLifeRatio <= 5)
    {
        if (mMYINFO.mAvatarInfo.aAutoLifeRatio == 5)
        {
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue < (int)((float)mFACTOR.GetMaxLife() * 0.99f))
            {
                for (i = 0; i < 3; ++i)
                {
                    for (j = 0; j < 14; ++j)
                    {
                        if (mMYINFO.mAvatarInfo.aHotKey[i][j][2] == 3)
                        {
                            v2 = mITEM.Search(mMYINFO.mAvatarInfo.aHotKey[i][j][0]);
                            if (v2)
                            {
                                if (v2->iPotionType[0] == 1 || v2->iPotionType[0] == 2 || v2->iPotionType[0] == 5)
                                {
                                    mTRANSFER.T_USE_HOTKEY_ITEM_SEND(i, j);
                                    mMYINFO.mNetworkLock = 1;
                                    mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue < mMYINFO.mAvatarInfo.aAutoLifeRatio * mFACTOR.GetMaxLife() / 5)
            {
                for (i = 0; i < 3; ++i)
                {
                    for (j = 0; j < 14; ++j)
                    {
                        if (mMYINFO.mAvatarInfo.aHotKey[i][j][2] == 3)
                        {
                            v2 = mITEM.Search(mMYINFO.mAvatarInfo.aHotKey[i][j][0]);
                            if (v2)
                            {
                                if (v2->iPotionType[0] == 1 || v2->iPotionType[0] == 2 || v2->iPotionType[0] == 5)
                                {
                                    mTRANSFER.T_USE_HOTKEY_ITEM_SEND(i, j);
                                    mMYINFO.mNetworkLock = 1;
                                    mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (mMYINFO.mAvatarInfo.aAutoChiRatio >= 1 && mMYINFO.mAvatarInfo.aAutoChiRatio <= 5)
    {
        if (mMYINFO.mAvatarInfo.aAutoChiRatio == 5)
        {
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue < (int)((float)mFACTOR.GetMaxMana() * 0.99f))
            {
                for (i = 0; i < 3; ++i)
                {
                    for (j = 0; j < 14; ++j)
                    {
                        if (mMYINFO.mAvatarInfo.aHotKey[i][j][2] == 3)
                        {
                            v5 = mITEM.Search(mMYINFO.mAvatarInfo.aHotKey[i][j][0]);
                            if (v5)
                            {
                                if (v5->iPotionType[0] == 3 || v5->iPotionType[0] == 4 || v5->iPotionType[0] == 5)
                                {
                                    mTRANSFER.T_USE_HOTKEY_ITEM_SEND(i, j);
                                    mMYINFO.mNetworkLock = 1;
                                    mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue < mMYINFO.mAvatarInfo.aAutoChiRatio * mFACTOR.GetMaxMana() / 5)
            {
                for (i = 0; i < 3; ++i)
                {
                    for (j = 0; j < 14; ++j)
                    {
                        if (mMYINFO.mAvatarInfo.aHotKey[i][j][2] == 3)
                        {
                            v5 = mITEM.Search(mMYINFO.mAvatarInfo.aHotKey[i][j][0]);
                            if (v5)
                            {
                                if (v5->iPotionType[0] == 3 || v5->iPotionType[0] == 4 || v5->iPotionType[0] == 5)
                                {
                                    mTRANSFER.T_USE_HOTKEY_ITEM_SEND(i, j);
                                    mMYINFO.mNetworkLock = 1;
                                    mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}




ANIMALUI mANIMALUI;

BOOL ANIMALUI::Init()
{
    mActive = 0;
    mAnimalAbilityWindow = 0;
    return TRUE;
}

void ANIMALUI::InitForEnterZone()
{
    mActive = 0;
    mAnimalAbilityWindow = 1;
}
void ANIMALUI::Set()
{
    char* v1;
    int v2;
    int i;

    if (mUTIL.CheckInfiniteBattleZone())
    {
        v2 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(1352);
        mBASICUI.Insert1(v1, v2);
    }
    else
    {
        mActive = 1;
        for (i = 0; i < 25; ++i)
            mIsClick[i] = 0;
        mAnimalAbilityWindow = 1;
    }
}
void ANIMALUI::Off()
{
    if (mActive)
        mActive = 0;
}
int ANIMALUI::LBUTTONDOWN(int uX, int uY)
{
    int sX;
    int sY;
    int i;

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2735]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2735]) / 2;
    for (i = 0; i < 10; ++i)
    {
        if (mMYINFO.mAvatarInfo.aAnimal[i] >= 1 && uX > mX + 55 * (i % 5) + 19 && uX < mX + 55 * (i % 5) + 74 && uY > mY + 55 * (i / 5) + 41 && uY < mY + 55 * (i / 5) + 96)
        {
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 10 || mMYINFO.mAvatarInfo.aAnimalIndex > 19)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                if (!mMYINFO.mMoveZoneState)
                {
                    mTRANSFER.T_ANIMAL_STATE_SEND(1, i);
                }
            }
            else
            {
                mBASICUI.Insert1(mMESSAGE.Return(920), mFONTCOLOR.mData[44]);
            }
            return 1;
        }
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2736], mX + 16, mY + 165, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2739], mX + 87, mY + 165, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2742], mX + 158, mY + 165, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[2] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2789], mX + 229, mY + 165, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[3] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 259, mY + 10, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[4] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3626], mX + 16, mY + 189, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[5] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3628], mX + 158, mY + 189, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[6] = 1;
        return 1;
    }
    if (mMYINFO.mAvatarInfo.aAbsorbState)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3596], mX + 16, mY + 8, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[24] = 1;
            return 1;
        }
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3593], mX + 16, mY + 8, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[24] = 1;
        return 1;
    }

    // Animal Ability Button Down
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2735], mX, mY, uX, uY))
    {
        return 1;
    }
    if (!mAnimalAbilityWindow)
    {
        return 0;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 54, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[7] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 74, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[8] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 94, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[9] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 114, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[10] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 134, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[11] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 154, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[12] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 174, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[13] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 194, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[14] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 54, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[16] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 74, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[17] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 94, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[18] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 114, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[19] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 134, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[20] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 154, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[21] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 174, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[22] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 194, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[23] = 1;
        return 1;
    }

    return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2735], mX + 310, mY, uX, uY);
}

BOOL ANIMALUI::LBUTTONUP(int uX, int uY)
{
    int sX, sY, tstrlen, i, j, k, l;
    char* tstr;
    char* tstr2;
    int s1, s2, s3, s4, s5, s6, s7, s8;
    int tAnimalSort = 0;
    int tColor;
    int result;
    char String[1000];
    int tExp, tFeed;

    tExp = 0;
    tFeed = 0;
    s1 = 0;
    s2 = 0;
    s3 = 0;
    s4 = 0;
    s5 = 0;
    s6 = 0;
    s7 = 0;
    s8 = 0;
    tAnimalSort = 0;
    if (mMYINFO.mAvatarInfo.aAnimalIndex < 10 || mMYINFO.mAvatarInfo.aAnimalIndex > 19)
    {
        if (mUTIL.ReturnMountSort(mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber) == 30)
        {
            tAnimalSort = 1;
        }
    }
    else if (mUTIL.ReturnMountSort(mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber) == 30)
    {
        tAnimalSort = 1;
    }


    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2735]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2735]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2736], mX + 16, mY + 165, uX, uY))
        {
            if (mMYINFO.mAvatarInfo.aAnimalIndex == -1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(921), mFONTCOLOR.mData[44]);
            }
            else if (mMYINFO.mAvatarInfo.aAnimalIndex < 10 || mMYINFO.mAvatarInfo.aAnimalIndex > 19)
            {
                if (!mMYINFO.mMoveZoneState)
                {
                    mTRANSFER.T_ANIMAL_STATE_SEND(2, 0);
                }
            }
            else
            {
                mBASICUI.Insert1(mMESSAGE.Return(922), mFONTCOLOR.mData[44]);
            }
        }
        return 1;
    }
    if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2739], mX + 87, mY + 165, uX, uY))
        {
            ANIMALUI::Up(1);
        }
        return 1;
    }
    if (mIsClick[2])
    {
        mIsClick[2] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2742], mX + 158, mY + 165, uX, uY))
        {
            ANIMALUI::Down(1);
        }
        return 1;
    }
    if (mIsClick[3])
    {
        mIsClick[3] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2789], mX + 229, mY + 165, uX, uY))
        {
            ANIMALUI::Off();
        }
        return 1;
    }
    if (mIsClick[4])
    {
        mIsClick[4] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 259, mY + 10, uX, uY))
        {
            if (tAnimalSort == 1)
            {
                tstr = mMESSAGE.Return(2536);
                tstr2 = mMESSAGE.Return(2535);
            }
            else
            {
                tstr = mMESSAGE.Return(1525);
                tstr2 = mMESSAGE.Return(1509);
            }
            sprintf(String, "%s %s", tstr2, tstr);
            tstr = mMESSAGE.Return(1510);
            //mCBOXUI.Set(42, String, tstr);
            mCBOXUI.Set(42, String, "");
        }
        return 1;
    }
    if (mIsClick[5])
    {
        mIsClick[5] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3626], mX + 16, mY + 189, uX, uY))
        {
            if (tAnimalSort == 1)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.ReturnMountExp(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex - 10], &tFeed, &tExp);
                if (tExp < 100000)
                {
                    tColor = mFONTCOLOR.mData[44];
                    tstr = mMESSAGE.Return(2205);
                    mBASICUI.Insert1(tstr, tColor);
                    return 1;
                }
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex - 10], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (s8 + s7 + s6 + s5 + s4 + s3 + s2 + s1 >= 25)
                {
                    tColor = mFONTCOLOR.mData[44];
                    tstr = mMESSAGE.Return(2167);
                    mBASICUI.Insert1(tstr, tColor);
                    return 1;
                }
            }
            else
            {
                mBASICUI.Insert1("[SYSTEM] You must ride your mount to perform stat conversion.", 15);
                return 1;
            }
            mTRANSFER.T_ANIMAL_STATE_SEND(6, 0);
        }
        return 1;
    }
    if (mIsClick[6])
    {
        mIsClick[6] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3628], mX + 158, mY + 189, uX, uY))
        {
            mAnimalAbilityWindow = mAnimalAbilityWindow != 1;
        }
        return 1;
    }
    if (mIsClick[7])
    {
        mIsClick[7] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 54, uX, uY))
        {
            if (!mINVENUI.IsFindItem2(1225))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2215), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s1)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalAbilityStats[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s1)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tstr = mMESSAGE.Return(2207);
            tstr2 = mMESSAGE.Return(2212);
            mCBOXUI.Set(57, tstr2, tstr);
        }
        return 1;
    }
    if (mIsClick[8])
    {
        mIsClick[8] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 74, uX, uY))
        {
            if (!mINVENUI.IsFindItem2(1225))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2215), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s2)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalAbilityStats[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s2)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tstr = mMESSAGE.Return(2207);
            tstr2 = mMESSAGE.Return(2212);
            mCBOXUI.Set(58, tstr2, tstr);
        }
        return 1;
    }
    if (mIsClick[9])
    {
        mIsClick[9] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 94, uX, uY))
        {
            if (!mINVENUI.IsFindItem2(1225))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2215), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s3)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s3)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tstr = mMESSAGE.Return(2207);
            tstr2 = mMESSAGE.Return(2212);
            mCBOXUI.Set(59, tstr2, tstr);
        }
        return 1;
    }
    if (mIsClick[10])
    {
        mIsClick[10] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 114, uX, uY))
        {
            if (!mINVENUI.IsFindItem2(1225))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2215), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s4)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s4)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tstr = mMESSAGE.Return(2207);
            tstr2 = mMESSAGE.Return(2212);
            mCBOXUI.Set(60, tstr2, tstr);
        }
        return 1;
    }
    if (mIsClick[11])
    {
        mIsClick[11] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 134, uX, uY))
        {
            if (!mINVENUI.IsFindItem2(1225))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2215), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s5)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s5)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tstr = mMESSAGE.Return(2207);
            tstr2 = mMESSAGE.Return(2212);
            mCBOXUI.Set(61, tstr2, tstr);
        }
        return 1;
    }
    if (mIsClick[12])
    {
        mIsClick[12] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 154, uX, uY))

        {
            if (!mINVENUI.IsFindItem2(1225))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2215), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s6)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s6)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tstr = mMESSAGE.Return(2207);
            tstr2 = mMESSAGE.Return(2212);
            mCBOXUI.Set(62, tstr2, tstr);
        }
        return 1;
    }
    if (mIsClick[13])
    {
        mIsClick[13] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 174, uX, uY))

        {
            if (!mINVENUI.IsFindItem2(1225))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2215), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s7)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s7)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tstr = mMESSAGE.Return(2207);
            tstr2 = mMESSAGE.Return(2212);
            mCBOXUI.Set(63, tstr2, tstr);
        }
        return 1;
    }
    if (mIsClick[14])
    {
        mIsClick[14] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 194, uX, uY))
        {
            if (!mINVENUI.IsFindItem2(1225))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2215), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s8)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s8)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2214), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tColor = mFONTCOLOR.mData[44];
            tstr = mMESSAGE.Return(2214);
            mBASICUI.Insert1(tstr, tColor);
        }
        return 1;
    }
    if (mIsClick[16])
    {
        mIsClick[16] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 54, uX, uY))
        {
            if (!mINVENUI.IsFindItem2(1226))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2183), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s1)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalAbilityStats[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s1)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tstr = mMESSAGE.Return(2184);
            tstr2 = mMESSAGE.Return(2182);
            mCBOXUI.Set(65, tstr2, tstr);
        }
        return 1;
    }
    if (mIsClick[17])
    {
        mIsClick[17] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 74, uX, uY))
        {
            if (!mINVENUI.IsFindItem2(1226))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2183), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s2)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalAbilityStats[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s2)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tstr = mMESSAGE.Return(2184);
            tstr2 = mMESSAGE.Return(2182);
            mCBOXUI.Set(66, tstr2, tstr);
        }
        return 1;
    }
    if (mIsClick[18])
    {
        mIsClick[18] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 94, uX, uY))
        {
            if (!mINVENUI.IsFindItem2(1226))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2183), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s3)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalAbilityStats[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s3)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tstr = mMESSAGE.Return(2184);
            tstr2 = mMESSAGE.Return(2182);
            mCBOXUI.Set(67, tstr2, tstr);
        }
        return 1;
    }
    if (mIsClick[19])
    {
        mIsClick[19] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 114, uX, uY))
        {
            if (!mINVENUI.IsFindItem2(1226))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2183), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s4)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalAbilityStats[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s4)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tstr = mMESSAGE.Return(2184);
            tstr2 = mMESSAGE.Return(2182);
            mCBOXUI.Set(68, tstr2, tstr);
        }
        return 1;
    }
    if (mIsClick[20])
    {
        mIsClick[20] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 134, uX, uY))
        {
            if (!mINVENUI.IsFindItem2(1226))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2183), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s5)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalAbilityStats[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s5)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tstr = mMESSAGE.Return(2184);
            tstr2 = mMESSAGE.Return(2182);
            mCBOXUI.Set(69, tstr2, tstr);
        }
        return 1;
    }
    if (mIsClick[21])
    {
        mIsClick[21] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 154, uX, uY))
        {
            if (!mINVENUI.IsFindItem2(1226))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2183), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s6)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalAbilityStats[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s6)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tstr = mMESSAGE.Return(2184);
            tstr2 = mMESSAGE.Return(2182);
            mCBOXUI.Set(70, tstr2, tstr);
        }
        return 1;
    }
    if (mIsClick[22])
    {
        mIsClick[22] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 174, uX, uY))
        {
            if (!mINVENUI.IsFindItem2(1226))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2183), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s7)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalAbilityStats[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s7)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tstr = mMESSAGE.Return(2184);
            tstr2 = mMESSAGE.Return(2182);
            mCBOXUI.Set(71, tstr2, tstr);
        }
        return 1;
    }
    if (mIsClick[23])
    {
        mIsClick[23] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 194, uX, uY))
        {
            if (!mINVENUI.IsFindItem2(1226))
            {
                mBASICUI.Insert1(mMESSAGE.Return(2183), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0)
            {
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s8)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            else
            {
                mUTIL.GetAnimalAbilities(mMYINFO.mAvatarInfo.aAnimalAbilityStats[mMYINFO.mAvatarInfo.aAnimalIndex], &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8);
                if (!s8)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2180), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            tColor = mFONTCOLOR.mData[44];
            tstr = mMESSAGE.Return(2180);
            mBASICUI.Insert1(tstr, tColor);
        }
        return 1;
    }
    if (!mMYINFO.mAvatarInfo.aAbsorbState)
    {
        if (mIsClick[24])
        {
            mIsClick[24] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3594], mX + 16, mY + 8, uX, uY))
            {
                if (mMYINFO.mAvatarInfo.aMountAbsorbTime > 0)
                {
                    if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10 && mMYINFO.mAvatarInfo.aAnimalIndex <= 19)
                    {
                        mTRANSFER.T_ABSORB_STATE_SEND(1);
                    }
                    else
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(926), mFONTCOLOR.mData[44]);
                    }
                }
                else
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2154), mFONTCOLOR.mData[44]);
                }
            }
            return 1;
        }
    }
    if (mIsClick[24])
    {
        mIsClick[24] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3597], mX + 16, mY + 8, uX, uY))
        {
            mTRANSFER.T_ABSORB_STATE_SEND(2);
        }
        return 1;
    }

    return 0;
}

int ANIMALUI::RBUTTONDOWN(int uX, int uY)
{
    return 0;
}
int ANIMALUI::RBUTTONUP(int uX, int uY)
{
    return 0;
}
int ANIMALUI::KEYBOARD()
{
    return 0;
}

void ANIMALUI::Draw(int uX, int uY)
{
    int s1, s2, s3, s4, s5, s6, s7, s8;
    int sX, sY, tstrlen, i, j, k, l, v33;
    int tColor[2];
    char String[100];
    ITEM_INFO* v31;
    int v44;

    if (mActive)
    {
        s1 = 0;
        s2 = 0;
        s3 = 0;
        s4 = 0;
        s5 = 0;
        s6 = 0;
        s7 = 0;
        s8 = 0;
        ZeroMemory(String, sizeof(String));
        tColor[0] = 3;
        tColor[1] = 25;
        v33 = 0;
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2735]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2735]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2735], mX, mY, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2735], mX, mY);
        for (i = 0; i < 10; ++i)
        {
            if (mMYINFO.mAvatarInfo.aAnimal[i] >= 1)
            {
                sX = mX + 55 * (i % 5) + 19;
                sY = mY + 55 * (i / 5) + 41;
                v31 = mITEM.Search(mMYINFO.mAvatarInfo.aAnimal[i]);
                if (v31)
                {
                    v44 = v31->iDataNumber2D - 1;
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v44], sX, sY);
                    if (mMYINFO.mAvatarInfo.aAnimalIndex == i || mMYINFO.mAvatarInfo.aAnimalIndex == i + 10)
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2792], sX, sY);
                    }
                }
            }
        }
        if (mIsClick[0])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2737], mX + 16, mY + 165);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2736], mX + 16, mY + 165, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2736], mX + 16, mY + 165);
        }
        if (mIsClick[1])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2740], mX + 87, mY + 165);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2739], mX + 87, mY + 165, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2739], mX + 87, mY + 165);
        }
        if (mIsClick[2])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2743], mX + 158, mY + 165);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2742], mX + 158, mY + 165, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2742], mX + 158, mY + 165);
        }
        if (mIsClick[3])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2790], mX + 229, mY + 165);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2789], mX + 229, mY + 165, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2789], mX + 229, mY + 165);
        }
        if (mIsClick[4])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2741], mX + 259, mY + 10);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 259, mY + 10, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2738], mX + 259, mY + 10);
        }
        if (mIsClick[5])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3627], mX + 16, mY + 189);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3626], mX + 16, mY + 189, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3626], mX + 16, mY + 189);
        }
        if (mIsClick[6])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3629], mX + 158, mY + 189);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3628], mX + 158, mY + 189, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3628], mX + 158, mY + 189);
        }
        if (mAnimalAbilityWindow)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3630], mX + 310, mY, uX, uY))
                mPOINTER.Set(0);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3630], mX + 310, mY);
            if (mIsClick[7])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2741], mX + 444, mY + 54);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 54, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 54);
            }
            if (mIsClick[8])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2741], mX + 444, mY + 74);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 74, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 74);
            }
            if (mIsClick[9])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2741], mX + 444, mY + 94);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 94, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 94);
            }
            if (mIsClick[10])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2741], mX + 444, mY + 114);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 114, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 114);
            }
            if (mIsClick[11])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2741], mX + 444, mY + 134);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 134, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 134);
            }
            if (mIsClick[12])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2741], mX + 444, mY + 154);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 154, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 154);
            }
            if (mIsClick[13])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2741], mX + 444, mY + 174);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 174, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 174);
            }
            if (mIsClick[14])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2741], mX + 444, mY + 194);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 194, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2738], mX + 444, mY + 194);
            }
            if (mIsClick[16])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3633], mX + 482, mY + 54);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 54, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 54);
            }
            if (mIsClick[17])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3633], mX + 482, mY + 74);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 74, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 74);
            }
            if (mIsClick[18])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3633], mX + 482, mY + 94);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 94, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 94);
            }
            if (mIsClick[19])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3633], mX + 482, mY + 114);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 114, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 114);
            }
            if (mIsClick[20])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3633], mX + 482, mY + 134);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 134, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 134);
            }
            if (mIsClick[21])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3633], mX + 482, mY + 154);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 154, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 154);
            }
            if (mIsClick[22])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3633], mX + 482, mY + 174);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 174, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 174);
            }
            if (mIsClick[23])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3633], mX + 482, mY + 194);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 194, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3632], mX + 482, mY + 194);
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex < 0 || mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
            {
                if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10 && mMYINFO.mAvatarInfo.aAnimalIndex < 20)
                    mUTIL.GetAnimalAbilities(
                        mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex],
                        &s1,
                        &s2,
                        &s3,
                        &s4,
                        &s5,
                        &s6,
                        &s7,
                        &s8);
            }
            else
            {
                mUTIL.GetAnimalAbilities(
                    mMYINFO.mAvatarInfo.aAnimalAbilityStats[mMYINFO.mAvatarInfo.aAnimalIndex],
                    &s1,
                    &s2,
                    &s3,
                    &s4,
                    &s5,
                    &s6,
                    &s7,
                    &s8);
            }
            if (mMYINFO.mAvatarInfo.aAnimalIndex >= 0 && mMYINFO.mAvatarInfo.aAnimalIndex < 20)
            {
                sX = mX + 428;
                sY = mY + 57;
                v33 = s1 / 9;
                sprintf(String, "%d", 50 * s1);
                tstrlen = mUTIL.GetStringLength(String);
                mUTIL.DrawFont2D(String, sX - tstrlen, sY, tColor[v33]);
                sY += 20;
                v33 = s2 / 9;
                sprintf(String, "%d", 100 * s2);
                tstrlen = mUTIL.GetStringLength(String);
                mUTIL.DrawFont2D(String, sX - tstrlen, sY, tColor[v33]);
                sY += 20;
                v33 = s3 / 9;
                sprintf(String, "%d", 100 * s3);
                tstrlen = mUTIL.GetStringLength(String);
                mUTIL.DrawFont2D(String, sX - tstrlen, sY, tColor[v33]);
                sY += 20;
                v33 = s4 / 9;
                sprintf(String, "%d", 200 * s4);
                tstrlen = mUTIL.GetStringLength(String);
                mUTIL.DrawFont2D(String, sX - tstrlen, sY, tColor[v33]);
                sY += 20;
                v33 = s5 / 9;
                sprintf(String, "%d", 100 * s5);
                tstrlen = mUTIL.GetStringLength(String);
                mUTIL.DrawFont2D(String, sX - tstrlen, sY, tColor[v33]);
                sY += 20;
                v33 = s6 / 9;
                sprintf(String, "%d", 100 * s6);
                tstrlen = mUTIL.GetStringLength(String);
                mUTIL.DrawFont2D(String, sX - tstrlen, sY, tColor[v33]);
                sY += 20;
                v33 = s7 / 9;
                sprintf(String, "%d", 50 * s7);
                tstrlen = mUTIL.GetStringLength(String);
                mUTIL.DrawFont2D(String, sX - tstrlen, sY, tColor[v33]);
                sY += 20;
                v33 = s8 / 9;
                sprintf(String, "%d", 50 * s8);
                tstrlen = mUTIL.GetStringLength(String);
                mUTIL.DrawFont2D(String, sX - tstrlen, sY, tColor[v33]);
                sY += 20;
            }
        }
        if (mMYINFO.mAvatarInfo.aAbsorbState)
        {
            if (mIsClick[24])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3597], mX + 16, mY + 8);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3596], mX + 16, mY + 8, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3596], mX + 16, mY + 8);
            }
            else
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3595], mX + 16, mY + 8);
            }
        }
        else if (mIsClick[24])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3594], mX + 16, mY + 8);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3593], mX + 16, mY + 8, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3593], mX + 16, mY + 8);
        }
    }
}

int ANIMALUI::DrawForRollOver(int uX, int uY)
{
    int v4;
    int v5;
    int i;

    if (!mActive)
        return 0;
    v4 = mMYINFO.mScreenXSize / 2;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2735]) / 2;
    v5 = mMYINFO.mScreenYSize / 2;
    mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2735]) / 2;
    for (i = 0; i < 10; ++i)
    {
        if (mMYINFO.mAvatarInfo.aAnimal[i] >= 1
            && uX > mX + 55 * (i % 5) + 19
            && uX < mX + 55 * (i % 5) + 74
            && uY > mY + 55 * (i / 5) + 41
            && uY < mY + 55 * (i / 5) + 96)
        {
            mINVENUI.DrawItemInfo(uX, uY, mMYINFO.mAvatarInfo.aAnimal[i], 0, 0, 1, 0, 0, 0, 0, 0, 0);
            return 1;
        }
    }
    return 0;
}

void ANIMALUI::Up(int tSort)
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

    if (mUTIL.CheckInfiniteBattleZone())
    {
        v6 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(1352);
        mBASICUI.Insert1(v1, v6);
    }
    else if (mMYINFO.mAvatarInfo.aAnimalIndex == -1)
    {
        if (tSort)
        {
            v7 = mFONTCOLOR.mData[44];
            v2 = mMESSAGE.Return(921);
            mBASICUI.Insert1(v2, v7);
        }
    }
    else if (mMYINFO.mAvatarInfo.aAnimalIndex >= 0 && mMYINFO.mAvatarInfo.aAnimalIndex <= 9)
    {
        if (mMYINFO.mAvatarInfo.aAnimalTime >= 1)
        {
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 1)
            {
                if (!mMYINFO.mMoveZoneState)
                    mTRANSFER.T_ANIMAL_STATE_SEND(3, 0);
            }
            else if (tSort)
            {
                v10 = mFONTCOLOR.mData[44];
                v5 = mMESSAGE.Return(925);
                mBASICUI.Insert1(v5, v10);
            }
        }
        else if (tSort)
        {
            v9 = mFONTCOLOR.mData[44];
            v4 = mMESSAGE.Return(924);
            mBASICUI.Insert1(v4, v9);
        }
    }
    else if (tSort)
    {
        v8 = mFONTCOLOR.mData[44];
        v3 = mMESSAGE.Return(923);
        mBASICUI.Insert1(v3, v8);
    }
}
void ANIMALUI::Down(int tSort)
{
    char* v1;
    char* v2;
    char* v3;
    int v4;
    int v5;
    int v6;

    if (mUTIL.CheckInfiniteBattleZone())
    {
        v4 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(1352);
        mBASICUI.Insert1(v1, v4);
    }
    else if (mMYINFO.mAvatarInfo.aAnimalIndex == -1)
    {
        if (tSort)
        {
            v5 = mFONTCOLOR.mData[44];
            v2 = mMESSAGE.Return(921);
            mBASICUI.Insert1(v2, v5);
        }
    }
    else if (mMYINFO.mAvatarInfo.aAnimalIndex >= 10 && mMYINFO.mAvatarInfo.aAnimalIndex <= 19)
    {
        if (!mMYINFO.mMoveZoneState)
            mTRANSFER.T_ANIMAL_STATE_SEND(4, 0);
    }
    else if (tSort)
    {
        v6 = mFONTCOLOR.mData[44];
        v3 = mMESSAGE.Return(926);
        mBASICUI.Insert1(v3, v6);
    }
}
void ANIMALUI::Delete(int tSort)
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
    int v5;
    int v6;
    int v7;
    int v8;

    if (mUTIL.CheckInfiniteBattleZone())
    {
        v5 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(1352);
        mBASICUI.Insert1(v1, v5);
    }
    else if (mMYINFO.mAvatarInfo.aAnimalIndex == -1)
    {
        if (tSort)
        {
            v6 = mFONTCOLOR.mData[44];
            v2 = mMESSAGE.Return(1512);
            mBASICUI.Insert1(v2, v6);
        }
    }
    else if (mMYINFO.mAvatarInfo.aAnimalIndex <= 9 || mMYINFO.mAvatarInfo.aAnimalIndex >= 20)
    {
        if (tSort)
        {
            if (!mMYINFO.mMoveZoneState)
                mTRANSFER.T_ANIMAL_STATE_SEND(5, mMYINFO.mAvatarInfo.aAnimal[mMYINFO.mAvatarInfo.aAnimalIndex]);
        }
        /*if (mMYINFO.mAvatarInfo.aMoney >= 100000000)
        {
            if (!mMYINFO.mMoveZoneState)
                mTRANSFER.T_ANIMAL_STATE_SEND(5, mMYINFO.mAvatarInfo.aAnimal[mMYINFO.mAvatarInfo.aAnimalIndex]);
        }
        else if (tSort)
        {
            v8 = mFONTCOLOR.mData[44];
            v4 = mMESSAGE.Return(214);
            mBASICUI.Insert1(v4, v8);
        }*/
    }
    else if (tSort)
    {
        v7 = mFONTCOLOR.mData[44];
        v3 = mMESSAGE.Return(1513);
        mBASICUI.Insert1(v3, v7);
    }
}




COSTUMEUI mCOSTUMEUI;

BOOL COSTUMEUI::Init()
{
    mActive = 0;
    return TRUE;
}

void COSTUMEUI::InitForEnterZone()
{
    mActive = 0;
}
void COSTUMEUI::Set()
{
    int i;

    if (mUTIL.CheckInfiniteBattleZone())
    {
        mBASICUI.Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
    }
    else
    {
        mActive = 1;
        for (i = 0; i < 4; ++i)
        {
            mIsClick[i] = 0;
        }
    }
}
void COSTUMEUI::Off()
{
    if (mActive)
        mActive = 0;
}
BOOL COSTUMEUI::LBUTTONDOWN(int uX, int uY)
{
    int sX;
    int sY;
    int i;

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3209]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3209]) / 2;
    for (i = 0; i < 10; i++)
    {
        if (mMYINFO.mAvatarInfo.aCostume[i] >= 1 && uX > mX + 55 * (i % 5) + 19 && uX < mX + 55 * (i % 5) + 74 && uY > mY + 55 * (i / 5) + 41 && uY < mY + 55 * (i / 5) + 96)
        {
            if (mMYINFO.mAvatarInfo.aCostumeIndex < 10 || mMYINFO.mAvatarInfo.aCostumeIndex > 19)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                if (!mMYINFO.mMoveZoneState)
                {
                    if (mMYINFO.mAvatarInfo.aCostumeIndex == i)
                    {
                        mTRANSFER.T_COSTUME_STATE_SEND(2, i);
                    }
                    else
                    {
                        mTRANSFER.T_COSTUME_STATE_SEND(1, i);
                    }
                }
                return 1;
            }
            else
            {
                mBASICUI.Insert1(mMESSAGE.Return(1523), mFONTCOLOR.mData[44]);
                return 1;
            }
        }
    }

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3210], mX + 16, mY + 165, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3212], mX + 87, mY + 165, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3214], mX + 158, mY + 165, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[2] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3216], mX + 229, mY + 165, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[3] = 1;
        return 1;
    }
    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aCostumeHide)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4155], mX + 16, mY + 7, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[4] = 1;
            return 1;
        }
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4153], mX + 16, mY + 7, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[4] = 1;
        return 1;
    }

    return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3209], mX, mY, uX, uY);
}
int COSTUMEUI::LBUTTONUP(int uX, int uY)
{
    int sX;
    int sY;

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3209]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3209]) / 2;

    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3210], mX + 16, mY + 165, uX, uY))
        {
            if (mMYINFO.mAvatarInfo.aCostumeIndex == -1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(1518), mFONTCOLOR.mData[44]);
                return 1;
            }
            else if (mMYINFO.mAvatarInfo.aCostumeIndex < 10 || mMYINFO.mAvatarInfo.aCostumeIndex > 19)
            {
                if (!mMYINFO.mMoveZoneState)
                {
                    if (mMYINFO.mAvatarInfo.aTimedCostumeInventory[mMYINFO.mAvatarInfo.aCostumeIndex])
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(1866), mFONTCOLOR.mData[44]);
                    }
                    else
                    {
                        mTRANSFER.T_COSTUME_STATE_SEND(5, mMYINFO.mAvatarInfo.aCostumeIndex);
                    }
                }
            }
            else
            {
                mBASICUI.Insert1(mMESSAGE.Return(1523), mFONTCOLOR.mData[44]);
            }
        }
        return 1;
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3212], mX + 87, mY + 165, uX, uY))
        {
            COSTUMEUI::Up(1);
        }
        return 1;
    }
    else if (mIsClick[2])
    {
        mIsClick[2] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3214], mX + 158, mY + 165, uX, uY))
        {
            COSTUMEUI::Down(1);
        }
        return 1;
    }
    else if (mIsClick[3])
    {
        mIsClick[3] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3216], mX + 229, mY + 165, uX, uY))
        {
            COSTUMEUI::Off();
        }
        return 1;
    }
    else if (mIsClick[4])
    {
        mIsClick[4] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4154], mX + 16, mY + 7, uX, uY))
        {
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aCostumeHide)
            {
                mTRANSFER.T_COSTUME_HIDE_SEND(0);
            }
            else
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.aCostumeHide = 1;
                mTRANSFER.T_COSTUME_HIDE_SEND(1);
            }
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
        }
        return 1;
    }

    return 0;
}
int COSTUMEUI::RBUTTONDOWN(int uX, int uY)
{
    return 0;
}
int COSTUMEUI::RBUTTONUP(int uX, int uY)
{
    return 0;
}
int COSTUMEUI::KEYBOARD()
{
    return 0;
}
void COSTUMEUI::Draw(int uX, int uY)
{
    int sX;
    int sY;
    ITEM_INFO* v6;
    int a2;
    int i;
    int a3;

    if (mActive)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3209]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3209]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3209], mX, mY, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3209], mX, mY);
        for (i = 0; i < 10; ++i)
        {
            if (mMYINFO.mAvatarInfo.aCostume[i] >= 1)
            {
                a2 = mX + 55 * (i % 5) + 19;
                a3 = mY + 55 * (i / 5) + 41;
                v6 = mITEM.Search(mMYINFO.mAvatarInfo.aCostume[i]);
                if (v6)
                {
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[v6->iDataNumber2D - 1], a2, a3);
                    if (mMYINFO.mAvatarInfo.aCostumeIndex == i || mMYINFO.mAvatarInfo.aCostumeIndex == i + 10)
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2792], a2, a3);
                    }
                }
            }
        }
        if (mIsClick[0])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3211], mX + 16, mY + 165);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3210], mX + 16, mY + 165, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3210], mX + 16, mY + 165);
        }
        if (mIsClick[1])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3213], mX + 87, mY + 165);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3212], mX + 87, mY + 165, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3212], mX + 87, mY + 165);
        }
        if (mIsClick[2])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3215], mX + 158, mY + 165);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3214], mX + 158, mY + 165, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3214], mX + 158, mY + 165);
        }
        if (mIsClick[3])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3217], mX + 229, mY + 165);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3216], mX + 229, mY + 165, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3216], mX + 229, mY + 165);
        }
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aCostumeHide)
        {
            if (!mIsClick[4])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[4155], mX + 16, mY + 7);
                return;
            }
        }
        else if (!mIsClick[4])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[4153], mX + 16, mY + 7);
            return;
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[4154], mX + 16, mY + 7);
    }
}
int COSTUMEUI::DrawForRollOver(int uX, int uY)
{
    int sX;
    int sY;
    int i;

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3209]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3209]) / 2;
    for (i = 0; i < 10; ++i)
    {
        if (mMYINFO.mAvatarInfo.aCostume[i] >= 1 && uX > mX + 55 * (i % 5) + 19 && uX < mX + 55 * (i % 5) + 74 && uY > mY + 55 * (i / 5) + 41 && uY < mY + 55 * (i / 5) + 96)
        {
            mINVENUI.DrawItemInfo(uX, uY, mMYINFO.mAvatarInfo.aCostume[i], 0, 0, 0, 0, 0, 0, 0, 0, 0);
            return 1;
        }
    }
    return 0;
}
void COSTUMEUI::Up(int tSort)
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
    int v5;
    int v6;
    int v7;
    int v8;

    if (mUTIL.CheckInfiniteBattleZone())
    {
        v5 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(1352);
        mBASICUI.Insert1(v1, v5);
    }
    else if (mMYINFO.mAvatarInfo.aCostumeIndex == -1)
    {
        if (tSort)
        {
            v6 = mFONTCOLOR.mData[44];
            v2 = mMESSAGE.Return(1518);
            mBASICUI.Insert1(v2, v6);
        }
    }
    else if (mMYINFO.mAvatarInfo.aCostumeIndex >= 0 && mMYINFO.mAvatarInfo.aCostumeIndex <= 9)
    {
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 1)
        {
            if (!mMYINFO.mMoveZoneState)
            {
                mTRANSFER.T_COSTUME_STATE_SEND(3, 0);
            }
        }
        else if (tSort)
        {
            v8 = mFONTCOLOR.mData[44];
            v4 = mMESSAGE.Return(925);
            mBASICUI.Insert1(v4, v8);
        }
    }
    else if (tSort)
    {
        v7 = mFONTCOLOR.mData[44];
        v3 = mMESSAGE.Return(1520);
        mBASICUI.Insert1(v3, v7);
    }
}
void COSTUMEUI::Down(int tSort)
{
    char* v1;
    char* v2;
    char* v3;
    int v4;
    int v5;
    int v6;

    if (mUTIL.CheckInfiniteBattleZone())
    {
        v4 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(1352);
        mBASICUI.Insert1(v1, v4);
    }
    else if (mMYINFO.mAvatarInfo.aCostumeIndex == -1)
    {
        if (tSort)
        {
            v5 = mFONTCOLOR.mData[44];
            v2 = mMESSAGE.Return(1518);
            mBASICUI.Insert1(v2, v5);
        }
    }
    else if (mMYINFO.mAvatarInfo.aCostumeIndex >= 10 && mMYINFO.mAvatarInfo.aCostumeIndex <= 19)
    {
        if (!mMYINFO.mMoveZoneState)
            mTRANSFER.T_COSTUME_STATE_SEND(4, 0);
    }
    else if (tSort)
    {
        v6 = mFONTCOLOR.mData[44];
        v3 = mMESSAGE.Return(1526);
        mBASICUI.Insert1(v3, v6);
    }
}