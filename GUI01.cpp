#include "gxdheader.h"

UI mUI;

BOOL UI::Init()
{
    /*if (!AUTOCHECKUI::Init())
        return 0;*/
    if (!mBOARDUI.Init())
        return 0;
    if (!mCHOICEUI.Init())
        return 0;
    if (!mMBOXUI.Init())
        return 0;
    if (!mCBOXUI.Init())
        return 0;
    if (!mTRIBENOTICEUI.Init())
        return 0;
    if (!mAUTOUI.Init())
        return 0;
    if (!mANIMALUI.Init())
        return 0;
    if (!mBONUSUI.Init())
        return 0;
    if (!mTRIBESKILL.Init())
        return 0;
    if (!mCOSTUMEUI.Init())
        return 0;
    if (!mTRADEUI.Init())
        return 0;
    if (!mPSHOPUI.Init())
        return 0;
    if (!mAVATARUI.Init())
        return 0;
    if (!mNPCUI.Init())
        return 0;
    if (!mSTATUSUI.Init())
        return 0;
    if (!mINVENUI.Init())
        return 0;
    if (!mSKILLUI.Init())
        return 0;
    if (!mQUESTUI.Init())
        return 0;
    if (!mPARTYUI.Init())
        return 0;
    if (!mFRIENDUI.Init())
        return 0;
    if (!mGUILDUI.Init())
        return 0;
    if (!mGAMEOPTIONUI.Init())
        return 0;
    if (!mHELPUI.Init())
        return 0;
    if (!mTRIBEUI.Init())
        return 0;
    if (!mTRIBEBANKUI.Init())
        return 0;
    if (!mTRIBEVOTEUI.Init())
        return 0;
    if (!mCInnerAuto.Init())
        return 0;
    if (!mBASICUI.Init())
        return 0;
    /*if (!SPECIALSHOPUI::Init())
        return 0;*/
    if (!mHOISUNDO_UI.Init())
        return 0;
    if (!mGUILD_RANKING_UI.Init())
        return 0;
    if (!mHSBRANKUI.Init())
        return 0;
    if (!mFACTIONNOTICEUI.Init())
        return 0;
    if (!mCAPSULEUI.Init())
        return 0;
    if (!mHERORANKUI.Init())
        return 0;
    if (!mTOWERBUILDUI.Init())
        return 0;
    if (!mBOOZEUI.Init())
        return 0;
    if (!mSPECIALSKILL.Init())
        return 0;

    return TRUE;
}

void UI::Free()
{

}

void UI::Draw()
{
    POINT tPosition;
    int mX;
    int mY;

    GetCursorPos(&tPosition);
    ScreenToClient(mAPP->hMainWindow, &tPosition);
    mX = tPosition.x;
    mY = tPosition.y;

    mBASICUI.Draw( mX, mY );
    mTRIBEVOTEUI.Draw(mX, mY);
    mTRIBEBANKUI.Draw(mX, mY);
    mTRIBEUI.Draw(mX, mY);
    mHELPUI.Draw(mX, mY);
    mGAMEOPTIONUI.Draw(mX, mY);
    mGUILDUI.Draw(mX, mY);
    mFRIENDUI.Draw(mX, mY);
    mPARTYUI.Draw(mX, mY);
    mQUESTUI.Draw(mX, mY);
    mCInnerAuto.Draw(mX, mY);
    mSKILLUI.Draw(mX, mY);
    mINVENUI.Draw( mX, mY );
    mSTATUSUI.Draw(mX, mY);
    mNPCUI.Draw(mX, mY);
    mAVATARUI.Draw(mX, mY);
    mPSHOPUI.Draw(mX, mY);
    mTRADEUI.Draw(mX, mY);
    mTRIBESKILL.Draw(mX, mY);
    mBONUSUI.Draw(mX, mY);
    mANIMALUI.Draw(mX, mY);
    mCOSTUMEUI.Draw(mX, mY);
    mAUTOUI.Draw(mX, mY);
    mTRIBENOTICEUI.Draw(mX, mY);
    mHOISUNDO_UI.Draw(mX, mY);
    mGUILD_RANKING_UI.Draw(mX, mY);
    //SPECIALSHOPUI::Draw(mX, mY);
    mHSBRANKUI.Draw(mX, mY);
    mFACTIONNOTICEUI.Draw(mX, mY);
    mCAPSULEUI.Draw(mX, mY);
    mHERORANKUI.Draw(mX, mY);
    mTOWERBUILDUI.Draw(mX, mY);
    mBOOZEUI.Draw(mX, mY);
    mSPECIALSKILL.Draw(mX, mY);
    mCBOXUI.Draw(mX, mY);
    mMBOXUI.Draw(mX, mY);
    mCHOICEUI.Draw(mX, mY);
    mBOARDUI.Draw(mX, mY);
   // NUMBERPINUI::Draw(mX, mY);
    mSPSHOP.Draw(mX, mY);
    #ifdef CONSTELLATION
    //mCONSTELLATIONUI.Draw(mX, mY);
    #endif
    UI::DrawForRollOver(mX, mY);

}

