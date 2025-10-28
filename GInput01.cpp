#include "gxdheader.h"

EDITBOX mEDITBOX;

LRESULT CALLBACK EditBoxProcedure(HWND hWnd, UINT nMss, WPARAM wPrm, LPARAM lPrm)
{
	int index01;
	int index02;
	int i;

	for (index01 = 0; index01 < 21; index01++)
	{
		if (hWnd == mEDITBOX.mDATA[index01])
		{
			break;
		}
	}
	if (index01 == 21)
	{
		return TRUE;
	}
	switch (index01)
	{
	case 0:
		switch (nMss)
		{
		case WM_KEYDOWN:
			switch (wPrm)
			{
			case VK_TAB:
				mEDITBOX.Set(2);
				return TRUE;
			case VK_RETURN:
				mMAIN.mSubMode = 2;
				return TRUE;
			}
			break;
		}
		break;

	case 1:
		switch (nMss)
		{
		case WM_KEYDOWN:
			switch (wPrm)
			{
			case VK_TAB:
				mEDITBOX.Set(1);
				return TRUE;
			case VK_RETURN:
				mMAIN.mSubMode = 2;
				return TRUE;
			}
			break;
		}
		break;

	case 3:
		switch (nMss)
		{
		case WM_KEYDOWN:
			switch (wPrm)
			{
			case VK_RETURN:
				mBASICUI.ProcessEnterForEditBox04();
				return TRUE;
			}
			break;
		}
		break;

	case 4:
		switch (nMss)
		{
		case WM_KEYDOWN:
			switch (wPrm)
			{
			case VK_TAB:
				mEDITBOX.Set(4);
				return TRUE;
			case VK_RETURN:
				mBASICUI.ProcessEnterForEditBox05();
				return TRUE;
			}
			break;
		}
		break;

	case 5:
		switch (nMss)
		{
		case WM_KEYDOWN:
			switch (wPrm)
			{
			case VK_RETURN:
				mHELPUI.ProcessForSearchHelp();
				return TRUE;
			}
			break;
		}
		break;

	case 7:
		switch (nMss)
		{
		case WM_KEYDOWN:
			switch (wPrm)
			{
			case VK_RETURN:
				mGUILDUI.ProcessForGuildNotice();
				return TRUE;
			}
			break;
		}
		break;

	case 8:
		switch (nMss)
		{
		case WM_KEYDOWN:
			switch (wPrm)
			{
			case VK_RETURN:
				mEDITBOX.Set(10);
				return TRUE;
			}
			break;
		}
		break;

	case 9:
		switch (nMss)
		{
		case WM_KEYDOWN:
			switch (wPrm)
			{
			case VK_RETURN:
				mEDITBOX.Set(11);
				return TRUE;
			}
			break;
		}
		break;

	case 10:
		switch (nMss)
		{
		case WM_KEYDOWN:
			switch (wPrm)
			{
			case VK_RETURN:
				mEDITBOX.Set(12);
				return TRUE;
			}
			break;
		}
		break;

	case 15:
		switch (nMss)
		{
		case WM_KEYDOWN:
			switch (wPrm)
			{
			case VK_RETURN:
				mTRIBENOTICEUI.ProcessForTribeNotice();
				return TRUE;
			}
			break;
		}
		break;

	default:
		break;
	}
	if (nMss == 123)
	{
		return 1;
	}
	if (nMss == WM_KEYDOWN)
	{
		if (wPrm >= 0x23 && wPrm <= 0x28)
		{
			return 1;
		}
	}
	else if (nMss == 770 && mMYINFO.uUserSort < 1 && index01 != 14)
	{
		return 1;
	}
	return CallWindowProcA(mEDITBOX.mEditBoxProc, hWnd, nMss, wPrm, lPrm);
}

void EDITBOX::Set(int tDataIndex)
{
	if ((tDataIndex < 0) || (tDataIndex > 21))
	{
		return;
	}
	mDataIndex = tDataIndex;
	if (mDataIndex == 0)
	{
		SetFocus(mAPP->hMainWindow);
		return;
	}
	SetFocus(mDATA[(mDataIndex - 1)]);
}

