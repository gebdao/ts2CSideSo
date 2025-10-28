#include "gxdheader.h"


SPECIALSKILL mSPECIALSKILL;

BOOL SPECIALSKILL::Init()
{
    mActive = 0;
    INIT_COORD(3917, 302, 274, 0);
    INIT_COORD(3918, 16, 165, 1);
    INIT_COORD(3919, 16, 165, 2);
    INIT_COORD(3920, 87, 165, 3);
    INIT_COORD(3921, 87, 165, 4);
    INIT_COORD(3922, 339, 165, 5);
    INIT_COORD(3923, 339, 165, 6);
    INIT_COORD(298, 397, 6, 7);
    INIT_COORD(3924, 59, -32, 8);
    INIT_COORD(3925, 59, -32, 9);
    INIT_COORD(3926, 59, -32, 10);
    INIT_COORD(3927, 7, -54, 11);
    return TRUE;
}

int SPECIALSKILL::ReturnXCoord(int tDataNum)
{
    int i;

    for (i = 0; i < 12; i++)
    {
        if (mCoord[i].tDataNum == tDataNum)
        {
            return mCoord[i].sX;
        }
    }

    return -1;
}

int SPECIALSKILL::ReturnYCoord(int tDataNum)
{
    int i;

    for (i = 0; i < 12; i++)
    {
        if (mCoord[i].tDataNum == tDataNum)
        {
            return mCoord[i].sY;
        }
    }

    return -1;
}

void SPECIALSKILL::InitForEnterZone()
{
    mActive = 0;
}

void SPECIALSKILL::Set( int tSort )
{
    char* v2; 
    int v3; 
    int i;

    if (mUTIL.CheckInfiniteBattleZone())
    {
        mBASICUI.Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
        return;
    }
    mActive = 1;
    mSort = tSort;
    for (i = 0; i < 4; ++i)
    {
        mIsClick[i] = 0;
    }
}

void SPECIALSKILL::Off()
{
    if (mActive)
    {
        mActive = 0;
    }
}

void SPECIALSKILL::Draw( int uX, int uY )
{
    int sX, sY, tstrlen, i, j, k;
    char* tstr;
    ITEM_INFO* Item;

    if (mActive)
    {
        mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3917]) / 2;
        mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3917]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3917], mX, mY, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3917], mX, mY);
        for (i = 0; i < 14; ++i)
        {
            if (mMYINFO.mAvatarInfo.aCombineSkills[mSort][i] >= 1)
            {
                sX = mX + 55 * (i % 5) + 19;
                sY = mY + 55 * (i / 5) + 41;
                Item = mITEM.Search(mMYINFO.mAvatarInfo.aCombineSkills[mSort][i]);
                if (Item)
                {
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[Item->iDataNumber2D - 1], sX, sY);
                    if (mPLAY.mAVATAR_OBJECT[0].mDATA.mSpecialSkillState == 1 && mSort == 1)
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2792], sX, sY);
                    }
                }
            }
        }
        if (mIsClick[0])
        {
            sY = mY + SPECIALSKILL::ReturnYCoord(3919);
            sX = SPECIALSKILL::ReturnXCoord(3919);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3919], mX + sX, sY);
        }
        else
        {
            sY = mY + SPECIALSKILL::ReturnYCoord(3918);
            sX = SPECIALSKILL::ReturnXCoord(3918);
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3918], mX + sX, sY, uX, uY))
            {
                sY = mY + SPECIALSKILL::ReturnYCoord(3918);
                sX = SPECIALSKILL::ReturnXCoord(3918);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3918], mX + sX, sY);
            }
        }
        if (mIsClick[1])
        {
            sY = mY + SPECIALSKILL::ReturnYCoord(3921);
            sX = SPECIALSKILL::ReturnXCoord(3921);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3921], mX + sX, sY);
        }
        else
        {
            sY = mY + SPECIALSKILL::ReturnYCoord(3920);
            sX = SPECIALSKILL::ReturnXCoord(3920);
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3920], mX + sX, sY, uX, uY))
            {
                sY = mY + SPECIALSKILL::ReturnYCoord(3920);
                sX = SPECIALSKILL::ReturnXCoord(3920);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3920], mX + sX, sY);
            }
        }
        if (mIsClick[2])
        {
            sY = mY + SPECIALSKILL::ReturnYCoord(3923);
            sX = SPECIALSKILL::ReturnXCoord(3923);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3923], mX + sX, sY);
        }
        else
        {
            sY = mY + SPECIALSKILL::ReturnYCoord(3922);
            sX = SPECIALSKILL::ReturnXCoord(3922);
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3922], mX + sX, sY, uX, uY))
            {
                sY = mY + SPECIALSKILL::ReturnYCoord(3922);
                sX = SPECIALSKILL::ReturnXCoord(3922);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3922], mX + sX, sY);
            }
        }
        if (mIsClick[3])
        {
            sY = mY + SPECIALSKILL::ReturnYCoord(298);
            sX = SPECIALSKILL::ReturnXCoord(298);
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + sX, sY);
        }
    }
}

BOOL SPECIALSKILL::LBUTTONDOWN(int uX, int uY)
{
    int i;
    int sX;
    int sY;

    if (!mActive)
    {
        return 0;
    }
    mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3917]) / 2;
    mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3917]) / 2;

    for (i = 0; i < 14; i++)
    {
        if (mMYINFO.mAvatarInfo.aCombineSkills[mSort][i] >= 1 && uX > mX + 55 * (i % 5) + 19 && uX < mX + 55 * (i % 5) + 74 && uY > mY + 55 * (i / 5) + 41 && uY < mY + 55 * (i / 5) + 96)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            if (!mMYINFO.mMoveZoneState)
            {
                mTRANSFER.T_COSTUME_STATE_SEND(1, i);
            }
            return 1;
        }
    }
    sY = mY + SPECIALSKILL::ReturnYCoord(3918);
    sX = SPECIALSKILL::ReturnXCoord(3918);
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3918], mX + sX, sY, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
        return 1;
    }
    sY = mY + SPECIALSKILL::ReturnYCoord(3920);
    sX = SPECIALSKILL::ReturnXCoord(3920);
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3920], mX + sX, sY, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
        return 1;
    }
    sY = mY + SPECIALSKILL::ReturnYCoord(3922);
    sX = SPECIALSKILL::ReturnXCoord(3922);
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3922], mX + sX, sY, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[2] = 1;
        return 1;
    }
    sY = mY + SPECIALSKILL::ReturnYCoord(298);
    sX = SPECIALSKILL::ReturnXCoord(298);
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + sX, sY, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[3] = 1;
        return 1;
    }

    return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3917], mX, mY, uX, uY);
}

int SPECIALSKILL::LBUTTONUP( int uX, int uY )
{
    int sX;
    int sY;
    int i;

    if (!mActive)
    {
        return 0;
    }
    mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3917]) / 2;
    mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3917]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        mSort = 0;
        sY = mY + SPECIALSKILL::ReturnYCoord(3918);
        sX = SPECIALSKILL::ReturnXCoord(3918);
        GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3918], mX + sX, sY, uX, uY);
        return 1;
    }
    if (mIsClick[1])
    {
        mIsClick[1] = 0;
        mSort = 1;
        sY = mY + SPECIALSKILL::ReturnYCoord(3920);
        sX = SPECIALSKILL::ReturnXCoord(3920);
        GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3920], mX + sX, sY, uX, uY);
        return 1;
    }
    if (mIsClick[2])
    {
        mIsClick[2] = 0;
        sY = mY + SPECIALSKILL::ReturnYCoord(3922);
        sX = SPECIALSKILL::ReturnXCoord(3922);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3922], mX + sX, sY, uX, uY))
        {
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
            SPECIALSKILL::CheckSkill(1);
        }
        return 1;
    }
    else if (mIsClick[3])
    {
        mIsClick[3] = 0;
        sY = mY + SPECIALSKILL::ReturnYCoord(298);
        sX = SPECIALSKILL::ReturnXCoord(298);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + sX, sY, uX, uY))
        {
            SPECIALSKILL::Off();
        }
        return 1;
    }

    return 0;
}

int SPECIALSKILL::RBUTTONDOWN(int uX, int uY)
{
    return 0;
}
int SPECIALSKILL::RBUTTONUP(int uX, int uY)
{
    return 0;
}
int SPECIALSKILL::KEYBOARD()
{
    return 0;
}

void SPECIALSKILL::CheckSkill(int a1)
{
    char* v1;
    int v2;
    int i; 

    for (i = 0; i < 14; ++i)
    {
        if (mMYINFO.mAvatarInfo.aCombineSkills[1][i] <= 0)
        {
            continue;
        }
        break;
    }
    if (i == 14)
    {
        mBASICUI.Insert1(mMESSAGE.Return(2393), mFONTCOLOR.mData[44]);
        return;
    }
    if (!mMYINFO.mMoveZoneState)
    {
        //sub_4BC7C0(&mTRANSFER);
    }
}