void UI::Off(int tSort)
{
    if (tSort)
    {
        mSTATUSUI.Off();
        mINVENUI.Off();
    }
    mSKILLUI.Off();
    mQUESTUI.Off();
    mPARTYUI.Off();
    mFRIENDUI.Off();
    mGUILDUI.Off();
    mGAMEOPTIONUI.Off();
    mHELPUI.Off();
    mTRIBEUI.Off();
    mTRIBEBANKUI.Off();
    mTRIBEVOTEUI.Off();
    mAUTOUI.Off();
    mBONUSUI.Off();
    mANIMALUI.Off();
    mTRIBESKILL.Off();
    mCOSTUMEUI.Off();
    //SPECIALSHOPUI::Off();
    mSKILLUI.Off();
    mCInnerAuto.mActive = 0;
    if (mEDITBOX.mDataIndex == 20)
        mEDITBOX.Set(0);
    mHOISUNDO_UI.Off();
    mGUILD_RANKING_UI.Off();
    mHSBRANKUI.Off();
    mCAPSULEUI.Off();
    mHERORANKUI.Off();
    mTOWERBUILDUI.Off();
    mMYINFO.mCheck319TypeTop20RankState = 0;
    mBOOZEUI.Off();
    mSPECIALSKILL.Off();
    mSPSHOP.Off();
}

BOOL UI::DrawForRollOver(int uX, int uY)
{
    /*if (AUTOCHECKUI::DrawForRollOver(uX, uY))
        return 1; */
    if (mBOARDUI.DrawForRollOver(uX, uY))
        return 1;
    if (mCHOICEUI.DrawForRollOver(uX, uY))
        return 1;
    if (mMBOXUI.DrawForRollOver(uX, uY))
        return 1;
    if (mCBOXUI.DrawForRollOver(uX, uY))
        return 1;
    if (mTRIBENOTICEUI.DrawForRollOver(uX, uY))
        return 1;
    if (mAUTOUI.DrawForRollOver(uX, uY))
        return 1;
    if (mANIMALUI.DrawForRollOver(uX, uY))
        return 1;
    if (mBONUSUI.DrawForRollOver(uX, uY))
        return 1;
    if (mTRIBESKILL.DrawForRollOver(uX, uY))
        return 1;
    if (mCOSTUMEUI.DrawForRollOver(uX, uY))
        return 1;
    if (mTRADEUI.DrawForRollOver(uX, uY))
        return 1;
    if (mPSHOPUI.DrawForRollOver(uX, uY))
        return 1;
    if (mAVATARUI.DrawForRollOver(uX, uY))
        return 1;
    if (mNPCUI.DrawForRollOver(uX, uY))
        return 1;
    if (mSTATUSUI.DrawForRollOver(uX, uY))
        return 1;
    if (mINVENUI.DrawForRollOver(uX, uY))
        return 1;
    if (mSKILLUI.DrawForRollOver(uX, uY))
        return 1;
    if (mQUESTUI.DrawForRollOver(uX, uY))
        return 1;
    if (mPARTYUI.DrawForRollOver(uX, uY))
        return 1;
    if (mFRIENDUI.DrawForRollOver(uX, uY))
        return 1;
    if (mGUILDUI.DrawForRollOver(uX, uY))
        return 1;
    if (mGAMEOPTIONUI.DrawForRollOver(uX, uY))
        return 1;
    if (mHELPUI.DrawForRollOver(uX, uY))
        return 1;
    if (mTRIBEUI.DrawForRollOver(uX, uY))
        return 1;
    if (mTRIBEBANKUI.DrawForRollOver(uX, uY))
        return 1;
    if (mTRIBEVOTEUI.DrawForRollOver(uX, uY))
        return 1;
    if (mBASICUI.DrawForRollOver(uX, uY))
        return 1;
    /*if (SPECIALSHOPUI::DrawForRollOver(uX, uY))
        return 1;*/
    if (mFACTIONNOTICEUI.DrawForRollOver(uX, uY))
        return 1;
    if (mCAPSULEUI.DrawForRollOver(uX, uY))
        return 1;
    if (mHERORANKUI.DrawForRollOver(uX, uY))
        return 1;
    if (mTOWERBUILDUI.DrawForRollOver(uX, uY))
        return 1;
    if (mBOOZEUI.DrawForRollOver(uX, uY))
        return 1;
    if (mSPECIALSKILL.DrawForRollOver(uX, uY))
        return 1;
    if (mSPSHOP.DrawForRollOver(uX, uY))
        return 1;
}