EDITBOX::EDITBOX()
{
	int i;

	mDataIndex = 0;
	for (i = 0; i < 21; ++i)
	{
		mDATA[i] = 0;
	}
}
BOOL EDITBOX::Init()
{
	int mX;
	int mY;
	int v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11;
	int index01;


	mMYINFO.AdjustScreenCoord( 14, 371, 294, &mX, &mY);
	mEditBoxInfo[0][0] = mX + 122;
	mEditBoxInfo[0][1] = mY + 54;
	mEditBoxInfo[0][2] = mX + 243;
	mEditBoxInfo[0][3] = mY + 75;

	mMYINFO.AdjustScreenCoord( 14, 371, 294, &mX, &mY);
	mEditBoxInfo[1][0] = mX + 122;
	mEditBoxInfo[1][1] = mY + 89;
	mEditBoxInfo[1][2] = mX + 243;
	mEditBoxInfo[1][3] = mY + 110;

	mX = mMYINFO.mScreenXSize - 335;
	mY = 73;
	mEditBoxInfo[2][0] = mMYINFO.mScreenXSize - 335 + 113;
	mEditBoxInfo[2][1] = mY + 48;
	mEditBoxInfo[2][2] = mX + 212;
	mEditBoxInfo[2][3] = mY + 70;

	mX = 0;
	mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[50]);
	mEditBoxInfo[3][0] = mX + 67;
	mEditBoxInfo[3][1] = mY + 20;
	mEditBoxInfo[3][2] = mX + 179;
	mEditBoxInfo[3][3] = mY + 36;

	mX = 0;
	mY = mMYINFO.mScreenYSize - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[50]);
	mEditBoxInfo[4][0] = mX + 3;
	mEditBoxInfo[4][1] = mY + 3;
	mEditBoxInfo[4][2] = mX + 374;
	mEditBoxInfo[4][3] = mY + 16;

	mMYINFO.AdjustScreenCoord( 2019, 0, 0, &mX, &mY);
	mEditBoxInfo[5][0] = mX + 686;
	mEditBoxInfo[5][1] = mY + 141;
	mEditBoxInfo[5][2] = mX + 849;
	mEditBoxInfo[5][3] = mY + 158;

	mMYINFO.AdjustScreenCoord( 760, 387, 334, &mX, &mY);
	mEditBoxInfo[6][0] = mX + 71;
	mEditBoxInfo[6][1] = mY + 71;
	mEditBoxInfo[6][2] = mX + 152;
	mEditBoxInfo[6][3] = mY + 86;

	mMYINFO.AdjustScreenCoord( 834, 316, 335, &mX, &mY);
	mEditBoxInfo[7][0] = mX + 16;
	mEditBoxInfo[7][1] = mY + 43;
	mEditBoxInfo[7][2] = mX + 374;
	mEditBoxInfo[7][3] = mY + 55;

	mMYINFO.AdjustScreenCoord( 840, 351, 298, &mX, &mY);
	mEditBoxInfo[8][0] = mX + 11;
	mEditBoxInfo[8][1] = mY + 43;
	mEditBoxInfo[8][2] = mX + 310;
	mEditBoxInfo[8][3] = mY + 55;

	mMYINFO.AdjustScreenCoord( 840, 351, 298, &mX, &mY);
	mEditBoxInfo[9][0] = mX + 11;
	mEditBoxInfo[9][1] = mY + 68;
	mEditBoxInfo[9][2] = mX + 310;
	mEditBoxInfo[9][3] = mY + 80;

	mMYINFO.AdjustScreenCoord( 840, 351, 298, &mX, &mY);
	mEditBoxInfo[10][0] = mX + 11;
	mEditBoxInfo[10][1] = mY + 93;
	mEditBoxInfo[10][2] = mX + 310;
	mEditBoxInfo[10][3] = mY + 105;

	mMYINFO.AdjustScreenCoord( 840, 351, 298, &mX, &mY);
	mEditBoxInfo[11][0] = mX + 11;
	mEditBoxInfo[11][1] = mY + 118;
	mEditBoxInfo[11][2] = mX + 310;
	mEditBoxInfo[11][3] = mY + 130;

	mMYINFO.AdjustScreenCoord( 956, 435, 444, &mX, &mY);
	mEditBoxInfo[12][0] = mX + 112;
	mEditBoxInfo[12][1] = mY + 18;
	mEditBoxInfo[12][2] = mX + 134;
	mEditBoxInfo[12][3] = mY + 30;

	mMYINFO.AdjustScreenCoord( 299, 764, 182, &mX, &mY);
	v1 = mX + 23;
	mX = v1 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[669]);
	mEditBoxInfo[13][0] = mX + 40;
	mEditBoxInfo[13][1] = mY + 11;
	mEditBoxInfo[13][2] = mX + 196;
	mEditBoxInfo[13][3] = mY + 25;

	v2 = mMYINFO.mScreenXSize / 2;
	mX = v2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1928]) / 2;
	v3 = mMYINFO.mScreenYSize / 2;
	mY = v3 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1928]) / 2;
	mEditBoxInfo[14][0] = mX + 55;
	mEditBoxInfo[14][1] = mY + 49;
	mEditBoxInfo[14][2] = mX + 334;
	mEditBoxInfo[14][3] = mY + 68;

	v4 = mMYINFO.mScreenXSize / 2;
	mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1602]) / 2;
	mY = mMYINFO.mScreenYSize - 160;
	mEditBoxInfo[15][0] = mX + 7;
	mEditBoxInfo[15][1] = mY + 40;
	mEditBoxInfo[15][2] = mX + 383;
	mEditBoxInfo[15][3] = mY + 56;

	v5 = mMYINFO.mScreenXSize / 2;
	mX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1593]) / 2;
	v6 = mMYINFO.mScreenYSize / 2;
	mY = v6 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1593]) / 2;
	mEditBoxInfo[16][0] = mX + 71;
	mEditBoxInfo[16][1] = mY + 92;
	mEditBoxInfo[16][2] = mX + 163;
	mEditBoxInfo[16][3] = mY + 110;

	v7 = mMYINFO.mScreenXSize / 2;
	mX = v7 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[1359]) / 2;
	v8 = mMYINFO.mScreenYSize / 2;
	mY = v8 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[1359]) / 2;
	mEditBoxInfo[17][0] = mX + 88;
	mEditBoxInfo[17][1] = mY + 31;
	mEditBoxInfo[17][2] = mX + 178;
	mEditBoxInfo[17][3] = mY + 47;

	v9 = mMYINFO.mScreenXSize / 2;
	mX = v9 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2998]) / 2;
	v10 = mMYINFO.mScreenYSize / 2;
	mY = v10 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2998]) / 2;
	mEditBoxInfo[18][0] = mX + 112;
	mEditBoxInfo[18][1] = mY + 66;
	mEditBoxInfo[18][2] = mX + 412;
	mEditBoxInfo[18][3] = mY + 86;

	mMYINFO.AdjustScreenCoord( 3420, 270, 182, &mX, &mY);
	mEditBoxInfo[19][0] = mX + 35;
	mEditBoxInfo[19][1] = mY + 279;
	mEditBoxInfo[19][2] = mX + 252;
	mEditBoxInfo[19][3] = mY + 295;

	v11 = mMYINFO.mScreenXSize / 2;
	mX = v11 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3587]) / 2;
	mY = mMYINFO.mScreenYSize - 160;
	mEditBoxInfo[20][0] = mX + 7;
	mEditBoxInfo[20][1] = mY + 40;
	mEditBoxInfo[20][2] = mX + 383;
	mEditBoxInfo[20][3] = mY + 56;
	mDataIndex = 0;

	for (index01 = 0; index01 < 21; index01++)
	{
		mDATA[index01] = CreateWindowEx(WS_EX_WINDOWEDGE, "edit", NULL, (WS_CHILD | WS_VISIBLE | WS_BORDER | ES_AUTOHSCROLL), mEditBoxInfo[index01][0], mEditBoxInfo[index01][1], (mEditBoxInfo[index01][2] - mEditBoxInfo[index01][0] + 1), (mEditBoxInfo[index01][3] - mEditBoxInfo[index01][1] + 1), mAPP->hMainWindow, (HMENU)(index01 + 1), mAPP->hInstance, NULL);
		if (mDATA[index01] == NULL)
		{
			return FALSE;
		}
		ShowWindow(mDATA[index01], SW_HIDE);
		switch (index01)
		{
		case 0:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(MAX_USER_ID_LENGTH - 1), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 1:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(MAX_USER_PASSWORD_LENGTH - 1), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 2:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(12), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 3:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(12), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 4:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(60), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 5:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(12), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 6:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(12), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 7:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(60), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 8:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(50), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 9:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(50), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 10:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(50), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 11:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(50), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 12:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(4), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 13:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(24), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 14:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(32), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 15:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(60), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 16:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(12), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 17:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(12), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 18:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(48), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;

		case 19:
			SendMessage(mDATA[index01], EM_LIMITTEXT, (WPARAM)(24), NULL);
			mEditBoxProc = (WNDPROC)SetWindowLong(mDATA[index01], GWL_WNDPROC, (LONG)EditBoxProcedure);
			if (mEditBoxProc == NULL)
			{
				return FALSE;
			}
			break;
		}
	}
	return TRUE;
}

void EDITBOX::Free()
{
	int i;

	mDataIndex = 0;
	for (i = 0; i < 21; ++i)
	{
		if (mDATA[i])
		{
			DestroyWindow(mDATA[i]);
			mDATA[i] = 0;
		}
	}
}