int SPECIALSKILL::DrawForRollOver( int uX, int uY )
{
    int v4;
    int v5;
    int i; 

    if (!mActive)
    {
        return 0;
    }
    mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3917]) / 2;
    mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3917]) / 2;
    for (i = 0; i < 14; ++i)
    {
        if (mMYINFO.mAvatarInfo.aCombineSkills[mSort][i] >= 1 && uX > mX + 55 * (i % 5) + 19 && uX < mX + 55 * (i % 5) + 74 && uY > mY + 55 * (i / 5) + 41 && uY < mY + 55 * (i / 5) + 96)
        {
            mINVENUI.DrawItemInfo(uX, uY, mMYINFO.mAvatarInfo.aCombineSkills[mSort][i], 0, 0, 0, 0, 0, 0, 0, 0, 0);
            return 1;
        }
    }
    return 0;
}




HELPUI mHELPUI;

BOOL HELPUI::Init()
{
    mActive = 0;
    return TRUE;
}

void HELPUI::InitForEnterZone()
{
    mActive = 0;
    if (!mMYINFO.mPreviousZoneNumber)
        mHelpConditionEffectIndex = 0;
}

void HELPUI::Set()
{
    int i;

    if (mMYINFO.mCheckHelpConditionEffect)
    {
        mMYINFO.mCheckHelpConditionEffect = 0;
        mHelpConditionEffectIndex = mMYINFO.mHelpConditionEffectIndex;
    }
    GSOUND::Play(&mGDATA.mSOUND_5[212], 0, 100);
    mActive = 1;
    aa = 1;
    bb = mAPP[0].hPresentElapsedSeconds;
    mUpdateTime = 0.0;
    for (i = 0; i < 6; ++i)
        mIsClick[i] = 0;
    if (!mHelpConditionEffectIndex)
        mHelpConditionEffectIndex = mHELP.ReturnFirstHelpIndex(mMYINFO.mAvatarInfo.aTribe);
    mEDITBOX.Set(0);
    SetWindowTextA(mEDITBOX.mDATA[5], "");
}
void HELPUI::Off()
{
    if (mActive)
    {
        GSOUND::Play(&mGDATA.mSOUND_5[212], 0, 100);
        aa = 0;
        mUpdateTime = 1;
        dd = mAPP->hPresentElapsedSeconds;
        if (mEDITBOX.mDataIndex == 6)
            mEDITBOX.Set(0);
    }
}

void HELPUI::Draw(int uX, int uY)
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
    char String[1000];
    HELP_INFO* v15;
    int v16;

    if (mActive)
    {
        v3 = mMYINFO.mScreenXSize / 2;
        mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2028]) / 2;
        v4 = mMYINFO.mScreenYSize / 2;
        mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2028]) / 2;
        mPOINTER.Set(0);
        if (aa)
        {
            v16 = ((mAPP[0].hPresentElapsedSeconds - bb) * 30.0) + 2019;
            if (v16 > 2028)
            {
                aa = 0;
                GIMAGE2D::Free(&mGDATA.mUI_MAIN[2019]);
                GIMAGE2D::Free(&mGDATA.mUI_MAIN[2020]);
                GIMAGE2D::Free(&mGDATA.mUI_MAIN[2021]);
                GIMAGE2D::Free(&mGDATA.mUI_MAIN[2022]);
                GIMAGE2D::Free(&mGDATA.mUI_MAIN[2023]);
                GIMAGE2D::Free(&mGDATA.mUI_MAIN[2024]);
                GIMAGE2D::Free(&mGDATA.mUI_MAIN[2025]);
                GIMAGE2D::Free(&mGDATA.mUI_MAIN[2026]);
                GIMAGE2D::Free(&mGDATA.mUI_MAIN[2027]);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2028], mX, mY);
                return;
            }
            goto LABEL_5;
        }
        if (mUpdateTime)
        {
            v16 = 2028 - ((mAPP[0].hPresentElapsedSeconds - dd) * 30.0);
            if (v16 >= 2019)
            {
            LABEL_5:
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[v16], mX, mY);
                return;
            }
            mUpdateTime = 0.0;
            GIMAGE2D::Free(&mGDATA.mUI_MAIN[2019]);
            GIMAGE2D::Free(&mGDATA.mUI_MAIN[2020]);
            GIMAGE2D::Free(&mGDATA.mUI_MAIN[2021]);
            GIMAGE2D::Free(&mGDATA.mUI_MAIN[2022]);
            GIMAGE2D::Free(&mGDATA.mUI_MAIN[2023]);
            GIMAGE2D::Free(&mGDATA.mUI_MAIN[2024]);
            GIMAGE2D::Free(&mGDATA.mUI_MAIN[2025]);
            GIMAGE2D::Free(&mGDATA.mUI_MAIN[2026]);
            GIMAGE2D::Free(&mGDATA.mUI_MAIN[2027]);
            mActive = 0;
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2028], mX, mY);
            v15 = mHELP.Search(mHelpConditionEffectIndex);
            if (v15)
            {
                GIMAGE2D::Display(&mGDATA.mUI_HELP[v15->h2DImage - 1], mX + 122, mY + 125);
                v11 = mHELP.ReturnMaxHelpNum(mMYINFO.mAvatarInfo.aTribe);
                v5 = mHELP.ReturnPresentHelpNum(mMYINFO.mAvatarInfo.aTribe, mHelpConditionEffectIndex);
                sprintf(String, "%d / %d", v5, v11);
                v10 = mY + 143;
                v6 = mX + 200;
                v7 = mUTIL.GetStringLength(String);
                mUTIL.DrawFont2D(String, v6 - v7 / 2, v10, 1);
            }
            GetWindowTextA(mEDITBOX.mDATA[5], String, 1000);
            mUTIL.DrawFont2D(String, mX + 691, mY + 145, 1);
            if (mEDITBOX.mDataIndex == 6)
            {
                v12 = mY + 145;
                v8 = mX;
                v9 = mUTIL.GetStringLength(String);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], v8 + v9 + 692, v12);
            }
            if (mIsClick[0])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2008], mX + 122, mY + 141);
            if (mIsClick[1])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2006], mX + 142, mY + 141);
            if (mIsClick[2])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2007], mX + 240, mY + 141);
            if (mIsClick[3])
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2009], mX + 260, mY + 141);
            if (mIsClick[4])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2030], mX + 853, mY + 141);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2029], mX + 853, mY + 141, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2029], mX + 853, mY + 141);
            }
            if (mIsClick[5])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2005], mX + 394, mY + 627);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2004], mX + 394, mY + 627, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2004], mX + 394, mY + 627);
            }
        }
    }
}

int HELPUI::LBUTTONDOWN( int uX, int uY )
{
    int result; 
    int v4; 
    int v5; 

    if (!mActive)
        return 0;
    if (aa)
        return 1;
    if (mUpdateTime)
        return 1;
    v4 = mMYINFO.mScreenXSize / 2;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2028]) / 2;
    v5 = mMYINFO.mScreenYSize / 2;
    mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2028]) / 2;
    if (uX <= mEDITBOX.mEditBoxInfo[5][0] || uX >= mEDITBOX.mEditBoxInfo[5][2] || uY <= mEDITBOX.mEditBoxInfo[5][1] || uY >= mEDITBOX.mEditBoxInfo[5][3])
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2008], mX + 122, mY + 141, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            result = 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2006], mX + 142, mY + 141, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
            result = 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2007], mX + 240, mY + 141, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[2] = 1;
            result = 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2009], mX + 260, mY + 141, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[3] = 1;
            result = 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2029], mX + 853, mY + 141, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[4] = 1;
            result = 1;
        }
        else
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2004], mX + 394, mY + 627, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[5] = 1;
            }
            result = 1;
        }
    }
    else
    {
        mEDITBOX.Set(6);
        SetWindowTextA(mEDITBOX.mDATA[5], "");
        result = 1;
    }
    return result;
}