BOOL UI::LBUTTONDOWN(int uX, int uY)
{
    int sX, sY;
    char* tstr;

    if (mMAIN.mMainMode != 6 || mMAIN.mSubMode != 4)
        goto LABEL_112;
    if (uX > mEDITBOX.mEditBoxInfo[3][0] && uX < mEDITBOX.mEditBoxInfo[3][2] && uY > mEDITBOX.mEditBoxInfo[3][1] && uY < mEDITBOX.mEditBoxInfo[3][3])
    {
        mEDITBOX.Set(4);
        return 1;
    }
    if (uX > mEDITBOX.mEditBoxInfo[4][0] && uX < mEDITBOX.mEditBoxInfo[4][2] && uY > mEDITBOX.mEditBoxInfo[4][1] && uY < mEDITBOX.mEditBoxInfo[4][3])
    {
        mEDITBOX.Set(5);
        return 1;
    }
    mX = 0;
    mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[50]);
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1370], mX + 3, mY - 13, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mBASICUI.mSelectChatIndex = 1;
        tstr = mMESSAGE.Return(95);
        strcpy(mBASICUI.mChatName, tstr);
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1371], mX + 80, mY - 13, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mBASICUI.mSelectChatIndex = 2;
        tstr = mMESSAGE.Return(96);
        strcpy(mBASICUI.mChatName, tstr);
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1372], mX + 157, mY - 13, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mBASICUI.mSelectChatIndex = 3;
        tstr = mMESSAGE.Return(97);
        strcpy(mBASICUI.mChatName, tstr);
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1373], mX + 234, mY - 13, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mBASICUI.mSelectChatIndex = 4;
        tstr = mMESSAGE.Return(98);
        strcpy(mBASICUI.mChatName, tstr);
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1374], mX + 311, mY - 13, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mBASICUI.mSelectChatIndex = 5;
        tstr = mMESSAGE.Return(99);
        strcpy(mBASICUI.mChatName, tstr);
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1657], mX + 65, mY - 13, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mBASICUI.mChatDisplay[0] = mBASICUI.mChatDisplay[0] != 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1657], mX + 142, mY - 13, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mBASICUI.mChatDisplay[1] = mBASICUI.mChatDisplay[1] != 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1657], mX + 219, mY - 13, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mBASICUI.mChatDisplay[2] = mBASICUI.mChatDisplay[2] != 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1657], mX + 296, mY - 13, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mBASICUI.mChatDisplay[3] = mBASICUI.mChatDisplay[3] != 1;
        return 1;
    }
    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1657], mX + 373, mY - 13, uX, uY))
    {
        GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
        mBASICUI.mChatDisplay[4] = mBASICUI.mChatDisplay[4] != 1;
        return 1;
    }
    else
    {
    LABEL_112:
        /*if (AUTOCHECKUI::LBUTTONDOWN(uX, uY))
            return 1;*/
        if (mBOARDUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mCHOICEUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mMBOXUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mCBOXUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mTRIBENOTICEUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mAUTOUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mANIMALUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mBONUSUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mTRIBESKILL.LBUTTONDOWN(uX, uY))
            return 1;
        if (mCOSTUMEUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mTRADEUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mPSHOPUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mAVATARUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mNPCUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mSTATUSUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mINVENUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mSKILLUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mQUESTUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mPARTYUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mFRIENDUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mGUILDUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mGAMEOPTIONUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mHELPUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mTRIBEUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mTRIBEBANKUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mTRIBEVOTEUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mCInnerAuto.LBUTTONDOWN(uX, uY))
            return 1;
        if (mBASICUI.LBUTTONDOWN(uX, uY))
            return 1;
        /*if (SPECIALSHOPUI::LBUTTONDOWN(uX, uY))
            return 1;*/
        if (mHOISUNDO_UI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mGUILD_RANKING_UI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mHSBRANKUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mFACTIONNOTICEUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mCAPSULEUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mHERORANKUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mTOWERBUILDUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mBOOZEUI.LBUTTONDOWN(uX, uY))
            return 1;
        if (mSPECIALSKILL.LBUTTONDOWN(uX, uY))
            return 1;
        if (mSPSHOP.LBUTTONDOWN(uX, uY))
            return 1;
        /*#ifdef CONSTELLATION
        if (mCONSTELLATIONUI.LBUTTONDOWN(uX, uY))
            return 1;
        #endif*/
    }
}