// Class of Pointer

POINTER mPOINTER;

BOOL POINTER::Init()
{
	mDataIndex = 0;
	mDATA[0] = LoadCursor(mAPP[0].hInstance, MAKEINTRESOURCE(IDC_CURSOR01));
	mDATA[1] = LoadCursor(mAPP[0].hInstance, MAKEINTRESOURCE(IDC_CURSOR02));
	mDATA[2] = LoadCursor(mAPP[0].hInstance, MAKEINTRESOURCE(IDC_CURSOR03));
	mDATA[3] = LoadCursor(mAPP[0].hInstance, MAKEINTRESOURCE(IDC_CURSOR04));
	mDATA[4] = LoadCursor(mAPP[0].hInstance, MAKEINTRESOURCE(IDC_CURSOR05));
	mDATA[5] = LoadCursor(mAPP[0].hInstance, MAKEINTRESOURCE(IDC_CURSOR06));
	mDATA[6] = LoadCursor(mAPP[0].hInstance, MAKEINTRESOURCE(IDC_CURSOR07));
	mDATA[7] = LoadCursor(mAPP[0].hInstance, MAKEINTRESOURCE(IDC_CURSOR08));
	mDATA[8] = LoadCursor(mAPP[0].hInstance, MAKEINTRESOURCE(IDC_CURSOR09));
	for (int i = 0; i < 9; i++)
	{
		if (mDATA[i] == NULL)
		{
			return FALSE;
		}
	}
	return TRUE;
}

void POINTER::Set(int tDataIndex)
{
	if (tDataIndex >= 0 && tDataIndex <= 8)
	{
		mDataIndex = tDataIndex;
	}
}

void POINTER::Set()
{
	SetCursor(mDATA[mDataIndex]);
}



GINPUT mINPUT;

