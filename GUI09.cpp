#include "gxdheader.h"

BONUSUI mBONUSUI;

BOOL BONUSUI::Init()
{
    mActive = 0;
    return TRUE;
}

void BONUSUI::InitForEnterZone()
{
    mActive = 0;
}
void BONUSUI::Set()
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
        for (i = 0; i < 2; ++i)
            mIsClick[i] = 0;
    }
}
void BONUSUI::Off()
{
    if (mActive)
        mActive = 0;
}
BOOL BONUSUI::LBUTTONDOWN(int uX, int uY)
{
    int sX;
    int sY;

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2982]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2982]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 86, mY + 142, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 161, mY + 142, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
        return 1;
    }

    return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2982], mX, mY, uX, uY);
}
int BONUSUI::LBUTTONUP(int uX, int uY)
{
    int sX;
    int sY;
    BYTE tData[100];

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2982]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2982]) / 2;

    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 86, mY + 142, uX, uY))
        {
            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
            {
                mTRANSFER.T_TRIBE_WORK_SEND(8, &tData[0]);
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                BONUSUI::Off();
            }
        }
        return 1;
    }
    if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 161, mY + 142, uX, uY))
        {
            BONUSUI::Off();
        }
        return 1;
    }

    return 0;
}
int BONUSUI::RBUTTONDOWN(int uX, int uY)
{
    return 0;
}
int BONUSUI::RBUTTONUP(int uX, int uY)
{
    return 0;
}
int BONUSUI::KEYBOARD()
{
    return 0;
}
void BONUSUI::Draw(int uX, int uY)
{
    int sX;
    int sY;

    if (mActive)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2982]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2982]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2982], mX, mY, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2982], mX, mY);
        if (mIsClick[0])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], mX + 86, mY + 142);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 86, mY + 142, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[9], mX + 86, mY + 142);
        }
        if (mIsClick[1])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[13], mX + 161, mY + 142);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 161, mY + 142, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[12], mX + 161, mY + 142);
        }
    }
}
int BONUSUI::DrawForRollOver(int uX, int uY)
{
    return 0;
}






HOISUNDO_UI mHOISUNDO_UI;

BOOL HOISUNDO_UI::Init()
{
    mActive = 0;
    return TRUE;
}

