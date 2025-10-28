#include "gxdheader.h"

CBOXUI mCBOXUI;

BOOL CBOXUI::Init()
{
	mActive = 0;
	return 1;
}

void CBOXUI::Off()
{
	if (mActive)
		mActive = 0;
}
void CBOXUI::InitForEnterZone()
{
	mActive = 0;
}

void CBOXUI::Set(int tSort, char* tMessage, char* tMessage2)
{
	mPOINTER.Set(0);
	mEDITBOX.Set(0);
	mUpdateTime = mAPP->hPresentElapsedSeconds;
	mActive = 1;
	for (int i = 0; i < 2; i++)
	{
		mIsClick[i] = 0;
	}
	mSort = tSort;
	strcpy(mMessage1, tMessage);
	strcpy(mMessage2, tMessage2);
}

int CBOXUI::LBUTTONDOWN(int uX, int uY)
{
	int v4;
	int v5;

	if (!mActive)
	{
		return 0;
	}
	v4 = mMYINFO.mScreenXSize / 2;
	mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[7]) / 2;
	v5 = mMYINFO.mScreenYSize / 2;
	mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[7]) / 2;
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[8], mX + 165, mY + 90, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[0] = 1;
	}
	else
	{
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[11], mX + 241, mY + 90, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[1] = 1;
		}
	}

	return 1;
}

