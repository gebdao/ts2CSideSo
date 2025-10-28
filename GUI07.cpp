#include "gxdheader.h"

GUILDUI mGUILDUI;

BOOL GUILDUI::Init()
{
	mActive = 0;
	return TRUE;
}

void GUILDUI::InitForEnterZone()
{
	int i;

	mActive = 0;
	if (!mMYINFO.mPreviousZoneNumber)
	{
		mMarkNum = 0;
		/*for (i = 0; i < 1000; ++i)
			sub_417110(tGuildMarkFrame[i]);*/
	}
}

void GUILDUI::SetWithGuildInfo()
{
	char* v0;
	char* v1;
	int v2;
	int v3;

	if (mUTIL.CheckInfiniteBattleZone())
	{
		v2 = mFONTCOLOR.mData[44];
		v0 = mMESSAGE.Return(1352);
		mBASICUI.Insert1(v0, v2);
	}
	else if (!strcmp(mMYINFO.mAvatarInfo.aGuildName, ""))
	{
		v3 = mFONTCOLOR.mData[44];
		v1 = mMESSAGE.Return(462);
		mBASICUI.Insert1(v1, v3);
	}
	else
	{
		mPLAY.DemandGuildInfo(1);
	}
}
void GUILDUI::Set()
{
	int i;
	int j;

	for (i = 0; i < 50; ++i)
		mGuildOnlineState[i] = -2;
	mActive = 1;
	for (j = 0; j < 26; ++j)
		mIsClick[j] = 0;
	mWorkSort = 1;
	mGuildPage = 0;
	mSelectIndex = -1;
	mFindIndex = -1;
	GUILDUI::CalculatePresentMemberNum();
	GUILDUI::ProcessMemberConnectInfo();
}
void GUILDUI::Off()
{
	if (mActive)
		mActive = 0;
}
BOOL GUILDUI::LBUTTONDOWN(int uX, int uY)
{
	int sX, sY;
	int i, j, k;

	if (!mActive)
	{
		return 0;
	}

	switch (mWorkSort)
	{
	case 1:
		mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[761]) / 2;
		mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[761]) / 2;
		for (i = 0; i < 10; ++i)
		{
			if (strcmp(&mGuildInfo.gMemberName[10 * mGuildPage][13 * i], "") && i != mSelectIndex && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[712], mX + 17, mY + 20 * i + 190, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mSelectIndex = i;
				return 1;
			}
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 398, mY + 25, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[0] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[782], mX + 165, mY + 403, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[1] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[788], mX + 244, mY + 403, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[2] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[762], mX + 157, mY + 49, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[4] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[764], mX + 213, mY + 49, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[5] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[766], mX + 269, mY + 49, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[6] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[778], mX + 101, mY + 69, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[7] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[768], mX + 157, mY + 69, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[8] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[770], mX + 213, mY + 69, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[9] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[780], mX + 269, mY + 69, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[10] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3294], mX + 45, mY + 49, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[17] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3585], mX + 325, mY + 49, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[25] = 1;
			return 1;
		}
		break;

	case 2:
		mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[834]) / 2;
		mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[834]) / 2;
		if (uX <= mEDITBOX.mEditBoxInfo[7][0] || uX >= mEDITBOX.mEditBoxInfo[7][2] || uY <= mEDITBOX.mEditBoxInfo[7][1] || uY >= mEDITBOX.mEditBoxInfo[7][3])
		{
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 272, mY + 71, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[11] = 1;
				return 1;
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[837], mX + 331, mY + 71, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[12] = 1;
				return 1;
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[834], mX, mY, uX, uY))
			{
				return 1;
			}
		}
		else
		{
			mEDITBOX.Set(8);
			return 1;
		}
		break;

	case 3:
		mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[840]) / 2;
		mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[840]) / 2;
		if (uX > mEDITBOX.mEditBoxInfo[8][0] && uX < mEDITBOX.mEditBoxInfo[8][2] && uY > mEDITBOX.mEditBoxInfo[8][1] && uY < mEDITBOX.mEditBoxInfo[8][3])
		{
			mEDITBOX.Set(9);
			return 1;
		}
		else if (uX > mEDITBOX.mEditBoxInfo[9][0] && uX < mEDITBOX.mEditBoxInfo[9][2] && uY > mEDITBOX.mEditBoxInfo[9][1] && uY < mEDITBOX.mEditBoxInfo[9][3])
		{
			mEDITBOX.Set(10);
			return 1;
		}
		else if (uX > mEDITBOX.mEditBoxInfo[10][0] && uX < mEDITBOX.mEditBoxInfo[10][2] && uY > mEDITBOX.mEditBoxInfo[10][1] && uY < mEDITBOX.mEditBoxInfo[10][3])
		{
			mEDITBOX.Set(11);
			return 1;
		}
		else if (uX > mEDITBOX.mEditBoxInfo[11][0] && uX < mEDITBOX.mEditBoxInfo[11][2] && uY > mEDITBOX.mEditBoxInfo[11][1] && uY < mEDITBOX.mEditBoxInfo[11][3])
		{
			mEDITBOX.Set(12);
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[841], mX + 205, mY + 147, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[13] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[837], mX + 264, mY + 147, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[14] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[840], mX, mY, uX, uY))
		{
			return 1;
		}
		break;

	case 4:
		mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[956]) / 2;
		mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[956]) / 2;
		if (uX <= mEDITBOX.mEditBoxInfo[12][0] || uX >= mEDITBOX.mEditBoxInfo[12][2] || uY <= mEDITBOX.mEditBoxInfo[12][1] || uY >= mEDITBOX.mEditBoxInfo[12][3])
		{
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[721], mX + 71, mY + 39, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[15] = 1;
				return 1;
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[723], mX + 108, mY + 39, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[16] = 1;
				return 1;
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[956], mX, mY, uX, uY))
			{
				return 1;
			}
		}
		else
		{
			mEDITBOX.Set(13);
			return 1;
		}
		break;

	case 5:
		mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3306]) / 2;
		mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3306]) / 2;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2711], mX + 129, mY + 241, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[18] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1779], mX + 185, mY + 241, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[19] = 1;
			return 1;
		}
		for (j = 0; j < 5; ++j)
		{
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 183, mY + 28 * j + 87, uX, uY))
			{
				break;
			}
		}
		if (j < 5)
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[j + 20] = 1;
			return 1;
		}
		break;
	}
	mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[761]) / 2;
	mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[761]) / 2;
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2596], mX + 48, mY - 141, uX, uY))
	{
		return 1;
	}
	else
	{
		return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[761], mX, mY, uX, uY);
	}
}

int GUILDUI::LBUTTONUP(int uX, int uY)
{
	int i, j, k;
	if (!mActive)
		return 0;

	switch (mWorkSort)
	{
	case 1:
		mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[761]) / 2;
		mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[761]) / 2;
		if (mIsClick[0])
		{
			mIsClick[0] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 398, mY + 25, uX, uY))
			{
				GUILDUI::Off();
			}
			return 1;
		}
		if (mIsClick[1])
		{
			mIsClick[1] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[782], mX + 165, mY + 403, uX, uY))
			{
				if (mGuildPage)
				{
					--mGuildPage;
					mSelectIndex = -1;
				}
			}
			return 1;
		}
		if (mIsClick[2])
		{
			mIsClick[2] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[788], mX + 244, mY + 403, uX, uY))
			{
				if (mGuildPage != 4)
				{
					++mGuildPage;
					mSelectIndex = -1;
				}
			}
			return 1;
		}
		if (mIsClick[4])
		{
			mIsClick[4] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[762], mX + 157, mY + 49, uX, uY))
			{
				if (!strcmp(mGuildInfo.gMaster01, mMYINFO.mAvatarInfo.aName))
				{
					mWorkSort = 2;
					mEDITBOX.Set(8);
					SetWindowTextA(mEDITBOX.mDATA[7], "");
				}
				else
				{
					mBASICUI.Insert1(mMESSAGE.Return(467), mFONTCOLOR.mData[44]);
				}
			}
			return 1;
		}
		if (mIsClick[5])
		{
			mIsClick[5] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[764], mX + 213, mY + 49, uX, uY))
			{
				if (!strcmp(mGuildInfo.gMaster01, mMYINFO.mAvatarInfo.aName))
				{
					mWorkSort = 3;
					mEDITBOX.Set(9);
					SetWindowTextA(mEDITBOX.mDATA[8], "");
					SetWindowTextA(mEDITBOX.mDATA[9], "");
					SetWindowTextA(mEDITBOX.mDATA[10], "");
					SetWindowTextA(mEDITBOX.mDATA[11], "");
					SetWindowTextA(mEDITBOX.mDATA[8], mGuildInfo.gNotice[0]);
					SendMessageA(mEDITBOX.mDATA[8], 0xB1u, strlen(mGuildInfo.gNotice[0]), strlen(mGuildInfo.gNotice[0]));
					SetWindowTextA(mEDITBOX.mDATA[9], mGuildInfo.gNotice[1]);
					SendMessageA(mEDITBOX.mDATA[9], 0xB1u, strlen(mGuildInfo.gNotice[1]), strlen(mGuildInfo.gNotice[1]));
					SetWindowTextA(mEDITBOX.mDATA[10], mGuildInfo.gNotice[2]);
					SendMessageA(mEDITBOX.mDATA[10], 0xB1u, strlen(mGuildInfo.gNotice[2]), strlen(mGuildInfo.gNotice[2]));
					SetWindowTextA(mEDITBOX.mDATA[11], mGuildInfo.gNotice[3]);
					SendMessageA(mEDITBOX.mDATA[11], 0xB1u, strlen(mGuildInfo.gNotice[3]), strlen(mGuildInfo.gNotice[3]));
				}
				else
				{
					mBASICUI.Insert1(mMESSAGE.Return(467), mFONTCOLOR.mData[44]);
				}
			}
			return 1;
		}
		if (mIsClick[6])
		{
			mIsClick[6] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[766], mX + 269, mY + 49, uX, uY))
			{
				if (strcmp(mGuildInfo.gMaster01, mMYINFO.mAvatarInfo.aName))
				{
					mBASICUI.Insert1(mMESSAGE.Return(467), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (mSelectIndex == -1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(472), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (!strcmp(&mGuildInfo.gMemberName[10 * mGuildPage][13 * mSelectIndex], mMYINFO.mAvatarInfo.aName))
				{
					mBASICUI.Insert1(mMESSAGE.Return(546), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (mGuildInfo.gMemberRole[10 * mGuildPage + mSelectIndex] == 2)
				{
					if (strcmp(mGuildInfo.gSubMaster01, "") && strcmp(mGuildInfo.gSubMaster02, ""))
					{
						mBASICUI.Insert1(mMESSAGE.Return(547), mFONTCOLOR.mData[44]);
						return 1;
					}
					mAppointSort = 1;
					strcpy(mSelectAvatarName, &mGuildInfo.gMemberName[10 * mGuildPage][13 * mSelectIndex]);
					mCBOXUI.Set(24, mMESSAGE.Return(548), "");
				}
				else
				{
					mAppointSort = 2;
					strcpy(mSelectAvatarName, &mGuildInfo.gMemberName[10 * mGuildPage][13 * mSelectIndex]);
					mCBOXUI.Set(25, mMESSAGE.Return(549), "");
				}
			}
			return 1;
		}
		if (mIsClick[7])
		{
			mIsClick[7] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[778], mX + 101, mY + 69, uX, uY))
			{
				if (!strcmp(mGuildInfo.gMaster01, mMYINFO.mAvatarInfo.aName))
				{
					mBASICUI.Insert1(mMESSAGE.Return(466), mFONTCOLOR.mData[44]);
					return 1;
				}
				mCBOXUI.Set(18, mMESSAGE.Return(477), "");
				GUILDUI::Off();
			}
			return 1;
		}
		if (mIsClick[8])
		{
			mIsClick[8] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[768], mX + 157, mY + 69, uX, uY))
			{
				if (strcmp(mGuildInfo.gMaster01, mMYINFO.mAvatarInfo.aName))
				{
					mBASICUI.Insert1(mMESSAGE.Return(467), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (mSelectIndex == -1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(472), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (!strcmp(&mGuildInfo.gMemberName[10 * mGuildPage][13 * mSelectIndex], mMYINFO.mAvatarInfo.aName))
				{
					mBASICUI.Insert1(mMESSAGE.Return(556), mFONTCOLOR.mData[44]);
				}
				else
				{
					mWorkSort = 4;
					mEDITBOX.Set(13);
					SetWindowTextA(mEDITBOX.mDATA[12], "");
				}
			}
			return 1;
		}
		if (mIsClick[9])
		{
			mIsClick[9] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[770], mX + 213, mY + 69, uX, uY))
			{
				if (strcmp(mGuildInfo.gMaster01, mMYINFO.mAvatarInfo.aName))
				{
					mBASICUI.Insert1(mMESSAGE.Return(467), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (mSelectIndex == -1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(472), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (!strcmp(&mGuildInfo.gMemberName[10 * mGuildPage][13 * mSelectIndex], mMYINFO.mAvatarInfo.aName))
				{
					mBASICUI.Insert1(mMESSAGE.Return(474), mFONTCOLOR.mData[44]);
				}
				else
				{
					strcpy(mSelectAvatarName, &mGuildInfo.gMemberName[10 * mGuildPage][13 * mSelectIndex]);
					mCBOXUI.Set(17, mMESSAGE.Return(473), "");
				}
			}
			return 1;
		}
		if (mIsClick[10])
		{
			mIsClick[10] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[780], mX + 269, mY + 69, uX, uY))
			{
				if (!strcmp(mGuildInfo.gMaster01, mMYINFO.mAvatarInfo.aName))
				{
					mCBOXUI.Set(16, mMESSAGE.Return(469), "");
					GUILDUI::Off();
				}
				else
				{
					mBASICUI.Insert1(mMESSAGE.Return(467), mFONTCOLOR.mData[44]);
				}
			}
			return 1;
		}
		if (mIsClick[17])
		{
			mIsClick[17] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3294], mX + 45, mY + 49, uX, uY))
			{
				mPLAY.DemandGuildInfo(3);
				mWorkSort = 5;
				mUnknown = mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort;
			}
			return 1;
		}
		if (mIsClick[25])
		{
			mIsClick[25] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3585], mX + 325, mY + 49, uX, uY))
			{
				if (strcmp(mGuildInfo.gMaster01, mMYINFO.mAvatarInfo.aName))
				{
					mBASICUI.Insert1(mMESSAGE.Return(566), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (mSelectIndex == -1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(472), mFONTCOLOR.mData[44]);
					return 1;
				}
				strcpy(mSelectAvatarName, &mGuildInfo.gMemberName[10 * mGuildPage][13 * mSelectIndex]);
				if (!strcmp(mSelectAvatarName, mMYINFO.mAvatarInfo.aName))
				{
					mBASICUI.Insert1(mMESSAGE.Return(2133), mFONTCOLOR.mData[44]);
				}
				else
				{
					mCBOXUI.Set(56, mMESSAGE.Return(2107), "");
				}
			}
			return 1;
		}
		break;

	case 2:
		mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[834]) / 2;
		mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[834]) / 2;
		if (mIsClick[11])
		{
			mIsClick[11] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 272, mY + 71, uX, uY))
			{
				GUILDUI::ProcessForGuildNotice();
			}
			return 1;
		}
		if (mIsClick[12])
		{
			mIsClick[12] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[837], mX + 331, mY + 71, uX, uY))
			{
				mWorkSort = 1;
				if (mEDITBOX.mDataIndex == 8)
				{
					mEDITBOX.Set(0);
				}
			}
			return 1;
		}
		break;

	case 3:
		mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[840]) / 2;
		mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[840]) / 2;
		if (mIsClick[13])
		{
			mIsClick[13] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[841], mX + 205, mY + 147, uX, uY))
			{
				GetWindowTextA(mEDITBOX.mDATA[8], mGuildNotice[0], 51);
				GetWindowTextA(mEDITBOX.mDATA[9], mGuildNotice[1], 51);
				GetWindowTextA(mEDITBOX.mDATA[10], mGuildNotice[2], 51);
				GetWindowTextA(mEDITBOX.mDATA[11], mGuildNotice[3], 51);

				mPLAY.DemandGuildNotice(&mGuildNotice[0][0]);
				mWorkSort = 1;
				if (mEDITBOX.mDataIndex == 9 || mEDITBOX.mDataIndex == 10 || mEDITBOX.mDataIndex == 11 || mEDITBOX.mDataIndex == 12)
				{
					mEDITBOX.Set(0);
				}
			}
			return 1;
		}
		if (mIsClick[14])
		{
			mIsClick[14] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[837], mX + 264, mY + 147, uX, uY))
			{
				mWorkSort = 1;
				if (mEDITBOX.mDataIndex == 9 || mEDITBOX.mDataIndex == 10 || mEDITBOX.mDataIndex == 11 || mEDITBOX.mDataIndex == 12)
				{
					mEDITBOX.Set(0);
				}
			}
			return 1;
		}
		break;

	case 4:
		mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[956]) / 2;
		mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[956]) / 2;
		if (mIsClick[15])
		{
			mIsClick[15] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[721], mX + 71, mY + 39, uX, uY))
			{
				GetWindowTextA(mEDITBOX.mDATA[12], mCallName, 5);
				mPLAY.DemandGuildCallName(&mGuildInfo.gMemberName[10 * mGuildPage][13 * mSelectIndex], mCallName);
				mWorkSort = 1;
				if (mEDITBOX.mDataIndex == 13)
				{
					mEDITBOX.Set(0);
				}
			}
			return 1;
		}
		if (mIsClick[16])
		{
			mIsClick[16] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[723], mX + 108, mY + 39, uX, uY))
			{
				mWorkSort = 1;
				if (mEDITBOX.mDataIndex == 13)
				{
					mEDITBOX.Set(0);
				}
			}
			return 1;
		}
		break;

	case 5:
		mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3306]) / 2;
		mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3306]) / 2;
		if (mIsClick[18])
		{
			mIsClick[18] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2711], mX + 129, mY + 241, uX, uY))
			{
				if (mMYINFO.mAvatarInfo.aGuildRole && mMYINFO.mAvatarInfo.aGuildRole != 1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(1718), mFONTCOLOR.mData[44]);
				}
				else
				{
					mPLAY.DemandGuildBuffSort(mUnknown);
				}
			}
			return 1;
		}
		else if (mIsClick[19])
		{
			mIsClick[19] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1779], mX + 185, mY + 241, uX, uY))
			{
				mWorkSort = 1;
			}
			return 1;
		}
		for (i = 0; i < 5; i++)
		{
			if (mIsClick[i + 20])
			{
				break;
			}
		}
		if (i < 5)
		{
			mIsClick[i + 20] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 183, mY + 28 * i + 87, uX, uY))
			{
				if (mMYINFO.mAvatarInfo.aGuildRole && mMYINFO.mAvatarInfo.aGuildRole != 1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(1718), mFONTCOLOR.mData[44]);
				}
				else
				{
					mUnknown = i;
				}
			}
			return 1;
		}
		break;

	default:
		break;
	}

	return 0;
}

int GUILDUI::RBUTTONDOWN(int uX, int uY)
{
	return 0;
}
int GUILDUI::RBUTTONUP(int uX, int uY)
{
	return 0;
}
int GUILDUI::KEYBOARD()
{
	int result;
	int j;
	int i;

	if (mActive)
	{
		for (i = 0; i < mGXD.mKeyboardBufferedDataNum && (mGXD.mKeyboardBufferedData[i].dwData & 0x80) == 0; ++i)
			;
		if (i == mGXD.mKeyboardBufferedDataNum)
		{
			return 0;
		}
		else if (mGXD.mKeyboardBufferedData[i].dwOfs == 34)
		{
			GUILDUI::Off();
			return 1;
		}
		return 0;
	}
	else if (mMAIN.mMainMode == 6 && mMAIN.mSubMode == 4)
	{
		for (j = 0; j < mGXD.mKeyboardBufferedDataNum && (mGXD.mKeyboardBufferedData[j].dwData & 0x80) == 0; ++j)
			;
		if (j == mGXD.mKeyboardBufferedDataNum)
		{
			return 0;
		}
		else if (mGXD.mKeyboardBufferedData[j].dwOfs == 34)
		{
            mUI.Off(1);
			GUILDUI::SetWithGuildInfo();
			return 1;
		}
		return 0;
	}
	return 0;
}