BOOL UI::LBUTTONUP(int uX, int uY)
{
    /*if (AUTOCHECKUI::LBUTTONUP(uX, uY))
        return 1;*/
    if (mBOARDUI.LBUTTONUP(uX, uY))
        return 1;
    if (mCHOICEUI.LBUTTONUP(uX, uY))
        return 1;
    if (mMBOXUI.LBUTTONUP(uX, uY))
        return 1;
    if (mCBOXUI.LBUTTONUP(uX, uY))
        return 1;
    if (mTRIBENOTICEUI.LBUTTONUP( uX, uY))
        return 1;
    if (mAUTOUI.LBUTTONUP( uX, uY))
        return 1;
    if (mANIMALUI.LBUTTONUP( uX, uY))
        return 1;
    if (mBONUSUI.LBUTTONUP( uX, uY))
        return 1;
    if (mTRIBESKILL.LBUTTONUP( uX, uY))
        return 1;
    if (mCOSTUMEUI.LBUTTONUP( uX, uY))
        return 1;
    if (mTRADEUI.LBUTTONUP( uX, uY))
        return 1;
    if (mPSHOPUI.LBUTTONUP( uX, uY))
        return 1;
    if (mAVATARUI.LBUTTONUP( uX, uY))
        return 1;
    if (mNPCUI.LBUTTONUP( uX, uY))
        return 1;
    if (mSTATUSUI.LBUTTONUP( uX, uY))
        return 1;
    if (mINVENUI.LBUTTONUP( uX, uY))
        return 1;
    if (mSKILLUI.LBUTTONUP( uX, uY))
        return 1;
    if (mQUESTUI.LBUTTONUP( uX, uY))
        return 1;
    if (mPARTYUI.LBUTTONUP( uX, uY))
        return 1;
    if (mFRIENDUI.LBUTTONUP( uX, uY))
        return 1;
    if (mGUILDUI.LBUTTONUP( uX, uY))
        return 1;
    if (mGAMEOPTIONUI.LBUTTONUP( uX, uY))
        return 1;
    if (mHELPUI.LBUTTONUP( uX, uY))
        return 1;
    if (mTRIBEUI.LBUTTONUP( uX, uY))
        return 1;
    if (mTRIBEBANKUI.LBUTTONUP( uX, uY))
        return 1;
    if (mTRIBEVOTEUI.LBUTTONUP( uX, uY))
        return 1;
    if (mCInnerAuto.LBUTTONUP( uX, uY))
        return 1;
    if (mBASICUI.LBUTTONUP( uX, uY))
        return 1;
    /*if (SPECIALSHOPUI::LBUTTONUP( uX, uY))
        return 1;*/
    if (mHOISUNDO_UI.LBUTTONUP( uX, uY))
        return 1;
    if (mGUILD_RANKING_UI.LBUTTONUP( uX, uY))
        return 1;
    if (mHSBRANKUI.LBUTTONUP( uX, uY))
        return 1;
    if (mFACTIONNOTICEUI.LBUTTONUP( uX, uY))
        return 1;
    if (mCAPSULEUI.LBUTTONUP( uX, uY))
        return 1;
    if (mHERORANKUI.LBUTTONUP( uX, uY))
        return 1;
    if (mTOWERBUILDUI.LBUTTONUP( uX, uY))
        return 1;
    if (mBOOZEUI.LBUTTONUP( uX, uY))
        return 1;
    if (mSPECIALSKILL.LBUTTONUP( uX, uY))
        return 1;
    if (mSPSHOP.LBUTTONUP( uX, uY))
        return 1;
   /* #ifdef CONSTELLATION
    if (mCONSTELLATIONUI.LBUTTONUP( uX, uY))
        return 1;
    #endif*/


}