BOOL CBOXUI::LBUTTONUP(int uX, int uY)
{
	int sX, sY, i, j, k;
	int tMapList[4];
	float tCoord[3];
	int tZoneNum;
	int tPage, tIndex, tX, tY;
	int tValue[6];
	BYTE t[100];
	int result;
	char* tstr;
	char* tstr2;
	int tColor;
	int v22;
	char Buffer[1000];
	int index01;

	if (!mActive)
	{
		return 0;
	}

	tMapList[0] = 5;
	tMapList[1] = 10;
	tMapList[2] = 15;
	tMapList[3] = 123;
	sX = mMYINFO.mScreenXSize / 2;
	mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[7]) / 2;
	sY = mMYINFO.mScreenYSize / 2;
	mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[7]) / 2;
	if (mIsClick[0])
	{
		mIsClick[0] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[8], mX + 165, mY + 90, uX, uY))
		{
			CBOXUI::Off();
			switch (mSort)
			{
			case 1:
				mAPP->hAbortProgram = 1;
				return 1;
			case 2:
				mMAIN.ProcessForDeleteAvatar();
				return 1;
			case 3:
				if (mMYINFO.mMoveZoneState)
					return 1;
				if (!mMYINFO.mNetworkLock)
				{
					mPLAY.PROCESS_DATA_202_SEND(mNPCUI.mNPCInfo->nIndex, mNPCUI.mSkillIndex);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mNPCUI.mSkillIndex = 0;
				}
				return 1;
			case 4:
				if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, mMYINFO.mLevelBattleZoneNumberForMove, tCoord))
				{
					mZONEMOVEINFO.SetFirstCoord(mMYINFO.mLevelBattleZoneNumberForMove, tCoord);
				}
				if (!mMYINFO.mMoveZoneState)
				{
					mMYINFO.mMoveZoneState = 1;
					mMYINFO.mMoveZoneSort = 6;
					mMYINFO.mMoveZoneValue = 0;
					mMYINFO.mNextZoneNumber = mMYINFO.mLevelBattleZoneNumberForMove;
					memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
					mMYINFO.mAction.aType = 0;
					mMYINFO.mAction.aSort = 1;
					mMYINFO.mAction.aFrame = 0.0;
					mMYINFO.mAction.aLocation[0] = tCoord[0];
					mMYINFO.mAction.aLocation[1] = tCoord[1];
					mMYINFO.mAction.aLocation[2] = tCoord[2];
					mMYINFO.mAction.aFront = (rand() % 360);
					mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
					mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, mMYINFO.mLevelBattleZoneNumberForMove);
				}
				return 1;
			case 5:
				if (mMYINFO.mMoveZoneState)
					return 1;
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_CHANGE_TO_TRIBE4_SEND();
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				return 1;
			case 6:
				if (mMYINFO.mCheckSendActionPacket || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 1)
				{
					goto LABEL_26;
				}
				tZoneNum = 0;
				switch (mMYINFO.mAvatarInfo.aTribe)
				{
				case 0:
					tZoneNum = 1;
					break;
				case 1:
					tZoneNum = 6;
					break;
				case 2:
					tZoneNum = 11;
					break;
				case 3:
					tZoneNum = 140;
					break;
				default:
					break;
				}
				if (!tZoneNum)
					return 1;
				if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, tZoneNum, tCoord))
					mZONEMOVEINFO.SetFirstCoord(tZoneNum, tCoord);
				if (mMYINFO.mMoveZoneState)
					return 1;
				if (mMYINFO.mNetworkLock)
					return 1;
				if (tZoneNum == mMYINFO.mPresentZoneNumber)
				{
					mMYINFO.A002_1(tCoord, 0, -1, 0, 0, 0, 0);
					mTRANSFER.T_USE_INVENTORY_ITEM_SEND(mMYINFO.mUseInventoryPage, mMYINFO.mUseInventoryIndex, 8);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				else
				{
					mMYINFO.mMoveZoneState = 1;
					mMYINFO.mMoveZoneSort = 8;
					mMYINFO.mMoveZoneValue = 0;
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
				return 1;
			case 7:
				if (mMYINFO.mMoveZoneState)
				{
					return 1;
				}
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_USE_INVENTORY_ITEM_SEND(mMYINFO.mUseInventoryPage, mMYINFO.mUseInventoryIndex, 0);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
				}
				return 1;
			case 8:
				mTRANSFER.T_DUEL_ANSWER_SEND(0);
				return 1;
			case 9:
				mTRANSFER.T_TRADE_ANSWER_SEND(0);
				return 1;
			case 10:
				mTRANSFER.T_PARTY_ANSWER_SEND(0);
				return 1;
			case 11:
				mTRANSFER.T_PARTY_LEAVE_SEND();
				return 1;
			case 12:
				mTRANSFER.T_PARTY_BREAK_SEND();
				return 1;
			case 13:
				mTRANSFER.T_PARTY_EXILE_SEND(mMYINFO.mPartyInfo[mBASICUI.mPartyIndex]);
				return 1;
			case 14:
				mTRANSFER.T_GUILD_ANSWER_SEND(0);
				return 1;
			case 15:
				/*if (mMYINFO.mMoveZoneState)
					return 1;
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_PROCESS_QUEST_SEND(5, 0, 0, 0, 0);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}*/
				return 1;
			case 16:
				mPLAY.DemandGuildBreak();
				return 1;
			case 17:
				mPLAY.DemandGuildOut(mGUILDUI.mSelectAvatarName);
				return 1;
			case 18:
				mPLAY.DemandGuildLeave();
				return 1;
			case 19:
				mTRANSFER.T_FRIEND_ANSWER_SEND(0);
				return 1;
			case 20:
				mTRANSFER.T_TEACHER_ANSWER_SEND(0);
				return 1;
			case 21:
				mTRANSFER.T_FRIEND_DELETE_SEND(mFRIENDUI.mSelectIndex);
				mFRIENDUI.mSelectIndex = -1;
				return 1;
			case 22:
				mTRANSFER.T_TEACHER_END_SEND();
				return 1;
			case 24:
				mPLAY.DemandGuildRole(mGUILDUI.mSelectAvatarName, 1);
				return 1;
			case 25:
				mPLAY.DemandGuildRole(mGUILDUI.mSelectAvatarName, 2);
				return 1;
			case 26:
				mPLAY.DemandGuildInfo(2);
				return 1;
			case 27:
				mPLAY.DemandTribeStatInit();
				return 1;
			case 28:
				mINVENUI.PutInventory1(-1, -1, mNPCUI.mCashShopInfo[mNPCUI.mCashShopMaxPage][mNPCUI.mCashShopPage][mNPCUI.mCashShopIndex][1], mNPCUI.mCashShopInfo[mNPCUI.mCashShopMaxPage][mNPCUI.mCashShopPage][mNPCUI.mCashShopIndex][2], &tPage, &tIndex, &tX, &tY, -1);
				if (tPage == -1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(117), mFONTCOLOR.mData[44]);
					return 1;
				}
				tValue[0] = mNPCUI.mCashShopInfo[mNPCUI.mCashShopMaxPage][mNPCUI.mCashShopPage][mNPCUI.mCashShopIndex][1];
				tValue[1] = tX;
				tValue[2] = tY;
				tValue[3] = mNPCUI.mCashShopInfo[mNPCUI.mCashShopMaxPage][mNPCUI.mCashShopPage][mNPCUI.mCashShopIndex][2];
				tValue[4] = 0;
				tValue[5] = 0;
				if (mMYINFO.mMoveZoneState)
				{
					return 1;
				}
				if (mMYINFO.mNetworkLock)
				{
					return 1;
				}
				if (mNPCUI.mPossibleBuyCashItem == 1)
				{
					mTRANSFER.T_BUY_CASH_ITEM_SEND(mNPCUI.mCashShopInfo[mNPCUI.mCashShopMaxPage][mNPCUI.mCashShopPage][mNPCUI.mCashShopIndex][0], tPage, tIndex, tValue, mNPCUI.mCashShopVersion);
				}
				else if (mNPCUI.mActive == 1 || mNPCUI.mWorkId == 21)
				{
					mNPCUI.Off();
				}
				mMYINFO.mNetworkLock = 1;
				mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				mNPCUI.mCashShopIndex = -1;
				return 1;
			case 29:
				if (mMYINFO.mMoveZoneState)
					return 1;
				if (!mMYINFO.mNetworkLock)
				{
					mPLAY.PROCESS_DATA_233_SEND(mNPCUI.mNPCInfo->nIndex, mNPCUI.mSkillIndex);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mNPCUI.mSkillIndex = 0;
				}
				return 1;
			case 30:
				mTRANSFER.T_TRIBE_VOTE_SEND(1, mTRIBEVOTEUI.mSelectIndex);
				return 1;
			case 32:
				mTRANSFER.T_TRIBE_VOTE_SEND(3, mTRIBEVOTEUI.mSelectIndex);
				return 1;
			case 33:
				mNPCUI.ChangeTribeMasters(1);
				return 1;
			case 34:
				mNPCUI.ChangeTribeMasters(2);
				return 1;
			case 35:
				mPLAY.DemandMakeTribeWeapon(4);
				return 1;
			case 36:
				/*if (mMYINFO.mMoveZoneState)
					return 1;
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_IMPROVE_ITEM_SEND(
						&mTRANSFER,
						mNPCUI.uInfo[0],
						mNPCUI.uInfo2[0],
						mNPCUI.uInfo[1],
						mNPCUI.uInfo2[1]);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}*/
				return 1;
			case 37:
				if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
				{
					goto LABEL_101;
				}
				mPLAY.PROCESS_DATA_212_SEND(mCHOICEUI.mPage, mCHOICEUI.mIndex, mCHOICEUI.mItemQuantity, 0, 0, 0, 0);
				mCHOICEUI.mIsClick = 1;
				mMYINFO.mNetworkLock = 1;
				mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				return 1;
			case 38:
				if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
				{
					goto LABEL_101;
				}
				if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
				{
					mCInnerAuto.bTakeItem = 1;
				}
				mPLAY.PROCESS_DATA_209_SEND(mCHOICEUI.mPage, mCHOICEUI.mIndex, mCHOICEUI.mItemQuantity, 0, 0, 0, 0);
				mCHOICEUI.mIsClick = 1;
				mMYINFO.mNetworkLock = 1;
				mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				return 1;
			case 39:
				//mMAIN.ProcessForMoveAvatar(mMAIN);
				return 1;
			case 40:
				if (mMYINFO.mMoveZoneState)
				{
					return 1;
				}
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_CHANGE_TO_TRIBE4_SEND();
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				return 1;
			case 41:
				//mMAIN.ProcessForChangeMaster(mMAIN);
				return 1;
			case 42:
				mANIMALUI.Delete(1);
				return 1;
			case 43:
				tZoneNum = 84;
				if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, 84, tCoord))
				{
					mZONEMOVEINFO.SetFirstCoord(tZoneNum, tCoord);
				}
				if (!mMYINFO.mMoveZoneState)
				{
					mMYINFO.mMoveZoneState = 1;
					mMYINFO.mMoveZoneSort = 5;
					mMYINFO.mMoveZoneValue = 1000000;
					mMYINFO.mNextZoneNumber = tZoneNum;
					memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
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
				return 1;
			case 44:
				if (mBONUSUI.mActive)
					mBONUSUI.Off();
				else
					mBONUSUI.Set();
				return 1;
			case 46:
				mTRANSFER.T_TRIBE_WORK_SEND(15, &t[0]);
				return 1;
			case 47:
				if (mZONEMAININFO.CheckPossibleEnterHoisundoZoneNumber(mMYINFO.mHoisundoZoneNumberForMove))
				{
					if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, mMYINFO.mHoisundoZoneNumberForMove, tCoord))
					{
						mZONEMOVEINFO.SetFirstCoord(mMYINFO.mHoisundoZoneNumberForMove, tCoord);
					}
					if (!mMYINFO.mMoveZoneState)
					{
						mMYINFO.mMoveZoneState = 1;
						mMYINFO.mMoveZoneSort = 6;
						mMYINFO.mMoveZoneValue = 0;
						mMYINFO.mNextZoneNumber = mMYINFO.mHoisundoZoneNumberForMove;
						memset(&mMYINFO.mAction, 0, sizeof(ACTION_INFO));
						mMYINFO.mAction.aType = 0;
						mMYINFO.mAction.aSort = 1;
						mMYINFO.mAction.aFrame = 0.0;
						mMYINFO.mAction.aLocation[0] = tCoord[0];
						mMYINFO.mAction.aLocation[1] = tCoord[1];
						mMYINFO.mAction.aLocation[2] = tCoord[2];
						mMYINFO.mAction.aFront = (rand() % 360);
						mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
						mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, mMYINFO.mHoisundoZoneNumberForMove);
					}
					result = 1;
				}
				else
				{
					tColor = mFONTCOLOR.mData[44];
					tstr = mMESSAGE.Return(229);
					mBASICUI.Insert1(tstr, tColor);
					result = 1;
				}
				return result;
			case 48:
				mPLAY.DemandMakeTribeWeapon(16);
				return 1;
			case 49:
				if (mMYINFO.mMoveZoneState)
					return 1;
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_SMELT_ITEM_SEND(mNPCUI.mPage[0], mNPCUI.mIndex[0], mNPCUI.mPage[1], mNPCUI.mIndex[1]);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				return 1;
			case 50:
				if (!mMYINFO.mCheckSendActionPacket && mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort == 1)
				{
					mTRANSFER.T_FISHING_STATE_SEND(1, mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingLocation[0], mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingLocation[2]);
					result = 1;
				}
				else
				{
				LABEL_26:
					tColor = mFONTCOLOR.mData[44];
					tstr = mMESSAGE.Return(120);
					mBASICUI.Insert1(tstr, tColor);
					result = 1;
				}
				return result;
			case 51:
				mTRANSFER.T_FISHING_STATE_SEND(2, 0.0, 0.0);
				return 1;
			case 52:
				mPLAY.DemandMakeTribeWeapon(17);
				return 1;
			case 53:
				tZoneNum = 200;
				if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, 200, tCoord))
				{
					mZONEMOVEINFO.SetFirstCoord(tZoneNum, tCoord);
				}
				if (!mMYINFO.mMoveZoneState)
				{
					mMYINFO.mMoveZoneState = 1;
					mMYINFO.mMoveZoneSort = 6;
					mMYINFO.mMoveZoneValue = 0;
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
				return 1;
			case 54:
				mTRANSFER.T_END_PSHOP_SEND(2);
				return 1;
			case 55:
				tZoneNum = tMapList[mMYINFO.mAvatarInfo.aTribe];
				if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, tZoneNum, tCoord))
				{
					mZONEMOVEINFO.SetFirstCoord(tZoneNum, tCoord);
				}
				if (!mMYINFO.mMoveZoneState)
				{
					mMYINFO.mMoveZoneState = 1;
					mMYINFO.mMoveZoneSort = 6;
					mMYINFO.mMoveZoneValue = 0;
					mMYINFO.mNextZoneNumber = tZoneNum;
					memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
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
				return 1;
			case 56:
				mPLAY.DemandGuildDelegateMaster(mGUILDUI.mSelectAvatarName, mMYINFO.mAvatarInfo.aName, mGUILDUI.mGuildInfo.gMasterEntrustDate);
				return 1;
			case 57:
				mTRANSFER.T_ANIMAL_STATE_SEND(7, 1);
				return 1;
			case 58:
				mTRANSFER.T_ANIMAL_STATE_SEND(7, 2);
				return 1;
			case 59:
				mTRANSFER.T_ANIMAL_STATE_SEND(7, 3);
				return 1;
			case 60:
				mTRANSFER.T_ANIMAL_STATE_SEND(7, 4);
				return 1;
			case 61:
				mTRANSFER.T_ANIMAL_STATE_SEND(7, 5);
				return 1;
			case 62:
				mTRANSFER.T_ANIMAL_STATE_SEND(7, 6);
				return 1;
			case 63:
				mTRANSFER.T_ANIMAL_STATE_SEND(7, 7);
				return 1;
			case 64:
				mTRANSFER.T_ANIMAL_STATE_SEND(7, 8);
				return 1;
			case 65:
				mTRANSFER.T_ANIMAL_STATE_SEND(8, 1);
				return 1;
			case 66:
				mTRANSFER.T_ANIMAL_STATE_SEND(8, 2);
				return 1;
			case 67:
				mTRANSFER.T_ANIMAL_STATE_SEND(8, 3);
				return 1;
			case 68:
				mTRANSFER.T_ANIMAL_STATE_SEND(8, 4);
				return 1;
			case 69:
				mTRANSFER.T_ANIMAL_STATE_SEND(8, 5);
				return 1;
			case 70:
				mTRANSFER.T_ANIMAL_STATE_SEND(8, 6);
				return 1;
			case 71:
				mTRANSFER.T_ANIMAL_STATE_SEND(8, 7);
				return 1;
			case 72:
				mTRANSFER.T_ANIMAL_STATE_SEND(8, 8);
				return 1;
			case 73:
				mINVENUI.PutInventory1(-1, -1, 1103, 0, &tPage, &tIndex, &tX, &tY, -1);
				if (tPage == -1)
				{
					tstr = mMESSAGE.Return(117);
					mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
					mCAPSULEUI.DrawString(mMESSAGE.Return(117));
					return 1;
				}
				mMYINFO.mNetworkLock = 1;
				mTRANSFER.T_BUY_CAPSULE_SEND(mCAPSULEUI.mBuySort, tPage, tIndex, tX, tY);
				mCAPSULEUI.mBuyNum = 0;
				mCAPSULEUI.mBuyNum++;
				return 1;
			case 74:
				if (mMYINFO.mMoveZoneState)
					return 1;
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_USE_INVENTORY_ITEM_SEND(mMYINFO.mUseInventoryPage, mMYINFO.mUseInventoryIndex, 1);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				return 1;
			case 75:
				if (mMYINFO.mMoveZoneState)
					return 1;
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_USE_INVENTORY_ITEM_SEND(
						mMYINFO.mUseInventoryPage,
						mMYINFO.mUseInventoryIndex,
						2);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				return 1;
			case 76:
				if (mMYINFO.mMoveZoneState)
					return 1;
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_USE_INVENTORY_ITEM_SEND(
						mMYINFO.mUseInventoryPage,
						mMYINFO.mUseInventoryIndex,
						3);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				return 1;
			case 77:
				if (mMYINFO.mMoveZoneState)
					return 1;
				if (mMYINFO.mNetworkLock)
					return 1;
				mINVENUI.IsFindItem3(666, &tPage, &tIndex);
				if (tPage == -1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(2245), 15);
					return 1;
				}
				if (mMYINFO.mAvatarInfo.aMoney < 500000000)
				{
					mBASICUI.Insert1("[SYSTEM] Must have 500M Silver on your bag.", 15);
					return 1;
				}
				v22 = mTOWERBUILDUI.ReturnTowerIndex(mTOWERBUILDUI.mZoneNumber);
				if (v22 != -1)
				{
					mTRANSFER.T_TOWER_UPGRADE_SEND(mTOWERBUILDUI.mZoneNumber, mTOWERBUILDUI.mTower[v22] % 100, mTOWERBUILDUI.mTower[v22] / 100, tPage, tIndex);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				return 1;
			case 78:
				mPLAY.DemandMakeTribeWeapon(18);
				return 1;
			case 79:
				if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
					return 1;
				mPLAY.PROCESS_DATA_252_SEND(
					mINVENUI.mUnkA[0],
					mINVENUI.mUnkA[1],
					mMYINFO.mAvatarInfo.aInventory[mINVENUI.mUnkA[0]][mINVENUI.mUnkA[1]][3],
					0,
					0,
					0,
					0);
				mCHOICEUI.mIsClick = 1;
				mMYINFO.mNetworkLock = 1;
				mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				return 1;
			case 82:
				if (mNPCUI.mWorkId != 26 || mNPCUI.mActive != 1)
					return 1;
				if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
					return 1;
				mTRANSFER.T_ADD_ITEM_SEND(
					mNPCUI.mPage[0],
					mNPCUI.mIndex[0],
					mNPCUI.mPage[1],
					mNPCUI.mIndex[1]);
				mMYINFO.mNetworkLock = 1;
				mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				return 1;
			case 85:
				//goto LABEL_209;
				return 1;
			case 86:
				/*if (mMYINFO.mAvatarInfo.aUnsealCharm >= 1)
				{
				LABEL_209:
					sub_4BD270(
						&mTRANSFER,
						mNPCUI.uNPCCraftPresentPageNumber,
						mNPCUI.uInfo[0],
						mNPCUI.uInfo2[0],
						mNPCUI.uInfo[1],
						mNPCUI.uInfo2[1],
						mNPCUI.uInfo[2],
						mNPCUI.uInfo2[2],
						mNPCUI.uInfo[3],
						mNPCUI.uInfo2[3]);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				else
				{
					tstr = mMESSAGE.Return(2656);
					tstr2 = mMESSAGE.Return(2574);
					CBOXUI::Set(85, tstr2, tstr);
				}*/
				goto LABEL_263;
			case 87:
				//mTRANSFER.T_PCROOM_PET_SEND(&mTRANSFER);
				goto LABEL_263;
			case 88:
				if (mMYINFO.mMoveZoneState)
					return 1;
				if (!mMYINFO.mNetworkLock)
				{
					//mTRANSFER.T_IMPROVE_LEGENDARY_SEND(mNPCUI.uInfo[0], mNPCUI.uInfo2[0], mNPCUI.uInfo[1], mNPCUI.uInfo2[1]);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				return 1;
			case 89:
				/*if (mMYINFO.mMoveZoneState)
					return 1;
				if (mMYINFO.mNetworkLock)
					return 1;
				a2 = 0;
				for (i = 2; i < 6; ++i)
				{
					if (mNPCUI.uInfo[i] != -1)
						++a2;
				}
				sub_4BD650(
					&mTRANSFER,
					a2,
					mNPCUI.uInfo[0],
					mNPCUI.uInfo2[0],
					mNPCUI.uInfo[1],
					mNPCUI.uInfo2[1],
					mNPCUI.uInfo[2],
					mNPCUI.uInfo2[2],
					mNPCUI.uInfo[3],
					mNPCUI.uInfo2[3],
					mNPCUI.uInfo[4],
					mNPCUI.uInfo2[4],
					mNPCUI.uInfo[5],
					mNPCUI.uInfo2[5]);
				mMYINFO.mNetworkLock = 1;
				mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;*/
				return 1;
			case 90:
				mINVENUI.PutInventory1( -1, -1, mNPCUI.mBloodStoreInfo[mNPCUI.mBloodStoreCurrentPage][mNPCUI.mBloodStoreIndex][0], mNPCUI.mBloodStoreInfo[mNPCUI.mBloodStoreCurrentPage][mNPCUI.mBloodStoreIndex][2], &tPage, &tIndex, &tX, &tY, -1);
				if (tPage == -1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(117), mFONTCOLOR.mData[44]);
					return 1;
				}
				tValue[0] = mNPCUI.mBloodStoreInfo[mNPCUI.mBloodStoreCurrentPage][mNPCUI.mBloodStoreIndex][0];
				tValue[1] = tX;
				tValue[2] = tY;
				tValue[3] = mNPCUI.mBloodStoreInfo[mNPCUI.mBloodStoreCurrentPage][mNPCUI.mBloodStoreIndex][2];
				tValue[4] = 0;
				tValue[5] = 0;
				if (!mMYINFO.mMoveZoneState && !mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_BUY_BLOODSTAINED_ITEM_SEND(mNPCUI.mBloodStoreCurrentPage, mNPCUI.mBloodStoreIndex, tPage, tIndex, &tValue[0]);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mNPCUI.mBloodStoreIndex = -1;
				}
				return 1;

			case 91:
				if (mMYINFO.mMoveZoneState)
					return 1;
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_EXCHANGE_ITEM_SEND(
						mNPCUI.mPageSort,
						mNPCUI.mPage[0],
						mNPCUI.mIndex[0],
						mNPCUI.mPage[1],
						mNPCUI.mIndex[1]);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				return 1;
			case 92:
				/*if (mMYINFO.mMoveZoneState)
					return 1;
				if (!mMYINFO.mNetworkLock)
				{
					sub_4BCE90(
						mNPCUI.tUltimateUpgradeState[0],
						mNPCUI.uInfo[0],
						mNPCUI.uInfo2[0],
						mNPCUI.uInfo[1],
						mNPCUI.uInfo2[1],
						mNPCUI.uInfo[2],
						mNPCUI.uInfo2[2],
						mNPCUI.uInfo[3],
						mNPCUI.uInfo2[3]);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}*/
				return 1;
			case 93:
				tZoneNum = 340;
				if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, 340, tCoord))
					mZONEMOVEINFO.SetFirstCoord(tZoneNum, tCoord);
				if (!mMYINFO.mMoveZoneState)
				{
					mMYINFO.mMoveZoneState = 1;
					mMYINFO.mMoveZoneSort = 6;
					mMYINFO.mMoveZoneValue = 0;
					mMYINFO.mNextZoneNumber = tZoneNum;
					memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
					mMYINFO.mAction.aType = 0;
					mMYINFO.mAction.aSort = 1;
					mMYINFO.mAction.aFrame = 0.0;
					mMYINFO.mAction.aLocation[0] = tCoord[0];
					mMYINFO.mAction.aLocation[1] = tCoord[1];
					mMYINFO.mAction.aLocation[2] = tCoord[2];
					mMYINFO.mAction.aFront = (rand() % 360);
					mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
					tstr = mITEM.Search(1894)->iName;
					tstr2 = mMESSAGE.Return(2713);
					sprintf(Buffer, tstr2, tstr);
					mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
					mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, tZoneNum);
				}
				return 1;
			case 94:
				if (mMYINFO.mMoveZoneState)
					return 1;
				if (mMYINFO.mNetworkLock)
					return 1;
				if (mMYINFO.mAvatarInfo.aProtectForDestroy >= 1)
				{
					mTRANSFER.T_ENGRAVE_ITEM_SEND(
						mNPCUI.mPage[0],
						mNPCUI.mIndex[0],
						mNPCUI.mPage[1],
						mNPCUI.mIndex[1]);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				else
				{
					tstr = mMESSAGE.Return(809);
					tstr2 = mMESSAGE.Return(2752);
					CBOXUI::Set(95, tstr2, tstr);
				}
				return 1;
			case 95:
				if (mMYINFO.mMoveZoneState)
					return 1;
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_ENGRAVE_ITEM_SEND(
						mNPCUI.mPage[0],
						mNPCUI.mIndex[0],
						mNPCUI.mPage[1],
						mNPCUI.mIndex[1]);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				return 1;

			case 101:
				if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
				{
					mTRANSFER.T_IMPROVE_ITEM_SEND(1, mNPCUI.mPage[0], mNPCUI.mIndex[0], mNPCUI.mPage[1], mNPCUI.mIndex[1]); // 0 ~ 120
					mMYINFO.mNetworkLock = TRUE;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				return 1;

			case 102:
				if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
				{
					mTRANSFER.T_IMPROVE_ITEM_SEND(2, mNPCUI.mPage[0], mNPCUI.mIndex[0], mNPCUI.mPage[1], mNPCUI.mIndex[1]); // 0 ~ 120 Wing
					mMYINFO.mNetworkLock = TRUE;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				return 1;

			case 103:
				if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
				{
					mTRANSFER.T_IMPROVE_ITEM_SEND(3, mNPCUI.mPage[0], mNPCUI.mIndex[0], mNPCUI.mPage[1], mNPCUI.mIndex[1]); // 0 ~ 120
					mMYINFO.mNetworkLock = TRUE;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
				}
				return 1;

			default:
			LABEL_263:
				result = 1;
				break;
			}
		}
		else
		{
			result = 1;
		}
	}
	else if (mIsClick[1])
	{
		mIsClick[1] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[11], mX + 241, mY + 90, uX, uY))
		{
			CBOXUI::Off();
			switch (mSort)
			{
			case 3:
				mNPCUI.mSkillIndex = 0;
				result = 1;
				break;
			case 8:
				mTRANSFER.T_DUEL_ANSWER_SEND(1);
				result = 1;
				break;
			case 9:
				mTRANSFER.T_TRADE_ANSWER_SEND(1);
				result = 1;
				break;
			case 0xA:
				mTRANSFER.T_PARTY_ANSWER_SEND(1);
				result = 1;
				break;
			case 0xE:
				mTRANSFER.T_GUILD_ANSWER_SEND(1);
				result = 1;
				break;
			case 0x13:
				mTRANSFER.T_FRIEND_ANSWER_SEND(1);
				result = 1;
				break;
			case 0x14:
				mTRANSFER.T_TEACHER_ANSWER_SEND(1);
				result = 1;
				break;
			case 0x25:
			case 0x26:
			LABEL_101:
				mCHOICEUI.NetworkNO();
				mCHOICEUI.Off();
				result = 1;
				break;
			default:
				result = 1;
				break;
			}
		}
		else
		{
			result = 1;
		}
	}
	else
	{
		result = 1;
	}
	return result;
}

