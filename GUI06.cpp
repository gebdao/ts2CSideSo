#include "gxdheader.h"

PARTYUI mPARTYUI;

BOOL PARTYUI::Init()
{
	mActive = 0;
	return TRUE;
}

void PARTYUI::Draw(int uX, int uY)
{
	int sX;
	int sY;

	if (mActive)
	{
		sX = mMYINFO.mScreenXSize / 2;
		mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[397]) / 2;
		sY = mMYINFO.mScreenYSize / 2;
		mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[397]) / 2;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[397], mX, mY, uX, uY))
		{
			mPOINTER.Set(0);
		}
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[397], mX, mY);
		if (mIsClick[0])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[399], mX + 87, mY + 56);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[398], mX + 87, mY + 56, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[398], mX + 87, mY + 56);
		}
		if (mIsClick[1])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[401], mX + 87, mY + 110);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[400], mX + 87, mY + 110, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[400], mX + 87, mY + 110);
		}
		if (mIsClick[2])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[403], mX + 87, mY + 164);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[402], mX + 87, mY + 164, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[402], mX + 87, mY + 164);
		}
	}
}
int PARTYUI::DrawForRollOver(int uX, int uY)
{
	return 0;
}
BOOL PARTYUI::LBUTTONDOWN(int uX, int uY)
{
	int sX;
	int sY;

	if (!mActive)
	{
		return 0;
	}
	sX = mMYINFO.mScreenXSize / 2;
	mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[397]) / 2;
	sY = mMYINFO.mScreenYSize / 2;
	mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[397]) / 2;
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[398], mX + 87, mY + 56, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[0] = 1;
		return 1;
	}
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[400], mX + 87, mY + 110, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[1] = 1;
		return 1;
	}
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[402], mX + 87, mY + 164, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[2] = 1;
		return 1;
	}

	return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[397], mX, mY, uX, uY);
}
int PARTYUI::LBUTTONUP(int uX, int uY)
{
	int sX;
	int sY;

	if (!mActive)
	{
		return 0;
	}
	sX = mMYINFO.mScreenXSize / 2;
	mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[397]) / 2;
	sY = mMYINFO.mScreenYSize / 2;
	mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[397]) / 2;

	if (mIsClick[0])
	{
		mIsClick[0] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[398], mX + 87, mY + 56, uX, uY))
		{
			if (strcmp(mMYINFO.mAvatarInfo.aPartyName, "") == 0)
			{
				mBASICUI.Insert1(mMESSAGE.Return(355), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (!strcmp(mMYINFO.mAvatarInfo.aPartyName, mMYINFO.mAvatarInfo.aName))
			{
				mBASICUI.Insert1(mMESSAGE.Return(362), mFONTCOLOR.mData[44]);
			}
			else
			{
				mCBOXUI.Set(11, mMESSAGE.Return(364), "");
				PARTYUI::Off();
			}
		}
		return 1;
	}
	if (mIsClick[1])
	{
		mIsClick[1] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[400], mX + 87, mY + 100, uX, uY))
		{
			if (!strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
			{
				mBASICUI.Insert1(mMESSAGE.Return(355), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (!strcmp(mMYINFO.mAvatarInfo.aPartyName, mMYINFO.mAvatarInfo.aName))
			{
				mCBOXUI.Set(12, mMESSAGE.Return(365), "");
				PARTYUI::Off();
			}
			else
			{
				mBASICUI.Insert1(mMESSAGE.Return(363), mFONTCOLOR.mData[44]);
			}
		}
		return 1;
	}
	if (mIsClick[2])
	{
		mIsClick[2] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[402], mX + 87, mY + 164, uX, uY))
		{
			PARTYUI::Off();
		}
		return 1;
	}

	return 0;
}

int PARTYUI::RBUTTONDOWN(int uX, int uY)
{
	return 0;
}

int PARTYUI::RBUTTONUP(int uX, int uY)
{
	return 0;
}

int PARTYUI::KEYBOARD()
{
	int j;
	int i;

	if (mActive)
	{
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
			return FALSE;
		}
		else if (mGXD.mKeyboardBufferedData[i].dwOfs == 25)
		{
			PARTYUI::Off();
			return TRUE;
		}
		return FALSE;
	}
	else if (mMAIN.mMainMode == 6 && mMAIN.mSubMode == 4)
	{
		for (j = 0; j < mGXD.mKeyboardBufferedDataNum; ++j)
		{
			if ((mGXD.mKeyboardBufferedData[j].dwData & 0x80) == 0)
			{
				continue;
			}
			break;
		}
		if (j == mGXD.mKeyboardBufferedDataNum)
		{
			return FALSE;
		}
		else if (mGXD.mKeyboardBufferedData[j].dwOfs == 25)
		{
			mUI.Off(1);
			PARTYUI::Set();
			return TRUE;
		}
		return FALSE;
	}
	return FALSE;
}

void PARTYUI::InitForEnterZone()
{
	mActive = 0;
}
void PARTYUI::Set()
{
	int i;

	if (mUTIL.CheckIfPresentZone270())
	{
		mBASICUI.Insert1(mMESSAGE.Return(1352), mFONTCOLOR.mData[44]);
	}
	else if (!strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
	{
		mBASICUI.Insert1(mMESSAGE.Return(355), mFONTCOLOR.mData[44]);
	}
	else
	{
		mActive = 1;
		for (i = 0; i < 3; ++i)
		{
			mIsClick[i] = 0;
		}
	}
}
void PARTYUI::Off()
{
	if (mActive)
	{
		mActive = 0;
	}
}





FRIENDUI mFRIENDUI;

BOOL FRIENDUI::Init()
{
	mActive = 0;
	return TRUE;
}

void FRIENDUI::InitForEnterZone()
{
	mActive = 0;
}

void FRIENDUI::Draw(int uX, int uY)
{
	int v3;
	int v4;
	int v5;
	int v6;
	const char* v7;
	const char* v8;
	char* v9;
	int v10;
	int v11;
	int v12;
	int v13;
	int v14;
	int v16;
	char Destination[1000];
	int i;

	if (mActive)
	{
		v3 = mMYINFO.mScreenXSize / 2;
		mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[711]) / 2;
		v4 = mMYINFO.mScreenYSize / 2;
		mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[711]) / 2;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[711], mX, mY, uX, uY))
		{
			mPOINTER.Set(0);
		}
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[711], mX, mY);
		for (i = 0; i < 10; ++i)
		{
			if (strcmp(mMYINFO.mAvatarInfo.aFriend[i], ""))
			{
				if (i == mSelectIndex)
				{
					GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 17, mY + 20 * i + 81);
				}
				else
				{
					GIMAGE2D::Display(&mGDATA.mUI_MAIN[712], mX + 17, mY + 20 * i + 81);
				}
				strcpy(Destination, mMYINFO.mAvatarInfo.aFriend[i]);
				v12 = mY + 20 * i + 83;
				v5 = mX + 92;
				v6 = mUTIL.GetStringLength(Destination);
				mUTIL.DrawFont2D(Destination, v5 - v6 / 2, v12, 1);
				v14 = mZoneNumber[i];
				if (v14 == -2)
				{
					v7 = mMESSAGE.Return(527);
					strcpy(Destination, v7);
					v16 = 3;
				}
				else if (v14 > -2 && v14 <= 0)
				{
					v8 = mMESSAGE.Return(528);
					strcpy(Destination, v8);
					v16 = 2;
				}
				else
				{
					v9 = mZONENAME.Return(mZoneNumber[i]);
					strcpy(Destination, v9);
					v16 = 15;
				}
				v13 = mY + 20 * i + 83;
				v10 = mX + 205;
				v11 = mUTIL.GetStringLength(Destination);
				mUTIL.DrawFont2D(Destination, v10 - v11 / 2, v13, v16);
			}
		}
		if (mIsClick[0])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24);
		}
		if (mIsClick[1])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[719], mX + 214, mY + 298);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[718], mX + 214, mY + 298, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[718], mX + 214, mY + 298);
		}
	}
}
int FRIENDUI::DrawForRollOver(int uX, int uY)
{
	return 0;
}
BOOL FRIENDUI::LBUTTONDOWN(int uX, int uY)
{
	BOOL result;
	int v4;
	int v5;
	int i;

	if (!mActive)
	{
		return 0;
	}
	v4 = mMYINFO.mScreenXSize / 2;
	mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[711]) / 2;
	v5 = mMYINFO.mScreenYSize / 2;
	mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[711]) / 2;

	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[0] = 1;
		return 1;
	}
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[718], mX + 214, mY + 298, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[1] = 1;
		return 1;
	}

	for (i = 0; i < 10; i++)
	{
		if (strcmp(mMYINFO.mAvatarInfo.aFriend[i], "") && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[712], mX + 17, mY + 20 * i + 81, uX, uY))
		{
			break;
		}
	}
	if (i == 10)
	{
		return 1;
	}
	GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
	mSelectIndex = i;
	if (mZoneNumber[i] > 0)
	{
		mBASICUI.mSelectChatIndex = 0;
		strcpy(mBASICUI.mChatName, mMYINFO.mAvatarInfo.aFriend[i]);
	}
	return 1;
}
int FRIENDUI::LBUTTONUP(int uX, int uY)
{
	int result;
	int v4;
	int v5;
	char* v6;
	char* v7;
	int v8;

	if (!mActive)
	{
		return 0;
	}
	v4 = mMYINFO.mScreenXSize / 2;
	mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[711]) / 2;
	v5 = mMYINFO.mScreenYSize / 2;
	mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[711]) / 2;
	if (mIsClick[0])
	{
		mIsClick[0] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 252, mY + 24, uX, uY))
		{
			FRIENDUI::Off();
		}
		return 1;
	}
	if (mIsClick[1])
	{
		mIsClick[1] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[718], mX + 214, mY + 298, uX, uY))
		{
			if (mSelectIndex == -1)
			{
				v8 = mFONTCOLOR.mData[44];
				v6 = mMESSAGE.Return(529);
				mBASICUI.Insert1(v6, v8);
			}
			else
			{
				v7 = mMESSAGE.Return(530);
				mCBOXUI.Set(21, v7, "");
			}
		}
		return 1;
	}
	return 1;
}