BOOL UI::RBUTTONDOWN(int uX, int uY)
{
    /*if (AUTOCHECKUI::RBUTTONDOWN(uX, uY))
        return 1;*/
    if (mBOARDUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mCHOICEUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mMBOXUI.RBUTTONDOWN( uX, uY))
        return 1;
    if (mCBOXUI.RBUTTONDOWN( uX, uY))
        return 1;
    if (mTRIBENOTICEUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mAUTOUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mANIMALUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mBONUSUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mTRIBESKILL.RBUTTONDOWN(uX, uY))
        return 1;
    if (mCOSTUMEUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mTRADEUI.RBUTTONDOWN( uX, uY))
        return 1;
    if (mPSHOPUI.RBUTTONDOWN( uX, uY))
        return 1;
    if (mAVATARUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mNPCUI.RBUTTONDOWN( uX, uY))
        return 1;
    if (mSTATUSUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mINVENUI.RBUTTONDOWN( uX, uY))
        return 1;
    if (mSKILLUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mQUESTUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mPARTYUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mFRIENDUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mGUILDUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mGAMEOPTIONUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mHELPUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mTRIBEUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mTRIBEBANKUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mTRIBEVOTEUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mBASICUI.RBUTTONDOWN(uX, uY))
        return 1;
    /*if (SPECIALSHOPUI::RBUTTONDOWN(uX, uY))
        return 1;*/
    if (mHOISUNDO_UI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mGUILD_RANKING_UI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mHSBRANKUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mFACTIONNOTICEUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mCAPSULEUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mHERORANKUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mTOWERBUILDUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mBOOZEUI.RBUTTONDOWN(uX, uY))
        return 1;
    if (mSPECIALSKILL.RBUTTONDOWN(uX, uY))
        return 1;
    if (mSPSHOP.RBUTTONDOWN(uX, uY))
        return 1;
}