void GUILDUI::Draw(int uX, int uY)
{
	int sX, sY, tstren, i, j, k;
	char* tstr;
	char String[1000];
	int tColorNumber;

	if (mActive)
	{
		sX = mMYINFO.mScreenXSize / 2;
		mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[761]) / 2;
		sY = mMYINFO.mScreenYSize / 2;
		mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[761]) / 2;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2596], mX + 48, mY - 141, uX, uY))
		{
			mPOINTER.Set(0);
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[761], mX, mY, uX, uY))
		{
			mPOINTER.Set(0);
		}
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[2596], mX + 48, mY - 141);
		mUTIL.DrawFont2D(mGuildInfo.gNotice[0], mX + 59, mY - 87, 34);
		mUTIL.DrawFont2D(mGuildInfo.gNotice[1], mX + 59, mY - 69, 34);
		mUTIL.DrawFont2D(mGuildInfo.gNotice[2], mX + 59, mY - 51, 34);
		mUTIL.DrawFont2D(mGuildInfo.gNotice[3], mX + 59, mY - 33, 34);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[761], mX, mY);
		strcpy(String, mGuildInfo.gName);
		mUTIL.DrawFont2D(String, mX + 125, mY + 100, 1);
		strcpy(String, mGuildInfo.gMaster01);
		mUTIL.DrawFont2D(String, mX + 125, mY + 117, 1);
		sprintf(String, "%d / %d", mGuildFreeSlot, 10 * mGuildInfo.gGrade);
		mUTIL.DrawFont2D(String, mX + 125, mY + 134, 1);
		sprintf(String, "%d", mGuildInfo.gScore1);
		mUTIL.DrawFont2D(String, mX + 249, mY + 134, 1);
		for (i = 0; i < 10; ++i)
		{
			if (strcmp(&mGuildInfo.gMemberName[10 * mGuildPage][13 * i], ""))
			{
				if (i == mSelectIndex)
					GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 17, mY + 20 * i + 190);
				else
					GIMAGE2D::Display(&mGDATA.mUI_MAIN[712], mX + 17, mY + 20 * i + 190);
				strcpy(String, &mGuildInfo.gMemberName[10 * mGuildPage][13 * i]);
				sY = mY + 20 * i + 192;
				sX = mX + 110;
				tstren = mUTIL.GetStringLength(String);
				mUTIL.DrawFont2D(String, sX - tstren / 2, sY, 1);
				int v50 = mGuildInfo.gMemberRole[10 * mGuildPage + i];
				if (v50)
				{
					if (v50 == 1)
					{
						tstr = mMESSAGE.Return(464);
						strcpy(String, tstr);
					}
					else if (v50 == 2)
					{
						if (!strcmp(&mGuildInfo.gMemberCall[10 * mGuildPage][5 * i], ""))
						{
							tstr = mMESSAGE.Return(465);
							strcpy(String, tstr);
						}
						else
						{
							strcpy(String, &mGuildInfo.gMemberCall[10 * mGuildPage][5 * i]);
						}
					}
				}
				else
				{
					tstr = mMESSAGE.Return(463);
					strcpy(String, tstr);
				}
				sY = mY + 20 * i + 192;
				sX = mX + 220;
				tstren = mUTIL.GetStringLength(String);
				mUTIL.DrawFont2D(String, sX - tstren / 2, sY, 1);
				int v49 = mGuildOnlineState[10 * mGuildPage + i];
				if (v49 == -2)
				{
					tstr = mMESSAGE.Return(815);
					strcpy(String, tstr);
					tColorNumber = 3;
				}
				else if (v49 > -2 && v49 <= 0)
				{
					tstr = mMESSAGE.Return(816);
					strcpy(String, tstr);
					tColorNumber = 2;
				}
				else
				{
					tstr = mZONENAME.Return(mGuildOnlineState[10 * mGuildPage + i]);
					strcpy(String, tstr);
					tColorNumber = 1;
				}
				sY = mY + 20 * i + 192;
				sX = mX + 340;
				tstren = mUTIL.GetStringLength(String);
				mUTIL.DrawFont2D(String, sX - tstren / 2, sY, tColorNumber);
			}
		}
		switch (mGuildPage)
		{
		case 0:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[783], mX + 181, mY + 404);
			break;
		case 1:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[784], mX + 194, mY + 404);
			break;
		case 2:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[785], mX + 206, mY + 404);
			break;
		case 3:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[786], mX + 219, mY + 404);
			break;
		case 4:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[787], mX + 231, mY + 404);
			break;
		default:
			break;
		}
		if (mIsClick[0])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 398, mY + 25);
		if (mIsClick[1])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[782], mX + 165, mY + 403);
		if (mIsClick[2])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[788], mX + 244, mY + 403);
		if (mIsClick[4])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[763], mX + 157, mY + 49);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[762], mX + 157, mY + 49, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[762], mX + 157, mY + 49);
		}
		if (mIsClick[5])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[765], mX + 213, mY + 49);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[764], mX + 213, mY + 49, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[764], mX + 213, mY + 49);
		}
		if (mIsClick[6])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[767], mX + 269, mY + 49);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[766], mX + 269, mY + 49, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[766], mX + 269, mY + 49);
		}
		if (mIsClick[7])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[779], mX + 101, mY + 69);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[778], mX + 101, mY + 69, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[778], mX + 101, mY + 69);
		}
		if (mIsClick[8])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[769], mX + 157, mY + 69);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[768], mX + 157, mY + 69, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[768], mX + 157, mY + 69);
		}
		if (mIsClick[9])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[771], mX + 213, mY + 69);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[770], mX + 213, mY + 69, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[770], mX + 213, mY + 69);
		}
		if (mIsClick[10])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[781], mX + 269, mY + 69);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[780], mX + 269, mY + 69, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[780], mX + 269, mY + 69);
		}
		if (mIsClick[17])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3295], mX + 45, mY + 49);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3294], mX + 45, mY + 49, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3294], mX + 45, mY + 49);
		}
		if (mIsClick[25])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3586], mX + 325, mY + 49);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3585], mX + 325, mY + 49, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3585], mX + 325, mY + 49);
		}
		switch (mWorkSort)
		{
		case 2:
			sX = mMYINFO.mScreenXSize / 2;
			mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[834]) / 2;
			sY = mMYINFO.mScreenYSize / 2;
			mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[834]) / 2;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[834], mX, mY, uX, uY))
				mPOINTER.Set(0);
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[834], mX, mY);
			GetWindowTextA(mEDITBOX.mDATA[7], String, 1000);
			mUTIL.DrawFont2D(String, mX + 16, mY + 43, 1);
			if (mEDITBOX.mDataIndex == 8)
			{
				sY = mY + 43;
				sX = mX;
				tstren = mUTIL.GetStringLength(String);
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + tstren + 17, sY);
			}
			if (mIsClick[11])
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[836], mX + 272, mY + 71);
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 272, mY + 71, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[835], mX + 272, mY + 71);
			}
			if (mIsClick[12])
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[838], mX + 331, mY + 71);
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[837], mX + 331, mY + 71, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[837], mX + 331, mY + 71);
			}
			break;
		case 3:
			sX = mMYINFO.mScreenXSize / 2;
			mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[840]) / 2;
			sY = mMYINFO.mScreenYSize / 2;
			mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[840]) / 2;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[840], mX, mY, uX, uY))
				mPOINTER.Set(0);
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[840], mX, mY);
			GetWindowTextA(mEDITBOX.mDATA[8], String, 1000);
			mUTIL.DrawFont2D(String, mX + 11, mY + 43, 1);
			if (mEDITBOX.mDataIndex == 9)
			{
				sY = mY + 43;
				sX = mX;
				tstren = mUTIL.GetStringLength(String);
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + tstren + 12, sY);
			}
			GetWindowTextA(mEDITBOX.mDATA[9], String, 1000);
			mUTIL.DrawFont2D(String, mX + 11, mY + 68, 1);
			if (mEDITBOX.mDataIndex == 10)
			{
				sY = mY + 68;
				sX = mX;
				tstren = mUTIL.GetStringLength(String);
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + tstren + 12, sY);
			}
			GetWindowTextA(mEDITBOX.mDATA[10], String, 1000);
			mUTIL.DrawFont2D(String, mX + 11, mY + 93, 1);
			if (mEDITBOX.mDataIndex == 11)
			{
				sY = mY + 93;
				sX = mX;
				tstren = mUTIL.GetStringLength(String);
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + tstren + 12, sY);
			}
			GetWindowTextA(mEDITBOX.mDATA[11], String, 1000);
			mUTIL.DrawFont2D(String, mX + 11, mY + 118, 1);
			if (mEDITBOX.mDataIndex == 12)
			{
				sY = mY + 118;
				sX = mX;
				tstren = mUTIL.GetStringLength(String);
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + tstren + 12, sY);
			}
			if (mIsClick[13])
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[842], mX + 205, mY + 147);
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[841], mX + 205, mY + 147, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[841], mX + 205, mY + 147);
			}
			if (mIsClick[14])
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[838], mX + 264, mY + 147);
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[837], mX + 264, mY + 147, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[837], mX + 264, mY + 147);
			}
			break;
		case 4:
			sX = mMYINFO.mScreenXSize / 2;
			mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[956]) / 2;
			sY = mMYINFO.mScreenYSize / 2;
			mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[956]) / 2;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[956], mX, mY, uX, uY))
				mPOINTER.Set(0);
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[956], mX, mY);
			GetWindowTextA(mEDITBOX.mDATA[12], String, 1000);
			mUTIL.DrawFont2D(String, mX + 112, mY + 18, 1);
			if (mEDITBOX.mDataIndex == 13)
			{
				sY = mY + 18;
				sX = mX;
				tstren = mUTIL.GetStringLength(String);
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], sX + tstren + 113, sY);
			}
			if (mIsClick[15])
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[722], mX + 71, mY + 39);
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[721], mX + 71, mY + 39, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[721], mX + 71, mY + 39);
			}
			if (mIsClick[16])
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[724], mX + 108, mY + 39);
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[723], mX + 108, mY + 39, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[723], mX + 108, mY + 39);
			}
			break;
		case 5:
			sX = mMYINFO.mScreenXSize / 2;
			mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3306]) / 2;
			sY = mMYINFO.mScreenYSize / 2;
			mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3306]) / 2;
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3306], mX, mY);
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 183, mY + 28 * mUnknown + 87);
			sprintf(String, "%d", mGuildInfo.gBuffEffectTime);
			sY = mY + 246;
			sX = mX + 100;
			tstren = mUTIL.GetStringLength(String);
			mUTIL.DrawFont2D(String, sX - tstren, sY, 3);
			if (mIsClick[18])
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[2712], mX + 129, mY + 241);
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2711], mX + 129, mY + 241, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[2711], mX + 129, mY + 241);
			}
			if (mIsClick[19])
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[1780], mX + 185, mY + 241);
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1779], mX + 185, mY + 241, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[1779], mX + 185, mY + 241);
			}
			break;
		default:
			return;
		}
	}
}
int GUILDUI::DrawForRollOver(int uX, int uY)
{
	return 0;
}
void GUILDUI::CalculatePresentMemberNum()
{
	int i;

	mGuildFreeSlot = 0;
	for (i = 0; i < 50; ++i)
	{
		if (strcmp(mGuildInfo.gMemberName[i], ""))
			++mGuildFreeSlot;
	}
}
void GUILDUI::ProcessMemberConnectInfo()
{
	int i;

	if (mActive)
	{
		for (i = mFindIndex + 1; i < 50 && !strcmp(mGuildInfo.gMemberName[i], ""); ++i)
			;
		if (i == 50)
		{
			mFindIndex = 49;
		}
		else
		{
			mFindIndex = i;
			mTRANSFER.T_GUILD_FIND_SEND(mGuildInfo.gMemberName[mFindIndex]);
		}
	}
}
void GUILDUI::ProcessForGuildNotice()
{
	char* v0;
	int v1;
	char String[1000];

	if (GetWindowTextA(mEDITBOX.mDATA[7], String, 1000))
	{
		SetWindowTextA(mEDITBOX.mDATA[7], "");
		mTRANSFER.T_GUILD_NOTICE_SEND(String);
	}
}






BOARDUI mBOARDUI;

BOOL BOARDUI::Init()
{
	int i;
	for (i = 0; i < 13; ++i)
		mDisplayState[i] = 0;

	return TRUE;
}

void BOARDUI::Off()
{
	int i;

	for (i = 0; i < 13; ++i)
		mDisplayState[i] = 0;
}

int BOARDUI::LBUTTONDOWN(int uX, int uY)
{
	return 0;
}

int BOARDUI::LBUTTONUP(int uX, int uY)
{
	return 0;
}

int BOARDUI::RBUTTONDOWN(int uX, int uY)
{
	return 0;
}

int BOARDUI::RBUTTONUP(int uX, int uY)
{
	return 0;
}

int BOARDUI::KEYBOARD()
{
	return 0;
}

void BOARDUI::Set(int tSort1, int tSort2, char* tString, char* tString2)
{
	if (tSort1 >= 0 && tSort1 <= 12)
	{
		mDisplayState[tSort1] = 1;
		memset(mMessage2, 0, 101);
		strcpy(mMessage1[tSort1], tString);
		strcpy(mMessage2, tString2);
		mUpdateTime[tSort1] = mAPP->hPresentElapsedSeconds;
		if (tSort1 == 12)
			mUpdateTime[12] = mUpdateTime[12] + 20.0;
		switch (tSort1)
		{
		case 0:
			mDisplayState[2] = 0;
			mDisplayState[12] = 0;
			GSOUND::Play(&mGDATA.mSOUND_5[213], 0, 100);
			break;
		case 1:
			mDisplayState[11] = 0;
			GSOUND::Play(&mGDATA.mSOUND_5[254], 0, 100);
			break;
		case 2:
			mDisplayState[0] = 0;
			mDisplayState[12] = 0;
			switch (tSort2)
			{
			case 1:
				GSOUND::Play(&mGDATA.mSOUND_5[217], 0, 100);
				break;
			case 2:
				GSOUND::Play(&mGDATA.mSOUND_5[218], 0, 100);
				break;
			case 3:
				GSOUND::Play(&mGDATA.mSOUND_5[219], 0, 100);
				break;
			case 4:
				GSOUND::Play(&mGDATA.mSOUND_5[256], 0, 100);
				break;
			default:
				return;
			}
			break;
		case 3:
			mDisplayState[10] = 0;
			switch (tSort2)
			{
			case 1:
			case 6:
				GSOUND::Play(&mGDATA.mSOUND_5[214], 0, 100);
				break;
			case 2:
				GSOUND::Play(&mGDATA.mSOUND_5[215], 0, 100);
				break;
			case 3:
				goto LABEL_17;
			case 4:
				goto LABEL_18;
			case 5:
				goto LABEL_37;
			case 7:
				GSOUND::Play(&mGDATA.mSOUND_5[255], 0, 100);
				break;
			default:
				return;
			}
			break;
		case 4:
			mDisplayState[5] = 0;
			switch (tSort2)
			{
			case 1:
				GSOUND::Play(&mGDATA.mSOUND_5[223], 0, 100);
				break;
			case 2:
				GSOUND::Play(&mGDATA.mSOUND_5[224], 0, 100);
				break;
			case 3:
				GSOUND::Play(&mGDATA.mSOUND_5[225], 0, 100);
				break;
			case 4:
				GSOUND::Play(&mGDATA.mSOUND_5[258], 0, 100);
				break;
			default:
				return;
			}
			break;
		case 5:
			mDisplayState[4] = 0;
			switch (tSort2)
			{
			case 1:
				GSOUND::Play(&mGDATA.mSOUND_5[220], 0, 100);
				break;
			case 2:
				GSOUND::Play(&mGDATA.mSOUND_5[221], 0, 100);
				break;
			case 3:
				GSOUND::Play(&mGDATA.mSOUND_5[222], 0, 100);
				break;
			case 4:
				GSOUND::Play(&mGDATA.mSOUND_5[257], 0, 100);
				break;
			default:
				return;
			}
			break;
		case 6:
			mDisplayState[7] = 0;
			mDisplayState[8] = 0;
			mDisplayState[9] = 0;
			GSOUND::Play(&mGDATA.mSOUND_5[106], 0, 100);
			break;
		case 7:
			mDisplayState[6] = 0;
			mDisplayState[8] = 0;
			mDisplayState[9] = 0;
			GSOUND::Play(&mGDATA.mSOUND_5[107], 0, 100);
			break;
		case 8:
			mDisplayState[6] = 0;
			mDisplayState[7] = 0;
			mDisplayState[9] = 0;
			GSOUND::Play(&mGDATA.mSOUND_5[208], 0, 100);
			break;
		case 9:
			mDisplayState[6] = 0;
			mDisplayState[7] = 0;
			mDisplayState[8] = 0;
			GSOUND::Play(&mGDATA.mSOUND_5[209], 0, 100);
			break;
		case 10:
			mDisplayState[3] = 0;
			switch (tSort2)
			{
			case 1:
				GSOUND::Play(&mGDATA.mSOUND_5[280], 0, 100);
				break;
			case 2:
				GSOUND::Play(&mGDATA.mSOUND_5[292], 0, 100);
				break;
			case 3:
			LABEL_17:
				GSOUND::Play(&mGDATA.mSOUND_5[293], 0, 100);
				break;
			case 4:
			LABEL_18:
				GSOUND::Play(&mGDATA.mSOUND_5[294], 0, 100);
				break;
			case 5:
			LABEL_37:
				GSOUND::Play(&mGDATA.mSOUND_5[295], 0, 100);
				break;
			default:
				return;
			}
			break;
		case 11:
			mDisplayState[1] = 0;
			switch (tSort2)
			{
			case 1:
				GSOUND::Play(&mGDATA.mSOUND_5[314], 0, 100);
				break;
			case 2:
				GSOUND::Play(&mGDATA.mSOUND_5[315], 0, 100);
				break;
			case 3:
				GSOUND::Play(&mGDATA.mSOUND_5[316], 0, 100);
				break;
			case 4:
				GSOUND::Play(&mGDATA.mSOUND_5[317], 0, 100);
				break;
			default:
				return;
			}
			break;
		case 12:
			mDisplayState[0] = 0;
			mDisplayState[2] = 0;
			GSOUND::Play(&mGDATA.mSOUND_5[254], 0, 100);
			break;
		default:
			return;
		}
	}
}
void BOARDUI::Draw(int uX, int uY)
{
	int i, j, k;
	int sX, sY;
	char* tSTR;
	int tStrLen = 0;

	if (mMAIN.mMainMode == 6 && mMAIN.mSubMode == 4)
	{
		for (i = 0; i < 13; ++i)
		{
			if (mDisplayState[i])
			{
				if (mAPP->hPresentElapsedSeconds - mUpdateTime[i] <= 10.0)
				{
					switch (i)
					{
					case 0:
					case 2:
						mMYINFO.AdjustScreenCoord(744, 287, 56, &mX, &mY);
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[744], mX, mY + 22);
						sY = mY + 26;
						sX = mX + 225;
						tStrLen = mUTIL.GetStringLength(mMessage1[i]);
						mUTIL.DrawFont2D(mMessage1[i], sX - tStrLen / 2, sY, 1);
						break;
					case 1:
					case 11:
						mMYINFO.AdjustScreenCoord(744, 287, 56, &mX, &mY);
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[744], mX, mY);
						sY = mY + 4;
						sX = mX + 225;
						tStrLen = mUTIL.GetStringLength(mMessage1[i]);
						mUTIL.DrawFont2D(mMessage1[i], sX - tStrLen / 2, sY, 1);
						break;
					case 3:
					case 10:
						mMYINFO.AdjustScreenCoord(744, 287, 56, &mX, &mY);
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[744], mX, mY + 44);
						sY = mY + 48;
						sX = mX + 225;
						tStrLen = mUTIL.GetStringLength(mMessage1[i]);
						mUTIL.DrawFont2D(mMessage1[i], sX - tStrLen / 2, sY, 1);
						break;
					case 4:
					case 5:
						mMYINFO.AdjustScreenCoord(744, 287, 56, &mX, &mY);
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[744], mX, mY + 66);
						sY = mY + 70;
						sX = mX + 225;
						tStrLen = mUTIL.GetStringLength(mMessage1[i]);
						mUTIL.DrawFont2D(mMessage1[i], sX - tStrLen / 2, sY, 1);
						break;
					case 6:
					case 7:
					case 8:
					case 9:
						mMYINFO.AdjustScreenCoord(744, 287, 56, &mX, &mY);
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[744], mX, mY + 88);
						sY = mY + 92;
						sX = mX + 225;
						tStrLen = mUTIL.GetStringLength(mMessage1[i]);
						mUTIL.DrawFont2D(mMessage1[i], sX - tStrLen / 2, sY, 1);
						break;
					case 12:
						mMYINFO.AdjustScreenCoord(1027, 287, 78, &mX, &mY);
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[1027], mX, mY);
						sY = mY + 16;
						sX = mX + 222;
						tStrLen = mUTIL.GetStringLength(mMessage1[i]);
						mUTIL.DrawFont2D(mMessage1[i], sX - tStrLen / 2, sY, 1);
						sY = mY + 38;
						sX = mX + 222;
						tStrLen = mUTIL.GetStringLength(mMessage2);
						mUTIL.DrawFont2D(mMessage2, sX - tStrLen / 2, sY, 1);
						break;
					default:
						continue;
					}
				}
				else
				{
					mDisplayState[i] = 0;
				}
			}
		}
	}
	else
	{
		for (j = 0; j < 13; ++j)
			mDisplayState[j] = 0;
	}
}

BOOL BOARDUI::DrawForRollOver(int uX, int uY)
{
	return 0;
}







MBOXUI mMBOXUI;

BOOL MBOXUI::Init()
{
	mActive = 0;

	return 1;
}

void MBOXUI::Set(int tSort, char* tMessage, char* tMessage2)
{
	int i; // [esp+4h] [ebp-4h]

	mPOINTER.Set(0);
	mEDITBOX.Set(0);
	mActive = 1;
	for (i = 0; i < 1; ++i)
		mIsClick[i] = 0;
	mSort = tSort;
	strcpy(mMessage1, tMessage);
	strcpy(mMessage2, tMessage2);
}

void MBOXUI::Off()
{
	if (mActive)
		mActive = 0;
}

void MBOXUI::InitForEnterZone()
{
	mActive = 0;
}
int MBOXUI::LBUTTONDOWN(int uX, int uY)
{
	int sX;
	int sY;

	if (!mActive)
	{
		return 0;
	}
	sX = mMYINFO.mScreenXSize / 2;
	mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[7]) / 2;
	sY = mMYINFO.mScreenYSize / 2;
	mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[7]) / 2;
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[8], mX + 203, mY + 90, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[0] = 1;
	}
	return 1;
}

int MBOXUI::LBUTTONUP(int uX, int uY)
{
	int sX;
	int sY;

	if (!mActive)
	{
		return 0;
	}
	sX = mMYINFO.mScreenXSize / 2;
	mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[7]) / 2;
	sY = mMYINFO.mScreenYSize / 2;
	mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[7]) / 2;
	if (!mIsClick[0])
	{
		return 1;
	}
	mIsClick[0] = 0;
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[8], mX + 203, mY + 90, uX, uY))
	{
		MBOXUI::Off();
		switch (mSort)
		{
		case 1:
			break;
		case 2:
			mNETWORK.CLOSE();
			mMAIN.mMainMode = 2;
			mMAIN.mSubMode = 0;
			mMAIN.mTicks = 0;
			break;
		case 3:
			mAPP->hAbortProgram = 1;
			break;
		case 4:
			mTRANSFER.T_DUEL_CANCEL_SEND();
			break;
		case 5:
			mTRANSFER.T_TRADE_CANCEL_SEND();
			break;
		case 6:
			mTRANSFER.T_FRIEND_CANCEL_SEND();
			break;
		case 7:
			mTRANSFER.T_PARTY_CANCEL_SEND();
			break;
		case 8:
			mTRANSFER.T_GUILD_CANCEL_SEND();
			break;
		case 9:
			mTRANSFER.T_TEACHER_CANCEL_SEND();
			break;
		default:
			break;
		}
	}
	return 1;
}

BOOL MBOXUI::RBUTTONDOWN(int uX, int uY)
{
	return mActive != 0;
}

BOOL MBOXUI::RBUTTONUP(int uX, int uY)
{
	return mActive != 0;
}

BOOL MBOXUI::KEYBOARD()
{
	return mActive != 0;
}

void MBOXUI::Draw(int uX, int uY)
{
	char* tSTR;
	int tStrLen = 0;
	int sX, sY;

	if (mActive)
	{
		sX = mMYINFO.mScreenXSize / 2;
		mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[7]) / 2;
		sY = mMYINFO.mScreenYSize / 2;
		mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[7]) / 2;
		mPOINTER.Set(0);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[7], mX, mY);
		if (!strcmp(mMessage2, ""))
		{
			sY = mY + 42;
			sX = mX + 234;
			tStrLen = mUTIL.GetStringLength(mMessage1);
			mUTIL.DrawFont2D(mMessage1, sX - tStrLen / 2, sY, 1);
		}
		else
		{
			sY = mY + 34;
			sX = mX + 234;
			tStrLen = mUTIL.GetStringLength(mMessage1);
			mUTIL.DrawFont2D(mMessage1, sX - tStrLen / 2, sY, 1);
			sY = mY + 50;
			sX = mX + 234;
			tStrLen = mUTIL.GetStringLength(mMessage2);
			mUTIL.DrawFont2D(mMessage2, sX - tStrLen / 2, sY, 1);
		}
		if (mIsClick[0])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], mX + 203, mY + 90);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[8], mX + 203, mY + 90, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[9], mX + 203, mY + 90);
		}
		else
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[8], mX + 203, mY + 90);
		}
	}
}
BOOL MBOXUI::DrawForRollOver(int uX, int uY)
{
	return mActive != 0;
}






TOWERBUILDUI mTOWERBUILDUI;

BOOL TOWERBUILDUI::Init()
{
	mActive = 0;
	return TRUE;
}

void TOWERBUILDUI::InitForEnterZone()
{
	mActive = 0;
}
void TOWERBUILDUI::Set(int tSort)
{
	int i;

	mActive = 1;
	for (i = 0; i < 13; ++i)
		mIsClick[i] = 0;
	mSort = tSort;
}
void TOWERBUILDUI::Off()
{
	if (mActive)
		mActive = 0;
}
int TOWERBUILDUI::LBUTTONDOWN(int uX, int uY)
{
	int sX;
	int sY;

	if (!mActive)
	{
		return 0;
	}
	if (mSort == 1)
	{
		sX = mMYINFO.mScreenXSize / 2;
		mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3719]) / 2;
		sY = mMYINFO.mScreenYSize / 2;
		mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3719]) / 2;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 441, mY + 7, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[0] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3720], mX + 90, mY + 94, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[1] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3722], mX + 203, mY + 94, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[2] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3724], mX + 316, mY + 94, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[3] = 1;
			return 1;
		}
		return FALSE;
	}
	else if (mSort == 2)
	{
		sX = mMYINFO.mScreenXSize / 2;
		mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3726]) / 2;
		sY = mMYINFO.mScreenYSize / 2;
		mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3726]) / 2;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1600], mX + 269, mY + 443, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[0] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 60, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[1] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 120, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[2] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 180, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[3] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 60, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[4] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 120, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[5] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 180, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[6] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 269, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[7] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 329, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[8] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 389, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[9] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 269, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[10] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 329, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[11] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 389, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[12] = 1;
			return 1;
		}
		return FALSE;
	}
}