void HOISUNDO_UI::InitForEnterZone()
{
    mActive = 0;
}
void HOISUNDO_UI::Set()
{
    int i;
    int j;
    int k;
    int m;
    int ii;
    int l;
    int n;
    int jj;

    mActive = 1;
    for (i = 0; i < 3; ++i)
        mIsClick[i] = 0;
    for (j = 0; j < 4; ++j)
    {
        mRegCount[j][0] = 0;
        mRegCount[j][1] = 0;
        mRegCount[j][2] = 0;
    }
    for (k = 0; k < 4; ++k)
    {
        for (l = 0; l < 5; ++l)
        {
            if (strcmp(mPLAY.mTribeInfo.mValleyOfDeceasedRegistrationLevel[k][l], ""))
                ++mRegCount[k][0];
        }
    }
    for (m = 0; m < 4; ++m)
    {
        for (n = 0; n < 5; ++n)
        {
            if (strcmp(mPLAY.mTribeInfo.mValleyOfDeceasedRegistrationMaster[m][n], ""))
                ++mRegCount[m][1];
        }
    }
    for (ii = 0; ii < 4; ++ii)
    {
        for (jj = 0; jj < 5; ++jj)
        {
            if (strcmp(mPLAY.mTribeInfo.mValleyOfDeceasedRegistrationGod[ii][jj], ""))
                ++mRegCount[ii][2];
        }
    }
}
void HOISUNDO_UI::Off()
{
    if (mActive)
        mActive = 0;
}
int HOISUNDO_UI::LBUTTONDOWN(int uX, int uY)
{
    int result;
    int v4;
    int v5;

    if (!mActive)
        return 0;
    v4 = mMYINFO.mScreenXSize / 2;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3443]) / 2;
    v5 = mMYINFO.mScreenYSize / 2;
    mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3443]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3444], mX + 303, mY + 373, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
        result = 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3446], mX + 367, mY + 373, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
        result = 1;
    }
    else
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 424, mY + 7, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[2] = 1;
        }
        result = 1;
    }
    return result;
}
int HOISUNDO_UI::LBUTTONUP(int uX, int uY)
{
    int tZoneNumber;
    float tCoord[3];
    int sX, sY, v15, v14;
    int result;
    int len;
    char* str;
    int tColor;

    tZoneNumber = 0;
    tCoord[0] = 0.0;
    tCoord[1] = 0.0;
    tCoord[2] = 0.0;

    if (!mActive)
        return 0;
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3443]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3443]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3444], mX + 303, mY + 373, uX, uY))
            return 1;
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        if (mMYINFO.mAvatarInfo.aLevel1 < 100 || mMYINFO.mAvatarInfo.aLevel1 > 112)
        {
            if (mMYINFO.mAvatarInfo.aLevel1 < 113 || mMYINFO.mAvatarInfo.aLevel1 > 145 || mMYINFO.mAvatarInfo.aLevel2)
            {
                if (mMYINFO.mAvatarInfo.aLevel2 <= 0)
                    return 1;
                tZoneNumber = 299;
            }
            else
            {
                tZoneNumber = 298;
            }
        }
        else
        {
            tZoneNumber = 297;
        }
        if (mMYINFO.mPresentZoneNumber == tZoneNumber)
            return 1;
        if (!mZONEMAININFO.CheckPossibleEnterHoisundoZoneNumber(tZoneNumber))
        {
            tColor = mFONTCOLOR.mData[44];
            str = mMESSAGE.Return(229);
            mBASICUI.Insert1(str, tColor);
            return 1;
        }
        v15 = mZONEMAININFO.CheckPossibleEnterHoisundoName(tZoneNumber);
        if (v15)
        {
            if (v15 != 1)
            {
                if (v15 == 2)
                {
                    tColor = mFONTCOLOR.mData[44];
                    str = mMESSAGE.Return(229);
                    mBASICUI.Insert1(str, tColor);
                }
                return 1;
            }
        LABEL_29:
            tColor = mFONTCOLOR.mData[44];
            str = mMESSAGE.Return(1769);
            mBASICUI.Insert1(str, tColor);
            return 1;
        }
        if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, tZoneNumber, &tCoord[0]))
            mZONEMOVEINFO.SetFirstCoord(tZoneNumber, &tCoord[0]);
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
        HOISUNDO_UI::Off();
        result = 1;
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3446], mX + 367, mY + 373, uX, uY))
            return 1;
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            return 1;
        if (mMYINFO.mAvatarInfo.aLevel1 < 100 || mMYINFO.mAvatarInfo.aLevel1 > 112)
        {
            if (mMYINFO.mAvatarInfo.aLevel1 < 113 || mMYINFO.mAvatarInfo.aLevel1 > 145 || mMYINFO.mAvatarInfo.aLevel2)
            {
                if (mMYINFO.mAvatarInfo.aLevel2 <= 0)
                    return 1;
                tZoneNumber = 299;
            }
            else
            {
                tZoneNumber = 298;
            }
        }
        else
        {
            tZoneNumber = 297;
        }
        v14 = mZONEMAININFO.CheckPossibleEnterHoisundoName(tZoneNumber);
        switch (v14)
        {
        case 0:
            mTRANSFER.T_297_TYPE_CANCEL_SEND(tZoneNumber, mMYINFO.mAvatarInfo.aTribe, mMYINFO.mAvatarInfo.aName);
            HOISUNDO_UI::Off();
            return 1;
        case 1:
            goto LABEL_29;
        case 2:
            tColor = mFONTCOLOR.mData[44];
            str = mMESSAGE.Return(1349);
            mBASICUI.Insert1(str, tColor);
            break;
        }
        result = 1;
    }
    else if (mIsClick[2])
    {
        mIsClick[2] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 424, mY + 7, uX, uY))
            HOISUNDO_UI::Off();
        result = 1;
    }
    else
    {
        result = 0;
    }
    return result;
}
int HOISUNDO_UI::RBUTTONDOWN(int uX, int uY)
{
    return 0;
}
int HOISUNDO_UI::RBUTTONUP(int uX, int uY)
{
    return 0;
}
int HOISUNDO_UI::KEYBOARD()
{
    return 0;
}
void HOISUNDO_UI::Draw(int uX, int uY)
{
    int sX, sY, strlen, v7, v10, v11;
    int i, j, k;
    char* tstr;
    char String[1000];

    v10 = 163;
    v11 = 118;
    v7 = 101;
    if (mActive)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3443]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3443]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3443], mX, mY, uX, uY))
            mPOINTER.Set(0);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3443], mX, mY);
        if (mIsClick[0])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3445], mX + 303, mY + 373);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3444], mX + 303, mY + 373, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3444], mX + 303, mY + 373);
        }
        if (mIsClick[1])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3447], mX + 367, mY + 373);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3446], mX + 367, mY + 373, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3446], mX + 367, mY + 373);
        }
        for (i = 0; i < 4; ++i)
        {
            for (j = 0; j < 3; ++j)
            {
                if (i != 3 || j)
                {
                    sprintf(String, "%d / %d", mRegCount[i][j], 5);
                    mUTIL.DrawFont2D(String, v7 * j + v10 + mX, (i << 6) + v11 + mY, 1);
                }
            }
        }
        if (mIsClick[2])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 424, mY + 7);
    }
}