//BOOL CBOXUI::LBUTTONUP(int uX, int uY)
//{
//	int sX;
//	int sY;
//
//	if (!uAskMessageBoxState)
//		return FALSE;
//	sX = mMYINFO.mScreenXSize / 2;
//	uX = sX - GIMAGE2D::GetXSize( &mGDATA.mUI_MAIN[7] ) / 2;
//	sY = mMYINFO.mScreenYSize / 2;
//	uY = sY - GIMAGE2D::GetYSize( &mGDATA.mUI_MAIN[7] ) / 2;
//
//	if ( uAskMessageBoxButtonState[0] )
//	{
//		uAskMessageBoxButtonState[0] = 0;
//		if ( GIMAGE2D::CheckIn( &mGDATA.mUI_MAIN[8], uX + 165, uY + 90, uX, uY) )
//		{
//			CBOXUI::Off();
//			switch (uAskMessageBoxWorkSort)
//			{
//			case 36: // Improve Item Send Old
//				return TRUE;
//
//			case 101:
//				if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
//				{
//					mTRANSFER.T_IMPROVE_ITEM_SEND(1, mNPCUI.uInfo[0], mNPCUI.uInfo2[0], mNPCUI.uInfo[1], mNPCUI.uInfo2[1]); // 0 ~ 120
//					mMYINFO.mNetworkLock = TRUE;
//					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
//				}
//				return TRUE;
//
//			case 102:
//				if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
//				{
//					mTRANSFER.T_IMPROVE_ITEM_SEND(2, mNPCUI.uInfo[0], mNPCUI.uInfo2[0], mNPCUI.uInfo[1], mNPCUI.uInfo2[1]); // 0 ~ 120 Wing
//					mMYINFO.mNetworkLock = TRUE;
//					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
//				}
//				return TRUE;
//
//			case 103:
//				if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
//				{
//					mTRANSFER.T_IMPROVE_ITEM_SEND(3, mNPCUI.uInfo[0], mNPCUI.uInfo2[0], mNPCUI.uInfo[1], mNPCUI.uInfo2[1]); // 0 ~ 120
//					mMYINFO.mNetworkLock = TRUE;
//					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
//				}
//				return TRUE;
//
//
//			default:
//				uAskMessageBoxButtonState[0] = 1;
//				uAskMessageBoxState = 1;
//				return OCBOXUI_LBUTTONUP(self, uX, uY);
//			}
//		}
//	}
//	else if (uAskMessageBoxButtonState[1])
//	{
//		uAskMessageBoxButtonState[1] = 0;
//		CBOXUI::Off();
//		switch (uAskMessageBoxWorkSort)
//		{
//
//		default:
//			uAskMessageBoxButtonState[1] = 1;
//			uAskMessageBoxState = 1;
//			return OCBOXUI_LBUTTONUP(self, uX, uY);
//		}
//	}
//}

BOOL CBOXUI::RBUTTONDOWN(int uX, int uY)
{
	return mActive != 0;
}
BOOL CBOXUI::RBUTTONUP(int uX, int uY)
{
	return mActive != 0;
}
BOOL CBOXUI::KEYBOARD()
{
	return mActive != 0;
}

void CBOXUI::Draw(int uX, int uY)
{
	int sX, sY, tstrlen, i, j, k;
	char* tstr;
	char String[1000];
	int v17;

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
			tstrlen = mUTIL.GetStringLength(mMessage1);
			mUTIL.DrawFont2D(mMessage1, sX - tstrlen / 2, sY, 1);
		}
		else
		{
			sY = mY + 34;
			sX = mX + 234;
			tstrlen = mUTIL.GetStringLength(mMessage1);
			mUTIL.DrawFont2D(mMessage1, sX - tstrlen / 2, sY, 1);
			switch (mSort)
			{
			case 7:
			case 36:
			case 42:
			case 43:
			case 46:
			case 49:
			case 53:
			case 55:
			case 57:
			case 58:
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
			case 69:
			case 70:
			case 71:
			case 72:
			case 82:
				sY = mY + 50;
				sX = mX + 234;
				tstrlen = mUTIL.GetStringLength(mMessage2);
				mUTIL.DrawFont2D(mMessage2, sX - tstrlen / 2, sY, 2);
				break;
			default:
				sY = mY + 50;
				sX = mX + 234;
				tstrlen = mUTIL.GetStringLength(mMessage2);
				mUTIL.DrawFont2D(mMessage2, sX - tstrlen / 2, sY, 1);
				break;
			}
		}
		if (mIsClick[0])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], mX + 165, mY + 90);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[8], mX + 165, mY + 90, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[9], mX + 165, mY + 90);
		}
		else
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[8], mX + 165, mY + 90);
		}
		if (mIsClick[1])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[13], mX + 241, mY + 90);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[11], mX + 241, mY + 90, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[12], mX + 241, mY + 90);
		}
		else
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[11], mX + 241, mY + 90);
		}
		v17 = mSort;
		if (v17 == 4)
		{
			if (mAPP[0].hPresentElapsedSeconds - mUpdateTime > 60.0)
				CBOXUI::Off();
		}
		else if (v17 == 53 && mPLAY.mWorldInfo.mZone200TypeState == 3)
		{
			CBOXUI::Off();
		}
	}
}
BOOL CBOXUI::DrawForRollOver(int uX, int uY)
{
	return mActive != 0;
}





CAPSULEUI mCAPSULEUI;

static int Capsule_bIsClick[10];

BOOL CAPSULEUI::Init()
{
	mActive = 0;
	return TRUE;
}

void CAPSULEUI::DrawString(char* tString)
{
	if (mUTIL.GetStringLength(mMessage1) && mUTIL.GetStringLength(mMessage2))
	{
		sprintf(mMessage1, "%s", mMessage2);
		sprintf(mMessage2, "%s", tString);
	}
	else if (!mUTIL.GetStringLength(mMessage1) || mUTIL.GetStringLength(mMessage2))
	{
		if (!mUTIL.GetStringLength(mMessage1) && !mUTIL.GetStringLength(mMessage2))
			sprintf(mMessage1, "%s", tString);
	}
	else
	{
		sprintf(mMessage2, "%s", tString);
	}
}

void CAPSULEUI::Set()
{
	int i;

	mActive = 1;
	for (i = 0; i < 11; ++i)
		bIsClicked[i] = 0;
	mBuySort = 0;
	mBuyQuantity = 1;
	mAnimationFrame = 0;
	memset(mMessage1, 0, sizeof(mMessage1));
	memset(mMessage2, 0, sizeof(mMessage2));
}

void CAPSULEUI::InitForEnterZone()
{
	mActive = 0;
	mRewardPoolActive = 0;
}

void CAPSULEUI::Off()
{
	if (mActive)
	{
		mActive = 0;
		bIsClicked[0] = 0;
	}
}

BOOL CAPSULEUI::LBUTTONDOWN(int uX, int uY)
{
	int sX;
	int sY;
	char* tString;
	int mX;
	int mY;

	if (!mActive)
	{
		return FALSE;
	}
	sX = mMYINFO.mScreenXSize / 2;
	mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3634]) / 2;
	sY = mMYINFO.mScreenYSize / 2;
	mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3634]) / 2;

	if (bIsClicked[0])
	{
		mX = mMYINFO.mScreenXSize / 2;
		mX = mX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4015]) / 2;
		mY = mMYINFO.mScreenYSize / 2;
		mY = mY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[4015]) / 2;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1600], mX + 401, mY + 413, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			bIsClicked[11] = 1;
			return TRUE;
		}
	}
	else
	{
		mX = mMYINFO.mScreenXSize / 2;
		mX = mX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3634]) / 2;
		mY = mMYINFO.mScreenYSize / 2;
		mY = mY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3634]) / 2;

		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4013], mX + 504, mY + 58, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			bIsClicked[1] = 1;
			return TRUE;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 504, mY + 303, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			bIsClicked[2] = 1;
			return TRUE;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 504, mY + 325, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			bIsClicked[3] = 1;
			return TRUE;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 504, mY + 347, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			bIsClicked[12] = 1;
			return TRUE;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 504, mY + 369, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			bIsClicked[13] = 1;
			return TRUE;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 504, mY + 447, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			bIsClicked[4] = 1;
			return TRUE;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 563, mY + 447, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			bIsClicked[5] = 1;
			return TRUE;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 622, mY + 447, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			bIsClicked[6] = 1;
			return TRUE;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 504, mY + 471, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			bIsClicked[7] = 1;
			return TRUE;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 563, mY + 471, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			bIsClicked[8] = 1;
			return TRUE;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3647], mX + 581, mY + 549, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			bIsClicked[9] = 1;
			return TRUE;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3649], mX + 639, mY + 549, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			bIsClicked[10] = 1;
			return TRUE;
		}
	}
	return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3634], mX, mY, uX, uY);
}