int FRIENDUI::RBUTTONDOWN(int uX, int uY)
{
	return 0;
}
int FRIENDUI::RBUTTONUP(int uX, int uY)
{
	return 0;
}
int FRIENDUI::KEYBOARD()
{
	int result;
	int j;
	int i;

	if (mActive)
	{
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
		else if (mGXD.mKeyboardBufferedData[i].dwOfs == 33)
		{
			FRIENDUI::Off();
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (mMAIN.mMainMode == 6 && mMAIN.mSubMode == 4)
	{
		for (j = 0; j < mGXD.mKeyboardBufferedDataNum; ++j)
		{
			if ((mGXD.mKeyboardBufferedData[j].dwData & 0x80) == 0)
			{
				continue;
			}
			break;
		}
		if (j == mGXD.mKeyboardBufferedDataNum)
		{
			return 0;
		}
		else if (mGXD.mKeyboardBufferedData[j].dwOfs == 33)
		{
			mUI.Off(1);
			FRIENDUI::Set();
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}

}

void FRIENDUI::Set()
{
	char* v1;
	int v2;
	int i;
	int j;
	int k;

	if (mUTIL.CheckIfPresentZone270())
	{
		v2 = mFONTCOLOR.mData[44];
		v1 = mMESSAGE.Return(1352);
		mBASICUI.Insert1(v1, v2);
	}
	else
	{
		mActive = 1;
		for (i = 0; i < 2; ++i)
		{
			mIsClick[i] = 0;
		}
		mSelectIndex = -1;
		for (j = 0; j < 10; ++j)
		{
			mZoneNumber[j] = -2;
		}
		for (k = 0; k < 10; ++k)
		{
			if (strcmp(mMYINFO.mAvatarInfo.aFriend[k], ""))
			{
				mTRANSFER.T_FRIEND_SEND(k);
				return;
			}
		}
	}
}
void FRIENDUI::Off()
{
	if (mActive)
		mActive = 0;
}





HSBRANKUI mHSBRANKUI;

BOOL HSBRANKUI::Init()
{
	mActive = 0;
	return TRUE;
}

void HSBRANKUI::InitForEnterZone()
{
	mActive = 0;
}
void HSBRANKUI::Set()
{
	int i;

	mActive = 1;
	for (i = 0; i < 9; ++i)
		mIsClick[i] = 0;
	mAbilityIndex = mMYINFO.mAvatarInfo.aRankAbility;
	if (mAbilityIndex)
		mIsClick[mAbilityIndex + 1] = 1;
}
void HSBRANKUI::Off()
{
	if (mActive)
		mActive = 0;
}
int HSBRANKUI::LBUTTONDOWN(int uX, int uY)
{
	int v4;
	int v5;
	int i;
	int j;

	if (!mActive)
	{
		return 0;
	}
	v4 = mMYINFO.mScreenXSize / 2;
	mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3542]) / 2;
	v5 = mMYINFO.mScreenYSize / 2;
	mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3542]) / 2;
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 47, mY + 257, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[0] = 1;
		return 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 149, mY + 257, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[1] = 1;
		return 1;
	}
	else
	{
		for (i = 0; i < 7; i++)
		{
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[713], mX + 183, mY + 24 * i + 79, uX, uY))
			{
				break;
			}
		}
		if (i == 7)
		{
			return 1;
		}
		for (j = 2; j < 9; ++j)
		{
			mIsClick[j] = 0;
		}
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[i + 2] = 1;
		mAbilityIndex = i + 1;
	}

	return 1;
}
int HSBRANKUI::LBUTTONUP(int uX, int uY)
{
	int result;
	int v4;
	int v5;
	char* v6;
	char* v7;
	int v8;
	int v9;

	if (!mActive)
	{
		return 0;
	}
	v4 = mMYINFO.mScreenXSize / 2;
	mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3542]) / 2;
	v5 = mMYINFO.mScreenYSize / 2;
	mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3542]) / 2;
	if (mIsClick[0])
	{
		mIsClick[0] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 47, mY + 257, uX, uY))
		{
			if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
			{
				return 1;
			}
			switch (mAbilityIndex)
			{
			case 0:
				mBASICUI.Insert1(mMESSAGE.Return(2106), mFONTCOLOR.mData[44]);
				return 1;
			case 7:
				if (mMYINFO.mAvatarInfo.aRankPoints >= 100)
				{
					mTRANSFER.T_CHAR_RANK_BUFF_SEND(mAbilityIndex);
					return 1;
				}
				mBASICUI.Insert1(mMESSAGE.Return(2085), mFONTCOLOR.mData[44]);
				return 1;

			case 6:
				if (mMYINFO.mAvatarInfo.aRankPoints >= 300)
				{
					mTRANSFER.T_CHAR_RANK_BUFF_SEND(mAbilityIndex);
					return 1;
				}
				mBASICUI.Insert1(mMESSAGE.Return(2085), mFONTCOLOR.mData[44]);
				HSBRANKUI::Off();
				return 1;

			case 5:
				if (mMYINFO.mAvatarInfo.aRankPoints >= 600)
				{
					mTRANSFER.T_CHAR_RANK_BUFF_SEND(mAbilityIndex);
					return 1;
				}
				mBASICUI.Insert1(mMESSAGE.Return(2085), mFONTCOLOR.mData[44]);
				HSBRANKUI::Off();
				return 1;

			case 4:
				if (mMYINFO.mAvatarInfo.aRankPoints >= 1000)
				{
					mTRANSFER.T_CHAR_RANK_BUFF_SEND(mAbilityIndex);
					return 1;
				}
				mBASICUI.Insert1(mMESSAGE.Return(2085), mFONTCOLOR.mData[44]);
				HSBRANKUI::Off();
				return 1;

			case 3:
				if (mMYINFO.mAvatarInfo.aRankPoints >= 1500)
				{
					mTRANSFER.T_CHAR_RANK_BUFF_SEND(mAbilityIndex);
					return 1;
				}
				mBASICUI.Insert1(mMESSAGE.Return(2085), mFONTCOLOR.mData[44]);
				HSBRANKUI::Off();
				return 1;

			case 2:
				if (mMYINFO.mAvatarInfo.aRankPoints >= 2100)
				{
					mTRANSFER.T_CHAR_RANK_BUFF_SEND(mAbilityIndex);
					return 1;
				}
				mBASICUI.Insert1(mMESSAGE.Return(2085), mFONTCOLOR.mData[44]);
				HSBRANKUI::Off();
				return 1;

			case 1:
				if (mMYINFO.mAvatarInfo.aRankPoints >= 3000)
				{
					mTRANSFER.T_CHAR_RANK_BUFF_SEND(mAbilityIndex);
					return 1;
				}
				mBASICUI.Insert1(mMESSAGE.Return(2085), mFONTCOLOR.mData[44]);				
				HSBRANKUI::Off();
				return 1;

			default:
				return 1;
			}
		}
		return 1;
	}
	if (mIsClick[1])
	{
		mIsClick[1] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 149, mY + 257, uX, uY))
		{
			HSBRANKUI::Off();
		}
		return 1;
	}

	return 1;
}