GUILD_RANKING_UI mGUILD_RANKING_UI;

BOOL GUILD_RANKING_UI::Init()
{
    mActive = 0;
    return TRUE;
}

void GUILD_RANKING_UI::InitForEnterZone()
{
    mActive = 0;
    memset(mGuildName, 0, 91u);
}
void GUILD_RANKING_UI::Set()
{
    mActive = 1;
    mIsClick = 0;
}
void GUILD_RANKING_UI::Off()
{
    if (mActive)
        mActive = 0;
}
int GUILD_RANKING_UI::IsChallengeGuildName(int tSort, char* tGuildName)
{
    int i;

    if (tSort > 7u)
        return 0;
    for (i = 0; i < tSort; ++i)
    {
        if (!strcmp(&mGuildName[13 * i], tGuildName))
            return 1;
    }
    return 0;
}
void GUILD_RANKING_UI::SetChallengeGuildName(int tPos, char* tGuildName)
{
    if (tPos <= 6u)
        strcpy(&mGuildName[13 * tPos], tGuildName);
}
int GUILD_RANKING_UI::LBUTTONDOWN(int uX, int uY)
{
    int v4;
    int v5;

    if (!mActive)
        return 0;
    v4 = mMYINFO.mScreenXSize / 2;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3501]) / 2;
    v5 = mMYINFO.mScreenYSize / 2;
    mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3501]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 385, mY + 6, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick = 1;
    }
    return 1;
}
int GUILD_RANKING_UI::LBUTTONUP(int uX, int uY)
{
    int v4;
    int v5;

    if (!mActive)
        return 0;
    v4 = mMYINFO.mScreenXSize / 2;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3501]) / 2;
    v5 = mMYINFO.mScreenYSize / 2;
    mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3501]) / 2;
    if (!mIsClick)
        return 0;
    mIsClick = 0;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 385, mY + 6, uX, uY))
        GUILD_RANKING_UI::Off();
    return 1;
}
int GUILD_RANKING_UI::RBUTTONDOWN(int uX, int uY)
{
    return 0;
}
int GUILD_RANKING_UI::RBUTTONUP(int uX, int uY)
{
    return 0;
}
int GUILD_RANKING_UI::KEYBOARD()
{
    return 0;
}
void GUILD_RANKING_UI::Draw(int uX, int uY)
{
    int sX, sY, v40, tStrLen;
    char String[1000];
    char* tSTR;

    v40 = 80;
    if (mActive)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3501]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3501]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3501], mX, mY, uX, uY))
            mPOINTER.Set(0);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3501], mX, mY);
        strcpy(String, mPLAY.mWorldInfo.mBigForGuildName[mMYINFO.mAvatarInfo.aTribe][0]);
        sY = mY + 80;
        sX = mX + 122;
        tStrLen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tStrLen / 2, sY, 1);
        strcpy(String, mPLAY.mWorldInfo.mBigForGuildName[mMYINFO.mAvatarInfo.aTribe][1]);
        sY = mY + 113;
        sX = mX + 122;
        tStrLen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tStrLen / 2, sY, 1);
        strcpy(String, mPLAY.mWorldInfo.mBigForGuildName[mMYINFO.mAvatarInfo.aTribe][2]);
        sY = mY + 146;
        sX = mX + 122;
        tStrLen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tStrLen / 2, sY, 1);
        strcpy(String, mPLAY.mWorldInfo.mBigForGuildName[mMYINFO.mAvatarInfo.aTribe][3]);
        sY = mY + 179;
        sX = mX + 122;
        tStrLen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tStrLen / 2, sY, 1);
        strcpy(String, mGuildName);
        sY = v40 + mY;
        sX = mX + 313;
        tStrLen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tStrLen / 2, sY, 1);
        v40 += 33;
        strcpy(String, &mGuildName[13]);
        sY = v40 + mY;
        sX = mX + 313;
        tStrLen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tStrLen / 2, sY, 1);
        v40 += 33;
        strcpy(String, &mGuildName[26]);
        sY = v40 + mY;
        sX = mX + 313;
        tStrLen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tStrLen / 2, sY, 1);
        v40 += 33;
        strcpy(String, &mGuildName[39]);
        sY = v40 + mY;
        sX = mX + 313;
        tStrLen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tStrLen / 2, sY, 1);
        v40 += 33;
        strcpy(String, &mGuildName[52]);
        sY = v40 + mY;
        sX = mX + 313;
        tStrLen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tStrLen / 2, sY, 1);
        v40 += 33;
        strcpy(String, &mGuildName[65]);
        sX = v40 + mY;
        sX = mX + 313;
        tStrLen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tStrLen / 2, sY, 1);
        v40 += 33;
        strcpy(String, &mGuildName[78]);
        sY = v40 + mY;
        sX = mX + 313;
        tStrLen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tStrLen / 2, sY, 1);
        v40 += 33;
        if (mIsClick)
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 385, mY + 6);
    }
}