BOOL HELPUI::LBUTTONUP(int uX, int uY)
{
    BOOL result; 
    int v4;
    int v5;
    int i; 
    int j; 
    HELP_INFO* v9; 
    HELP_INFO* v10; 
    HELP_INFO* v11; 
    HELP_INFO* v12; 

    if (!mActive)
        return 0;
    if (aa)
        return 1;
    if (mUpdateTime)
        return 1;
    v4 = mMYINFO.mScreenXSize / 2;
    mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2028]) / 2;
    v5 = mMYINFO.mScreenYSize / 2;
    mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2028]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2008], mX + 122, mY + 141, uX, uY))
        {
            v9 = mHELP.Search(mHelpConditionEffectIndex);
            if (v9)
                GIMAGE2D::Free(&mGDATA.mUI_HELP[v9->h2DImage - 1]);
            for (i = 0; i < 5; ++i)
                mHelpConditionEffectIndex = mHELP.ReturnPreviousHelpIndex(mMYINFO.mAvatarInfo.aTribe, mHelpConditionEffectIndex);
            result = 1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2006], mX + 142, mY + 141, uX, uY))
        {
            v10 = mHELP.Search(mHelpConditionEffectIndex);
            if (v10)
                GIMAGE2D::Free(&mGDATA.mUI_HELP[v10->h2DImage - 1]);
            mHelpConditionEffectIndex = mHELP.ReturnPreviousHelpIndex( mMYINFO.mAvatarInfo.aTribe, mHelpConditionEffectIndex);
            result = 1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mIsClick[2])
    {
        mIsClick[2] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2007], mX + 240, mY + 141, uX, uY))
        {
            v11 = mHELP.Search(mHelpConditionEffectIndex);
            if (v11)
                GIMAGE2D::Free(&mGDATA.mUI_HELP[v11->h2DImage - 1]);
            mHelpConditionEffectIndex = mHELP.ReturnNextHelpIndex( mMYINFO.mAvatarInfo.aTribe, mHelpConditionEffectIndex);
            result = 1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mIsClick[3])
    {
        mIsClick[3] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2009], mX + 260, mY + 141, uX, uY))
        {
            v12 = mHELP.Search(mHelpConditionEffectIndex);
            if (v12)
                GIMAGE2D::Free(&mGDATA.mUI_HELP[v12->h2DImage - 1]);
            for (j = 0; j < 5; ++j)
                mHelpConditionEffectIndex = mHELP.ReturnNextHelpIndex(mMYINFO.mAvatarInfo.aTribe, mHelpConditionEffectIndex);
            result = 1;
        }
        else
        {
            result = 1;
        }
    }
    else if (mIsClick[4])
    {
        mIsClick[4] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2029], mX + 853, mY + 141, uX, uY))
            HELPUI::ProcessForSearchHelp();
        result = 1;
    }
    else if (mIsClick[5])
    {
        mIsClick[5] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2004], mX + 394, mY + 627, uX, uY))
            HELPUI::Off();
        result = 1;
    }
    else
    {
        result = 1;
    }
    return result;
}

BOOL HELPUI::RBUTTONDOWN( int uX, int uY )
{
    return mActive != 0;
}
BOOL HELPUI::RBUTTONUP( int uX, int uY )
{
    return mActive != 0;
}
int HELPUI::KEYBOARD()
{
    int i; 

    if (mActive)
        return 0;
    if (mMAIN.mMainMode != 6 || mMAIN.mSubMode != 4)
        return 0;
    for (i = 0; i < mGXD.mKeyboardBufferedDataNum && (mGXD.mKeyboardBufferedData[i].dwData & 0x80) == 0; ++i)
        ;
    if (i == mGXD.mKeyboardBufferedDataNum)
        return 0;
    if (mGXD.mKeyboardBufferedData[i].dwOfs != 35)
        return 0;
    mUI.Off(1);
    HELPUI::Set();
    return 1;
}

BOOL HELPUI::DrawForRollOver( int uX, int uY ) 
{
    return mActive != 0;
}
void HELPUI::ProcessForSearchHelp()
{
    HELP_INFO* v2; 
    char String[1000];
    HELP_INFO* v4;

    if (GetWindowTextA(mEDITBOX.mDATA[5], String, 1000))
    {
        v2 = mHELP.Search(mMYINFO.mAvatarInfo.aTribe, String);
        if (v2)
        {
            mEDITBOX.Set(0);
            v4 = mHELP.Search(mHelpConditionEffectIndex);
            if (v4)
                GIMAGE2D::Free(&mGDATA.mUI_HELP[v4->h2DImage - 1]);
            mHelpConditionEffectIndex = v2->hIndex;
        }
        else
        {
            SetWindowTextA(mEDITBOX.mDATA[5], "");
        }
    }
}



TRIBEUI mTRIBEUI;

BOOL TRIBEUI::Init()
{
    mActive = 0;
    return TRUE;
}

void TRIBEUI::InitForEnterZone()
{
    mActive = 0;
}