BOOL CAPSULEUI::LBUTTONUP(int uX, int uY)
{
	int sX;
	int sY;
	char* tString;
	char* tString2;
	char tBuffer[1000];

	if (!mActive)
	{
		return FALSE;
	}
	if (bIsClicked[0] == 1)
	{
		sX = mMYINFO.mScreenXSize / 2;
		mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4015]) / 2;
		sY = mMYINFO.mScreenYSize / 2;
		mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[4015]) / 2;
		if (bIsClicked[11])
		{
			bIsClicked[11] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1600], mX + 401, mY + 413, uX, uY))
			{
				bIsClicked[0] = 0;
			}
			return TRUE;
		}
		return FALSE;
	}
	sX = mMYINFO.mScreenXSize / 2;
	mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3634]) / 2;
	sY = mMYINFO.mScreenYSize / 2;
	mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3634]) / 2;

	if (bIsClicked[1])
	{
		bIsClicked[1] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4014], mX + 504, mY + 74, uX, uY))
			bIsClicked[0] = 1;
		return TRUE;
	}
	else if (bIsClicked[2])
	{
		bIsClicked[2] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 504, mY + 303, uX, uY))
			mBuySort = 1;
		return TRUE;
	}
	else if (bIsClicked[3])
	{
		bIsClicked[3] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 504, mY + 325, uX, uY))
			mBuySort = 2;
		return TRUE;
	}
	else if (bIsClicked[12])
	{
		bIsClicked[12] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 504, mY + 347, uX, uY))
			mBuySort = 3;
		return TRUE;
	}
	else if (bIsClicked[13])
	{
		bIsClicked[13] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 504, mY + 369, uX, uY))
			mBuySort = 4;
		return TRUE;
	}
	else if (bIsClicked[4])
	{
		bIsClicked[4] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 504, mY + 447, uX, uY))
			mBuyQuantity = 1;
		return TRUE;
	}
	else if (bIsClicked[5])
	{
		bIsClicked[5] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 563, mY + 447, uX, uY))
			mBuyQuantity = 2;
		return TRUE;
	}
	else if (bIsClicked[6])
	{
		bIsClicked[6] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 622, mY + 447, uX, uY))
			mBuyQuantity = 3;
		return TRUE;
	}
	else if (bIsClicked[7])
	{
		bIsClicked[7] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 504, mY + 471, uX, uY))
			mBuyQuantity = 4;
		return TRUE;
	}
	else if (bIsClicked[8])
	{
		bIsClicked[8] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[331], mX + 563, mY + 471, uX, uY))
		{
			mBuyQuantity = 5;
		}
		return TRUE;
	}
	else if (bIsClicked[9])
	{
		bIsClicked[9] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3647], mX + 581, mY + 549, uX, uY))
		{
			if (mBuySort <= 0 || mBuySort > 5)
			{
				tString = mMESSAGE.Return(2176);
				mBASICUI.Insert1(tString, 15);
				DrawString(tString);
				return TRUE;
			}
			if (mBuyQuantity <= 0 || mBuyQuantity > 5)
			{
				tString = mMESSAGE.Return(2177);
				mBASICUI.Insert1(tString, 15);
				DrawString(tString);
				return TRUE;
			}
			if (mCAPSULEUI.mBuyNum != 0)
			{
				return TRUE;
			}
			if (mBuySort == 1)
			{
				if (mMYINFO.mAvatarInfo.aCapsuleMallPoints < 2000 * mBuyQuantity)
				{
					tString = mMESSAGE.Return(2227);
					mBASICUI.Insert1(tString, 15);
					DrawString(tString);
					return TRUE;
				}
			}
			else if (mBuySort == 2)
			{
				if (mMYINFO.mAvatarInfo.aCapsuleOnlineTime < 4000 * mBuyQuantity)
				{
					tString = mMESSAGE.Return(2174);
					mBASICUI.Insert1(tString, 15);
					DrawString(tString);
					return TRUE;
				}
			}
			else if (mBuySort == 3)
			{
				if (mMYINFO.mAvatarInfo.aCapsulePVPPoint < 100 * mBuyQuantity)
				{
					tString = mMESSAGE.Return(2227);
					mBASICUI.Insert1(tString, 15);
					DrawString(tString);
					return TRUE;
				}
			}
			else if (mBuySort == 4)
			{
				if (mMYINFO.mAvatarInfo.aSoulCostumeCapsulePoint < 80 * mBuyQuantity)
				{
					tString = mMESSAGE.Return(2897);
					tString2 = mMESSAGE.Return(2898);
					sprintf(tBuffer, tString2, tString);
					mBASICUI.Insert1(tBuffer, 15);
					DrawString(tBuffer);
					return TRUE;
				}
			}
			tString = mMESSAGE.Return(687);
			mCBOXUI.Set(73, tString, "");
		}
		return TRUE;
	}
	else if (bIsClicked[10])
	{
		bIsClicked[10] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3649], mX + 639, mY + 549, uX, uY))
		{
			Off();
		}
		return TRUE;
	}
}

int CAPSULEUI::RBUTTONDOWN(int uX, int uY)
{
	return 0;
}
int CAPSULEUI::RBUTTONUP(int uX, int uY)
{
	return 0;
}
int CAPSULEUI::KEYBOARD()
{
	return 0;
}

void CAPSULEUI::Draw(int uX, int uY)
{
	int sX, sY;
	int tDrawX;
	int tDrawY;
	char tBuffer[1000];

	if (mActive)
	{
		mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3634]) / 2;
		mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3634]) / 2;
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[3634], mX, mY);

		if (mAnimationFrame > 23)
		{
			mAnimationFrame = 0;
		}
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[mAnimationFrame / 2 + 3635], mX + 51, mY + 24);
		mAnimationFrame++;

		if (bIsClicked[1])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[4014], mX + 504, mY + 58);

		if (mBuySort > 0)
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[331], mX + 504, mY + 22 * (mBuySort - 1) + 303);

		if (mBuySort != 5)
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[332], mX + 504, mY + 22 * (5 - 1) + 303);

		if (mBuyQuantity > 0 && mBuyQuantity < 4)
		{
			sX = 59 * (mBuyQuantity - 1) + 504;
			sY = 447;
		}
		if (mBuyQuantity > 3 && mBuyQuantity < 6)
		{
			sX = 59 * (mBuyQuantity - 4) + 504;
			sY = 471;
		}
		if (mBuyQuantity > 0)
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[331], mX + sX, mY + sY);
		if (bIsClicked[9])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3648], mX + 581, mY + 549);
		if (bIsClicked[10])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3650], mX + 639, mY + 549);

		sprintf(tBuffer, "%d", mMYINFO.mAvatarInfo.aCapsuleMallPoints);
		tDrawX = mX + 179;
		tDrawY = mY + 523;
		mUTIL.DrawFont2D(tBuffer, tDrawX - mUTIL.GetStringLength(tBuffer), tDrawY, 3);

		sprintf(tBuffer, "%d", mMYINFO.mAvatarInfo.aCapsuleOnlineTime);
		tDrawX = mX + 345;
		tDrawY = mY + 523;
		mUTIL.DrawFont2D(tBuffer, tDrawX - mUTIL.GetStringLength(tBuffer), tDrawY, 3);

		sprintf(tBuffer, "%d", mMYINFO.mAvatarInfo.aCapsulePVPPoint);
		tDrawX = mX + 511;
		tDrawY = mY + 523;
		mUTIL.DrawFont2D(tBuffer, tDrawX - mUTIL.GetStringLength(tBuffer), tDrawY, 3);

		sprintf(tBuffer, "%d", mMYINFO.mAvatarInfo.aSoulCostumeCapsulePoint);
		tDrawX = mX + 677;
		tDrawY = mY + 523;
		mUTIL.DrawFont2D(tBuffer, tDrawX - mUTIL.GetStringLength(tBuffer), tDrawY, 3);

		sprintf(tBuffer, "%s", mMessage1);
		tDrawX = mX + 245;
		tDrawY = mY + 473;
		mUTIL.DrawFont2D(tBuffer, tDrawX - mUTIL.GetStringLength(tBuffer) / 2, tDrawY, 3);

		sprintf(tBuffer, "%s", mMessage2);
		tDrawX = mX + 245;
		tDrawY = mY + 491;
		mUTIL.DrawFont2D(tBuffer, tDrawX - mUTIL.GetStringLength(tBuffer) / 2, tDrawY, 3);

		/*mUTIL.DrawFont2D("- UPDATED CAPSULE PRICING -", uX + 35, uY + 540, 3);
		mUTIL.DrawFont2D("Paid Point: 1000", uX + 35, uY + 555, 3);
		mUTIL.DrawFont2D("Online Time: 1000", uX + 150, uY + 555, 3);
		mUTIL.DrawFont2D("PVP Point: UNRELEASED", uX + 265, uY + 555, 3);
		mUTIL.DrawFont2D("Soul Point: UNRELEASED", uX + 415, uY + 555, 3);*/

		if (bIsClicked[0] == 1)
		{
			mX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[4015]) / 2;
			mY = mMYINFO.mScreenYSize / 2 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[4015]) / 2;
			if (mBuySort == 3)
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[4227], mX, mY);
			}
			else if (mBuySort == 4)
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[4441], mX, mY);
			}
			else
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[4015], mX, mY);
			}
			if (bIsClicked[11])
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[1601], mX + 401, mY + 413);
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1600], mX + 401, mY + 413, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[1600], mX + 401, mY + 413);
			}
		}
	}
}

BOOL CAPSULEUI::DrawForRollOver(int uX, int uY)
{
	BOOL result;
	int v4;
	int v5;

	if (!mActive)
	{
		return 0;
	}
	v4 = mMYINFO.mScreenXSize / 2;
	mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[3634]) / 2;
	v5 = mMYINFO.mScreenYSize / 2;
	mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[3634]) / 2;

	if (!mRewardPoolActive && !bIsClicked[0] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4013], mX + 504, mY + 74, uX, uY))
	{
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[4013], mX + 504, mY + 74);
		return TRUE;
	}
	if (!bIsClicked[8] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3647], mX + 581, mY + 549, uX, uY))
	{
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[3647], mX + 581, mY + 549);
		return TRUE;
	}
	if (!bIsClicked[9] && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3649], mX + 639, mY + 549, uX, uY))
	{
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[3649], mX + 639, mY + 549);
		return TRUE;
	}
	return FALSE;
}





STATUSUI mSTATUSUI;

DWORD tPostClickTime;
int tContinuous = 0;

BOOL STATUSUI::LBUTTONDOWN(int uX, int uY)
{
	if (!mActive)
	{
		return FALSE;
	}
	int sX;
	int sY;

	mMYINFO.AdjustScreenCoord(297, 115, 105, &mX, &mY);
	if (mMYINFO.mAvatarInfo.aStateBonusPoint > 0)
	{
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 52, mY + 109, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			tPostClickTime = GetTickCount();
			mIsClick[0] = 1;
			return TRUE;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 148, mY + 109, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			tPostClickTime = GetTickCount();
			mIsClick[1] = 1;
			return TRUE;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 52, mY + 131, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			tPostClickTime = GetTickCount();
			mIsClick[2] = 1;
			return TRUE;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 148, mY + 131, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			tPostClickTime = GetTickCount();
			mIsClick[3] = 1;
			return TRUE;
		}
	}
	if (mMYINFO.mAvatarInfo.aStateBonusPoint < 5)
	{
		goto END;
	}
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2420], mX + 67, mY + 109, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		tPostClickTime = GetTickCount();
		mIsClick[4] = 1;
		return TRUE;
	}
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2420], mX + 163, mY + 109, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		tPostClickTime = GetTickCount();
		mIsClick[5] = 1;
		return TRUE;
	}
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2420], mX + 67, mY + 131, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		tPostClickTime = GetTickCount();
		mIsClick[6] = 1;
		return TRUE;
	}
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2420], mX + 163, mY + 131, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		tPostClickTime = GetTickCount();
		mIsClick[7] = 1;
		return TRUE;
	}
	else
	{
	END:
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[8] = 1;
			return TRUE;
		}
		else
		{
			return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[297], mX, mY, uX, uY);
		}
	}
}