BOOL GINPUT::Init()
{
	if (!GetCursorPos(&mMounsePosition))
		return 0;
	if (!ScreenToClient(mAPP[0].hMainWindow, &mMounsePosition))
		return 0;
	mCheckDisplayUI = 1;
	mDisplayInfoState = 1;
	GINPUT::InitForCameraRecord();
	mCameraHRotateSpeed = 0.2;
	mCameraVRotateSpeed = 0.30000001;
	mMinCameraAngle = 30.0;
	mMaxCameraAngle = 80.0;
	mCameraStrafeSpeed = 0.1;
	mPostCameraLength = 1.0;
	mMinCameraLength = 25.0;
	mMaxCameraLength = 250.0;//150 kamera açýsý
	return 1;
}
void GINPUT::Free()
{

}
void GINPUT::InitForCameraRecord()
{
	mSelectSort = 0;
	mSelectIndex = 0;
	strcpy(mCameraRecordPostAvatarName, "");
	mCameraRecordChangeSpeedIndex = 0;
	mCameraRecordSpeed[0] = 20.0;
	mCameraRecordSpeed[1] = 5.0;
	mCameraRecordSpeed[2] = 5.0;
	mCameraRecordSpeed[3] = 5.0;
}
void GINPUT::LBUTTONDOWN(int mX, int mY)
{
	if ((mMAIN.mMainMode != 6
		|| mMAIN.mSubMode != 4
		|| mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 11
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 12
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 33
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 34
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 35
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 36
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 37)
		&& !mUI.LBUTTONDOWN(mX, mY))
	{
		mMAIN.LBUTTONDOWN(mX, mY);
	}
}
void GINPUT::LBUTTONUP(int mX, int mY)
{
	if ((mMAIN.mMainMode != 6
		|| mMAIN.mSubMode != 4
		|| mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 11
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 12
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 33
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 34
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 35
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 36
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 37)
		&& !mUI.LBUTTONUP(mX, mY))
	{
		mMAIN.LBUTTONUP(mX, mY);
	}
}
void GINPUT::RBUTTONDOWN(int mX, int mY)
{
	if ((mMAIN.mMainMode != 6
		|| mMAIN.mSubMode != 4
		|| mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 11
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 12
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 33
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 34
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 35
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 36
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 37)
		&& !mUI.RBUTTONDOWN(mX, mY))
	{
		mMAIN.RBUTTONDOWN(mX, mY);
	}
}
void GINPUT::RBUTTONUP(int mX, int mY)
{
	if ((mMAIN.mMainMode != 6
		|| mMAIN.mSubMode != 4
		|| mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 11
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 12
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 33
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 34
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 35
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 36
		&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 37)
		&& !mUI.RBUTTONUP(mX, mY))
	{
		mMAIN.RBUTTONUP(mX, mY);
	}
}
void GINPUT::MBUTTONDOWN(int mX, int mY)
{
	float mCamLook[3];
	float mCamEye[3];

	if (mMAIN.mMainMode == 6 && mMAIN.mSubMode == 4 && (mMYINFO.mAvatarInfo.aVisibleState || !mSelectSort || mINPUT.mSelectIndex == 1))
	{
		mCamLook[0] = mGXD.mCameraLook.x;
		mCamLook[1] = mGXD.mCameraLook.y;
		mCamLook[2] = mGXD.mCameraLook.z;
		mCamEye[0] = mGXD.mCameraLook.x * 2.0 - mGXD.mCameraEye.x;
		mCamEye[1] = mGXD.mCameraEye.y;
		mCamEye[2] = mGXD.mCameraLook.z * 2.0 - mGXD.mCameraEye.z;
		mGXD.SetCameraPosition(mCamEye[0], mGXD.mCameraEye.y, mCamEye[2], mGXD.mCameraLook.x, mGXD.mCameraLook.y, mGXD.mCameraLook.z);
		TW2AddIn::mGXD.SetCameraPosition(mCamEye[0], mCamEye[1], mCamEye[2], mCamLook[0], mCamLook[1], mCamLook[2]);
	}
}
void GINPUT::MOUSEWHEEL(short mD)
{
	float v2; 
	float v3; 
	float v4; 
	float v5; 
	float v6; 
	float v8; 
	float v9; 
	float v10;
	float v11;
	float v12;
	float v13;
	float v14;
	float v15;
	float v16;
	float v17;
	float v18;
	float v19;
	float v20;
	float v21;
	float v22;
	float v23;
	float v24;
	float v25;
	float v26;
	float v27;
	float v28;
	float v29;
	float v30;
	float v31;

	if (mMAIN.mMainMode == 6 && mMAIN.mSubMode == 4)
	{
		v6 = mD * mCameraStrafeSpeed;
		mGXD.ChangeCameraForForward(v6);
		mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
		if (mD <= 0)
		{
			if (mMaxCameraLength < mPostCameraLength)
			{
				v27 = mGXD.mCameraLook.x;
				v29 = mGXD.mCameraLook.y;
				v31 = mGXD.mCameraLook.z;
				v15 = mGXD.mCameraEye.x - mGXD.mCameraLook.x;
				v17 = mGXD.mCameraEye.y - mGXD.mCameraLook.y;
				v19 = mGXD.mCameraEye.z - mGXD.mCameraLook.z;
				v3 = v19 * v19 + v17 * v17 + v15 * v15;
				v2 = sqrt(v3);
				if (v2 <= 0.0)
				{
					v21 = 0.0;
					v23 = 0.0;
					v25 = 0.0;
				}
				else
				{
					v21 = v15 / v2;
					v23 = v17 / v2;
					v25 = v19 / v2;
				}
				v9 = mMaxCameraLength * v21 + v27;
				v11 = mMaxCameraLength * v23 + v29;
				v13 = mMaxCameraLength * v25 + v31;
				mGXD.SetCameraPosition(v9, v11, v13, v27, v29, v31);
				TW2AddIn::mGXD.SetCameraPosition(v9, v11, v13, v27, v29, v31);
				mPostCameraLength = mMaxCameraLength;
			}
		}
		else if (mMinCameraLength > mPostCameraLength)
		{
			v26 = mGXD.mCameraLook.x;
			v28 = mGXD.mCameraLook.y;
			v30 = mGXD.mCameraLook.z;
			v14 = mGXD.mCameraEye.x - mGXD.mCameraLook.x;
			v16 = mGXD.mCameraEye.y - mGXD.mCameraLook.y;
			v18 = mGXD.mCameraEye.z - mGXD.mCameraLook.z;
			v5 = v18 * v18 + v16 * v16 + v14 * v14;
			v4 = sqrt(v5);
			if (v4 <= 0.0)
			{
				v20 = 0.0;
				v22 = 0.0;
				v24 = 0.0;
			}
			else
			{
				v20 = v14 / v4;
				v22 = v16 / v4;
				v24 = v18 / v4;
			}
			v8 = mMinCameraLength * v20 + v26;
			v10 = mMinCameraLength * v22 + v28;
			v12 = mMinCameraLength * v24 + v30;
			mGXD.SetCameraPosition(v8, v10, v12, v26, v28, v30);
			TW2AddIn::mGXD.SetCameraPosition(v8, v10, v12, v26, v28, v30);
			mPostCameraLength = mMinCameraLength;
		}
	}
}
void GINPUT::MOUSEMOVE(int mX, int mY, WPARAM wPrm)
{
	float v4; 
	float v5; 
	float v6; 
	float v7; 
	float v8; 
	float v9; 
	float v10;
	float v11;
	float v12;
	float v14;
	float tCameraEyeX; 
	float v16; 
	float tCameraEyeY;
	float v18; 
	float tCameraEyeZ; 
	float v20; 
	float v21; 
	float v22; 
	float v23; 
	float v24; 
	float mCameraLookX;
	float mCamLookX_2; 
	float mCameraLookY;
	float mCamLookY_2; 
	float mCameraLookZ;
	float mCamLookZ_2; 
	float v31; 
	
	if (mMAIN.mMainMode != 6 || mMAIN.mSubMode != 4)
	{
		mMounsePosition.x = mX;
		mMounsePosition.y = mY;
		return;
	}
	if (wPrm != 2)
	{
		mMounsePosition.x = mX;
		mMounsePosition.y = mY;
		return;
	}
	if (!mMYINFO.mAvatarInfo.aVisibleState && !mSelectSort && mMYINFO.mPresentZoneNumber == 194 || !mMYINFO.mAvatarInfo.aVisibleState && mSelectSort && mINPUT.mSelectIndex != 1)
	{
		mMounsePosition.x = mX;
		mMounsePosition.y = mY;
		return;
	}
	mCameraLookX = mGXD.mCameraLook.x;
	mCameraLookY = mGXD.mCameraLook.y;
	mCameraLookZ = mGXD.mCameraLook.z;
	tCameraEyeX = mGXD.mCameraEye.x;
	tCameraEyeY = mGXD.mCameraEye.y;
	tCameraEyeZ = mGXD.mCameraEye.z;
	v12 = (float)(mX - mMounsePosition.x) * mCameraHRotateSpeed;
	mGXD.ChangeCameraForHorizon(v12);
	v11 = (float)(mY - mMounsePosition.y) * mCameraVRotateSpeed;
	mGXD.ChangeCameraForVertical(v11);
	v21 = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
	if (v21 <= 0.0)
	{
		v31 = 0.0;
	}
	else
	{
		v14 = mGXD.mCameraEye.y - mGXD.mCameraLook.y;
		v10 = fabs(v14);
		v9 = v10 / v21;
		v8 = asin(v9);
		v31 = v8 * 57.2957763671875;
	}
	if (mGXD.mCameraLook.y >= (float)mGXD.mCameraEye.y)
	{
		v6 = fabs(v31);
		if (mMinCameraAngle < (float)v6)
		{
			mGXD.SetCameraPosition(tCameraEyeX, tCameraEyeY, tCameraEyeZ, mCameraLookX, mCameraLookY, mCameraLookZ);
			TW2AddIn::mGXD.SetCameraPosition(tCameraEyeX, tCameraEyeY, tCameraEyeZ, mCameraLookX, mCameraLookY, mCameraLookZ);
			mMounsePosition.x = mX;
			mMounsePosition.y = mY;
			return;
		}
	}
	else
	{
		v7 = fabs(v31);
		if (mMaxCameraAngle < (float)v7)
		{
			mGXD.SetCameraPosition(tCameraEyeX, tCameraEyeY, tCameraEyeZ, mCameraLookX, mCameraLookY, mCameraLookZ);
			TW2AddIn::mGXD.SetCameraPosition(tCameraEyeX, tCameraEyeY, tCameraEyeZ, mCameraLookX, mCameraLookY, mCameraLookZ);
			mMounsePosition.x = mX;
			mMounsePosition.y = mY;
			return;
		}
	}
	mMounsePosition.x = mX;
	mMounsePosition.y = mY;
	mCamLookX_2 = mGXD.mCameraLook.x;
	mCamLookY_2 = mGXD.mCameraLook.y;
	mCamLookZ_2 = mGXD.mCameraLook.z;
	v22 = mGXD.mCameraEye.x - mGXD.mCameraLook.x;
	v23 = mGXD.mCameraEye.y - mGXD.mCameraLook.y;
	v24 = mGXD.mCameraEye.z - mGXD.mCameraLook.z;
	v5 = v24 * v24 + v23 * v23 + v22 * v22;
	v4 = sqrt(v5);
	if (v4 > 0.0)
	{
		v22 = v22 / v4;
		v23 = v23 / v4;
		v24 = v24 / v4;
	}
	v16 = mPostCameraLength * v22 + mCamLookX_2;
	v18 = mPostCameraLength * v23 + mCamLookY_2;
	v20 = mPostCameraLength * v24 + mCamLookZ_2;
	mGXD.SetCameraPosition(v16, v18, v20, mCamLookX_2, mCamLookY_2, mCamLookZ_2);
	TW2AddIn::mGXD.SetCameraPosition(v16, v18, v20, mCamLookX_2, mCamLookY_2, mCamLookZ_2);
}
void GINPUT::KEYBOARD()
{
	D3DXVECTOR3 pV;
	D3DXMATRIX pOut;
	float tCam;
	int i, j, k;

	if (mMAIN.mMainMode != 6 || mMAIN.mSubMode != 4)
		return;
	if (!mEDITBOX.mDataIndex)
	{
		if (mMYINFO.mAvatarInfo.aVisibleState || !mSelectSort)
		{
			if ((mGXD.mKeyboardImmediateData[30] & 0x80) != 0)
			{
				mGXD.ChangeCameraForHorizon(6.0);
				return;
			}
			if ((mGXD.mKeyboardImmediateData[32] & 0x80) != 0)
			{
				mGXD.ChangeCameraForHorizon(-6.0);
				return;
			}
			goto LABEL_73;
		}
		if (mSelectIndex == 1)
		{
			if ((mGXD.mKeyboardImmediateData[17] & 0x80) != 0)
			{
				if (mMYINFO.mMoveZoneState)
					return;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mCameraRecordSpeed[0] * mGXD.mCameraForward.x
					+ mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mCameraRecordSpeed[0] * mGXD.mCameraForward.y
					+ mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1];
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mCameraRecordSpeed[0] * mGXD.mCameraForward.z
					+ mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			else if ((mGXD.mKeyboardImmediateData[31] & 0x80) != 0)
			{
				if (mMYINFO.mMoveZoneState)
					return;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]
					- mCameraRecordSpeed[0] * mGXD.mCameraForward.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1]
					- mCameraRecordSpeed[0] * mGXD.mCameraForward.y;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2]
					- mCameraRecordSpeed[0] * mGXD.mCameraForward.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			else if ((mGXD.mKeyboardImmediateData[30] & 0x80) != 0)
			{
				tCam = mCameraRecordSpeed[1] * -1.0;
				mGXD.ChangeCameraForHorizon(tCam);
			}
			else if ((mGXD.mKeyboardImmediateData[32] & 0x80) != 0)
			{
				tCam = mCameraRecordSpeed[1] * 1.0;
				mGXD.ChangeCameraForHorizon(tCam);
			}
			else if ((mGXD.mKeyboardImmediateData[16] & 0x80) != 0)
			{
				if (mMYINFO.mMoveZoneState)
					return;
				pV.x = mGXD.mCameraForward.x;
				pV.y = 0.0;
				pV.z = mGXD.mCameraForward.z;
				D3DXVec3Normalize(&pV, &pV);
				D3DXMatrixRotationY(&pOut, 1.5707964);
				D3DXVec3TransformNormal(&pV, &pV, &pOut);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]
					- mCameraRecordSpeed[2] * pV.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1]
					- mCameraRecordSpeed[2] * pV.y;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2]
					- mCameraRecordSpeed[2] * pV.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			else if ((mGXD.mKeyboardImmediateData[18] & 0x80) != 0)
			{
				if (mMYINFO.mMoveZoneState)
					return;
				pV.x = mGXD.mCameraForward.x;
				pV.y = 0.0;
				pV.z = mGXD.mCameraForward.z;
				D3DXVec3Normalize(&pV, &pV);
				D3DXMatrixRotationY(&pOut, 1.5707964);
				D3DXVec3TransformNormal(&pV, &pV, &pOut);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mCameraRecordSpeed[2] * pV.x
					+ mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0];
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mCameraRecordSpeed[2] * pV.y
					+ mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1];
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mCameraRecordSpeed[2] * pV.z
					+ mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2];
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			else if ((mGXD.mKeyboardImmediateData[19] & 0x80) != 0)
			{
				if (mMYINFO.mMoveZoneState)
					return;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1]
					+ mCameraRecordSpeed[3];
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			else if ((mGXD.mKeyboardImmediateData[33] & 0x80) != 0)
			{
				if (mMYINFO.mMoveZoneState)
					return;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1]
					- mCameraRecordSpeed[3];
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			goto LABEL_73;
		}
		if (mSelectIndex != 2)
		{
			if (mSelectIndex != 3)
				goto LABEL_73;
			if ((mGXD.mKeyboardImmediateData[17] & 0x80) != 0)
			{
				tCam = mCameraRecordSpeed[0] * 0.1000000014901161;
				mGXD.ChangeCameraForForward(tCam);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				if (mPostCameraLength < 10.0)
				{
					tCam = mCameraRecordSpeed[0] * -0.1000000014901161;
					mGXD.ChangeCameraForForward(tCam);
					mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				}
				goto LABEL_73;
			}
			if ((mGXD.mKeyboardImmediateData[31] & 0x80) != 0)
			{
				tCam = mCameraRecordSpeed[0] * -0.1000000014901161;
				mGXD.ChangeCameraForForward(tCam);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				goto LABEL_73;
			}
			if ((mGXD.mKeyboardImmediateData[30] & 0x80) != 0)
			{
				tCam = mCameraRecordSpeed[1] * -1.0;
				mGXD.ChangeCameraForHorizon(tCam);
				goto LABEL_73;
			}
			if ((mGXD.mKeyboardImmediateData[32] & 0x80) != 0)
			{
				tCam = mCameraRecordSpeed[1] * 1.0;
				mGXD.ChangeCameraForHorizon(tCam);
				goto LABEL_73;
			}
			if ((mGXD.mKeyboardImmediateData[16] & 0x80) == 0)
			{
				if ((mGXD.mKeyboardImmediateData[18] & 0x80) == 0)
				{
					if ((mGXD.mKeyboardImmediateData[19] & 0x80) == 0)
					{
						if ((mGXD.mKeyboardImmediateData[33] & 0x80) != 0)
						{
							mGXD.mCameraEye.y = mGXD.mCameraEye.y - mCameraRecordSpeed[3];
							mGXD.SetCameraPosition(
								mGXD.mCameraEye.x,
								mGXD.mCameraEye.y,
								mGXD.mCameraEye.z,
								mGXD.mCameraLook.x,
								mGXD.mCameraLook.y,
								mGXD.mCameraLook.z);
							TW2AddIn::mGXD.SetCameraPosition(
								mGXD.mCameraEye.x,
								mGXD.mCameraEye.y,
								mGXD.mCameraEye.z,
								mGXD.mCameraLook.x,
								mGXD.mCameraLook.y,
								mGXD.mCameraLook.z);
							mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
						}
						goto LABEL_73;
					}
					goto LABEL_49;
				}
			LABEL_47:
				pV.x = mGXD.mCameraForward.x;
				pV.y = 0.0;
				pV.z = mGXD.mCameraForward.z;
				D3DXVec3Normalize(&pV, &pV);
				D3DXMatrixRotationY(&pOut, 1.5707964);
				D3DXVec3TransformNormal(&pV, &pV, &pOut);
				mGXD.mCameraEye.x = mCameraRecordSpeed[2] * 0.1000000014901161 * pV.x + mGXD.mCameraEye.x;
				mGXD.mCameraEye.y = mCameraRecordSpeed[2] * 0.1000000014901161 * pV.y + mGXD.mCameraEye.y;
				mGXD.mCameraEye.z = mCameraRecordSpeed[2] * 0.1000000014901161 * pV.z + mGXD.mCameraEye.z;
				mGXD.SetCameraPosition(
					mGXD.mCameraEye.x,
					mGXD.mCameraEye.y,
					mGXD.mCameraEye.z,
					mGXD.mCameraLook.x,
					mGXD.mCameraLook.y,
					mGXD.mCameraLook.z);
				TW2AddIn::mGXD.SetCameraPosition(
					mGXD.mCameraEye.x,
					mGXD.mCameraEye.y,
					mGXD.mCameraEye.z,
					mGXD.mCameraLook.x,
					mGXD.mCameraLook.y,
					mGXD.mCameraLook.z);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				goto LABEL_73;
			}
		LABEL_45:
			pV.x = mGXD.mCameraForward.x;
			pV.y = 0.0;
			pV.z = mGXD.mCameraForward.z;
			D3DXVec3Normalize(&pV, &pV);
			D3DXMatrixRotationY(&pOut, 1.5707964);
			D3DXVec3TransformNormal(&pV, &pV, &pOut);
			mGXD.mCameraEye.x = mGXD.mCameraEye.x - mCameraRecordSpeed[2] * 0.1000000014901161 * pV.x;
			mGXD.mCameraEye.y = mGXD.mCameraEye.y - mCameraRecordSpeed[2] * 0.1000000014901161 * pV.y;
			mGXD.mCameraEye.z = mGXD.mCameraEye.z - mCameraRecordSpeed[2] * 0.1000000014901161 * pV.z;
			mGXD.SetCameraPosition(
				mGXD.mCameraEye.x,
				mGXD.mCameraEye.y,
				mGXD.mCameraEye.z,
				mGXD.mCameraLook.x,
				mGXD.mCameraLook.y,
				mGXD.mCameraLook.z);
			TW2AddIn::mGXD.SetCameraPosition(
				mGXD.mCameraEye.x,
				mGXD.mCameraEye.y,
				mGXD.mCameraEye.z,
				mGXD.mCameraLook.x,
				mGXD.mCameraLook.y,
				mGXD.mCameraLook.z);
			mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
			goto LABEL_73;
		}
		if ((mGXD.mKeyboardImmediateData[17] & 0x80) != 0)
		{
			tCam = mCameraRecordSpeed[0] * 0.1000000014901161;
			mGXD.ChangeCameraForForward(tCam);
			mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
			if (mPostCameraLength < 10.0)
			{
				tCam = mCameraRecordSpeed[0] * -0.1000000014901161;
				mGXD.ChangeCameraForForward(tCam);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
			}
			goto LABEL_73;
		}
		if ((mGXD.mKeyboardImmediateData[31] & 0x80) != 0)
		{
			tCam = mCameraRecordSpeed[0] * -0.1000000014901161;
			mGXD.ChangeCameraForForward(tCam);
			mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
		}
		else if ((mGXD.mKeyboardImmediateData[30] & 0x80) != 0)
		{
			tCam = mCameraRecordSpeed[1] * -1.0;
			mGXD.ChangeCameraForHorizon(tCam);
		}
		else
		{
			if ((mGXD.mKeyboardImmediateData[32] & 0x80) == 0)
			{
				if ((mGXD.mKeyboardImmediateData[16] & 0x80) == 0)
				{
					if ((mGXD.mKeyboardImmediateData[18] & 0x80) == 0)
					{
						if ((mGXD.mKeyboardImmediateData[19] & 0x80) == 0)
						{
							if ((mGXD.mKeyboardImmediateData[33] & 0x80) != 0)
							{
								mGXD.mCameraEye.y = mGXD.mCameraEye.y - mCameraRecordSpeed[3];
								mGXD.SetCameraPosition(
									mGXD.mCameraEye.x,
									mGXD.mCameraEye.y,
									mGXD.mCameraEye.z,
									mGXD.mCameraLook.x,
									mGXD.mCameraLook.y,
									mGXD.mCameraLook.z);
								TW2AddIn::mGXD.SetCameraPosition(
									mGXD.mCameraEye.x,
									mGXD.mCameraEye.y,
									mGXD.mCameraEye.z,
									mGXD.mCameraLook.x,
									mGXD.mCameraLook.y,
									mGXD.mCameraLook.z);
								mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
							}
							goto LABEL_73;
						}
					LABEL_49:
						mGXD.mCameraEye.y = mGXD.mCameraEye.y + mCameraRecordSpeed[3];
						mGXD.SetCameraPosition(
							mGXD.mCameraEye.x,
							mGXD.mCameraEye.y,
							mGXD.mCameraEye.z,
							mGXD.mCameraLook.x,
							mGXD.mCameraLook.y,
							mGXD.mCameraLook.z);
						TW2AddIn::mGXD.SetCameraPosition(
							mGXD.mCameraEye.x,
							mGXD.mCameraEye.y,
							mGXD.mCameraEye.z,
							mGXD.mCameraLook.x,
							mGXD.mCameraLook.y,
							mGXD.mCameraLook.z);
						mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
						goto LABEL_73;
					}
					goto LABEL_47;
				}
				goto LABEL_45;
			}
			tCam = mCameraRecordSpeed[1] * 1.0;
			mGXD.ChangeCameraForHorizon(tCam);
		}
	}