int HSBRANKUI::RBUTTONDOWN(int uX, int uY)
{
	return 0;
}
int HSBRANKUI::RBUTTONUP(int uX, int uY)
{
	return 0;
}
int HSBRANKUI::KEYBOARD()
{
	return 0;
}
void HSBRANKUI::Draw(int uX, int uY)
{
	int v3;
	int v4;
	int i;

	if (mActive)
	{
		v3 = mMYINFO.mScreenXSize / 2;
		mX = v3 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3542]) / 2;
		v4 = mMYINFO.mScreenYSize / 2;
		mY = v4 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3542]) / 2;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3542], mX, mY, uX, uY))
		{
			mPOINTER.Set(0);
		}
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[3542], mX, mY);
		if (mIsClick[0])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], mX + 47, mY + 257);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 47, mY + 257, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[9], mX + 47, mY + 257);
		}
		if (mIsClick[1])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[13], mX + 149, mY + 257);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 149, mY + 257, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[12], mX + 149, mY + 257);
		}
		for (i = 0; i < 7; ++i)
		{
			if (mIsClick[i + 2])
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[713], mX + 183, mY + 24 * i + 79);
			}
		}
	}
}




SKILLUI mSKILLUI;

BOOL SKILLUI::Init()
{
	mActive = 0;
	return TRUE;
}

void SKILLUI::Set(int tSort)
{
	int i;
	int j;

	mActive = 1;
	mAutoBuffWindow = 1;
	for (i = 0; i < 125; ++i)
		mIsClick[i] = 0;
	for (j = 0; j < 40; ++j)
		mSkillLevel[j] = mMYINFO.mAvatarInfo.aSkill[j][1];
	mSetState = tSort;
	mIsClick[123] = 0;
	mIsClick[124] = 0;
}
void SKILLUI::Off()
{
	if (mActive)
	{
		if (mMYINFO.mAvatarInfo.aAutoBuffScroll > 0)
		{
			mTRANSFER.T_CONTINUE_SKILL_STAT_SEND();
		}
		mActive = 0;
		mAutoBuffWindow = 0;
	}
}

void SKILLUI::InitForEnterZone()
{
	mActive = 0;
}

BOOL SKILLUI::LBUTTONDOWN(int uX, int uY)
{
	int i, j, k;
	int sX, sY, tPos;
	int tIndex;

	if (!mActive)
		return 0;

	if (mMYINFO.mAvatarInfo.aAutoBuffScroll > 0 && mAutoBuffWindow == 1)
	{
		mMYINFO.AdjustScreenCoord(3251, 375, 312, &mX, &mY);
		tIndex = SKILLUI::GetSkillIndex2(uX, uY);
		if (tIndex != -1)
		{
			mCHOICEUI.Set(20, 0, tIndex, mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[tIndex][0], mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[tIndex][1], 0, 0, 0, 0, 0, 0, 0);
			mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[tIndex][1] = 0;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3252], mX + 37, mY + 279, uX, uY))
		{
			mIsClick[121] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 7, mY + 6, uX, uY))
		{
			mIsClick[122] = 1;
			return 1;
		}
	}

	mMYINFO.AdjustScreenCoord(317, 555, 182, &mX, &mY);
	tIndex = SKILLUI::GetSkillIndex1(uX, uY);
	if (tIndex != -1)
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		if (mSetState == 3)
		{
			mCHOICEUI.Set(4, 0, 0, tIndex + 1, 0, 0, 0, 0, 0, 0, 0, 0);
		}
		else if (mCInnerAuto.mActive)
		{
			mCHOICEUI.Set(22, 0, tIndex, mMYINFO.mAvatarInfo.aSkill[tIndex][0], mSkillLevel[tIndex], 0, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			mCHOICEUI.Set(3, 0, tIndex, mMYINFO.mAvatarInfo.aSkill[tIndex][0], mSkillLevel[tIndex], 0, 0, 0, 0, 0, 0, 0);
		}
		return 1;
	}
	else
	{
		if (uX > mX + 36 && uX < mX + 130 && uY > mY + 18 && uY < mY + 39)
		{
			if (mSetState)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mSetState = 0;
			}
			return 1;
		}
		else if (uX > mX + 134 && uX < mX + 228 && uY > mY + 18 && uY < mY + 39)
		{
			if (mSetState != 1)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mSetState = 1;
			}
			return 1;
		}
		else if (uX > mX + 232 && uX < mX + 326 && uY > mY + 18 && uY < mY + 39)
		{
			if (mSetState != 2)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mSetState = 2;
			}
			return 1;
		}
		else if (uX > mX + 330 && uX < mX + 424 && uY > mY + 18 && uY < mY + 39)
		{
			if (mSetState != 3)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mSetState = 3;
			}
			return 1;
		}

		if (mSetState == 1 || mSetState == 4)
		{
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 172, mY + 410, uX, uY))
			{
				mIsClick[123] = 1;
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 270, mY + 410, uX, uY))
			{
				mIsClick[124] = 1;
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				return 1;
			}
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 438, mY + 6, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[0] = 1;
			return 1;
		}

		if (mSetState == 0 || mSetState == 1 || mSetState == 2)
		{
			for (i = 10 * mSetState; i < 10 * mSetState + 10; ++i)
			{
				if (mMYINFO.mAvatarInfo.aSkill[i][0] >= 1)
				{
					tPos = i - 10 * mSetState;;
					if (mMYINFO.mAvatarInfo.aSkillPoint > 0 && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 56, uX, uY))
					{
						GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
						mIsClick[3 * i + 1] = 1;
						return 1;
					}
					if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[628], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 72, uX, uY))
					{
						GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
						mIsClick[3 * i + 2] = 1;
						return 1;
					}
					if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[630], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 94, uX, uY))
					{
						GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
						mIsClick[3 * i + 3] = 1;
						return 1;
					}
				}
			}
		}
		else if (mSetState == 4)
		{
			for (i = 10 * (mSetState - 1); i < 10 * (mSetState - 1) + 10; ++i)
			{
				if (mMYINFO.mAvatarInfo.aSkill[i][0] >= 1)
				{
					tPos = i - 10 * (mSetState - 1);;
					if (mMYINFO.mAvatarInfo.aSkillPoint > 0 && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 56, uX, uY))
					{
						GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
						mIsClick[3 * i + 1] = 1;
						return 1;
					}
					if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[628], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 72, uX, uY))
					{
						GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
						mIsClick[3 * i + 2] = 1;
						return 1;
					}
					if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[630], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 94, uX, uY))
					{
						GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
						mIsClick[3 * i + 3] = 1;
						return 1;
					}
				}
			}
		}
	}

	return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[317], mX, mY, uX, uY);
}