void TRIBEUI::Set()
{
    int i; 

    if (mUTIL.CheckInfiniteBattleZone())
    {
        mBASICUI.Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
    }
    else
    {
        mActive = 1;
        for (i = 0; i < 1; ++i)
        {
            mIsClick[i] = 0;
        }
    }
}
void TRIBEUI::Off()
{
    if (mActive)
        mActive = 0;
}
BOOL TRIBEUI::LBUTTONDOWN( int uX, int uY )
{
    int sX;
    int sY; 

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2331]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2331]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1600], mX + 269, mY + 535, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
        return 1;
    }

    return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2331], mX, mY, uX, uY);
}
int TRIBEUI::LBUTTONUP( int uX, int uY )
{
    int sX; 
    int sY; 

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2331]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2331]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1600], mX + 269, mY + 535, uX, uY))
        {
            TRIBEUI::Off();
        }
        return 1;
    }
    return 0;
}
int TRIBEUI::RBUTTONDOWN(int uX, int uY)
{
    return 0;
}
int TRIBEUI::RBUTTONUP(int uX, int uY)
{
    return 0;
}
int TRIBEUI::KEYBOARD()
{
    return 0;
}
void TRIBEUI::Draw( int uX, int uY )
{
    int sX, sY, tstrlen, i, j, k;
    char* tstr;
    char* tstr2;
    char* tstr3;
    char String[1000];
    char String2[1000];
    int tTribePoint;
    int index, v37;
    char buf[100];
    string tTime;


    if (mActive)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2331]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2331]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2331], mX, mY, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2331], mX, mY);

        tTribePoint = mPLAY.ReturnTribePointWithAlliance(0);
        sprintf(String, "[%d]", tTribePoint);
        mUTIL.DrawFont2D(String, mX + 244, mY + 17, 1);

        tTribePoint = mPLAY.ReturnTribePointWithAlliance(1);
        sprintf(String, "[%d]", tTribePoint);
        mUTIL.DrawFont2D(String, mX + 468, mY + 17, 1);

        tTribePoint = mPLAY.ReturnTribePointWithAlliance(2);
        sprintf(String, "[%d]", tTribePoint);
        mUTIL.DrawFont2D(String, mX + 244, mY + 40, 1);

        tTribePoint = mPLAY.ReturnTribePointWithAlliance(3);
        sprintf(String, "[%d]", tTribePoint);
        mUTIL.DrawFont2D(String, mX + 468, mY + 40, 1);

        tstr = mMESSAGE.Return(mPLAY.mWorldInfo.mTribe1Symbol + 1112);
        sprintf(String, "[%s]", tstr);
        mUTIL.DrawFont2D(String, mX + 244, mY + 64, mPLAY.mWorldInfo.mTribe1Symbol + 41);

        tstr = mMESSAGE.Return(mPLAY.mWorldInfo.mTribe2Symbol + 1112);
        sprintf(String, "[%s]", tstr);
        mUTIL.DrawFont2D(String, mX + 405, mY + 64, mPLAY.mWorldInfo.mTribe2Symbol + 41);

        tstr = mMESSAGE.Return(mPLAY.mWorldInfo.mTribe3Symbol + 1112);
        sprintf(String, "[%s]", tstr);
        mUTIL.DrawFont2D(String, mX + 566, mY + 64, mPLAY.mWorldInfo.mTribe3Symbol + 41);

        tstr = mMESSAGE.Return(mPLAY.mWorldInfo.mTribe4Symbol + 1112);
        sprintf(String, "[%s]", tstr);
        mUTIL.DrawFont2D(String, mX + 244, mY + 87, mPLAY.mWorldInfo.mTribe4Symbol + 41);

        if (mPLAY.mWorldInfo.mMonsterSymbol != -1)
        {
            tstr = mMESSAGE.Return(mPLAY.mWorldInfo.mMonsterSymbol + 1112);
            sprintf(String, "[%s]", tstr);
            mUTIL.DrawFont2D(String, mX + 405, mY + 87, mPLAY.mWorldInfo.mMonsterSymbol + 41);
        }
        for (i = 0; i < 4; ++i)
        {
            for (j = 0; j < 4; ++j)
            {
                if (mPLAY.mWorldInfo.mTribeGuardState[i][j] == 1)
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2107], mX + 30 * j + 260, mY + 29 * i + 117);
                }
                else
                {
                    GIMAGE2D::Display(&mGDATA.mUI_MAIN[2333], mX + 30 * j + 260, mY + 29 * i + 117);
                }
            }
        }
        if (mPLAY.mWorldInfo.mZone038WinTribe != -1)
        {
            sprintf(String, "[%s]%s", mMESSAGE.Return(mPLAY.mWorldInfo.mZone038WinTribe + 1112), mMESSAGE.Return(1117));
            mUTIL.DrawFont2D(String, mX + 177, mY + 247, 1);
        }
        if (mPLAY.mWorldInfo.mAllianceState[0][0] != -1 && mPLAY.mWorldInfo.mAllianceState[0][1] != -1)
        {
            sprintf(String, "[%s],[%s] %s", mMESSAGE.Return(mPLAY.mWorldInfo.mAllianceState[0][0] + 1112), mMESSAGE.Return(mPLAY.mWorldInfo.mAllianceState[0][1] + 1112), mMESSAGE.Return(1119));
            mUTIL.DrawFont2D(String, mX + 177, mY + 270, 1);
        }
        if (mPLAY.mWorldInfo.mAllianceState[1][0] != -1 && mPLAY.mWorldInfo.mAllianceState[1][1] != -1)
        {
            sprintf(String, "[%s],[%s] %s", mMESSAGE.Return(mPLAY.mWorldInfo.mAllianceState[1][0] + 1112), mMESSAGE.Return(mPLAY.mWorldInfo.mAllianceState[1][1] + 1112), mMESSAGE.Return(1119));
            mUTIL.DrawFont2D(String, mX + 177, mY + 293, 1);
        }
        if (mMAIN.mWorldIndex != 40)
        {
            if (mPLAY.mWorldInfo.mTribeVoteState[0] > 0)
            {
                sprintf(String, "%s", mMESSAGE.Return(1120));
                mUTIL.DrawFont2D(String, mX + 244, mY + 318, 1);
            }
            if (mPLAY.mWorldInfo.mTribeVoteState[1] > 0)
            {
                sprintf(String, "%s", mMESSAGE.Return(1120));
                mUTIL.DrawFont2D(String, mX + 468, mY + 318, 1);
            }
            if (mPLAY.mWorldInfo.mTribeVoteState[2] > 0)
            {
                sprintf(String, "%s", mMESSAGE.Return(1120));
                mUTIL.DrawFont2D(String, mX + 244, mY + 341, 1);
            }
            if (mPLAY.mWorldInfo.mTribeVoteState[3] > 0)
            {
                sprintf(String, "%s", mMESSAGE.Return(1120));
                mUTIL.DrawFont2D(String, mX + 468, mY + 341, 1);
            }
        }
        sprintf(String, "%s", mPLAY.mTribeInfo.mTribeMaster[mMYINFO.mAvatarInfo.aTribe]);
        sY = mY + 364;
        sX = mX + 400;
        tstrlen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 3);

        sprintf(String, "%s", mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][0]);
        mUTIL.DrawFont2D(String, mX + 193, mY + 389, 3);
        sprintf(String, "%s", mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][1]);
        mUTIL.DrawFont2D(String, mX + 313, mY + 389, 3);
        sprintf(String, "%s", mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][2]);
        mUTIL.DrawFont2D(String, mX + 433, mY + 389, 3);
        sprintf(String, "%s", mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][3]);
        mUTIL.DrawFont2D(String, mX + 553, mY + 389, 3);
        sprintf(String, "%s", mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][4]);
        mUTIL.DrawFont2D(String, mX + 193, mY + 412, 3);
        sprintf(String, "%s", mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][5]);
        mUTIL.DrawFont2D(String, mX + 313, mY + 412, 3);
        sprintf(String, "%s", mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][6]);
        mUTIL.DrawFont2D(String, mX + 433, mY + 412, 3);
        sprintf(String, "%s", mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][7]);
        mUTIL.DrawFont2D(String, mX + 553, mY + 412, 3);
        sprintf(String, "%s", mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][8]);
        mUTIL.DrawFont2D(String, mX + 193, mY + 435, 3);
        sprintf(String, "%s", mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][9]);
        mUTIL.DrawFont2D(String, mX + 313, mY + 435, 3);
        sprintf(String, "%s", mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][10]);
        mUTIL.DrawFont2D(String, mX + 433, mY + 435, 3);
        sprintf(String, "%s", mPLAY.mTribeInfo.mTribeSubMaster[mMYINFO.mAvatarInfo.aTribe][11]);
        mUTIL.DrawFont2D(String, mX + 553, mY + 435, 3);
        i = 0;
        j = 0;
        GIMAGE2D::Display( &mGDATA.mUI_MAIN[mPLAY.mWorldInfo.mProvingGroundsState[0] + 3754], mX + 539, mY + 246);
        ++j;
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[mPLAY.mWorldInfo.mProvingGroundsState[j++] + 3754], mX + 25 * i + 539, mY + 267);
        for (i = 0; i < 2; ++i)
        {
            GIMAGE2D::Display( &mGDATA.mUI_MAIN[mPLAY.mWorldInfo.mProvingGroundsState[j++] + 3754], mX + 25 * i + 539, mY + 288);
        }
        i = 0;
        j = 0;
        if (mPLAY.mWorldInfo.mProvingGroundsState[0] && GIMAGE2D::CheckIn( &mGDATA.mUI_MAIN[mPLAY.mWorldInfo.mProvingGroundsState[j] + 3754], mX + 25 * i + 539, mY + 246, uX, uY))
        {
            GIMAGE2D::Display( &mGDATA.mUI_MAIN[mPLAY.mWorldInfo.mProvingGroundsState[j] + 3758], mX + 25 * i + 539, mY + 246);
        }
        if (mPLAY.mWorldInfo.mProvingGroundsState[++j] && GIMAGE2D::CheckIn( &mGDATA.mUI_MAIN[mPLAY.mWorldInfo.mProvingGroundsState[j] + 3754], mX + 25 * i + 539, mY + 267, uX, uY))
        {
            GIMAGE2D::Display( &mGDATA.mUI_MAIN[mPLAY.mWorldInfo.mProvingGroundsState[j] + 3758], mX + 25 * i + 539, mY + 267);
        }
        ++j;
        for (i = 0; i < 2; ++i)
        {
            if (mPLAY.mWorldInfo.mProvingGroundsState[j] && GIMAGE2D::CheckIn( &mGDATA.mUI_MAIN[mPLAY.mWorldInfo.mProvingGroundsState[j] + 3754], mX + 25 * i + 539, mY + 288, uX, uY))
            {
                GIMAGE2D::Display( &mGDATA.mUI_MAIN[mPLAY.mWorldInfo.mProvingGroundsState[j] + 3758], mX + 25 * i + 539, mY + 288);
            }
            ++j;
        }
        if (mIsClick[0])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1601], mX + 269, mY + 535);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1600], mX + 269, mY + 535, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1600], mX + 269, mY + 535);
        }

        strcpy(String, "");
        ZeroMemory(String2, sizeof(String2));
        ZeroMemory(buf, sizeof(buf));
        mZONEMAININFO.GetLevelBattlerZoneNumber(&i, &j);
        if (i)
        {
            if (i == 1)
            {
                _itoa(mPLAY.mWorldInfo.mZone051TypeStateTime[j], String2, 10);
            }
            else if (i == 2)
            {
                _itoa(mPLAY.mWorldInfo.mZone053TypeStateTime[j], String2, 10);
            }
        }
        else
        {
            _itoa(mPLAY.mWorldInfo.mZone049TypeStateTime[j], String2, 10);
        }
        if (strlen(String2))
        {
            tstrlen = strlen(String2);
            strcpy(String, "");
            //for (k = 0; k < (4 - tstrlen); ++k)
            for (k = 0; k < 4; ++k)
                String[k] = '0';
            //index = 4 - tstrlen;
            index = 4;
            v37 = 0;
            while (index < 4)
                String[index++] = String2[index++];
            strcpy(String2, String);
        }
        else
        {
            strcpy(String2, "0000");
        }
        buf[0] = String2[0];
        buf[1] = String2[1];
        buf[2] = '\0';
        buf[3] = String2[2];
        buf[4] = String2[3];
        buf[5] = '\0';
        tstr = mMESSAGE.Return(1310);
        tstr2 = mMESSAGE.Return(1309);
        sprintf(String, "%s %s %s %s", &buf[0], tstr2, &buf[3], tstr);
        mUTIL.DrawFont2D(String, mX + 559, mY + 137, 1);
        _itoa(mPLAY.mWorldInfo.mZone038WinDate, String2, 10);
        if (strlen(String2) != 4)
            strcpy(String2, "0000");
        ZeroMemory(buf, sizeof(buf));
        buf[0] = String2[0];
        buf[1] = String2[1];
        buf[2] = '\0';
        buf[3] = String2[2];
        buf[4] = String2[3];
        buf[5] = '\0';
        tstr = mMESSAGE.Return(1310);
        tstr2 = mMESSAGE.Return(1309);
        sprintf(String, "%s %s %s %s", &buf[0], tstr2, &buf[3], tstr);
        mUTIL.DrawFont2D(String, mX + 559, mY + 166, 1);
        _itoa(mPLAY.mWorldInfo.mMonsterSymbolDate, String2, 10);
        if (strlen(String2) != 4)
            strcpy(String2, "0000");
        ZeroMemory(buf, sizeof(buf));
        buf[0] = String2[0];
        buf[1] = String2[1];
        buf[2] = '\0';
        buf[3] = String2[2];
        buf[4] = String2[3];
        buf[5] = '\0';
        tstr = mMESSAGE.Return(1310);
        tstr2 = mMESSAGE.Return(1309);
        sprintf(String, "%s %s %s %s", &buf[0], tstr2, &buf[3], tstr);
        mUTIL.DrawFont2D(String, mX + 559, mY + 195, 1);
        sprintf(String, "%s", mPLAY.mWorldInfo.mHoldingGuild);
        mUTIL.DrawFont2D(String, mX + 232, mY + 461, 1);
        sprintf(String, "%s", mPLAY.mWorldInfo.mChallangeGuild);
        mUTIL.DrawFont2D(String, mX + 232, mY + 507, 1);
        sprintf(String, "%s(%d)", mPLAY.mWorldInfo.mGuildRankName[0], mPLAY.mWorldInfo.mGuildRankPoints[0]);
        mUTIL.DrawFont2D(String, mX + 456, mY + 461, 1);
        sprintf(String, "%s(%d)", mPLAY.mWorldInfo.mGuildRankName[1], mPLAY.mWorldInfo.mGuildRankPoints[1]);
        mUTIL.DrawFont2D(String, mX + 456, mY + 484, 1);
        sprintf(String, "%s(%d)", mPLAY.mWorldInfo.mGuildRankName[2], mPLAY.mWorldInfo.mGuildRankPoints[2]);
        mUTIL.DrawFont2D(String, mX + 456, mY + 507, 1);
    }
}
int TRIBEUI::DrawForRollOver(int uX, int uY)
{
    return 0;
}