BOOL STATUSUI::LBUTTONUP(int uX, int uY)
{
	if (!mActive)
	{
		return FALSE;
	}

	int sX;
	int sY;

	mMYINFO.AdjustScreenCoord(297, 115, 105, &mX, &mY);
	if (mIsClick[0])
	{
		mIsClick[0] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 52, mY + 109, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (tContinuous == 0)
				{
					mPLAY.PROCESS_DATA_206_SEND(1);
					mMYINFO.mNetworkLock = TRUE;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mMYINFO.mAvatarInfo.aStateBonusPoint--;
				}
				tContinuous = 0;
			}
		}
		return TRUE;
	}
	else if (mIsClick[1])
	{
		mIsClick[1] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 148, mY + 109, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (tContinuous == 0)
				{
					mPLAY.PROCESS_DATA_206_SEND(2);
					mMYINFO.mNetworkLock = TRUE;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mMYINFO.mAvatarInfo.aStateBonusPoint--;
				}
				tContinuous = 0;
			}
		}
		return TRUE;
	}
	else if (mIsClick[2])
	{
		mIsClick[2] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 52, mY + 131, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (tContinuous == 0)
				{
					mPLAY.PROCESS_DATA_206_SEND(3);
					mMYINFO.mNetworkLock = TRUE;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mMYINFO.mAvatarInfo.aStateBonusPoint--;
				}
				tContinuous = 0;
			}
		}
		return TRUE;
	}
	else if (mIsClick[3])
	{
		mIsClick[3] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 148, mY + 131, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (tContinuous == 0)
				{
					mPLAY.PROCESS_DATA_206_SEND(4);
					mMYINFO.mNetworkLock = TRUE;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mMYINFO.mAvatarInfo.aStateBonusPoint--;
				}
				tContinuous = 0;
			}
		}
		return TRUE;
	}
	else if (mIsClick[4])
	{
		mIsClick[4] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 67, mY + 109, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (tContinuous == 0)
				{
					mPLAY.PROCESS_DATA_206_SEND(5);
					mMYINFO.mNetworkLock = TRUE;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mMYINFO.mAvatarInfo.aStateBonusPoint -= 5;
				}
				tContinuous = 0;
			}
		}
		return TRUE;
	}
	else if (mIsClick[5])
	{
		mIsClick[5] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 163, mY + 109, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (tContinuous == 0)
				{
					mPLAY.PROCESS_DATA_206_SEND(6);
					mMYINFO.mNetworkLock = TRUE;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mMYINFO.mAvatarInfo.aStateBonusPoint -= 5;
				}
				tContinuous = 0;
			}
		}
		return TRUE;
	}
	else if (mIsClick[6])
	{
		mIsClick[6] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 67, mY + 131, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (tContinuous == 0)
				{
					mPLAY.PROCESS_DATA_206_SEND(7);
					mMYINFO.mNetworkLock = TRUE;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mMYINFO.mAvatarInfo.aStateBonusPoint -= 5;
				}
				tContinuous = 0;
			}
		}
		return TRUE;
	}
	else if (mIsClick[7])
	{
		mIsClick[7] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 163, mY + 131, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (tContinuous == 0)
				{
					mPLAY.PROCESS_DATA_206_SEND(8);
					mMYINFO.mNetworkLock = TRUE;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mMYINFO.mAvatarInfo.aStateBonusPoint -= 5;
				}
				tContinuous = 0;
			}
		}
		return TRUE;
	}
	else if (mIsClick[8])
	{
		mIsClick[8] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6, uX, uY))
		{
			Off();
			return TRUE;
		}
	}
	return FALSE;
}

int STATUSUI::RBUTTONDOWN(int uX, int uY)
{
	return 0;
}
int STATUSUI::RBUTTONUP(int uX, int uY)
{
	return 0;
}

int STATUSUI::KEYBOARD()
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
			return 0;
		}

		if (mGXD.mKeyboardBufferedData[i].dwOfs == 46)
		{
			STATUSUI::Off();
			return 1;
		}
		return 0;
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

		if (mGXD.mKeyboardBufferedData[j].dwOfs == 46)
		{
			mUI.Off(0);
			STATUSUI::Set();
			return 1;
		}
		return 0;
	}

	return 0;
}

void STATUSUI::Draw(int uX, int uY)
{
	int sX, sY, tstrlen, i, j, k;
	char* tstr;
	char Buffer[1000];
	int tValue;

	if (!mActive)
	{
		return;
	}

	if (mIsClick[0])
	{
		if (GetTickCount() - tPostClickTime > 1000)
		{
			tContinuous = 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 52, mY + 109, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (mMYINFO.mAvatarInfo.aStateBonusPoint > 0)
				{
					if (tContinuous == 1)
					{
						mPLAY.PROCESS_DATA_206_SEND(1);
						mMYINFO.mNetworkLock = TRUE;
						mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
						mMYINFO.mAvatarInfo.aStateBonusPoint--;
					}
				}
			}
		}
	}
	else if (mIsClick[1])
	{
		if (GetTickCount() - tPostClickTime > 1000)
		{
			tContinuous = 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 148, mY + 109, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (mMYINFO.mAvatarInfo.aStateBonusPoint > 0)
				{
					if (tContinuous == 1)
					{
						mPLAY.PROCESS_DATA_206_SEND(2);
						mMYINFO.mNetworkLock = TRUE;
						mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
						mMYINFO.mAvatarInfo.aStateBonusPoint--;
					}
				}
			}
		}
	}
	else if (mIsClick[2])
	{
		if (GetTickCount() - tPostClickTime > 1000)
		{
			tContinuous = 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 52, mY + 131, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (mMYINFO.mAvatarInfo.aStateBonusPoint > 0)
				{
					if (tContinuous == 1)
					{
						mPLAY.PROCESS_DATA_206_SEND(3);
						mMYINFO.mNetworkLock = TRUE;
						mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
						mMYINFO.mAvatarInfo.aStateBonusPoint--;
					}
				}
			}
		}
	}
	else if (mIsClick[3])
	{
		if (GetTickCount() - tPostClickTime > 1000)
		{
			tContinuous = 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 148, mY + 131, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (mMYINFO.mAvatarInfo.aStateBonusPoint > 0)
				{
					if (tContinuous == 1)
					{
						mPLAY.PROCESS_DATA_206_SEND(4);
						mMYINFO.mNetworkLock = TRUE;
						mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
						mMYINFO.mAvatarInfo.aStateBonusPoint--;
					}
				}
			}
		}
	}
	else if (mIsClick[4])
	{
		if (GetTickCount() - tPostClickTime > 1000)
		{
			tContinuous = 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 67, mY + 109, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (mMYINFO.mAvatarInfo.aStateBonusPoint >= 5)
				{
					if (tContinuous == 1)
					{
						mPLAY.PROCESS_DATA_206_SEND(5);
						mMYINFO.mNetworkLock = TRUE;
						mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
						mMYINFO.mAvatarInfo.aStateBonusPoint -= 5;
					}
				}
			}
		}
	}
	else if (mIsClick[5])
	{
		if (GetTickCount() - tPostClickTime > 1000)
		{
			tContinuous = 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 163, mY + 109, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (mMYINFO.mAvatarInfo.aStateBonusPoint >= 5)
				{
					if (tContinuous == 1)
					{
						mPLAY.PROCESS_DATA_206_SEND(6);
						mMYINFO.mNetworkLock = TRUE;
						mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
						mMYINFO.mAvatarInfo.aStateBonusPoint -= 5;
					}
				}
			}
		}
	}
	else if (mIsClick[6])
	{
		if (GetTickCount() - tPostClickTime > 1000)
		{
			tContinuous = 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 67, mY + 131, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (mMYINFO.mAvatarInfo.aStateBonusPoint >= 5)
				{
					if (tContinuous == 1)
					{
						mPLAY.PROCESS_DATA_206_SEND(7);
						mMYINFO.mNetworkLock = TRUE;
						mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
						mMYINFO.mAvatarInfo.aStateBonusPoint -= 5;
					}
				}
			}
		}
	}
	else if (mIsClick[7])
	{
		if (GetTickCount() - tPostClickTime > 1000)
		{
			tContinuous = 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[315], mX + 163, mY + 131, uX, uY))
		{
			if (!mMYINFO.mNetworkLock && !mMYINFO.mMoveZoneState)
			{
				if (mMYINFO.mAvatarInfo.aStateBonusPoint >= 5)
				{
					if (tContinuous == 1)
					{
						mPLAY.PROCESS_DATA_206_SEND(8);
						mMYINFO.mNetworkLock = TRUE;
						mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
						mMYINFO.mAvatarInfo.aStateBonusPoint -= 5;
					}
				}
			}
		}
	}

	mMYINFO.AdjustScreenCoord(297, 115, 105, &mX, &mY);
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[297], mX, mY, uX, uY))
	{
		mPOINTER.Set(0);
	}
	if (mMYINFO.mAvatarInfo.aLevel2 >= 1)
	{
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[2728], mX, mY);
	}
	else if (mMYINFO.mAvatarInfo.aLevel1 >= 113)
	{
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[1045], mX, mY);
	}
	else
	{
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[297], mX, mY);
	}
	if (mMYINFO.mAvatarInfo.aTitle >= 1)
	{
		tstr = mUTIL.ReturnCharTitleName(mMYINFO.iTribeCallType, mMYINFO.mAvatarInfo.aTitle);
		sprintf(Buffer, "%s(%s)", mMYINFO.mAvatarInfo.aName, tstr);
	}
	else
	{
		strcpy(Buffer, mMYINFO.mAvatarInfo.aName);
	}
	sY = mY + 43;
	sX = mX + 154;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 1);
	if (mMYINFO.mAvatarInfo.aLevel2 >= 1)
	{
		sprintf(Buffer, "%d(+%d)", mMYINFO.mAvatarInfo.aLevel2, mMYINFO.mAvatarInfo.aUpgradeValue);
	}
	else if (mMYINFO.mAvatarInfo.aLevel1 >= 113)
	{
		sprintf(Buffer, "%d(+%d)", mMYINFO.mAvatarInfo.aLevel1 - 112, mMYINFO.mAvatarInfo.aUpgradeValue);
	}
	else
	{
		sprintf(Buffer, "%d(+%d)", mMYINFO.mAvatarInfo.aLevel1, mMYINFO.mAvatarInfo.aUpgradeValue);
	}
	sY = mY + 65;
	sX = mX + 154;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 1);
	sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aKillOtherTribe);
	sY = mY + 87;
	sX = mX + 154;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 1);
	tValue = mFACTOR.GetStrength();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 110;
	sX = mX + 107;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetWisdom();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 110;
	sX = mX + 203;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetVitality();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 132;
	sX = mX + 107;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetKi();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 132;
	sX = mX + 203;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aStateBonusPoint);
	sY = mY + 155;
	sX = mX + 203;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetMaxLife();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 177;
	sX = mX + 107;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetMaxMana();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 177;
	sX = mX + 203;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetAttackPower();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 199;
	sX = mX + 107;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetDefensePower();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 199;
	sX = mX + 203;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetAttackSuccess();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 221;
	sX = mX + 107;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetAttackBlock();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 221;
	sX = mX + 203;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetCritical();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 243;
	sX = mX + 107;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetLuck();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 243;
	sX = mX + 203;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetCriticalDefense();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 265;
	sX = mX + 203;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetElementAttackPower();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 414;
	sX = mX + 107;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetElementDefensePower();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 436;
	sX = mX + 107;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	tValue = mFACTOR.GetSpiritDamage();
	sprintf(Buffer, "%d", tValue);
	sY = mY + 414;
	sX = mX + 203;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	if (mMYINFO.uUserSort <= 0)
	{
		tValue = mFACTOR.GetSpiritShield();
		sprintf(Buffer, "%d", tValue);
	}
	else
	{
		tValue = mFACTOR.GetSpiritShield();
		sprintf(Buffer, "%d / %d", mPLAY.mAVATAR_OBJECT[0].mDATA.aHornVeinShield, tValue);
	}
	sY = mY + 436;
	sX = mX + 203;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, 1);
	if (mMYINFO.mAvatarInfo.aStateBonusPoint > 0)
	{
		if (mIsClick[0])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[316], mX + 52, mY + 109);
		else
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[315], mX + 52, mY + 109);
		if (mIsClick[1])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[316], mX + 148, mY + 109);
		else
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[315], mX + 148, mY + 109);
		if (mIsClick[2])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[316], mX + 52, mY + 131);
		else
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[315], mX + 52, mY + 131);
		if (mIsClick[3])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[316], mX + 148, mY + 131);
		else
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[315], mX + 148, mY + 131);
	}
	if (mMYINFO.mAvatarInfo.aStateBonusPoint >= 5)
	{
		if (mIsClick[4])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2421], mX + 67, mY + 109);
		else
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2420], mX + 67, mY + 109);
		if (mIsClick[5])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2421], mX + 163, mY + 109);
		else
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2420], mX + 163, mY + 109);
		if (mIsClick[6])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2421], mX + 67, mY + 131);
		else
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2420], mX + 67, mY + 131);
		if (mIsClick[7])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2421], mX + 163, mY + 131);
		else
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2420], mX + 163, mY + 131);
	}
	if (mIsClick[8])
	{
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 8, mY + 6);
	}

}

BOOL STATUSUI::Init()
{
	mActive = 0;
	return TRUE;
}

void STATUSUI::Set()
{
	int i;

	mActive = 1;
	for (i = 0; i < 9; ++i)
		mIsClick[i] = 0;
}

void STATUSUI::Off()
{
	if (mActive)
		mActive = 0;
}

void STATUSUI::InitForEnterZone()
{
	mActive = 0;
}

int STATUSUI::DrawForRollOver(int uX, int uY)
{
	return 0;
}





TRIBEVOTEUI mTRIBEVOTEUI;

BOOL TRIBEVOTEUI::Init()
{
	mActive = 0;
	return TRUE;
}