int SKILLUI::LBUTTONUP(int uX, int uY)
{
	int tIndex;
	int tPos;
	int i, j, k;
	int sX, sY;
	SKILL_INFO* tSKILL;

	if (!mActive)
		return 0;

	if (mMYINFO.mAvatarInfo.aAutoBuffScroll > 0 && mAutoBuffWindow == 1)
	{
		mMYINFO.AdjustScreenCoord(3251, 375, 312, &mX, &mY);
		if (mIsClick[121] == 1)
		{
			mIsClick[121] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3252], mX + 37, mY + 279, uX, uY))
			{
				mTRANSFER.T_CONTINUE_SKILL_STAT_SEND();
				SKILLUI::Off();
				return 1;
			}
		}
		if (mIsClick[122] == 1)
		{
			mIsClick[122] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 7, mY + 6, uX, uY))
			{
				mTRANSFER.T_CONTINUE_SKILL_STAT_SEND();
				mAutoBuffWindow = 0;
				return 1;
			}
		}
	}

	mMYINFO.AdjustScreenCoord(317, 555, 182, &mX, &mY);
	if (mIsClick[0])
	{
		mIsClick[0] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 438, mY + 6, uX, uY))
		{
			if (mMYINFO.mAvatarInfo.aAutoBuffScroll > 0 && mAutoBuffWindow == 1)
			{
				mTRANSFER.T_CONTINUE_SKILL_STAT_SEND();
			}
			SKILLUI::Off();
			return 1;
		}
	}
	if (mSetState == 1 || mSetState == 4)
	{
		if (mIsClick[123])
		{
			mIsClick[123] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 172, mY + 410, uX, uY))
			{
				mSetState = 1;
			}
			return 1;
		}
		if (mIsClick[124])
		{
			mIsClick[124] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 270, mY + 410, uX, uY))
			{
				mSetState = 4;
			}
			return 1;
		}
	}
	if (mSetState == 0 || mSetState == 1 || mSetState == 2)
	{
		for (i = 10 * mSetState; i < 10 * mSetState + 10; ++i)
		{
			if (mMYINFO.mAvatarInfo.aSkill[i][0] >= 1)
			{
				tPos = i - 10 * mSetState;
				if (mMYINFO.mAvatarInfo.aSkillPoint > 0 && mIsClick[3 * i + 1])
				{
					mIsClick[3 * i + 1] = 0;
					if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 56, uX, uY))
					{
						tSKILL = mSKILL.Search(mMYINFO.mAvatarInfo.aSkill[i][0]);
						if (!tSKILL)
						{
							return 1;
						}
						if (mMYINFO.mAvatarInfo.aSkill[i][1] < tSKILL->sMaxUpgradePoint)
						{
							if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
							{
								mPLAY.PROCESS_DATA_203_SEND(i);
								mMYINFO.mNetworkLock = 1;
								mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
							}
						}
						else
						{
							mBASICUI.Insert1(mMESSAGE.Return(66), mFONTCOLOR.mData[44]);
						}
						return 1;
					}
				}
				else if (mIsClick[3 * i + 2])
				{
					mIsClick[3 * i + 2] = 0;
					if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[628], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 72, uX, uY))
					{
						if (mSkillLevel[i] == mMYINFO.mAvatarInfo.aSkill[i][1])
						{
							return 1;
						}
						tSKILL = mSKILL.Search(mMYINFO.mAvatarInfo.aSkill[i][0]);
						if (!tSKILL)
						{
							return 1;
						}
						if (tSKILL->sLearnSkillPoint != tSKILL->sMaxUpgradePoint)
						{
							++mSkillLevel[i];
						}
					}
					return 1;
				}
				else if (mIsClick[3 * i + 3])
				{
					mIsClick[3 * i + 3] = 0;
					if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[630], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 94, uX, uY))
					{
						if (mSkillLevel[i] == 1)
						{
							return 1;
						}
						tSKILL = mSKILL.Search(mMYINFO.mAvatarInfo.aSkill[i][0]);
						if (!tSKILL)
						{
							return 1;
						}
						if (tSKILL->sLearnSkillPoint != tSKILL->sMaxUpgradePoint)
						{
							--mSkillLevel[i];
						}
					}
					return 1;
				}
			}
		}
	}
	else if (mSetState == 4)
	{
		for (i = 10 * (mSetState - 1); i < 10 * (mSetState - 1) + 10; ++i)
		{
			if (mMYINFO.mAvatarInfo.aSkill[i][0] >= 1)
			{
				tPos = i - 10 * (mSetState - 1);
				if (mMYINFO.mAvatarInfo.aSkillPoint > 0 && mIsClick[3 * i + 1])
				{
					mIsClick[3 * i + 1] = 0;
					if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 56, uX, uY))
					{
						tSKILL = mSKILL.Search(mMYINFO.mAvatarInfo.aSkill[i][0]);
						if (!tSKILL)
						{
							return 1;
						}
						if (mMYINFO.mAvatarInfo.aSkill[i][1] < tSKILL->sMaxUpgradePoint)
						{
							if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
							{
								mPLAY.PROCESS_DATA_203_SEND(i);
								mMYINFO.mNetworkLock = 1;
								mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
							}
						}
						else
						{
							mBASICUI.Insert1(mMESSAGE.Return(66), mFONTCOLOR.mData[44]);
						}
					}
					return 1;
				}
				else if (mIsClick[3 * i + 2])
				{
					mIsClick[3 * i + 2] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[628], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 72, uX, uY))
					{
						if (mSkillLevel[i] != mMYINFO.mAvatarInfo.aSkill[i][1])
						{
							++mSkillLevel[i];
						}
					}
					return 1;
				}
				else if (mIsClick[3 * i + 3])
				{
					mIsClick[3 * i + 3] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[630], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 94, uX, uY))
					{
						if (mSkillLevel[i] != 1)
						{
							--mSkillLevel[i];
						}
					}
					return 1;
				}
			}
		}
	}

	return 0;
}

int SKILLUI::RBUTTONDOWN(int uX, int uY)
{
	return 0;
}
int SKILLUI::RBUTTONUP(int uX, int uY)
{
	return 0;
}

int SKILLUI::KEYBOARD()
{
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
		else if (mGXD.mKeyboardBufferedData[i].dwOfs == 31)
		{
			SKILLUI::Off();
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
		else if (mGXD.mKeyboardBufferedData[j].dwOfs == 31)
		{
			mUI.Off(1);
			SKILLUI::Set(0);
			return 1;
		}
		return 0;
	}

	return 0;
}