FACTIONNOTICEUI mFACTIONNOTICEUI;

BOOL FACTIONNOTICEUI::Init()
{
    mActive = 0;
    return TRUE;
}

void FACTIONNOTICEUI::Set()
{
    char* v1;
    int v2;
    int i;

    if (mUTIL.CheckInfiniteBattleZone() || mMYINFO.mPresentZoneNumber == 291)
    {
        v2 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(1352);
        mBASICUI.Insert1(v1, v2);
    }
    else
    {
        mActive = 1;
        for (i = 0; i < 2; ++i)
            mIsClick[i] = 0;
        mEDITBOX.Set(21);
        SetWindowTextA(mEDITBOX.mDATA[20], "");
    }
}
void FACTIONNOTICEUI::InitForEnterZone()
{
    mActive = 0;
}
BOOL FACTIONNOTICEUI::LBUTTONDOWN(int uX, int uY)
{
    int sX;

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3587]) / 2;
    mY = mMYINFO.mScreenYSize - 160;

    if (uX <= mEDITBOX.mEditBoxInfo[20][0] || uX >= mEDITBOX.mEditBoxInfo[20][2] || uY <= mEDITBOX.mEditBoxInfo[20][1] || uY >= mEDITBOX.mEditBoxInfo[20][3])
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[837], mX + 331, mY + 71, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 272, mY + 71, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
            return 1;
        }
    }
    else
    {
        mEDITBOX.Set(21);
    }

    return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3587], mX, mY, uX, uY);
}
BOOL FACTIONNOTICEUI::LBUTTONUP(int uX, int uY)
{
    int sX;

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3587]) / 2;
    mY = mMYINFO.mScreenYSize - 160;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[837], mX + 331, mY + 71, uX, uY))
        {
            FACTIONNOTICEUI::SetEditBox();
        }
        return 1;
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 272, mY + 71, uX, uY))
        {
            FACTIONNOTICEUI::GetEditBoxText();
        }
        return 1;
    }

    return 0;
}
int FACTIONNOTICEUI::RBUTTONDOWN(int uX, int uY)
{
    return 0;
}
int FACTIONNOTICEUI::RBUTTONUP(int uX, int uY)
{
    return 0;
}
int FACTIONNOTICEUI::KEYBOARD()
{
    return 0;
}
void FACTIONNOTICEUI::Draw(int uX, int uY)
{
    int sX, sY, tStrLen = 0;
    char String[1000];

    if (mActive)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3587]) / 2;
        mY = mMYINFO.mScreenYSize - 160;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3587], mX, mY, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3587], mX, mY);
        GetWindowTextA(mEDITBOX.mDATA[20], String, 1000);
        mUTIL.DrawFont2D(String, mX + 13, mY + 42, 1);
        if (mEDITBOX.mDataIndex == 21)
        {
            sY = mY + 42;
            sX = mX;
            tStrLen = mUTIL.GetStringLength(String);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + tStrLen + 14, sY);
        }
        if (mIsClick[0])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[838], mX + 331, mY + 71);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[837], mX + 331, mY + 71, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[837], mX + 331, mY + 71);
        }
        if (mIsClick[1])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[836], mX + 272, mY + 71);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 272, mY + 71, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[835], mX + 272, mY + 71);
        }
    }
}
int FACTIONNOTICEUI::DrawForRollOver(int uX, int uY)
{
    return 0;
}
void FACTIONNOTICEUI::SetEditBox()
{
    if (mActive)
    {
        mActive = 0;
        if (mEDITBOX.mDataIndex == 21)
            mEDITBOX.Set(0);
    }
}
void FACTIONNOTICEUI::GetEditBoxText()
{
    char* v1;
    char* v2;
    int v3;
    int v4;
    char String[1000];

    mEDITBOX.Set(0);
    if (GetWindowTextA(mEDITBOX.mDATA[20], String, 1000))
    {
        SetWindowTextA(mEDITBOX.mDATA[20], "");
        mTRANSFER.T_FACTION_NOTICE_SEND(String);
        FACTIONNOTICEUI::SetEditBox();
    }
    else
    {
        v3 = mFONTCOLOR.mData[44];
        v1 = mMESSAGE.Return(2120);
        mBASICUI.Insert1(v1, v3);
    }
}