BOOL TRIBEVOTEUI::LBUTTONDOWN(int uX, int uY)
{
	int v4;
	int v5;
	int i;

	if (!mActive)
	{
		return 0;
	}
	v4 = mMYINFO.mScreenXSize / 2;
	mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2334]) / 2;
	v5 = mMYINFO.mScreenYSize / 2;
	mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2334]) / 2;
	for (i = 0; i < 10; ++i)
	{
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[594], mX + 318, mY + 37 * i + 62, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[i] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2342], mX + 456, mY + 37 * i + 62, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[i + 20] = 1;
			return 1;
		}
	}
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2386], mX + 593, mY + 435, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[30] = 1;
		return 1;
	}
	return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2334], mX, mY, uX, uY);

}
int TRIBEVOTEUI::LBUTTONUP(int uX, int uY)
{
	int sX;
	int sY;
	int index01;
	int index02;
	int tRegisterIndex = -1;
	int tVoteIndex = -1;

	if (!mActive)
	{
		return FALSE;
	}
	if (mMAIN.mWorldIndex == 40)
	{
		mBASICUI.Insert1(mMESSAGE.Return(110), mFONTCOLOR.mData[44]);
		return FALSE;
	}
	sX = mMYINFO.mScreenXSize / 2;
	mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2334]) / 2;
	sY = mMYINFO.mScreenYSize / 2;
	mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2334]) / 2;

	for (index01 = 0; index01 < 10; index01++)
	{
		// Faction Leader Register
		if (mIsClick[index01])
		{
			mIsClick[index01] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[594], mX + 318, mY + 37 * index01 + 62, uX, uY))
			{
				if (mPLAY.mWorldInfo.mTribeVoteState[mMYINFO.mAvatarInfo.aTribe] != 1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(747), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (mMYINFO.mAvatarInfo.aLevel2 < 4)
				{
					mBASICUI.Insert1(mMESSAGE.Return(1642), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1000)
				{
					mBASICUI.Insert1(mMESSAGE.Return(749), mFONTCOLOR.mData[44]);
					return 1;
				}
				tRegisterIndex = -1;
				for (index02 = 0; index02 < 10; index02++)
				{
					if (!strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][index02], mMYINFO.mAvatarInfo.aName))
					{
						mBASICUI.Insert1(mMESSAGE.Return(750), mFONTCOLOR.mData[44]);
						return 1;
					}
					if (!strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][index02], "") && tRegisterIndex == -1)
					{
						tRegisterIndex = index02;
					}
				}
				if (!strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][index01], ""))
				{
					mSelectIndex = index01;
					mCBOXUI.Set(30, mMESSAGE.Return(752), "");
					return 1;
				}
				if (tRegisterIndex != -1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(1701), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (mPLAY.mTribeInfo.mTribeVoteKillOtherTribe[mMYINFO.mAvatarInfo.aTribe][index01] < mMYINFO.mAvatarInfo.aKillOtherTribe)
				{
					mSelectIndex = index01;
					mCBOXUI.Set(30, mMESSAGE.Return(752), "");
					return 1;
				}
				mBASICUI.Insert1(mMESSAGE.Return(751), mFONTCOLOR.mData[44]);
				return 1;
			}
		}

		// Faction Leader Vote
		if (mIsClick[index01 + 20])
		{
			mIsClick[index01 + 20] = 0;
			if (mMAIN.mWorldIndex == 40)
			{
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2342], mX + 456, mY + 37 * index01 + 62, uX, uY))
			{
				if (mPLAY.mWorldInfo.mTribeVoteState[mMYINFO.mAvatarInfo.aTribe] == 2)
				{
					if (!strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][index01], ""))
					{
						mBASICUI.Insert1(mMESSAGE.Return(756), mFONTCOLOR.mData[44]);
					}
					else
					{
						mSelectIndex = index01;
						mCBOXUI.Set(32, mMESSAGE.Return(757), "");
					}
					return 1;
				}
				mBASICUI.Insert1(mMESSAGE.Return(755), mFONTCOLOR.mData[44]);
				return 1;
			}
		}
	}

	if (mIsClick[30])
	{
		mIsClick[30] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2386], mX + 593, mY + 435, uX, uY))
		{
			TRIBEVOTEUI::Off();
		}
		return 1;
	}

	return FALSE;


	//if (!mActive)
	//{
	//	return 0;
	//}
	//if (mMAIN.mWorldIndex == 40)
	//{
	//	v18 = mFONTCOLOR.mData[44];
	//	v4 = mMESSAGE.Return( 110);
	//	mBASICUI.Insert1(v4, v18);
	//	result = 0;
	//}
	//else
	//{
	//	v5 = mMYINFO.mScreenXSize / 2;
	//	uX = v5 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2334]) / 2;
	//	v6 = mMYINFO.mScreenYSize / 2;
	//	uY = v6 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2334]) / 2;
	//	for (i = 0; ; ++i)
	//	{
	//		if (i >= 10)
	//		{
	//			if (!bIsClicked[30])
	//				return 0;
	//			bIsClicked[30] = 0;
	//			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2386], uX + 593, uY + 435, uX, uY))
	//				TRIBEVOTEUI::Off();
	//			return 1;
	//		}
	//		if (bIsClicked[i])
	//			break;
	//		if (bIsClicked[i + 20])
	//		{
	//			bIsClicked[i + 20] = 0;
	//			if (mMAIN.mWorldIndex == 40)
	//				return 1;
	//			if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2342], uX + 456, uY + 37 * i + 62, uX, uY))
	//				return 1;
	//			if (mPLAY.mWorldInfo.mTribeVoteState[mMYINFO.mAvatarInfo.aTribe] == 2)
	//			{
	//				//if (mMYINFO.mAvatarInfo.aRebirth >= 6)
	//				//{
	//					if (!strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][i], ""))
	//					{
	//						v27 = mFONTCOLOR.mData[44];
	//						v16 = mMESSAGE.Return( 756);
	//						mBASICUI.Insert1(v16, v27);
	//					}
	//					else
	//					{
	//						mSelectIndex = i;
	//						v17 = mMESSAGE.Return( 757);
	//						CBOXUI::Set(32, v17, "");
	//					}
	//					result = 1;
	//				//}
	//				/*else
	//				{
	//					v26 = mFONTCOLOR.mData[44];
	//					v15 = mMESSAGE.Return( 2308);
	//					mBASICUI.Insert1(v15, v26);
	//					result = 1;
	//				}*/
	//			}
	//			else
	//			{
	//				v25 = mFONTCOLOR.mData[44];
	//				v14 = mMESSAGE.Return( 755);
	//				mBASICUI.Insert1(v14, v25);
	//				result = 1;
	//			}
	//			return result;
	//		}
	//	}
	//	bIsClicked[i] = 0;
	//	if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[594], uX + 318, uY + 37 * i + 62, uX, uY))
	//		return 1;
	//	if (mPLAY.mWorldInfo.mTribeVoteState[mMYINFO.mAvatarInfo.aTribe] != 1)
	//	{
	//		v19 = mFONTCOLOR.mData[44];
	//		v7 = mMESSAGE.Return( 747);
	//		mBASICUI.Insert1(v7, v19);
	//		return 1;
	//	}
	//	/*if (mMYINFO.mAvatarInfo.aRebirth < 6)
	//	{
	//		v20 = mFONTCOLOR.mData[44];
	//		v8 = mMESSAGE.Return( 1642);
	//		mBASICUI.Insert1(v8, v20);
	//		return 1;
	//	}*/
	//	if (mMYINFO.mAvatarInfo.aKillOtherTribe < 1000)
	//	{
	//		v21 = mFONTCOLOR.mData[44];
	//		v9 = mMESSAGE.Return( 749);
	//		mBASICUI.Insert1(v9, v21);
	//		return 1;
	//	}
	//	v29 = -1;
	//	for (j = 0; j < 10; ++j)
	//	{
	//		if (!strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][j], mMYINFO.mAvatarInfo.aName))
	//		{
	//			v22 = mFONTCOLOR.mData[44];
	//			v10 = mMESSAGE.Return( 750);
	//			mBASICUI.Insert1(v10, v22);
	//			return 1;
	//		}
	//		if (!strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][j], "") && v29 == -1)
	//			v29 = j;
	//	}
	//	if (!strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][i], ""))
	//		goto LABEL_29;
	//	if (v29 != -1)
	//	{
	//		v23 = mFONTCOLOR.mData[44];
	//		v11 = mMESSAGE.Return( 1701);
	//		mBASICUI.Insert1(v11, v23);
	//		return 1;
	//	}
	//	if (mPLAY.mTribeInfo.mTribeVoteKillOtherTribe[mMYINFO.mAvatarInfo.aTribe][i] < mMYINFO.mAvatarInfo.aKillOtherTribe)
	//	{
	//	LABEL_29:
	//		mSelectIndex = i;
	//		v13 = mMESSAGE.Return( 752);
	//		CBOXUI::Set(30, v13, "");
	//		result  = 1;
	//	}
	//	else
	//	{
	//		v24 = mFONTCOLOR.mData[44];
	//		v12 = mMESSAGE.Return( 751);
	//		mBASICUI.Insert1(v12, v24);
	//		result = 1;
	//	}
	//}
	//return result;
}

int TRIBEVOTEUI::RBUTTONDOWN(int uX, int uY)
{
	return 0;
}
int TRIBEVOTEUI::RBUTTONUP(int uX, int uY)
{
	return 0;
}
int TRIBEVOTEUI::KEYBOARD()
{
	return 0;
}
void TRIBEVOTEUI::Draw(int uX, int uY)
{
	int sX;
	int sY;
	int i;
	int tstrlen;
	char mBuffer[1000];

	if (mActive)
	{
		sX = mMYINFO.mScreenXSize / 2;
		mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2334]) / 2;
		sY = mMYINFO.mScreenYSize / 2;
		mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2334]) / 2;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2334], mX, mY, uX, uY))
		{
			mPOINTER.Set(0);
		}
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[2334], mX, mY);
		for (i = 0; i < 10; ++i)
		{
			if (strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][i], ""))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[4178], mX + 25, mY + 37 * i + 64);
				sprintf(mBuffer, "%d", mPLAY.mTribeInfo.mTribeVoteLevel[mMYINFO.mAvatarInfo.aTribe][i]);
				sY = mY + 37 * i + 67;
				sX = mX + 61;
				tstrlen = mUTIL.GetStringLength(mBuffer);
				mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 3);

				sprintf(mBuffer, "%d", mPLAY.mTribeInfo.mTribeVoteKillOtherTribe[mMYINFO.mAvatarInfo.aTribe][i]);
				sY = mY + 37 * i + 67;
				sX = mX + 159;
				tstrlen = mUTIL.GetStringLength(mBuffer);
				mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 3);

				sprintf(mBuffer, "%s", mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][i]);
				sY = mY + 37 * i + 67;
				sX = mX + 249;
				tstrlen = mUTIL.GetStringLength(mBuffer);
				mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 3);

				sprintf(mBuffer, "%d", mPLAY.mTribeInfo.mTribeVotePoint[mMYINFO.mAvatarInfo.aTribe][i]);
				sY = mY + 37 * i + 67;
				sX = mX + 611;
				tstrlen = mUTIL.GetStringLength(mBuffer);
				mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 3);
			}
		}
		switch (mPLAY.mWorldInfo.mTribeVoteState[mMYINFO.mAvatarInfo.aTribe])
		{
		case 1:
			strcpy(mBuffer, mMESSAGE.Return(743));
			sY = mY + 440;
			sX = mX + 115;
			tstrlen = mUTIL.GetStringLength(mBuffer);
			mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 3);
			break;
		case 2:
			strcpy(mBuffer, mMESSAGE.Return(744));
			sY = mY + 440;
			sX = mX + 115;
			tstrlen = mUTIL.GetStringLength(mBuffer);
			mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 3);
			break;
		case 3:
			strcpy(mBuffer, mMESSAGE.Return(745));
			sY = mY + 440;
			sX = mX + 115;
			tstrlen = mUTIL.GetStringLength(mBuffer);
			mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 3);
			break;
		case 4:
			strcpy(mBuffer, mMESSAGE.Return(746));
			sY = mY + 440;
			sX = mX + 115;
			tstrlen = mUTIL.GetStringLength(mBuffer);
			mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 3);
			break;
		default:
			break;
		}
		for (i = 0; i < 10; ++i)
		{
			if (mIsClick[i])
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[595], mX + 318, mY + 37 * i + 62);
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[594], mX + 318, mY + 37 * i + 62, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[594], mX + 318, mY + 37 * i + 62);
			}
			if (mIsClick[i + 20])
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[2343], mX + 456, mY + 37 * i + 62);
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2342], mX + 456, mY + 37 * i + 62, uX, uY))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[2342], mX + 456, mY + 37 * i + 62);
			}
		}
		if (mIsClick[30])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[1604], mX + 593, mY + 435);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2386], mX + 593, mY + 435, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2386], mX + 593, mY + 435);
		}
		for (i = 0; i < 10; ++i)
		{
			if (strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][i], "")
				&& mPLAY.mWorldInfo.mTribeVoteState[mMYINFO.mAvatarInfo.aTribe] == 4
				&& !strcmp(mPLAY.mTribeInfo.mTribeVoteName[mMYINFO.mAvatarInfo.aTribe][i], mPLAY.mTribeInfo.mTribeMaster[mMYINFO.mAvatarInfo.aTribe]))
			{
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[2649], mX + 18, mY + 37 * i + 30);
			}
		}
	}
}
void TRIBEVOTEUI::Set()
{
	int i;

	if (mPLAY.mWorldInfo.mTribeVoteState[mMYINFO.mAvatarInfo.aTribe])
	{
		mActive = 1;
		for (i = 0; i < 31; ++i)
		{
			mIsClick[i] = 0;
		}
		mSelectIndex = -1;
	}
	else
	{
		mBASICUI.Insert1(mMESSAGE.Return(580), mFONTCOLOR.mData[44]);
	}
}
int TRIBEVOTEUI::DrawForRollOver(int uX, int uY)
{
	return 0;
}
void TRIBEVOTEUI::Off()
{
	if (mActive)
	{
		mActive = 0;
	}
}
void TRIBEVOTEUI::InitForEnterZone()
{
	mActive = 0;
}