void SKILLUI::Draw(int uX, int uY)
{
	if (!mActive)
	{
		return;
	}

	int i, j, k;
	int sX, sY;
	SKILL_INFO* tSKILL;
	int tDataIndex;
	char mBuffer[1000];
	int tBonusSkill;
	int tPos;

	if (mMYINFO.mAvatarInfo.aAutoBuffScroll > 0 && mAutoBuffWindow == 1)
	{
		mMYINFO.AdjustScreenCoord(3251, 375, 312, &mX, &mY);
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3251], mX, mY, uX, uY))
		{
			mPOINTER.Set(0);
		}
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[3251], mX, mY);
		for (i = 0; i < 8; ++i)
		{
			if (mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[i][0] > 0)
			{
				tSKILL = mSKILL.Search(mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[i][0]);
				GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[tSKILL->sDataNumber2D - 1], mX + 76 * (i / 4) + 27, mY + 54 * (i & 0x80000003) + 44);
				int v64 = mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[i][1] * 11.0 / tSKILL->sMaxUpgradePoint;
				tDataIndex = v64 + 616;
				if (tDataIndex > 627)
				{
					tDataIndex = 627;
				}
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 76 * (i / 4) + 50, mY + 54 * (i & 0x80000003) + 68);
			}
		}
		if (mIsClick[121] == 1)
		{
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3252], mX + 37, mY + 279, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[3254], mX + 37, mY + 279);
			}
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3252], mX + 37, mY + 279, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3253], mX + 37, mY + 279);
		}
		else
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3252], mX + 37, mY + 279);
		}
		if (mIsClick[122] == 1 && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 7, mY + 6, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 7, mY + 6);
		}
	}

	mMYINFO.AdjustScreenCoord(317, 555, 182, &mX, &mY);
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[317], mX, mY, uX, uY))
	{
		mPOINTER.Set(0);
	}
	GIMAGE2D::Display(&mGDATA.mUI_MAIN[317], mX, mY);
	switch (mSetState)
	{
	case 0:
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[318], mX + 36, mY + 18);
		break;
	case 1:
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[319], mX + 134, mY + 18);
		sprintf(mBuffer, "%d / %d", 1, 2);
		sY = mY + 414;
		sX = mX + 230;
		mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
		break;
	case 2:
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[320], mX + 232, mY + 18);
		break;
	case 3:
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[657], mX, mY);
		break;
	case 4:
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[319], mX + 134, mY + 18);
		sprintf(mBuffer, "%d / %d", 2, 2);
		sY = mY + 414;
		sX = mX + 230;
		mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);
		break;
	default:
		break;
	}
	switch (mSetState)
	{
	case 0:
	case 1:
	case 2:
		for (j = 10 * mSetState; j < 10 * mSetState + 10; ++j)
		{
			if (mMYINFO.mAvatarInfo.aSkill[j][0] >= 1)
			{
				tPos = j - 10 * mSetState;;
				tSKILL = mSKILL.Search(mMYINFO.mAvatarInfo.aSkill[j][0]);
				if (tSKILL)
				{
					tDataIndex = tSKILL->sDataNumber2D - 1;
					if (mCHOICEUI.mActive && mCHOICEUI.mSort == 3 && mMYINFO.mAvatarInfo.aSkill[j][0] == mCHOICEUI.mItemIdx)
					{
						++tDataIndex;
					}
					GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[tDataIndex], mX + 195 * (tPos / 5) + 54, mY + 69 * (tPos % 5) + 60);

					int v65 = mSkillLevel[j] * 11.0 / tSKILL->sMaxUpgradePoint;
					tDataIndex = v65 + 616;
					if (tDataIndex > 627)
					{
						tDataIndex = 627;
					}
					if (tSKILL->sLearnSkillPoint != tSKILL->sMaxUpgradePoint)
					{
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 195 * (tPos / 5) + 78, mY + 69 * (tPos % 5) + 84);
					}
					strcpy(mBuffer, "");
					switch (tSKILL->sTribeInfo[1])
					{
					case 2:
						strcpy(mBuffer, mMESSAGE.Return(123));
						break;
					case 3:
						strcpy(mBuffer, mMESSAGE.Return(124));
						break;
					case 4:
						strcpy(mBuffer, mMESSAGE.Return(125));
						break;
					case 5:
						strcpy(mBuffer, mMESSAGE.Return(126));
						break;
					case 6:
						strcpy(mBuffer, mMESSAGE.Return(127));
						break;
					case 7:
						strcpy(mBuffer, mMESSAGE.Return(128));
						break;
					case 8:
						strcpy(mBuffer, mMESSAGE.Return(129));
						break;
					case 9:
						strcpy(mBuffer, mMESSAGE.Return(130));
						break;
					case 10:
						strcpy(mBuffer, mMESSAGE.Return(131));
						break;
					default:
						break;
					}
					sY = mY + 69 * (tPos % 5) + 61;
					sX = mX + 195 * (tPos / 5) + 163;
					mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 1);

					strcpy(mBuffer, tSKILL->sName);
					sY = mY + 69 * (tPos % 5) + 80;
					sX = mX + 195 * (tPos / 5) + 163;
					mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 21);

					tBonusSkill = mFACTOR.GetBonusSkillValue(tSKILL->sIndex);
					if (tBonusSkill <= 0)
					{
						sprintf(mBuffer, "%s : %d/%d", mMESSAGE.Return(132), mSkillLevel[j], mMYINFO.mAvatarInfo.aSkill[j][1]);
					}
					else
					{
						sprintf(mBuffer, "%s : %d/%d(+%d)", mMESSAGE.Return(132), mSkillLevel[j], mMYINFO.mAvatarInfo.aSkill[j][1], tBonusSkill);
					}
					sY = mY + 69 * (tPos % 5) + 99;
					sX = mX + 195 * (tPos / 5) + 163;
					mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 8);

					if (mMYINFO.mAvatarInfo.aSkillPoint > 0)
					{
						if (mIsClick[3 * j + 1])
						{
							GIMAGE2D::Display(&mGDATA.mUI_MAIN[316], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 56);
						}
						else
						{
							GIMAGE2D::Display(&mGDATA.mUI_MAIN[315], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 56);
						}
					}
					if (mIsClick[3 * j + 2])
					{
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[629], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 72);
					}
					else
					{
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[628], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 72);
					}

					if (mIsClick[3 * j + 3])
					{
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[631], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 94);
					}
					else
					{
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[630], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 94);
					}
				}
			}
		}
		break;

	case 3:
		for (j = 0; j < 9; ++j)
		{
			tDataIndex = SKILLUI::ReturnEmoticonImageIndex(j + 1);
			if (mCHOICEUI.mActive && mCHOICEUI.mSort == 4 && j + 1 == mCHOICEUI.mItemIdx)
			{
				GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[++tDataIndex], mX + 195 * (j / 5) + 54, mY + 69 * (j % 5) + 60);
			}
		}
		break;

	case 4:
		for (j = 10 * (mSetState - 1); j < 10 * (mSetState - 1) + 10; ++j)
		{
			if (mMYINFO.mAvatarInfo.aSkill[j][0] >= 1)
			{
				tPos = j - 10 * (mSetState - 1);
				tSKILL = mSKILL.Search(mMYINFO.mAvatarInfo.aSkill[j][0]);
				if (tSKILL)
				{
					tDataIndex = tSKILL->sDataNumber2D - 1;
					if (mCHOICEUI.mActive && mCHOICEUI.mSort == 3 && mMYINFO.mAvatarInfo.aSkill[j][0] == mCHOICEUI.mItemIdx)
					{
						++tDataIndex;
					}
					GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[tDataIndex], mX + 195 * (tPos / 5) + 54, mY + 69 * (tPos % 5) + 60);
					int v66 = mSkillLevel[j] * 11.0 / tSKILL->sMaxUpgradePoint;
					tDataIndex = v66 + 616;
					if (tDataIndex > 627)
					{
						tDataIndex = 627;
					}
					GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 195 * (tPos / 5) + 78, mY + 69 * (tPos % 5) + 84);
					strcpy(mBuffer, "");
					switch (tSKILL->sTribeInfo[1])
					{
					case 2:
						strcpy(mBuffer, mMESSAGE.Return(123));
						break;
					case 3:
						strcpy(mBuffer, mMESSAGE.Return(124));
						break;
					case 4:
						strcpy(mBuffer, mMESSAGE.Return(125));
						break;
					case 5:
						strcpy(mBuffer, mMESSAGE.Return(126));
						break;
					case 6:
						strcpy(mBuffer, mMESSAGE.Return(127));
						break;
					case 7:
						strcpy(mBuffer, mMESSAGE.Return(128));
						break;
					case 8:
						strcpy(mBuffer, mMESSAGE.Return(129));
						break;
					case 9:
						strcpy(mBuffer, mMESSAGE.Return(130));
						break;
					case 10:
						strcpy(mBuffer, mMESSAGE.Return(131));
						break;
					default:
						break;
					}
					sY = mY + 69 * (tPos % 5) + 61;
					sX = mX + 195 * (tPos / 5) + 163;
					mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 1);

					strcpy(mBuffer, tSKILL->sName);
					sY = mY + 69 * (tPos % 5) + 80;
					sX = mX + 195 * (tPos / 5) + 163;
					mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 21);

					tBonusSkill = mFACTOR.GetBonusSkillValue(tSKILL->sIndex);
					if (tBonusSkill <= 0)
					{
						sprintf(mBuffer, "%s : %d/%d", mMESSAGE.Return(132), mSkillLevel[j], mMYINFO.mAvatarInfo.aSkill[j][1]);
					}
					else
					{
						sprintf(mBuffer, "%s : %d/%d(+%d)", mMESSAGE.Return(132), mSkillLevel[j], mMYINFO.mAvatarInfo.aSkill[j][1], tBonusSkill);
					}
					sY = mY + 69 * (tPos % 5) + 99;
					sX = mX + 195 * (tPos / 5) + 163;
					mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 8);

					if (mMYINFO.mAvatarInfo.aSkillPoint > 0)
					{
						if (mIsClick[3 * j + 1])
						{
							GIMAGE2D::Display(&mGDATA.mUI_MAIN[316], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 56);
						}
						else
						{
							GIMAGE2D::Display(&mGDATA.mUI_MAIN[315], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 56);
						}
					}
					if (mIsClick[3 * j + 2])
					{
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[629], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 72);
					}
					else
					{
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[628], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 72);
					}

					if (mIsClick[3 * j + 3])
					{
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[631], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 94);
					}
					else
					{
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[630], mX + 195 * (tPos / 5) + 219, mY + 69 * (tPos % 5) + 94);
					}
				}
			}
		}
		break;

	default:
		break;
	}
	sprintf(mBuffer, "%s : %d", mMESSAGE.Return(133), mMYINFO.mAvatarInfo.aSkillPoint);
	sY = mY + 413;
	sX = mX + 89;
	mUTIL.DrawFont2D(mBuffer, sX - mUTIL.GetStringLength(mBuffer) / 2, sY, 3);

	if (mIsClick[0])
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 438, mY + 6);
	if (mIsClick[123] == 1)
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 172, mY + 410);
	if (mIsClick[124] == 1)
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 270, mY + 410);

}