TRIBEBANKUI mTRIBEBANKUI;

BOOL TRIBEBANKUI::Init()
{
    mActive = 0;
    return TRUE;
}

void TRIBEBANKUI::InitForEnterZone()
{
    mActive = 0;
}
void TRIBEBANKUI::Set()
{
    int i;

    if (mUTIL.CheckInfiniteBattleZone())
    {
        mBASICUI.Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
        return;
    }
    if (mMYINFO.uUserSort >= 1 || mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe))
    {
        mActive = 1;
        for (i = 0; i < 51; ++i)
        {
            mIsClick[i] = 0;
        }
        for (i = 0; i < 50; ++i)
        {
            mSilverValue[i] = 0;
        }
        mTRANSFER.T_TRIBE_BANK_SEND(1, 0);
        return;
    }
    else
    {
        mBASICUI.Insert1(mMESSAGE.Return(384), mFONTCOLOR.mData[44]);
    }
}
void TRIBEBANKUI::Off()
{
    if (mActive)
        mActive = 0;
}
BOOL TRIBEBANKUI::LBUTTONDOWN( int uX, int uY )
{
    int sX; 
    int sY;
    int i; 

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2127]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2127]) / 2;
    for (i = 0; i < 50; ++i)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2128], mX + 185 * (i % 5) + 140, mY + 35 * (i / 5) + 57, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[i] = 1;
            return 1;
        }
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1600], mX + 401, mY + 413, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[50] = 1;
        return 1;
    }
    return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2127], mX, mY, uX, uY);
   
}
int TRIBEBANKUI::LBUTTONUP( int uX, int uY )
{
    int sX;
    int sY;
    int i;

    if (!mActive)
    {
        return 0;
    }
    if (mMAIN.mWorldIndex == 40)
    {
        mBASICUI.Insert1(mMESSAGE.Return(110), mFONTCOLOR.mData[44]);
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2127]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2127]) / 2;

    for (i = 0; i < 50; ++i)
    {
        if (mIsClick[i])
        {
            mIsClick[i] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2128], mX + 185 * (i % 5) + 140, mY + 35 * (i / 5) + 57, uX, uY))
            {
                return 1;
            }
            if (mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) != 1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(636), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mPLAY.ReturnTribeSubMasterNum(mMYINFO.mAvatarInfo.aTribe) < 3)
            {
                mBASICUI.Insert1(mMESSAGE.Return(637), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mSilverValue[i] < 1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(638), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (mUTIL.CheckOverMaximum(mMYINFO.mAvatarInfo.aMoney, mSilverValue[i]))
            {
                mBASICUI.Insert1(mMESSAGE.Return(639), mFONTCOLOR.mData[44]);
                return 1;
            }
            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
            {
                mTRANSFER.T_TRIBE_BANK_SEND(2, i);
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
                return 1;
            }
            return 1;
        }
    }
    if (mIsClick[50])
    {
        mIsClick[50] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1600], mX + 401, mY + 413, uX, uY))
        {
            TRIBEBANKUI::Off();
        }
        return 1;
    }

    return FALSE;
}
int TRIBEBANKUI::RBUTTONDOWN(int uX, int uY)
{
    return 0;
}
int TRIBEBANKUI::RBUTTONUP(int uX, int uY)
{
    return 0;
}
int TRIBEBANKUI::KEYBOARD()
{
    return 0;
}
void TRIBEBANKUI::Draw( int uX, int uY )
{
    int sX, sY, len;
    char* str;
    int i, j, k;
    char String[1000];
    int v8, tDisplaySort;

    if (mActive)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2127]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2127]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2127], mX, mY, uX, uY))
        {
            mPOINTER.Set(0);
        }
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[2127], mX, mY);
        for (i = 0; i < 50; ++i)
        {
            mUTIL.ChangeMoneyToString(mSilverValue[i], String, &tDisplaySort);
            v8 = tDisplaySort;
            sY = mY + 35 * (i / 5) + 63;
            sX = mX + 185 * (i % 5) + 129;
            len = mUTIL.GetStringLength(String);
            mUTIL.DrawFont2D(String, sX - len, sY, v8);
            if (mIsClick[i])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2128], mX + 185 * (i % 5) + 140, mY + 35 * (i / 5) + 57);
            }
        }
        if (mIsClick[50])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1601], mX + 401, mY + 413);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1600], mX + 401, mY + 413, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1600], mX + 401, mY + 413);
        }
    }
}
int TRIBEBANKUI::DrawForRollOver(int uX, int uY)
{
    return 0;
}






AVATARUI mAVATARUI;

BOOL AVATARUI::Init()
{
    mActive = 0;
    return TRUE;
}