int TOWERBUILDUI::LBUTTONUP(int uX, int uY)
{
	int sX, sY, strlen;
	char mBuffer[1000];
	ITEM_INFO* tITEM;

	if (!mActive)
	{
		return 0;
	}
	if (mSort == 1)
	{
		sX = mMYINFO.mScreenXSize / 2;
		mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3719]) / 2;
		sY = mMYINFO.mScreenYSize / 2;
		mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3719]) / 2;

		if (mIsClick[0])
		{
			mIsClick[0] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 441, mY + 7, uX, uY))
			{
				TOWERBUILDUI::Off();
			}
			return 1;
		}
		if (mIsClick[1])
		{
			mIsClick[1] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3720], mX + 90, mY + 94, uX, uY))
			{
				if (TOWERBUILDUI::WorkForTowerBuild(1))
				{
					tITEM = mITEM.Search(665);
					if (!tITEM)
					{
						return 1;
					}
					sprintf(mBuffer, mMESSAGE.Return(2998), tITEM->iName);
					mCBOXUI.Set(74, mBuffer, "");
				}
			}
			return 1;
		}
		if (mIsClick[2])
		{
			mIsClick[2] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3722], mX + 203, mY + 94, uX, uY))
			{
				if (TOWERBUILDUI::WorkForTowerBuild(2))
				{
					tITEM = mITEM.Search(665);
					if (!tITEM)
					{
						return 1;
					}
					sprintf(mBuffer, mMESSAGE.Return(2998), tITEM->iName);
					mCBOXUI.Set(75, mBuffer, "");
				}
			}
			return 1;
		}
		if (mIsClick[3])
		{
			mIsClick[3] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3724], mX + 316, mY + 94, uX, uY))
			{
				if (TOWERBUILDUI::WorkForTowerBuild(3))
				{
					tITEM = mITEM.Search(665);
					if (!tITEM)
					{
						return 1;
					}
					sprintf(mBuffer, mMESSAGE.Return(2998), tITEM->iName);
					mCBOXUI.Set(76, mBuffer, "");
				}
			}
			return 1;
		}

		return FALSE;
	}
	else if (mSort == 2)
	{
		sX = mMYINFO.mScreenXSize / 2;
		mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3726]) / 2;
		sY = mMYINFO.mScreenYSize / 2;
		mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3726]) / 2;

		if (mIsClick[0])
		{
			mIsClick[0] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1600], mX + 269, mY + 443, uX, uY))
			{
				TOWERBUILDUI::Off();
			}
			return 1;
		}
		if (mIsClick[1])
		{
			mIsClick[1] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 60, uX, uY))
			{
				mZoneNumber = 2;
				if (TOWERBUILDUI::WorkForTowerUpgrade(mZoneNumber))
				{
					mCBOXUI.Set(77, mMESSAGE.Return(2262), "");
				}
			}
			return 1;
		}
		if (mIsClick[2])
		{
			mIsClick[2] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 120, uX, uY))
			{
				mZoneNumber = 3;
				if (TOWERBUILDUI::WorkForTowerUpgrade(mZoneNumber))
				{
					mCBOXUI.Set(77, mMESSAGE.Return(2262), "");
				}
			}
			return 1;
		}
		if (mIsClick[3])
		{
			mIsClick[3] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 180, uX, uY))
			{
				mZoneNumber = 4;
				if (TOWERBUILDUI::WorkForTowerUpgrade(mZoneNumber))
				{
					mCBOXUI.Set(77, mMESSAGE.Return(2262), "");
				}
			}
			return 1;
		}
		if (mIsClick[4])
		{
			mIsClick[4] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 60, uX, uY))
			{
				mZoneNumber = 7;
				if (TOWERBUILDUI::WorkForTowerUpgrade(mZoneNumber))
				{
					mCBOXUI.Set(77, mMESSAGE.Return(2262), "");
				}
			}
			return 1;
		}
		if (mIsClick[5])
		{
			mIsClick[5] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 120, uX, uY))
			{
				mZoneNumber = 8;
				if (TOWERBUILDUI::WorkForTowerUpgrade(mZoneNumber))
				{
					mCBOXUI.Set(77, mMESSAGE.Return(2262), "");
				}
			}
			return 1;
		}
		if (mIsClick[6])
		{
			mIsClick[6] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 180, uX, uY))
			{
				mZoneNumber = 9;
				if (TOWERBUILDUI::WorkForTowerUpgrade(mZoneNumber))
				{
					mCBOXUI.Set(77, mMESSAGE.Return(2262), "");
				}
			}
			return 1;
		}
		if (mIsClick[7])
		{
			mIsClick[7] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 269, uX, uY))
			{
				mZoneNumber = 12;
				if (TOWERBUILDUI::WorkForTowerUpgrade(mZoneNumber))
				{
					mCBOXUI.Set(77, mMESSAGE.Return(2262), "");
				}
			}
			return 1;
		}
		if (mIsClick[8])
		{
			mIsClick[8] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 329, uX, uY))
			{
				mZoneNumber = 13;
				if (TOWERBUILDUI::WorkForTowerUpgrade(mZoneNumber))
				{
					mCBOXUI.Set(77, mMESSAGE.Return(2262), "");
				}
			}
			return 1;
		}
		if (mIsClick[9])
		{
			mIsClick[9] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 389, uX, uY))
			{
				mZoneNumber = 14;
				if (TOWERBUILDUI::WorkForTowerUpgrade(mZoneNumber))
				{
					mCBOXUI.Set(77, mMESSAGE.Return(2262), "");
				}
			}
			return 1;
		}
		if (mIsClick[10])
		{
			mIsClick[10] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 269, uX, uY))
			{
				mZoneNumber = 141;
				if (TOWERBUILDUI::WorkForTowerUpgrade(mZoneNumber))
				{
					mCBOXUI.Set(77, mMESSAGE.Return(2262), "");
				}
			}
			return 1;
		}
		if (mIsClick[11])
		{
			mIsClick[11] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 329, uX, uY))
			{
				mZoneNumber = 142;
				if (TOWERBUILDUI::WorkForTowerUpgrade(mZoneNumber))
				{
					mCBOXUI.Set(77, mMESSAGE.Return(2262), "");
				}
			}
			return 1;
		}
		if (mIsClick[12])
		{
			mIsClick[12] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 389, uX, uY))
			{
				mZoneNumber = 143;
				if (TOWERBUILDUI::WorkForTowerUpgrade(mZoneNumber))
				{
					mCBOXUI.Set(77, mMESSAGE.Return(2262), "");
				}
			}
			return 1;
		}
		return FALSE;
	}


}
int TOWERBUILDUI::RBUTTONDOWN(int uX, int uY)
{
	return 0;
}
int TOWERBUILDUI::RBUTTONUP(int uX, int uY)
{
	return 0;
}
int TOWERBUILDUI::KEYBOARD()
{
	return 0;
}
void TOWERBUILDUI::Draw(int uX, int uY)
{
	int sX, sY, tstrlen, i, j, k, l;
	char* tstr;
	char String[1000];
	char tstr2;
	char tstr3;

	if (mActive)
	{
		if (mSort == 1)
		{
			sX = mMYINFO.mScreenXSize / 2;
			mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3719]) / 2;
			sY = mMYINFO.mScreenYSize / 2;
			mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3719]) / 2;
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3719], mX, mY);
			if (mIsClick[0])
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 441, mY + 7);
			if (mIsClick[1])
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[3721], mX + 90, mY + 94);
			if (mIsClick[2])
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[3723], mX + 203, mY + 94);
			if (mIsClick[3])
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[3725], mX + 316, mY + 94);
		}
		else if (mSort == 2)
		{
			sX = mMYINFO.mScreenXSize / 2;
			mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3726]) / 2;
			sY = mMYINFO.mScreenYSize / 2;
			mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3726]) / 2;
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3726], mX, mY);
			if (mIsClick[0])
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[1601], mX + 269, mY + 443);
			}
			for (i = 0; i < 3; ++i)
			{
				int v142 = TOWERBUILDUI::ReturnTowerIndex(i + 2);
				if (v142 != -1)
				{
					if (mIsClick[i + 1])
					{
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[3729], mX + 207, mY + 60 * i + 60);
					}
					if (mTower[v142] > 0)
					{
						int v141 = mTower[v142] / 100;
						int v140 = mTower[v142] % 100;
						tstr = mMESSAGE.Return(v140 + 2249);
						if (mUTIL.GetStringLength(tstr))
						{
							sY = mY + 60 * i + 63;
							sX = mX + 161;
							tstr = mMESSAGE.Return(v140 + 2249);
							sX = sX - mUTIL.GetStringLength(tstr) / 2;
							tstr = mMESSAGE.Return(v140 + 2249);
							mUTIL.DrawFont2D(tstr, sX, sY, 1);
						}
						if (v141 == 1 || v141 == 3 || v141 == 5 || v141 == 7)
						{
							tstr = mMESSAGE.Return(2263);
							if (mUTIL.GetStringLength(tstr))
							{
								sY = mY + 60 * i + 64;
								sX = mX + 309;
								tstr = mMESSAGE.Return(2263);
								sX = sX - mUTIL.GetStringLength(tstr) / 2;
								tstr = mMESSAGE.Return(2263);
								mUTIL.DrawFont2D(tstr, sX, sY, 1);
							}
						}
						else if (v141 == 9)
						{
							tstr = mMESSAGE.Return(2264);
							if (mUTIL.GetStringLength(tstr))
							{
								sY = mY + 60 * i + 64;
								sX = mX + 309;
								tstr = mMESSAGE.Return(2264);
								sX = sX - mUTIL.GetStringLength(tstr) / 2;
								tstr = mMESSAGE.Return(2264);
								mUTIL.DrawFont2D(tstr, sX, sY, 1);
							}
						}
						else if (mTowerState[v142] <= -1)
						{
							if (v141 == 2 || v141 == 4 || v141 == 6 || v141 == 8)
							{
								tstr = mMESSAGE.Return(v141 / 2 + 181);
								if (mUTIL.GetStringLength(tstr))
								{
									sY = mY + 60 * i + 64;
									sX = mX + 309;
									tstr = mMESSAGE.Return(v141 / 2 + 182);
									sX = sX - mUTIL.GetStringLength(tstr) / 2;
									tstr = mMESSAGE.Return(v141 / 2 + 181);
									mUTIL.DrawFont2D(tstr, sX, sY, 1);
								}
							}
						}
						else
						{
							tstr = mMESSAGE.Return(2276);
							if (mUTIL.GetStringLength(tstr))
							{
								sY = mY + 60 * i + 64;
								sX = mX + 309;
								tstr = mMESSAGE.Return(2276);
								sX = sX - mUTIL.GetStringLength(tstr) / 2;
								tstr = mMESSAGE.Return(2276);
								mUTIL.DrawFont2D(tstr, sX, sY, 1);
							}
						}
					}
				}
			}
			for (j = 0; j < 3; ++j)
			{
				int v138 = TOWERBUILDUI::ReturnTowerIndex(j + 7);
				if (v138 != -1)
				{
					if (mIsClick[j + 4])
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[3729], mX + 523, mY + 60 * j + 60);
					if (mTower[v138] > 0)
					{
						int v137 = mTower[v138] / 100;
						int v136 = mTower[v138] % 100;
						tstr = mMESSAGE.Return(v136 + 2249);
						if (mUTIL.GetStringLength(tstr))
						{
							sY = mY + 60 * j + 63;
							sX = mX + 477;
							tstr = mMESSAGE.Return(v136 + 2249);
							sX = sX - mUTIL.GetStringLength(tstr) / 2;
							tstr = mMESSAGE.Return(v136 + 2249);
							mUTIL.DrawFont2D(tstr, sX, sY, 1);
						}
						if (v137 == 1 || v137 == 3 || v137 == 5 || v137 == 7)
						{
							tstr = mMESSAGE.Return(2263);
							if (mUTIL.GetStringLength(tstr))
							{
								sY = mY + 60 * j + 64;
								sX = mX + 625;
								tstr = mMESSAGE.Return(2263);
								sX = sX - mUTIL.GetStringLength(tstr) / 2;
								tstr = mMESSAGE.Return(2263);
								mUTIL.DrawFont2D(tstr, sX, sY, 1);
							}
						}
						else if (v137 == 9)
						{
							tstr = mMESSAGE.Return(2264);
							if (mUTIL.GetStringLength(tstr))
							{
								sY = mY + 60 * j + 64;
								sX = mX + 625;
								tstr = mMESSAGE.Return(2264);
								sX = sX - mUTIL.GetStringLength(tstr) / 2;
								tstr = mMESSAGE.Return(2264);
								mUTIL.DrawFont2D(tstr, sX, sY, 1);
							}
						}
						else if (mTowerState[v138] <= -1)
						{
							if (v137 == 2 || v137 == 4 || v137 == 6 || v137 == 8)
							{
								tstr = mMESSAGE.Return(v137 / 2 + 181);
								if (mUTIL.GetStringLength(tstr))
								{
									sY = mY + 60 * j + 64;
									sX = mX + 625;
									tstr = mMESSAGE.Return(v137 / 2 + 182);
									sX = sX - mUTIL.GetStringLength(tstr) / 2;
									tstr = mMESSAGE.Return(v137 / 2 + 181);
									mUTIL.DrawFont2D(tstr, sX, sY, 1);
								}
							}
						}
						else
						{
							tstr = mMESSAGE.Return(2276);
							if (mUTIL.GetStringLength(tstr))
							{
								sY = mY + 60 * j + 64;
								sX = mX + 625;
								tstr = mMESSAGE.Return(2264);
								sX = sX - mUTIL.GetStringLength(tstr) / 2;
								tstr = mMESSAGE.Return(2276);
								mUTIL.DrawFont2D(tstr, sX, sY, 1);
							}
						}
					}
				}
			}
			for (k = 0; k < 3; ++k)
			{
				int v134 = TOWERBUILDUI::ReturnTowerIndex(k + 12);
				if (v134 != -1)
				{
					if (mIsClick[k + 7])
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[3729], mX + 207, mY + 60 * k + 269);
					if (mTower[v134] > 0)
					{
						int v133 = mTower[v134] / 100;
						int v132 = mTower[v134] % 100;
						tstr = mMESSAGE.Return(v132 + 2249);
						if (mUTIL.GetStringLength(tstr))
						{
							sY = mY + 60 * k + 272;
							sX = mX + 161;
							tstr = mMESSAGE.Return(v132 + 2249);
							sX = sX - mUTIL.GetStringLength(tstr) / 2;
							tstr = mMESSAGE.Return(v132 + 2249);
							mUTIL.DrawFont2D(tstr, sX, sY, 1);
						}
						if (v133 == 1 || v133 == 3 || v133 == 5 || v133 == 7)
						{
							tstr = mMESSAGE.Return(2263);
							if (mUTIL.GetStringLength(tstr))
							{
								sY = mY + 60 * k + 273;
								sX = mX + 309;
								tstr = mMESSAGE.Return(2263);
								sX = sX - mUTIL.GetStringLength(tstr) / 2;
								tstr = mMESSAGE.Return(2263);
								mUTIL.DrawFont2D(tstr, sX, sY, 1);
							}
						}
						else if (v133 == 9)
						{
							tstr = mMESSAGE.Return(2264);
							if (mUTIL.GetStringLength(tstr))
							{
								sY = mY + 60 * k + 273;
								sX = mX + 309;
								tstr = mMESSAGE.Return(2264);
								sX = sX - mUTIL.GetStringLength(tstr) / 2;
								tstr = mMESSAGE.Return(2264);
								mUTIL.DrawFont2D(tstr, sX, sY, 1);
							}
						}
						else if (mTowerState[v134] <= -1)
						{
							if (v133 == 2 || v133 == 4 || v133 == 6 || v133 == 8)
							{
								tstr = mMESSAGE.Return(v133 / 2 + 181);
								if (mUTIL.GetStringLength(tstr))
								{
									sY = mY + 60 * k + 273;
									sX = mX + 309;
									tstr = mMESSAGE.Return(v133 / 2 + 182);
									sX = sX - mUTIL.GetStringLength(tstr) / 2;
									tstr = mMESSAGE.Return(v133 / 2 + 181);
									mUTIL.DrawFont2D(tstr, sX, sY, 1);
								}
							}
						}
						else
						{
							tstr = mMESSAGE.Return(2276);
							if (mUTIL.GetStringLength(tstr))
							{
								sY = mY + 60 * k + 273;
								sX = mX + 309;
								tstr = mMESSAGE.Return(2264);
								sX = sX - mUTIL.GetStringLength(tstr) / 2;
								tstr = mMESSAGE.Return(2276);
								mUTIL.DrawFont2D(tstr, sX, sY, 1);
							}
						}
					}
				}
			}
			for (l = 0; l < 3; ++l)
			{
				int v130 = TOWERBUILDUI::ReturnTowerIndex(l + 141);
				if (v130 != -1)
				{
					if (mIsClick[l + 10])
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[3729], mX + 523, mY + 60 * l + 269);
					if (mTower[v130] > 0)
					{
						int v129 = mTower[v130] / 100;
						int v128 = mTower[v130] % 100;
						tstr = mMESSAGE.Return(v128 + 2249);
						if (mUTIL.GetStringLength(tstr))
						{
							sY = mY + 60 * l + 272;
							sX = mX + 477;
							tstr = mMESSAGE.Return(v128 + 2249);
							sX = sX - mUTIL.GetStringLength(tstr) / 2;
							tstr = mMESSAGE.Return(v128 + 2249);
							mUTIL.DrawFont2D(tstr, sX, sY, 1);
						}
						if (v129 == 1 || v129 == 3 || v129 == 5 || v129 == 7)
						{
							tstr = mMESSAGE.Return(2263);
							if (mUTIL.GetStringLength(tstr))
							{
								sY = mY + 60 * l + 273;
								sX = mX + 625;
								tstr = mMESSAGE.Return(2263);
								sX = sX - mUTIL.GetStringLength(tstr) / 2;
								tstr = mMESSAGE.Return(2263);
								mUTIL.DrawFont2D(tstr, sX, sY, 1);
							}
						}
						else if (v129 == 9)
						{
							tstr = mMESSAGE.Return(2264);
							if (mUTIL.GetStringLength(tstr))
							{
								sY = mY + 60 * l + 273;
								sX = mX + 625;
								tstr = mMESSAGE.Return(2264);
								sX = sX - mUTIL.GetStringLength(tstr) / 2;
								tstr = mMESSAGE.Return(2264);
								mUTIL.DrawFont2D(tstr, sX, sY, 1);
							}
						}
						else if (mTowerState[v130] <= -1)
						{
							if (v129 == 2 || v129 == 4 || v129 == 6 || v129 == 8)
							{
								tstr = mMESSAGE.Return(v129 / 2 + 181);
								if (mUTIL.GetStringLength(tstr))
								{
									sY = mY + 60 * l + 273;
									sX = mX + 625;
									tstr = mMESSAGE.Return(v129 / 2 + 182);
									sX = sX - mUTIL.GetStringLength(tstr) / 2;
									tstr = mMESSAGE.Return(v129 / 2 + 181);
									mUTIL.DrawFont2D(tstr, sX, sY, 1);
								}
							}
						}
						else
						{
							tstr = mMESSAGE.Return(2276);
							if (mUTIL.GetStringLength(tstr))
							{
								sY = mY + 60 * l + 273;
								sX = mX + 625;
								tstr = mMESSAGE.Return(2264);
								sX = sX - mUTIL.GetStringLength(tstr) / 2;
								tstr = mMESSAGE.Return(2276);
								mUTIL.DrawFont2D(tstr, sX, sY, 1);
							}
						}
					}
				}
			}
		}
	}
}

int TOWERBUILDUI::DrawForRollOver(int uX, int uY)
{
	int v4;
	int v5;
	int v6;
	int v7;
	int l;
	int k;
	int j;
	int i;

	if (!mActive)
	{
		return 0;
	}
	if (mSort == 1)
	{
		v4 = mMYINFO.mScreenXSize / 2;
		mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3719]) / 2;
		v5 = mMYINFO.mScreenYSize / 2;
		mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3719]) / 2;
		if (!mIsClick[1] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3720], mX + 90, mY + 94, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3720], mX + 90, mY + 94);
			return 1;
		}
		if (!mIsClick[2] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3722], mX + 203, mY + 94, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3722], mX + 203, mY + 94);
			return 1;
		}
		if (!mIsClick[3] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3724], mX + 316, mY + 94, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3724], mX + 316, mY + 94);
			return 1;
		}
	}
	else if (mSort == 2)
	{
		v6 = mMYINFO.mScreenXSize / 2;
		mX = v6 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3726]) / 2;
		v7 = mMYINFO.mScreenYSize / 2;
		mY = v7 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3726]) / 2;
		if (!mIsClick[0] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1600], mX + 269, mY + 443, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[1600], mX + 269, mY + 443);
			return 1;
		}
		for (i = 0; i < 3; ++i)
		{
			if (!mIsClick[i + 1]
				&& GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 60 * i + 60, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 60 * i + 60);
				return 1;
			}
		}
		for (j = 0; j < 3; ++j)
		{
			if (!mIsClick[j + 4]
				&& GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 60 * j + 60, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 60 * j + 60);
				return 1;
			}
		}
		for (k = 0; k < 3; ++k)
		{
			if (!mIsClick[k + 7]
				&& GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 60 * k + 269, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[3728], mX + 207, mY + 60 * k + 269);
				return 1;
			}
		}
		for (l = 0; l < 3; ++l)
		{
			if (!mIsClick[l + 10]
				&& GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 60 * l + 269, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[3728], mX + 523, mY + 60 * l + 269);
				return 1;
			}
		}
	}
	return 0;
}