int SKILLUI::DrawForRollOver(int uX, int uY)
{
	SKILL_INFO* tSKILL;
	int sX, sY;
	int tIndex;
	int tSkillGrade, tBonusSkillValue;
	int tDataIndex;

	if (!mActive)
		return 0;

	if (mMYINFO.mAvatarInfo.aAutoBuffScroll > 0 && mAutoBuffWindow == 1)
	{
		mMYINFO.AdjustScreenCoord(3251, 375, 312, &mX, &mY);
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3251], mX, mY, uX, uY))
		{
			mPOINTER.Set(0);
		}
		tIndex = SKILLUI::GetSkillIndex2(uX, uY);
		if (tIndex >= 0)
		{
			tSkillGrade = mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[tIndex][1] + mFACTOR.GetBonusSkillValue(mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[tIndex][0]);
			SKILLUI::DrawSkillInfo(uX, uY, mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[tIndex][0], tSkillGrade);
			return 1;
		}
	}

	mMYINFO.AdjustScreenCoord(317, 555, 182, &mX, &mY);
	if (mSetState == 4)
	{
		tIndex = SKILLUI::GetSkillIndex1(uX, uY);
		if (tIndex != -1)
		{
			tSKILL = mSKILL.Search(mMYINFO.mAvatarInfo.aSkill[tIndex][0]);
			if (tSKILL)
			{
				GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[tSKILL->sDataNumber2D], mX + 195 * ((tIndex - 10 * (mSetState - 1)) / 5) + 54, mY + 69 * ((tIndex - 10 * (mSetState - 1)) % 5) + 60);
				int v13 = mSkillLevel[tIndex] * 11.0 / tSKILL->sMaxUpgradePoint;
				tDataIndex = v13 + 616;
				if (tDataIndex > 627)
				{
					tDataIndex = 627;
				}
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 195 * ((tIndex - 10 * (mSetState - 1)) / 5) + 78, mY + 69 * ((tIndex - 10 * (mSetState - 1)) % 5) + 84);
				tSkillGrade = mSkillLevel[tIndex] + mFACTOR.GetBonusSkillValue(mMYINFO.mAvatarInfo.aSkill[tIndex][0]);
				SKILLUI::DrawSkillInfo(uX, uY, mMYINFO.mAvatarInfo.aSkill[tIndex][0], tSkillGrade);
				return 1;
			}
		}
	}
	else
	{
		if (mSetState == 3)
		{
			return 0;
		}
		tIndex = SKILLUI::GetSkillIndex1(uX, uY);
		if (tIndex == -1)
		{
			return 0;
		}
		tSKILL = mSKILL.Search(mMYINFO.mAvatarInfo.aSkill[tIndex][0]);
		if (!tSKILL)
		{
			return 0;
		}
		GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[tSKILL->sDataNumber2D], mX + 195 * ((tIndex - 10 * mSetState) / 5) + 54, mY + 69 * ((tIndex - 10 * mSetState) % 5) + 60);
		int v12 = mSkillLevel[tIndex] * 11.0 / tSKILL->sMaxUpgradePoint;
		tDataIndex = v12 + 616;
		if (tDataIndex > 627)
		{
			tDataIndex = 627;
		}
		if (tSKILL->sLearnSkillPoint != tSKILL->sMaxUpgradePoint)
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[tDataIndex], mX + 195 * ((tIndex - 10 * mSetState) / 5) + 78, mY + 69 * ((tIndex - 10 * mSetState) % 5) + 84);
		}
		tSkillGrade = mSkillLevel[tIndex] + mFACTOR.GetBonusSkillValue(mMYINFO.mAvatarInfo.aSkill[tIndex][0]);
		SKILLUI::DrawSkillInfo(uX, uY, mMYINFO.mAvatarInfo.aSkill[tIndex][0], tSkillGrade);
	}

	return 1;
}
void SKILLUI::DrawSkillInfo(int uX, int uY, int tSkillNum, int tSkillLevel)
{
	SKILL_INFO* v89;
	int sX, sY, i, j, k, l, tstrlen, v84;
	char Message[100][101];
	int tDisplaySort[100];
	int tLineBreak;
	int index = 0;
	char* tstr;
	char* tstr2;
	float value = 0;

	v89 = mSKILL.Search(tSkillNum);
	if (v89)
	{
		strcpy(Message[0], v89->sName);
		tDisplaySort[0] = 3;
		strcpy(Message[1], "");
		index = 2;
		tLineBreak = 0;
		for (i = 0; i < 10; ++i)
		{
			if (strcmp(v89->sDescription[i], ""))
			{
				strcpy(Message[index], v89->sDescription[i]);
				tDisplaySort[index++] = 1;
				tLineBreak = 1;
			}
		}
		if (tLineBreak)
			strcpy(Message[index++], "");
		switch (v89->sTribeInfo[0])
		{
		case 1:
			tstr = mMESSAGE.Return(1062);
			strcpy(Message[index], tstr);
			tDisplaySort[index++] = 1;
			break;
		case 2:
			tstr = mMESSAGE.Return(1063);
			strcpy(Message[index], tstr);
			tDisplaySort[index++] = 1;
			break;
		case 3:
			tstr = mMESSAGE.Return(1064);
			strcpy(Message[index], tstr);
			tDisplaySort[index++] = 1;
			break;
		case 4:
			tstr = mMESSAGE.Return(1065);
			strcpy(Message[index], tstr);
			tDisplaySort[index++] = 1;
			break;
		default:
			break;
		}
		tLineBreak = 0;
		switch (v89->sTribeInfo[1])
		{
		case 1:
			tLineBreak = 1;
			break;
		case 2:
			tstr = mMESSAGE.Return(1066);
			strcpy(Message[index], tstr);
			tDisplaySort[index++] = 5;
			tLineBreak = 1;
			break;
		case 3:
			tstr = mMESSAGE.Return(1067);
			strcpy(Message[index], tstr);
			tDisplaySort[index++] = 5;
			tLineBreak = 1;
			break;
		case 4:
			tstr = mMESSAGE.Return(1068);
			strcpy(Message[index], tstr);
			tDisplaySort[index++] = 5;
			tLineBreak = 1;
			break;
		case 5:
			tstr = mMESSAGE.Return(1069);
			strcpy(Message[index], tstr);
			tDisplaySort[index++] = 5;
			tLineBreak = 1;
			break;
		case 6:
			tstr = mMESSAGE.Return(1070);
			strcpy(Message[index], tstr);
			tDisplaySort[index++] = 5;
			tLineBreak = 1;
			break;
		case 7:
			tstr = mMESSAGE.Return(1071);
			strcpy(Message[index], tstr);
			tDisplaySort[index++] = 5;
			tLineBreak = 1;
			break;
		case 8:
			tstr = mMESSAGE.Return(1072);
			strcpy(Message[index], tstr);
			tDisplaySort[index++] = 5;
			tLineBreak = 1;
			break;
		case 9:
			tstr = mMESSAGE.Return(1073);
			strcpy(Message[index], tstr);
			tDisplaySort[index++] = 5;
			tLineBreak = 1;
			break;
		case 0xA:
			tstr = mMESSAGE.Return(1074);
			strcpy(Message[index], tstr);
			tDisplaySort[index++] = 5;
			tLineBreak = 1;
			break;
		default:
			break;
		}
		if (tLineBreak)
			strcpy(Message[index++], "");
		int v80 = v89->sLearnSkillPoint;
		tstr = mMESSAGE.Return(1075);
		sprintf(Message[index], "%s : %d", tstr, v80);
		tDisplaySort[index] = 1;
		int v92 = index + 1;
		int v81 = v89->sMaxUpgradePoint;
		tstr = mMESSAGE.Return(1076);
		sprintf(Message[v92], "%s : %d", tstr, v81);
		tDisplaySort[v92] = 1;
		int v93 = v92 + 1;
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 1) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 1);
			tstr = mMESSAGE.Return(1077);
			sprintf(Message[v93], "%s : %.2f", tstr, value);
			tDisplaySort[v93++] = 1;
		}
		strcpy(Message[v93], "");
		int v94 = v93 + 1;
		switch (v89->sIndex)
		{
		case 1:
		case 0x14:
		case 0x27:
			if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 2) > 0.0)
			{
				tstr = mMESSAGE.Return(1080);
				value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 2);
				tstr2 = mMESSAGE.Return(1078);
				sprintf(Message[v94], "%s : %.2f%s", tstr2, value, tstr);
				tDisplaySort[v94++] = 28;
			}
			if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 3) > 0.0)
			{
				tstr = mMESSAGE.Return(1080);
				value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 3);
				tstr2 = mMESSAGE.Return(1079);
				sprintf(Message[v94], "%s : %.2f%s", tstr2, value, tstr);
				tDisplaySort[v94++] = 28;
			}
			break;
		case 0x6A:
		case 0x6C:
		case 0x6E:
			if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 2) > 0.0)
			{
				value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 2);
				tstr = mMESSAGE.Return(1109);
				sprintf(Message[v94], "%s : %.2f", tstr, value);
				tDisplaySort[v94++] = 28;
			}
			break;
		case 0x6B:
		case 0x6D:
		case 0x6F:
			if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 3) > 0.0)
			{
				value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 3);
				tstr = mMESSAGE.Return(1110);
				sprintf(Message[v94], "%s : %.2f", tstr, value);
				tDisplaySort[v94++] = 28;
			}
			break;
		default:
			break;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 4) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 4);
			tstr = mMESSAGE.Return(1081);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 28;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 5) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 5);
			tstr = mMESSAGE.Return(1082);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94] = 28;
			int v95 = v94 + 1;
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 5);
			tstr = mMESSAGE.Return(1083);
			sprintf(Message[v95], "%s : %.2f(%%)", tstr, value + value);
			tDisplaySort[v95] = 28;
			v94 = v95 + 1;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 6) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 6) * 0.1000000014901161;
			tstr = mMESSAGE.Return(1084);
			sprintf(Message[v94], "%s : %.2f(m)", tstr, value);
			tDisplaySort[v94++] = 28;
		}
		switch (v89->sAttackType)
		{
		case 2:
			tstr = mMESSAGE.Return(1087);
			sprintf(Message[v94], "%s", tstr);
			tDisplaySort[v94++] = 38;
			break;
		case 3:
			v84 = v89->sTotalHitNumber;
			tstr = mMESSAGE.Return(1088);
			sprintf(Message[v94], "%s(%d)", tstr, v84);
			tDisplaySort[v94++] = 38;
			break;
		case 4:
		case 5:
			tstr = mMESSAGE.Return(1089);
			sprintf(Message[v94], "%s", tstr);
			tDisplaySort[v94++] = 38;
			break;
		default:
			break;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 7) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 7);
			tstr = mMESSAGE.Return(1090);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 38;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 8) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 8);
			tstr = mMESSAGE.Return(1091);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 38;
		}
		if (v89->sValidRadius > 1)
		{
			value = v89->sValidRadius * 0.1000000014901161;
			tstr = mMESSAGE.Return(1111);
			sprintf(Message[v94], "%s : %.2f(m)", tstr, value);
			tDisplaySort[v94++] = 39;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 10) > 0.0)
		{
			tstr = mMESSAGE.Return(1080);
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 10);
			tstr2 = mMESSAGE.Return(1097);
			sprintf(Message[v94], "%s : %.2f%s", tstr2, value, tstr);
			tDisplaySort[v94++] = 40;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 11) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 11);
			tstr = mMESSAGE.Return(1086);
			sprintf(Message[v94], "%s %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 27;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 12) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 12);
			tstr = mMESSAGE.Return(1098);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 27;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 13) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 13);
			tstr = mMESSAGE.Return(1099);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 27;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 14) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 14);
			tstr = mMESSAGE.Return(1100);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 27;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 15) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 15);
			tstr = mMESSAGE.Return(1101);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 27;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 16) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 16);
			tstr = mMESSAGE.Return(1104);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 27;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 17) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 17);
			tstr = mMESSAGE.Return(1105);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 27;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 18) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 18);
			tstr = mMESSAGE.Return(1103);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 27;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 19) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 19);
			tstr = mMESSAGE.Return(1102);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 27;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 20) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 20);
			tstr = mMESSAGE.Return(1106);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 27;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 21) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 21);
			tstr = mMESSAGE.Return(1108);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 27;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 22) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 22);
			tstr = mMESSAGE.Return(1107);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 27;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 23) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 23) * 0.1000000014901161;
			tstr = mMESSAGE.Return(1092);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 2;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 24) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 24);
			tstr = mMESSAGE.Return(1093);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 2;
		}
		if (mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 25) > 0.0)
		{
			value = mSKILL.ReturnSkillValue(v89->sIndex, tSkillLevel, 25) * 0.1000000014901161;
			tstr = mMESSAGE.Return(1094);
			sprintf(Message[v94], "%s : %.2f(%%)", tstr, value);
			tDisplaySort[v94++] = 2;
		}


		int v99 = 0;
		for (i = 0; i < v94; ++i)
		{
			int v51 = strlen(Message[i]);
			if (v51 > v99)
				v99 = strlen(Message[i]);
		}
		sX = uX - 13 * ((v99 - 1) / 2 + 1);
		sY = uY - 15 * (v94 + 2) / 2;
		for (i = 0; i < v94 + 2; ++i)
		{
			for (j = 0; j < (v99 - 1) / 2 + 1; ++j)
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[2424], sX + 13 * j, sY + 15 * i);
		}
		sX = sX + 13 * ((v99 - 1) / 2 + 1) / 2;
		sY = sY + 16;
		for (i = 0; i < v94; ++i)
		{
			int v86 = tDisplaySort[i];
			tstrlen = mUTIL.GetStringLength(Message[i]);
			mUTIL.DrawFont2D(Message[i], sX - tstrlen / 2, sY, v86);
			sY += 15;
		}
	}
}