void AVATARUI::InitForEnterZone()
{
    mActive = 0;
}
void AVATARUI::Set( char* tName, int tLevel1, int tLevel2, int tTribe )
{
    char* v5;
    int v6; 
    int i;

    if (mUTIL.CheckInfiniteBattleZone())
    {
        v6 = mFONTCOLOR.mData[44];
        v5 = mMESSAGE.Return(1352);
        mBASICUI.Insert1(v5, v6);
    }
    else
    {
        mUI.Off(1);
        mActive = 1;
        for (i = 0; i < 9; ++i)
            mIsClick[i] = 0;
        mState = 1;
        strcpy(mAvatarName, tName);
        mLevel1 = tLevel1;
        mLevel2 = tLevel2;
        mTribe = tTribe;
    }
}
void AVATARUI::Off()
{
    if (mActive)
        mActive = 0;
}
int AVATARUI::LBUTTONDOWN( int uX, int uY )
{
    int sX;
    int sY;

    if (!mActive)
    {
        return 0;
    }
    if (mState == 1)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[406]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[406]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[453], mX + 12, mY + 28, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[517], mX + 12, mY + 54, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1911], mX + 12, mY + 80, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[2] = 1;
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1628], mX + 12, mY + 106, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[3] = 1;
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[441], mX + 12, mY + 132, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[4] = 1;
            return 1;
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[444], mX + 12, mY + 158, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[5] = 1;
            return 1;
        }
        else
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[423], mX + 12, mY + 184, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[6] = 1;
            }
            return 1;
        }
    }
    else if (mState == 2)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2462]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2462]) / 2;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2463], mX + 165, mY + 90, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[7] = 1;
            return 1;
        }
        else
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2465], mX + 241, mY + 90, uX, uY))
            {
                GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
                mIsClick[8] = 1;
            }
            return 1;
        }
    }

    return 1;
}
int AVATARUI::LBUTTONUP( int uX, int uY )
{
    int sX, sY;
    int strlen;
    int i, j, k;


    if (!mActive)
    {
        return FALSE;
    }
    if (mState == 1)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[406]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[406]) / 2;
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[453], mX + 12, mY + 28, uX, uY))
            {
                mState = 2;
            }
            return 1;
        }
        if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[517], mX + 12, mY + 54, uX, uY))
            {
                AVATARUI::Off();
                if (!AVATARUI::CheckProcessAvatarExist())
                {
                    mBASICUI.Insert1(mMESSAGE.Return(361), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (mMYINFO.mPresentZoneNumber == 37 || mMYINFO.mPresentZoneNumber == 119 || mMYINFO.mPresentZoneNumber == 124 || mMYINFO.mAvatarInfo.aTribe == mTribe || mMYINFO.mAvatarInfo.aTribe == mPLAY.ReturnAlliance(mTribe))
                {
                    if (mMYINFO.mAvatarInfo.aLevel1 >= 10)
                    {
                        mTRANSFER.T_TRADE_ASK_SEND(mAvatarName);
                        mMBOXUI.Set(5, mMESSAGE.Return(357), "");
                    }
                    else
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(1135), mFONTCOLOR.mData[44]);
                    }
                    return 1;
                }
                else
                {
                    mBASICUI.Insert1(mMESSAGE.Return(366), mFONTCOLOR.mData[44]);
                }
            }
            return 1;
        }
        if (mIsClick[2])
        {
            mIsClick[2] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1911], mX + 12, mY + 80, uX, uY))
            {
                AVATARUI::Off();
                if (AVATARUI::CheckProcessAvatarExist())
                {
                    for (i = 0; i < 10; ++i)
                    {
                        if(strcmp(mMYINFO.mAvatarInfo.aFriend[i], ""))
                        {
                            continue;
                        }
                        break;
                    }
                    if (i == 10)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(490), mFONTCOLOR.mData[44]);
                        return 1;
                    }
                    for (j = 0; j < 10; ++j)
                    {
                        if (strcmp(mMYINFO.mAvatarInfo.aFriend[j], mAvatarName))
                        {
                            continue;
                        }
                        break;
                    }
                    if (j != 10)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(531), mFONTCOLOR.mData[44]);
                        return 1;
                    }
                    if (mMYINFO.mAvatarInfo.aTribe == mTribe)
                    {
                        mTRANSFER.T_FRIEND_ASK_SEND(mAvatarName);
                        mMBOXUI.Set(6, mMESSAGE.Return(491), "");
                    }
                    else
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(366), mFONTCOLOR.mData[44]);
                    }
                    return 1;
                }
                else
                {
                    mBASICUI.Insert1(mMESSAGE.Return(361), mFONTCOLOR.mData[44]);
                }
            }
            return 1;
        }
        if (mIsClick[3])
        {
            mIsClick[3] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1628], mX + 12, mY + 106, uX, uY))
            {
                AVATARUI::Off();
                if (mMAIN.mWorldIndex == 40)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(110), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (!AVATARUI::CheckProcessAvatarExist())
                {
                    mBASICUI.Insert1(mMESSAGE.Return(361), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (mMYINFO.mAvatarInfo.aLevel1 < 113)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(502), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (strcmp(mMYINFO.mAvatarInfo.aTeacher, ""))
                {
                    mBASICUI.Insert1(mMESSAGE.Return(503), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (strcmp(mMYINFO.mAvatarInfo.aStudent, ""))
                {
                    mBASICUI.Insert1(mMESSAGE.Return(504), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (mMYINFO.mAvatarInfo.aTribe == mTribe)
                {
                    if (mMYINFO.mAvatarInfo.aLevel2 >= 1)
                    {
                        if (mLevel2 >= mMYINFO.mAvatarInfo.aLevel2)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(1432), mFONTCOLOR.mData[44]);
                            return 1;
                        }
                    }
                    else if (mLevel1 >= mMYINFO.mAvatarInfo.aLevel1)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(1433), mFONTCOLOR.mData[44]);
                        return 1;
                    }
                    mTRANSFER.T_TEACHER_ASK_SEND(mAvatarName);
                    mMBOXUI.Set(9, mMESSAGE.Return(506), "");
                    return 1;
                }
                else
                {
                    mBASICUI.Insert1(mMESSAGE.Return(366), mFONTCOLOR.mData[44]);
                }
            }
            return 1;
        }
        if (mIsClick[4])
        {
            mIsClick[4] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[441], mX + 12, mY + 132, uX, uY))
            {
                AVATARUI::Off();
                if (!AVATARUI::CheckProcessAvatarExist())
                {
                    mBASICUI.Insert1(mMESSAGE.Return(361), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (mMYINFO.mPresentZoneNumber == 324)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(372), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
                {
                    if (strcmp(mMYINFO.mAvatarInfo.aPartyName, mMYINFO.mAvatarInfo.aName))
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(384), mFONTCOLOR.mData[44]);
                        return 1;
                    }
                    for (k = 1; k < 5; ++k)
                    {
                        if (strcmp(mMYINFO.mPartyInfo[k], ""))
                        {
                            continue;
                        }
                        break;
                    }
                    if (k == 5)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(367), mFONTCOLOR.mData[44]);
                        return 1;
                    }
                }
                if (AVATARUI::CheckProcessAvatarParty())
                {
                    mBASICUI.Insert1(mMESSAGE.Return(347), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (mMYINFO.mAvatarInfo.aTribe != mTribe && mMYINFO.mAvatarInfo.aTribe != mPLAY.ReturnAlliance(mTribe))
                {
                    mBASICUI.Insert1(mMESSAGE.Return(366), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (mLevel2 >= 1)
                {
                    if (mMYINFO.mAvatarInfo.aLevel2 >= 1)
                    {
                        mTRANSFER.T_PARTY_ASK_SEND(mAvatarName);
                        mMBOXUI.Set(7, mMESSAGE.Return(359), "");
                        return 1;
                    }
                }
                else if (mMYINFO.mAvatarInfo.aLevel2 <= 0 && abs(mMYINFO.mAvatarInfo.aLevel1 - mLevel1) <= 9)
                {
                    mTRANSFER.T_PARTY_ASK_SEND(mAvatarName);

                    mMBOXUI.Set(7, mMESSAGE.Return(359), "");
                    return 1;
                }
                else
                {
                    mBASICUI.Insert1(mMESSAGE.Return(348), mFONTCOLOR.mData[44]);
                }
            }
            return 1;
        }
        if (mIsClick[5])
        {
            mIsClick[5] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[444], mX + 12, mY + 158, uX, uY))
            {
                AVATARUI::Off();
                if (!AVATARUI::CheckProcessAvatarExist())
                {
                    mBASICUI.Insert1(mMESSAGE.Return(361), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (strcmp(mMYINFO.mAvatarInfo.aGuildName, "") && (!mMYINFO.mAvatarInfo.aGuildRole || mMYINFO.mAvatarInfo.aGuildRole == 1))
                {
                    if (AVATARUI::CheckProcessAvatarGuild())
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(405), mFONTCOLOR.mData[44]);
                    }
                    else
                    {
                        if (mMYINFO.mAvatarInfo.aTribe == mTribe)
                        {
                            mTRANSFER.T_GUILD_ASK_SEND(mAvatarName);
                            mMBOXUI.Set(8, mMESSAGE.Return(397), "");
                        }
                        else
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(406), mFONTCOLOR.mData[44]);
                        }
                        return 1;
                    }
                    return 1;
                }
                else
                {
                    mBASICUI.Insert1(mMESSAGE.Return(384), mFONTCOLOR.mData[44]);
                    return 1;
                }
            }
            return 1;
        }
        if (mIsClick[6])
        {
            mIsClick[6] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[423], mX + 12, mY + 184, uX, uY))
            {
                AVATARUI::Off();
            }
            return 1;
        }
    }
    else if(mState == 2)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2462]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2462]) / 2;
        if (mIsClick[7])
        {
            mIsClick[7] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2463], mX + 165, mY + 90, uX, uY))
            {
                AVATARUI::Off();
                if (!AVATARUI::CheckProcessAvatarExist())
                {
                    mBASICUI.Insert1(mMESSAGE.Return(361), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (mPLAY.mAVATAR_OBJECT[0].mDATA.aDuelState[0])
                {
                    mBASICUI.Insert1(mMESSAGE.Return(489), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (mMYINFO.mPresentZoneNumber == 37 || mMYINFO.mPresentZoneNumber == 119 || mMYINFO.mPresentZoneNumber == 124 || mMYINFO.mAvatarInfo.aTribe == mTribe || mMYINFO.mAvatarInfo.aTribe == mPLAY.ReturnAlliance(mTribe))
                {
                    mTRANSFER.T_DUEL_ASK_SEND(mAvatarName, 2);
                    mMBOXUI.Set(4, mMESSAGE.Return(356), "");
                    return 1;
                }
                else
                {
                    mBASICUI.Insert1(mMESSAGE.Return(366), mFONTCOLOR.mData[44]);
                }
            }
            
            return 1;
        }
        if ( mIsClick[8] )
        {
            mIsClick[8] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2465], mX + 241, mY + 90, uX, uY))
            {
                AVATARUI::Off();
                if (!AVATARUI::CheckProcessAvatarExist())
                {
                    mBASICUI.Insert1(mMESSAGE.Return(361), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (mPLAY.mAVATAR_OBJECT[0].mDATA.aDuelState[0])
                {
                    mBASICUI.Insert1(mMESSAGE.Return(489), mFONTCOLOR.mData[44]);
                    return 1;
                }
                if (mMYINFO.mPresentZoneNumber != 37 && mMYINFO.mPresentZoneNumber != 119 && mMYINFO.mPresentZoneNumber != 124 && mMYINFO.mAvatarInfo.aTribe != mTribe && mMYINFO.mAvatarInfo.aTribe != mPLAY.ReturnAlliance(mTribe))
                {
                    mBASICUI.Insert1(mMESSAGE.Return(366), mFONTCOLOR.mData[44]);
                    return 1;
                }
                mTRANSFER.T_DUEL_ASK_SEND(mAvatarName, 1);
                mMBOXUI.Set(4, mMESSAGE.Return(356), "");
            }
            return 1;
        }
    }
}