BOOL TOWERBUILDUI::WorkForTowerUpgrade(int a2)
{
	int tTowerIndex;
	int tTowerValue;

	if (mMYINFO.mPresentZoneNumber != a2)
	{
		mBASICUI.Insert1(mMESSAGE.Return(2275), mFONTCOLOR.mData[44]);
		return 0;
	}
	if (!TOWERBUILDUI::MapToTribeIndex(a2, mMYINFO.mAvatarInfo.aTribe) || (tTowerIndex = TOWERBUILDUI::ReturnTowerIndex(a2), tTowerIndex == -1))
	{
		mBASICUI.Insert1(mMESSAGE.Return(2261), mFONTCOLOR.mData[44]);
		return 0;
	}
	if (mTower[tTowerIndex] <= 0)
	{
		mBASICUI.Insert1(mMESSAGE.Return(2256), mFONTCOLOR.mData[44]);
		return 0;
	}
	if (mTowerState[tTowerIndex] > -1)
	{
		mBASICUI.Insert1(mMESSAGE.Return(2254), mFONTCOLOR.mData[44]);
		return 0;
	}
	tTowerValue = mTower[tTowerIndex] / 100;
	switch (tTowerValue)
	{
	case 8:
		mBASICUI.Insert1(mMESSAGE.Return(2255), mFONTCOLOR.mData[44]);
		return 0;

	case 9:
		mBASICUI.Insert1(mMESSAGE.Return(2254), mFONTCOLOR.mData[44]);
		return 0;

	case 1:
	case 3:
	case 5:
	case 7:
		mBASICUI.Insert1(mMESSAGE.Return(2253), mFONTCOLOR.mData[44]);
		return 0;

	default:
		return tTowerValue == 2 || tTowerValue == 4 || tTowerValue == 6;
	}
}
int TOWERBUILDUI::WorkForTowerBuild(int tWhatTower)
{
	char* v2;
	int result;
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
	int v15;
	int v16;
	int i;
	int v19;
	int v20;

	if (mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) == 1 || mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) == 2)
	{
		if (TOWERBUILDUI::MapToTribeIndex(mMYINFO.mPresentZoneNumber, mMYINFO.mAvatarInfo.aTribe))
		{
			v20 = TOWERBUILDUI::ReturnTowerIndex(mMYINFO.mPresentZoneNumber);
			if (v20 == -1)
			{
				v14 = mFONTCOLOR.mData[44];
				v7 = mMESSAGE.Return(2261);
				mBASICUI.Insert1(v7, v14);
				result = 0;
			}
			else if (mTower[v20] <= 0)
			{
				v19 = 0;
				for (i = 0; i < 12; ++i)
				{
					if (mTower[i] % 100 == tWhatTower)
					{
						if (3 * mMYINFO.mAvatarInfo.aTribe <= i && 3 * mMYINFO.mAvatarInfo.aTribe + 2 >= i)
						{
							v15 = mFONTCOLOR.mData[44];
							v8 = mMESSAGE.Return(2260);
							mBASICUI.Insert1(v8, v15);
							return 0;
						}
						if (mTower[i] / 100 != 9)
							++v19;
						if (v19 >= 3)
						{
							v16 = mFONTCOLOR.mData[44];
							v9 = mMESSAGE.Return(2258);
							mBASICUI.Insert1(v9, v16);
							return 0;
						}
					}
				}
				result = 1;
			}
			else if (mTower[v20] / 100 == 9)
			{
				v12 = mFONTCOLOR.mData[44];
				v5 = mMESSAGE.Return(2279);
				mBASICUI.Insert1(v5, v12);
				result = 0;
			}
			else
			{
				v13 = mFONTCOLOR.mData[44];
				if (tWhatTower == mTower[v20] % 100)
					v6 = mMESSAGE.Return(2244);
				else
					v6 = mMESSAGE.Return(2278);
				mBASICUI.Insert1(v6, v13);
				result = 0;
			}
		}
		else
		{
			v11 = mFONTCOLOR.mData[44];
			v4 = mMESSAGE.Return(2304);
			mBASICUI.Insert1(v4, v11);
			result = 0;
		}
	}
	else
	{
		v10 = mFONTCOLOR.mData[44];
		v2 = mMESSAGE.Return(842);
		mBASICUI.Insert1(v2, v10);
		result = 0;
	}
	return result;
}
int TOWERBUILDUI::ReturnTowerIndex(int tZoneNum)
{
	int result;

	switch (tZoneNum)
	{
	case 2:
		result = 0;
		break;
	case 3:
		result = 1;
		break;
	case 4:
		result = 2;
		break;
	case 7:
		result = 3;
		break;
	case 8:
		result = 4;
		break;
	case 9:
		result = 5;
		break;
	case 12:
		result = 6;
		break;
	case 13:
		result = 7;
		break;
	case 14:
		result = 8;
		break;
	case 141:
		result = 9;
		break;
	case 142:
		result = 10;
		break;
	case 143:
		result = 11;
		break;
	default:
		result = -1;
		break;
	}
	return result;
}
BOOL TOWERBUILDUI::MapToTribeIndex(int tZoneNumber, int tTribe)
{
	BOOL result;

	switch (tZoneNumber)
	{
	case 2:
	case 3:
	case 4:
		result = tTribe == 0;
		break;
	case 7:
	case 8:
	case 9:
		result = tTribe == 1;
		break;
	case 12:
	case 13:
	case 14:
		result = tTribe == 2;
		break;
	case 141:
	case 142:
	case 143:
		result = tTribe == 3;
		break;
	default:
		result = 0;
		break;
	}
	return result;
}






CHOICEUI mCHOICEUI;

BOOL CHOICEUI::Init()
{
    mActive = 0;
    mIsClick = 0;
    return TRUE;
}

void CHOICEUI::InitForEnterZone()
{
    mActive = 0;
    mIsClick = 0;
}