TRIBESKILL mTRIBESKILL;

BOOL TRIBESKILL::Init()
{
    mActive = 0;
    return TRUE;
}

void TRIBESKILL::InitForEnterZone()
{
    mActive = 0;
}
void TRIBESKILL::Set()
{
    int i;
    int sX;
    int sY;

    if (mMAIN.mWorldIndex == 40)
    {
        mBASICUI.Insert1(mMESSAGE.Return(110), mFONTCOLOR.mData[44]);
        return;
    }
    if (mUTIL.CheckInfiniteBattleZone())
    {
        mBASICUI.Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
        return;
    }
    if (mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) != 1)
    {
        mBASICUI.Insert1(mMESSAGE.Return(935), mFONTCOLOR.mData[44]);
        return;
    }
    if (mPLAY.mWorldInfo.mTribePoint[0] < 100 || mPLAY.mWorldInfo.mTribePoint[1] < 100 || mPLAY.mWorldInfo.mTribePoint[2] < 100 || mPLAY.mWorldInfo.mTribePoint[3] < 100)
    {
        mBASICUI.Insert1(mMESSAGE.Return(635), mFONTCOLOR.mData[44]);
        return;
    }
    if (mPLAY.ReturnSmallTribe() != mMYINFO.mAvatarInfo.aTribe)
    {
        mBASICUI.Insert1(mMESSAGE.Return(936), mFONTCOLOR.mData[44]);
        return;
    }
    if (100 * mPLAY.mWorldInfo.mTribePoint[mPLAY.ReturnSmallTribe()] / (mPLAY.mWorldInfo.mTribePoint[3] + mPLAY.mWorldInfo.mTribePoint[2] + mPLAY.mWorldInfo.mTribePoint[1] + mPLAY.mWorldInfo.mTribePoint[0]) >= 20)
    {
        mBASICUI.Insert1(mMESSAGE.Return(1770), mFONTCOLOR.mData[44]);
        return;
    }
    if (mPLAY.mWorldInfo.mTribeSymbolBattle != 1)
    {
        mBASICUI.Insert1(mMESSAGE.Return(937), mFONTCOLOR.mData[44]);
        return;
    }
    mActive = 1;
    for (i = 0; i < 3; ++i)
    {
        mIsClick[i] = 0;
    }
    mSelectIndex = -1;
}
void TRIBESKILL::Off()
{
    if (mActive)
        mActive = 0;
}
BOOL TRIBESKILL::LBUTTONDOWN(int uX, int uY)
{
    int sX;
    int sY;

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2800]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2800]) / 2;

    if (uX > mX + 54 && uX < mX + 104 && uY > mY + 59 && uY < mY + 109)
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mSelectIndex = 0;
        return 1;
    }
    if (uX > mX + 54 && uX < mX + 104 && uY > mY + 128 && uY < mY + 178)
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mSelectIndex = 1;
        return 1;
    }
    if (uX > mX + 54 && uX < mX + 104 && uY > mY + 197 && uY < mY + 247)
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mSelectIndex = 2;
        return 1;
    }
    if (uX > mX + 54 && uX < mX + 104 && uY > mY + 266 && uY < mY + 316)
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mSelectIndex = 3;
        return 1;
    }

    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2801], mX + 45, mY + 18, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2803], mX + 143, mY + 18, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 240, mY + 6, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[2] = 1;
        return 1;
    }

    return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2800], mX, mY, uX, uY);
}
int TRIBESKILL::LBUTTONUP(int uX, int uY)
{
    int sX;
    int sY;
    int tSkillIndex;
    BYTE tData[100];

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2800]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2800]) / 2;

    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2801], mX + 45, mY + 18, uX, uY))
        {
            if (mSelectIndex == -1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(938), mFONTCOLOR.mData[44]);
                return 1;
            }
            tSkillIndex = mSelectIndex + 1;
            memcpy(&tData[0], &tSkillIndex, 4);
            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
            {
                mTRANSFER.T_TRIBE_WORK_SEND(5, &tData[0]);
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                return 1;
            }
        }
        return 1;
    }
    if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2803], mX + 143, mY + 18, uX, uY))
        {
            tSkillIndex = 0;
            memcpy(&tData[0], &tSkillIndex, 4);
            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
            {
                mTRANSFER.T_TRIBE_WORK_SEND(5, &tData[0]);
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                return 1;
            }
        }
        return 1;
    }
    if (mIsClick[2])
    {
        mIsClick[2] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 240, mY + 6, uX, uY))
        {
            TRIBESKILL::Off();
        }
        return 1;
    }

    return FALSE;
}
int TRIBESKILL::RBUTTONDOWN(int uX, int uY)
{
    return 0;
}
int TRIBESKILL::RBUTTONUP(int uX, int uY)
{
    return 0;
}
int TRIBESKILL::KEYBOARD()
{
    return 0;
}
void TRIBESKILL::Draw(int uX, int uY)
{
    int sX;
    int sY;

    if (mActive)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2800]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2800]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2800], mX, mY, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2800], mX, mY);
        if (mSelectIndex == 0)
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2809], mX + 54, mY + 59);
        }
        if (mSelectIndex == 1)
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2810], mX + 54, mY + 128);
        }
        if (mSelectIndex == 2)
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2811], mX + 54, mY + 197);
        }
        if (mSelectIndex == 3)
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2812], mX + 54, mY + 266);
        }
        if (mIsClick[0])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2802], mX + 45, mY + 18);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2801], mX + 45, mY + 18, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2801], mX + 45, mY + 18);
        }
        if (mIsClick[1])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2804], mX + 143, mY + 18);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2803], mX + 143, mY + 18, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2803], mX + 143, mY + 18);
        }
        if (mIsClick[2])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 240, mY + 6);
        }
    }
}
int TRIBESKILL::DrawForRollOver(int uX, int uY)
{
    return 0;
}