BOOL AVATARUI::RBUTTONDOWN( int uX, int uY)
{
    return mActive != 0;
}
BOOL AVATARUI::RBUTTONUP( int uX, int uY)
{
    return mActive != 0;
}
BOOL AVATARUI::KEYBOARD()
{
    int i;

    if (!mActive)
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
        return 1;
    }
    if (mGXD.mKeyboardBufferedData[i].dwOfs == 1)
    {
        AVATARUI::Off();
    }
    return 1;
}
void AVATARUI::Draw( int uX, int uY )
{
    int v3; 
    int v4; 
    int v5; 
    int v6; 

    if (mActive)
    {
        v3 = mMYINFO.mScreenXSize / 2;
        mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[406]) / 2;
        v4 = mMYINFO.mScreenYSize / 2;
        mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[406]) / 2;
        mPOINTER.Set(0);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[406], mX, mY);
        if (mIsClick[0])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[455], mX + 12, mY + 28);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[453], mX + 12, mY + 28, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[454], mX + 12, mY + 28);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[453], mX + 12, mY + 28);
        }
        if (mIsClick[1])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[519], mX + 12, mY + 54);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[517], mX + 12, mY + 54, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[518], mX + 12, mY + 54);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[517], mX + 12, mY + 54);
        }
        if (mIsClick[2])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1913], mX + 12, mY + 80);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1911], mX + 12, mY + 80, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1912], mX + 12, mY + 80);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1911], mX + 12, mY + 80);
        }
        if (mIsClick[3])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[1630], mX + 12, mY + 106);
        }
        else if (mMAIN.mWorldIndex != 40)
        {
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1628], mX + 12, mY + 106, uX, uY))
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1629], mX + 12, mY + 106);
            else
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1628], mX + 12, mY + 106);
        }
        if (mIsClick[4])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[443], mX + 12, mY + 132);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[441], mX + 12, mY + 132, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[442], mX + 12, mY + 132);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[441], mX + 12, mY + 132);
        }
        if (mIsClick[5])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[446], mX + 12, mY + 158);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[444], mX + 12, mY + 158, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[445], mX + 12, mY + 158);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[444], mX + 12, mY + 158);
        }
        if (mIsClick[6])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[425], mX + 12, mY + 184);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[423], mX + 12, mY + 184, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[424], mX + 12, mY + 184);
        }
        else
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[423], mX + 12, mY + 184);
        }
        if (mState == 2)
        {
            v5 = mMYINFO.mScreenXSize / 2;
            mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2462]) / 2;
            v6 = mMYINFO.mScreenYSize / 2;
            mY = v6 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2462]) / 2;
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[2462], mX, mY);
            if (mIsClick[7])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2464], mX + 165, mY + 90);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2463], mX + 165, mY + 90, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2463], mX + 165, mY + 90);
            }
            if (mIsClick[8])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2466], mX + 241, mY + 90);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2465], mX + 241, mY + 90, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[2465], mX + 241, mY + 90);
            }
        }
    }
}
BOOL AVATARUI::DrawForRollOver( int uX, int uY )
{
    return mActive != 0;
}
BOOL AVATARUI::CheckProcessAvatarExist()
{
    int i;

    for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || !mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState || strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aName, mAvatarName)); ++i)
    {
        ;
    }
    return i < mPLAY.MAX_AVATAR_OBJECT;
}
BOOL AVATARUI::CheckProcessAvatarParty()
{
    BOOL result;
    int i;

    for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || !mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState || strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aName, mAvatarName)); ++i)
    {
        ;
    }
    if (i >= mPLAY.MAX_AVATAR_OBJECT)
        result = 0;
    else
        result = strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aPartyName, "") != 0;

    return result;
}
BOOL AVATARUI::CheckProcessAvatarGuild()
{
    BOOL result;
    int i;

    for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT && (!mPLAY.mAVATAR_OBJECT[i].mCheckValidState || !mPLAY.mAVATAR_OBJECT[i].mDATA.aVisibleState || strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aName, mAvatarName)); ++i)
    {
        ;
    }
    if (i >= mPLAY.MAX_AVATAR_OBJECT)
        result = 0;
    else
        result = strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aGuildName, "") != 0;

    return result;
}





TRADEUI mTRADEUI;

BOOL TRADEUI::Init()
{
    mActive = 0;
    return TRUE;
}

void TRADEUI::InitForEnterZone()
{
    mActive = 0;
}
void TRADEUI::Set( int tTradeMoney, int tTrade[8][4], int tTradeSocket[8][5], int tTradeMoney2 )
{
    char* v5; 
    int v6; 
    int i; 
    int j;

    if (mUTIL.CheckInfiniteBattleZone())
    {
        mBASICUI.Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
    }
    else
    {
        mUI.Off(1);
        mActive = 1;
        for (i = 0; i < 2; ++i)
        {
            mIsClick[i] = 0;
        }
        mTradeMoney = tTradeMoney;
        mTradeMoney2 = tTradeMoney2;
        for (j = 0; j < 8; ++j)
        {
            mTradeItem[j][0] = tTrade[j][0];
            mTradeItem[j][1] = tTrade[j][1];
            mTradeItem[j][2] = tTrade[j][2];
            mTradeItem[j][3] = tTrade[j][3];
            mTradeSocket[j][0] = tTradeSocket[j][0];
            mTradeSocket[j][1] = tTradeSocket[j][1];
            mTradeSocket[j][2] = tTradeSocket[j][2];
            mTradeSocket[j][3] = tTradeSocket[j][3];
            mTradeSocket[j][4] = tTradeSocket[j][4];
        }
        mOwnTradeState = 0;
        mOtherTradeState = 0;
        mINVENUI.Set();
        mINVENUI.mInvenSort = 3;
    }
}
void TRADEUI::Off( int tSort )
{
    if (mActive)
    {
        mActive = 0;
        if (tSort == 1)
        {
            mTRANSFER.T_TRADE_END_SEND();
        }
    }
}
int TRADEUI::LBUTTONDOWN( int uX, int uY )
{
    int sX; 

    if (!mActive)
    {
        return 0;
    }
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[601]);
    mY = mY;

    if (mINVENUI.LBUTTONDOWN(uX, uY))
    {
        return 1;
    }
    if (mOwnTradeState == 0)
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[602], mX + 174, mY + 246, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
            return 1;
        }
        return 1;
    }
    if (mOwnTradeState == 1 )
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[604], mX + 174, mY + 246, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[0] = 1;
            return 1;
        }
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            mIsClick[1] = 1;
            return 1;
        }
        return 1;
    }
    return 1;
}
int TRADEUI::LBUTTONUP( int uX, int uY )
{
    int sX; 

    if (!mActive)
    {
        return 0;
    }
    mMYINFO.AdjustScreenCoord( 299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[601]);
    mY = mY;
    if (mINVENUI.LBUTTONUP(uX, uY))
    {
        return 1;
    }

    if (mOwnTradeState == 0)
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[602], mX + 174, mY + 246, uX, uY))
            {
                mTRANSFER.T_TRADE_MENU_SEND();
            }
            return 1;
        }
        if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                mINVENUI.Off();
                TRADEUI::Off(1);
            }
            return 1;
        }
        return 1;
    }
    if (mOwnTradeState == 1)
    {
        if (mIsClick[0])
        {
            mIsClick[0] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[604], mX + 174, mY + 246, uX, uY))
            {
                if (mOtherTradeState)
                {
                    mTRANSFER.T_TRADE_MENU_SEND();
                }
                else
                {
                    mBASICUI.Insert1(mMESSAGE.Return(643), mFONTCOLOR.mData[44]);
                }
            }
            return 1;
        }
        if (mIsClick[1])
        {
            mIsClick[1] = 0;
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
            {
                mINVENUI.Off();
                TRADEUI::Off(1);
            }
            return 1;
        }
        return 1;
    }
}
BOOL TRADEUI::RBUTTONDOWN( int uX, int uY)
{
    return mActive != 0;
}
BOOL TRADEUI::RBUTTONUP( int uX, int uY)
{
    return mActive != 0;
}
int TRADEUI::KEYBOARD()
{
    int i;

    if (!mActive)
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
        return 1;
    }
    if (mGXD.mKeyboardBufferedData[i].dwOfs == 1)
    {
        TRADEUI::Off(1);
    }
    return 1;
}
void TRADEUI::Draw( int uX, int uY )
{
    int sX, sY, tstrlen, i, j, k;
    char* tstr;
    char String[1000];
    ITEM_INFO* tITEM;
    int i2d, isort;
    int tDisplaySort;
    int v19, v18;

    if (mActive)
    {
        mMYINFO.AdjustScreenCoord( 299, 764, 182, &mX, &mY);
        sX = mX + 23;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[601]);
        mY = mY;
        mPOINTER.Set(0);
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[601], mX, mY);
        sprintf(String, "%s", mAvatarName);
        sY = mY + 33;
        sX = mX + 52;
        tstrlen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 40);
        if (mLevel >= 113)
        {
            if (mLevel > 145)
            {
                tstr = mMESSAGE.Return(889);
                sprintf(String, "(%d%s)", mLevel - 145, tstr);
            }
            else
            {
                tstr = mMESSAGE.Return(323);
                sprintf(String, "(%d%s)", mLevel - 112, tstr);
            }
        }
        else
        {
            tstr = mMESSAGE.Return(322);
            sprintf(String, "(%d%s)", mLevel, tstr);
        }
        mUTIL.DrawFont2D(String, mX + 107, mY + 35, 3);
        for (i = 0; i < 8; ++i)
        {
            if (mTradeItem[i][0] >= 1)
            {
                tITEM = mITEM.Search(mTradeItem[i][0]);
                if (!tITEM)
                {
                    continue;
                }
                i2d = tITEM->iDataNumber2D - 1;
                isort = tITEM->iSort;
                if (isort == 2 || isort == 7 || isort == 11)
                {
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2d], mX + 52 * (i % 4) + 24, mY + 52 * (i / 4) + 70);
                }
                else
                {
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2d], mX + 52 * (i % 4) + 11, mY + 52 * (i / 4) + 57);
                }
                switch (tITEM->iSort)
                {
                case 2:
                    if (mTradeItem[i][1] > 0)
                    {
                        sprintf(String, "%d", mTradeItem[i][1]);
                        mUTIL.DrawFont2D(String, mX + 52 * (i % 4) + 38, mY + 52 * (i / 4) + 84, 1);
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
                    if (!mINVENUI.CheckPossibleEquip(tITEM, -1))
                    {
                        GIMAGE2D::Display(&mGDATA.mUI_MAIN[304], mX + 52 * (i % 4) + 11, mY + 52 * (i / 4) + 57);
                    }
                    break;
                default:
                    continue;
                }
            }
        }
        mUTIL.ChangeMoneyToString(mTradeMoney, String, &tDisplaySort);
        sY = mY + 182;
        sX = mX + 211;
        tstrlen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tstrlen, sY, tDisplaySort);

        mUTIL.ChangeMoneyToString(mTradeMoney2, String, &tDisplaySort);
        sY = mY + 182;
        sX = mX + 91;
        tstrlen = mUTIL.GetStringLength(String);
        mUTIL.DrawFont2D(String, sX - tstrlen, sY, tDisplaySort);

        if (mOtherTradeState == 1)
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[607], mX + 174, mY + 27);
        }
        else if (mOtherTradeState == 2)
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[608], mX + 174, mY + 27);
        }

        if (mOwnTradeState == 1)
        {
            if (mIsClick[0])
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[606], mX + 174, mY + 246);
            }
            else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[604], mX + 174, mY + 246, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[605], mX + 174, mY + 246);
            }
            else
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[604], mX + 174, mY + 246);
            }
        }
        else if (mOwnTradeState == 2)
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[608], mX + 174, mY + 246);
        }
        else if (mIsClick[0])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[603], mX + 174, mY + 246);
        }
        else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[602], mX + 174, mY + 246, uX, uY))
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[602], mX + 174, mY + 246);
        }
        if (mIsClick[1])
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
        }
    }
}
int TRADEUI::DrawForRollOver( int uX, int uY )
{
    int tIndex; 

    if (!mActive)
    {
        return 0;
    }
    if (mINVENUI.DrawForRollOver(uX, uY))
    {
        return 1;
    }
    tIndex = TRADEUI::GetTradeIndex0(uX, uY, -1);
    if (tIndex != -1)
    {
        mINVENUI.DrawItemInfo( uX, uY, mTradeItem[tIndex][0], mTradeItem[tIndex][1], mTradeItem[tIndex][2], 1, mTradeSocket[tIndex][0], mTradeSocket[tIndex][1], mTradeSocket[tIndex][2], mTradeSocket[tIndex][3], mTradeSocket[tIndex][4], 0);
    }
    return 1;
}
int TRADEUI::GetTradeIndex0( int uX, int uY, int tIndex )
{
    int sX;
    int i; 

    if (!mActive)
    {
        return -1;
    }
    mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
    sX = mX + 23;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[601]);
    mY = mY;
    for (i = 0; i < 8; i++)
    {
        if (i == tIndex || uX < mX + 52 * (i % 4) + 11 || uX > mX + 52 * (i % 4) + 61 || uY < mY + 52 * (i / 4) + 57 || uY > mY + 52 * (i / 4) + 107)
        {
            continue;
        }
        break;
    }
    if (i == 8)
    {
        return -1;
    }
    if (mTradeItem[i][0] <= 0)
    {
        return -1;
    }
    return i;
}