void CHOICEUI::Set(int tSort, int tPage, int tIndex, int tItemIndex, int tXPost, int tYPost, int tQuantity, int tImprove, int tRecogNum, int bIsShift, int bShiftXPost, int bShiftYPost)
{
    if (!mActive)
    {
        mActive = 1;
        mIsClick = 0;
        mSort = tSort;
        if (tSort == 8 || tSort == 9 || tSort == 16 || tSort == 17)
            mPage = tPage % 100;
        else
            mPage = tPage;
        mIndex = tIndex;
        mItemIdx = tItemIndex;
        mItemX = tXPost;
        mItemY = tYPost;
        mItemQuantity = tQuantity;
        mItemImprove = tImprove;
        mItemSerial = tRecogNum;
        mItemSocket[0] = 0;
        mItemSocket[1] = 0;
        mItemSocket[2] = 0;
        mItemSocket[3] = 0;
        mItemSocket[4] = 0;
        switch (tSort)
        {
        case 1:
            mItemSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
            mItemSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
            mItemSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
            mItemSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
            mItemSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
            break;
        case 2:
            mItemSocket[0] = mMYINFO.mAvatarInfo.aEquipSocket[tIndex][0];
            mItemSocket[1] = mMYINFO.mAvatarInfo.aEquipSocket[tIndex][1];
            mItemSocket[2] = mMYINFO.mAvatarInfo.aEquipSocket[tIndex][2];
            mItemSocket[3] = mMYINFO.mAvatarInfo.aEquipSocket[tIndex][3];
            mItemSocket[4] = mMYINFO.mAvatarInfo.aEquipSocket[tIndex][4];
            break;
        case 6:
            mItemSocket[0] = mMYINFO.mAvatarInfo.aTradeSocket[tIndex][0];
            mItemSocket[1] = mMYINFO.mAvatarInfo.aTradeSocket[tIndex][1];
            mItemSocket[2] = mMYINFO.mAvatarInfo.aTradeSocket[tIndex][2];
            mItemSocket[3] = mMYINFO.mAvatarInfo.aTradeSocket[tIndex][3];
            mItemSocket[4] = mMYINFO.mAvatarInfo.aTradeSocket[tIndex][4];
            break;
        case 8:
        case 9:
            mItemSocket[0] = mNPCUI.mInv[tPage / 100].iSocket[0];
            mItemSocket[1] = mNPCUI.mInv[tPage / 100].iSocket[1];
            mItemSocket[2] = mNPCUI.mInv[tPage / 100].iSocket[2];
            mItemSocket[3] = mNPCUI.mInv[tPage / 100].iSocket[3];
            mItemSocket[4] = mNPCUI.mInv[tPage / 100].iSocket[4];
            break;
        case 12:
            mItemSocket[0] = mMYINFO.mAvatarInfo.aStoreSocket[tPage][tIndex][0];
            mItemSocket[1] = mMYINFO.mAvatarInfo.aStoreSocket[tPage][tIndex][1];
            mItemSocket[2] = mMYINFO.mAvatarInfo.aStoreSocket[tPage][tIndex][2];
            mItemSocket[3] = mMYINFO.mAvatarInfo.aStoreSocket[tPage][tIndex][3];
            mItemSocket[4] = mMYINFO.mAvatarInfo.aStoreSocket[tPage][tIndex][4];
            break;
        case 14:
            mItemSocket[0] = mMYINFO.mAvatarInfo.aSaveSocket[tIndex][0];
            mItemSocket[1] = mMYINFO.mAvatarInfo.aSaveSocket[tIndex][1];
            mItemSocket[2] = mMYINFO.mAvatarInfo.aSaveSocket[tIndex][2];
            mItemSocket[3] = mMYINFO.mAvatarInfo.aSaveSocket[tIndex][3];
            mItemSocket[4] = mMYINFO.mAvatarInfo.aSaveSocket[tIndex][4];
            break;
        case 16:
        case 17:
            mItemSocket[0] = mNPCUI.mInv[tPage / 100].iSocket[0];
            mItemSocket[1] = mNPCUI.mInv[tPage / 100].iSocket[1];
            mItemSocket[2] = mNPCUI.mInv[tPage / 100].iSocket[2];
            mItemSocket[3] = mNPCUI.mInv[tPage / 100].iSocket[3];
            mItemSocket[4] = mNPCUI.mInv[tPage / 100].iSocket[4];
            break;
        case 18:
        case 19:
            mItemSocket[0] = mPSHOPUI.mPShopInfo.mItemSocket[tPage][tIndex][0];
            mItemSocket[1] = mPSHOPUI.mPShopInfo.mItemSocket[tPage][tIndex][1];
            mItemSocket[2] = mPSHOPUI.mPShopInfo.mItemSocket[tPage][tIndex][2];
            mItemSocket[3] = mPSHOPUI.mPShopInfo.mItemSocket[tPage][tIndex][3];
            mItemSocket[4] = mPSHOPUI.mPShopInfo.mItemSocket[tPage][tIndex][4];
            break;
        case 27:
        case 28:
            mItemSocket[0] = mPSHOPUI.mPShopInfo.mItemSocket[tPage][tIndex][0];
            mItemSocket[1] = mPSHOPUI.mPShopInfo.mItemSocket[tPage][tIndex][1];
            mItemSocket[2] = mPSHOPUI.mPShopInfo.mItemSocket[tPage][tIndex][2];
            mItemSocket[3] = mPSHOPUI.mPShopInfo.mItemSocket[tPage][tIndex][3];
            mItemSocket[4] = mPSHOPUI.mPShopInfo.mItemSocket[tPage][tIndex][4];
            mPShopPrice = mPSHOPUI.mPShopInfo.mItemInfo[tPage][tIndex][4];
            break;
        case 30:
        case 31:
            mItemSocket[0] = mNPCUI.mInv[tPage / 100].iSocket[0];
            mItemSocket[1] = mNPCUI.mInv[tPage / 100].iSocket[1];
            mItemSocket[2] = mNPCUI.mInv[tPage / 100].iSocket[2];
            mItemSocket[3] = mNPCUI.mInv[tPage / 100].iSocket[3];
            mItemSocket[4] = mNPCUI.mInv[tPage / 100].iSocket[4];
            break;
        default:
            break;
        }
        if (bIsShift)
        {
            mEDITBOX.Set(0);
        }
        mIsShift = bIsShift;
        mShiftX = bShiftXPost;
        mShiftY = bShiftYPost;
        mPriceIdx = 0;
        mPrice[mPriceIdx] = 0;
        munkbb = 0;
        CHOICEUI::NetworkOK();
    }
}
void CHOICEUI::Off()
{
    if (mActive)
    {
        mActive = 0;
        mIsClick = 0;
    }
}
int CHOICEUI::LBUTTONDOWN(int uX, int uY)
{
    int tAmount;

    if (!mActive)
    {
        return 0;
    }
    if (mCBOXUI.mActive && mCBOXUI.mSort == 37)
    {
        return 0;
    }
    if (mCBOXUI.mActive && mCBOXUI.mSort == 38)
    {
        return 0;
    }
    if (!mIsShift)
    {
        return 1;
    }
    if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[28], mShiftX + 15, mShiftY + 40, uX, uY))
    {
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[306], mShiftX + 57, mShiftY + 40, uX, uY))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
            CHOICEUI::Off();
            return 1;
        }
        return 1;
    }
    GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
    switch (mSort)
    {
    case 1:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][3];
        }
        if (tAmount > mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][3])
        {
            tAmount = mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][3];
        }
        if (tAmount >= 1)
        {
            mItemQuantity = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    case 5:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][1];
        }
        if (tAmount > mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][1])
        {
            tAmount = mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][1];
        }
        if (tAmount >= 1)
        {
            mItemX = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    case 6:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = mMYINFO.mAvatarInfo.aTrade[mIndex][1];
        }
        if (tAmount > mMYINFO.mAvatarInfo.aTrade[mIndex][1])
        {
            tAmount = mMYINFO.mAvatarInfo.aTrade[mIndex][1];
        }
        if (tAmount >= 1)
        {
            mItemX = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    case 7:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = MAX_ITEM_DUPLICATION_NUM;
        }
        if (tAmount > MAX_ITEM_DUPLICATION_NUM)
        {
            tAmount = MAX_ITEM_DUPLICATION_NUM;
        }
        if (tAmount >= 1)
        {
            mItemX = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    case 10:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = mMYINFO.mAvatarInfo.aMoney;
        }
        if (tAmount > mMYINFO.mAvatarInfo.aMoney)
        {
            tAmount = mMYINFO.mAvatarInfo.aMoney;
        }
        if (tAmount >= 1)
        {
            mItemIdx = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    case 11:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = mMYINFO.mAvatarInfo.aTradeMoney;
        }
        if (tAmount > mMYINFO.mAvatarInfo.aTradeMoney)
        {
            tAmount = mMYINFO.mAvatarInfo.aTradeMoney;
        }
        if (tAmount >= 1)
        {
            mItemIdx = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    case 12:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = mMYINFO.mAvatarInfo.aStoreItem[mPage][mIndex][1];
        }
        if (tAmount > mMYINFO.mAvatarInfo.aStoreItem[mPage][mIndex][1])
        {
            tAmount = mMYINFO.mAvatarInfo.aStoreItem[mPage][mIndex][1];
        }
        if (tAmount >= 1)
        {
            mItemX = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    case 13:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = mMYINFO.mAvatarInfo.aStoreMoney;
        }
        if (tAmount > mMYINFO.mAvatarInfo.aStoreMoney)
        {
            tAmount = mMYINFO.mAvatarInfo.aStoreMoney;
        }
        if (tAmount >= 1)
        {
            mItemIdx = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    case 14:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = mMYINFO.mAvatarInfo.uSaveItem[mIndex][1];
        }
        if (tAmount > mMYINFO.mAvatarInfo.uSaveItem[mIndex][1])
        {
            tAmount = mMYINFO.mAvatarInfo.uSaveItem[mIndex][1];
        }
        if (tAmount >= 1)
        {
            mItemX = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    case 15:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = mMYINFO.mAvatarInfo.uSaveMoney;
        }
        if (tAmount > mMYINFO.mAvatarInfo.uSaveMoney)
        {
            tAmount = mMYINFO.mAvatarInfo.uSaveMoney;
        }
        if (tAmount >= 1)
        {
            mItemIdx = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    case 21:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = MAX_ITEM_DUPLICATION_NUM;
        }
        if (tAmount > MAX_ITEM_DUPLICATION_NUM)
        {
            tAmount = MAX_ITEM_DUPLICATION_NUM;
        }
        if (tAmount >= 1)
        {
            mItemX = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    case 23:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = mMYINFO.mAvatarInfo.aMoney2;
        }
        if (tAmount > mMYINFO.mAvatarInfo.aMoney2)
        {
            tAmount = mMYINFO.mAvatarInfo.aMoney2;
        }
        if (tAmount >= 1)
        {
            mItemIdx = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    case 24:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = mMYINFO.mAvatarInfo.aTradeMoney2;
        }
        if (tAmount > mMYINFO.mAvatarInfo.aTradeMoney2)
        {
            tAmount = mMYINFO.mAvatarInfo.aTradeMoney2;
        }
        if (tAmount >= 1)
        {
            mItemIdx = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    case 25:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = mMYINFO.mAvatarInfo.aStoreMoney2;
        }
        if (tAmount > mMYINFO.mAvatarInfo.aStoreMoney2)
        {
            tAmount = mMYINFO.mAvatarInfo.aStoreMoney2;
        }
        if (tAmount >= 1)
        {
            mItemIdx = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    case 26:
        if (mPriceIdx >= 1)
        {
            tAmount = atoi(mPrice);
        }
        else
        {
            tAmount = mMYINFO.mAvatarInfo.uSaveMoney2;
        }
        if (tAmount > mMYINFO.mAvatarInfo.uSaveMoney2)
        {
            tAmount = mMYINFO.mAvatarInfo.uSaveMoney2;
        }
        if (tAmount >= 1)
        {
            mItemIdx = tAmount;
            mIsShift = 0;
            CHOICEUI::NetworkOK();
        }
        else
        {
            CHOICEUI::Off();
        }
        return 1;

    default:
        CHOICEUI::Off();
        return 1;
    }
}
//STACK SISTEM
BOOL CHOICEUI::LBUTTONUP(int uX, int uY)
{
    int sX, sY, tstrlen, i, j, k, l;
    int tPage2, tIndex2, tXPost, tYPost;
    char* tstr;
    char* tstr2;
    char* tstr3;
    ITEM_INFO* Item;
    ITEM_INFO* v256;
    int result;
    int tColor;
    int v205;
    int s1, s2, s3, s4, s5;
    int tGems[5];
    int tSocketNum = 0;
    int itemsort;
    int v200;
    int tCost;
    int tValue[9];

    if (!mActive)
    {
        return 0;
    }
    if (mCBOXUI.mActive && mCBOXUI.mSort == 37)
    {
        return 0;
    }
    if (mCBOXUI.mActive && mCBOXUI.mSort == 38)
    {
        return 0;
    }
    if (mIsClick)
    {
        return 1;
    }
    if (mIsShift)
    {
        return 1;
    }

    sX = 0;
    sY = 0;
    switch (mSort)
    {
    case 1:
        Item = mITEM.Search(mItemIdx);
        if (!Item)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mINVENUI.PutInventory1(uX, uY, mItemIdx, mItemQuantity, &tPage2, &tIndex2, &tXPost, &tYPost, mIndex);
        if (tPage2 != -1)
        {
            if (mPSHOPUI.mActive || mNPCUI.mActive)
            {
                mBASICUI.Insert1(mMESSAGE.Return(598), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            mPLAY.PROCESS_DATA_208_SEND(mPage, mIndex, mItemQuantity, tPage2, tIndex2, tXPost, tYPost);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
            {
                mCInnerAuto.bTakeItem = 1;
            }
            return 1;
        }
        tIndex2 = mINVENUI.GetEquipIndex2(uX, uY, -1);
        if (tIndex2 != -1)
        {
            if (mMYINFO.mCheckSendActionPacket || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(120), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (!mINVENUI.CheckPossibleEquip(Item, tIndex2) || mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
            {
                mCInnerAuto.bTakeItem = 1;
            }
            if (mMYINFO.mStatBalance > 0 && mUTIL.CheckZone175Type(mMYINFO.mPresentZoneNumber) == 1)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (mUTIL.ReturnItemSort2(mItemIdx) != 1 && mUTIL.ReturnItemSort2(mItemIdx) != 4 && mUTIL.ReturnItemSort2(mItemIdx) != 8 && mUTIL.ReturnItemSort2(mItemIdx) != 9 || mUTIL.ReturnISValue(mItemImprove) < 100)
            {
                mPLAY.PROCESS_DATA_210_SEND(mPage, mIndex, mItemQuantity, 0, tIndex2, 0, 0);
                mIsClick = 1;
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                return 1;
            }
            mBASICUI.Insert1(mMESSAGE.Return(2562), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mINVENUI.PutTrade1(uX, uY, mItemIdx, mItemQuantity, -1);
        if (tIndex2 != -1)
        {
            if (mTRADEUI.mActive && (mTRADEUI.mOwnTradeState || mTRADEUI.mOtherTradeState))
            {
                mBASICUI.Insert1(mMESSAGE.Return(735), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
            }
            else if (Item->iCheckAvatarTrade == 1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(321), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
            }
            else
            {
                if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
                {
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                {
                    mCInnerAuto.bTakeItem = 1;
                }
                mPLAY.PROCESS_DATA_218_SEND(mPage, mIndex, mItemQuantity, 0, tIndex2, 0, 0);
                mIsClick = 1;
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            }
            return 1;
        }
        tIndex2 = mBASICUI.PutHotkey1(uX, uY, mItemIdx, mItemQuantity, -1);
        if (tIndex2 != -1)
        {
            if (Item->iSort != 2 || Item->iPotionType[0] == 7 || Item->iPotionType[0] == 8 || mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
            {
                mCInnerAuto.bTakeItem = 1;
            }
            mPLAY.PROCESS_DATA_211_SEND(mPage, mIndex, mItemQuantity, mMYINFO.mHotKeyPage, tIndex2, 0, 0);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return 1;
        }
        tIndex2 = mNPCUI.PutStoreItem1(uX, uY, mItemIdx, mItemQuantity, -1);
        if (tIndex2 != -1)
        {
            if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            mPLAY.PROCESS_DATA_223_SEND(mPage, mIndex, mItemQuantity, mNPCUI.mStorePage, tIndex2, 0, 0);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return 1;
        }
        tIndex2 = mNPCUI.PutSaveItem1(uX, uY, mItemIdx, mItemQuantity, -1);
        if (tIndex2 != -1)
        {
            if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            mPLAY.PROCESS_DATA_228_SEND(mPage, mIndex, mItemQuantity, 0, tIndex2, 0, 0);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return 1;
        }
        tIndex2 = mNPCUI.GetNPCShopIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (Item->iCheckNPCSell == 1)
            {
            LABEL_96:
                mBASICUI.Insert1(mMESSAGE.Return(152), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (Item->iSort == 2)
            {
                if (mUTIL.CheckOverMaximum(mMYINFO.mAvatarInfo.aMoney, mItemQuantity * Item->iSellCost))
                {
                LABEL_99:
                    mBASICUI.Insert1(mMESSAGE.Return(101), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
            else if (mUTIL.CheckOverMaximum(mMYINFO.mAvatarInfo.aMoney, Item->iSellCost))
            {
                mBASICUI.Insert1(mMESSAGE.Return(101), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (mItemSocket[0] > 0)
            {
                mBASICUI.Insert1(mMESSAGE.Return(152), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (Item->iSort == 6)
            {
            LABEL_104:
                tstr = mMESSAGE.Return(847);
                mCBOXUI.Set(37, tstr, "");
                return 1;
            }
            switch (Item->iType)
            {
            case 1:
            case 2:
                itemsort = Item->iSort;
                if (itemsort >= 7 && itemsort <= 21 && mItemImprove)
                {
                    tstr = mMESSAGE.Return(847);
                    mCBOXUI.Set(37, tstr, "");
                    return 1;
                }
                break;
            case 3:
                itemsort = Item->iSort;
                if (itemsort >= 7 && itemsort <= 21 && mItemImprove)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(846), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                tstr = mMESSAGE.Return(847);
                mCBOXUI.Set(37, tstr, "");
                return 1;
            case 4:
            case 5:
            case 6:
                tstr = mMESSAGE.Return(847);
                mCBOXUI.Set(37, tstr, "");
                return 1;
            }
            if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            mPLAY.PROCESS_DATA_212_SEND(mPage, mIndex, mItemQuantity, 0, 0, 0, 0);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return 1;
        }
        tIndex2 = mNPCUI.GetImproveIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 0)
            {
                if (Item->iSort != 7 && Item->iSort != 8 && Item->iSort != 9 && Item->iSort != 10 && Item->iSort != 11 && Item->iSort != 12 && Item->iSort != 13 && Item->iSort != 14 && Item->iSort != 15 && Item->iSort != 16 && Item->iSort != 17 && Item->iSort != 18 && Item->iSort != 19 && Item->iSort != 20 && Item->iSort != 21 && Item->iSort != 29)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(217), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mUTIL.ReturnItemSort(Item) == 1 || mUTIL.ReturnItemSort(Item) == 4 || mUTIL.ReturnItemSort(Item) == 8 || mUTIL.ReturnItemSort(Item) == 9)
                {
                LABEL_457:
                    mBASICUI.Insert1(mMESSAGE.Return(2564), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iCheckImprove != 2)
                {
                LABEL_872:
                    mBASICUI.Insert1(mMESSAGE.Return(217), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iCheckItemSet == 3)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2451), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mUTIL.ReturnISValue(mItemImprove) == 40 || mUTIL.ReturnISValue(mItemImprove) >= 50)
                {
                LABEL_540:
                    mBASICUI.Insert1(mMESSAGE.Return(220), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                mNPCUI.mPage[tIndex2] = mPage;
                mNPCUI.mIndex[tIndex2] = mIndex;
                mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                mNPCUI.mInv[tIndex2].iX = mItemX;
                mNPCUI.mInv[tIndex2].iY = mItemY;
                mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                CHOICEUI::Off();
                return 1;
            }
            else if (tIndex2 == 1)
            {
                if (mNPCUI.mPage[0] == -1)
                {
                LABEL_882:
                    mBASICUI.Insert1(mMESSAGE.Return(1400), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iIndex == 540 || Item->iIndex == 538 || Item->iIndex == 551 || Item->iIndex == 565 || Item->iIndex == 619 || Item->iIndex == 18007 || Item->iIndex == 633 || Item->iIndex == 825)
                {
                    goto LABEL_867;
                }
                if (mUTIL.ReturnISValue(mNPCUI.mInv[0].iImproveState) >= 40)
                {
                    if (Item->iIndex == 1023 || Item->iIndex == 1437 || Item->iIndex == 1457 || Item->iIndex == 2459 || Item->iIndex == 7014 || Item->iIndex == 7015 || Item->iIndex == 1243)
                    {
                        goto LABEL_867;
                    }
                }
                else if (Item->iIndex == 1019 || Item->iIndex == 1020 || Item->iIndex == 1021 || Item->iIndex == 1022 || Item->iIndex == 1023 || Item->iIndex == 7014)
                {
                    goto LABEL_867;
                }
            LABEL_892:
                mBASICUI.Insert1(mMESSAGE.Return(218), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
        }
        tIndex2 = mNPCUI.GetImprove2Index2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 1)
            {
                if (Item->iIndex != 1422)
                {
                    tColor = mFONTCOLOR.mData[44];
                    tstr = mMESSAGE.Return(1398);
                    mBASICUI.Insert1(tstr, tColor);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
            else
            {
                if (Item->iSort != 7 && Item->iSort != 8 && Item->iSort != 9 && Item->iSort != 10 && Item->iSort != 11 && Item->iSort != 12 && Item->iSort != 13
                    && Item->iSort != 14 && Item->iSort != 15 && Item->iSort != 16 && Item->iSort != 17 && Item->iSort != 18 && Item->iSort != 19 && Item->iSort != 20
                    && Item->iSort != 21 && Item->iSort != 29)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1395), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iType != 3 && Item->iType != 4)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1396), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mUTIL.ReturnISValue(mItemImprove) != 40)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1397), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
            mNPCUI.mPage[tIndex2] = mPage;
            mNPCUI.mIndex[tIndex2] = mIndex;
            mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
            mNPCUI.mInv[tIndex2].iX = mItemX;
            mNPCUI.mInv[tIndex2].iY = mItemY;
            mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
            mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
            mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
            mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
            mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
            mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
            mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
            mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetImprove3Index2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 0)
            {
                if (Item->iSort != 6 || Item->iCheckImprove != 2)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(217), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mUTIL.ReturnISValue(mItemImprove) == 40)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(220), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                goto LABEL_867;
            }
            else
            {
                if (mNPCUI.mPage[0] == -1)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1400), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iIndex == 695 || Item->iIndex == 696 || Item->iIndex == 698 || Item->iIndex == 826 || Item->iIndex == 2387 || Item->iIndex == 2392 || Item->iIndex == 2397)
                {
                    goto LABEL_867;
                }
                mBASICUI.Insert1(mMESSAGE.Return(218), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
        }
        tIndex2 = mNPCUI.GetAddIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 0)
            {
                if (Item->iType != 3 && Item->iType != 4)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(694), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iSort != 7 && Item->iSort != 8 && Item->iSort != 9 && Item->iSort != 10 && Item->iSort != 11 && Item->iSort != 12 && Item->iSort != 13 && Item->iSort != 14 && Item->iSort != 15 && Item->iSort != 16 && Item->iSort != 17 && Item->iSort != 18 && Item->iSort != 19 && Item->iSort != 20 && Item->iSort != 21 || Item->iCheckHighImprove != 2)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(695), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mUTIL.ReturnIUValue(mItemImprove) >= 12)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(696), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iCheckItemSet == 2 && mUTIL.ReturnISValue(mItemImprove) < 44)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2356), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                mNPCUI.mPage[tIndex2] = mPage;
                mNPCUI.mIndex[tIndex2] = mIndex;
                mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                mNPCUI.mInv[tIndex2].iX = mItemX;
                mNPCUI.mInv[tIndex2].iY = mItemY;
                mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                CHOICEUI::Off();
                return 1;
            }
            else
            {
                if (mUTIL.ReturnIUMaterialRate(Item->iIndex) <= 0)
                {
                    if ((Item->iType == 3 || Item->iCheckItemSet == 2) && (Item->iSort == 7 || Item->iSort == 8 || Item->iSort == 9 || Item->iSort == 10 || Item->iSort == 11 || Item->iSort == 12 || Item->iSort == 13 || Item->iSort == 14 || Item->iSort == 15 || Item->iSort == 16 || Item->iSort == 17 || Item->iSort == 18 || Item->iSort == 19 || Item->iSort == 20 || Item->iSort == 21))
                    {
                        if (Item->iCheckItemSet != 2)
                        {
                            if (mUTIL.ReturnISValue(mItemImprove) > 0 || mUTIL.ReturnIUValue(mItemImprove) > 0)
                            {
                                mBASICUI.Insert1(mMESSAGE.Return(699), mFONTCOLOR.mData[44]);
                                CHOICEUI::NetworkNO();
                                CHOICEUI::Off();
                                return 1;
                            }
                            if (mItemSocket[0] <= 0)
                            {
                                goto LABEL_867;
                            }
                            mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
                            CHOICEUI::NetworkNO();
                            CHOICEUI::Off();
                            return 1;
                        }
                        if (Item->iIndex < 88001 || Item->iIndex > 88048)
                        {
                            if (mUTIL.ReturnIUValue(mItemImprove) > 0)
                            {
                                tColor = mFONTCOLOR.mData[44];
                                tstr = mMESSAGE.Return(2359);
                                mBASICUI.Insert1(tstr, tColor);
                                CHOICEUI::NetworkNO();
                                CHOICEUI::Off();
                                return 1;
                            }
                        LABEL_285:
                            if (mItemSocket[0] <= 0)
                            {
                                goto LABEL_867;
                            }
                        LABEL_286:
                            mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
                            CHOICEUI::NetworkNO();
                            CHOICEUI::Off();
                            return 1;
                        }
                    }
                    mBASICUI.Insert1(mMESSAGE.Return(698), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            LABEL_867:
                mNPCUI.mPage[tIndex2] = mPage;
                mNPCUI.mIndex[tIndex2] = mIndex;
                mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                mNPCUI.mInv[tIndex2].iX = mItemX;
                mNPCUI.mInv[tIndex2].iY = mItemY;
                mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                CHOICEUI::Off();
                return 1;
            }
        }
        tIndex2 = mNPCUI.GetSmeltIndex2(uX, uY);//Refine sistem//
        if (tIndex2 != -1)
        {
            if (tIndex2 == 0)
            {
                if ((Item->iSort == 7 || Item->iSort == 8 || Item->iSort == 9 || Item->iSort == 10 || Item->iSort == 11 || Item->iSort == 12 || Item->iSort == 13 || Item->iSort == 14 || Item->iSort == 15 || Item->iSort == 16 || Item->iSort == 17 || Item->iSort == 18 || Item->iSort == 19 || Item->iSort == 20 || Item->iSort == 21 || Item->iSort == 29) && (Item->iType == 3 || Item->iType == 4 || Item->iType == 5) && Item->iCheckImprove == 2 && Item->iCheckItemSet != 3)
                {
                    if (mUTIL.ReturnRFValue(mItemImprove) >= 25)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(1932), mFONTCOLOR.mData[44]);
                        CHOICEUI::NetworkNO();
                        CHOICEUI::Off();
                        return 1;
                    }
                    goto LABEL_867;
                }
                mBASICUI.Insert1(mMESSAGE.Return(1930), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (Item->iIndex == 576 || Item->iIndex == 824 || Item->iIndex == 699 || Item->iIndex == 2390 || Item->iIndex == 2395)
            {
                goto LABEL_867;
            }
            mBASICUI.Insert1(mMESSAGE.Return(1916), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetAccTransferIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2)
            {
                switch (tIndex2)
                {
                case 1:
                    if (mUTIL.ReturnItemSort(Item) == 2)
                    {
                        goto LABEL_867;
                    }
                    break;
                case 2:
                    if (Item->iIndex == 2373 || Item->iIndex == 2400)
                    {
                        goto LABEL_867;
                    }
                    break;
                case 3:
                    if (Item->iIndex == 2373 || Item->iIndex == 2400)
                    {
                        goto LABEL_867;
                    }
                    break;
                case 4:
                    if (Item->iIndex == 2373 || Item->iIndex == 2400)
                    {
                        goto LABEL_867;
                    }
                    break;
                default:
                    if (tIndex2 != 5 || Item->iIndex == 2373 || Item->iIndex == 2400)
                    {
                        goto LABEL_867;
                    }
                    break;
                }
            }
            else if (mUTIL.ReturnItemSort(Item) == 2)
            {
                goto LABEL_867;
            }
        LABEL_898:
            mBASICUI.Insert1(mMESSAGE.Return(2507), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetRequiemSmeltIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 0)
            {
                if ((Item->iSort == 7 || Item->iSort == 8 || Item->iSort == 9 || Item->iSort == 10 || Item->iSort == 11 || Item->iSort == 12 || Item->iSort == 13 || Item->iSort == 14 || Item->iSort == 15 || Item->iSort == 16 || Item->iSort == 17 || Item->iSort == 18 || Item->iSort == 19 || Item->iSort == 20 || Item->iSort == 21 || Item->iSort == 29) && Item->iType == 6)
                {
                    goto LABEL_867;
                }
            LABEL_368:
                mBASICUI.Insert1(mMESSAGE.Return(1930), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (Item->iIndex == 2476 || Item->iIndex == 2482 || Item->iIndex == 2477)
            {
                goto LABEL_867;
            }
        LABEL_321:
            mBASICUI.Insert1(mMESSAGE.Return(1916), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetExchangeIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (mNPCUI.mPageSort == 1)
            {
                if (tIndex2)
                {
                    if (Item->iIndex == 984 || Item->iIndex == 2394)
                    {
                        goto LABEL_867;
                    }
                    mBASICUI.Insert1(mMESSAGE.Return(2507), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mUTIL.ReturnItemSort(Item) == 2 && Item->iEquipInfo[1] != 12)
                {
                    goto LABEL_867;
                }
            }
            else
            {
                if (mUTIL.ReturnItemSort(Item) == 1 || mUTIL.ReturnItemSort(Item) == 4 || mUTIL.ReturnItemSort(Item) == 8 || mUTIL.ReturnItemSort(Item) == 9)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2564), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iType != 3 && Item->iType != 4)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(713), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if ((Item->iSort == 7 || Item->iSort == 8 || Item->iSort == 9 || Item->iSort == 10 || Item->iSort == 11 || Item->iSort == 12 || Item->iSort == 13 || Item->iSort == 14 || Item->iSort == 15 || Item->iSort == 16 || Item->iSort == 17 || Item->iSort == 18 || Item->iSort == 19 || Item->iSort == 20 || Item->iSort == 21) && Item->iCheckExchange == 2)
                {
                    if (mINVENUI.CheckSpaceFor2x2(mPage, mItemX, mItemY))
                    {
                        if (mItemSocket[0] <= 0)
                        {
                            goto LABEL_867;
                        }
                        mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
                        CHOICEUI::NetworkNO();
                        CHOICEUI::Off();
                        return 1;
                    }
                LABEL_402:
                    mBASICUI.Insert1(mMESSAGE.Return(734), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
        LABEL_511:
            mBASICUI.Insert1(mMESSAGE.Return(714), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetHighIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 0)
            {
                if (mUTIL.ReturnItemSort(Item) == 1 || mUTIL.ReturnItemSort(Item) == 4 || mUTIL.ReturnItemSort(Item) == 8)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2564), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iType != 3 && Item->iType != 4)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(717), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iSort != 7 && Item->iSort != 8 && Item->iSort != 9 && Item->iSort != 10 && Item->iSort != 11 && Item->iSort != 12 && Item->iSort != 13 && Item->iSort != 14 && Item->iSort != 15 && Item->iSort != 16 && Item->iSort != 17 && Item->iSort != 18 && Item->iSort != 19 && Item->iSort != 20 && Item->iSort != 21 || Item->iCheckHighItem != 2)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(718), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mUTIL.ReturnISValue(mItemImprove) < 4 || mUTIL.ReturnIUValue(mItemImprove) < 1)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(719), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iMartialLevel >= 12)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(720), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            LABEL_450:
                if (mItemSocket[0] > 0)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                mNPCUI.mPage[tIndex2] = mPage;
                mNPCUI.mIndex[tIndex2] = mIndex;
                mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                mNPCUI.mInv[tIndex2].iX = mItemX;
                mNPCUI.mInv[tIndex2].iY = mItemY;
                mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                CHOICEUI::Off();
                return 1;
            }
            else
            {
                if (Item->iIndex == 1024 || Item->iIndex == 1025)
                {
                    if (mItemSocket[0] > 0)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
                        CHOICEUI::NetworkNO();
                        CHOICEUI::Off();
                        return 1;
                    }
                    mNPCUI.mPage[tIndex2] = mPage;
                    mNPCUI.mIndex[tIndex2] = mIndex;
                    mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                    mNPCUI.mInv[tIndex2].iX = mItemX;
                    mNPCUI.mInv[tIndex2].iY = mItemY;
                    mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                    mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                    mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                    mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                    mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                    mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                    mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                    mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                    CHOICEUI::Off();
                    return 1;
                }
            LABEL_449:
                mBASICUI.Insert1(mMESSAGE.Return(721), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
        }
        tIndex2 = mNPCUI.GetLegendHighIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (mNPCUI.tUltimateUpgradeState[0] == 0)
            {
                if (tIndex2)
                {
                    if (Item->iIndex == 984 || Item->iIndex == 2394)
                    {
                        goto LABEL_867;
                    }
                    mBASICUI.Insert1(mMESSAGE.Return(721), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iType == 5)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2564), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mUTIL.CheckIfV2Gear(Item->iIndex))
                {
                    if (mUTIL.ReturnISValue(mItemImprove) < 50 || mUTIL.ReturnIUValue(mItemImprove) < 12)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(2566), mFONTCOLOR.mData[44]);
                        CHOICEUI::NetworkNO();
                        CHOICEUI::Off();
                        return 1;
                    }
                    goto LABEL_867;
                }
                if (mUTIL.CheckIfRebirthCloak(Item->iIndex))
                {
                    if (mUTIL.ReturnISValue(mItemImprove) < 50 || mUTIL.ReturnRFValue(mItemImprove) < 1)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(2732), mFONTCOLOR.mData[44]);
                        CHOICEUI::NetworkNO();
                        CHOICEUI::Off();
                        return 1;
                    }
                    goto LABEL_867;
                }
                if (mUTIL.CheckIfItemSort29(Item->iIndex))
                {
                    if (mUTIL.ReturnISValue(mItemImprove) < 50 || mUTIL.ReturnIUValue(mItemImprove) < 1 || mUTIL.ReturnRFValue(mItemImprove) < 1)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(2753), mFONTCOLOR.mData[44]);
                        CHOICEUI::NetworkNO();
                        CHOICEUI::Off();
                        return 1;
                    }
                    goto LABEL_867;
                }
                if (mUTIL.ReturnItemSort(Item) == 3)
                {
                    if (mUTIL.ReturnISValue(mItemImprove) < 40)
                    {
                        tColor = mFONTCOLOR.mData[44];
                        tstr = mMESSAGE.Return(2623);
                        mBASICUI.Insert1(tstr, tColor);
                        CHOICEUI::NetworkNO();
                        CHOICEUI::Off();
                        return 1;
                    }
                    goto LABEL_867;
                }
                if (Item->iSort == 6 && Item->iEquipInfo[1] != 12)
                {
                    goto LABEL_867;
                }
            LABEL_488:
                mBASICUI.Insert1(mMESSAGE.Return(2568), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            else if (mNPCUI.tUltimateUpgradeState[0] == 1)
            {
                if (tIndex2 == 0)
                {
                    if (mUTIL.ReturnItemSort(Item) == 7)
                    {
                        goto LABEL_867;
                    }
                    mBASICUI.Insert1(mMESSAGE.Return(2568), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (tIndex2 != 1 && tIndex2 != 2 && tIndex2 != 3)
                {
                    goto LABEL_867;
                }
                if (mUTIL.ReturnItemSort(Item) == 7 || Item->iIndex == 984 || Item->iIndex == 2394)
                {
                    if (Item->iIndex == 1851)
                    {
                        for (i = 0; i < tIndex2; ++i)
                        {
                            if (mNPCUI.mInv[i].iIndex == 1851)
                            {
                                mBASICUI.Insert1(mMESSAGE.Return(728), mFONTCOLOR.mData[44]);
                                CHOICEUI::NetworkNO();
                                CHOICEUI::Off();
                                return 1;
                            }
                        }
                    }
                    goto LABEL_867;
                }
            LABEL_496:
                tColor = mFONTCOLOR.mData[44];
                tstr = mMESSAGE.Return(2386);
                mBASICUI.Insert1(tstr, tColor);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            else if (mNPCUI.tUltimateUpgradeState[0] == 2)
            {
                if (tIndex2 == 1)
                {
                    if (Item->iIndex == 984 || Item->iIndex == 2394)
                    {
                        goto LABEL_867;
                    }
                }
                else if (mUTIL.ReturnItemSort(Item) == 5)
                {
                    goto LABEL_867;
                }
                mBASICUI.Insert1(mMESSAGE.Return(714), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
        }
        tIndex2 = mNPCUI.GetLegendImproveIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2)
            {
                if (mNPCUI.mPage[0] == -1)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1400), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iIndex == 2332 || Item->iIndex == 2383 || Item->iIndex == 18006 || Item->iIndex == 2373 || Item->iIndex == 2374 || Item->iIndex == 2375 || Item->iIndex == 2400 || Item->iIndex == 2150 || Item->iIndex == 1878 || Item->iIndex == 2477 || Item->iIndex == 1831 || Item->iIndex == 1832 || Item->iIndex == 17133 || Item->iIndex == 1952 || Item->iIndex == 1948 || Item->iIndex == 1953 || Item->iIndex == 1949 || Item->iIndex == 1954 || Item->iIndex == 1950 || Item->iIndex == 1955 || Item->iIndex == 1951)
                {
                    goto LABEL_867;
                }
                mBASICUI.Insert1(mMESSAGE.Return(218), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            else
            {
                if (Item->iSort != 6 && Item->iSort != 7 && Item->iSort != 8 && Item->iSort != 9 && Item->iSort != 10 && Item->iSort != 11 && Item->iSort != 12 && Item->iSort != 13 && Item->iSort != 14 && Item->iSort != 15 && Item->iSort != 16 && Item->iSort != 17 && Item->iSort != 18 && Item->iSort != 19 && Item->iSort != 20 && Item->iSort != 21 && Item->iSort != 31 && Item->iSort != 32 && Item->iSort != 29)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(217), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mUTIL.ReturnItemSort(Item) == 1 || mUTIL.ReturnItemSort(Item) == 4)
                {
                    if (mUTIL.ReturnISValue(mItemImprove) < 100)
                    {
                        if (mUTIL.ReturnISValue(mItemImprove) > 15)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(220), mFONTCOLOR.mData[44]);
                            CHOICEUI::NetworkNO();
                            CHOICEUI::Off();
                            return 1;
                        }
                        goto LABEL_867;
                    }
                LABEL_609:
                    mBASICUI.Insert1(mMESSAGE.Return(2562), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mUTIL.ReturnItemSort(Item) == 8)
                {
                    if (mUTIL.ReturnISValue(mItemImprove) < 100)
                    {
                        goto LABEL_867;
                    }
                    mBASICUI.Insert1(mMESSAGE.Return(2562), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mUTIL.ReturnItemSort(Item) == 9)
                {
                    if (mUTIL.ReturnISValue(mItemImprove) < 100)
                    {
                        goto LABEL_867;
                    }
                    mBASICUI.Insert1(mMESSAGE.Return(2562), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mUTIL.ReturnItemSort(Item) == 2 || mUTIL.ReturnItemSort(Item) == 5 || mUTIL.ReturnItemSort(Item) == 6)
                {
                    goto LABEL_867;
                }
            LABEL_585:
                mBASICUI.Insert1(mMESSAGE.Return(2565), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
        }
        tIndex2 = mNPCUI.GetLegendImprove2Index2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 0)
            {
                if (mUTIL.ReturnItemSort(Item) != 1 && mUTIL.ReturnItemSort(Item) != 4 && mUTIL.ReturnItemSort(Item) != 8 && mUTIL.ReturnItemSort(Item) != 9)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2565), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mUTIL.ReturnISValue(mItemImprove) < 100)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2561), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
            if (tIndex2 == 1 && mItemIdx != 1422 || !mNPCUI.mMakeItemPresentPage && tIndex2 == 2 && mUTIL.ReturnItemSort(Item) != 1 && mUTIL.ReturnItemSort(Item) != 4)
            {
                mBASICUI.Insert1(mMESSAGE.Return(2569), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            goto LABEL_867;
        }
        tIndex2 = mNPCUI.GetLegendEngraveIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2)
            {
                if (mNPCUI.mPage[0] == -1)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(221), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if ((Item->iIndex < 20045 || Item->iIndex > 20103) && (Item->iIndex < 20105 || Item->iIndex > 20163) && (Item->iIndex < 17216 || Item->iIndex > 17274) && (Item->iIndex < 17276 || Item->iIndex > 17334))
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2745), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                goto LABEL_867;
            }
            else
            {
                if (mUTIL.ReturnItemSort(Item) == 8)
                {
                    if (mUTIL.ReturnISValue(mItemImprove) < 100)
                    {
                        goto LABEL_867;
                    }
                }
                else
                {
                    if (mUTIL.ReturnItemSort(Item) != 1 && mUTIL.ReturnItemSort(Item) != 4 || Item->iSort != 7 && Item->iSort != 9 && Item->iSort != 10 && Item->iSort != 11 && Item->iSort != 12)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(2746), mFONTCOLOR.mData[44]);
                        CHOICEUI::NetworkNO();
                        CHOICEUI::Off();
                        return 1;
                    }
                    if (mUTIL.ReturnISValue(mItemImprove) < 100)
                    {
                        goto LABEL_867;
                    }
                }
                mBASICUI.Insert1(mMESSAGE.Return(2562), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
        }
        tIndex2 = mNPCUI.GetLowIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 0)
            {
                if (Item->iType != 3 && Item->iType != 4)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(722), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iSort != 7 && Item->iSort != 8 && Item->iSort != 9 && Item->iSort != 10 && Item->iSort != 11 && Item->iSort != 12 && Item->iSort != 13 && Item->iSort != 14 && Item->iSort != 15 && Item->iSort != 16 && Item->iSort != 17 && Item->iSort != 18 && Item->iSort != 19 && Item->iSort != 20 && Item->iSort != 21 || Item->iCheckLowItem != 2)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(723), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (Item->iType == 3)
                {
                    if (Item->iLevel > 45)
                    {
                        if (mItemSocket[0] > 0)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
                            CHOICEUI::NetworkNO();
                            CHOICEUI::Off();
                            return 1;
                        }
                        goto LABEL_771;
                    }
                }
                else if (Item->iType != 4 || Item->iLevel > 100)
                {
                    if (mItemSocket[0] > 0)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
                        CHOICEUI::NetworkNO();
                        CHOICEUI::Off();
                        return 1;
                    }
                    goto LABEL_771;
                }
                tColor = mFONTCOLOR.mData[44];
                tstr = mMESSAGE.Return(724);
                mBASICUI.Insert1(tstr, tColor);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            else
            {
                if (Item->iIndex != 1024 && Item->iIndex != 1025)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(725), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mItemSocket[0] > 0)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                mNPCUI.mPage[tIndex2] = mPage;
                mNPCUI.mIndex[tIndex2] = mIndex;
                mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                mNPCUI.mInv[tIndex2].iX = mItemX;
                mNPCUI.mInv[tIndex2].iY = mItemY;
                mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                CHOICEUI::Off();
                return 1;
            }
        }
        tIndex2 = mNPCUI.GetMakeItemIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (mItemSocket[0] > 0)
            {
                mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            mNPCUI.mPage[tIndex2] = mPage;
            mNPCUI.mIndex[tIndex2] = mIndex;
            mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
            mNPCUI.mInv[tIndex2].iX = mItemX;
            mNPCUI.mInv[tIndex2].iY = mItemY;
            mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
            mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
            mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
            mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
            mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
            mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
            mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
            mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetMakeSkillIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (mItemSocket[0] > 0)
            {
                mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            mNPCUI.mPage[tIndex2] = mPage;
            mNPCUI.mIndex[tIndex2] = mIndex;
            mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
            mNPCUI.mInv[tIndex2].iX = mItemX;
            mNPCUI.mInv[tIndex2].iY = mItemY;
            mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
            mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
            mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
            mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
            mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
            mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
            mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
            mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mPSHOPUI.PutPShop1(uX, uY, mItemIdx, mItemQuantity, -1);
        if (tIndex2 != -1)
        {
            if (Item->iCheckAvatarShop == 1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(590), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
            }
            else if (!mPSHOPUI.mDisplaySort || mPSHOPUI.mMenuSort == 2)
            {
                mPSHOPUI.mPShopInfo.mItemInfo[mPSHOPUI.mPage][tIndex2][0] = mItemIdx;
                mPSHOPUI.mPShopInfo.mItemInfo[mPSHOPUI.mPage][tIndex2][1] = mItemQuantity;
                mPSHOPUI.mPShopInfo.mItemInfo[mPSHOPUI.mPage][tIndex2][2] = mItemImprove;
                mPSHOPUI.mPShopInfo.mItemInfo[mPSHOPUI.mPage][tIndex2][3] = mItemSerial;
                mPSHOPUI.mPShopInfo.mItemInfo[mPSHOPUI.mPage][tIndex2][4] = 0;
                mPSHOPUI.mPShopInfo.mItemInfo[mPSHOPUI.mPage][tIndex2][5] = mPage;
                mPSHOPUI.mPShopInfo.mItemInfo[mPSHOPUI.mPage][tIndex2][6] = mIndex;
                mPSHOPUI.mPShopInfo.mItemInfo[mPSHOPUI.mPage][tIndex2][7] = mItemX;
                mPSHOPUI.mPShopInfo.mItemInfo[mPSHOPUI.mPage][tIndex2][8] = mItemY;
                mPSHOPUI.mPShopInfo.mItemSocket[mPSHOPUI.mPage][tIndex2][0] = mItemSocket[0];
                mPSHOPUI.mPShopInfo.mItemSocket[mPSHOPUI.mPage][tIndex2][1] = mItemSocket[1];
                mPSHOPUI.mPShopInfo.mItemSocket[mPSHOPUI.mPage][tIndex2][2] = mItemSocket[2];
                mPSHOPUI.mPShopInfo.mItemSocket[mPSHOPUI.mPage][tIndex2][3] = mItemSocket[3];
                mPSHOPUI.mPShopInfo.mItemSocket[mPSHOPUI.mPage][tIndex2][4] = mItemSocket[4];
                mPSHOPUI.InitForInputPrice(tIndex2);
                CHOICEUI::Off();
            }
            else
            {

            }
            return 1;
        }
        tIndex2 = mNPCUI.GetMakeBirdIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (mItemSocket[0] > 0)
            {
            LABEL_703:
                mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
            LABEL_770:
                CHOICEUI::Off();
                return 1;
            }
        LABEL_771:
            mNPCUI.mPage[tIndex2] = mPage;
            mNPCUI.mIndex[tIndex2] = mIndex;
            mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
            mNPCUI.mInv[tIndex2].iX = mItemX;
            mNPCUI.mInv[tIndex2].iY = mItemY;
            mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
            mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
            mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
            mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
            mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
            mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
            mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
            mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetDestroyIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            //if (/*!&& mUTIL.CheckPossibleDestroyItem(Item->iIndex)*/)
            //{
            //    mBASICUI.Insert1(mMESSAGE.Return(1306), mFONTCOLOR.mData[44]);
            //    return 1;
            //}
            if (Item->iType != 3 || Item->iSort != 7 && Item->iSort != 8 && Item->iSort != 9 && Item->iSort != 10 && Item->iSort != 11 && Item->iSort != 12 && Item->iSort != 13 && Item->iSort != 14 && Item->iSort != 15 && Item->iSort != 16 && Item->iSort != 17 && Item->iSort != 18 && Item->iSort != 19 && Item->iSort != 20 && Item->iSort != 21 || mUTIL.ReturnISValue(mItemImprove) < 1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(1306), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (!mINVENUI.CheckSpaceFor2x2(mPage, mItemX, mItemY))
            {
                mBASICUI.Insert1(mMESSAGE.Return(734), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (mItemSocket[0] > 0)
            {
                mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            mNPCUI.mPage[tIndex2] = mPage;
            mNPCUI.mIndex[tIndex2] = mIndex;
            mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
            mNPCUI.mInv[tIndex2].iX = mItemX;
            mNPCUI.mInv[tIndex2].iY = mItemY;
            mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
            mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
            mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
            mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
            mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
            mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
            mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
            mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetSkyImproveIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 1)
            {
                if (Item->iIndex == 501 || Item->iIndex == 502 || Item->iIndex == 503 || Item->iIndex == 504 || Item->iIndex == 505 || Item->iIndex == 2401 || Item->iIndex == 2402 || Item->iIndex == 2403 || Item->iIndex == 2404 || Item->iIndex == 2405)
                {
                    mNPCUI.mPage[tIndex2] = mPage;
                    mNPCUI.mIndex[tIndex2] = mIndex;
                    mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                    mNPCUI.mInv[tIndex2].iX = mItemX;
                    mNPCUI.mInv[tIndex2].iY = mItemY;
                    mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                    mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                    mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                    mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                    mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                    mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                    mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                    mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                    CHOICEUI::Off();
                    return 1;
                }
            LABEL_717:
                mBASICUI.Insert1(mMESSAGE.Return(1643), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            else
            {
                if ((Item->iIndex >= 87000 && Item->iIndex <= 87128 || Item->iIndex >= 87500 && Item->iIndex <= 87562) && Item->iIndex >= 87500 && Item->iIndex <= 87562)
                {
                    if (Item->iType != 3 && Item->iType != 4)
                    {
                        mBASICUI.Insert1(mMESSAGE.Return(1643), mFONTCOLOR.mData[44]);
                        CHOICEUI::NetworkNO();
                        CHOICEUI::Off();
                        return 1;
                    }
                    if ((Item->iSort == 7 || Item->iSort == 8 || Item->iSort == 9 || Item->iSort == 10 || Item->iSort == 11 || Item->iSort == 12 || Item->iSort == 13 || Item->iSort == 14 || Item->iSort == 15 || Item->iSort == 16 || Item->iSort == 17 || Item->iSort == 18 || Item->iSort == 19 || Item->iSort == 20 || Item->iSort == 21) && mUTIL.ReturnISValue(mItemImprove) >= 30)
                    {
                        if ((Item->iIndex >= 87077 && Item->iIndex <= 87084 || Item->iIndex >= 87099 && Item->iIndex <= 87106 || Item->iIndex >= 87121 && Item->iIndex <= 87128) && mMYINFO.mAvatarInfo.aRebirth < 12)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(1647), mFONTCOLOR.mData[44]);
                            CHOICEUI::NetworkNO();
                            CHOICEUI::Off();
                            return 1;
                        }
                        if (!mINVENUI.CheckSpaceFor2x2(mPage, mItemX, mItemY))
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(734), mFONTCOLOR.mData[44]);
                            CHOICEUI::NetworkNO();
                            CHOICEUI::Off();
                            return 1;
                        }
                        mNPCUI.mPage[tIndex2] = mPage;
                        mNPCUI.mIndex[tIndex2] = mIndex;
                        mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                        mNPCUI.mInv[tIndex2].iX = mItemX;
                        mNPCUI.mInv[tIndex2].iY = mItemY;
                        mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                        mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                        mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                        mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                        mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                        mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                        mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                        mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                        CHOICEUI::Off();
                        return 1;
                    }
                }
                mBASICUI.Insert1(mMESSAGE.Return(1644), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
        }
        tIndex2 = mNPCUI.GetSocketExchangeIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            v256 = mITEM.Search(mItemIdx);
            if (!v256)
            {
                return 1;
            }
            if ((v256->iType == 3 || v256->iType == 4 || v256->iType == 5 || v256->iType == 6) && (v256->iSort == 29 || v256->iSort >= 7 && v256->iSort <= 21))
            {
                if (mItemSocket[0] > 0)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1771), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                mNPCUI.mPage[tIndex2] = mPage;
                mNPCUI.mIndex[tIndex2] = mIndex;
                mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                mNPCUI.mInv[tIndex2].iX = mItemX;
                mNPCUI.mInv[tIndex2].iY = mItemY;
                mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                CHOICEUI::Off();
                return 1;
            }
        LABEL_784:
            mBASICUI.Insert1(mMESSAGE.Return(1771), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetSocketInitIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            v256 = mITEM.Search(mItemIdx);
            if (!v256)
            {
                return 1;
            }
            if (tIndex2 == 1)
            {
                if (mItemIdx != 1212)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1777), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
            else
            {
                if (v256->iType != 3 && v256->iType != 4 && v256->iType != 5 && v256->iType != 6 || v256->iSort != 29 && (v256->iSort < 7 || v256->iSort > 21))
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1771), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mItemSocket[0] <= 0)
                {
                LABEL_786:
                    mBASICUI.Insert1(mMESSAGE.Return(1778), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                s1 = 0;
                s2 = 0;
                s3 = 0;
                s4 = 0;
                s5 = 0;
                mUTIL.GetSocketAbility(mItemSocket[0], mItemSocket[1], mItemSocket[2], &s1, &s2, &s3, &s4, &s5);
                if (s1 > 0 || s2 > 0 || s3 > 0 || s4 > 0 || s5 > 0)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1800), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
            mNPCUI.mPage[tIndex2] = mPage;
            mNPCUI.mIndex[tIndex2] = mIndex;
            mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
            mNPCUI.mInv[tIndex2].iX = mItemX;
            mNPCUI.mInv[tIndex2].iY = mItemY;
            mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
            mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
            mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
            mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
            mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
            mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
            mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
            mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetSocketJewelUpIdx2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 1)
            {
                if (mItemIdx != 531 && mItemIdx != 1244 && mItemIdx != 2134 && mItemIdx != 2385 && mItemIdx != 2386 && mItemIdx != 2449 && mItemIdx != 17205 && mItemIdx != 17206 && mItemIdx != 17207 && mItemIdx != 17208)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1780), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
            else
            {
                if (mItemSocket[0] <= 0)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1778), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                tGems[0] = 0;
                tGems[1] = 0;
                tGems[2] = 0;
                tGems[3] = 0;
                tGems[4] = 0;
                tSocketNum = mUTIL.GetSocketAbility(mItemSocket[0], mItemSocket[1], mItemSocket[2], &tGems[0], &tGems[1], &tGems[2], &tGems[3], &tGems[4]);
                for (j = 0; j < tSocketNum && tGems[j] > 0; ++j)
                {
                    ;
                }
                if (j >= tSocketNum)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1799), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
            mNPCUI.mPage[tIndex2] = mPage;
            mNPCUI.mIndex[tIndex2] = mIndex;
            mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
            mNPCUI.mInv[tIndex2].iX = mItemX;
            mNPCUI.mInv[tIndex2].iY = mItemY;
            mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
            mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
            mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
            mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
            mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
            mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
            mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
            mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetSocketJewelDeleteIdx2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 1)
            {
                if (mItemIdx != 1213)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1782), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
            else
            {
                s1 = 0;
                s2 = 0;
                s3 = 0;
                s4 = 0;
                s5 = 0;
                mUTIL.GetSocketAbility(mItemSocket[0], mItemSocket[1], mItemSocket[2], &s1, &s2, &s3, &s4, &s5);
                if (s1 <= 0 && s2 <= 0 && s3 <= 0 && s4 <= 0 && s5 <= 0)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1783), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
            mNPCUI.mPage[tIndex2] = mPage;
            mNPCUI.mIndex[tIndex2] = mIndex;
            mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
            mNPCUI.mInv[tIndex2].iX = mItemX;
            mNPCUI.mInv[tIndex2].iY = mItemY;
            mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
            mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
            mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
            mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
            mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
            mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
            mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
            mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetSocketAddUpIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 0)
            {
                if (mItemSocket[0] <= 0)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2067), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                s1 = 0;
                s2 = 0;
                s3 = 0;
                s4 = 0;
                s5 = 0;
                tSocketNum = mUTIL.GetSocketAbility(mItemSocket[0], mItemSocket[1], mItemSocket[2], &s1, &s2, &s3, &s4, &s5);
                if (tSocketNum < 1 || tSocketNum > 4)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2067), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                mNPCUI.mPage[tIndex2] = mPage;
                mNPCUI.mIndex[tIndex2] = mIndex;
                mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                mNPCUI.mInv[tIndex2].iX = mItemX;
                mNPCUI.mInv[tIndex2].iY = mItemY;
                mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                CHOICEUI::Off();
                return 1;
            }
            if (tIndex2 != 1 || mItemIdx == 690 || mItemIdx == 823)
            {
            LABEL_846:
                mNPCUI.mPage[tIndex2] = mPage;
                mNPCUI.mIndex[tIndex2] = mIndex;
                mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                mNPCUI.mInv[tIndex2].iX = mItemX;
                mNPCUI.mInv[tIndex2].iY = mItemY;
                mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                CHOICEUI::Off();
                return 1;
            }
        LABEL_845:
            mBASICUI.Insert1(mMESSAGE.Return(2069), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetCloakUpIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 0)
            {
                if (!mUTIL.CheckIfEliteCape(Item->iIndex))
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2387), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                mNPCUI.mPage[tIndex2] = mPage;
                mNPCUI.mIndex[tIndex2] = mIndex;
                mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                mNPCUI.mInv[tIndex2].iX = mItemX;
                mNPCUI.mInv[tIndex2].iY = mItemY;
                mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                CHOICEUI::Off();
                return 1;
            }
            if (Item->iIndex == 984 || Item->iIndex == 2394)
            {
                mNPCUI.mPage[tIndex2] = mPage;
                mNPCUI.mIndex[tIndex2] = mIndex;
                mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                mNPCUI.mInv[tIndex2].iX = mItemX;
                mNPCUI.mInv[tIndex2].iY = mItemY;
                mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                CHOICEUI::Off();
                return 1;
            }
            mBASICUI.Insert1(mMESSAGE.Return(2386), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
        sX = mX - 284;
        sY = mY;
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3742], sX, sY, uX, uY))
        {
            tIndex2 = mINVENUI.SetPetInventory1(uX, uY, mItemIdx, -1);
            if (tIndex2 == -1)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (Item->iSort == 3)
            {
                if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
                {
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                {
                    mCInnerAuto.bTakeItem = 1;
                }
                mPLAY.PROCESS_DATA_254_SEND(mPage, mIndex, 0, tIndex2, 0, 0);
                mIsClick = 1;
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            }
            else
            {
                mBASICUI.Insert1(mMESSAGE.Return(2368), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
            }
            return 1;
        }
        tIndex2 = mNPCUI.GetMakeG12PetIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            mNPCUI.mPage[tIndex2] = mPage;
            mNPCUI.mIndex[tIndex2] = mIndex;
            mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
            mNPCUI.mInv[tIndex2].iX = mItemX;
            mNPCUI.mInv[tIndex2].iY = mItemY;
            mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
            mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
            mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
            mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
            mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
            mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
            mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
            mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetPetAddAbilityIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 0)
            {
                if (Item->iSort != 28 && Item->iSort != 29 || Item->iIndex == 2253 || Item->iIndex == 2254 || Item->iIndex == 2261 || Item->iIndex == 2262 || Item->iIndex == 2300 || Item->iIndex == 2301)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(217), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                mNPCUI.mPage[tIndex2] = mPage;
                mNPCUI.mIndex[tIndex2] = mIndex;
                mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                mNPCUI.mInv[tIndex2].iX = mItemX;
                mNPCUI.mInv[tIndex2].iY = mItemY;
                mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                CHOICEUI::Off();
                return 1;
            }
            if (mNPCUI.mPage[0] == -1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(1400), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (Item->iIndex == 2155 || Item->iIndex == 2156 || Item->iIndex == 2157 || Item->iIndex == 2190 || Item->iIndex == 2150 || Item->iIndex == 1878 || Item->iIndex == 2324 || Item->iIndex == 2325 || Item->iIndex == 2447)
            {
                mNPCUI.mPage[tIndex2] = mPage;
                mNPCUI.mIndex[tIndex2] = mIndex;
                mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
                mNPCUI.mInv[tIndex2].iX = mItemX;
                mNPCUI.mInv[tIndex2].iY = mItemY;
                mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
                mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
                mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
                mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
                mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
                mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
                mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
                mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
                CHOICEUI::Off();
                return 1;
            }
            mBASICUI.Insert1(mMESSAGE.Return(218), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.GetLegendSocketIndex2(uX, uY);
        if (tIndex2 != -1)
        {
            if (tIndex2 == 1)
            {
                if (mItemIdx != 1878 && mItemIdx != 2150)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2069), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
            else
            {
                itemsort = mUTIL.ReturnItemSort2(mItemIdx);
                if (itemsort != 8 && itemsort != 9)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2507), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                s1 = 0;
                s2 = 0;
                s3 = 0;
                s4 = 0;
                s5 = 0;
                tSocketNum = mUTIL.GetSocketAbility(mItemSocket[0], mItemSocket[1], mItemSocket[2], &s1, &s2, &s3, &s4, &s5);
                if (tSocketNum > 4)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2067), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
            mNPCUI.mPage[tIndex2] = mPage;
            mNPCUI.mIndex[tIndex2] = mIndex;
            mNPCUI.mInv[tIndex2].iIndex = mItemIdx;
            mNPCUI.mInv[tIndex2].iX = mItemX;
            mNPCUI.mInv[tIndex2].iY = mItemY;
            mNPCUI.mInv[tIndex2].iQuantity = mItemQuantity;
            mNPCUI.mInv[tIndex2].iImproveState = mItemImprove;
            mNPCUI.mInv[tIndex2].iSerialNumber = mItemSerial;
            mNPCUI.mInv[tIndex2].iSocket[0] = mItemSocket[0];
            mNPCUI.mInv[tIndex2].iSocket[1] = mItemSocket[1];
            mNPCUI.mInv[tIndex2].iSocket[2] = mItemSocket[2];
            mNPCUI.mInv[tIndex2].iSocket[3] = mItemSocket[3];
            mNPCUI.mInv[tIndex2].iSocket[4] = mItemSocket[4];
            CHOICEUI::Off();
            return 1;
        }
        mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
        if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY) || mTRADEUI.mActive || mPSHOPUI.mActive || mNPCUI.mActive)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (Item->iCheckAvatarDrop == 1)
        {
            mBASICUI.Insert1(mMESSAGE.Return(140), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
        }
        else if (Item->iType == 3 && Item->iSort >= 7 && Item->iSort <= 21 && mItemImprove)
        {
            tstr = mMESSAGE.Return(894);
            mCBOXUI.Set(38, tstr, "");
        }
        else
        {
            if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
            {
                mCInnerAuto.bTakeItem = 1;
            }
            mPLAY.PROCESS_DATA_209_SEND(mPage, mIndex, mItemQuantity, 0, 0, 0, 0);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        }
        return 1;

    case 2:
        Item = mITEM.Search(mItemIdx);
        if (!Item)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mINVENUI.GetInventory2(uX, uY, mItemIdx, mItemX, &tPage2, &tIndex2, &tXPost, &tYPost, -1);
        if (tPage2 == -1)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (mMYINFO.mPresentZoneNumber == 270 || mMYINFO.mPresentZoneNumber == 271 || mMYINFO.mPresentZoneNumber == 272 || mMYINFO.mPresentZoneNumber == 273 || mMYINFO.mPresentZoneNumber == 274)
        {
            mBASICUI.Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        else
        {
            if (mPSHOPUI.mActive || mNPCUI.mActive)
            {
                mBASICUI.Insert1(mMESSAGE.Return(598), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (!mMYINFO.mCheckSendActionPacket && mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 1)
            {
                if (mMYINFO.mMoveZoneState)
                {
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mMYINFO.mNetworkLock)
                {
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                {
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                for (k = 0; k < 2; ++k)
                {
                    for (l = 0; l < 2; ++l)
                    {
                        mMYINFO.mAvatarInfo.aAutoSkillAttack[k][l] = 0;
                    }
                }
                for (k = 0; k < 8; ++k)
                {
                    for (l = 0; l < 2; ++l)
                    {
                        mMYINFO.mAvatarInfo.aAutoHuntData[k][l] = 0;
                    }
                }
                if (mMYINFO.mStatBalance > 0 && mUTIL.CheckZone175Type(mMYINFO.mPresentZoneNumber) == 1)
                {
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                mPLAY.PROCESS_DATA_213_SEND(0, mIndex, mItemX, tPage2, tIndex2, tXPost, tYPost);
                mIsClick = 1;
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                {
                    mCInnerAuto.bTakeItem = 1;
                }
            }
            else
            {
            LABEL_28:
                mBASICUI.Insert1(mMESSAGE.Return(120), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
            }
        }
        return 1;

    case 3:
        tIndex2 = mBASICUI.GetHotkeyIndex2(uX, uY, -1);
        if (tIndex2 != -1)
        {
            if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            mPLAY.PROCESS_DATA_204_SEND(1, mIndex, mItemX, mMYINFO.mHotKeyPage, tIndex2);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return 1;
        }
        tIndex2 = mSKILLUI.GetSkillIndex2(uX, uY);
        if (tIndex2 != -1 && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            if (!mSKILLUI.GetContinueSkillIndex(mItemIdx, mItemX))
            {
                mBASICUI.Insert1(mMESSAGE.Return(1652), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            for (i = 0; i < 8; ++i)
            {
                if (mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[i][0] == mItemIdx)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1655), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
            mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[tIndex2][0] = mItemIdx;
            mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[tIndex2][1] = mItemX;
        }
        CHOICEUI::NetworkNO();
        CHOICEUI::Off();
        return 1;

    case 4:
        tIndex2 = mBASICUI.GetHotkeyIndex2(uX, uY, -1);
        if (tIndex2 == -1 || mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;;
        }
        mPLAY.PROCESS_DATA_204_SEND(2, mItemIdx, 0, mMYINFO.mHotKeyPage, tIndex2);
        mIsClick = 1;
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;

    case 5:
        if (mItemY <= 0)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (mItemY <= 2)
        {
            tIndex2 = mBASICUI.GetHotkeyIndex2(uX, uY, mIndex);
            if (tIndex2 == -1)
            {
                if (uY >= mMYINFO.mScreenYSize - 40)
                {
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
                {
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                mPLAY.PROCESS_DATA_205_SEND(mPage, mIndex);
                mIsClick = 1;
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                {
                    mCInnerAuto.bTakeItem = 1;
                }
            }
            else
            {
                if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
                {
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                mPLAY.PROCESS_DATA_216_SEND(mPage, mIndex, mItemX, mMYINFO.mHotKeyPage, tIndex2, 0, 0);
                mIsClick = 1;
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                {
                    mCInnerAuto.bTakeItem = 1;
                }
            }
        }
        else
        {
            if (mItemY != 3)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            Item = mITEM.Search(mItemIdx);
            if (!Item)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            tIndex2 = mBASICUI.PutHotkey1(uX, uY, mItemIdx, mItemX, mIndex);
            if (tIndex2 == -1)
            {
                mINVENUI.PutInventory1(uX, uY, mItemIdx, mItemX, &tPage2, &tIndex2, &tXPost, &tYPost, -1);
                if (tPage2 == -1)
                {
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mPSHOPUI.mActive || mNPCUI.mActive)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(598), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
                {
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                mPLAY.PROCESS_DATA_214_SEND(mPage, mIndex, mItemX, tPage2, tIndex2, tXPost, tYPost);
                mIsClick = 1;
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                {
                    mCInnerAuto.bTakeItem = 1;
                }
            }
            else
            {
                if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
                {
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                mPLAY.PROCESS_DATA_216_SEND(mPage, mIndex, mItemX, mMYINFO.mHotKeyPage, tIndex2, 0, 0);
                mIsClick = 1;
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                {
                    mCInnerAuto.bTakeItem = 1;
                }
            }
        }
        return 1;

    case 6:
        Item = mITEM.Search(mItemIdx);
        if (!Item)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mINVENUI.PutTrade1(uX, uY, mItemIdx, mItemX, mIndex);
        if (tIndex2 == -1)
        {
            mINVENUI.PutInventory1(uX, uY, mItemIdx, mItemX, &tPage2, &tIndex2, &tXPost, &tYPost, -1);
            if (tPage2 == -1)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (mTRADEUI.mActive && (mTRADEUI.mOwnTradeState || mTRADEUI.mOtherTradeState) || mPSHOPUI.mActive || mNPCUI.mActive)
            {
            LABEL_1043:
                mBASICUI.Insert1(mMESSAGE.Return(598), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
            }
            else
            {
                if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
                {
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
                mPLAY.PROCESS_DATA_219_SEND(0, mIndex, mItemX, tPage2, tIndex2, tXPost, tYPost);
                mIsClick = 1;
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                {
                    mCInnerAuto.bTakeItem = 1;
                }
            }
        }
        else if (mTRADEUI.mActive && (mTRADEUI.mOwnTradeState || mTRADEUI.mOtherTradeState))
        {
            mBASICUI.Insert1(mMESSAGE.Return(735), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
        }
        else
        {
            if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            mPLAY.PROCESS_DATA_220_SEND(0, mIndex, mItemX, 0, tIndex2, 0, 0);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
            {
                mCInnerAuto.bTakeItem = 1;
            }
        }
        return 1;

    case 7:
        Item = mITEM.Search(mItemIdx);
        if (!Item)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mINVENUI.PutInventory1(uX, uY, mItemIdx, mItemX, &tPage2, &tIndex2, &tXPost, &tYPost, -1);
        if (tPage2 == -1)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        switch (Item->iIndex)
        {
        case 1098:
            if (mMYINFO.mAvatarInfo.aLevel1 < 113)
            {
                mBASICUI.Insert1(mMESSAGE.Return(606), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            break;
        case 1097:
            if (mMYINFO.mAvatarInfo.aLevel1 < 113)
            {
                mBASICUI.Insert1(mMESSAGE.Return(606), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            break;
        case 1047:
            if (mMYINFO.mAvatarInfo.aLevel1 < 113)
            {
                mBASICUI.Insert1(mMESSAGE.Return(606), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            break;
        case 1434:
            if (mMYINFO.mAvatarInfo.aRebirth < 1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(1416), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            break;
        case 537:
            if (mMYINFO.mAvatarInfo.aRebirth < 7)
            {
                mBASICUI.Insert1(mMESSAGE.Return(1909), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            break;
        case 667:
            if (mMYINFO.mAvatarInfo.aLevel1 < 145)
            {
                mBASICUI.Insert1(mMESSAGE.Return(2307), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            break;
        case 979:
            if (mMAIN.mWorldIndex == 50)
            {
                mBASICUI.Insert1(mMESSAGE.Return(2385), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            break;
        default:
            if ((mPLAY.mWorldInfo.mTribeVoteState[0] || mPLAY.mWorldInfo.mTribeVoteState[1] || mPLAY.mWorldInfo.mTribeVoteState[2] || mPLAY.mWorldInfo.mTribeVoteState[3]) && (Item->iIndex == 1447 || Item->iIndex == 1448 || Item->iIndex == 1449 || Item->iIndex == 1499))
            {
                for (i = 0; i < 10 && strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][i], mMYINFO.mAvatarInfo.aName); ++i)
                {
                    ;
                }
                if (i < 10)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(1506), mFONTCOLOR.mData[44]);
                    CHOICEUI::NetworkNO();
                    CHOICEUI::Off();
                    return 1;
                }
            }
            break;
        }
        if (Item->iSort == 2)
        {
            if (mMYINFO.mPresentZoneNumber == 291)
                tCost = mItemX * (Item->iBuyCost * 0.90f);
            else
                tCost = mItemX * Item->iBuyCost;
        }
        else if (mMYINFO.mPresentZoneNumber == 291)
        {
            tCost = (Item->iBuyCost * 0.90f);
        }
        else
        {
            tCost = Item->iBuyCost;
        }
        if (mMYINFO.mAvatarInfo.aMoney < tCost)
        {
            mBASICUI.Insert1(mMESSAGE.Return(214), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (mMYINFO.mAvatarInfo.aKillOtherTribe < Item->iBuyCPCost)
        {
            mBASICUI.Insert1(mMESSAGE.Return(1414), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mPLAY.PROCESS_DATA_215_SEND(mIndex, mItemIdx, mItemX, tPage2, tIndex2, tXPost, tYPost);
        mIsClick = 1;
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;

    case 8:
        mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][0] = mItemIdx;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][1] = mItemX;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][2] = mItemY;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][3] += mItemQuantity;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][4] = mItemImprove;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][5] = mItemSerial;
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][0] = mItemSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][1] = mItemSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][2] = mItemSocket[2];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][3] = mItemSocket[3];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][4] = mItemSocket[4];
        CHOICEUI::Off();
        return 1;

    case 9:
        mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][0] = mItemIdx;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][1] = mItemX;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][2] = mItemY;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][3] += mItemQuantity;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][4] = mItemImprove;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][5] = mItemSerial;
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][0] = mItemSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][1] = mItemSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][2] = mItemSocket[2];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][3] = mItemSocket[3];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][4] = mItemSocket[4];
        CHOICEUI::Off();
        return 1;

    case 10:
        if (mINVENUI.PutChangeMoneyToBigMoney(uX, uY, mItemIdx))
        {
            if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            mPLAY.PROCESS_DATA_246_SEND(0, 0, mItemIdx, 0, 0, 0, 0);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
            {
                mCInnerAuto.bTakeItem = 1;
            }
        }
        else
        {
            if (!mINVENUI.PutTradeMoney(uX, uY, mItemIdx))
            {
                if (mNPCUI.PutStoreMoney(uX, uY, mItemIdx))
                {
                    if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                    {
                        mPLAY.PROCESS_DATA_226_SEND(0, 0, mItemIdx, 0, 0, 0, 0);
                        mIsClick = 1;
                        mMYINFO.mNetworkLock = 1;
                        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                        return 1;
                    }
                }
                else if (mNPCUI.PutSaveMoney(uX, uY, mItemIdx) && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
                {
                    mPLAY.PROCESS_DATA_231_SEND(0, 0, mItemIdx, 0, 0, 0, 0);
                    mIsClick = 1;
                    mMYINFO.mNetworkLock = 1;
                    mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                    return 1;
                }
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (mTRADEUI.mActive && (mTRADEUI.mOwnTradeState || mTRADEUI.mOtherTradeState))
            {
                mBASICUI.Insert1(mMESSAGE.Return(736), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            mPLAY.PROCESS_DATA_221_SEND(0, 0, mItemIdx, 0, 0, 0, 0);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
            {
                mCInnerAuto.bTakeItem = 1;
            }
        }
        return 1;

    case 11:
        if (!mINVENUI.PutInventoryMoney(uX, uY, mItemIdx))
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (mTRADEUI.mActive && (mTRADEUI.mOwnTradeState || mTRADEUI.mOtherTradeState))
        {
            mBASICUI.Insert1(mMESSAGE.Return(737), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mPLAY.PROCESS_DATA_222_SEND(0, 0, mItemIdx, 0, 0, 0, 0);
        mIsClick = 1;
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
        {
            mCInnerAuto.bTakeItem = 1;
        }
        return 1;

    case 12:
        Item = mITEM.Search(mItemIdx);
        if (!Item)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.PutStoreItem1(uX, uY, mItemIdx, mItemX, mIndex);
        if (tIndex2 != -1)
        {
            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
            {
                mPLAY.PROCESS_DATA_225_SEND(mPage, mIndex, mItemX, mNPCUI.mStorePage, tIndex2, 0, 0);
                mIsClick = 1;
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                return 1;
            }
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mINVENUI.PutInventory1(uX, uY, mItemIdx, mItemX, &tPage2, &tIndex2, &tXPost, &tYPost, -1);
        if (tPage2 != -1 && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mPLAY.PROCESS_DATA_224_SEND(mPage, mIndex, mItemX, tPage2, tIndex2, tXPost, tYPost);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return 1;
        }
        CHOICEUI::NetworkNO();
        CHOICEUI::Off();
        return 1;

    case 13:
        if (!mINVENUI.PutInventoryMoney(uX, uY, mItemIdx) || mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mPLAY.PROCESS_DATA_227_SEND(0, 0, mItemIdx, 0, 0, 0, 0);
        mIsClick = 1;
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;

    case 14:
        Item = mITEM.Search(mItemIdx);
        if (!Item)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mNPCUI.PutSaveItem1(uX, uY, mItemIdx, mItemX, mIndex);
        if (tIndex2 != -1)
        {
            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
            {
                mPLAY.PROCESS_DATA_230_SEND(0, mIndex, mItemX, 0, tIndex2, 0, 0);
                mIsClick = 1;
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                return 1;
            }
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mINVENUI.PutInventory1(uX, uY, mItemIdx, mItemX, &tPage2, &tIndex2, &tXPost, &tYPost, -1);
        if (tPage2 != -1 && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mPLAY.PROCESS_DATA_229_SEND(0, mIndex, mItemX, tPage2, tIndex2, tXPost, tYPost);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return 1;
        }
        CHOICEUI::NetworkNO();
        CHOICEUI::Off();
        return 1;

    case 15:
        if (!mINVENUI.PutInventoryMoney(uX, uY, mItemIdx) || mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mPLAY.PROCESS_DATA_232_SEND(0, 0, mItemIdx, 0, 0, 0, 0);
        mIsClick = 1;
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;

    case 16:
        mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][0] = mItemIdx;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][1] = mItemX;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][2] = mItemY;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][3] += mItemQuantity;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][4] = mItemImprove;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][5] = mItemSerial;
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][0] = mItemSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][1] = mItemSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][2] = mItemSocket[2];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][3] = mItemSocket[3];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][4] = mItemSocket[4];
        CHOICEUI::Off();
        return 1;

    case 17:
        mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
    LABEL_1204:
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][0] = mItemIdx;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][1] = mItemX;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][2] = mItemY;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][3] += mItemQuantity;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][4] = mItemImprove;
        mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][5] = mItemSerial;
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][0] = mItemSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][1] = mItemSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][2] = mItemSocket[2];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][3] = mItemSocket[3];
        mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][4] = mItemSocket[4];
        CHOICEUI::Off();
        return 1;

    case 18:
        mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
        if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][0] = mItemIdx;
        mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][1] = mItemX;
        mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][2] = mItemY;
        mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][3] = mItemQuantity;
        mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][4] = mItemImprove;
        mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][5] = mItemSerial;
        mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][0] = mItemSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][1] = mItemSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][2] = mItemSocket[2];
        mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][3] = mItemSocket[3];
        mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][4] = mItemSocket[4];
        CHOICEUI::Off();
        return 1;

    case 19:
        mINVENUI.PutInventory1(uX, uY, mItemIdx, mItemQuantity, &tPage2, &tIndex2, &tXPost, &tYPost, -1);
        if (tPage2 == -1)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (mMYINFO.mAvatarInfo.aMoney < mPSHOPUI.mPShopInfo.mItemInfo[mPage][mIndex][4])
        {
            mBASICUI.Insert1(mMESSAGE.Return(214), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mTRANSFER.T_BUY_PSHOP_SEND(mPSHOPUI.mPShopInfo.mUniqueNumber, mPSHOPUI.mAvatarName, mPage, mIndex, mItemQuantity, tPage2, tIndex2, tXPost, tYPost);
        mIsClick = 1;
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;

    case 20:
        tIndex2 = mSKILLUI.GetSkillIndex2(uX, uY);
        if (tIndex2 == -1 || mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (!mSKILLUI.GetContinueSkillIndex(mItemIdx, mItemX))
        {
        LABEL_972:
            mBASICUI.Insert1(mMESSAGE.Return(1652), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        i = 0;
        while (1)
        {
            if (i >= 8)
            {
                mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[tIndex2][0] = mItemIdx;
                mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[tIndex2][1] = mItemX;
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[i][0] != mItemIdx)
            {
                ++i;
                continue;
            }
            break;
        }
    LABEL_976:
        mBASICUI.Insert1(mMESSAGE.Return(1655), mFONTCOLOR.mData[44]);
        CHOICEUI::NetworkNO();
        CHOICEUI::Off();
        return 1;

    case 21:
        Item = mITEM.Search(mItemIdx);
        if (!Item)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mINVENUI.PutInventory1(uX, uY, mItemIdx, mItemX, &tPage2, &tIndex2, &tXPost, &tYPost, -1);
        if (tPage2 == -1)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (Item->iSort == 2)
            tCost = mItemX * Item->iBuyCost;
        else
            tCost = Item->iBuyCost;
        if (mMYINFO.mAvatarInfo.aMoney < tCost)
        {
            mBASICUI.Insert1(mMESSAGE.Return(214), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (mMYINFO.mAvatarInfo.aKillOtherTribe < Item->iBuyCPCost)
        {
        LABEL_1103:
            mBASICUI.Insert1(mMESSAGE.Return(1414), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mPLAY.PROCESS_DATA_239_SEND(mIndex, mItemIdx, mItemX, tPage2, tIndex2, tXPost, tYPost);
        mIsClick = 1;
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;

    case 22:
        tIndex2 = mCInnerAuto.IsOnSkillBox(uX, uY);
        if (tIndex2 < 0)
        {
            CHOICEUI::Off();
            return 1;
        }
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock || tIndex2 > 1 && mMYINFO.mAvatarInfo.aAutoBuffScroll <= 0)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mCInnerAuto.SetBuffSkill(tIndex2, mItemIdx, mItemX);
        CHOICEUI::Off();
        return 1;

    case 23:
        if (mINVENUI.PutChangeBigMoneyToMoney(uX, uY, mItemIdx))
        {
            if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            {
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            mPLAY.PROCESS_DATA_247_SEND(0, 0, mItemIdx, 0, 0, 0, 0);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
            {
                mCInnerAuto.bTakeItem = 1;
            }
            return 1;
        }
        if (mINVENUI.PutBigTradeMoney(uX, uY, mItemIdx))
        {
            if (mTRADEUI.mActive && (mTRADEUI.mOwnTradeState || mTRADEUI.mOtherTradeState))
            {
            LABEL_1135:
                mBASICUI.Insert1(mMESSAGE.Return(736), mFONTCOLOR.mData[44]);
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
            {
                mPLAY.PROCESS_DATA_240_SEND(0, 0, mItemIdx, 0, 0, 0, 0);
                mIsClick = 1;
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                {
                    mCInnerAuto.bTakeItem = 1;
                }
                return 1;
            }
        }
        else if (mNPCUI.PutBigStoreMoney(uX, uY, mItemIdx))
        {
            if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
            {
                mPLAY.PROCESS_DATA_241_SEND(0, 0, mItemIdx, 0, 0, 0, 0);
                mIsClick = 1;
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                return 1;
            }
        }
        else if (mNPCUI.PutBigSaveMoney(uX, uY, mItemIdx) && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            mPLAY.PROCESS_DATA_242_SEND(0, 0, mItemIdx, 0, 0, 0, 0);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return 1;
        }
        CHOICEUI::NetworkNO();
        CHOICEUI::Off();
        return 1;

    case 24:
        if (!mINVENUI.PutBigInventoryMoney(uX, uY, mItemIdx))
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (mTRADEUI.mActive && (mTRADEUI.mOwnTradeState || mTRADEUI.mOtherTradeState))
        {
        LABEL_1157:
            mBASICUI.Insert1(mMESSAGE.Return(737), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mPLAY.PROCESS_DATA_243_SEND(0, 0, mItemIdx, 0, 0, 0, 0);
        mIsClick = 1;
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
        {
            mCInnerAuto.bTakeItem = 1;
        }
        return 1;

    case 25:
        if (!mINVENUI.PutBigInventoryMoney(uX, uY, mItemIdx) || mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mPLAY.PROCESS_DATA_244_SEND(0, 0, mItemIdx, 0, 0, 0, 0);
        mIsClick = 1;
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;

    case 26:
        if (!mINVENUI.PutBigInventoryMoney(uX, uY, mItemIdx) || mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mPLAY.PROCESS_DATA_245_SEND(0, 0, mItemIdx, 0, 0, 0, 0);
        mIsClick = 1;
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
        return 1;

    case 27:
        if (mItemX > -1)
        {
            mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
            {
                mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][0] = mItemIdx;
                mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][1] = mItemX;
                mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][2] = mItemY;
                mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][3] = mItemQuantity;
                mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][4] = mItemImprove;
                mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][5] = mItemSerial;
                mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][0] = mItemSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][1] = mItemSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][2] = mItemSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][3] = mItemSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][4] = mItemSocket[4];
                CHOICEUI::Off();
                return 1;
            }
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mINVENUI.PutInventory1(uX, uY, mItemIdx, mItemQuantity, &tPage2, &tIndex2, &tXPost, &tYPost, -1);
        if (tPage2 != -1 && !mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            tValue[0] = mItemQuantity;
            tValue[1] = mItemImprove;
            tValue[2] = mItemSerial;
            tValue[3] = mPShopPrice;
            tValue[4] = mItemSocket[0];
            tValue[5] = mItemSocket[1];
            tValue[6] = mItemSocket[2];
            tValue[7] = mItemSocket[3];
            tValue[8] = mItemSocket[4];
            mTRANSFER.T_SET_DEPUTY_PSHOP_SEND(1, mPSHOPUI.mAvatarName, mPage, mIndex, mItemIdx, tPage2, tIndex2, tXPost, tYPost, &tValue[0]);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return 1;
        }
        CHOICEUI::NetworkNO();
        CHOICEUI::Off();
        return 1;

    case 28:
        if (mItemX > -1)
        {
            mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
            {
            LABEL_1311:
                mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][0] = mItemIdx;
                mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][1] = mItemX;
                mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][2] = mItemY;
                mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][3] = mItemQuantity;
                mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][4] = mItemImprove;
                mMYINFO.mAvatarInfo.aInventory[mShiftX][mShiftY][5] = mItemSerial;
                mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][0] = mItemSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][1] = mItemSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][2] = mItemSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][3] = mItemSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[mShiftX][mShiftY][4] = mItemSocket[4];
                CHOICEUI::Off();
                return 1;
            }
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        mINVENUI.PutInventory1(uX, uY, mItemIdx, mItemQuantity, &tPage2, &tIndex2, &tXPost, &tYPost, -1);
        if (tPage2 == -1)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (mMYINFO.mAvatarInfo.aMoney < mPSHOPUI.mPShopInfo.mItemInfo[mPage][mIndex][4])
        {
        LABEL_1316:
            mBASICUI.Insert1(mMESSAGE.Return(214), mFONTCOLOR.mData[44]);
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
        {
            tValue[0] = mItemQuantity;
            tValue[1] = mItemImprove;
            tValue[2] = mItemSerial;
            tValue[3] = mPShopPrice;
            tValue[4] = mItemSocket[0];
            tValue[5] = mItemSocket[1];
            tValue[6] = mItemSocket[2];
            tValue[7] = mItemSocket[3];
            tValue[8] = mItemSocket[4];
            mTRANSFER.T_SET_DEPUTY_PSHOP_SEND(2, mPSHOPUI.mAvatarName, mPage, mIndex, mItemIdx, tPage2, tIndex2, tXPost, tYPost, &tValue[0]);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            return 1;
        }
        CHOICEUI::NetworkNO();
        CHOICEUI::Off();
        return 1;

    case 29:
        Item = mITEM.Search(mItemIdx);
        if (!Item)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        tIndex2 = mINVENUI.SetPetInventory1(uX, uY, mItemIdx, mIndex);
        if (tIndex2 == -1)
        {
            mINVENUI.PutInventory1(uX, uY, mItemIdx, 0, &tPage2, &tIndex2, &tXPost, &tYPost, -1);
            if (tPage2 == -1 || mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
            {
            LABEL_1335:
                CHOICEUI::NetworkNO();
                CHOICEUI::Off();
                return 1;
            }
            else
            {
                mPLAY.PROCESS_DATA_255_SEND(0, mIndex, tPage2, tIndex2, tXPost, tYPost);
                mIsClick = 1;
                mMYINFO.mNetworkLock = 1;
                mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
                if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                {
                    mCInnerAuto.bTakeItem = 1;
                }
                return 1;
            }
        }
        else if (mMYINFO.mAvatarInfo.aPetInventoryData[tIndex2] > 0 || mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
        {
        LABEL_1328:
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
            return 1;
        }
        else
        {
            mPLAY.PROCESS_DATA_256_SEND(0, mIndex, 0, tIndex2, 0, 0);
            mIsClick = 1;
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
            {
                mCInnerAuto.bTakeItem = 1;
            }
            return 1;
        }
        return 1;


    default:
        return 1;



    }
}

BOOL CHOICEUI::RBUTTONDOWN(int uX, int uY)
{
    return mActive != 0;
}

BOOL CHOICEUI::RBUTTONUP(int uX, int uY)
{
    return mActive != 0;
}

BOOL CHOICEUI::KEYBOARD()
{
    int i;
    int j;
    char tNumber;

    if (!mActive)
    {
        return 0;
    }
    if (!mIsShift)
    {
        return 1;
    }
    if (mEDITBOX.mDataIndex)
    {
        return 1;
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
    switch (mGXD.mKeyboardBufferedData[i].dwOfs)
    {
    case 2:
    case 79:
        tNumber = '1';
        goto GENERAL;
    case 3:
    case 80:
        tNumber = '2';
        goto GENERAL;
    case 4:
    case 81:
        tNumber = '3';
        goto GENERAL;
    case 5:
    case 75:
        tNumber = '4';
        goto GENERAL;
    case 6:
    case 76:
        tNumber = '5';
        goto GENERAL;
    case 7:
    case 77:
        tNumber = '6';
        goto GENERAL;
    case 8:
    case 71:
        tNumber = '7';
        goto GENERAL;
    case 9:
    case 72:
        tNumber = '8';
        goto GENERAL;
    case 10:
    case 73:
        tNumber = '9';
        goto GENERAL;
    case 11:
    case 82:
        if (mPriceIdx)
        {
            tNumber = '0';
        GENERAL:
            if (mPriceIdx == 9)
            {
                mPrice[0] = '1';
                for (j = 1; j < 10; ++j)
                {
                    mPrice[j] = '0';
                }
                mPrice[++mPriceIdx] = 0;
            }
            if (mPriceIdx != 10)
            {
                mPrice[mPriceIdx++] = tNumber;
                mPrice[mPriceIdx] = 0;
            }
            return 1;
        }
        return 1;

    case 14:
        if (mPriceIdx)
        {
            mPrice[--mPriceIdx] = 0;
        }
        return 1;

    default:
        return 1;
    }
}



void CHOICEUI::OffForDeath()
{
    if (mActive)
    {
        if (!mIsClick)
        {
            CHOICEUI::NetworkNO();
            CHOICEUI::Off();
        }
    }
}
void CHOICEUI::NetworkOK()
{
    int v1;

    if (mActive && !mIsShift)
    {
        switch (mSort)
        {
        case 1:
            mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][3] -= mItemQuantity;
            if (mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][3] < 1)
            {
                mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][5] = 0;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][4] = 0;
            }
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 0;
            break;
        case 2:
            mMYINFO.mAvatarInfo.aEquip[mIndex][0] = 0;
            mMYINFO.mAvatarInfo.aEquip[mIndex][1] = 0;
            mMYINFO.mAvatarInfo.aEquip[mIndex][2] = 0;
            mMYINFO.mAvatarInfo.aEquip[mIndex][3] = 0;
            mMYINFO.mAvatarInfo.aEquipSocket[mIndex][0] = 0;
            mMYINFO.mAvatarInfo.aEquipSocket[mIndex][1] = 0;
            mMYINFO.mAvatarInfo.aEquipSocket[mIndex][2] = 0;
            mMYINFO.mAvatarInfo.aEquipSocket[mIndex][3] = 0;
            mMYINFO.mAvatarInfo.aEquipSocket[mIndex][4] = 0;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 0;
            break;
        case 5:
            v1 = mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][2];
            switch (v1)
            {
            case 1:
                mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][0] = 0;
                mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][1] = 0;
                mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][2] = 0;
                break;
            case 2:
                mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][0] = 0;
                mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][1] = 0;
                mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][2] = 0;
                break;
            case 3:
                mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][1] -= mItemX;
                if (mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][1] < 1)
                {
                    mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][0] = 0;
                    mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][1] = 0;
                    mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][2] = 0;
                }
                break;
            }
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 0;
            break;
        case 6:
            mMYINFO.mAvatarInfo.aTrade[mIndex][1] -= mItemX;
            if (mMYINFO.mAvatarInfo.aTrade[mIndex][1] < 1)
            {
                mMYINFO.mAvatarInfo.aTrade[mIndex][0] = 0;
                mMYINFO.mAvatarInfo.aTrade[mIndex][1] = 0;
                mMYINFO.mAvatarInfo.aTrade[mIndex][2] = 0;
                mMYINFO.mAvatarInfo.aTrade[mIndex][3] = 0;
                mMYINFO.mAvatarInfo.aTradeSocket[mIndex][0] = 0;
                mMYINFO.mAvatarInfo.aTradeSocket[mIndex][1] = 0;
                mMYINFO.mAvatarInfo.aTradeSocket[mIndex][2] = 0;
                mMYINFO.mAvatarInfo.aTradeSocket[mIndex][3] = 0;
                mMYINFO.mAvatarInfo.aTradeSocket[mIndex][4] = 0;
            }
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 0;
            break;
        case 8:
            mNPCUI.mPage[0] = -1;
            break;
        case 9:
            mNPCUI.mPage[1] = -1;
            break;
        case 10:
            mMYINFO.mAvatarInfo.aMoney -= mItemIdx;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 0;
            break;
        case 11:
            mMYINFO.mAvatarInfo.aTradeMoney -= mItemIdx;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 0;
            break;
        case 12:
            mMYINFO.mAvatarInfo.aStoreItem[mPage][mIndex][1] -= mItemX;
            if (mMYINFO.mAvatarInfo.aStoreItem[mPage][mIndex][1] < 1)
            {
                mMYINFO.mAvatarInfo.aStoreItem[mPage][mIndex][0] = 0;
                mMYINFO.mAvatarInfo.aStoreItem[mPage][mIndex][1] = 0;
                mMYINFO.mAvatarInfo.aStoreItem[mPage][mIndex][2] = 0;
                mMYINFO.mAvatarInfo.aStoreItem[mPage][mIndex][3] = 0;
                mMYINFO.mAvatarInfo.aStoreSocket[mPage][mIndex][0] = 0;
                mMYINFO.mAvatarInfo.aStoreSocket[mPage][mIndex][1] = 0;
                mMYINFO.mAvatarInfo.aStoreSocket[mPage][mIndex][2] = 0;
                mMYINFO.mAvatarInfo.aStoreSocket[mPage][mIndex][3] = 0;
                mMYINFO.mAvatarInfo.aStoreSocket[mPage][mIndex][4] = 0;
            }
            break;
        case 13:
            mMYINFO.mAvatarInfo.aStoreMoney -= mItemIdx;
            break;
        case 14:
            mMYINFO.mAvatarInfo.uSaveItem[mIndex][1] -= mItemX;
            if (mMYINFO.mAvatarInfo.uSaveItem[mIndex][1] < 1)
            {
                mMYINFO.mAvatarInfo.uSaveItem[mIndex][0] = 0;
                mMYINFO.mAvatarInfo.uSaveItem[mIndex][1] = 0;
                mMYINFO.mAvatarInfo.uSaveItem[mIndex][2] = 0;
                mMYINFO.mAvatarInfo.uSaveItem[mIndex][3] = 0;
                mMYINFO.mAvatarInfo.aSaveSocket[mIndex][0] = 0;
                mMYINFO.mAvatarInfo.aSaveSocket[mIndex][1] = 0;
                mMYINFO.mAvatarInfo.aSaveSocket[mIndex][2] = 0;
                mMYINFO.mAvatarInfo.aSaveSocket[mIndex][3] = 0;
                mMYINFO.mAvatarInfo.aSaveSocket[mIndex][4] = 0;
            }
            break;
        case 15:
            mMYINFO.mAvatarInfo.uSaveMoney -= mItemIdx;
            break;
        case 16:
            mNPCUI.mPage[2] = -1;
            break;
        case 17:
            mNPCUI.mPage[3] = -1;
            break;
        case 18:
        case 19:
            mPSHOPUI.mPShopInfo.mItemInfo[mPage][mIndex][0] = 0;
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][0] = 0;
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][1] = 0;
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][2] = 0;
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][3] = 0;
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][4] = 0;
            break;
        case 23:
            mMYINFO.mAvatarInfo.aMoney2 -= mItemIdx;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 0;
            break;
        case 24:
            mMYINFO.mAvatarInfo.aTradeMoney2 -= mItemIdx;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 0;
            break;
        case 25:
            mMYINFO.mAvatarInfo.aStoreMoney2 -= mItemIdx;
            break;
        case 26:
            mMYINFO.mAvatarInfo.uSaveMoney2 -= mItemIdx;
            break;
        case 27:
        case 28:
            mPSHOPUI.mPShopInfo.mItemInfo[mPage][mIndex][0] = 0;
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][0] = 0;
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][1] = 0;
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][2] = 0;
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][3] = 0;
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][4] = 0;
            break;
        case 29:
            mMYINFO.mAvatarInfo.aPetInventoryData[mIndex] = 0;
            break;
        case 30:
            mNPCUI.mPage[4] = -1;
            break;
        case 31:
            mNPCUI.mPage[5] = -1;
            break;
        default:
            return;
        }
    }
}
void CHOICEUI::NetworkNO()
{
    if (mActive && !mIsShift)
    {
        switch (mSort)
        {
        case 1:
            mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][0] = mItemIdx;
            mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][1] = mItemX;
            mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][2] = mItemY;
            mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][3] += mItemQuantity;
            mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][4] = mItemImprove;
            mMYINFO.mAvatarInfo.aInventory[mPage][mIndex][5] = mItemSerial;
            mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][0] = mItemSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][1] = mItemSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][2] = mItemSocket[2];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][3] = mItemSocket[3];
            mMYINFO.mAvatarInfo.aInventorySocket[mPage][mIndex][4] = mItemSocket[4];
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 1;
            break;
        case 2:
            mMYINFO.mAvatarInfo.aEquip[mIndex][0] = mItemIdx;
            mMYINFO.mAvatarInfo.aEquip[mIndex][1] = mItemX;
            mMYINFO.mAvatarInfo.aEquip[mIndex][2] = mItemY;
            mMYINFO.mAvatarInfo.aEquip[mIndex][3] = mItemQuantity;
            mMYINFO.mAvatarInfo.aEquipSocket[mIndex][0] = mItemSocket[0];
            mMYINFO.mAvatarInfo.aEquipSocket[mIndex][1] = mItemSocket[1];
            mMYINFO.mAvatarInfo.aEquipSocket[mIndex][2] = mItemSocket[2];
            mMYINFO.mAvatarInfo.aEquipSocket[mIndex][3] = mItemSocket[3];
            mMYINFO.mAvatarInfo.aEquipSocket[mIndex][4] = mItemSocket[4];
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 1;
            break;
        case 5:
            mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][0] = mItemIdx;
            mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][1] += mItemX;
            mMYINFO.mAvatarInfo.aHotKey[mPage][mIndex][2] = mItemY;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 1;
            break;
        case 6:
            mMYINFO.mAvatarInfo.aTrade[mIndex][0] = mItemIdx;
            mMYINFO.mAvatarInfo.aTrade[mIndex][1] += mItemX;
            mMYINFO.mAvatarInfo.aTrade[mIndex][2] = mItemY;
            mMYINFO.mAvatarInfo.aTrade[mIndex][3] = mItemQuantity;
            mMYINFO.mAvatarInfo.aTradeSocket[mIndex][0] = mItemSocket[0];
            mMYINFO.mAvatarInfo.aTradeSocket[mIndex][1] = mItemSocket[1];
            mMYINFO.mAvatarInfo.aTradeSocket[mIndex][2] = mItemSocket[2];
            mMYINFO.mAvatarInfo.aTradeSocket[mIndex][3] = mItemSocket[3];
            mMYINFO.mAvatarInfo.aTradeSocket[mIndex][4] = mItemSocket[4];
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 1;
            break;
        case 8:
            mNPCUI.mPage[0] = mPage;
            break;
        case 9:
            mNPCUI.mPage[1] = mPage;
            break;
        case 10:
            mMYINFO.mAvatarInfo.aMoney += mItemIdx;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 1;
            break;
        case 11:
            mMYINFO.mAvatarInfo.aTradeMoney += mItemIdx;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 1;
            break;
        case 12:
            mMYINFO.mAvatarInfo.aStoreItem[mPage][mIndex][0] = mItemIdx;
            mMYINFO.mAvatarInfo.aStoreItem[mPage][mIndex][1] += mItemX;
            mMYINFO.mAvatarInfo.aStoreItem[mPage][mIndex][2] = mItemY;
            mMYINFO.mAvatarInfo.aStoreItem[mPage][mIndex][3] = mItemQuantity;
            mMYINFO.mAvatarInfo.aStoreSocket[mPage][mIndex][0] = mItemSocket[0];
            mMYINFO.mAvatarInfo.aStoreSocket[mPage][mIndex][1] = mItemSocket[1];
            mMYINFO.mAvatarInfo.aStoreSocket[mPage][mIndex][2] = mItemSocket[2];
            mMYINFO.mAvatarInfo.aStoreSocket[mPage][mIndex][3] = mItemSocket[3];
            mMYINFO.mAvatarInfo.aStoreSocket[mPage][mIndex][4] = mItemSocket[4];
            break;
        case 13:
            mMYINFO.mAvatarInfo.aStoreMoney += mItemIdx;
            break;
        case 14:
            mMYINFO.mAvatarInfo.uSaveItem[mIndex][0] = mItemIdx;
            mMYINFO.mAvatarInfo.uSaveItem[mIndex][1] += mItemX;
            mMYINFO.mAvatarInfo.uSaveItem[mIndex][2] = mItemY;
            mMYINFO.mAvatarInfo.uSaveItem[mIndex][3] = mItemQuantity;
            mMYINFO.mAvatarInfo.aSaveSocket[mIndex][0] = mItemSocket[0];
            mMYINFO.mAvatarInfo.aSaveSocket[mIndex][1] = mItemSocket[1];
            mMYINFO.mAvatarInfo.aSaveSocket[mIndex][2] = mItemSocket[2];
            mMYINFO.mAvatarInfo.aSaveSocket[mIndex][3] = mItemSocket[3];
            mMYINFO.mAvatarInfo.aSaveSocket[mIndex][4] = mItemSocket[4];
            break;
        case 15:
            mMYINFO.mAvatarInfo.uSaveMoney += mItemIdx;
            break;
        case 16:
            mNPCUI.mPage[2] = mPage;
            break;
        case 17:
            mNPCUI.mPage[3] = mPage;
            break;
        case 18:
        case 19:
            mPSHOPUI.mPShopInfo.mItemInfo[mPage][mIndex][0] = mItemIdx;
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][0] = mItemSocket[0];
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][1] = mItemSocket[1];
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][2] = mItemSocket[2];
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][3] = mItemSocket[3];
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][4] = mItemSocket[4];
            break;
        case 23:
            mMYINFO.mAvatarInfo.aMoney2 += mItemIdx;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 1;
            break;
        case 24:
            mMYINFO.mAvatarInfo.aTradeMoney2 += mItemIdx;
            if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
                mCInnerAuto.bTakeItem = 1;
            break;
        case 25:
            mMYINFO.mAvatarInfo.aStoreMoney2 += mItemIdx;
            break;
        case 26:
            mMYINFO.mAvatarInfo.uSaveMoney2 += mItemIdx;
            break;
        case 27:
        case 28:
            mPSHOPUI.mPShopInfo.mItemInfo[mPage][mIndex][0] = mItemIdx;
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][0] = mItemSocket[0];
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][1] = mItemSocket[1];
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][2] = mItemSocket[2];
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][3] = mItemSocket[3];
            mPSHOPUI.mPShopInfo.mItemSocket[mPage][mIndex][4] = mItemSocket[4];
            break;
        case 29:
            mMYINFO.mAvatarInfo.aPetInventoryData[mIndex] = mItemIdx;
            break;
        case 30:
            mNPCUI.mPage[4] = mPage;
            break;
        case 31:
            mNPCUI.mPage[5] = mPage;
            break;
        default:
            return;
        }
    }
}
void CHOICEUI::InitForPick()
{
    if (mActive)
    {
        mIsClick = 0;
        CHOICEUI::Off();
    }
}
void CHOICEUI::InitForDown()
{
    if (mActive)
    {
        mIsClick = 0;
        CHOICEUI::NetworkNO();
        CHOICEUI::Off();
    }
}
void CHOICEUI::Draw(int uX, int uY)
{
    int sX, sY, tstrlen, i, j, k, l, v64;
    char* tstr;
    char String[1000];
    int tValue;
    int tDisplaySort;
    ITEM_INFO* v66;
    int i2d, isort;
    int tDataIndex;
    SKILL_INFO* v84;

    if (mActive)
    {
        mPOINTER.Set(0);
        if (mIsShift)
        {
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[305], mShiftX, mShiftY);
            if (mPriceIdx > 0)
            {
                tValue = atoi(mPrice);
                mUTIL.ChangeMoneyToString(tValue, String, &tDisplaySort);
                sY = mShiftY + 10;
                sX = mShiftX + 86;
                tstrlen = mUTIL.GetStringLength(String);
                mUTIL.DrawFont2D(String, sX - tstrlen, sY, tDisplaySort);
            }
            GIMAGE2D::Display(&mGDATA.mUI_MAIN[43], mShiftX + 87, mShiftY + 10);
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[28], mShiftX + 15, mShiftY + 40, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[28], mShiftX + 15, mShiftY + 40);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[1832], mShiftX - 54, mShiftY - 38);
            }
            if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[306], mShiftX + 57, mShiftY + 40, uX, uY))
            {
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[306], mShiftX + 57, mShiftY + 40);
            }
        }
        else
        {
            if (mINVENUI.mActive)
            {
                mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
                if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2402], mX + 30, mY + 173, uX, uY))
                {
                    if (munkbb)
                    {
                        if (!mShiftSort && mAPP->hPresentElapsedSeconds - mUpdateTime > 1.0)
                        {
                            munkbb = 0;
                            if (mINVENUI.mInvenPage == 1)
                            {
                                GSOUND::Play(&mGDATA.mSOUND_5[290], 0, 100);
                                mINVENUI.mInvenPage = 0;
                            }
                        }
                    }
                    else if (mINVENUI.mInvenPage == 1)
                    {
                        munkbb = 1;
                        mShiftSort = 0;
                        mUpdateTime = mAPP->hPresentElapsedSeconds;
                    }
                }
                else if (munkbb && !mShiftSort)
                {
                    munkbb = 0;
                }
                if (mMYINFO.mAvatarInfo.aExpandInventoryDate > 0)
                {
                    if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2403], mX + 80, mY + 173, uX, uY))
                    {
                        if (munkbb)
                        {
                            if (mShiftSort == 1 && mAPP->hPresentElapsedSeconds - mUpdateTime > 1.0)
                            {
                                munkbb = 0;
                                if (!mINVENUI.mInvenPage)
                                {
                                    GSOUND::Play(&mGDATA.mSOUND_5[290], 0, 100);
                                    mINVENUI.mInvenPage = 1;
                                }
                            }
                        }
                        else if (!mINVENUI.mInvenPage)
                        {
                            munkbb = 1;
                            mShiftSort = 1;
                            mUpdateTime = mAPP->hPresentElapsedSeconds;
                        }
                    }
                    else if (munkbb && mShiftSort == 1)
                    {
                        munkbb = 0;
                    }
                }
            }
            switch (mSort)
            {
            case 1:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    if ((v66->iSort == 1 || v66->iSort == 2) && mItemQuantity > 0)
                    {
                        sprintf(String, "%d", mItemQuantity);
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                    }
                }
                return;
            case 2:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                }
                return;
            case 3:
            case 20:
            case 22:
                v84 = mSKILL.Search(mItemIdx);
                if (v84)
                {
                    tDataIndex = v84->sDataNumber2D + 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_SKILLICON[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_SKILLICON[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[tDataIndex], uX - sX / 2, sY);
                }
                return;

            case 4:
                tDataIndex = mSKILLUI.ReturnEmoticonImageIndex(mItemIdx) + 2;
                sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_SKILLICON[tDataIndex]) / 2;
                sX = GIMAGE2D::GetXSize(&mGDATA.mUI_SKILLICON[tDataIndex]);
                GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[tDataIndex], uX - sX / 2, sY);
                return;

            case 5:
                switch (mItemY)
                {
                case 1:
                    v84 = mSKILL.Search(mItemIdx);
                    if (v84)
                    {
                        tDataIndex = v84->sDataNumber2D + 1;
                        sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_SKILLICON[tDataIndex]) / 2;
                        sX = GIMAGE2D::GetXSize(&mGDATA.mUI_SKILLICON[tDataIndex]);
                        GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[tDataIndex], uX - sX / 2, sY);
                    }
                    break;
                case 2:
                    tDataIndex = mSKILLUI.ReturnEmoticonImageIndex(mItemIdx) + 2;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_SKILLICON[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_SKILLICON[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[tDataIndex], uX - sX / 2, sY);
                    break;
                case 3:
                    v66 = mITEM.Search(mItemIdx);
                    if (v66)
                    {
                        tDataIndex = v66->iDataNumber2D - 1;
                        sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                        sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                        GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                        if ((v66->iSort == 1 || v66->iSort == 2) && mItemX > 0)
                        {
                            sprintf(String, "%d", mItemX);
                            tstrlen = mUTIL.GetStringLength(String);
                            mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                        }
                    }
                    break;
                }
                return;

            case 6:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    if ((v66->iSort == 1 || v66->iSort == 2) && mItemX > 0)
                    {
                        sprintf(String, "%d", mItemX);
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                    }
                }
                return;

            case 7:
            case 21:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    if ((v66->iSort == 1 || v66->iSort == 2) && mItemX > 0)
                    {
                        sprintf(String, "%d", mItemX);
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                    }
                }
                return;

            case 8:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    if ((v66->iSort == 1 || v66->iSort == 2) && mItemQuantity > 0)
                    {
                        sprintf(String, "%d", mItemQuantity);
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                    }
                }
                return;

            case 9:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    if ((v66->iSort == 1 || v66->iSort == 2) && mItemQuantity > 0)
                    {
                        sprintf(String, "%d", mItemQuantity);
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                    }
                }
                return;

            case 10:
                v66 = mITEM.Search(1);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    sprintf(String, "%d", mItemIdx);
                    tstrlen = mUTIL.GetStringLength(String);
                    mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                }
                return;

            case 11:
                v66 = mITEM.Search(1);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    sprintf(String, "%d", mItemIdx);
                    tstrlen = mUTIL.GetStringLength(String);
                    mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                }
                return;

            case 12:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    if ((v66->iSort == 1 || v66->iSort == 2) && mItemX > 0)
                    {
                        sprintf(String, "%d", mItemX);
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                    }
                }
                return;

            case 13:
                v66 = mITEM.Search(1);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    sprintf(String, "%d", mItemIdx);
                    tstrlen = mUTIL.GetStringLength(String);
                    mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                }
                return;

            case 14:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    if ((v66->iSort == 1 || v66->iSort == 2) && mItemX > 0)
                    {
                        sprintf(String, "%d", mItemX);
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                    }
                }
                return;

            case 15:
                v66 = mITEM.Search(1);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    sprintf(String, "%d", mItemIdx);
                    tstrlen = mUTIL.GetStringLength(String);
                    mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                }
                return;

            case 16:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    if ((v66->iSort == 1 || v66->iSort == 2) && mItemQuantity > 0)
                    {
                        sprintf(String, "%d", mItemQuantity);
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                    }
                }
                return;

            case 17:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    if ((v66->iSort == 1 || v66->iSort == 2) && mItemQuantity > 0)
                    {
                        sprintf(String, "%d", mItemQuantity);
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                    }
                }
                return;

            case 18:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    if ((v66->iSort == 1 || v66->iSort == 2) && mItemQuantity > 0)
                    {
                        sprintf(String, "%d", mItemQuantity);
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                    }
                }
                return;

            case 19:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    if ((v66->iSort == 1 || v66->iSort == 2) && mItemQuantity > 0)
                    {
                        sprintf(String, "%d", mItemQuantity);
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                    }
                }
                return;

            case 23:
            case 24:
            case 25:
            case 26:
                sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3473]) / 2;
                sX = GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3473]);
                GIMAGE2D::Display(&mGDATA.mUI_MAIN[3473], uX - sX / 2, sY);
                sprintf(String, "%d", mItemIdx);
                tstrlen = mUTIL.GetStringLength(String);
                mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                return;

            case 27:
            case 28:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    if ((v66->iSort == 1 || v66->iSort == 2) && mItemQuantity > 0)
                    {
                        sprintf(String, "%d", mItemQuantity);
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                    }
                }
                return;

            case 29:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                }
                return;

            case 30:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    if ((v66->iSort == 1 || v66->iSort == 2) && mItemQuantity > 0)
                    {
                        sprintf(String, "%d", mItemQuantity);
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                    }
                }
                return;

            case 31:
                v66 = mITEM.Search(mItemIdx);
                if (v66)
                {
                    tDataIndex = v66->iDataNumber2D - 1;
                    sY = uY - GIMAGE2D::GetYSize(&mGDATA.mUI_ITEM[tDataIndex]) / 2;
                    sX = GIMAGE2D::GetXSize(&mGDATA.mUI_ITEM[tDataIndex]);
                    GIMAGE2D::Display(&mGDATA.mUI_ITEM[tDataIndex], uX - sX / 2, sY);
                    if ((v66->iSort == 1 || v66->iSort == 2) && mItemQuantity > 0)
                    {
                        sprintf(String, "%d", mItemQuantity);
                        tstrlen = mUTIL.GetStringLength(String);
                        mUTIL.DrawFont2D(String, uX - tstrlen / 2, uY - 20, 1);
                    }
                }
                return;

            default:
                return;
            }
        }
    }
}
BOOL CHOICEUI::DrawForRollOver(int uX, int uY)
{
    return mActive != 0;
}