BOOZEUI mBOOZEUI;

BOOL BOOZEUI::Init()
{
    mActive = 0;
    INIT_COORD(3942, 25, -33, 0);
    INIT_COORD(3943, 25, -33, 1);
    INIT_COORD(3944, 25, -33, 2);
    INIT_COORD(3945, 357, 286, 3);
    INIT_COORD(3946, 158, 165, 4);
    INIT_COORD(3947, 158, 165, 5);
    INIT_COORD(3950, 229, 165, 6);
    INIT_COORD(3951, 229, 165, 7);
    INIT_COORD(3952, -26, -55, 8);
    return TRUE;
}

int BOOZEUI::ReturnXCoord(int tDataNum)
{
    int i;

    for (i = 0; i < 9; i++)
    {
        if (mCoord[i].tDataNum == tDataNum)
        {
            return mCoord[i].sX;
        }
    }

    return -1;
}

int BOOZEUI::ReturnYCoord(int tDataNum)
{
    int i;

    for (i = 0; i < 9; i++)
    {
        if (mCoord[i].tDataNum == tDataNum)
        {
            return mCoord[i].sY;
        }
    }

    return -1;
}

void BOOZEUI::InitForEnterZone()
{
    mActive = 0;
}

void BOOZEUI::Set()
{
    int i;

    mActive = 1;
    for (i = 0; i < 4; ++i)
    {
        mIsClick[i] = 0;
    }
}
void BOOZEUI::Off()
{
    if (mActive)
    {
        mActive = 0;
    }
}