BOOL SKILLUI::CheckPossibleActionSkill(int tSkill[2])
{
	int i, j, k;
	SKILL_INFO* tSKILL;
	ITEM_INFO* tITEM;
	int tSkillGrade;

	for (i = 0; i < 40 && (mMYINFO.mAvatarInfo.aSkill[i][0] < 1 || mMYINFO.mAvatarInfo.aSkill[i][0] != tSkill[0] || mMYINFO.mAvatarInfo.aSkill[i][1] < tSkill[1]); ++i)
		;
	if (i == 40)
	{
		return 0;
	}

	for (j = 0; j < 14 && (mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][j][2] != 1 || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][j][1] != tSkill[1] || mMYINFO.mAvatarInfo.aHotKey[mMYINFO.mHotKeyPage][j][0] != tSkill[0]); ++j)
		;
	if (j == 14)
		return 0;

	tSKILL = mSKILL.Search(tSkill[0]);
	if (!tSKILL)
	{
		return 0;
	}
	if (tSKILL->sTribeInfo[0] != 1 && tSKILL->sTribeInfo[0] - 2 != mMYINFO.mAvatarInfo.aPreviousTribe)
	{
		return 0;
	}
	if (tSKILL->sTribeInfo[1] == 1)
	{
		tSkillGrade = mSKILL.ReturnSkillValue(tSkill[0], tSkill[1], 1);
		return mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue >= ((100 - mFACTOR.GetReduceManaRatio()) * tSkillGrade * 0.01f);
	}
	tITEM = mITEM.Search(mMYINFO.mAvatarInfo.aEquip[7][0]);
	if (!tITEM)
	{
		return 0;
	}
	if (tSKILL->sTribeInfo[1] != tITEM->iSort - 11)
	{
		return 0;
	}
	tSkillGrade = mSKILL.ReturnSkillValue(tSkill[0], tSkill[1], 1);
	return mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue >= ((100 - mFACTOR.GetReduceManaRatio()) * tSkillGrade * 0.01f);
}