GAMEOPTIONUI mGAMEOPTIONUI;

BOOL GAMEOPTIONUI::Init()
{
	mActive = 0;
	return TRUE;
}
void GAMEOPTIONUI::Draw(int uX, int uY)
{
	int sX;
	int sY;
	char mBuffer[1000];
	int tstrlen;
	float tValue;

	if (mActive)
	{
		sX = mMYINFO.mScreenXSize / 2;
		mX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[325]) / 2;
		sY = mMYINFO.mScreenYSize / 2;
		mY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[325]) / 2;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[325], mX, mY, uX, uY))
		{
			mPOINTER.Set(0);
		}
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[325], mX, mY);

		if (mGAMEOPTION.tParticleEffect)
		{
			if (mGAMEOPTION.tParticleEffect == 1)
			{
				strcpy(mBuffer, mMESSAGE.Return(159));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(158));
		}
		sY = mY + 46;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		switch (mGAMEOPTION.tView)
		{
		case 1:
			strcpy(mBuffer, mMESSAGE.Return(160));
			break;
		case 2:
			strcpy(mBuffer, mMESSAGE.Return(161));
			break;
		case 3:
			strcpy(mBuffer, mMESSAGE.Return(162));
			break;
		}
		sY = mY + 67;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mGAMEOPTION.tShadow)
		{
			if (mGAMEOPTION.tShadow == 1)
			{
				strcpy(mBuffer, mMESSAGE.Return(169));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(168));
		}
		sY = mY + 88;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mGAMEOPTION.tDisplayInfo)
		{
			if (mGAMEOPTION.tDisplayInfo == 1)
			{
				strcpy(mBuffer, mMESSAGE.Return(171));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(170));
		}
		sY = mY + 109;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mGAMEOPTION.tDisplayStatus)
		{
			if (mGAMEOPTION.tDisplayStatus == 1)
			{
				strcpy(mBuffer, mMESSAGE.Return(173));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(172));
		}
		sY = mY + 130;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mGAMEOPTION.tDisplaySkillEffect)
		{
			if (mGAMEOPTION.tDisplaySkillEffect == 1)
			{
				strcpy(mBuffer, mMESSAGE.Return(175));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(174));
		}
		sY = mY + 151;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		switch (mGAMEOPTION.tWarMode)
		{
		case 0:
			strcpy(mBuffer, mMESSAGE.Return(176));
			break;
		case 1:
			strcpy(mBuffer, mMESSAGE.Return(177));
			break;
		case 2:
			strcpy(mBuffer, mMESSAGE.Return(178));
			break;
		case 3:
			strcpy(mBuffer, mMESSAGE.Return(179));
			break;
		default:
			break;
		}
		sY = mY + 172;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		switch (mGAMEOPTION.tBrightness)
		{
		case 1:
			strcpy(mBuffer, mMESSAGE.Return(182));
			break;
		case 2:
			strcpy(mBuffer, mMESSAGE.Return(183));
			break;
		case 3:
			strcpy(mBuffer, mMESSAGE.Return(184));
			break;
		case 4:
			strcpy(mBuffer, mMESSAGE.Return(185));
			break;
		case 5:
			strcpy(mBuffer, mMESSAGE.Return(186));
			break;
		case 6:
			strcpy(mBuffer, mMESSAGE.Return(187));
			break;
		case 7:
			strcpy(mBuffer, mMESSAGE.Return(188));
			break;
		case 8:
			strcpy(mBuffer, mMESSAGE.Return(189));
			break;
		case 9:
			strcpy(mBuffer, mMESSAGE.Return(190));
			break;
		default:
			break;
		}
		sY = mY + 193;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		GIMAGE2D::Display(&mGDATA.mUI_MAIN[1606], mX + (mGAMEOPTION.tEnvironmentSoundLevel * 94.0 / 100.0) + 128, mY + 275);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[1606], mX + (mGAMEOPTION.tSFXLevel * 94.0 / 100.0) + 128, mY + 298);

		if (mGAMEOPTION.tIsBGM)
		{
			if (mGAMEOPTION.tIsBGM)
			{
				strcpy(mBuffer, mMESSAGE.Return(192));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(191));
		}
		sY = mY + 326;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mGAMEOPTION.tShortCutKey == 1)
		{
			strcpy(mBuffer, mMESSAGE.Return(460));
		}
		else if (mGAMEOPTION.tShortCutKey == 2)
		{
			strcpy(mBuffer, mMESSAGE.Return(461));
		}
		sY = mY + 382;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mGAMEOPTION.tMatureMode)
		{
			if (mGAMEOPTION.tMatureMode == 1)
			{
				strcpy(mBuffer, mMESSAGE.Return(194));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(193));
		}
		sY = mY + 403;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mGAMEOPTION.tAcceptWhisper)
		{
			if (mGAMEOPTION.tAcceptWhisper == 1)
			{
				strcpy(mBuffer, mMESSAGE.Return(194));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(193));
		}
		sY = mY + 424;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mGAMEOPTION.tAcceptPVP)
		{
			if (mGAMEOPTION.tAcceptPVP == 1)
			{
				strcpy(mBuffer, mMESSAGE.Return(194));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(193));
		}
		sY = mY + 445;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mGAMEOPTION.tAcceptTrade)
		{
			if (mGAMEOPTION.tAcceptTrade == 1)
			{
				strcpy(mBuffer, mMESSAGE.Return(194));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(193));
		}
		sY = mY + 466;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mGAMEOPTION.tAcceptFriend)
		{
			if (mGAMEOPTION.tAcceptFriend == 1)
			{
				strcpy(mBuffer, mMESSAGE.Return(194));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(193));
		}
		sY = mY + 487;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mGAMEOPTION.tAcceptMentor)
		{
			if (mGAMEOPTION.tAcceptMentor == 1)
			{
				strcpy(mBuffer, mMESSAGE.Return(194));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(193));
		}
		sY = mY + 508;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mGAMEOPTION.tAcceptParty)
		{
			if (mGAMEOPTION.tAcceptParty == 1)
			{
				strcpy(mBuffer, mMESSAGE.Return(194));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(193));
		}
		sY = mY + 529;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mGAMEOPTION.tAcceptGuild)
		{
			if (mGAMEOPTION.tAcceptGuild == 1)
			{
				strcpy(mBuffer, mMESSAGE.Return(194));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(193));
		}
		sY = mY + 550;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mGAMEOPTION.tAcceptWar)
		{
			if (mGAMEOPTION.tAcceptWar == 1)
			{
				strcpy(mBuffer, mMESSAGE.Return(194));
			}
		}
		else
		{
			strcpy(mBuffer, mMESSAGE.Return(193));
		}
		sY = mY + 571;
		sX = mX + 185;
		tstrlen = mUTIL.GetStringLength(mBuffer);
		mUTIL.DrawFont2D(mBuffer, sX - tstrlen / 2, sY, 1);

		if (mIsClick[0])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 250, mY + 6);
		if (mIsClick[1])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[334], mX + 202, mY + 596);
		if (mIsClick[2])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[680], mX + 148, mY + 596);
		if (mIsClick[3])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 42);
		if (mIsClick[4])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 42);
		if (mIsClick[5])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 63);
		if (mIsClick[6])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 63);
		if (mIsClick[7])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 84);
		if (mIsClick[8])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 84);
		if (mIsClick[9])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 105);
		if (mIsClick[10])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 105);
		if (mIsClick[11])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 126);
		if (mIsClick[12])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 126);
		if (mIsClick[13])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 147);
		if (mIsClick[14])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 147);
		if (mIsClick[15])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 168);
		if (mIsClick[16])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 168);
		if (mIsClick[17])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 189);
		if (mIsClick[18])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 189);
		if (mIsClick[19])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 210);
		if (mIsClick[20])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 210);
		if (mIsClick[21])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 231);
		if (mIsClick[22])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 231);

		if (mIsClick[23])
		{
			if (uX < mX + 128)
			{
				uX = mX + 128;
			}
			if (uX > mX + 222)
			{
				uX = mX + 222;
			}
			tValue = (uX - mX - 128) * 100.0;
			mGAMEOPTION.tEnvironmentSoundLevel = (tValue / 94.0);
		}
		if (mIsClick[24])
		{
			if (uX < mX + 128)
			{
				uX = mX + 128;
			}
			if (uX > mX + 222)
			{
				uX = mX + 222;
			}
			tValue = (uX - mX - 128) * 100.0;
			mGAMEOPTION.tSFXLevel = (tValue / 94.0);
		}

		if (mIsClick[25])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 322);
		if (mIsClick[26])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 322);
		if (mIsClick[27])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 378);
		if (mIsClick[28])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 378);
		if (mIsClick[29])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 399);
		if (mIsClick[30])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 399);
		if (mIsClick[31])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 420);
		if (mIsClick[32])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 420);
		if (mIsClick[33])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 441);
		if (mIsClick[34])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 441);
		if (mIsClick[35])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 462);
		if (mIsClick[36])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 462);
		if (mIsClick[37])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 483);
		if (mIsClick[38])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 483);
		if (mIsClick[39])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 504);
		if (mIsClick[40])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 504);
		if (mIsClick[41])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 525);
		if (mIsClick[42])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 525);
		if (mIsClick[43])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 546);
		if (mIsClick[44])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 546);
		if (mIsClick[45])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 127, mY + 567);
		if (mIsClick[46])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 225, mY + 567);

	}
}
int GAMEOPTIONUI::DrawForRollOver(int uX, int uY)
{
	return 0;
}
BOOL GAMEOPTIONUI::LBUTTONDOWN(int uX, int uY)
{
	BOOL result;
	int v4;
	int v5;

	if (!mActive)
	{
		return 0;
	}
	v4 = mMYINFO.mScreenXSize / 2;
	mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[325]) / 2;
	v5 = mMYINFO.mScreenYSize / 2;
	mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[325]) / 2;
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 250, mY + 6, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[0] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[334], mX + 202, mY + 596, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[1] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[680], mX + 148, mY + 596, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[2] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 42, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[3] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 42, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[4] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 63, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[5] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 63, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[6] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 84, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[7] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 84, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[8] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 105, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[9] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 105, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[10] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 126, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[11] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 126, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[12] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 147, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[13] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 147, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[14] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 168, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[15] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 168, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[16] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 189, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[17] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 189, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[18] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 210, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[19] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 210, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[20] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 231, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[21] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 231, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[22] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1606], mX + (mGAMEOPTION.tEnvironmentSoundLevel * 94.0 / 100.0) + 128, mY + 275, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[23] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1606], mX + (mGAMEOPTION.tSFXLevel * 94.0 / 100.0) + 128, mY + 298, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[24] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 322, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[25] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 322, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[26] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 378, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[27] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 378, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[28] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 399, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[29] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 399, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[30] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 420, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[31] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 420, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[32] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 441, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[33] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 441, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[34] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 462, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[35] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 462, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[36] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 483, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[37] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 483, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[38] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 504, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[39] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 504, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[40] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 525, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[41] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 525, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[42] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 546, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[43] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 546, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[44] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 567, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[45] = 1;
		result = 1;
	}
	else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 567, uX, uY))
	{
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mIsClick[46] = 1;
		result = 1;
	}
	else
	{
		result = GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[325], mX, mY, uX, uY);
	}
	return result;
}
BOOL GAMEOPTIONUI::LBUTTONUP(int uX, int uY)
{
	BOOL result;
	int v4;
	int v5;

	if (!mActive)
		return 0;
	v4 = mMYINFO.mScreenXSize / 2;
	mX = v4 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[325]) / 2;
	v5 = mMYINFO.mScreenYSize / 2;
	mY = v5 - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[325]) / 2;
	if (mIsClick[0])
	{
		mIsClick[0] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 250, mY + 6, uX, uY))
			GAMEOPTIONUI::Off();
		return 1;
	}
	if (mIsClick[1])
	{
		mIsClick[1] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[334], mX + 202, mY + 596, uX, uY))
		{
			mAPP->hAbortProgram = 1;
			GAMEOPTIONUI::Off();
		}
		return 1;
	}
	if (mIsClick[2])
	{
		mIsClick[2] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[680], mX + 148, mY + 596, uX, uY))
		{
			mNETWORK.CLOSE();
			mMAIN.mMainMode = 2;
			mMAIN.mSubMode = 0;
			mMAIN.mTicks = 0;
			GAMEOPTIONUI::Off();
		}
		return 1;
	}
	if (mIsClick[3])
	{
		mIsClick[3] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 42, uX, uY))
			return 1;
		if (--mGAMEOPTION.tParticleEffect < 0)
			mGAMEOPTION.tParticleEffect = 0;
		goto LABEL_270;
	}
	if (mIsClick[4])
	{
		mIsClick[4] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 42, uX, uY))
			return 1;
		if (++mGAMEOPTION.tParticleEffect > 1)
			mGAMEOPTION.tParticleEffect = 1;
		goto LABEL_270;
	}
	if (mIsClick[5])
	{
		mIsClick[5] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 63, uX, uY))
			return 1;
		if (--mGAMEOPTION.tView < 1)
			mGAMEOPTION.tView = 1;
		goto LABEL_270;
	}
	if (mIsClick[6])
	{
		mIsClick[6] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 63, uX, uY))
			return 1;
		if (++mGAMEOPTION.tView > 3)
			mGAMEOPTION.tView = 3;
		goto LABEL_270;
	}
	if (mIsClick[7])
	{
		mIsClick[7] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 84, uX, uY))
			return 1;
		if (--mGAMEOPTION.tShadow < 0)
			mGAMEOPTION.tShadow = 0;
		goto LABEL_270;
	}
	if (mIsClick[8])
	{
		mIsClick[8] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 84, uX, uY))
			return 1;
		if (++mGAMEOPTION.tShadow > 1)
			mGAMEOPTION.tShadow = 1;
		goto LABEL_270;
	}
	if (mIsClick[9])
	{
		mIsClick[9] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 105, uX, uY))
			return 1;
		if (--mGAMEOPTION.tDisplayInfo < 0)
			mGAMEOPTION.tDisplayInfo = 0;
		goto LABEL_270;
	}
	if (mIsClick[10])
	{
		mIsClick[10] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 105, uX, uY))
			return 1;
		if (++mGAMEOPTION.tDisplayInfo > 1)
			mGAMEOPTION.tDisplayInfo = 1;
		goto LABEL_270;
	}
	if (mIsClick[11])
	{
		mIsClick[11] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 126, uX, uY))
			return 1;
		if (--mGAMEOPTION.tDisplayStatus < 0)
			mGAMEOPTION.tDisplayStatus = 0;
		goto LABEL_270;
	}
	if (mIsClick[12])
	{
		mIsClick[12] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 126, uX, uY))
			return 1;
		if (++mGAMEOPTION.tDisplayStatus > 1)
			mGAMEOPTION.tDisplayStatus = 1;
		goto LABEL_270;
	}
	if (mIsClick[13])
	{
		mIsClick[13] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 147, uX, uY))
			return 1;
		if (--mGAMEOPTION.tDisplaySkillEffect < 0)
			mGAMEOPTION.tDisplaySkillEffect = 0;
		goto LABEL_270;
	}
	if (mIsClick[14])
	{
		mIsClick[14] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 147, uX, uY))
			return 1;
		if (++mGAMEOPTION.tDisplaySkillEffect > 1)
			mGAMEOPTION.tDisplaySkillEffect = 1;
		goto LABEL_270;
	}
	if (mIsClick[15])
	{
		mIsClick[15] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 168, uX, uY))
			return 1;
		if (--mGAMEOPTION.tWarMode < 0)
			mGAMEOPTION.tWarMode = 0;
		goto LABEL_270;
	}
	if (mIsClick[16])
	{
		mIsClick[16] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 168, uX, uY))
			return 1;
		if (++mGAMEOPTION.tWarMode > 3)
			mGAMEOPTION.tWarMode = 3;
		goto LABEL_270;
	}
	if (mIsClick[17])
	{
		mIsClick[17] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 189, uX, uY))
			return 1;
		if (--mGAMEOPTION.tBrightness < 1)
			mGAMEOPTION.tBrightness = 1;
		goto LABEL_270;
	}
	if (mIsClick[18])
	{
		mIsClick[18] = 0;
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 189, uX, uY))
			return 1;
		if (++mGAMEOPTION.tBrightness > 9)
			mGAMEOPTION.tBrightness = 9;
		goto LABEL_270;
	}
	if (mIsClick[19])
	{
		mIsClick[19] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 210, uX, uY))
		{
			mUTIL.AdjustViewEnvironment2();
			mGAMEOPTION.WriteSettingsToFile();
		}
		result = 1;
	}
	else
	{
		if (!mIsClick[20])
		{
			if (mIsClick[21])
			{
				mIsClick[21] = 0;
				if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 231, uX, uY))
					return 1;
				if (--mGAMEOPTION.tBrightness < 1)
					mGAMEOPTION.tBrightness = 1;
			}
			else if (mIsClick[22])
			{
				mIsClick[22] = 0;
				if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 231, uX, uY))
					return 1;
				if (++mGAMEOPTION.tBrightness > 9)
					mGAMEOPTION.tBrightness = 9;
			}
			else
			{
				if (mIsClick[23])
				{
					mIsClick[23] = 0;
					mGAMEOPTION.WriteSettingsToFile();
				}
				if (mIsClick[24])
				{
					mIsClick[24] = 0;
					mGAMEOPTION.WriteSettingsToFile();
				}
				if (mIsClick[25])
				{
					mIsClick[25] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 322, uX, uY))
						return 1;
					if (mGAMEOPTION.tIsBGM)
					{
						mMYINFO.mBGMPlayPostTime = mAPP->hPresentElapsedSeconds;
						mGDATA.mZONE.mBGM.Stop();
					}
					if (--mGAMEOPTION.tIsBGM < 0)
						mGAMEOPTION.tIsBGM = 0;
				}
				else if (mIsClick[26])
				{
					mIsClick[26] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 322, uX, uY))
						return 1;
					if (!mGAMEOPTION.tIsBGM)
					{
						mMYINFO.mBGMPlayPostTime = mAPP->hPresentElapsedSeconds;
						mGDATA.mZONE.mBGM.Play(0, 100, 0);
					}
					if (++mGAMEOPTION.tIsBGM > 1)
						mGAMEOPTION.tIsBGM = 1;
				}
				else if (mIsClick[27])
				{
					mIsClick[27] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 378, uX, uY))
						return 1;
					if (--mGAMEOPTION.tShortCutKey < 1)
						mGAMEOPTION.tShortCutKey = 1;
				}
				else if (mIsClick[28])
				{
					mIsClick[28] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 378, uX, uY))
						return 1;
					if (++mGAMEOPTION.tShortCutKey > 2)
						mGAMEOPTION.tShortCutKey = 2;
				}
				else if (mIsClick[29])
				{
					mIsClick[29] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 399, uX, uY))
						return 1;
					if (--mGAMEOPTION.tMatureMode < 0)
						mGAMEOPTION.tMatureMode = 0;
				}
				else if (mIsClick[30])
				{
					mIsClick[30] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 399, uX, uY))
						return 1;
					if (++mGAMEOPTION.tMatureMode > 1)
						mGAMEOPTION.tMatureMode = 1;
				}
				else if (mIsClick[31])
				{
					mIsClick[31] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 420, uX, uY))
						return 1;
					if (--mGAMEOPTION.tAcceptWhisper < 0)
						mGAMEOPTION.tAcceptWhisper = 0;
				}
				else if (mIsClick[32])
				{
					mIsClick[32] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 420, uX, uY))
						return 1;
					if (++mGAMEOPTION.tAcceptWhisper > 1)
						mGAMEOPTION.tAcceptWhisper = 1;
				}
				else if (mIsClick[33])
				{
					mIsClick[33] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 441, uX, uY))
						return 1;
					if (--mGAMEOPTION.tAcceptPVP < 0)
						mGAMEOPTION.tAcceptPVP = 0;
				}
				else if (mIsClick[34])
				{
					mIsClick[34] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 441, uX, uY))
						return 1;
					if (++mGAMEOPTION.tAcceptPVP > 1)
						mGAMEOPTION.tAcceptPVP = 1;
				}
				else if (mIsClick[35])
				{
					mIsClick[35] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 462, uX, uY))
						return 1;
					if (--mGAMEOPTION.tAcceptTrade < 0)
						mGAMEOPTION.tAcceptTrade = 0;
				}
				else if (mIsClick[36])
				{
					mIsClick[36] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 462, uX, uY))
						return 1;
					if (++mGAMEOPTION.tAcceptTrade > 1)
						mGAMEOPTION.tAcceptTrade = 1;
				}
				else if (mIsClick[37])
				{
					mIsClick[37] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 483, uX, uY))
						return 1;
					if (--mGAMEOPTION.tAcceptFriend < 0)
						mGAMEOPTION.tAcceptFriend = 0;
				}
				else if (mIsClick[38])
				{
					mIsClick[38] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 483, uX, uY))
						return 1;
					if (++mGAMEOPTION.tAcceptFriend > 1)
						mGAMEOPTION.tAcceptFriend = 1;
				}
				else if (mIsClick[39])
				{
					mIsClick[39] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 504, uX, uY))
						return 1;
					if (--mGAMEOPTION.tAcceptMentor < 0)
						mGAMEOPTION.tAcceptMentor = 0;
				}
				else if (mIsClick[40])
				{
					mIsClick[40] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 504, uX, uY))
						return 1;
					if (++mGAMEOPTION.tAcceptMentor > 1)
						mGAMEOPTION.tAcceptMentor = 1;
				}
				else if (mIsClick[41])
				{
					mIsClick[41] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 525, uX, uY))
						return 1;
					if (--mGAMEOPTION.tAcceptParty < 0)
						mGAMEOPTION.tAcceptParty = 0;
				}
				else if (mIsClick[42])
				{
					mIsClick[42] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 525, uX, uY))
						return 1;
					if (++mGAMEOPTION.tAcceptParty > 1)
						mGAMEOPTION.tAcceptParty = 1;
				}
				else if (mIsClick[43])
				{
					mIsClick[43] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 546, uX, uY))
						return 1;
					if (--mGAMEOPTION.tAcceptGuild < 0)
						mGAMEOPTION.tAcceptGuild = 0;
				}
				else if (mIsClick[44])
				{
					mIsClick[44] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 546, uX, uY))
						return 1;
					if (++mGAMEOPTION.tAcceptGuild > 1)
						mGAMEOPTION.tAcceptGuild = 1;
				}
				else if (mIsClick[45])
				{
					mIsClick[45] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 127, mY + 567, uX, uY))
						return 1;
					if (--mGAMEOPTION.tAcceptWar < 0)
						mGAMEOPTION.tAcceptWar = 0;
				}
				else
				{
					if (!mIsClick[46])
						return 0;
					mIsClick[46] = 0;
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 567, uX, uY))
						return 1;
					if (++mGAMEOPTION.tAcceptWar > 1)
						mGAMEOPTION.tAcceptWar = 1;
				}
			}
		LABEL_270:
			mGAMEOPTION.WriteSettingsToFile();
			return 1;
		}
		mIsClick[20] = 0;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 225, mY + 210, uX, uY))
		{
			mUTIL.AdjustViewEnvironment2();
			mGAMEOPTION.WriteSettingsToFile();
		}
		result = 1;
	}
	return result;
}
int GAMEOPTIONUI::RBUTTONDOWN(int uX, int uY)
{
	return 0;
}
int GAMEOPTIONUI::RBUTTONUP(int uX, int uY)
{
	return 0;
}
int GAMEOPTIONUI::KEYBOARD()
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
		else if (mGXD.mKeyboardBufferedData[i].dwOfs == 1)
		{
			GAMEOPTIONUI::Off();
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
		else if (mGXD.mKeyboardBufferedData[j].dwOfs == 1)
		{
			if (mSTATUSUI.mActive
				|| mINVENUI.mActive
				|| mSKILLUI.mActive
				|| mQUESTUI.mActive
				|| mPARTYUI.mActive
				|| mFRIENDUI.mActive
				|| mGUILDUI.mActive
				|| mHELPUI.mActive
				|| mTRIBEUI.mActive
				|| mTRIBEBANKUI.mActive
				|| mTRIBEVOTEUI.mActive
				|| mAUTOUI.mActive
				|| mANIMALUI.mActive
				|| mBONUSUI.mActive
				|| mTRIBESKILL.mActive
				|| mHOISUNDO_UI.mActive
				|| mGUILD_RANKING_UI.mActive
				|| mHSBRANKUI.mActive
				|| mCAPSULEUI.mActive
				|| mHERORANKUI.mActive
				|| mTOWERBUILDUI.mActive
				|| mMYINFO.mCheck319TypeTop20RankState
				|| mCOSTUMEUI.mActive
				|| mBOOZEUI.mActive
				|| mSPECIALSKILL.mActive
				|| mSPSHOP.mActive)
			{
				mUI.Off(1);
				result = 1;
			}
			else
			{
				GAMEOPTIONUI::Set();
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

void GAMEOPTIONUI::Off()
{
	if (mActive)
		mActive = 0;
}
void GAMEOPTIONUI::Set()
{
	int i;

	mActive = 1;
	for (i = 0; i < 47; ++i)
		mIsClick[i] = 0;
}
void GAMEOPTIONUI::InitForEnterZone()
{
	mActive = 0;
}