HERORANKUI mHERORANKUI;

BOOL HERORANKUI::Init()
{
    mActive = 0;
    return TRUE;
}

void HERORANKUI::Set()
{
    int i;

    mActive = 1;
    for (i = 0; i < 2; ++i)
        mIsClick[i] = 0;
    if (mPLAY.mAVATAR_OBJECT[0].mHeroRankRemainTimeBeforeUpdate <= 0.0)
    {
        mPLAY.mAVATAR_OBJECT[0].mHeroRankRemainTimeBeforeUpdate = 10.0;
        mTRANSFER.T_DEMAND_HERO_RANK_SEND();
    }
}
void HERORANKUI::Off()
{
    if (mActive)
        mActive = 0;
}
void HERORANKUI::InitForEnterZone()
{
    mActive = 0;
}
int HERORANKUI::LBUTTONDOWN( int uX, int uY )
{
    int sX; 
    int sY; 

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3709]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3709]) / 2;
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 724, mY + 6, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[0] = 1;
        return 1;
    }
    else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3710], mX + 312, mY + 441, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mIsClick[1] = 1;
        return 1;
    }

    return 0;
}
int HERORANKUI::LBUTTONUP( int uX, int uY )
{
    int sX;
    int sY; 

    if (!mActive)
    {
        return 0;
    }
    sX = mMYINFO.mScreenXSize / 2;
    mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3709]) / 2;
    sY = mMYINFO.mScreenYSize / 2;
    mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3709]) / 2;
    if (mIsClick[0])
    {
        mIsClick[0] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 724, mY + 6, uX, uY))
        {
            HERORANKUI::Off();
        }
        return 1;
    }
    else if (mIsClick[1])
    {
        mIsClick[1] = 0;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3710], mX + 312, mY + 441, uX, uY))
        {
            mTRANSFER.T_HERO_RANK_REWARD_CLAIM_SEND();
        }
        return 1;
    }

    return 0;
}

int HERORANKUI::RBUTTONDOWN(int uX, int uY)
{
    return 0;
}
int HERORANKUI::RBUTTONUP(int uX, int uY)
{
    return 0;
}
int HERORANKUI::KEYBOARD()
{
    return 0;
}
void HERORANKUI::Draw( int uX, int uY )
{
    int sX, sY, tstrlen, i, j, k;
    char* tstr;
    char String[1000];

    if (mActive)
    {
        sX = mMYINFO.mScreenXSize / 2;
        mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3709]) / 2;
        sY = mMYINFO.mScreenYSize / 2;
        mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3709]) / 2;
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3709], mX, mY);
        for (i = 0; i < 10; ++i)
        {
            sprintf(String, "%s", mPLAY.tOldHeroRankNames[mMYINFO.mAvatarInfo.aTribe][i]);
            sY = mY + 33 * i + 112;
            sX = mX + 123;
            tstrlen = mUTIL.GetStringLength(String);
            mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 1);
        }
        for (i = 0; i < 10; ++i)
        {
            sprintf(String, "%d", mPLAY.tOldHeroRankPoints[mMYINFO.mAvatarInfo.aTribe][i]);
            sY = mY + 33 * i + 112;
            sX = mX + 282;
            tstrlen = mUTIL.GetStringLength(String);
            mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 1);
        }
        for (i = 0; i < 10; ++i)
        {
            sprintf(String, "%s", mPLAY.tCurrentHeroRankNames[mMYINFO.mAvatarInfo.aTribe][i]);
            sY = mY + 33 * i + 112;
            sX = mX + 495;
            tstrlen = mUTIL.GetStringLength(String);
            mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 1);
        }
        for (i = 0; i < 10; ++i)
        {
            sprintf(String, "%d", mPLAY.tCurrentHeroRankPoints[mMYINFO.mAvatarInfo.aTribe][i]);
            sY = mY + 33 * i + 112;
            sX = mX + 654;
            tstrlen = mUTIL.GetStringLength(String);
            mUTIL.DrawFont2D(String, sX - tstrlen / 2, sY, 1);
        }
        if (mIsClick[0])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 724, mY + 6);
        if (mIsClick[1])
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[3710], mX + 312, mY + 441);
    }
}
int HERORANKUI::DrawForRollOver( int uX, int uY )
{
    if (!mActive)
    {
        return 0;
    }
    if (!mIsClick[1] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3711], mX + 312, mY + 441, uX, uY))
    {
        GIMAGE2D::Display(&mGDATA.mUI_MAIN[3711], mX + 312, mY + 441);
        return 1;
    }

    return 0;
}