int SKILLUI::ReturnEmoticonImageIndex(int a1)
{
	int result;

	switch (a1)
	{
	case 1:
		result = 600;
		break;
	case 2:
		result = 605;
		break;
	case 3:
		result = 610;
		break;
	case 4:
		result = 615;
		break;
	case 5:
		result = 620;
		break;
	case 6:
		result = 625;
		break;
	case 7:
		result = 630;
		break;
	case 8:
		result = 635;
		break;
	case 9:
		result = 640;
		break;
	default:
		result = -1;
		break;
	}
	return result;
}

int SKILLUI::GetSkillIndex1(int uX, int uY)
{
	int i;

	if (!mActive)
		return -1;

	mMYINFO.AdjustScreenCoord(317, 555, 182, &mX, &mY);
	for (i = 0; i < 10 && (uX < mX + 195 * (i / 5) + 54 || uX > mX + 195 * (i / 5) + 94 || uY < mY + 69 * (i % 5) + 60 || uY > mY + 69 * (i % 5) + 110); ++i)
		;
	if (i == 10)
	{
		return -1;
	}

	switch (mSetState)
	{
	case 0:
	case 1:
	case 2:
		if (mMYINFO.mAvatarInfo.aSkill[10 * mSetState][2 * i] <= 0)
		{
			return -1;
		}
		return i + 10 * mSetState;

	case 3:
		if (i >= 9)
		{
			return -1;
		}
		return i;

	case 4:
		if (mMYINFO.mAvatarInfo.aSkill[10 * mSetState][2 * i] <= 0)
		{
			return -1;
		}
		return i + 10 * (mSetState - 1);

	default:
		return -1;
	}
}
int SKILLUI::GetSkillIndex2(int uX, int uY)
{
	int i;
	int j;

	if (!mActive)
		return -1;

	mMYINFO.AdjustScreenCoord(3251, 375, 312, &mX, &mY);
	for (i = 0; i < 2; ++i)
	{
		for (j = 0; j < 4; ++j)
		{
			if (uX >= mX + 76 * i + 27 && uX <= mX + 76 * i + 103 && uY >= mY + 54 * j + 44 && uY <= mY + 54 * j + 98)
			{
				return j + 4 * i;
			}
		}
	}
	return -1;
}

BOOL SKILLUI::GetContinueSkillIndex(int tSkill, int tSkillGrade)
{
	int i;

	if (!mActive)
		return 0;

	for (i = 0; i < 40 && (mMYINFO.mAvatarInfo.aSkill[i][0] < 1 || mMYINFO.mAvatarInfo.aSkill[i][0] != tSkill || mMYINFO.mAvatarInfo.aSkill[i][1] < tSkillGrade); ++i)
	{
		;
	}
	if (i == 40)
	{
		return 0;
	}

	if (tSkill != 7 && tSkill != 11 && tSkill != 15 && tSkill != 19 && tSkill != 26 && tSkill != 30 && tSkill != 34 && tSkill != 38 && tSkill != 45 && tSkill != 49 && tSkill != 53 && tSkill != 57 && tSkill != 83 && tSkill != 103 && tSkill != 104 && tSkill != 105 && tSkill != 84 && tSkill != 82)
	{
		return FALSE;
	}
	return TRUE;
}





QUESTUI mQUESTUI;

BOOL QUESTUI::Init()
{
	mActive = 0;
	return TRUE;
}

void QUESTUI::Set(int tSort)
{
	char* v2;
	char* v3;
	int v4;
	int v5;
	int i;

	if (mUTIL.CheckInfiniteBattleZone())
	{
		v4 = mFONTCOLOR.mData[44];
		v2 = mMESSAGE.Return(1352);
		mBASICUI.Insert1(v2, v4);
	}
	else if (mMYINFO.mAvatarInfo.aQuestInfo[1] == 1)
	{
		mDATA = mQUEST.Search(mMYINFO.mAvatarInfo.aTribe, mMYINFO.mAvatarInfo.aQuestInfo[0]);
		if (mDATA)
		{
			mActive = 1;
			for (i = 0; i < 3; ++i)
				mIsClick[i] = 0;
			mIsClick[3] = tSort;
		}
	}
	else
	{
		v5 = mFONTCOLOR.mData[44];
		v3 = mMESSAGE.Return(21);
		mBASICUI.Insert1(v3, v5);
	}
}

void QUESTUI::Off()
{
	if (mActive)
		mActive = 0;
}

void QUESTUI::InitForEnterZone()
{
	mActive = 0;
}

void QUESTUI::Draw(int uX, int uY)
{

}

int QUESTUI::LBUTTONDOWN(int uX, int uY)
{
	int v4;
	int v5;
	int v6;
	int v7;
	int v8;

	if (!mActive)
		return 0;
	v8 = mIsClick[3];
	if (v8 == 1)
	{
		v4 = mMYINFO.mScreenXSize / 2;
		mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2425]) / 2;
		v5 = mMYINFO.mScreenYSize / 2;
		mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2425]) / 2;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[911], mX + 614, mY + 383, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[0] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[909], mX + 667, mY + 383, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[1] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2425], mX, mY, uX, uY))
			return 1;
	}
	else if (v8 == 2)
	{
		v6 = mMYINFO.mScreenXSize / 2;
		mX = v6 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[904]) / 2;
		v7 = mMYINFO.mScreenYSize / 2;
		mY = v7 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[904]) / 2;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[909], mX + 344, mY + 416, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[2] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[904], mX, mY, uX, uY))
			return 1;
	}
	return 0;
}

int QUESTUI::LBUTTONUP(int uX, int uY)
{
	int result;
	int v4;
	int v5;
	char* v6;
	char* v7;
	char* v8;
	int v9;
	int v10;
	int v11;
	int v12;
	int v13;

	if (!mActive)
		return 0;
	v13 = mIsClick[3];
	if (v13 != 1)
	{
		if (v13 == 2)
		{
			v9 = mMYINFO.mScreenXSize / 2;
			mX = v9 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[904]) / 2;
			v10 = mMYINFO.mScreenYSize / 2;
			mY = v10 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[904]) / 2;
			if (mIsClick[2])
			{
				mIsClick[2] = 0;
				if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[909], mX + 344, mY + 416, uX, uY))
					QUESTUI::Off();
				return 1;
			}
		}
		return 0;
	}
	v4 = mMYINFO.mScreenXSize / 2;
	mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2425]) / 2;
	v5 = mMYINFO.mScreenYSize / 2;
	mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2425]) / 2;
	if (mIsClick[0])
	{
		mIsClick[0] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[911], mX + 614, mY + 383, uX, uY))
		{
			if (mDATA->qType == 1)
			{
				v11 = mFONTCOLOR.mData[44];
				v6 = mMESSAGE.Return(46);
				mBASICUI.Insert1(v6, v11);
				result = 1;
			}
			else
			{
				if (mMYINFO.ReturnQuestEndConditionState())
				{
					v12 = mFONTCOLOR.mData[44];
					v7 = mMESSAGE.Return(447);
					mBASICUI.Insert1(v7, v12);
				}
				else
				{
					v8 = mMESSAGE.Return(440);
					mCBOXUI.Set(15, v8, "");
					QUESTUI::Off();
				}
				result = 1;
			}
		}
		else
		{
			result = 1;
		}
	}
	else
	{
		if (!mIsClick[1])
			return 0;
		mIsClick[1] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[909], mX + 667, mY + 383, uX, uY))
			QUESTUI::Off();
		result = 1;
	}
	return result;
}

int QUESTUI::RBUTTONDOWN(int uX, int uY)
{
	return 0;
}
int QUESTUI::RBUTTONUP(int uX, int uY)
{
	return 0;
}
int QUESTUI::KEYBOARD()
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
			result = 0;
		}
		else if (mGXD.mKeyboardBufferedData[i].dwOfs == 50)
		{
			QUESTUI::Off();
			result = 1;
		}
		else
		{
			result = 0;
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
		else if (mGXD.mKeyboardBufferedData[j].dwOfs == 50)
		{
			mUI.Off(1);
			QUESTUI::Set(1);
			result = 1;
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

BOOL QUESTUI::DrawForRollOver(int uX, int uY)
{
	return 0;
}