BOOL UI::RBUTTONUP(int uX, int uY)
{
    /*if (AUTOCHECKUI::RBUTTONUP(uX, uY))
        return 1;*/
    if (mBOARDUI.RBUTTONUP(uX, uY))
        return 1;
    if (mCHOICEUI.RBUTTONUP( uX, uY))
        return 1;
    if (mMBOXUI.RBUTTONUP( uX, uY))
        return 1;
    if (mCBOXUI.RBUTTONUP( uX, uY))
        return 1;
    if (mTRIBENOTICEUI.RBUTTONUP(uX, uY))
        return 1;
    if (mAUTOUI.RBUTTONUP(uX, uY))
        return 1;
    if (mANIMALUI.RBUTTONUP(uX, uY))
        return 1;
    if (mBONUSUI.RBUTTONUP(uX, uY))
        return 1;
    if (mTRIBESKILL.RBUTTONUP(uX, uY))
        return 1;
    if (mCOSTUMEUI.RBUTTONUP(uX, uY))
        return 1;
    if (mTRADEUI.RBUTTONUP(uX, uY))
        return 1;
    if (mPSHOPUI.RBUTTONUP(uX, uY))
        return 1;
    if (mAVATARUI.RBUTTONUP( uX, uY))
        return 1;
    if (mNPCUI.RBUTTONUP( uX, uY))
        return 1;
    if (mSTATUSUI.RBUTTONUP(uX, uY))
        return 1;
    if (mINVENUI.RBUTTONUP(uX, uY))
        return 1;
    if (mSKILLUI.RBUTTONUP(uX, uY))
        return 1;
    if (mQUESTUI.RBUTTONUP(uX, uY))
        return 1;
    if (mPARTYUI.RBUTTONUP(uX, uY))
        return 1;
    if (mFRIENDUI.RBUTTONUP(uX, uY))
        return 1;
    if (mGUILDUI.RBUTTONUP(uX, uY))
        return 1;
    if (mGAMEOPTIONUI.RBUTTONUP(uX, uY))
        return 1;
    if (mHELPUI.RBUTTONUP( uX, uY))
        return 1;
    if (mTRIBEUI.RBUTTONUP(uX, uY))
        return 1;
    if (mTRIBEBANKUI.RBUTTONUP(uX, uY))
        return 1;
    if (mTRIBEVOTEUI.RBUTTONUP(uX, uY))
        return 1;
    if (mBASICUI.RBUTTONUP(uX, uY))
        return 1;
    /*if (SPECIALSHOPUI::RBUTTONUP(uX, uY))
        return 1;*/
    if (mHOISUNDO_UI.RBUTTONUP(uX, uY))
        return 1;
    if (mGUILD_RANKING_UI.RBUTTONUP(uX, uY))
        return 1;
    if (mHSBRANKUI.RBUTTONUP(uX, uY))
        return 1;
    if (mFACTIONNOTICEUI.RBUTTONUP(uX, uY))
        return 1;
    if (mCAPSULEUI.RBUTTONUP(uX, uY))
        return 1;
    if (mHERORANKUI.RBUTTONUP(uX, uY))
        return 1;
    if (mTOWERBUILDUI.RBUTTONUP(uX, uY))
        return 1;
    if (mBOOZEUI.RBUTTONUP(uX, uY))
        return 1;
    if (mSPECIALSKILL.RBUTTONUP(uX, uY))
        return 1;
}