void BOOZEUI::Draw(int uX, int uY)
{
    int i, j, k, sX, sY, tstrlen;
    char* tstr;
    ITEM_INFO* v19;
    int i2d, isort;
    char String[1000];


    if (mActive)
    {
        i = 0;
        ZeroMemory(&String, sizeof(String));
        mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3945]) / 2;
        mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3945]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3945], mX, mY, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3945], mX, mY);
        for (i = 0; i < 10; ++i)
        {
            if (mMYINFO.mAvatarInfo.aWineBottle[i] >= 1)
            {
                sX = mX + 55 * (i % 5) + 19;
                sY = mY + 55 * (i / 5) + 41;
                v19 = mITEM.Search(mMYINFO.mAvatarInfo.aWineBottle[i]);
                if (v19)
                {
                    i2d = v19->iDataNumber2D - 1;
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2d], sX, sY);
                    if (mMYINFO.mAvatarInfo.aWineDrinkIndex == i && mMYINFO.mAvatarInfo.aActiveBoozeTime > 0)
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2792], sX, sY);
                    }
                    if (mMYINFO.mBottleIndex == i)
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2627], sX, sY);
                    }
                }
            }
        }
        if (mIsClick[0])
        {
            sY = mY + BOOZEUI::ReturnYCoord(3947);
            sX = BOOZEUI::ReturnXCoord(3947);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3947], mX + sX, sY);
        }
        else
        {
            sY = mY + BOOZEUI::ReturnYCoord(3946);
            sX = BOOZEUI::ReturnXCoord(3946);
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3946], mX + sX, sY, uX, uY))
            {
                sY = mY + BOOZEUI::ReturnYCoord(3946);
                sX = BOOZEUI::ReturnXCoord(3946);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3946], mX + sX, sY);
            }
        }
        if (mIsClick[2])
        {
            sY = mY + BOOZEUI::ReturnYCoord(3951);
            sX = BOOZEUI::ReturnXCoord(3951);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3951], mX + sX, sY);
        }
        else
        {
            sY = mY + BOOZEUI::ReturnYCoord(3950);
            sX = BOOZEUI::ReturnXCoord(3950);
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3950], mX + sX, sY, uX, uY))
            {
                sY = mY + BOOZEUI::ReturnYCoord(3950);
                sX = BOOZEUI::ReturnXCoord(3950);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3950], mX + sX, sY);
            }
        }
        for (i = 0; i < 10; ++i)
        {
            if (mMYINFO.mAvatarInfo.aWineBottle[i])
            {
                sprintf(String, "%d / %d", mMYINFO.mAvatarInfo.aWineBottle1Quantity[i], 30);
                sX = mX + 55 * (i % 5) + 44;
                sY = mY + 55 * (i / 5) + 77;
                mUTIL.DrawFont2D(String, sX - mUTIL.GetStringLength(String) / 2, sY, 1);
            }
        }
    }
}