LABEL_73:
	for (i = 0; i < mGXD.mKeyboardBufferedDataNum && (mGXD.mKeyboardBufferedData[i].dwData & 0x80) == 0; ++i)
		;
	if (i != mGXD.mKeyboardBufferedDataNum)
	{
		switch (mGXD.mKeyboardBufferedData[i].dwOfs)
		{
		case 2u:
			if (mMYINFO.mAvatarInfo.aVisibleState || mSelectSort || mMYINFO.mPresentZoneNumber != 194)
			{
				if (mMYINFO.mAvatarInfo.aVisibleState
					|| mSelectSort
					|| mMYINFO.mPresentZoneNumber != 270
					&& mMYINFO.mPresentZoneNumber != 271
					&& mMYINFO.mPresentZoneNumber != 272
					&& mMYINFO.mPresentZoneNumber != 273
					&& mMYINFO.mPresentZoneNumber != 274)
				{
					goto LABEL_240;
				}
				mGXD.SetCameraPosition(0.0, 230.0, 500.0, 0.0, 0.0, 0.0);
				TW2AddIn::mGXD.SetCameraPosition(0.0, 230.0, 500.0, 0.0, 0.0, 0.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			else
			{
				mGXD.SetCameraPosition(0.0, 273.0, -892.0, 0.0, 63.0, -1342.0);
				TW2AddIn::mGXD.SetCameraPosition(0.0, 273.0, -892.0, 0.0, 63.0, -1342.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			break;
		case 3u:
			if (mMYINFO.mAvatarInfo.aVisibleState || mSelectSort || mMYINFO.mPresentZoneNumber != 194)
			{
				if (mMYINFO.mAvatarInfo.aVisibleState
					|| mSelectSort
					|| mMYINFO.mPresentZoneNumber != 270
					&& mMYINFO.mPresentZoneNumber != 271
					&& mMYINFO.mPresentZoneNumber != 272
					&& mMYINFO.mPresentZoneNumber != 273
					&& mMYINFO.mPresentZoneNumber != 274)
				{
					goto LABEL_240;
				}
				mGXD.SetCameraPosition(0.0, 230.0, 3500.0, 0.0, 0.0, 4000.0);
				TW2AddIn::mGXD.SetCameraPosition(0.0, 230.0, 3500.0, 0.0, 0.0, 4000.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			else
			{
				mGXD.SetCameraPosition(-892.0, 273.0, 0.0, -1342.0, 63.0, 0.0);
				TW2AddIn::mGXD.SetCameraPosition(-892.0, 273.0, 0.0, -1342.0, 63.0, 0.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			break;
		case 4u:
			if (mMYINFO.mAvatarInfo.aVisibleState || mSelectSort || mMYINFO.mPresentZoneNumber != 194)
			{
				if (mMYINFO.mAvatarInfo.aVisibleState
					|| mSelectSort
					|| mMYINFO.mPresentZoneNumber != 270
					&& mMYINFO.mPresentZoneNumber != 271
					&& mMYINFO.mPresentZoneNumber != 272
					&& mMYINFO.mPresentZoneNumber != 273
					&& mMYINFO.mPresentZoneNumber != 274)
				{
					goto LABEL_240;
				}
				mGXD.SetCameraPosition(0.0, 435.0, -1280.0, 0.0, 0.0, -800.0);
				TW2AddIn::mGXD.SetCameraPosition(0.0, 435.0, -1280.0, 0.0, 0.0, -800.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			else
			{
				mGXD.SetCameraPosition(0.0, 273.0, 892.0, 0.0, 63.0, 1342.0);
				TW2AddIn::mGXD.SetCameraPosition(0.0, 273.0, 892.0, 0.0, 63.0, 1342.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			break;
		case 5u:
			if (mMYINFO.mAvatarInfo.aVisibleState || mSelectSort || mMYINFO.mPresentZoneNumber != 194)
			{
				if (mMYINFO.mAvatarInfo.aVisibleState
					|| mSelectSort
					|| mMYINFO.mPresentZoneNumber != 270
					&& mMYINFO.mPresentZoneNumber != 271
					&& mMYINFO.mPresentZoneNumber != 272
					&& mMYINFO.mPresentZoneNumber != 273
					&& mMYINFO.mPresentZoneNumber != 274)
				{
					goto LABEL_240;
				}
				mGXD.SetCameraPosition(0.0, 435.0, 5250.0, 0.0, 0.0, 4800.0);
				TW2AddIn::mGXD.SetCameraPosition(0.0, 435.0, 5250.0, 0.0, 0.0, 4800.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			else
			{
				mGXD.SetCameraPosition(892.0, 273.0, 0.0, 1342.0, 63.0, 0.0);
				TW2AddIn::mGXD.SetCameraPosition(892.0, 273.0, 0.0, 1342.0, 63.0, 0.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			break;
		case 6u:
			if (mMYINFO.mAvatarInfo.aVisibleState || mSelectSort || mMYINFO.mPresentZoneNumber != 194)
			{
				if (mMYINFO.mAvatarInfo.aVisibleState
					|| mSelectSort
					|| mMYINFO.mPresentZoneNumber != 270
					&& mMYINFO.mPresentZoneNumber != 271
					&& mMYINFO.mPresentZoneNumber != 272
					&& mMYINFO.mPresentZoneNumber != 273
					&& mMYINFO.mPresentZoneNumber != 274)
				{
					goto LABEL_240;
				}
				mGXD.SetCameraPosition(890.0, 250.0, 1690.0, 520.0, -59.0, 1330.0);
				TW2AddIn::mGXD.SetCameraPosition(890.0, 250.0, 1690.0, 520.0, -59.0, 1330.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			else
			{
				mGXD.SetCameraPosition(151.0, 366.0, -418.0, -419.0, 136.0, -531.0);
				TW2AddIn::mGXD.SetCameraPosition(151.0, 366.0, -418.0, -419.0, 136.0, -531.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			break;
		case 7u:
			if (mMYINFO.mAvatarInfo.aVisibleState || mSelectSort || mMYINFO.mPresentZoneNumber != 194)
			{
				if (mMYINFO.mAvatarInfo.aVisibleState
					|| mSelectSort
					|| mMYINFO.mPresentZoneNumber != 270
					&& mMYINFO.mPresentZoneNumber != 271
					&& mMYINFO.mPresentZoneNumber != 272
					&& mMYINFO.mPresentZoneNumber != 273
					&& mMYINFO.mPresentZoneNumber != 274)
				{
					goto LABEL_240;
				}
				mGXD.SetCameraPosition(-890.0, 250.0, 710.0, -520.0, -59.0, 1050.0);
				TW2AddIn::mGXD.SetCameraPosition(-890.0, 250.0, 710.0, -520.0, -59.0, 1050.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			else
			{
				mGXD.SetCameraPosition(-418.0, 366.0, -151.0, -531.0, 136.0, 419.0);
				TW2AddIn::mGXD.SetCameraPosition(-418.0, 366.0, -151.0, -531.0, 136.0, 419.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			break;
		case 8u:
			if (mMYINFO.mAvatarInfo.aVisibleState || mSelectSort || mMYINFO.mPresentZoneNumber != 194)
			{
				if (mMYINFO.mAvatarInfo.aVisibleState
					|| mSelectSort
					|| mMYINFO.mPresentZoneNumber != 270
					&& mMYINFO.mPresentZoneNumber != 271
					&& mMYINFO.mPresentZoneNumber != 272
					&& mMYINFO.mPresentZoneNumber != 273
					&& mMYINFO.mPresentZoneNumber != 274)
				{
					goto LABEL_240;
				}
				mGXD.SetCameraPosition(-890.0, 250.0, 2310.0, -535.0, -59.0, 2670.0);
				TW2AddIn::mGXD.SetCameraPosition(-890.0, 250.0, 2310.0, -535.0, -59.0, 2670.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			else
			{
				mGXD.SetCameraPosition(-151.0, 366.0, 418.0, 419.0, 136.0, 531.0);
				TW2AddIn::mGXD.SetCameraPosition(-151.0, 366.0, 418.0, 419.0, 136.0, 531.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			break;
		case 9u:
			if (mMYINFO.mAvatarInfo.aVisibleState || mSelectSort || mMYINFO.mPresentZoneNumber != 194)
			{
				if (mMYINFO.mAvatarInfo.aVisibleState
					|| mSelectSort
					|| mMYINFO.mPresentZoneNumber != 270
					&& mMYINFO.mPresentZoneNumber != 271
					&& mMYINFO.mPresentZoneNumber != 272
					&& mMYINFO.mPresentZoneNumber != 273
					&& mMYINFO.mPresentZoneNumber != 274)
				{
					goto LABEL_240;
				}
				mGXD.SetCameraPosition(890.0, 250.0, 3290.0, 530.0, -59.0, 2925.0);
				TW2AddIn::mGXD.SetCameraPosition(890.0, 250.0, 3290.0, 530.0, -59.0, 2925.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			else
			{
				mGXD.SetCameraPosition(418.0, 366.0, 151.0, 531.0, 136.0, -419.0);
				TW2AddIn::mGXD.SetCameraPosition(418.0, 366.0, 151.0, 531.0, 136.0, -419.0);
				mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
				mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
				mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			}
			break;
		case 10u:
			if (mMYINFO.mAvatarInfo.aVisibleState || mSelectSort || mMYINFO.mPresentZoneNumber != 194)
				goto LABEL_240;
			mGXD.SetCameraPosition(1185.0, 1453.0, 1185.0, 0.0, 0.0, 63.0);
			TW2AddIn::mGXD.SetCameraPosition(1185.0, 1453.0, 1185.0, 0.0, 0.0, 63.0);
			mPostCameraLength = mUTIL.GetLengthXYZ(&mGXD.mCameraEye.x, &mGXD.mCameraLook.x);
			mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0] = mGXD.mCameraLook.x;
			mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[1] = mGXD.mCameraLook.y - 10.0;
			mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[2] = mGXD.mCameraLook.z;
			mPLAY.PROCESS_DATA_507_SEND(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0]);
			break;
		case 25u:
			if (mMYINFO.mAvatarInfo.aVisibleState || !mSelectSort)
				goto LABEL_240;
			if (mSelectIndex == 1)
			{
				mSelectIndex = 2;
			}
			else if (mSelectIndex == 2)
			{
				mSelectIndex = 1;
			}
			break;
		case 38u:
			if (mMYINFO.mAvatarInfo.aVisibleState || !mSelectSort)
				goto LABEL_240;
			if (mSelectIndex == 1)
			{
				if (strcmp(mCameraRecordPostAvatarName, ""))
					mSelectIndex = 3;
			}
			else if (mSelectIndex == 3)
			{
				mSelectIndex = 1;
				strcpy(mCameraRecordPostAvatarName, "");
			}
			break;
		case 44u:
			if (mMYINFO.mAvatarInfo.aVisibleState || !mSelectSort)
				goto LABEL_240;
			mCameraRecordSpeed[mCameraRecordChangeSpeedIndex] = mCameraRecordSpeed[mCameraRecordChangeSpeedIndex]
				- 1.0;
			if (mCameraRecordSpeed[mCameraRecordChangeSpeedIndex] < 1.0)
				mCameraRecordSpeed[mCameraRecordChangeSpeedIndex] = 1.0;
			break;
		case 45u:
			if (mMYINFO.mAvatarInfo.aVisibleState || !mSelectSort)
				goto LABEL_240;
			if (++mCameraRecordChangeSpeedIndex == 4)
				mCameraRecordChangeSpeedIndex = 0;
			break;
		case 46u:
			if (mMYINFO.mAvatarInfo.aVisibleState || !mSelectSort)
				goto LABEL_240;
			mCameraRecordSpeed[mCameraRecordChangeSpeedIndex] = mCameraRecordSpeed[mCameraRecordChangeSpeedIndex]
				+ 1.0;
			if (mCameraRecordSpeed[mCameraRecordChangeSpeedIndex] > 100.0)
				mCameraRecordSpeed[mCameraRecordChangeSpeedIndex] = 100.0;
			break;
		case 88u:
			mUTIL.GetScreenShot();
			break;
		case 199u:
			if (mMYINFO.mAvatarInfo.aVisibleState)
				goto LABEL_240;
			mCheckDisplayUI = !mCheckDisplayUI;
			break;
		case 201u:
			if (mMYINFO.mAvatarInfo.aVisibleState)
				goto LABEL_240;
			if (++mDisplayInfoState == 4)
				mDisplayInfoState = 1;
			break;
		case 207u:
			if (mMYINFO.mAvatarInfo.aVisibleState)
				goto LABEL_240;
			if (mSelectSort)
			{
				GINPUT::InitForCameraRecord();
				mSelectSort = 0;
				mSelectIndex = 0;
			}
			else
			{
				GINPUT::InitForCameraRecord();
				mSelectSort = 1;
				mSelectIndex = 1;
			}
			break;
		default:
		LABEL_240:
			if (mMYINFO.mAvatarInfo.aVisibleState
				|| !mSelectSort
				|| (mGXD.mKeyboardImmediateData[17] & 0x80) == 0
				&& (mGXD.mKeyboardImmediateData[31] & 0x80) == 0
				&& (mGXD.mKeyboardImmediateData[30] & 0x80) == 0
				&& (mGXD.mKeyboardImmediateData[32] & 0x80) == 0
				&& (mGXD.mKeyboardImmediateData[19] & 0x80) == 0
				&& (mGXD.mKeyboardImmediateData[33] & 0x80) == 0
				&& (mGXD.mKeyboardImmediateData[16] & 0x80) == 0
				&& (mGXD.mKeyboardImmediateData[18] & 0x80) == 0)
			{
				if (!mEDITBOX.mDataIndex)
				{
					goto LABEL_262;
				}
				if (mEDITBOX.mDataIndex == 6)
				{
					for (i = 0; i < (int)mGXD.mKeyboardBufferedDataNum && (mGXD.mKeyboardBufferedData[i].dwData & 0x80) == 0; ++i)
						;
					if (i != mGXD.mKeyboardBufferedDataNum && mGXD.mKeyboardBufferedData[i].dwOfs == 1)
					{
					LABEL_262:
						if ((!mHELPUI.mActive || !mHELPUI.mUpdateTime)
							&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 11
							&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 12
							&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 33
							&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 34
							&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 35
							&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 36
							&& mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 37
							&& !mUI.KEYBOARD())
						{
							mMAIN.KEYBOARD();
						}
					}
				}
			}
			break;
		}
	}
}