int UI::KEYBOARD()
{
    /*if (NUMBERPINUI::Free())
        return 1;*/
    if (mBOARDUI.KEYBOARD())
        return 1;
    if (mCHOICEUI.KEYBOARD())
        return 1;
    if (mMBOXUI.KEYBOARD())
        return 1;
    if (mCBOXUI.KEYBOARD())
        return 1;
    if (mTRIBENOTICEUI.KEYBOARD())
        return 1;
    if (mAUTOUI.KEYBOARD())
        return 1;
    if (mANIMALUI.KEYBOARD())
        return 1;
    if (mBONUSUI.KEYBOARD())
        return 1;
    if (mTRIBESKILL.KEYBOARD())
        return 1;
    if (mCOSTUMEUI.KEYBOARD())
        return 1;
    if (mTRADEUI.KEYBOARD())
        return 1;
    if (mPSHOPUI.KEYBOARD())
        return 1;
    if (mAVATARUI.KEYBOARD())
        return 1;
    if (mNPCUI.KEYBOARD())
        return 1;
    if (mSTATUSUI.KEYBOARD())
        return 1;
    if (mINVENUI.KEYBOARD())
        return 1;
    if (mSKILLUI.KEYBOARD())
        return 1;
    if (mQUESTUI.KEYBOARD())
        return 1;
    if (mPARTYUI.KEYBOARD())
        return 1;
    if (mFRIENDUI.KEYBOARD())
        return 1;
    if (mGUILDUI.KEYBOARD())
        return 1;
    if (mGAMEOPTIONUI.KEYBOARD()) // Run when pressing ESC Key
        return 1;
    if (mHELPUI.KEYBOARD())
        return 1;
    if (mTRIBEUI.KEYBOARD())
        return 1;
    if (mTRIBEBANKUI.KEYBOARD())
        return 1;
    if (mTRIBEVOTEUI.KEYBOARD())
        return 1;
    if (mBASICUI.KEYBOARD())
        return 1;
    /*if (SPECIALSHOPUI::KEYBOARD())
        return 1;*/
    if (mHOISUNDO_UI.KEYBOARD())
        return 1;
    if (mGUILD_RANKING_UI.KEYBOARD())
        return 1;
    if (mHSBRANKUI.KEYBOARD())
        return 1;
    if (mFACTIONNOTICEUI.KEYBOARD())
        return 1;
    if (mCAPSULEUI.KEYBOARD())
        return 1;
    if (mHERORANKUI.KEYBOARD())
        return 1;
    if (mTOWERBUILDUI.KEYBOARD())
        return 1;
    if (mBOOZEUI.KEYBOARD())
        return 1;
    if (mSPECIALSKILL.KEYBOARD())
        return 1;
    if (mSPSHOP.KEYBOARD())
        return 1;
}

void UI::InitForEnterZone()
{
    mEDITBOX.Set(0);
   // AUTOCHECKUI::InitForEnterZone(&mNUMBERPINUI);
    mBOARDUI.Off();
    mCHOICEUI.InitForEnterZone();
    mMBOXUI.InitForEnterZone();
    mCBOXUI.InitForEnterZone();
    mTRIBENOTICEUI.InitForEnterZone();
    mAUTOUI.InitForEnterZone();
    mANIMALUI.InitForEnterZone();
    mBONUSUI.InitForEnterZone();
    mTRIBESKILL.InitForEnterZone();
    mCOSTUMEUI.InitForEnterZone();
    mTRADEUI.InitForEnterZone();
    mPSHOPUI.InitForEnterZone();
    mAVATARUI.InitForEnterZone();
    mNPCUI.InitForEnterZone();
    mSTATUSUI.InitForEnterZone();
    mINVENUI.InitForEnterZone();
    mSKILLUI.InitForEnterZone();
    mQUESTUI.InitForEnterZone();
    mPARTYUI.InitForEnterZone();
    mFRIENDUI.InitForEnterZone();
    mGUILDUI.InitForEnterZone();
    mGAMEOPTIONUI.InitForEnterZone();
    mHELPUI.InitForEnterZone();
    mTRIBEUI.InitForEnterZone();
    mTRIBEBANKUI.InitForEnterZone();
    mTRIBEVOTEUI.InitForEnterZone();
    mCInnerAuto.InitForMovezone();
    mBASICUI.InitForEnterZone();
    //SPECIALSHOPUI::InitForEnterZone();
    mHOISUNDO_UI.InitForEnterZone();
    mGUILD_RANKING_UI.InitForEnterZone();
    mHSBRANKUI.InitForEnterZone();
    mFACTIONNOTICEUI.InitForEnterZone();
    mCAPSULEUI.InitForEnterZone();
    mHERORANKUI.InitForEnterZone();
    mTOWERBUILDUI.InitForEnterZone();
    mBOOZEUI.InitForEnterZone();
    mSPECIALSKILL.InitForEnterZone();
    mSPSHOP.InitForEnterZone();
    //mCONSTELLATIONUI.InitForEnterZone();
}

BOOL UI::CheckActiveUIForItem()
{
    if (mTRADEUI.mActive)
        return 1;
    if (mPSHOPUI.mActive)
        return 1;
    if (mAVATARUI.mActive)
        return 1;
    if (mNPCUI.mActive)
        return 1;
    return mINVENUI.mActive != 0;
}