BOOL BOOZEUI::LBUTTONDOWN(int uX, int uY)
{
    int i;
    int sX;
    int sY;

    if (!mActive)
    {
        return 0;
    }
    mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3945]) / 2;
    mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3945]) / 2;
    for (i = 0; i < 10; ++i)
    {
        if (mMYINFO.mAvatarInfo.aWineBottle[i] >= 1 && uX > mX + 55 * (i % 5) + 19 && uX < mX + 55 * (i % 5) + 74 && uY > mY + 55 * (i / 5) + 41 && uY < mY + 55 * (i / 5) + 96)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mMYINFO.mBottleIndex = i;
            return 1;
        }
    }
    sY = mY + BOOZEUI::ReturnYCoord(3946);
    sX = BOOZEUI::ReturnXCoord(3946);
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3946], mX + sX, sY, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
        return 1;
    }
    sY = mY + BOOZEUI::ReturnYCoord(3950);
    sX = BOOZEUI::ReturnXCoord(3950);
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3950], mX + sX, sY, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[2] = 1;
        return 1;
    }

    return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3945], mX, mY, uX, uY);
}

int BOOZEUI::LBUTTONUP(int uX, int uY)
{
    int sX;
    int sY;

    if (!mActive)
    {
        return 0;
    }
    mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3945]) / 2;
    mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3945]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        sY = mY + BOOZEUI::ReturnYCoord(3946);
        sX = BOOZEUI::ReturnXCoord(3946);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3946], mX + sX, sY, uX, uY))
        {
            BOOZEUI::UseBooze(1, 1);
        }
        return 1;
    }
    else if (mIsClick[2])
    {
        mIsClick[2] = 0;
        sY = mY + BOOZEUI::ReturnYCoord(3950);
        sX = BOOZEUI::ReturnXCoord(3950);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3950], mX + sX, sY, uX, uY))
        {
            BOOZEUI::Off();
        }
        return 1;
    }

    return false;
}

int BOOZEUI::RBUTTONDOWN(int uX, int uY)
{
    return 0;
}
int BOOZEUI::RBUTTONUP(int uX, int uY)
{
    return 0;
}
int BOOZEUI::KEYBOARD()
{
    return 0;
}

int BOOZEUI::DrawForRollOver(int uX, int uY)
{
    int i;

    if (!mActive)
    {
        return 0;
    }
    mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3945]) / 2;
    mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3945]) / 2;
    for (i = 0; i < 10; ++i)
    {
        if (mMYINFO.mAvatarInfo.aWineBottle[i] >= 1 && uX > mX + 55 * (i % 5) + 19 && uX < mX + 55 * (i % 5) + 74 && uY > mY + 55 * (i / 5) + 41 && uY < mY + 55 * (i / 5) + 96)
        {
            mINVENUI.DrawItemInfo(uX, uY, mMYINFO.mAvatarInfo.aWineBottle[i], 0, 0, 0, 0, 0, 0, 0, 0, 0);
            return 1;
        }
    }
    return 0;
}

void BOOZEUI::UseBooze(int tSort, int tSort2)
{
    if (mMYINFO.mBottleIndex < 0 || mMYINFO.mBottleIndex > 9)
    {
        mBASICUI.Insert1(mMESSAGE.Return(2398), mFONTCOLOR.mData[44]);
        return;
    }
    if (mMYINFO.mAvatarInfo.aWineBottle1Quantity[mMYINFO.mBottleIndex] < 1)
    {
        mBASICUI.Insert1(mMESSAGE.Return(2399), mFONTCOLOR.mData[44]);
        return;
    }
    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 1)
    {
        mBASICUI.Insert1(mMESSAGE.Return(925), mFONTCOLOR.mData[44]);
        return;
    }
    if (mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber > 0 && mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalAbsorbState == 0)
    {
        mBASICUI.Insert1(mMESSAGE.Return(1186), mFONTCOLOR.mData[44]);
        return;
    }
    mMYINFO.A016(tSort2);
}
