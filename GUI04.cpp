#include "gxdheader.h"

INVENUI mINVENUI;

BOOL INVENUI::Init()
{
	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	mEquipCoord[0][0] = mX + 57;
	mEquipCoord[0][1] = mY + 86;
	mEquipCoord[0][2] = mX + 81;
	mEquipCoord[0][3] = mY + 110;
	mEquipPart[0] = 2;
	mEquipCoord[1][0] = mX + 193;
	mEquipCoord[1][1] = mY + 60;
	mEquipCoord[1][2] = mX + 243;
	mEquipCoord[1][3] = mY + 110;
	mEquipPart[1] = 3;
	mEquipCoord[2][0] = mX + 139;
	mEquipCoord[2][1] = mY + 60;
	mEquipCoord[2][2] = mX + 189;
	mEquipCoord[2][3] = mY + 110;
	mEquipPart[2] = 4;
	mEquipCoord[3][0] = mX + 85;
	mEquipCoord[3][1] = mY + 115;
	mEquipCoord[3][2] = mX + 135;
	mEquipCoord[3][3] = mY + 165;
	mEquipPart[3] = 5;
	mEquipCoord[4][0] = mX + 57;
	mEquipCoord[4][1] = mY + 60;
	mEquipCoord[4][2] = mX + 81;
	mEquipCoord[4][3] = mY + 84;
	mEquipPart[4] = 6;
	mEquipCoord[5][0] = mX + 139;
	mEquipCoord[5][1] = mY + 115;
	mEquipCoord[5][2] = mX + 189;
	mEquipCoord[5][3] = mY + 165;
	mEquipPart[5] = 7;
	mEquipCoord[6][0] = 0;
	mEquipCoord[6][1] = 0;
	mEquipCoord[6][2] = 0;
	mEquipCoord[6][3] = 0;
	mEquipPart[6] = 99;
	mEquipCoord[7][0] = mX + 85;
	mEquipCoord[7][1] = mY + 60;
	mEquipCoord[7][2] = mX + 135;
	mEquipCoord[7][3] = mY + 110;
	mEquipPart[7] = 9;
	mEquipCoord[8][0] = mX + 193;
	mEquipCoord[8][1] = mY + 115;
	mEquipCoord[8][2] = mX + 243;
	mEquipCoord[8][3] = mY + 165;
	mEquipPart[8] = 10;
	mEquipCoord[9][0] = mX + 34;
	mEquipCoord[9][1] = mY + 87;
	mEquipCoord[9][2] = mX + 84;
	mEquipCoord[9][3] = mY + 137;
	mEquipPart[9] = 11;
	mEquipCoord[10][0] = mX + 86;
	mEquipCoord[10][1] = mY + 87;
	mEquipCoord[10][2] = mX + 136;
	mEquipCoord[10][3] = mY + 137;
	mEquipPart[10] = 12;
	mEquipCoord[11][0] = mX + 138;
	mEquipCoord[11][1] = mY + 87;
	mEquipCoord[11][2] = mX + 188;
	mEquipCoord[11][3] = mY + 137;
	mEquipPart[11] = 13;
	mEquipCoord[12][0] = mX + 190;
	mEquipCoord[12][1] = mY + 87;
	mEquipCoord[12][2] = mX + 240;
	mEquipCoord[12][3] = mY + 137;
	mEquipPart[12] = 14;
	mEquipCoord[13][0] = mX + 35;
	mEquipCoord[13][1] = mY + 60;
	mEquipCoord[13][2] = mX + 86;
	mEquipCoord[13][3] = mY + 111;
	mEquipPart[13] = 15;
	mEquipCoord[14][0] = mX + 87;
	mEquipCoord[14][1] = mY + 60;
	mEquipCoord[14][2] = mX + 138;
	mEquipCoord[14][3] = mY + 111;
	mEquipPart[14] = 16;
	mEquipCoord[15][0] = mX + 139;
	mEquipCoord[15][1] = mY + 60;
	mEquipCoord[15][2] = mX + 190;
	mEquipCoord[15][3] = mY + 111;
	mEquipPart[15] = 17;
	mEquipCoord[16][0] = mX + 191;
	mEquipCoord[16][1] = mY + 60;
	mEquipCoord[16][2] = mX + 242;
	mEquipCoord[16][3] = mY + 111;
	mEquipPart[16] = 18;
	mEquipCoord[17][0] = mX + 35;
	mEquipCoord[17][1] = mY + 112;
	mEquipCoord[17][2] = mX + 86;
	mEquipCoord[17][3] = mY + 163;
	mEquipPart[17] = 19;
	mEquipCoord[18][0] = mX + 87;
	mEquipCoord[18][1] = mY + 112;
	mEquipCoord[18][2] = mX + 138;
	mEquipCoord[18][3] = mY + 163;
	mEquipPart[18] = 20;
	mEquipCoord[19][0] = mX + 139;
	mEquipCoord[19][1] = mY + 112;
	mEquipCoord[19][2] = mX + 190;
	mEquipCoord[19][3] = mY + 163;
	mEquipPart[19] = 21;
	mEquipCoord[20][0] = mX + 191;
	mEquipCoord[20][1] = mY + 112;
	mEquipCoord[20][2] = mX + 242;
	mEquipCoord[20][3] = mY + 163;
	mEquipPart[20] = 22;
	mTeleportZone[0][0] = 1;
	mTeleportZone[0][1] = 2;
	mTeleportZone[0][2] = 3;
	mTeleportZone[0][3] = 4;
	mTeleportZone[0][4] = 40;
	mTeleportZone[0][5] = 43;
	mTeleportZone[0][6] = 56;
	mTeleportZone[0][7] = 38;
	mTeleportZone[0][8] = 55;
	mTeleportZone[0][9] = 89;
	mTeleportZone[0][10] = 75;
	mTeleportZone[0][11] = 90;
	mTeleportZone[0][12] = 201;
	mTeleportZone[1][0] = 6;
	mTeleportZone[1][1] = 7;
	mTeleportZone[1][2] = 8;
	mTeleportZone[1][3] = 9;
	mTeleportZone[1][4] = 41;
	mTeleportZone[1][5] = 44;
	mTeleportZone[1][6] = 57;
	mTeleportZone[1][7] = 38;
	mTeleportZone[1][8] = 55;
	mTeleportZone[1][9] = 89;
	mTeleportZone[1][10] = 75;
	mTeleportZone[1][11] = 90;
	mTeleportZone[1][12] = 201;
	mTeleportZone[2][0] = 11;
	mTeleportZone[2][1] = 12;
	mTeleportZone[2][2] = 13;
	mTeleportZone[2][3] = 14;
	mTeleportZone[2][4] = 42;
	mTeleportZone[2][5] = 45;
	mTeleportZone[2][6] = 58;
	mTeleportZone[2][7] = 38;
	mTeleportZone[2][8] = 55;
	mTeleportZone[2][9] = 89;
	mTeleportZone[2][10] = 75;
	mTeleportZone[2][11] = 90;
	mTeleportZone[2][12] = 201;
	mTeleportZone[3][0] = 140;
	mTeleportZone[3][1] = 141;
	mTeleportZone[3][2] = 142;
	mTeleportZone[3][3] = 143;
	mTeleportZone[3][4] = 0;
	mTeleportZone[3][5] = 0;
	mTeleportZone[3][6] = 0;
	mTeleportZone[3][7] = 38;
	mTeleportZone[3][8] = 55;
	mTeleportZone[3][9] = 89;
	mTeleportZone[3][10] = 75;
	mTeleportZone[3][11] = 90;
	mTeleportZone[3][12] = 201;
	mDungeonZone[0][0] = 46;
	mDungeonZone[0][1] = 16;
	mDungeonZone[0][2] = 17;
	mDungeonZone[0][3] = 18;
	mDungeonZone[0][4] = 62;
	mDungeonZone[0][5] = 63;
	mDungeonZone[0][6] = 64;
	mDungeonZone[0][7] = 59;
	mDungeonZone[0][8] = 76;
	mDungeonZone[0][9] = 80;
	mDungeonZone[0][10] = 91;
	mDungeonZone[0][11] = 95;
	mDungeonZone[0][12] = 202;
	mDungeonZone[0][13] = 206;
	mDungeonZone[1][0] = 47;
	mDungeonZone[1][1] = 22;
	mDungeonZone[1][2] = 23;
	mDungeonZone[1][3] = 24;
	mDungeonZone[1][4] = 65;
	mDungeonZone[1][5] = 66;
	mDungeonZone[1][6] = 67;
	mDungeonZone[1][7] = 60;
	mDungeonZone[1][8] = 77;
	mDungeonZone[1][9] = 81;
	mDungeonZone[1][10] = 92;
	mDungeonZone[1][11] = 96;
	mDungeonZone[1][12] = 203;
	mDungeonZone[1][13] = 207;
	mDungeonZone[2][0] = 48;
	mDungeonZone[2][1] = 28;
	mDungeonZone[2][2] = 29;
	mDungeonZone[2][3] = 30;
	mDungeonZone[2][4] = 68;
	mDungeonZone[2][5] = 69;
	mDungeonZone[2][6] = 70;
	mDungeonZone[2][7] = 61;
	mDungeonZone[2][8] = 78;
	mDungeonZone[2][9] = 82;
	mDungeonZone[2][10] = 93;
	mDungeonZone[2][11] = 97;
	mDungeonZone[2][12] = 204;
	mDungeonZone[2][13] = 208;
	mDungeonZone[3][0] = 79;
	mDungeonZone[3][1] = 83;
	mDungeonZone[3][2] = 94;
	mDungeonZone[3][3] = 98;
	mDungeonZone[3][4] = 205;
	mDungeonZone[3][5] = 209;
	mDungeonZone[3][6] = 0;
	mDungeonZone[3][7] = 0;
	mDungeonZone[3][8] = 0;
	mDungeonZone[3][9] = 0;
	mDungeonZone[3][10] = 0;
	mDungeonZone[3][11] = 0;
	mDungeonZone[3][12] = 0;
	mDungeonZone[3][13] = 0;
	mActive = 0;
	return 1;

}

void INVENUI::Set()
{
	mActive = 1;
	for (int i = 0; i < 50; i++)
		mIsClick[i] = 0;
	mInvenType = 1;
	mInvenSort = 1;
	mInvenPage = 0;
	mPetBagState = 0;
	mPetBagPage = 0;
}

void INVENUI::InitForEnterZone()
{
	mActive = 0;
}

void INVENUI::Off()
{
	if (mActive)
		mActive = 0;
}

void INVENUI::Draw(int uX, int uY)
{
	int sX, sY, i, j, k, l;
	int tstrlen;
	char* tstr;
	char* tstr2;
	char* tstr3;
	int tColor;
	ITEM_INFO* item;
	SKILL_INFO* skill;
	int mIndex;
	int i2d, isort;
	char Buffer[1000];
	char Buffer2[200];
	int tDisplaySort;
	int value, value2, value3;
	int tPrevZone;

	if (!mActive)
		return;
	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
		mPOINTER.Set(0);
	GIMAGE2D::Display(&mGDATA.mUI_MAIN[299], mX, mY);
	/*if (strcmp(mMYINFO.mAvatarInfo.aGuildName, ""))
	{
		if (mMYINFO.mAvatarInfo.aGuildMarkEffect)
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2593], uX + 30, uY + 412);
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2594], uX + 50, uY + 412);
		}
		else
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2592], uX + 30, uY + 412);
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2595], uX + 50, uY + 412);
		}
	}*/
	if (mMYINFO.mAvatarInfo.aRebirth >= 12)
	{
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[4337], mX + 97, mY + 169);
	}
	switch (mInvenSort)
	{
	case 1:
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[2412], mX + 135, mY + 169);
		if (mUTIL.ReturnItemSort2(mMYINFO.mAvatarInfo.aEquip[8][0]) == 10)
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[4213], mX + 30, mY + 130);
		}
		for (mIndex = 0; mIndex < 9; ++mIndex)
		{
			if (mMYINFO.mAvatarInfo.aEquip[mIndex][0] >= 1)
			{
				item = mITEM.Search(mMYINFO.mAvatarInfo.aEquip[mIndex][0]);
				if (item)
				{
					i2d = item->iDataNumber2D - 1;
					GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2d], mEquipCoord[mIndex][0], mEquipCoord[mIndex][1]);
				}
			}
		}
		break;
	case 2:
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[2413], mX + 173, mY + 169);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[2409], mX + 28, mY + 56);
		for (mIndex = 9; mIndex < 13; ++mIndex)
		{
			if (mMYINFO.mAvatarInfo.aEquip[mIndex][0] >= 1)
			{
				item = mITEM.Search(mMYINFO.mAvatarInfo.aEquip[mIndex][0]);
				if (item)
				{
					i2d = item->iDataNumber2D - 1;
					GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2d], mEquipCoord[mIndex][0], mEquipCoord[mIndex][1]);
				}
			}
		}
		break;
	case 3:
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[2414], mX + 211, mY + 169);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[2410], mX + 28, mY + 56);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[2411], mX + 70, mY + 38);
		for (mIndex = 0; mIndex < 8; ++mIndex)
		{
			if (mMYINFO.mAvatarInfo.aTrade[mIndex][0] >= 1)
			{
				item = mITEM.Search(mMYINFO.mAvatarInfo.aTrade[mIndex][0]);
				if (item)
				{
					i2d = item->iDataNumber2D - 1;
					isort = item->iSort;
					if (isort == 2 || isort == 7 || isort == 11)
						GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2d], mX + 54 * (mIndex % 4) + 44, mY + 55 * (mIndex / 4) + 73);
					else
						GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2d], mX + 54 * (mIndex % 4) + 31, mY + 55 * (mIndex / 4) + 60);
					switch (item->iSort)
					{
					case 2:
						if (mMYINFO.mAvatarInfo.aTrade[mIndex][1] > 0)
						{
							sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aTrade[mIndex][1]);
							mUTIL.DrawFont2D(Buffer, mX + 54 * (mIndex % 4) + 58, mY + 55 * (mIndex / 4) + 87, 1);
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
					case 33:
					case 34:
						if (!INVENUI::CheckPossibleEquip(item, -1))
						{
							GIMAGE2D::Display(&mGDATA.mUI_MAIN[304], mX + 54 * (mIndex % 4) + 31, mY + 55 * (mIndex / 4) + 60);
						}
						break;
					default:
						continue;
					}
				}
			}
		}
		mUTIL.ChangeMoneyToString(mMYINFO.mAvatarInfo.aTradeMoney, Buffer2, &tDisplaySort);
		sY = mY + 44;
		sX = mX + 236;
		tstrlen = mUTIL.GetStringLength(Buffer2);
		mUTIL.DrawFont2D(Buffer2, sX - tstrlen, sY, tDisplaySort);
		mUTIL.ChangeMoneyToString(mMYINFO.mAvatarInfo.aTradeMoney2, Buffer2, &tDisplaySort);
		sY = mY + 44;
		sX = mX + 115;
		tstrlen = mUTIL.GetStringLength(Buffer2);
		mUTIL.DrawFont2D(Buffer2, sX - tstrlen, sY, tDisplaySort);
		if (mIsClick[0])
		{
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[301], mX + 123, mY + 37, uX, uY))
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[301], mX + 123, mY + 37);
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3473], mX + 67, mY + 37, uX, uY))
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[3474], mX + 67, mY + 37);
		}
		else
		{
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[300], mX + 123, mY + 37, uX, uY))
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[300], mX + 123, mY + 37);
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3473], mX + 67, mY + 37, uX, uY))
				GIMAGE2D::Display(&mGDATA.mUI_MAIN[3473], mX + 67, mY + 37);
		}
		break;

	case 4:
		if (mMYINFO.mAvatarInfo.aRebirth >= 12)
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[4338], mX + 97, mY + 169);
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[4341], mX + 28, mY + 56);
			for (mIndex = mMYINFO.mAvatarInfo.aHornVeinUnlockCount; mIndex < 8; mIndex++)
			{
				item = mITEM.Search(mIndex + 19524);
				if (item)
				{
					i2d = item->iDataNumber2D - 1;
					GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2d], mEquipCoord[mIndex + 13][0], mEquipCoord[mIndex + 13][1]);
				}
			}
			for (i = 13; i < 21; ++i)
			{
				if (mMYINFO.mAvatarInfo.aEquip[i][0] >= 1)
				{
					item = mITEM.Search(mMYINFO.mAvatarInfo.aEquip[i][0]);
					if (item)
					{
						i2d = item->iDataNumber2D - 1;
						GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2d], mEquipCoord[i][0], mEquipCoord[i][1]);
					}
				}
			}
		}
		break;
	}
	if (mPetBagState)
	{
		if (mInvenSort == 1)
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3741], mX + 30, mY + 151);
		}
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[3742], mX - 286, mY);
		for (mIndex = 0; mIndex < 10; ++mIndex)
		{
			if (mMYINFO.mAvatarInfo.aPetInventoryData[10 * mPetBagPage + mIndex] >= 1)
			{
				item = mITEM.Search(mMYINFO.mAvatarInfo.aPetInventoryData[10 * mPetBagPage + mIndex]);
				if (item)
				{
					i2d = item->iDataNumber2D - 1;
					GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2d], mX + 55 * (mIndex % 5) - 267, mY + 55 * (mIndex / 5) + 41);
				}
			}
		}
		if (mIsClick[3])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX - 278, mY + 6);
		}
		int v111 = 1;
		if (mMYINFO.mAvatarInfo.aPetInventoryDate)
		{
			v111 = 2;
		}
		sprintf(Buffer, "%d / %d", mPetBagPage + 1, v111);
		sY = mY + 171;
		sX = mX - 131;
		tstrlen = mUTIL.GetStringLength(Buffer);
		mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 3);
		if (mIsClick[4])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX - 189, mY + 167);
		if (mIsClick[5])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX - 91, mY + 167);
	}
	// Bagua
	if (mBaguaWindowState == 1)
	{

	}

	if (mInvenPage == 1)
	{
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[4340], mX + 80, mY + 406);
	}
	else
	{
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[4339], mX + 30, mY + 406);
	}
	for (mIndex = 0; mIndex < 64; ++mIndex)
	{
		if (mMYINFO.mAvatarInfo.aInventory[mInvenPage][mIndex][0] >= 1)
		{
			item = mITEM.Search(mMYINFO.mAvatarInfo.aInventory[mInvenPage][mIndex][0]);
			if (item)
			{
				i2d = item->iDataNumber2D - 1;
				GIMAGE2D::Display(&mGDATA.mUI_ITEM[i2d], mX + 26 * mMYINFO.mAvatarInfo.aInventory[mInvenPage][mIndex][1] + 34, mY + 26 * mMYINFO.mAvatarInfo.aInventory[mInvenPage][mIndex][2] + 193);
				switch (item->iSort)
				{
				case 2:
					if (mMYINFO.mAvatarInfo.aInventory[mInvenPage][mIndex][3] > 0)
					{
						sprintf(Buffer, "%d", mMYINFO.mAvatarInfo.aInventory[mInvenPage][mIndex][3]);
						mUTIL.DrawFont2D(Buffer, mX + 26 * mMYINFO.mAvatarInfo.aInventory[mInvenPage][mIndex][1] + 38, mY + 26 * mMYINFO.mAvatarInfo.aInventory[mInvenPage][mIndex][2] + 207, 1);
					}
					break;
				case 6:
				case 8:
				case 9:
				case 10:
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
				case 33:
				case 34:
				case 35:
				case 36:
					if (!INVENUI::CheckPossibleEquip(item, -1))
					{
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[304], mX + 26 * mMYINFO.mAvatarInfo.aInventory[mInvenPage][mIndex][1] + 34, mY + 26 * mMYINFO.mAvatarInfo.aInventory[mInvenPage][mIndex][2] + 193);
					}
					break;
				case 7:
				case 11:
					if (!INVENUI::CheckPossibleEquip(item, -1))
					{
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[347], mX + 26 * mMYINFO.mAvatarInfo.aInventory[mInvenPage][mIndex][1] + 34, mY + 26 * mMYINFO.mAvatarInfo.aInventory[mInvenPage][mIndex][2] + 193);
					}
					break;
				default:
					continue;
				}
			}
		}
	}
	mUTIL.ChangeMoneyToString(mMYINFO.mAvatarInfo.aMoney, Buffer, &tDisplaySort);
	sY = mY + 441;
	sX = mX + 236;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, tDisplaySort);
	mUTIL.ChangeMoneyToString(mMYINFO.mAvatarInfo.aMoney2, Buffer, &tDisplaySort);
	sY = mY + 441;
	sX = mX + 115;
	tstrlen = mUTIL.GetStringLength(Buffer);
	mUTIL.DrawFont2D(Buffer, sX - tstrlen, sY, tDisplaySort);
	if (mIsClick[1])
	{
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[301], mX + 123, mY + 435, uX, uY))
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[301], mX + 123, mY + 435);
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3474], mX + 65, mY + 435, uX, uY))
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3474], mX + 65, mY + 435);
	}
	else
	{
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[300], mX + 123, mY + 435, uX, uY))
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[300], mX + 123, mY + 435);
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3473], mX + 65, mY + 435, uX, uY))
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[3473], mX + 65, mY + 435);
	}
	if (mIsClick[2])
	{
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 229, mY + 6);
	}
	switch (mInvenType)
	{
	case 2:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[749], mX, mY, uX, uY))
			mPOINTER.Set(0);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[749], mX, mY);
		switch (mRemoveSkillPage)
		{
		case 0:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[318], mX + 13, mY + 18);
			break;
		case 1:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[319], mX + 111, mY + 18);
			sprintf(Buffer, "%d / %d", 1, 2);
			sY = mY + 377;
			sX = mX + 167;
			tstrlen = mUTIL.GetStringLength(Buffer);
			mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 3);
			break;
		case 2:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[320], mX + 209, mY + 18);
			break;
		case 3:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[319], mX + 111, mY + 18);
			sprintf(Buffer, "%d / %d", 2, 2);
			sY = mY + 377;
			sX = mX + 167;
			tstrlen = mUTIL.GetStringLength(Buffer);
			mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 3);
			break;
		default:
			break;
		}
		for (mIndex = 10 * mRemoveSkillPage; mIndex < 10 * mRemoveSkillPage + 10; ++mIndex)
		{
			if (mMYINFO.mAvatarInfo.aSkill[mIndex][0] >= 1)
			{
				skill = mSKILL.Search(mMYINFO.mAvatarInfo.aSkill[mIndex][0]);
				if (skill)
				{
					if (mIndex == mRemoveSkillIndex)
						i2d = skill->sDataNumber2D + 2;
					else
						i2d = skill->sDataNumber2D + 1;
					GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[i2d], mX + 28, mY + 30 * (mIndex - 10 * mRemoveSkillPage) + 58);
					strcpy(Buffer, skill->sName);
					sY = mY + 30 * (mIndex - 10 * mRemoveSkillPage) + 63;
					sX = mX + 181;
					if (mIndex == mRemoveSkillIndex)
					{
						tstrlen = mUTIL.GetStringLength(Buffer);
						mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 3);
					}
					else
					{
						tstrlen = mUTIL.GetStringLength(Buffer);
						mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 1);
					}
				}
			}
		}
		if (mIsClick[10])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 311, mY + 6);
		if (mIsClick[11])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[751], mX + 268, mY + 377);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2628], mX + 268, mY + 377, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[750], mX + 268, mY + 377);
		}
		else
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2628], mX + 268, mY + 377);
		}
		if (mIsClick[20])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 109, mY + 373);
		if (mIsClick[21])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 207, mY + 373);
		break;
	case 3:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[749], mX, mY, uX, uY))
			mPOINTER.Set(0);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[749], mX, mY);
		switch (mRemoveSkillPage)
		{
		case 0:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[318], mX + 13, mY + 18);
			break;
		case 1:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[319], mX + 111, mY + 18);
			sprintf(Buffer, "%d / %d", 1, 2);
			sY = mY + 377;
			sX = mX + 167;
			tstrlen = mUTIL.GetStringLength(Buffer);
			mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 3);
			break;
		case 2:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[320], mX + 209, mY + 18);
			break;
		case 3:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[319], mX + 111, mY + 18);
			sprintf(Buffer, "%d / %d", 2, 2);
			sY = mY + 377;
			sX = mX + 167;
			tstrlen = mUTIL.GetStringLength(Buffer);
			mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 3);
			break;
		default:
			break;
		}
		for (mIndex = 10 * mRemoveSkillPage; mIndex < 10 * mRemoveSkillPage + 10; ++mIndex)
		{
			if (mMYINFO.mAvatarInfo.aSkill[mIndex][0] >= 1)
			{
				skill = mSKILL.Search(mMYINFO.mAvatarInfo.aSkill[mIndex][0]);
				if (skill)
				{
					if (mIndex == mRemoveSkillIndex)
						i2d = skill->sDataNumber2D + 2;
					else
						i2d = skill->sDataNumber2D + 1;
					GIMAGE2D::Display(&mGDATA.mUI_SKILLICON[i2d], mX + 28, mY + 30 * (mIndex - 10 * mRemoveSkillPage) + 58);
					strcpy(Buffer, skill->sName);
					sY = mY + 30 * (mIndex - 10 * mRemoveSkillPage) + 63;
					sX = mX + 181;
					if (mIndex == mRemoveSkillIndex)
					{
						tstrlen = mUTIL.GetStringLength(Buffer);
						mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 3);
					}
					else
					{
						tstrlen = mUTIL.GetStringLength(Buffer);
						mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 1);
					}
				}
			}
		}
		if (mIsClick[10])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 311, mY + 6);
		if (mIsClick[11])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2626], mX + 268, mY + 377);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2629], mX + 268, mY + 377, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2625], mX + 268, mY + 377);
		}
		else
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2629], mX + 268, mY + 377);
		}
		if (mIsClick[20])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 109, mY + 373);
		if (mIsClick[21])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 207, mY + 373);
		break;
	case 4:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2624], mX, mY, uX, uY))
			mPOINTER.Set(0);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[2624], mX, mY);
		switch (mRemoveStatIndex)
		{
		case 1:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], mX + 80, mY + 106);
			break;
		case 2:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], mX + 188, mY + 106);
			break;
		case 3:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], mX + 80, mY + 128);
			break;
		case 4:
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[1657], mX + 188, mY + 128);
			break;
		default:
			break;
		}
		if (mIsClick[10])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[836], mX + 134, mY + 177);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 134, mY + 177, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[835], mX + 134, mY + 177);
		}
		if (mIsClick[11])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[838], mX + 191, mY + 177);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[837], mX + 191, mY + 177, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[837], mX + 191, mY + 177);
		}
		break;
	case 5:
		mMYINFO.AdjustScreenCoord(299, 385, 59, &mX, &mY);
		mX = mX;
		mY = mY;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1190], mX, mY, uX, uY))
			mPOINTER.Set(0);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[1190], mX, mY);
		if (mIsClick[10])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 235, mY + 24);
		if (mIsClick[45])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 71, mY + 605);
		if (mIsClick[46])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 168, mY + 605);
		sprintf(Buffer, "%d / %d", 1, 3);
		sY = mY + 608;
		sX = mX + 128;
		tstrlen = mUTIL.GetStringLength(Buffer);
		mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 3);
		for (mIndex = 0; mIndex < 13; ++mIndex)
		{
			if (mTeleportZone[mMYINFO.mAvatarInfo.aTribe][mIndex])
			{
				if (mIsClick[mIndex + 11])
				{
					tDisplaySort = 2;
				}
				else if (uX <= mX + 37 || uX >= mX + 217 || uY <= mY + 18 * mIndex + 44 || uY >= mY + 18 * mIndex + 56)
				{
					tDisplaySort = 1;
				}
				else
				{
					tDisplaySort = 3;
				}
				tstr = mZONENAME.Return(mTeleportZone[mMYINFO.mAvatarInfo.aTribe][mIndex]);
				strcpy(Buffer, tstr);
				sY = mY + 18 * mIndex + 44;
				sX = mX + 127;
				tstrlen = mUTIL.GetStringLength(Buffer);
				mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, tDisplaySort);
			}
		}
		if (mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe) != -1)
		{
			for (mIndex = 13; mIndex < 17; ++mIndex)
			{
				value = mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe);
				if (mTeleportZone[value][mIndex - 13])
				{
					if (mIsClick[mIndex + 11])
					{
						tDisplaySort = 2;
					}
					else if (uX <= mX + 37 || uX >= mX + 217 || uY <= mY + 18 * mIndex + 44 || uY >= mY + 18 * mIndex + 56)
					{
						tDisplaySort = 1;
					}
					else
					{
						tDisplaySort = 3;
					}
					value = mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe);
					tstr = mZONENAME.Return(mTeleportZone[value][mIndex - 13]);
					strcpy(Buffer, tstr);
					sY = mY + 18 * mIndex + 44;
					sX = mX + 127;
					tstrlen = mUTIL.GetStringLength(Buffer);
					mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, tDisplaySort);
				}
			}
		}
		break;
	case 6:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1192], mX, mY, uX, uY))
			mPOINTER.Set(0);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[1192], mX, mY);
		if (mMYINFO.mAvatarInfo.aPreviousTribe)
		{
			if (mMYINFO.mAvatarInfo.aPreviousTribe == 1)
			{
				value = mChangeGenderIdx1;
				if (value)
				{
					if (value == 1)
					{
						value2 = mChangeGenderIdx3 + 1261;
						value3 = mChangeGenderIdx2 + 1266;
					}
				}
				else
				{
					value2 = mChangeGenderIdx3 + 1240;
					value3 = mChangeGenderIdx2 + 1248;
				}
			}
			else if (mMYINFO.mAvatarInfo.aPreviousTribe == 2)
			{
				value = mChangeGenderIdx1;
				if (value)
				{
					if (value == 1)
					{
						value2 = mChangeGenderIdx3 + 1307;
						value3 = mChangeGenderIdx2 + 1315;
					}
				}
				else
				{
					value2 = mChangeGenderIdx3 + 1286;
					value3 = mChangeGenderIdx2 + 1299;
				}
			}
		}
		else
		{
			value = mChangeGenderIdx1;
			if (value)
			{
				if (value == 1)
				{
					value2 = mChangeGenderIdx3 + 1215;
					value3 = mChangeGenderIdx2 + 1220;
				}
			}
			else
			{
				value2 = mChangeGenderIdx3 + 1194;
				value3 = mChangeGenderIdx2 + 1202;
			}
		}
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[value2], mX + 95, mY + 37);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[value3], mX + 95, mY + 37);
		if (mIsClick[10])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 86, mY + 152);
		if (mIsClick[11])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 184, mY + 152);
		if (mIsClick[12])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 86, mY + 174);
		if (mIsClick[13])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 184, mY + 174);
		if (mIsClick[14])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 86, mY + 196);
		if (mIsClick[15])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 184, mY + 196);
		if (mIsClick[16])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], mX + 146, mY + 231);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 146, mY + 231, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[9], mX + 146, mY + 231);
		}
		if (mIsClick[17])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[13], mX + 213, mY + 231);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 213, mY + 231, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[12], mX + 213, mY + 231);
		}
		if (mChangeGenderIdx1)
			tstr = mMESSAGE.Return(27);
		else
			tstr = mMESSAGE.Return(26);
		strcpy(Buffer, tstr);
		sY = mY + 155;
		sX = mX + 144;
		tstrlen = mUTIL.GetStringLength(Buffer);
		mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 1);
		tstr = mMESSAGE.Return(28);
		sprintf(Buffer, "%c %s", mChangeGenderIdx2 + 65, tstr);
		sY = mY + 177;
		sX = mX + 144;
		tstrlen = mUTIL.GetStringLength(Buffer);
		mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 1);
		tstr = mMESSAGE.Return(28);
		sprintf(Buffer, "%c %s", mChangeGenderIdx3 + 65, tstr);
		sY = mY + 199;
		sX = mX + 144;
		tstrlen = mUTIL.GetStringLength(Buffer);
		mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 1);
		break;
	case 7:
		mMYINFO.AdjustScreenCoord(299, 385, 59, &mX, &mY);
		mX = mX;
		mY = mY;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1190], mX, mY, uX, uY))
			mPOINTER.Set(0);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[1190], mX, mY);
		if (mIsClick[10])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 235, mY + 24);
		if (mIsClick[45])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 71, mY + 605);
		if (mIsClick[46])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 168, mY + 605);
		sprintf(Buffer, "%d / %d", 2, 3);
		sY = mY + 608;
		sX = mX + 128;
		tstrlen = mUTIL.GetStringLength(Buffer);
		mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 3);
		switch (mMYINFO.mAvatarInfo.aTribe)
		{
		case 0:
			tPrevZone = mMYINFO.mPresentZoneNumber;
			mMYINFO.mPresentZoneNumber = 1;
			break;
		case 1:
			tPrevZone = mMYINFO.mPresentZoneNumber;
			mMYINFO.mPresentZoneNumber = 6;
			break;
		case 2:
			tPrevZone = mMYINFO.mPresentZoneNumber;
			mMYINFO.mPresentZoneNumber = 11;
			break;
		case 3:
			tPrevZone = mMYINFO.mPresentZoneNumber;
			mMYINFO.mPresentZoneNumber = 140;
			break;
		default:
			break;
		}
		for (mIndex = 0; mIndex < mNPCUI.ReturnGuardMoveNum(); ++mIndex)
		{
			if (mNPCUI.ReturnGuardMoveZone(mIndex))
			{
				if (mIsClick[mIndex + 11])
					tColor = 2;
				else
					tColor = uX <= mX + 37 || uX >= mX + 217 || uY <= mY + 18 * mIndex + 21 || uY >= mY + 18 * mIndex + 33 ? 1 : 3;
				tstr = mNPCUI.DrawTeleportBoardInfo(mIndex);
				strcpy(Buffer, tstr);
				sY = mY + 18 * mIndex + 21;
				sX = mX + 127;
				tstrlen = mUTIL.GetStringLength(Buffer);
				mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, tColor);
				if (mNPCUI.ReturnGuardMoveZone(mIndex) == 84 && GetTickCount() - mNPCUI.mUpdateTime > 3000)
				{
					mNPCUI.mUpdateTime = GetTickCount();
					//TRANSFER::T_GET_ZONE_CONNECT_USER_SEND(&mTRANSFER, 84);
				}
			}
		}
		mMYINFO.mPresentZoneNumber = tPrevZone;
		break;
	case 8:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1192], mX, mY, uX, uY))
			mPOINTER.Set(0);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[3414], mX, mY);
		if (mMYINFO.mAvatarInfo.aPreviousTribe)
		{
			if (mMYINFO.mAvatarInfo.aPreviousTribe == 1)
			{
				if (mMYINFO.mAvatarInfo.aGender)
				{
					if (mMYINFO.mAvatarInfo.aGender == 1)
					{
						value = mChangeGenderIdx3 + 1261;
						value2 = mChangeGenderIdx2 + 1266;
					}
				}
				else
				{
					value = mChangeGenderIdx3 + 1240;
					value2 = mChangeGenderIdx2 + 1248;
				}
			}
			else if (mMYINFO.mAvatarInfo.aPreviousTribe == 2)
			{
				if (mMYINFO.mAvatarInfo.aGender)
				{
					if (mMYINFO.mAvatarInfo.aGender == 1)
					{
						value = mChangeGenderIdx3 + 1307;
						value2 = mChangeGenderIdx2 + 1315;
					}
				}
				else
				{
					value = mChangeGenderIdx3 + 1286;
					value2 = mChangeGenderIdx2 + 1299;
				}
			}
		}
		else if (mMYINFO.mAvatarInfo.aGender)
		{
			if (mMYINFO.mAvatarInfo.aGender == 1)
			{
				value = mChangeGenderIdx3 + 1215;
				value2 = mChangeGenderIdx2 + 1220;
			}
		}
		else
		{
			value = mChangeGenderIdx3 + 1194;
			value2 = mChangeGenderIdx2 + 1202;
		}
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[value], mX + 95, mY + 37);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[value2], mX + 95, mY + 37);
		if (mIsClick[10])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 86, mY + 152);
		if (mIsClick[11])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 184, mY + 152);
		if (mIsClick[12])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 86, mY + 174);
		if (mIsClick[13])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 184, mY + 174);
		if (mIsClick[14])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 86, mY + 196);
		if (mIsClick[15])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 184, mY + 196);
		if (mIsClick[16])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[10], mX + 146, mY + 231);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 146, mY + 231, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[9], mX + 146, mY + 231);
		}
		if (mIsClick[17])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[13], mX + 213, mY + 231);
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 213, mY + 231, uX, uY))
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[12], mX + 213, mY + 231);
		}
		tstr = mMESSAGE.Return(28);
		sprintf(Buffer, "%c %s", mChangeGenderIdx2 + 65, tstr);
		sY = mY + 177;
		sX = mX + 144;
		tstrlen = mUTIL.GetStringLength(Buffer);
		mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 1);
		tstr = mMESSAGE.Return(28);
		sprintf(Buffer, "%c %s", mChangeGenderIdx3 + 65, tstr);
		sY = mY + 199;
		sX = mX + 144;
		tstrlen = mUTIL.GetStringLength(Buffer);
		mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 1);
		break;
	case 9:
		mMYINFO.AdjustScreenCoord(299, 385, 59, &mX, &mY);
		mX = mX;
		mY = mY;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1190], mX, mY, uX, uY))
		{
			mPOINTER.Set(0);
		}
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[1190], mX, mY);
		if (mIsClick[10])
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 235, mY + 24);
		}
		for (mIndex = 0; mIndex < 14; ++mIndex)
		{
			if (mDungeonZone[mMYINFO.mAvatarInfo.aTribe][mIndex])
			{
				if (mIsClick[mIndex + 11])
				{
					tDisplaySort = 2;
				}
				else if (uX <= mX + 37 || uX >= mX + 217 || uY <= mY + 18 * mIndex + 44 || uY >= mY + 18 * mIndex + 56)
				{
					tDisplaySort = 1;
				}
				else
				{
					tDisplaySort = 3;
				}
				tstr = mZONENAME.Return(mDungeonZone[mMYINFO.mAvatarInfo.aTribe][mIndex]);
				strcpy(Buffer, tstr);
				sY = mY + 18 * mIndex + 44;
				sX = mX + 127;
				tstrlen = mUTIL.GetStringLength(Buffer);
				mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, tDisplaySort);
			}
		}
		/*if (mPLAY.ReturnAlliance( mMYINFO.mAvatarInfo.aTribe) != -1)
		{
			for (mIndex = 14; mIndex < 28; ++mIndex)
			{
				value = mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe);
				if (uDungeonTeleportMap[value][mIndex - 14])
				{
					if (bIsClick[mIndex + 11])
					{
						tDisplaySort = 2;
					}
					else if (uX <= uX + 37 || uX >= uX + 217 || uY <= uY + 18 * mIndex + 44 || uY >= uY + 18 * mIndex + 56)
					{
						tDisplaySort = 1;
					}
					else
					{
						tDisplaySort = 3;
					}
					value = mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe);
					tstr = mZONENAME.Return(uDungeonTeleportMap[value][mIndex - 14]);
					strcpy(Buffer, tstr);
					sY = uY + 18 * mIndex + 44;
					sX = uX + 127;
					tstrlen = mUTIL.GetStringLength(Buffer);
					mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, tDisplaySort);
				}
			}
		}*/
		break;
	case 10:
		mMYINFO.AdjustScreenCoord(299, 385, 59, &mX, &mY);
		mX = mX;
		mY = mY;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1190], mX, mY, uX, uY))
			mPOINTER.Set(0);
		GIMAGE2D::Display(&mGDATA.mUI_MAIN[1190], mX, mY);
		if (mIsClick[10])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[298], mX + 235, mY + 24);
		if (mIsClick[45])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[995], mX + 71, mY + 605);
		if (mIsClick[46])
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[996], mX + 168, mY + 605);
		sprintf(Buffer, "%d / %d", 3, 3);
		sY = mY + 608;
		sX = mX + 128;
		tstrlen = mUTIL.GetStringLength(Buffer);
		mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, 3);
		switch (mMYINFO.mAvatarInfo.aTribe)
		{
		case 0:
			tPrevZone = mMYINFO.mPresentZoneNumber;
			mMYINFO.mPresentZoneNumber = 1;
			break;
		case 1:
			tPrevZone = mMYINFO.mPresentZoneNumber;
			mMYINFO.mPresentZoneNumber = 6;
			break;
		case 2:
			tPrevZone = mMYINFO.mPresentZoneNumber;
			mMYINFO.mPresentZoneNumber = 11;
			break;
		case 3:
			tPrevZone = mMYINFO.mPresentZoneNumber;
			mMYINFO.mPresentZoneNumber = 140;
			break;
		default:
			break;
		}
		for (mIndex = 0; mIndex < mNPCUI.ReturnGuard2MoveNum(); ++mIndex)
		{
			if (mNPCUI.ReturnGuard2MoveZone(mIndex))
			{
				if (mIsClick[mIndex + 11])
					tColor = 2;
				else
					tColor = uX <= mX + 37 || uX >= mX + 217 || uY <= mY + 18 * mIndex + 21 || uY >= mY + 18 * mIndex + 33 ? 1 : 3;
				tstr = mNPCUI.ReturnGuard2MoveName(mIndex);
				strcpy(Buffer, tstr);
				sY = mY + 18 * mIndex + 21;
				sX = mX + 127;
				tstrlen = mUTIL.GetStringLength(Buffer);
				mUTIL.DrawFont2D(Buffer, sX - tstrlen / 2, sY, tColor);
				if (mNPCUI.ReturnGuard2MoveZone(mIndex) == 84 && GetTickCount() - mNPCUI.mUpdateTime > 3000)
				{
					mNPCUI.mUpdateTime = GetTickCount();
					//TRANSFER::T_GET_ZONE_CONNECT_USER_SEND(&mTRANSFER, 84);
				}
			}
		}
		mMYINFO.mPresentZoneNumber = tPrevZone;
		break;
	default:
		return;
	}
}

int INVENUI::DrawForRollOver(int uX, int uY)
{
	int a8;
	int a10;
	int a7;
	int a9;

	if (!mActive)
		return 0;
	if (mInvenType != 1)
		return 0;
	a8 = INVENUI::GetEquipIndex1(uX, uY, -1);
	if (a8 != -1)
	{
		if (a8 >= 13 && a8 < 21)
		{
			if (mMYINFO.mAvatarInfo.aHornVeinUnlockCount > a8 - 13)
			{
				INVENUI::DrawItemInfo(uX, uY, mMYINFO.mAvatarInfo.aEquip[a8][0], mMYINFO.mAvatarInfo.aEquip[a8][1], mMYINFO.mAvatarInfo.aEquip[a8][2], 1, mMYINFO.mAvatarInfo.aEquipSocket[a8][0], mMYINFO.mAvatarInfo.aEquipSocket[a8][1], mMYINFO.mAvatarInfo.aEquipSocket[a8][2], mMYINFO.mAvatarInfo.aEquipSocket[a8][3], mMYINFO.mAvatarInfo.aEquipSocket[a8][4], 0);
			}
			else
			{
				INVENUI::DrawItemInfo(uX, uY, (a8 - 13) + 19524, 0, 0, 1, 0, 0, 0, 0, 0, 0);
			}

		}
		else
		{
			INVENUI::DrawItemInfo(uX, uY, mMYINFO.mAvatarInfo.aEquip[a8][0], mMYINFO.mAvatarInfo.aEquip[a8][1], mMYINFO.mAvatarInfo.aEquip[a8][2], 1, mMYINFO.mAvatarInfo.aEquipSocket[a8][0], mMYINFO.mAvatarInfo.aEquipSocket[a8][1], mMYINFO.mAvatarInfo.aEquipSocket[a8][2], mMYINFO.mAvatarInfo.aEquipSocket[a8][3], mMYINFO.mAvatarInfo.aEquipSocket[a8][4], 0);
		}
		return 1;
	}
	a8 = INVENUI::GetTradeIndex1(uX, uY, -1);
	if (a8 != -1)
	{
		INVENUI::DrawItemInfo(
			uX,
			uY,
			mMYINFO.mAvatarInfo.aTrade[a8][0],
			mMYINFO.mAvatarInfo.aTrade[a8][1],
			mMYINFO.mAvatarInfo.aTrade[a8][2],
			1,
			mMYINFO.mAvatarInfo.aTradeSocket[a8][0],
			mMYINFO.mAvatarInfo.aTradeSocket[a8][1],
			mMYINFO.mAvatarInfo.aTradeSocket[a8][2],
			mMYINFO.mAvatarInfo.aTradeSocket[a8][3],
			mMYINFO.mAvatarInfo.aTradeSocket[a8][4],
			0);
		return 1;
	}
	a8 = INVENUI::GetPetInventory1(uX, uY, -1);
	if (a8 != -1)
	{
		INVENUI::DrawItemInfo(uX, uY, mMYINFO.mAvatarInfo.aPetInventoryData[a8], 0, 0, 1, 0, 0, 0, 0, 0, 0);
		return 1;
	}
	INVENUI::GetInventory1(uX, uY, 0, 0, &a7, &a8, &a9, &a10, -1);
	if (a7 != -1)
	{
		INVENUI::DrawItemInfo(
			uX,
			uY,
			mMYINFO.mAvatarInfo.aInventory[a7][a8][0],
			mMYINFO.mAvatarInfo.aInventory[a7][a8][3],
			mMYINFO.mAvatarInfo.aInventory[a7][a8][4],
			1,
			mMYINFO.mAvatarInfo.aInventorySocket[a7][a8][0],
			mMYINFO.mAvatarInfo.aInventorySocket[a7][a8][1],
			mMYINFO.mAvatarInfo.aInventorySocket[a7][a8][2],
			mMYINFO.mAvatarInfo.aInventorySocket[a7][a8][3],
			mMYINFO.mAvatarInfo.aInventorySocket[a7][a8][4],
			0);
		return 1;
	}
	return 0;
}
BOOL INVENUI::LBUTTONDOWN(int uX, int uY)
{
	BOOL result = 0;
	char* v4;
	char* v5;
	char* v6;
	int v7;
	int v8;
	int v9;
	ITEM_INFO* v11;
	ITEM_INFO* v12;
	int a8;
	int a10;
	int a7;
	int i;
	int v17;
	int a9;

	if (!mActive)
	{
		return 0;
	}

	switch (mInvenType)
	{
	case 1:
		// Equip
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		a8 = INVENUI::GetEquipIndex1(uX, uY, -1);
		if (a8 != -1)
		{
			if (a8 == 8)
			{
				mPetBagState = 0;
				mPetBagPage = 0;
			}
			if (mMYINFO.mAvatarInfo.aAutoHuntState == 1 && a8 == 7)
			{
				return 1;
			}
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mCHOICEUI.Set(2, 0, a8, mMYINFO.mAvatarInfo.aEquip[a8][0], mMYINFO.mAvatarInfo.aEquip[a8][1], mMYINFO.mAvatarInfo.aEquip[a8][2], mMYINFO.mAvatarInfo.aEquip[a8][3], 0, 0, 0, 0, 0);
			return 1;
		}

		// Trade
		a8 = INVENUI::GetTradeIndex1(uX, uY, -1);
		if (a8 != -1)
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			v11 = mITEM.Search(mMYINFO.mAvatarInfo.aTrade[a8][0]);
			if (!v11)
			{
				return 1;
			}
			// Se adaugă și verificarea pentru iSort == 3 (stivabile)
			if (v11->iSort == 2 || v11->iSort == 3)
			{
				if (mMYINFO.mAvatarInfo.aTrade[a8][1] <= 1)  // Verifică dacă există mai multe de 1 obiect în stivă
				{
					mCHOICEUI.Set(6, 0, a8, mMYINFO.mAvatarInfo.aTrade[a8][0], 1, mMYINFO.mAvatarInfo.aTrade[a8][2], mMYINFO.mAvatarInfo.aTrade[a8][3], 0, 0, 0, 0, 0);
					return 1;
				}
				if ((mGXD.mKeyboardImmediateData[42] & 0x80) != 0)  // Dacă este apăsată o anumită tastă
				{
					mCHOICEUI.Set(6, 0, a8, mMYINFO.mAvatarInfo.aTrade[a8][0], 0, mMYINFO.mAvatarInfo.aTrade[a8][2], mMYINFO.mAvatarInfo.aTrade[a8][3], 0, 0, 1, uX - 52, uY - 72);
					return 1;
				}
			}
			mCHOICEUI.Set(6, 0, a8, mMYINFO.mAvatarInfo.aTrade[a8][0], mMYINFO.mAvatarInfo.aTrade[a8][1], mMYINFO.mAvatarInfo.aTrade[a8][2], mMYINFO.mAvatarInfo.aTrade[a8][3], 0, 0, 0, 0, 0);
			return 1;
		}

		// Inventory
		INVENUI::GetInventory1(uX, uY, 0, 0, &a7, &a8, &a9, &a10, -1);
		if (a7 != -1)
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			v12 = mITEM.Search(mMYINFO.mAvatarInfo.aInventory[a7][a8][0]);
			if (!v12)
			{
				return 1;
			}

			// Verifică pentru obiecte cu iSort == 2 sau iSort == 3 (stivabile)
			if (v12->iSort == 2)
			{
				if (mMYINFO.mAvatarInfo.aInventory[a7][a8][3] <= 1)  // Verifică dacă există mai multe de 1 obiect în stivă
				{
					mCHOICEUI.Set(1, a7, a8, mMYINFO.mAvatarInfo.aInventory[a7][a8][0], mMYINFO.mAvatarInfo.aInventory[a7][a8][1], mMYINFO.mAvatarInfo.aInventory[a7][a8][2], 1, mMYINFO.mAvatarInfo.aInventory[a7][a8][4], mMYINFO.mAvatarInfo.aInventory[a7][a8][5], 0, 0, 0);
					return 1;
				}
				if ((mGXD.mKeyboardImmediateData[42] & 0x80) != 0)  // Dacă este apăsată o anumită tastă
				{
					mCHOICEUI.Set(1, a7, a8, mMYINFO.mAvatarInfo.aInventory[a7][a8][0], mMYINFO.mAvatarInfo.aInventory[a7][a8][1], mMYINFO.mAvatarInfo.aInventory[a7][a8][2], 0, mMYINFO.mAvatarInfo.aInventory[a7][a8][4], mMYINFO.mAvatarInfo.aInventory[a7][a8][5], 1, uX - 52, uY - 72);
					return 1;
				}
			}
			mCHOICEUI.Set(1, a7, a8, mMYINFO.mAvatarInfo.aInventory[a7][a8][0], mMYINFO.mAvatarInfo.aInventory[a7][a8][1], mMYINFO.mAvatarInfo.aInventory[a7][a8][2], mMYINFO.mAvatarInfo.aInventory[a7][a8][3], mMYINFO.mAvatarInfo.aInventory[a7][a8][4], mMYINFO.mAvatarInfo.aInventory[a7][a8][5], 0, 0, 0);
			return 1;
		}

		// Guild Flag Buttons
		/*if (strcmp(mMYINFO.mAvatarInfo.aGuildName, ""))
		{
			if (mMYINFO.mAvatarInfo.aGuildMarkEffect)
			{
				if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2594], uX + 50, uY + 412, uX, uY))
				{
					GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
					mPLAY.DemandGuildMarkEffectOff();
					return 1;
				}
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2592], uX + 30, uY + 412, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mPLAY.DemandGuildMarkEffectOn();
				return 1;
			}
		}*/
		// Inventory Tabs Button
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2412], mX + 135, mY + 169, uX, uY))
		{
			if (mInvenSort != 1)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mInvenSort = 1;
			}
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2413], mX + 173, mY + 169, uX, uY))
		{
			if (mInvenSort != 2)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mInvenSort = 2;
			}
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2414], mX + 211, mY + 169, uX, uY))
		{
			if (mInvenSort != 3)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mInvenSort = 3;
			}
			return 1;
		}
		if (mMYINFO.mAvatarInfo.aRebirth >= 12 && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4338], mX + 97, mY + 169, uX, uY))
		{
			if (mInvenSort != 4)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mInvenSort = 4;
			}
			return 1;
		}
		// Pet Inventory Tab
		if (mInvenSort == 1 && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3741], mX + 30, mY + 151, uX, uY))
		{
			if (mPSHOPUI.mActive || mNPCUI.mActive)
			{
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aEquip[8][0])
			{
				if (mMYINFO.mAvatarInfo.aEquip[8][0] == 547 || mMYINFO.mAvatarInfo.aEquip[8][0] == 548 || mMYINFO.mAvatarInfo.aEquip[8][0] == 549 || mMYINFO.mAvatarInfo.aEquip[8][0] == 550 || mMYINFO.mAvatarInfo.aEquip[8][0] == 86819 || mMYINFO.mAvatarInfo.aEquip[8][0] == 86820)
				{
					mBASICUI.Insert1(mMESSAGE.Return(2371), mFONTCOLOR.mData[44]);
				}
				else
				{
					if (mPetBagState)
					{
						mPetBagState = 0;
					}
					else
					{
						mPetBagState = 1;
					}
					mPetBagPage = 0;
					GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				}
			}
			else
			{
				mBASICUI.Insert1(mMESSAGE.Return(2366), mFONTCOLOR.mData[44]);
			}
			return 1;
		}
		// Pet Inventory 
		if (mPetBagState)
		{
			a8 = INVENUI::GetPetInventory1(uX, uY, -1);
			if (a8 != -1)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				if (mITEM.Search(mMYINFO.mAvatarInfo.aPetInventoryData[a8]))
				{
					mCHOICEUI.Set(29, 0, a8, mMYINFO.mAvatarInfo.aPetInventoryData[a8], 0, 0, 0, 0, 0, 0, 0, 0);
				}
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX - 278, mY + 6, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[3] = 1;
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX - 189, mY + 167, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[4] = 1;
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX - 91, mY + 167, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[5] = 1;
				return 1;
			}
		}
		// Inventory Button (Bag1, 2, Silver Etc)
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4339], mX + 30, mY + 406, uX, uY)) // Bag
		{
			if (mInvenPage)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mInvenPage = 0;
			}
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4340], mX + 80, mY + 406, uX, uY))
		{
			if (mInvenPage == 1)
			{
				return 1;
			}
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			if (mMYINFO.mAvatarInfo.aExpandInventoryDate >= 1)
			{
				mInvenPage = 1;
			}
			else
			{
				mBASICUI.Insert1(mMESSAGE.Return(156), mFONTCOLOR.mData[44]);
			}
			return 1;
		}
		if (mInvenSort == 3 && (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[300], mX + 123, mY + 37, uX, uY) || GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3473], mX + 67, mY + 37, uX, uY)))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[0] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[300], mX + 123, mY + 435, uX, uY) || GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3473], mX + 65, mY + 435, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[1] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 229, mY + 6, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[2] = 1;
			return 1;
		}
		if (mInvenSort == 1)
		{
			if (mUTIL.ReturnItemSort2(mMYINFO.mAvatarInfo.aEquip[8][0]) == 10 && GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[4214], mX + 30, mY + 130, uX, uY))
			{
				if (mPSHOPUI.mActive || mNPCUI.mActive)
				{
					return 1;
				}
				if (mBaguaWindowState)
				{
					mBaguaWindowState = 0;
				}
				else
				{
					mBaguaWindowState = 1;
				}
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				return 1;
			}
			if (mBaguaWindowState == 1)
			{
				mMYINFO.AdjustScreenCoord(4215, 190, 75, &mX, &mY);
				if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 575, mY + 10, uX, uY))
				{
					GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
					mIsClick[3] = 1;
					return 1;
				}
			}
		}
		if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
		{
			return 0;
		}
		return 1;


	case 2:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[318], mX + 13, mY + 18, uX, uY))
		{
			if (mRemoveSkillPage)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mRemoveSkillPage = 0;
				mRemoveSkillIndex = -1;
			}
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[319], mX + 111, mY + 18, uX, uY))
		{
			if (mRemoveSkillPage != 1)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mRemoveSkillPage = 1;
				mRemoveSkillIndex = -1;
			}
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[320], mX + 209, mY + 18, uX, uY))
		{
			if (mRemoveSkillPage != 2)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mRemoveSkillPage = 2;
				mRemoveSkillIndex = -1;
			}
			return 1;
		}
		else
		{
			if (mRemoveSkillPage == 1 || mRemoveSkillPage == 3)
			{
				if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 109, mY + 373, uX, uY))
				{
					mIsClick[20] = 1;
					GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
					return 1;
				}
				if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 207, mY + 373, uX, uY))
				{
					mIsClick[21] = 1;
					GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
					result = 1;
				}
			}
			for (i = 10 * mRemoveSkillPage; i < 10 * mRemoveSkillPage + 10; ++i)
			{
				if (mMYINFO.mAvatarInfo.aSkill[i][0] >= 1
					&& mMYINFO.mAvatarInfo.aSkill[i][0] != 139
					&& mMYINFO.mAvatarInfo.aSkill[i][0] != 140
					&& mMYINFO.mAvatarInfo.aSkill[i][0] != 141
					&& mMYINFO.mAvatarInfo.aSkill[i][0] != 142
					&& mMYINFO.mAvatarInfo.aSkill[i][0] != 143
					&& mMYINFO.mAvatarInfo.aSkill[i][0] != 144
					&& mMYINFO.mAvatarInfo.aSkill[i][0] != 145
					&& mMYINFO.mAvatarInfo.aSkill[i][0] != 146
					&& mMYINFO.mAvatarInfo.aSkill[i][0] != 147
					&& mMYINFO.mAvatarInfo.aSkill[i][0] != 148
					&& mMYINFO.mAvatarInfo.aSkill[i][0] != 149
					&& mMYINFO.mAvatarInfo.aSkill[i][0] != 150
					&& uX >= mX + 58
					&& uX <= mX + 304
					&& uY >= mY + 30 * (i - 10 * mRemoveSkillPage) + 58
					&& uY <= mY + 30 * (i - 10 * mRemoveSkillPage) + 81)
				{
					if (i != mRemoveSkillIndex)
					{
						GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
						mRemoveSkillIndex = i;
					}
					return 1;
				}
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 311, mY + 6, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[10] = 1;
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2628], mX + 268, mY + 377, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[11] = 1;
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[749], mX, mY, uX, uY))
			{
				return 1;
			}
			else
			{
				mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
				if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
				{
					return 0;
				}
				return 1;
			}
		}
		return 1;

	case 3:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[318], mX + 13, mY + 18, uX, uY))
		{
			if (mRemoveSkillPage)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mRemoveSkillPage = 0;
				mRemoveSkillIndex = -1;
			}
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[319], mX + 111, mY + 18, uX, uY))
		{
			if (mRemoveSkillPage != 1)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mRemoveSkillPage = 1;
				mRemoveSkillIndex = -1;
			}
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[320], mX + 209, mY + 18, uX, uY))
		{
			if (mRemoveSkillPage != 2)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mRemoveSkillPage = 2;
				mRemoveSkillIndex = -1;
			}
			return 1;
		}
		else
		{
			if (mRemoveSkillPage != 1 && mRemoveSkillPage != 3)
			{
				goto LABEL_171;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 109, mY + 373, uX, uY))
			{
				mIsClick[20] = 1;
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 207, mY + 373, uX, uY))
			{
				mIsClick[21] = 1;
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				result = 1;
			}
			else
			{
			LABEL_171:
				for (i = 10 * mRemoveSkillPage; i < 10 * mRemoveSkillPage + 10; ++i)
				{
					if (mMYINFO.mAvatarInfo.aSkill[i][0] >= 1
						&& mMYINFO.mAvatarInfo.aSkill[i][0] != 139
						&& mMYINFO.mAvatarInfo.aSkill[i][0] != 140
						&& mMYINFO.mAvatarInfo.aSkill[i][0] != 141
						&& mMYINFO.mAvatarInfo.aSkill[i][0] != 142
						&& mMYINFO.mAvatarInfo.aSkill[i][0] != 143
						&& mMYINFO.mAvatarInfo.aSkill[i][0] != 144
						&& mMYINFO.mAvatarInfo.aSkill[i][0] != 145
						&& mMYINFO.mAvatarInfo.aSkill[i][0] != 146
						&& mMYINFO.mAvatarInfo.aSkill[i][0] != 147
						&& mMYINFO.mAvatarInfo.aSkill[i][0] != 148
						&& mMYINFO.mAvatarInfo.aSkill[i][0] != 149
						&& mMYINFO.mAvatarInfo.aSkill[i][0] != 150
						&& uX >= mX + 58
						&& uX <= mX + 304
						&& uY >= mY + 30 * (i - 10 * mRemoveSkillPage) + 58
						&& uY <= mY + 30 * (i - 10 * mRemoveSkillPage) + 81)
					{
						if (i != mRemoveSkillIndex)
						{
							GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
							mRemoveSkillIndex = i;
						}
						return 1;
					}
				}
				if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 311, mY + 6, uX, uY))
				{
					GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
					mIsClick[10] = 1;
					return 1;
				}
				if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2629], mX + 268, mY + 377, uX, uY))
				{
					GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
					mIsClick[11] = 1;
					return 1;
				}
				if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[749], mX, mY, uX, uY))
				{
					return 1;
				}
				else
				{
					mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
					if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
					{
						return 0;
					}
					return 1;
				}
			}
		}
		return 1;

	case 4:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1657], mX + 80, mY + 106, uX, uY))
		{
			if (mRemoveStatIndex != 1)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mRemoveStatIndex = 1;
			}
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1657], mX + 188, mY + 106, uX, uY))
		{
			if (mRemoveStatIndex != 2)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mRemoveStatIndex = 2;
			}
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1657], mX + 80, mY + 128, uX, uY))
		{
			if (mRemoveStatIndex != 3)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mRemoveStatIndex = 3;
			}
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1657], mX + 188, mY + 128, uX, uY))
		{
			if (mRemoveStatIndex != 4)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mRemoveStatIndex = 4;
			}
			return 1;
		}
		else
		{
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 134, mY + 177, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[10] = 1;
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[837], mX + 191, mY + 177, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[11] = 1;
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2624], mX, mY, uX, uY))
			{
				return 1;
			}
			else
			{
				mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
				if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
				{
					return 0;
				}
				return 1;
			}
		}
		return 1;

	case 5:
		mMYINFO.AdjustScreenCoord(299, 385, 59, &mX, &mY);
		mX = mX;
		mY = mY;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 24, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[10] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 71, mY + 605, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[45] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 168, mY + 605, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[46] = 1;
			return 1;
		}
		for (i = 0; i < 13; ++i)
		{
			if (mTeleportZone[mMYINFO.mAvatarInfo.aTribe][i] && uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * i + 44 && uY < mY + 18 * i + 56)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[i + 11] = 1;
				return 1;
			}
		}
		if (mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe) != -1)
		{
			for (i = 13; i < 17; ++i)
			{
				if (mTeleportZone[mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe)][i - 13] && uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * i + 44 && uY < mY + 18 * i + 56)
				{
					GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
					mIsClick[i + 11] = 1;
					return 1;
				}
			}
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1190], mX, mY, uX, uY))
		{
			return 1;
		}
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY);

	case 6:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 86, mY + 152, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[10] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 184, mY + 152, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[11] = 1;
			result = 1;
		}
		else
		{
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 86, mY + 174, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[12] = 1;
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 184, mY + 174, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[13] = 1;
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 86, mY + 196, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[14] = 1;
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 184, mY + 196, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[15] = 1;
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 146, mY + 231, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[16] = 1;
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 213, mY + 231, uX, uY))
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[17] = 1;
				return 1;
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1192], mX, mY, uX, uY))
			{
				return 1;
			}
			else
			{
				mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
				if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
				{
					return 0;
				}
				return 1;
			}
		}
		return 1;

	case 7:
		mMYINFO.AdjustScreenCoord(299, 385, 59, &mX, &mY);
		mX = mX;
		mY = mY;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 24, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[10] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 71, mY + 605, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[45] = 1;
			return 1;
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 168, mY + 605, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[46] = 1;
			return 1;
		}
		switch (mMYINFO.mAvatarInfo.aTribe)
		{
		case 0:
			v17 = mMYINFO.mPresentZoneNumber;
			mMYINFO.mPresentZoneNumber = 1;
			break;
		case 1:
			v17 = mMYINFO.mPresentZoneNumber;
			mMYINFO.mPresentZoneNumber = 6;
			break;
		case 2:
			v17 = mMYINFO.mPresentZoneNumber;
			mMYINFO.mPresentZoneNumber = 11;
			break;
		case 3:
			v17 = mMYINFO.mPresentZoneNumber;
			mMYINFO.mPresentZoneNumber = 140;
			break;
		default:
			break;
		}
		for (i = 0; i < mNPCUI.ReturnGuardMoveNum(); ++i)
		{
			if (mNPCUI.ReturnGuardMoveZone(i) && uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * i + 21 && uY < mY + 18 * i + 33)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[i + 11] = 1;
				mMYINFO.mPresentZoneNumber = v17;
				return 1;
			}
		}
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1190], mX, mY, uX, uY))
		{
			mMYINFO.mPresentZoneNumber = v17;
			return 1;
		}
		else
		{
			mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
			if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
			{
				mMYINFO.mPresentZoneNumber = v17;
				return 0;
			}
			mMYINFO.mPresentZoneNumber = v17;
			return 1;
		}
		return 1;

	case 8:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 86, mY + 174, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[12] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 184, mY + 174, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[13] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 86, mY + 196, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[14] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 184, mY + 196, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[15] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 146, mY + 231, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[16] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 213, mY + 231, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[17] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1192], mX, mY, uX, uY))
		{
			return 1;
		}
		else
		{
			mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
			if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
			{
				return 0;
			}
			return 1;
		}
		return 1;

	case 9:
		mMYINFO.AdjustScreenCoord(299, 385, 59, &mX, &mY);
		mX = mX;
		mY = mY;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 24, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[10] = 1;
			return 1;
		}
		for (i = 0; i < 14; ++i)
		{
			if (mDungeonZone[mMYINFO.mAvatarInfo.aTribe][i] && uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * i + 44 && uY < mY + 18 * i + 56)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mIsClick[i + 11] = 1;
				return 1;
			}
		}
		/*if (mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe) != -1)
		{
			for (i = 14; i < 28; ++i)
			{
				if (uDungeonTeleportMap[mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe)][i - 14] && uX > uX + 37 && uX < uX + 217 && uY > uY + 18 * i + 44 && uY < uY + 18 * i + 56)
				{
					GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
					bIsClick[i + 11] = 1;
					return 1;
				}
			}
		}*/
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1190], mX, mY, uX, uY))
		{
			return 1;
		}
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		return GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY);

	case 10:
		mMYINFO.AdjustScreenCoord(299, 385, 59, &mX, &mY);
		mX = mX;
		mY = mY;
		if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 24, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[10] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 71, mY + 605, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[45] = 1;
			return 1;
		}
		else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 168, mY + 605, uX, uY))
		{
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mIsClick[46] = 1;
			return 1;
		}
		else
		{
			switch (mMYINFO.mAvatarInfo.aTribe)
			{
			case 0:
				v17 = mMYINFO.mPresentZoneNumber;
				mMYINFO.mPresentZoneNumber = 1;
				break;
			case 1:
				v17 = mMYINFO.mPresentZoneNumber;
				mMYINFO.mPresentZoneNumber = 6;
				break;
			case 2:
				v17 = mMYINFO.mPresentZoneNumber;
				mMYINFO.mPresentZoneNumber = 11;
				break;
			case 3:
				v17 = mMYINFO.mPresentZoneNumber;
				mMYINFO.mPresentZoneNumber = 140;
				break;
			default:
				break;
			}
			for (i = 0; i < mNPCUI.ReturnGuard2MoveNum(); ++i)
			{
				if (mNPCUI.ReturnGuard2MoveZone(i) && uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * i + 21 && uY < mY + 18 * i + 33)
				{
					GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
					mIsClick[i + 11] = 1;
					mMYINFO.mPresentZoneNumber = v17;
					return 1;
				}
			}
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[1190], mX, mY, uX, uY))
			{
				mMYINFO.mPresentZoneNumber = v17;
				return 1;
			}
			else
			{
				mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
				if (!GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[299], mX, mY, uX, uY))
				{
					mMYINFO.mPresentZoneNumber = v17;
					return 0;
				}
				mMYINFO.mPresentZoneNumber = v17;
				return 1;
			}
		}
		return 1;

	default:
		return 0;
	}
}

//BOOL INVENUI::LBUTTONUP(int uX, int uY)
//{
//	return OINVENUI_LBUTTONUP(self, uX, uY);
//}

BOOL INVENUI::LBUTTONUP(int uX, int uY)
{
	int sX, sY, i, j, k, l, tstrlen;
	int result;
	char* tstr;
	char* tstr2;
	char* tstr3;
	int value, value2, value3, tAllyTribe, tLevel;
	ITEM_INFO* Item;
	SKILL_INFO* skill;
	int tColor;
	float tCoord[3];
	int tZoneNumber;
	int mIndex;
	int tPrevZone;

	if (!mActive)
	{
		return 0;
	}
	switch (mInvenType)
	{
	case 1:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		if (mIsClick[0])
		{
			mIsClick[0] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[300], mX + 123, mY + 37, uX, uY))
			{
				if (mMYINFO.mAvatarInfo.aTradeMoney >= 1)
				{
					mCHOICEUI.Set(11, 0, 0, 0, 0, 0, 0, 0, 0, 1, uX - 52, uY - 72);
				}
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3473], mX + 67, mY + 37, uX, uY))
			{
				if (mMYINFO.mAvatarInfo.aTradeMoney2 >= 1)
				{
					mCHOICEUI.Set(24, 0, 0, 0, 0, 0, 0, 0, 0, 1, uX - 52, uY - 72);
				}
			}
			return 1;
		}
		if (mIsClick[1])
		{
			mIsClick[1] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[300], mX + 123, mY + 435, uX, uY))
			{
				if (mMYINFO.mAvatarInfo.aMoney >= 1)
				{
					mCHOICEUI.Set(10, 0, 0, 0, 0, 0, 0, 0, 0, 1, uX - 52, uY - 72);
				}
			}
			else if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[3473], mX + 65, mY + 435, uX, uY))
			{
				if (mMYINFO.mAvatarInfo.aMoney2 >= 1)
				{
					mCHOICEUI.Set(23, 0, 0, 0, 0, 0, 0, 0, 0, 1, uX - 52, uY - 72);
				}
			}
			return 1;
		}
		if (mIsClick[2])
		{
			mIsClick[2] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 229, mY + 6, uX, uY))
			{
				if (mTRADEUI.mActive)
				{
					mTRADEUI.Off(1);
				}
				if (mPSHOPUI.mActive)
				{
					mPSHOPUI.Set();
				}
				if (mNPCUI.mActive)
				{
					mNPCUI.Off();
				}
				INVENUI::Off();
			}
			return 1;
		}
		if (mPetBagState)
		{
			if (mIsClick[3])
			{
				mIsClick[3] = 0;
				if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX - 278, mY + 6, uX, uY))
				{
					mPetBagState = 0;
					mPetBagPage = 0;
				}
				return 1;
			}
			if (mIsClick[4])
			{
				mIsClick[4] = 0;
				if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX - 189, mY + 167, uX, uY))
				{
					mPetBagPage = 0;
				}
				return 1;
			}
			if (mIsClick[5])
			{
				mIsClick[5] = 0;
				if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX - 91, mY + 167, uX, uY))
				{
					if (mMYINFO.mAvatarInfo.aPetInventoryDate)
					{
						mPetBagPage = 1;
					}
					return 1;
				}
			}
		}
		return 0;

	case 2:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (mIsClick[20])
		{
			mIsClick[20] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 109, mY + 373, uX, uY))
			{
				mRemoveSkillPage = 1;
				mRemoveSkillIndex = -1;
			}
			return 1;
		}
		if (mIsClick[21])
		{
			mIsClick[21] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 207, mY + 373, uX, uY))
			{
				mRemoveSkillPage = 3;
				mRemoveSkillIndex = -1;
			}
			return 1;
		}
		if (mIsClick[10])
		{
			mIsClick[10] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 311, mY + 6, uX, uY))
			{
				mInvenType = 1;
			}
			return 1;
		}
		if (mIsClick[11])
		{
			mIsClick[11] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2628], mX + 268, mY + 377, uX, uY))
			{
				if (mRemoveSkillIndex == -1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(642), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (mMYINFO.mMoveZoneState)
				{
					return 1;
				}
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_USE_INVENTORY_ITEM_SEND(mMYINFO.mUseInventoryPage, mMYINFO.mUseInventoryIndex, mRemoveSkillIndex);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mInvenType = 1;
					return 1;
				}
			}
		}
		return 1;

	case 3:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (mIsClick[20])
		{
			mIsClick[20] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 109, mY + 373, uX, uY))
			{
				mRemoveSkillPage = 1;
				mRemoveSkillIndex = -1;
			}
			return 1;
		}
		if (mIsClick[21])
		{
			mIsClick[21] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 207, mY + 373, uX, uY))
			{
				mRemoveSkillPage = 3;
				mRemoveSkillIndex = -1;
			}
			return 1;
		}
		if (mIsClick[10])
		{
			mIsClick[10] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 311, mY + 6, uX, uY))
			{
				mInvenType = 1;
			}
			return 1;
		}
		if (mIsClick[11])
		{
			mIsClick[11] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[2629], mX + 268, mY + 377, uX, uY))
			{
				if (mRemoveSkillIndex == -1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(667), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (mMYINFO.mMoveZoneState)
				{
					return 1;
				}
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_USE_INVENTORY_ITEM_SEND(mMYINFO.mUseInventoryPage, mMYINFO.mUseInventoryIndex, mRemoveSkillIndex);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mInvenType = 1;
					return 1;
				}
			}
		}
		return 1;

	case 4:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (mIsClick[10])
		{
			mIsClick[10] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[835], mX + 134, mY + 177, uX, uY))
			{
				if (mRemoveStatIndex)
				{
					switch (mRemoveStatIndex)
					{
					case 1:
						if (mMYINFO.mAvatarInfo.aStr > 1)
						{
							break;
						}
						mBASICUI.Insert1(mMESSAGE.Return(1187), mFONTCOLOR.mData[44]);
						return 1;

					case 2:
						if (mMYINFO.mAvatarInfo.aDex > 1)
						{
							break;
						}
						mBASICUI.Insert1(mMESSAGE.Return(1187), mFONTCOLOR.mData[44]);
						return 1;

					case 3:
						if (mMYINFO.mAvatarInfo.aVit > 1)
						{
							break;
						}
						mBASICUI.Insert1(mMESSAGE.Return(1187), mFONTCOLOR.mData[44]);
						return 1;

					case 4:
						if (mMYINFO.mAvatarInfo.aInt > 1)
						{
							break;
						}
						mBASICUI.Insert1(mMESSAGE.Return(1187), mFONTCOLOR.mData[44]);
						return 1;

					default:
						break;
					}
					if (mMYINFO.mMoveZoneState)
					{
						return 1;
					}
					if (!mMYINFO.mNetworkLock)
					{
						mTRANSFER.T_USE_INVENTORY_ITEM_SEND(mMYINFO.mUseInventoryPage, mMYINFO.mUseInventoryIndex, mRemoveStatIndex);
						mMYINFO.mNetworkLock = 1;
						mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
						mInvenType = 1;
					}
					return 1;
				}
				else
				{
					mBASICUI.Insert1(mMESSAGE.Return(680), mFONTCOLOR.mData[44]);
					return 1;
				}
			}
		}
		if (mIsClick[11])
		{
			mIsClick[11] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[837], mX + 191, mY + 177, uX, uY))
			{
				mInvenType = 1;
			}
			return 1;
		}
		return 1;

	case 5:
		mMYINFO.AdjustScreenCoord(299, 385, 59, &mX, &mY);
		mX = mX;
		mY = mY;
		if (mIsClick[10])
		{
			mIsClick[10] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 24, uX, uY))
			{
				mInvenType = 1;
			}
			return 1;
		}
		else if (mIsClick[45])
		{
			mIsClick[45] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 71, mY + 605, uX, uY))
			{
				mInvenType = 5;
			}
			return 1;
		}
		else if (mIsClick[46])
		{
			mIsClick[46] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 168, mY + 605, uX, uY))
			{
				mInvenType = 7;
			}
			return 1;
		}
		else
		{
			for (mIndex = 0; mIndex < 13; ++mIndex)
			{
				if (mTeleportZone[mMYINFO.mAvatarInfo.aTribe][mIndex] && mIsClick[mIndex + 11])
				{
					mIsClick[mIndex + 11] = 0;
					if (uX <= mX + 37 || uX >= mX + 217 || uY <= mY + 18 * mIndex + 44 || uY >= mY + 18 * mIndex + 56)
					{
						return 1;
					}
					if (mMYINFO.mPresentZoneNumber != mTeleportZone[mMYINFO.mAvatarInfo.aTribe][mIndex])
					{
						tLevel = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
						if (tLevel < mZONEMAININFO.ReturnMinZoneLevelInfo(mTeleportZone[mMYINFO.mAvatarInfo.aTribe][mIndex]) || tLevel >mZONEMAININFO.ReturnMaxZoneLevelInfo(mTeleportZone[mMYINFO.mAvatarInfo.aTribe][mIndex]))
						{
							tColor = mFONTCOLOR.mData[44];
							tstr = mMESSAGE.Return(900);
							mBASICUI.Insert1(tstr, tColor);
							return 1;
						}
						INVENUI::Off();
						if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, mTeleportZone[mMYINFO.mAvatarInfo.aTribe][mIndex], &tCoord[0]))
						{
							mZONEMOVEINFO.SetFirstCoord(mTeleportZone[mMYINFO.mAvatarInfo.aTribe][mIndex], &tCoord[0]);
						}
						if (mMYINFO.mMoveZoneState)
						{
							return 1;
						}
						if (!mMYINFO.mNetworkLock)
						{
							mMYINFO.mMoveZoneState = 1;
							mMYINFO.mMoveZoneSort = 9;
							mMYINFO.mMoveZoneValue = 0;
							mMYINFO.mNextZoneNumber = mTeleportZone[mMYINFO.mAvatarInfo.aTribe][mIndex];
							memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
							mMYINFO.mAction.aType = 0;
							mMYINFO.mAction.aSort = 1;
							mMYINFO.mAction.aFrame = 0.0;
							mMYINFO.mAction.aLocation[0] = tCoord[0];
							mMYINFO.mAction.aLocation[1] = tCoord[1];
							mMYINFO.mAction.aLocation[2] = tCoord[2];
							mMYINFO.mAction.aFront = (rand() % 360);
							mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
							mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, mTeleportZone[mMYINFO.mAvatarInfo.aTribe][mIndex]);
						}
						return 1;
					}
					else
					{
						tColor = mFONTCOLOR.mData[44];
						tstr = mMESSAGE.Return(901);
						mBASICUI.Insert1(tstr, tColor);
						return 1;
					}
				}
			}
			if (mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe) != -1)
			{
				for (mIndex = 13; mIndex < 17; ++mIndex)
				{
					if (mTeleportZone[mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe)][mIndex - 13] && mIsClick[mIndex + 11])
					{

						mIsClick[mIndex + 11] = 0;
						if (uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * mIndex + 44 && uY < mY + 18 * mIndex + 56)
						{
							if (mMYINFO.mPresentZoneNumber != mTeleportZone[mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe)][mIndex - 13])
							{
								tLevel = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
								tAllyTribe = mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe);
								if (tLevel < mZONEMAININFO.ReturnMinZoneLevelInfo(mTeleportZone[tAllyTribe][mIndex - 13]) || tLevel >mZONEMAININFO.ReturnMaxZoneLevelInfo(mTeleportZone[tAllyTribe][mIndex - 13]))
								{
									tColor = mFONTCOLOR.mData[44];
									tstr = mMESSAGE.Return(900);
									mBASICUI.Insert1(tstr, tColor);
									return 1;
								}
								INVENUI::Off();
								if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, mTeleportZone[tAllyTribe][mIndex - 13], &tCoord[0]))
								{
									mZONEMOVEINFO.SetFirstCoord(mTeleportZone[tAllyTribe][mIndex - 13], &tCoord[0]);
								}
								if (mMYINFO.mMoveZoneState)
								{
									return 1;
								}
								if (!mMYINFO.mNetworkLock)
								{
									mMYINFO.mMoveZoneState = 1;
									mMYINFO.mMoveZoneSort = 9;
									mMYINFO.mMoveZoneValue = 0;
									mMYINFO.mNextZoneNumber = mTeleportZone[tAllyTribe][mIndex - 13];
									memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
									mMYINFO.mAction.aType = 0;
									mMYINFO.mAction.aSort = 1;
									mMYINFO.mAction.aFrame = 0.0;
									mMYINFO.mAction.aLocation[0] = tCoord[0];
									mMYINFO.mAction.aLocation[1] = tCoord[1];
									mMYINFO.mAction.aLocation[2] = tCoord[2];
									mMYINFO.mAction.aFront = (rand() % 360);
									mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
									tAllyTribe = mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe);
									mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, mTeleportZone[tAllyTribe][mIndex - 13]);
								}
								return 1;
							}
							else
							{
								tColor = mFONTCOLOR.mData[44];
								tstr = mMESSAGE.Return(901);
								mBASICUI.Insert1(tstr, tColor);
								return 1;
							}
						}
					}
				}
			}
		}
		return 1;

	case 6:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (mIsClick[10])
		{
			mIsClick[10] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 86, mY + 152, uX, uY))
			{
				if (mChangeGenderIdx1 == 1)
				{
					mChangeGenderIdx1 = 0;
				}
			}
			return 1;
		}
		if (mIsClick[11])
		{
			mIsClick[11] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 184, mY + 152, uX, uY))
			{
				if (!mChangeGenderIdx1)
				{
					mChangeGenderIdx1 = 1;
				}
			}
			return 1;
		}
		if (mIsClick[12])
		{
			mIsClick[12] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 86, mY + 174, uX, uY))
			{
				if (mChangeGenderIdx2 > 0)
				{
					--mChangeGenderIdx2;
				}
			}
			return 1;
		}
		if (mIsClick[13])
		{
			mIsClick[13] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 184, mY + 174, uX, uY))
			{
				if (mChangeGenderIdx2 < 6)
				{
					++mChangeGenderIdx2;
				}
			}
			return 1;
		}
		if (mIsClick[14])
		{
			mIsClick[14] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 86, mY + 196, uX, uY))
			{
				if (mChangeGenderIdx3 > 0)
				{
					--mChangeGenderIdx3;
				}
			}
			return 1;
		}
		if (mIsClick[15])
		{
			mIsClick[15] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 184, mY + 196, uX, uY))
			{
				if (mChangeGenderIdx3 < 2)
				{
					++mChangeGenderIdx3;
				}
			}
			return 1;
		}
		if (mIsClick[16])
		{
			mIsClick[16] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 146, mY + 231, uX, uY))
			{
				if (mMYINFO.mAvatarInfo.aGender == mChangeGenderIdx1 && mMYINFO.mAvatarInfo.aHeadType == mChangeGenderIdx2 && mMYINFO.mAvatarInfo.aFaceType == mChangeGenderIdx3)
				{
					mBASICUI.Insert1(mMESSAGE.Return(1457), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (mMYINFO.mMoveZoneState)
				{
					return 1;
				}
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_USE_INVENTORY_ITEM_SEND(mMYINFO.mUseInventoryPage, mMYINFO.mUseInventoryIndex, 100 * (mChangeGenderIdx3 + 1) + mChangeGenderIdx1 + 10 * (mChangeGenderIdx2 + 1) + 1);
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mInvenType = 1;
				}
				return 1;
			}
		}
		if (mIsClick[17])
		{
			mIsClick[17] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 213, mY + 231, uX, uY))
			{
				mInvenType = 1;
			}
			return 1;
		}
		return 1;

	case 7:
		mMYINFO.AdjustScreenCoord(299, 385, 59, &mX, &mY);
		mX = mX;
		mY = mY;
		if (mIsClick[10])
		{
			mIsClick[10] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 24, uX, uY))
			{
				mInvenType = 1;
			}
			return 1;
		}
		else if (mIsClick[45])
		{
			mIsClick[45] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 71, mY + 605, uX, uY))
			{
				mInvenType = 5;
			}
			return 1;
		}
		else if (mIsClick[46])
		{
			mIsClick[46] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 168, mY + 605, uX, uY))
			{
				mInvenType = 10;
			}
			return 1;
		}
		else
		{
			switch (mMYINFO.mAvatarInfo.aTribe)
			{
			case 0:
				tPrevZone = mMYINFO.mPresentZoneNumber;
				mMYINFO.mPresentZoneNumber = 1;
				break;
			case 1:
				tPrevZone = mMYINFO.mPresentZoneNumber;
				mMYINFO.mPresentZoneNumber = 6;
				break;
			case 2:
				tPrevZone = mMYINFO.mPresentZoneNumber;
				mMYINFO.mPresentZoneNumber = 11;
				break;
			case 3:
				tPrevZone = mMYINFO.mPresentZoneNumber;
				mMYINFO.mPresentZoneNumber = 140;
				break;
			default:
				break;
			}
			for (mIndex = 0; mIndex < mNPCUI.ReturnGuardMoveNum(); mIndex++)
			{
				if (mIsClick[mIndex + 11])
				{
					break;
				}
			}
			if (mIndex == mNPCUI.ReturnGuardMoveNum())
			{
				mMYINFO.mPresentZoneNumber = tPrevZone;
				return 0;
			}
			mIsClick[mIndex + 11] = 0;
			if (uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * mIndex + 21 && uY < mY + 18 * mIndex + 33)
			{
				tZoneNumber = mNPCUI.ReturnGuardMoveZone(mIndex);
				if (tZoneNumber)
				{
					tLevel = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
					if (tLevel < mZONEMAININFO.ReturnMinZoneLevelInfo(tZoneNumber) || tLevel > mZONEMAININFO.ReturnMaxZoneLevelInfo(tZoneNumber))
					{
						mBASICUI.Insert1(mMESSAGE.Return(227), mFONTCOLOR.mData[44]);
						mMYINFO.mPresentZoneNumber = tPrevZone;
						return 1;
					}
					switch (mIndex)
					{
					case 1:
						if (!mNPCUI.CheckPossibleMoveLevelBattleZone())
						{
							tstr = mMESSAGE.Return(229);
							mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
							mMYINFO.mPresentZoneNumber = tPrevZone;
							return 1;
						}
						break;
					case 2:
						if (!mNPCUI.CheckPossibleMove319ZoneNumber())
						{
							tstr = mMESSAGE.Return(229);
							mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
							mMYINFO.mPresentZoneNumber = tPrevZone;
							return 1;
						}
						break;
					case 3:
						if (mPLAY.mWorldInfo.mTribeSymbolBattle == 1)
						{
							tstr = mMESSAGE.Return(229);
							mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
							mMYINFO.mPresentZoneNumber = tPrevZone;
							return 1;
						}
						break;
					case 8:
						if (!mNPCUI.CheckPossibleMoveZone175TypeZone())
						{
							tstr = mMESSAGE.Return(229);
							mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
							mMYINFO.mPresentZoneNumber = tPrevZone;
							return 1;
						}
						if (mMYINFO.mAvatarInfo.aNineTowerKeyNum < 1)
						{
							tstr = mMESSAGE.Return(819);
							mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
							mMYINFO.mPresentZoneNumber = tPrevZone;
							return 1;
						}
						break;

					case 10:
						if (mMYINFO.mAvatarInfo.aLevel2 < 12)
						{
							tstr = mMESSAGE.Return(229);
							mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
							mMYINFO.mPresentZoneNumber = tPrevZone;
							return 1;
						}
						if (mMYINFO.mAvatarInfo.aIslandOfBloodTime < 1)
						{
							tstr = mMESSAGE.Return(1222);
							mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
							mMYINFO.mPresentZoneNumber = tPrevZone;
							return 1;
						}
						break;

					case 11:
						if (mMYINFO.mAvatarInfo.aRebirth < 1)
						{
							tstr = mMESSAGE.Return(229);
							mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
							mMYINFO.mPresentZoneNumber = tPrevZone;
							return 1;
						}
						if (mPLAY.mWorldInfo.mLifeOrDeathState[mMYINFO.mAvatarInfo.aRebirth - 1])
						{
							tstr = mMESSAGE.Return(229);
							mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
							mMYINFO.mPresentZoneNumber = tPrevZone;
							return 1;
						}
						break;

					case 12:
						if (mPLAY.mWorldInfo.mZone194State != 1)
						{
							tstr = mMESSAGE.Return(229);
							mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
							mMYINFO.mPresentZoneNumber = tPrevZone;
							return 1;
						}
						break;

					case 13:
						if (!mNPCUI.CheckPossibleEnter267TypeZoneNumber())
						{
							tstr = mMESSAGE.Return(229);
							mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
							mMYINFO.mPresentZoneNumber = tPrevZone;
							return 1;
						}
						break;

					default:
						break;
					}
					if (tPrevZone == tZoneNumber)
					{
						mBASICUI.Insert1(mMESSAGE.Return(901), mFONTCOLOR.mData[44]);
						mMYINFO.mPresentZoneNumber = tPrevZone;
						return 1;
					}
					if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, tZoneNumber, &tCoord[0]))
					{
						mZONEMOVEINFO.SetFirstCoord(tZoneNumber, &tCoord[0]);
					}
					if (!mMYINFO.mMoveZoneState)
					{
						mMYINFO.mMoveZoneState = 1;
						mMYINFO.mMoveZoneSort = 9;
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
					INVENUI::Off();
					mMYINFO.mPresentZoneNumber = tPrevZone;
					return 1;
				}
				else
				{
					mMYINFO.mPresentZoneNumber = tPrevZone;
					return 1;
				}
			}
			else
			{
				mMYINFO.mPresentZoneNumber = tPrevZone;
				return 1;
			}
		}
		return 1;

	case 8:
		mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
		mX -= 100;
		mY += 100;
		if (mIsClick[12])
		{
			mIsClick[12] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 86, mY + 174, uX, uY))
			{
				if (mChangeGenderIdx2 > 0)
				{
					--mChangeGenderIdx2;
				}
			}
			return 1;
		}
		else if (mIsClick[13])
		{
			mIsClick[13] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 184, mY + 174, uX, uY))
			{
				if (mChangeGenderIdx2 < 6)
				{
					++mChangeGenderIdx2;
				}
			}
			return 1;
		}
		else if (mIsClick[14])
		{
			mIsClick[14] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 86, mY + 196, uX, uY))
			{
				if (mChangeGenderIdx3 > 0)
				{
					--mChangeGenderIdx3;
				}
			}
			return 1;
		}
		else if (mIsClick[15])
		{
			mIsClick[15] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 184, mY + 196, uX, uY))
			{
				if (mChangeGenderIdx3 < 2)
				{
					++mChangeGenderIdx3;
				}
			}
			return 1;
		}
		else if (mIsClick[16])
		{
			mIsClick[16] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[9], mX + 146, mY + 231, uX, uY))
			{
				if (mMYINFO.mAvatarInfo.aHeadType == mChangeGenderIdx2 && mMYINFO.mAvatarInfo.aFaceType == mChangeGenderIdx3)
				{
					mBASICUI.Insert1(mMESSAGE.Return(1457), mFONTCOLOR.mData[44]);
					return 1;
				}
				else if (mMYINFO.mMoveZoneState)
				{
					return 1;
				}
				if (!mMYINFO.mNetworkLock)
				{
					mTRANSFER.T_USE_INVENTORY_ITEM_SEND(mMYINFO.mUseInventoryPage, mMYINFO.mUseInventoryIndex, 100 * (mChangeGenderIdx3 + 1) + 10 * (mChangeGenderIdx2 + 1));
					mMYINFO.mNetworkLock = 1;
					mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
					mInvenType = 1;
				}
				return 1;
			}
		}
		else if (mIsClick[17])
		{
			mIsClick[17] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[12], mX + 213, mY + 231, uX, uY))
			{
				mInvenType = 1;
			}
			return 1;
		}
		return 1;

	case 9:
		mMYINFO.AdjustScreenCoord(299, 385, 59, &mX, &mY);
		mX = mX;
		mY = mY;
		if (mIsClick[10])
		{
			mIsClick[10] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 24, uX, uY))
			{
				mInvenType = 1;
			}
			return 1;
		}
		else
		{
			for (mIndex = 0; mIndex < 13; ++mIndex)
			{
				if (mDungeonZone[mMYINFO.mAvatarInfo.aTribe][mIndex] && mIsClick[mIndex + 11])
				{
					mIsClick[mIndex + 11] = 0;
					if (uX <= mX + 37 || uX >= mX + 217 || uY <= mY + 18 * mIndex + 44 || uY >= mY + 18 * mIndex + 56)
					{
						return 1;
					}
					if (mMYINFO.mPresentZoneNumber != mDungeonZone[mMYINFO.mAvatarInfo.aTribe][mIndex])
					{
						tLevel = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
						if (tLevel < mZONEMAININFO.ReturnMinZoneLevelInfo(mDungeonZone[mMYINFO.mAvatarInfo.aTribe][mIndex]) || tLevel > mZONEMAININFO.ReturnMaxZoneLevelInfo(mDungeonZone[mMYINFO.mAvatarInfo.aTribe][mIndex]))
						{
							tColor = mFONTCOLOR.mData[44];
							tstr = mMESSAGE.Return(900);
							mBASICUI.Insert1(tstr, tColor);
							return 1;
						}
						INVENUI::Off();
						if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, mDungeonZone[mMYINFO.mAvatarInfo.aTribe][mIndex], &tCoord[0]))
						{
							mZONEMOVEINFO.SetFirstCoord(mDungeonZone[mMYINFO.mAvatarInfo.aTribe][mIndex], &tCoord[0]);
						}
						if (mMYINFO.mMoveZoneState)
						{
							return 1;
						}
						if (!mMYINFO.mNetworkLock)
						{
							mMYINFO.mMoveZoneState = 1;
							mMYINFO.mMoveZoneSort = 9;
							mMYINFO.mMoveZoneValue = 0;
							mMYINFO.mNextZoneNumber = mDungeonZone[mMYINFO.mAvatarInfo.aTribe][mIndex];
							memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
							mMYINFO.mAction.aType = 0;
							mMYINFO.mAction.aSort = 1;
							mMYINFO.mAction.aFrame = 0.0;
							mMYINFO.mAction.aLocation[0] = tCoord[0];
							mMYINFO.mAction.aLocation[1] = tCoord[1];
							mMYINFO.mAction.aLocation[2] = tCoord[2];
							mMYINFO.mAction.aFront = (rand() % 360);
							mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
							mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, mDungeonZone[mMYINFO.mAvatarInfo.aTribe][mIndex]);
						}
						return 1;
					}
					else
					{
						tColor = mFONTCOLOR.mData[44];
						tstr = mMESSAGE.Return(901);
						mBASICUI.Insert1(tstr, tColor);
						return 1;
					}
				}
			}
			if (mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe) != -1)
			{
				for (mIndex = 14; mIndex < 28; ++mIndex)
				{
					if (mDungeonZone[mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe)][mIndex - 14] && mIsClick[mIndex + 11])
					{
						mIsClick[mIndex + 11] = 0;
						if (uX <= mX + 37 || uX >= mX + 217 || uY <= mY + 18 * mIndex + 44 || uY >= mY + 18 * mIndex + 56)
						{
							return 1;
						}
						if (mMYINFO.mPresentZoneNumber != mDungeonZone[mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe)][mIndex - 14])
						{
							tLevel = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
							tAllyTribe = mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe);
							if (tLevel < mZONEMAININFO.ReturnMinZoneLevelInfo(mDungeonZone[tAllyTribe][mIndex - 14]) || tLevel > mZONEMAININFO.ReturnMaxZoneLevelInfo(mDungeonZone[tAllyTribe][mIndex - 14]))
							{
								INVENUI::Off();
								if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, mDungeonZone[tAllyTribe][mIndex - 14], &tCoord[0]))
								{
									mZONEMOVEINFO.SetFirstCoord(mDungeonZone[tAllyTribe][mIndex - 14], &tCoord[0]);
								}
								if (mMYINFO.mMoveZoneState)
								{
									return 1;
								}
								if (!mMYINFO.mNetworkLock)
								{
									mMYINFO.mMoveZoneState = 1;
									mMYINFO.mMoveZoneSort = 9;
									mMYINFO.mMoveZoneValue = 0;
									tAllyTribe = mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe);
									mMYINFO.mNextZoneNumber = mDungeonZone[tAllyTribe][mIndex - 14];
									memset(&mMYINFO.mAction, 0, sizeof(mMYINFO.mAction));
									mMYINFO.mAction.aType = 0;
									mMYINFO.mAction.aSort = 1;
									mMYINFO.mAction.aFrame = 0.0;
									mMYINFO.mAction.aLocation[0] = tCoord[0];
									mMYINFO.mAction.aLocation[1] = tCoord[1];
									mMYINFO.mAction.aLocation[2] = tCoord[2];
									mMYINFO.mAction.aFront = (rand() % 360);
									mMYINFO.mAction.aTargetFront = mMYINFO.mAction.aFront;
									tAllyTribe = mPLAY.ReturnAlliance(mMYINFO.mAvatarInfo.aTribe);
									mTRANSFER.T_DEMAND_ZONE_SERVER_INFO_2(mMYINFO.mMoveZoneSort, mDungeonZone[tAllyTribe][mIndex - 14]);
								}
								return 1;
							}
							else
							{
								tColor = mFONTCOLOR.mData[44];
								tstr = mMESSAGE.Return(900);
								mBASICUI.Insert1(tstr, tColor);
								return 1;
							}
						}
					}
				}
			}
		}
		return 1;

	case 10:
		mMYINFO.AdjustScreenCoord(299, 385, 59, &mX, &mY);
		mX = mX;
		mY = mY;
		if (mIsClick[10])
		{
			mIsClick[10] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[298], mX + 235, mY + 24, uX, uY))
			{
				mInvenType = 1;
			}
			return 1;
		}
		else if (mIsClick[45])
		{
			mIsClick[45] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[995], mX + 71, mY + 605, uX, uY))
			{
				mInvenType = 7;
			}
			return 1;
		}
		else if (mIsClick[46])
		{
			mIsClick[46] = 0;
			if (GIMAGE2D::CheckIn(&mGDATA.mUI_MAIN[996], mX + 168, mY + 605, uX, uY))
			{
				mInvenType = 10;
			}
			return 1;
		}
		else
		{
			switch (mMYINFO.mAvatarInfo.aTribe)
			{
			case 0:
				tPrevZone = mMYINFO.mPresentZoneNumber;
				mMYINFO.mPresentZoneNumber = 1;
				break;
			case 1:
				tPrevZone = mMYINFO.mPresentZoneNumber;
				mMYINFO.mPresentZoneNumber = 6;
				break;
			case 2:
				tPrevZone = mMYINFO.mPresentZoneNumber;
				mMYINFO.mPresentZoneNumber = 11;
				break;
			case 3:
				tPrevZone = mMYINFO.mPresentZoneNumber;
				mMYINFO.mPresentZoneNumber = 140;
				break;
			default:
				break;
			}
			for (mIndex = 0; mIndex < mNPCUI.ReturnGuard2MoveNum(); mIndex++)
			{
				if (mIsClick[mIndex + 11])
				{
					break;
				}
			}
			if (mIndex == mNPCUI.ReturnGuard2MoveNum())
			{
				mMYINFO.mPresentZoneNumber = tPrevZone;
				return 0;
			}
			mIsClick[mIndex + 11] = 0;
			if (uX > mX + 37 && uX < mX + 217 && uY > mY + 18 * mIndex + 21 && uY < mY + 18 * mIndex + 33)
			{
				tZoneNumber = mNPCUI.ReturnGuard2MoveZone(mIndex);
				if (tZoneNumber)
				{
					tLevel = mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1;
					if (tLevel < mZONEMAININFO.ReturnMinZoneLevelInfo(tZoneNumber) || tLevel > mZONEMAININFO.ReturnMaxZoneLevelInfo(tZoneNumber))
					{
						mBASICUI.Insert1(mMESSAGE.Return(227), mFONTCOLOR.mData[44]);
						mMYINFO.mPresentZoneNumber = tPrevZone;
						return 1;
					}
					switch (mIndex)
					{
					case 1:
					case 2:
					case 3:
					case 4:
					case 5:
					case 6:
					case 7:
					case 8:
					case 9:
						if (mMYINFO.mAvatarInfo.aZone101TypeTime >= 1)
						{
							break;
						}
						mBASICUI.Insert1(mMESSAGE.Return(483), mFONTCOLOR.mData[44]);
						mMYINFO.mPresentZoneNumber = tPrevZone;
						return 1;

					case 10:
					case 11:
					case 12:
					case 13:
						// Verificăm dacă utilizatorul poate intra în zona respectivă
						if (mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService >= 1 || mMYINFO.uLoginPremium == 3 || mMYINFO.mAvatarInfo.aLifeOrDeath > 0)
						{
							// Dacă are tichete, scădem un tichet la fiecare intrare
							if (mMYINFO.mAvatarInfo.aLifeOrDeath > 0)
							{
								mMYINFO.mAvatarInfo.aLifeOrDeath--;  // Scădem un tichet
								break;  // Ieșim din acest caz
							}
							else if (mMYINFO.uLoginPremium == 2 || mMYINFO.mAvatarInfo.aPremiumService >= 1 || mMYINFO.uLoginPremium == 3)
							{
								// Dacă are Premium sau alte drepturi, permiterea accesului
								break;
							}
							else
							{
								// Dacă nu îndeplinește condițiile (nici tichete, nici premium), afișăm mesaj de eroare
								mBASICUI.Insert1(mMESSAGE.Return(483), mFONTCOLOR.mData[44]);
								mMYINFO.mPresentZoneNumber = tPrevZone;  // Redirecționăm utilizatorul înapoi
								return 1;  // Ieșire
							}
						}
						else
						{
							// Dacă nu are drepturi nici pentru premium, nici pentru tichet
							mBASICUI.Insert1(mMESSAGE.Return(483), mFONTCOLOR.mData[44]);
							mMYINFO.mPresentZoneNumber = tPrevZone;  // Redirecționăm utilizatorul înapoi
							return 1;  // Ieșire
						}
						break;

					default:
						break;
					}
					if (tPrevZone == tZoneNumber)
					{
						mBASICUI.Insert1(mMESSAGE.Return(901), mFONTCOLOR.mData[44]);
						mMYINFO.mPresentZoneNumber = tPrevZone;
						return 1;
					}
					if (!mZONEMOVEINFO.ReturnNPCTelepoterCoord2(mMYINFO.mAvatarInfo.aTribe, tZoneNumber, &tCoord[0]))
					{
						mZONEMOVEINFO.SetFirstCoord(tZoneNumber, &tCoord[0]);
					}
					if (!mMYINFO.mMoveZoneState)
					{
						mMYINFO.mMoveZoneState = 1;
						mMYINFO.mMoveZoneSort = 9;
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
					INVENUI::Off();
					mMYINFO.mPresentZoneNumber = tPrevZone;
					return 1;
				}
				else
				{
					mMYINFO.mPresentZoneNumber = tPrevZone;
					return 1;
				}
			}
			else
			{
				mMYINFO.mPresentZoneNumber = tPrevZone;
				return 1;
			}
		}
		return 1;


	default:
		return 0;

	}
}

BOOL INVENUI::CheckPossibleEquip(ITEM_INFO* tITEM, int tEquipIndex)
{
	if (tITEM->iEquipInfo[0] != 1 && tITEM->iEquipInfo[0] - 2 != mMYINFO.mAvatarInfo.aPreviousTribe)
		return 0;
	if (tEquipIndex >= 0 && tEquipIndex <= 12 && tITEM->iEquipInfo[1] != mEquipPart[tEquipIndex])
		return 0;
	if (tITEM->iMartialLevelLimit + tITEM->iLevelLimit > mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1)
		return 0;
	if ((tITEM->iIndex == 13553 || tITEM->iIndex == 33553 || tITEM->iIndex == 53553) && mMYINFO.mAvatarInfo.aRebirth < 6)
	{
		return 0;
	}
	if ((tITEM->iIndex == 13554 || tITEM->iIndex == 33554 || tITEM->iIndex == 53554)
		&& mMYINFO.mAvatarInfo.aRebirth < 12)
	{
		return 0;
	}
	if ((tITEM->iIndex >= 87206 && tITEM->iIndex <= 87213 || tITEM->iIndex >= 87228 && tITEM->iIndex <= 87235 || tITEM->iIndex >= 87250 && tITEM->iIndex <= 87257) && mMYINFO.mAvatarInfo.aRebirth < 12)
	{
		return 0;
	}
	if ((tITEM->iIndex == 216 || tITEM->iIndex == 217 || tITEM->iIndex == 218) && mMYINFO.mAvatarInfo.aRebirth < 0)
		return 0;
	if ((tITEM->iIndex == 86754 || tITEM->iIndex == 86756 || tITEM->iIndex == 86758) && mMYINFO.mAvatarInfo.aRebirth < 6)
	{
		return 0;
	}
	if ((tITEM->iIndex == 86755 || tITEM->iIndex == 86757 || tITEM->iIndex == 86759) && mMYINFO.mAvatarInfo.aRebirth < 0)
	{
		return 0;
	}
	if (tITEM->iCheckItemSet == 3 && mMYINFO.mAvatarInfo.aRebirth < 12)
		return 0;
	if ((tITEM->iIndex == 2303 || tITEM->iIndex == 2304 || tITEM->iIndex == 2305) && mMYINFO.mAvatarInfo.aRebirth < 0)
		return 0;
	if ((mUTIL.ReturnItemSort(tITEM) == 1 || mUTIL.ReturnItemSort(tITEM) == 4 || mUTIL.ReturnItemSort(tITEM) == 11 || mUTIL.ReturnItemSort(tITEM) == 12) && mMYINFO.mAvatarInfo.aRebirth < 12)
		return 0;
	if (mUTIL.ReturnItemSort(tITEM) == 2 && mMYINFO.mAvatarInfo.aRebirth < 12)
		return 0;
	if ((mUTIL.ReturnItemSort(tITEM) == 5 || mUTIL.ReturnItemSort(tITEM) == 6) && mMYINFO.mAvatarInfo.aRebirth < 12)
		return 0;
	if (mUTIL.ReturnItemSort(tITEM) == 8 && mMYINFO.mAvatarInfo.aRebirth < 12)
		return 0;
	if (mUTIL.ReturnItemSort(tITEM) == 9 && mMYINFO.mAvatarInfo.aRebirth < 12)
		return 0;

	return 1;
}

BOOL INVENUI::RBUTTONDOWN(int uX, int uY)
{
	char Buffer[1000];
	ITEM_INFO* tITEM_INFO;
	SKILL_INFO* tSKILL;
	int tNPCIndex;
	int tPageSlot;
	int tPage;
	int tIndex;
	int a9;
	int a10;
	char* tstr;
	char* tstr2;
	char* tstr3;
	int s1, s2, s3, s4, s5;
	int tGems[5];
	int tSocketNum;
	int i, j, k;
	int index01;
	int index02;
	int index03;
	int tItemSort;
	int tMsg = 0;
	int tBoxSort = 0;

#define CHECK_RDOWN()	\
	if(!mNPCUI.mActive) \
	{ \
		break; \
	} \
	if( tPage < 0 || tPage > 1 || tIndex < 0 || tIndex > 63 ) \
	{ \
		return 1; \
	} \
	tITEM_INFO = mITEM.Search(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0]); \
	if(tITEM_INFO == NULL) \
	{ \
		return 1; \
	} \

#define SET_ITEM(num, secondstr, ...) \
	GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100); \
	mMYINFO.mUseInventoryPage = tPage; \
	mMYINFO.mUseInventoryIndex = tIndex; \
	sprintf(Buffer, __VA_ARGS__); \
	mCBOXUI.Set(num, Buffer, secondstr); \
	return 1; \


	if (!mActive)
	{
		return 0;
	}
	if (mInvenType != 1)
	{
		return 0;
	}

	memset(Buffer, 0, sizeof(Buffer));
	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	INVENUI::GetInventory1(uX, uY, 0, 0, &tPage, &tIndex, &a9, &a10, -1);
	tPageSlot = 0;
	tNPCIndex = 0;

	switch (mNPCUI.mWorkId)
	{
	case 6:
		CHECK_RDOWN();
		if (tITEM_INFO->iIndex == 837)
		{
			mBASICUI.Insert1(mMESSAGE.Return(2294), mFONTCOLOR.mData[44]);
			return 1;
		}
		if (mUTIL.FindEmptyStoreSlot(&tPageSlot, &tNPCIndex))
		{
			if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
			{
				return 1;
			}
			mPLAY.PROCESS_DATA_250_SEND(tPage, tIndex, mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3], tPageSlot, tNPCIndex, 0, 0);
			mCHOICEUI.mIsClick = 1;
			mMYINFO.mNetworkLock = 1;
			mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
			return 1;
		}
		else
		{
			mBASICUI.Insert1(mMESSAGE.Return(2309), mFONTCOLOR.mData[44]);
			return 1;
		}
		return 1;

	case 8:
		CHECK_RDOWN();
		if (tITEM_INFO->iCheckNPCSell == 1)
		{
			mBASICUI.Insert1(mMESSAGE.Return(152), mFONTCOLOR.mData[44]);
			return 1;
		}
		if (tITEM_INFO->iSort == 2)  // Verificare pentru iSort == 3
		{
			if (mUTIL.CheckOverMaximum(mMYINFO.mAvatarInfo.aMoney, mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] * tITEM_INFO->iSellCost))
			{
				mBASICUI.Insert1(mMESSAGE.Return(101), mFONTCOLOR.mData[44]);
				return 1;
			}
		}
		if (mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] > 0)
		{
			mBASICUI.Insert1(mMESSAGE.Return(152), mFONTCOLOR.mData[44]);
			return 1;
		}
		if (tITEM_INFO->iSort == 6)
		{
			mUnkA[0] = tPage;
			mUnkA[1] = tIndex;
			mCBOXUI.Set(79, mMESSAGE.Return(847), "");
			return 1;
		}
		switch (tITEM_INFO->iType)
		{
		case 1:
		case 2:
			if (tITEM_INFO->iSort >= 7 && tITEM_INFO->iSort <= 21 && mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4])
			{
				mUnkA[0] = tPage;
				mUnkA[1] = tIndex;
				tstr = mMESSAGE.Return(847);
				mCBOXUI.Set(79, tstr, "");
				return 1;
			}
			break;

		case 3:
			if (tITEM_INFO->iSort >= 7 && tITEM_INFO->iSort <= 21 && mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4])
			{
				tstr = mMESSAGE.Return(846);
				mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
				return 1;
			}
			mUnkA[0] = tPage;
			mUnkA[1] = tIndex;
			tstr = mMESSAGE.Return(847);
			mCBOXUI.Set(79, tstr, "");
			return 1;

		case 4:
		case 5:
		case 6:
			mUnkA[0] = tPage;
			mUnkA[1] = tIndex;
			tstr = mMESSAGE.Return(847);
			mCBOXUI.Set(79, tstr, "");
			return 1;

		default:
			break;
		}
		if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
		{
			return 1;
		}
		mPLAY.PROCESS_DATA_252_SEND(tPage, tIndex, mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3], 0, 0, 0, 0);
		mCHOICEUI.mIsClick = 1;
		mMYINFO.mNetworkLock = 1;
		mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
		return 1;

	case 10:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(4);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		if (mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] <= 0)
		{
			mNPCUI.mPage[tNPCIndex] = tPage;
			mNPCUI.mIndex[tNPCIndex] = tIndex;
			mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
			mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
			mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		}
		else
		{
			mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
		}
		return 1;

	case 12:
		CHECK_RDOWN();
		if (mUTIL.FindEmptySaveSlot(&tNPCIndex))
		{
			if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
			{
				return 1;
			}
			mPLAY.PROCESS_DATA_251_SEND(tPage, tIndex, mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3], 0, tNPCIndex, 0, 0);
			mCHOICEUI.mIsClick = 1;
			mMYINFO.mNetworkLock = 1;
			mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
			return 1;
		}
		else
		{
			mBASICUI.Insert1(mMESSAGE.Return(712), mFONTCOLOR.mData[44]);
			return 1;
		}
		return 1;

	case 13:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if (tITEM_INFO->iSort != 7 && tITEM_INFO->iSort != 8 && tITEM_INFO->iSort != 9 && tITEM_INFO->iSort != 10 && tITEM_INFO->iSort != 11 && tITEM_INFO->iSort != 12 && tITEM_INFO->iSort != 13 && tITEM_INFO->iSort != 14 && tITEM_INFO->iSort != 15 && tITEM_INFO->iSort != 16 && tITEM_INFO->iSort != 17 && tITEM_INFO->iSort != 18 && tITEM_INFO->iSort != 19 && tITEM_INFO->iSort != 20 && tITEM_INFO->iSort != 21 && tITEM_INFO->iSort != 29)
			{
				mBASICUI.Insert1(mMESSAGE.Return(217), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mUTIL.ReturnItemSort(tITEM_INFO) == 1 || mUTIL.ReturnItemSort(tITEM_INFO) == 4 || mUTIL.ReturnItemSort(tITEM_INFO) == 8 || mUTIL.ReturnItemSort(tITEM_INFO) == 9)
			{
				mBASICUI.Insert1(mMESSAGE.Return(2564), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iCheckImprove != 2)
			{
				mBASICUI.Insert1(mMESSAGE.Return(217), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iCheckItemSet != 3)
			{
				if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) != 40 && mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) < 50)
				{
					break;
				}
				mBASICUI.Insert1(mMESSAGE.Return(220), mFONTCOLOR.mData[44]);
				return 1;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2451), mFONTCOLOR.mData[44]);
			return 1;

		case 1:
			if (mNPCUI.mPage[0] == -1)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1400), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iIndex == 540 || tITEM_INFO->iIndex == 538 || tITEM_INFO->iIndex == 551 || tITEM_INFO->iIndex == 565 || tITEM_INFO->iIndex == 619 || tITEM_INFO->iIndex == 18007 || tITEM_INFO->iIndex == 633 || tITEM_INFO->iIndex == 825)
			{
				break;
			}
			if (mUTIL.ReturnISValue(mNPCUI.mInv[0].iImproveState) < 40)
			{
				if (tITEM_INFO->iIndex == 1019 || tITEM_INFO->iIndex == 1020 || tITEM_INFO->iIndex == 1021 || tITEM_INFO->iIndex == 1022 || tITEM_INFO->iIndex == 1023 || tITEM_INFO->iIndex == 7014)
				{
					break;
				}
				mBASICUI.Insert1(mMESSAGE.Return(218), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iIndex != 1023 && tITEM_INFO->iIndex != 1437 && tITEM_INFO->iIndex != 1457 && tITEM_INFO->iIndex != 2459 && tITEM_INFO->iIndex != 7014 && tITEM_INFO->iIndex != 7015 && tITEM_INFO->iIndex != 1243)
			{
				mBASICUI.Insert1(mMESSAGE.Return(218), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;


	case 14:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if (mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] <= 0)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1778), mFONTCOLOR.mData[44]);
				return 1;
			}
			s1 = 0;
			s2 = 0;
			s3 = 0;
			s4 = 0;
			s5 = 0;
			mUTIL.GetSocketAbility(mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0], mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1], mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2], &s1, &s2, &s3, &s4, &s5);
			if (s1 <= 0 && s2 <= 0 && s3 <= 0 && s4 <= 0 && s5 <= 0)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1800), mFONTCOLOR.mData[44]);
			return 1;

		case 1:
			if (mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] == 1212)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1777), mFONTCOLOR.mData[44]);
			return 1;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;

	case 17:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(4);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		if (mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] <= 0)
		{
			mNPCUI.mPage[tNPCIndex] = tPage;
			mNPCUI.mIndex[tNPCIndex] = tIndex;
			mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
			mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
			mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		}
		else
		{
			mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
		}
		return 1;

	case 18:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if (tITEM_INFO->iType != 3 && tITEM_INFO->iType != 4)
			{
				mBASICUI.Insert1(mMESSAGE.Return(717), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iSort != 7 && tITEM_INFO->iSort != 8 && tITEM_INFO->iSort != 9 && tITEM_INFO->iSort != 10 && tITEM_INFO->iSort != 11 && tITEM_INFO->iSort != 12 && tITEM_INFO->iSort != 13 && tITEM_INFO->iSort != 14 && tITEM_INFO->iSort != 15 && tITEM_INFO->iSort != 16 && tITEM_INFO->iSort != 17 && tITEM_INFO->iSort != 18 && tITEM_INFO->iSort != 19 && tITEM_INFO->iSort != 20 && tITEM_INFO->iSort != 21 || tITEM_INFO->iCheckHighItem != 2)
			{
				mBASICUI.Insert1(mMESSAGE.Return(718), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) < 4 || mUTIL.ReturnIUValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) < 1)
			{
				mBASICUI.Insert1(mMESSAGE.Return(719), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iMartialLevel >= 12)
			{
				mBASICUI.Insert1(mMESSAGE.Return(720), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1:
			if (tITEM_INFO->iIndex != 1024 && tITEM_INFO->iIndex != 1025)
			{
				mBASICUI.Insert1(mMESSAGE.Return(721), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		default:
			return 1;
		}
		if (mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] <= 0)
		{
			mNPCUI.mPage[tNPCIndex] = tPage;
			mNPCUI.mIndex[tNPCIndex] = tIndex;
			mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
			mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
			mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		}
		else
		{
			mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
		}
		return 1;

	case 19:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			s1 = 0;
			s2 = 0;
			s3 = 0;
			s4 = 0;
			s5 = 0;
			mUTIL.GetSocketAbility(mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0], mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1], mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2], &s1, &s2, &s3, &s4, &s5);
			if (s1 > 0 || s2 > 0 || s3 > 0 || s4 > 0 || s5 > 0)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1783), mFONTCOLOR.mData[44]);
			return 1;

		case 1:
			if ( mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] == 1213 )
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1782), mFONTCOLOR.mData[44]);
			return 1;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;

	case 22:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(1);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		if ((tITEM_INFO->iType == 3 || tITEM_INFO->iType == 4 || tITEM_INFO->iType == 5 || tITEM_INFO->iType == 6) && (tITEM_INFO->iSort == 29 || tITEM_INFO->iSort >= 7 && tITEM_INFO->iSort <= 21))
		{
			if (mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] <= 0)
			{
				mNPCUI.mPage[tNPCIndex] = tPage;
				mNPCUI.mIndex[tNPCIndex] = tIndex;
				mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
				mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
				mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
				mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
				mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
				mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
				mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
				mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
				mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
				mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
				mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
				mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
				mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
				mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
				mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
				mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
				mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
				mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
				mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
				mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
				mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
				mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
			}
			else
			{
				mBASICUI.Insert1(mMESSAGE.Return(1771), mFONTCOLOR.mData[44]);
			}
		}
		else
		{
			mBASICUI.Insert1(mMESSAGE.Return(1771), mFONTCOLOR.mData[44]);
		}
		return 1;

	case 23:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if (mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] <= 0)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1778), mFONTCOLOR.mData[44]);
				return 1;
			}
			tGems[0] = 0;
			tGems[1] = 0;
			tGems[2] = 0;
			tGems[3] = 0;
			tGems[4] = 0;
			tSocketNum = mUTIL.GetSocketAbility(mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0], mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1], mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2], &tGems[0], &tGems[1], &tGems[2], &tGems[3], &tGems[4]);
			for (i = 0; i < tSocketNum && tGems[i] > 0; ++i)
			{
				;
			}
			if (i < tSocketNum)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1799), mFONTCOLOR.mData[44]);
			return 1;

		case 1:
			if (mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] == 531 || mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] == 1244)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1780), mFONTCOLOR.mData[44]);
			return 1;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;


	case 25:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if (tITEM_INFO->iType != 3 && tITEM_INFO->iType != 4)
			{
				mBASICUI.Insert1(mMESSAGE.Return(722), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iSort != 7 && tITEM_INFO->iSort != 8 && tITEM_INFO->iSort != 9 && tITEM_INFO->iSort != 10 && tITEM_INFO->iSort != 11 && tITEM_INFO->iSort != 12 && tITEM_INFO->iSort != 13 && tITEM_INFO->iSort != 14 && tITEM_INFO->iSort != 15 && tITEM_INFO->iSort != 16 && tITEM_INFO->iSort != 17 && tITEM_INFO->iSort != 18 && tITEM_INFO->iSort != 19 && tITEM_INFO->iSort != 20 && tITEM_INFO->iSort != 21 || tITEM_INFO->iCheckLowItem != 2)
			{
				mBASICUI.Insert1(mMESSAGE.Return(723), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iType == 3)
			{
				if (tITEM_INFO->iLevel > 45)
				{
					break;
				}
			}
			return 1;

		case 1:
			if (tITEM_INFO->iIndex != 1024 && tITEM_INFO->iIndex != 1025)
			{
				mBASICUI.Insert1(mMESSAGE.Return(725), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		default:
			return 1;
		}
		if (mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] <= 0)
		{
			mNPCUI.mPage[tNPCIndex] = tPage;
			mNPCUI.mIndex[tNPCIndex] = tIndex;
			mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
			mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
			mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		}
		else
		{
			mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
		}
		return 1;

	case 26:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if (tITEM_INFO->iType == 3 || tITEM_INFO->iType == 4)
			{
				if ((tITEM_INFO->iSort == 7 || tITEM_INFO->iSort == 8 || tITEM_INFO->iSort == 9 || tITEM_INFO->iSort == 10 || tITEM_INFO->iSort == 11 || tITEM_INFO->iSort == 12 || tITEM_INFO->iSort == 13 || tITEM_INFO->iSort == 14 || tITEM_INFO->iSort == 15 || tITEM_INFO->iSort == 16 || tITEM_INFO->iSort == 17 || tITEM_INFO->iSort == 18 || tITEM_INFO->iSort == 19 || tITEM_INFO->iSort == 20 || tITEM_INFO->iSort == 21) && tITEM_INFO->iCheckHighImprove == 2)
				{
					if (mUTIL.ReturnIUValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) < 12)
					{
						if (tITEM_INFO->iCheckItemSet != 2 || mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) >= 44)
						{
							break;
						}
						mBASICUI.Insert1(mMESSAGE.Return(2356), mFONTCOLOR.mData[44]);
						return 1;
					}
					else
					{
						mBASICUI.Insert1(mMESSAGE.Return(696), mFONTCOLOR.mData[44]);
						return 1;
					}
				}
				else
				{
					mBASICUI.Insert1(mMESSAGE.Return(695), mFONTCOLOR.mData[44]);
					return 1;
				}
			}
			else
			{
				mBASICUI.Insert1(mMESSAGE.Return(694), mFONTCOLOR.mData[44]);
				return 1;
			}
			return 1;

		case 1:
			if (mUTIL.ReturnIUMaterialRate(tITEM_INFO->iIndex) > 0)
			{
				break;
			}
			if (tITEM_INFO->iType != 3 && tITEM_INFO->iCheckItemSet != 2 || tITEM_INFO->iSort != 7 && tITEM_INFO->iSort != 8 && tITEM_INFO->iSort != 9 && tITEM_INFO->iSort != 10 && tITEM_INFO->iSort != 11 && tITEM_INFO->iSort != 12 && tITEM_INFO->iSort != 13 && tITEM_INFO->iSort != 14 && tITEM_INFO->iSort != 15 && tITEM_INFO->iSort != 16 && tITEM_INFO->iSort != 17 && tITEM_INFO->iSort != 18 && tITEM_INFO->iSort != 19 && tITEM_INFO->iSort != 20 && tITEM_INFO->iSort != 21)
			{
				mBASICUI.Insert1(mMESSAGE.Return(698), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iCheckItemSet == 2)
			{
				if (tITEM_INFO->iIndex >= 88001 && tITEM_INFO->iIndex <= 88048)
				{
					mBASICUI.Insert1(mMESSAGE.Return(698), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (mUTIL.ReturnIUValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) > 0)
				{
					mBASICUI.Insert1(mMESSAGE.Return(2359), mFONTCOLOR.mData[44]);
					return 1;
				}
			}
			else if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) > 0 || mUTIL.ReturnIUValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) > 0)
			{
				mBASICUI.Insert1(mMESSAGE.Return(699), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] <= 0)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
			return 1;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;

	case 30:
		CHECK_RDOWN();
		switch (mNPCUI.mPageSort)
		{
		case 0:
			tNPCIndex = mUTIL.ReturnFreeNPCIndex(1);
			if (tNPCIndex == -1)
			{
				return 1;
			}
			if (tITEM_INFO->iType != 3 && tITEM_INFO->iType != 4)
			{
				mBASICUI.Insert1(mMESSAGE.Return(713), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1:
			tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
			if (tNPCIndex == -1)
			{
				return 1;
			}
			if (tNPCIndex)
			{
				if (tITEM_INFO->iIndex != 984 && tITEM_INFO->iIndex != 2394)
				{
					mBASICUI.Insert1(mMESSAGE.Return(2507), mFONTCOLOR.mData[44]);
					return 1;
				}
			}
			else if (mUTIL.ReturnItemSort(tITEM_INFO) != 2 || tITEM_INFO->iEquipInfo[1] == 12)
			{
				mBASICUI.Insert1(mMESSAGE.Return(714), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		if (!CheckSpaceFor2x2(tPage, mNPCUI.mInv[tNPCIndex].iX, mNPCUI.mInv[tNPCIndex].iY))
		{
			tstr = mMESSAGE.Return(734);
			mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = mNPCUI.mInv[tNPCIndex].iIndex;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = mNPCUI.mInv[tNPCIndex].iX;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = mNPCUI.mInv[tNPCIndex].iY;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = mNPCUI.mInv[tNPCIndex].iQuantity;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = mNPCUI.mInv[tNPCIndex].iImproveState;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = mNPCUI.mInv[tNPCIndex].iSerialNumber;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = mNPCUI.mInv[tNPCIndex].iSocket[0];
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = mNPCUI.mInv[tNPCIndex].iSocket[1];
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = mNPCUI.mInv[tNPCIndex].iSocket[2];
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = mNPCUI.mInv[tNPCIndex].iSocket[3];
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = mNPCUI.mInv[tNPCIndex].iSocket[4];
			mNPCUI.mPage[tNPCIndex] = -1;
			mNPCUI.mIndex[tNPCIndex] = 0;
			mNPCUI.mInv[tNPCIndex].iIndex = 0;
			mNPCUI.mInv[tNPCIndex].iX = 0;
			mNPCUI.mInv[tNPCIndex].iY = 0;
			mNPCUI.mInv[tNPCIndex].iQuantity = 0;
			mNPCUI.mInv[tNPCIndex].iImproveState = 0;
			mNPCUI.mInv[tNPCIndex].iSerialNumber = 0;
			mNPCUI.mInv[tNPCIndex].iSocket[0] = 0;
			mNPCUI.mInv[tNPCIndex].iSocket[1] = 0;
			mNPCUI.mInv[tNPCIndex].iSocket[2] = 0;
			mNPCUI.mInv[tNPCIndex].iSocket[3] = 0;
			mNPCUI.mInv[tNPCIndex].iSocket[4] = 0;
		}
		return 1;

	case 41:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(4);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		if (mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] <= 0)
		{
			mNPCUI.mPage[tNPCIndex] = tPage;
			mNPCUI.mIndex[tNPCIndex] = tIndex;
			mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
			mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
			mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		}
		else
		{
			mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
		}
		return 1;

	case 42:
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(1);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		if ((mMAIN.mWorldIndex != 40 || tITEM_INFO->iCheckPossibleDestroy == 0) && tITEM_INFO->iType == 3 && (tITEM_INFO->iSort == 7 || tITEM_INFO->iSort == 8 || tITEM_INFO->iSort == 9 || tITEM_INFO->iSort == 10 || tITEM_INFO->iSort == 11 || tITEM_INFO->iSort == 12 || tITEM_INFO->iSort == 13 || tITEM_INFO->iSort == 14 || tITEM_INFO->iSort == 15 || tITEM_INFO->iSort == 16 || tITEM_INFO->iSort == 17 || tITEM_INFO->iSort == 18 || tITEM_INFO->iSort == 19 || tITEM_INFO->iSort == 20 || tITEM_INFO->iSort == 21) && mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) >= 1)
		{
			if (mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] <= 0)
			{
				mNPCUI.mPage[tNPCIndex] = tPage;
				mNPCUI.mIndex[tNPCIndex] = tIndex;
				mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
				mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
				mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
				mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
				mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
				mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
				mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
				mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
				mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
				mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
				mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
				mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
				mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
				mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
				mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
				mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
				mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
				mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
				mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
				mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
				mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
				mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
				if (!INVENUI::CheckSpaceFor2x2(tPage, mNPCUI.mInv[tNPCIndex].iX, mNPCUI.mInv[tNPCIndex].iY))
				{
					tstr = mMESSAGE.Return(734);
					mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
					mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = mNPCUI.mInv[tNPCIndex].iIndex;
					mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = mNPCUI.mInv[tNPCIndex].iX;
					mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = mNPCUI.mInv[tNPCIndex].iY;
					mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = mNPCUI.mInv[tNPCIndex].iQuantity;
					mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = mNPCUI.mInv[tNPCIndex].iImproveState;
					mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = mNPCUI.mInv[tNPCIndex].iSerialNumber;
					mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = mNPCUI.mInv[tNPCIndex].iSocket[0];
					mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = mNPCUI.mInv[tNPCIndex].iSocket[1];
					mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = mNPCUI.mInv[tNPCIndex].iSocket[2];
					mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = mNPCUI.mInv[tNPCIndex].iSocket[3];
					mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = mNPCUI.mInv[tNPCIndex].iSocket[4];
					mNPCUI.mPage[tNPCIndex] = -1;
					mNPCUI.mIndex[tNPCIndex] = 0;
					mNPCUI.mInv[tNPCIndex].iIndex = 0;
					mNPCUI.mInv[tNPCIndex].iX = 0;
					mNPCUI.mInv[tNPCIndex].iY = 0;
					mNPCUI.mInv[tNPCIndex].iQuantity = 0;
					mNPCUI.mInv[tNPCIndex].iImproveState = 0;
					mNPCUI.mInv[tNPCIndex].iSerialNumber = 0;
					mNPCUI.mInv[tNPCIndex].iSocket[0] = 0;
					mNPCUI.mInv[tNPCIndex].iSocket[1] = 0;
					mNPCUI.mInv[tNPCIndex].iSocket[2] = 0;
					mNPCUI.mInv[tNPCIndex].iSocket[3] = 0;
					mNPCUI.mInv[tNPCIndex].iSocket[4] = 0;
				}
				return 1;
			}
			else
			{
				mBASICUI.Insert1(mMESSAGE.Return(1841), mFONTCOLOR.mData[44]);
				return 1;
			}
		}
		else
		{
			mBASICUI.Insert1(mMESSAGE.Return(1306), mFONTCOLOR.mData[44]);
			return 1;
		}
		return 1;

	case 46:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if (tITEM_INFO->iSort != 7 && tITEM_INFO->iSort != 8 && tITEM_INFO->iSort != 9 && tITEM_INFO->iSort != 10 && tITEM_INFO->iSort != 11 && tITEM_INFO->iSort != 12 && tITEM_INFO->iSort != 13 && tITEM_INFO->iSort != 14 && tITEM_INFO->iSort != 15 && tITEM_INFO->iSort != 16 && tITEM_INFO->iSort != 17 && tITEM_INFO->iSort != 18 && tITEM_INFO->iSort != 19 && tITEM_INFO->iSort != 20 && tITEM_INFO->iSort != 21 && tITEM_INFO->iSort != 29)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1395), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iType != 3 && tITEM_INFO->iType != 4)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1396), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) != 40)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1397), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1:
			if (tITEM_INFO->iIndex == 1422)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1398), mFONTCOLOR.mData[44]);
			return 1;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;

	case 51:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if (tITEM_INFO->iIndex >= 87000 && tITEM_INFO->iIndex <= 87128 || tITEM_INFO->iIndex >= 87500 && tITEM_INFO->iIndex <= 87562)
			{
				if (tITEM_INFO->iType != 3 && tITEM_INFO->iType != 4)
				{
					mBASICUI.Insert1(mMESSAGE.Return(1643), mFONTCOLOR.mData[44]);
					return 1;
				}
				if ((tITEM_INFO->iSort == 7 || tITEM_INFO->iSort == 8 || tITEM_INFO->iSort == 9 || tITEM_INFO->iSort == 10 || tITEM_INFO->iSort == 11 || tITEM_INFO->iSort == 12 || tITEM_INFO->iSort == 13 || tITEM_INFO->iSort == 14 || tITEM_INFO->iSort == 15 || tITEM_INFO->iSort == 16 || tITEM_INFO->iSort == 17 || tITEM_INFO->iSort == 18 || tITEM_INFO->iSort == 19 || tITEM_INFO->iSort == 20 || tITEM_INFO->iSort == 21) && mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) >= 30)
				{
					if ((tITEM_INFO->iIndex < 87077 || tITEM_INFO->iIndex > 87084) && (tITEM_INFO->iIndex < 87099 || tITEM_INFO->iIndex > 87106) && (tITEM_INFO->iIndex < 87121 || tITEM_INFO->iIndex > 87128) || mMYINFO.mAvatarInfo.aRebirth >= 12)
					{
						mNPCUI.mPage[tNPCIndex] = tPage;
						mNPCUI.mIndex[tNPCIndex] = tIndex;
						mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
						mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
						mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
						mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
						mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
						mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
						mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
						mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
						mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
						mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
						mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
						mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
						mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
						mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
						mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
						mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
						mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
						mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
						mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
						mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
						mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
						mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
						if (!INVENUI::CheckSpaceFor2x2(tPage, mNPCUI.mInv[tNPCIndex].iX, mNPCUI.mInv[tNPCIndex].iY))
						{
							tstr = mMESSAGE.Return(734);
							mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
							mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = mNPCUI.mInv[tNPCIndex].iIndex;
							mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = mNPCUI.mInv[tNPCIndex].iX;
							mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = mNPCUI.mInv[tNPCIndex].iY;
							mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = mNPCUI.mInv[tNPCIndex].iQuantity;
							mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = mNPCUI.mInv[tNPCIndex].iImproveState;
							mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = mNPCUI.mInv[tNPCIndex].iSerialNumber;
							mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = mNPCUI.mInv[tNPCIndex].iSocket[0];
							mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = mNPCUI.mInv[tNPCIndex].iSocket[1];
							mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = mNPCUI.mInv[tNPCIndex].iSocket[2];
							mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = mNPCUI.mInv[tNPCIndex].iSocket[3];
							mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = mNPCUI.mInv[tNPCIndex].iSocket[4];
							mNPCUI.mPage[tNPCIndex] = -1;
							mNPCUI.mIndex[tNPCIndex] = 0;
							mNPCUI.mInv[tNPCIndex].iIndex = 0;
							mNPCUI.mInv[tNPCIndex].iX = 0;
							mNPCUI.mInv[tNPCIndex].iY = 0;
							mNPCUI.mInv[tNPCIndex].iQuantity = 0;
							mNPCUI.mInv[tNPCIndex].iImproveState = 0;
							mNPCUI.mInv[tNPCIndex].iSerialNumber = 0;
							mNPCUI.mInv[tNPCIndex].iSocket[0] = 0;
							mNPCUI.mInv[tNPCIndex].iSocket[1] = 0;
							mNPCUI.mInv[tNPCIndex].iSocket[2] = 0;
							mNPCUI.mInv[tNPCIndex].iSocket[3] = 0;
							mNPCUI.mInv[tNPCIndex].iSocket[4] = 0;
						}
						return 1;
					}
					else
					{
						mBASICUI.Insert1(mMESSAGE.Return(1647), mFONTCOLOR.mData[44]);
						return 1;
					}
					return 1;
				}
			}
			mBASICUI.Insert1(mMESSAGE.Return(1644), mFONTCOLOR.mData[44]);
			return 1;

		case 1:
			if (tITEM_INFO->iIndex != 501 && tITEM_INFO->iIndex != 502 && tITEM_INFO->iIndex != 503 && tITEM_INFO->iIndex != 504 && tITEM_INFO->iIndex != 505 && tITEM_INFO->iIndex != 2401 && tITEM_INFO->iIndex != 2402 && tITEM_INFO->iIndex != 2403 && tITEM_INFO->iIndex != 2404 && tITEM_INFO->iIndex != 2405)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1643), mFONTCOLOR.mData[44]);
				return 1;
			}
			mNPCUI.mPage[tNPCIndex] = tPage;
			mNPCUI.mIndex[tNPCIndex] = tIndex;
			mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
			mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
			mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
			return 1;

		default:
			return 1;
		}
		return 1;

	case 54://Refine sistem//
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if (tITEM_INFO->iSort != 7 && tITEM_INFO->iSort != 8 && tITEM_INFO->iSort != 9 && tITEM_INFO->iSort != 10 && tITEM_INFO->iSort != 11 && tITEM_INFO->iSort != 12
				&& tITEM_INFO->iSort != 13 && tITEM_INFO->iSort != 14 && tITEM_INFO->iSort != 15 && tITEM_INFO->iSort != 16 && tITEM_INFO->iSort != 17 && tITEM_INFO->iSort != 18
				&& tITEM_INFO->iSort != 19 && tITEM_INFO->iSort != 20 && tITEM_INFO->iSort != 21 && tITEM_INFO->iSort != 29 || tITEM_INFO->iType != 3 && tITEM_INFO->iType != 4 && tITEM_INFO->iType != 5
				|| tITEM_INFO->iCheckImprove != 2 || tITEM_INFO->iCheckItemSet == 3)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1930), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mUTIL.ReturnRFValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) < 25)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1932), mFONTCOLOR.mData[44]);
			return 1;

		case 1:
			if (tITEM_INFO->iIndex == 576 || tITEM_INFO->iIndex == 824 || tITEM_INFO->iIndex == 699)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1916), mFONTCOLOR.mData[44]);
			return 1;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;

	case 56:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if (mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] <= 0)
			{
				mBASICUI.Insert1(mMESSAGE.Return(2067), mFONTCOLOR.mData[44]);
				return 1;
			}
			tGems[0] = 0;
			tGems[1] = 0;
			tGems[2] = 0;
			tGems[3] = 0;
			tGems[4] = 0;
			tSocketNum = mUTIL.GetSocketAbility(mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0], mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0], mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0], &tGems[0], &tGems[1], &tGems[2], &tGems[3], &tGems[4]);
			if (tSocketNum < 1 || tSocketNum > 4)
			{
				tstr = mMESSAGE.Return(2067);
				mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1:
			if (tNPCIndex == 1 && mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] != 690 && mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] != 823)
			{
				mBASICUI.Insert1(mMESSAGE.Return(2069), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;

	case 58:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if (tITEM_INFO->iSort != 6 || tITEM_INFO->iCheckImprove != 2)
			{
				mBASICUI.Insert1(mMESSAGE.Return(217), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) == 40)
			{
				mBASICUI.Insert1(mMESSAGE.Return(220), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1:
			if (mNPCUI.mPage[0] == -1)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1400), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iIndex != 695 && tITEM_INFO->iIndex != 696 && tITEM_INFO->iIndex != 698 && tITEM_INFO->iIndex != 826 && tITEM_INFO->iIndex != 2387 && tITEM_INFO->iIndex != 2392 && tITEM_INFO->iIndex != 2397)
			{
				mBASICUI.Insert1(mMESSAGE.Return(218), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;

	case 63:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if (mUTIL.CheckIfEliteCape(tITEM_INFO->iIndex))
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2387), mFONTCOLOR.mData[44]);
			return 1;

		case 1:
			if (tITEM_INFO->iIndex == 984 || tITEM_INFO->iIndex == 2394)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2386), mFONTCOLOR.mData[44]);
			return 1;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;

	case 66:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(4);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;


	case 67:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if ((tITEM_INFO->iSort == 28 || tITEM_INFO->iSort == 29) && tITEM_INFO->iIndex != 2253 && tITEM_INFO->iIndex != 2254 && tITEM_INFO->iIndex != 2261 && tITEM_INFO->iIndex != 2300 && tITEM_INFO->iIndex != 2301)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2507), mFONTCOLOR.mData[44]);
			return 1;

		case 1:
			if ( tITEM_INFO->iIndex != 2155	&& tITEM_INFO->iIndex != 2156 && tITEM_INFO->iIndex != 2157 && tITEM_INFO->iIndex != 2190 && tITEM_INFO->iIndex != 2150 && tITEM_INFO->iIndex != 1878 && tITEM_INFO->iIndex != 2324 && tITEM_INFO->iIndex != 2325 && tITEM_INFO->iIndex != 2447)
			{
				mBASICUI.Insert1(mMESSAGE.Return(2507), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;

	case 68:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(4);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if (tITEM_INFO->iType == 5)
			{
				return 1;
			}
			if (mUTIL.CheckIfV2Gear(tITEM_INFO->iIndex))
			{
				if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) < 50 || mUTIL.ReturnIUValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) < 12)
				{
					mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
					return 1;
				}
				break;
			}
			if (mUTIL.CheckIfRebirthCloak(tITEM_INFO->iIndex))
			{
				if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) < 50 || mUTIL.ReturnRFValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) < 1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(2732), mFONTCOLOR.mData[44]);
					return 1;
				}
				break;
			}
			if (mUTIL.CheckIfItemSort29(tITEM_INFO->iIndex))
			{
				if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) < 50 || mUTIL.ReturnIUValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) < 1 || mUTIL.ReturnRFValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) < 1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(2753), mFONTCOLOR.mData[44]);
					return 1;
				}
				break;
			}
			if (mUTIL.ReturnItemSort(tITEM_INFO) == 3)
			{
				if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) >= 40)
				{
					break;
				}
				mBASICUI.Insert1(mMESSAGE.Return(2623), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iSort != 6)
			{
				return 1;
			}
			if (tITEM_INFO->iEquipInfo[1] != 12)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2568), mFONTCOLOR.mData[44]);
			return 1;

		case 1:
			if (tITEM_INFO->iIndex != 984 && tITEM_INFO->iIndex != 2394)
			{
				mBASICUI.Insert1(mMESSAGE.Return(721), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;

	case 69:
		switch (mNPCUI.tUltimateUpgradeState[0])
		{
		case 0:
			CHECK_RDOWN();
			tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
			if (tNPCIndex == -1)
			{
				return 1;
			}
			tItemSort = mUTIL.ReturnItemSort(tITEM_INFO);
			switch (tNPCIndex)
			{
			case 0:
				if (tITEM_INFO->iSort != 6 && tITEM_INFO->iSort != 7 && tITEM_INFO->iSort != 8 && tITEM_INFO->iSort != 9 && tITEM_INFO->iSort != 10 && tITEM_INFO->iSort != 11 && tITEM_INFO->iSort != 12 && tITEM_INFO->iSort != 13 && tITEM_INFO->iSort != 14 && tITEM_INFO->iSort != 15 && tITEM_INFO->iSort != 16 && tITEM_INFO->iSort != 17 && tITEM_INFO->iSort != 18 && tITEM_INFO->iSort != 19 && tITEM_INFO->iSort != 20 && tITEM_INFO->iSort != 21 && tITEM_INFO->iSort != 29 && tITEM_INFO->iSort != 31 && tITEM_INFO->iSort != 32)
				{
					mBASICUI.Insert1(mMESSAGE.Return(217), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (tItemSort == 1 || tItemSort == 4)
				{
					if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) >= 100)
					{
						mBASICUI.Insert1(mMESSAGE.Return(2562), mFONTCOLOR.mData[44]);
						return 1;
					}
					if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) > 15)
					{
						mBASICUI.Insert1(mMESSAGE.Return(220), mFONTCOLOR.mData[44]);
						return 1;
					}
				}
				else
				{
					switch (tItemSort)
					{
					case 8:
						if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) < 100)
						{
							break;
						}
						mBASICUI.Insert1(mMESSAGE.Return(2562), mFONTCOLOR.mData[44]);
						return 1;

					case 9:
						if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) < 100)
						{
							break;
						}
						mBASICUI.Insert1(mMESSAGE.Return(2562), mFONTCOLOR.mData[44]);
						return 1;

					case 2:
					case 5:
					case 6:
						break;

					default:
						mBASICUI.Insert1(mMESSAGE.Return(2565), mFONTCOLOR.mData[44]);
						return 1;
					}
				}
				break;

			case 1:
				if (mNPCUI.mPage[0] == -1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(1400), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (tITEM_INFO->iIndex != 2332 && tITEM_INFO->iIndex != 2383 && tITEM_INFO->iIndex != 18006 && tITEM_INFO->iIndex != 2373 && tITEM_INFO->iIndex != 2374 && tITEM_INFO->iIndex != 2375 && tITEM_INFO->iIndex != 2400 && tITEM_INFO->iIndex != 2150 && tITEM_INFO->iIndex != 1878 && tITEM_INFO->iIndex != 2477 && tITEM_INFO->iIndex != 1831 && tITEM_INFO->iIndex != 1832 && tITEM_INFO->iIndex != 1952 && tITEM_INFO->iIndex != 1953 && tITEM_INFO->iIndex != 1954 && tITEM_INFO->iIndex != 1955 && tITEM_INFO->iIndex != 1948 && tITEM_INFO->iIndex != 1949 && tITEM_INFO->iIndex != 1950 && tITEM_INFO->iIndex != 1951 && tITEM_INFO->iIndex != 17133)
				{
					mBASICUI.Insert1(mMESSAGE.Return(218), mFONTCOLOR.mData[44]);
					return 1;
				}
				break;
			}
			mNPCUI.mPage[tNPCIndex] = tPage;
			mNPCUI.mIndex[tNPCIndex] = tIndex;
			mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
			mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
			mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
			return 1;

		case 1:
			CHECK_RDOWN();
			tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
			if (tNPCIndex == -1)
			{
				return 1;
			}
			switch (tNPCIndex)
			{
			case 0:
				if (tITEM_INFO->iSort != 6 && tITEM_INFO->iSort != 7 && tITEM_INFO->iSort != 8 && tITEM_INFO->iSort != 9 && tITEM_INFO->iSort != 10 && tITEM_INFO->iSort != 11 && tITEM_INFO->iSort != 12 && tITEM_INFO->iSort != 13 && tITEM_INFO->iSort != 14 && tITEM_INFO->iSort != 15 && tITEM_INFO->iSort != 16 && tITEM_INFO->iSort != 17 && tITEM_INFO->iSort != 18 && tITEM_INFO->iSort != 19 && tITEM_INFO->iSort != 20 && tITEM_INFO->iSort != 21 && tITEM_INFO->iSort != 29 && tITEM_INFO->iSort != 31 && tITEM_INFO->iSort != 32)
				{
					mBASICUI.Insert1(mMESSAGE.Return(2746), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (mUTIL.ReturnItemSort(tITEM_INFO) == 8)
				{
					if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) <= 15)
					{
						break;
					}
				}
				else
				{
					if (mUTIL.ReturnItemSort(tITEM_INFO) != 1 && mUTIL.ReturnItemSort(tITEM_INFO) != 4 || tITEM_INFO->iSort != 7 && tITEM_INFO->iSort != 9 && tITEM_INFO->iSort != 10 && tITEM_INFO->iSort != 11 && tITEM_INFO->iSort != 12)
					{
						mBASICUI.Insert1(mMESSAGE.Return(2746), mFONTCOLOR.mData[44]);
						return 1;
					}
					if (mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) <= 15)
					{
						break;
					}
				}
				mBASICUI.Insert1(mMESSAGE.Return(2562), mFONTCOLOR.mData[44]);
				return 1;

			case 1:
				if (mNPCUI.mPage[0] == -1)
				{
					mBASICUI.Insert1(mMESSAGE.Return(221), mFONTCOLOR.mData[44]);
					return 1;
				}
				if ((tITEM_INFO->iIndex < 20045 || tITEM_INFO->iIndex > 20103) && (tITEM_INFO->iIndex < 20105 || tITEM_INFO->iIndex > 20163) && (tITEM_INFO->iIndex < 17216 || tITEM_INFO->iIndex > 17274) && (tITEM_INFO->iIndex < 17276 || tITEM_INFO->iIndex > 17334))
				{
					mBASICUI.Insert1(mMESSAGE.Return(2745), mFONTCOLOR.mData[44]);
					return 1;
				}
				break;
			}
			mNPCUI.mPage[tNPCIndex] = tPage;
			mNPCUI.mIndex[tNPCIndex] = tIndex;
			mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
			mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
			mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
			mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
			mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
			mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
			mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
			mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
			mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
			return 1;

		default:
			return 1;
		}
		return 1;

	case 70:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(4);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;

	case 72:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			if (mUTIL.ReturnItemSort(tITEM_INFO) != 4)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1930), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1:
			if (mNPCUI.mPage[0] == -1)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1400), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iIndex != 2476 && tITEM_INFO->iIndex != 2482 && tITEM_INFO->iIndex != 2477)
			{
				mBASICUI.Insert1(mMESSAGE.Return(218), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;

	case 73:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(6);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
		case 1:
			if (mUTIL.ReturnItemSort(tITEM_INFO) != 2)
			{
				tstr = mMESSAGE.Return(2507);
				mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 2:
		case 3:
		case 4:
		case 5:
			if (mNPCUI.mPage[0] == -1 || mNPCUI.mPage[1] == -1)
			{
				mBASICUI.Insert1(mMESSAGE.Return(221), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iIndex != 2373 && tITEM_INFO->iIndex != 2400)
			{
				mBASICUI.Insert1(mMESSAGE.Return(2507), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;

	case 75:
		CHECK_RDOWN();
		tNPCIndex = mUTIL.ReturnFreeNPCIndex(2);
		if (tNPCIndex == -1)
		{
			return 1;
		}
		switch (tNPCIndex)
		{
		case 0:
			tItemSort = mUTIL.ReturnItemSort(tITEM_INFO);
			if (tItemSort == 8 || tItemSort == 9)
			{
				s1 = 0;
				s2 = 0;
				s3 = 0;
				s4 = 0;
				s5 = 0;
				tSocketNum = mUTIL.GetSocketAbility( mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0], mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1], mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2], &s1, &s2, &s3, &s4, &s5);
				if (tSocketNum > 4)
				{
					mBASICUI.Insert1(mMESSAGE.Return(2067), mFONTCOLOR.mData[44]);
					return 1;
				}
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2507), mFONTCOLOR.mData[44]);
			return 1;

		case 1:
			if (mNPCUI.mPage[0] == -1)
			{
				mBASICUI.Insert1(mMESSAGE.Return(221), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iIndex == 1878 || tITEM_INFO->iIndex == 2150)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2507), mFONTCOLOR.mData[44]);
			return 1;

		default:
			return 1;
		}
		mNPCUI.mPage[tNPCIndex] = tPage;
		mNPCUI.mIndex[tNPCIndex] = tIndex;
		mNPCUI.mInv[tNPCIndex].iIndex = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iX = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iY = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iQuantity = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iImproveState = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4];
		mNPCUI.mInv[tNPCIndex].iSerialNumber = mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5];
		mNPCUI.mInv[tNPCIndex].iSocket[0] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0];
		mNPCUI.mInv[tNPCIndex].iSocket[1] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1];
		mNPCUI.mInv[tNPCIndex].iSocket[2] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2];
		mNPCUI.mInv[tNPCIndex].iSocket[3] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3];
		mNPCUI.mInv[tNPCIndex].iSocket[4] = mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4];
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4] = 0;
		mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][5] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][0] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][1] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][2] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][3] = 0;
		mMYINFO.mAvatarInfo.aInventorySocket[tPage][tIndex][4] = 0;
		return 1;

	default:
		break;
	}

	if (!mNPCUI.mActive)
	{
		if (tPage == -1)
		{
			return 0;
		}
		tITEM_INFO = mITEM.Search(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0]);
		if (!tITEM_INFO)
		{
			return 1;
		}
		switch (tITEM_INFO->iSort)
		{
		case 2:
			if (tITEM_INFO->iSort != 2 || tITEM_INFO->iPotionType[0] == 7 || tITEM_INFO->iPotionType[0] == 8 || mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
			{
				break;
			}
			if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
			{
				mCInnerAuto.GetIsOn(1);
			}
			if (mUTIL.FindEmptyPageIndexHotkey(&tPageSlot, &tNPCIndex))
			{
				mPLAY.PROCESS_DATA_253_SEND(tPage, tIndex, mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][3], tPageSlot, tNPCIndex, 0, 0);
				mCHOICEUI.mIsClick = 1;
				mMYINFO.mNetworkLock = 1;
				mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
			}
			else
			{
				mBASICUI.Insert1(mMESSAGE.Return(2316), mFONTCOLOR.mData[44]);
			}
			return 1;

		case 5:
			if (tITEM_INFO->iEquipInfo[0] != 1 && mMYINFO.mAvatarInfo.aPreviousTribe != tITEM_INFO->iEquipInfo[0] - 2)
			{
				mBASICUI.Insert1(mMESSAGE.Return(420), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1 < tITEM_INFO->iMartialLevelLimit + tITEM_INFO->iLevelLimit)
			{
				mBASICUI.Insert1(mMESSAGE.Return(421), mFONTCOLOR.mData[44]);
				return 1;
			}
			for (k = 0; k < 40 && mMYINFO.mAvatarInfo.aSkill[k][0] != tITEM_INFO->iGainSkillNumber; ++k)
			{
				;
			}
			if (k < 40)
			{
				mBASICUI.Insert1(mMESSAGE.Return(422), mFONTCOLOR.mData[44]);
				return 1;
			}
			tSKILL = mSKILL.Search(tITEM_INFO->iGainSkillNumber);
			if (!tSKILL)
			{
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aSkillPoint < tSKILL->sLearnSkillPoint)
			{
				mBASICUI.Insert1(mMESSAGE.Return(423), mFONTCOLOR.mData[44]);
				return 1;
			}
			switch (tSKILL->sType)
			{
			case 1:
				for (k = 0; k < 10 && mMYINFO.mAvatarInfo.aSkill[k][0] >= 1; ++k)
				{
					;
				}
				if (k == 10)
				{
					mBASICUI.Insert1(mMESSAGE.Return(424), mFONTCOLOR.mData[44]);
					return 1;
				}
				break;

			case 2:
				for (k = 20; k < 30 && mMYINFO.mAvatarInfo.aSkill[k][0] >= 1; ++k)
				{
					;
				}
				if (k == 30)
				{
					tstr = mMESSAGE.Return(424);
					mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
					return 1;
				}
				break;

			case 3:
				for (k = 10; k < 20 && mMYINFO.mAvatarInfo.aSkill[k][0] >= 1; ++k)
				{
					;
				}
				if (k == 20)
				{
					for (k = 30; k < 40 && mMYINFO.mAvatarInfo.aSkill[k][0] >= 1; ++k)
					{
						;
					}
					if (k == 40)
					{
						tstr = mMESSAGE.Return(424);
						mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
						return 1;
					}
					break;
				}
				break;

			case 4:
				for (k = 10; k < 20 && mMYINFO.mAvatarInfo.aSkill[k][0] >= 1; ++k)
				{
					;
				}
				if (k == 20)
				{
					for (k = 30; k < 40 && mMYINFO.mAvatarInfo.aSkill[k][0] >= 1; ++k)
					{
						;
					}
					if (k == 40)
					{
						mBASICUI.Insert1(mMESSAGE.Return(424), mFONTCOLOR.mData[44]);
						return 1;
					}
					break;
				}
				break;

			default:
				return 1;
			}
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mMYINFO.mUseInventoryPage = tPage;
			mMYINFO.mUseInventoryIndex = tIndex;
			mCBOXUI.Set(7, mMESSAGE.Return(419), "");
			INVENUI::Off();
			return 1;

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
		case 33:
		case 34:
			if (mMYINFO.mCheckSendActionPacket == TRUE || mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort != 1)
			{
				mBASICUI.Insert1(mMESSAGE.Return(120), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (tITEM_INFO->iSort == 22 || tITEM_INFO->iSort == 28 || tITEM_INFO->iSort == 31 || tITEM_INFO->iSort == 32)
			{
				mPetBagState = 0;
				mPetBagPage = 0;
			}
			if (mMYINFO.mAvatarInfo.aAutoHuntState == 1)
			{
				return 1;
			}
			for (i = 0; i < 2; ++i)
			{
				for (j = 0; j < 2; ++j)
				{
					mMYINFO.mAvatarInfo.aAutoSkillAttack[i][j] = 0;
				}
			}
			for (i = 0; i < 8; ++i)
			{
				for (j = 0; j < 2; ++j)
				{
					mMYINFO.mAvatarInfo.aAutoHuntData[i][j] = 0;
				}
			}
			if (INVENUI::CheckPossibleEquip(tITEM_INFO, -1))
			{
				if ((mUTIL.ReturnItemSort2(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0]) == 1
					|| mUTIL.ReturnItemSort2(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0]) == 4
					|| mUTIL.ReturnItemSort2(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0]) == 8
					|| mUTIL.ReturnItemSort2(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][0]) == 9)
					&& mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aInventory[tPage][tIndex][4]) >= 100)
				{
					mBASICUI.Insert1(mMESSAGE.Return(2562), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (mMYINFO.mStatBalance > 0 && mUTIL.CheckZone175Type(mMYINFO.mPresentZoneNumber) == 1)
				{
					return 1;
				}
				if (mMYINFO.mMoveZoneState || mMYINFO.mNetworkLock)
				{
					return 1;
				}
				mTRANSFER.T_USE_INVENTORY_ITEM_SEND(tPage, tIndex, 0);
				mMYINFO.mNetworkLock = 1;
				mMYINFO.mSendItemPacketPostTime = mAPP[0].hPresentElapsedSeconds;
				return 1;
			}
			else
			{
				mBASICUI.Insert1(mMESSAGE.Return(418), mFONTCOLOR.mData[44]);
				return 1;
			}
			return 1;

		case 23:
		case 24:
			if (mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1 < tITEM_INFO->iMartialLevelLimit + tITEM_INFO->iLevelLimit)
			{
				mBASICUI.Insert1(mMESSAGE.Return(421), mFONTCOLOR.mData[44]);
				return 1;
			}
			for (k = 0; k < 14; ++k)
			{
				if (mMYINFO.mAvatarInfo.aCombineSkills[tITEM_INFO->iSort - 23][k] == tITEM_INFO->iIndex)
				{
					tstr = mMESSAGE.Return(136);
					mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
					return 1;
				}
			}
			for (k = 0; k < 14 && mMYINFO.mAvatarInfo.aCombineSkills[tITEM_INFO->iSort - 23][k] >= 1; ++k)
			{
				;
			}
			if (k == 14)
			{
				mBASICUI.Insert1(mMESSAGE.Return(2392), mFONTCOLOR.mData[44]);
			}
			else
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mMYINFO.mUseInventoryPage = tPage;
				mMYINFO.mUseInventoryIndex = tIndex;
				sprintf(Buffer, mMESSAGE.Return(2998), tITEM_INFO->iName);
				mCBOXUI.Set(7, Buffer, "");
				INVENUI::Off();
			}
			return 1;

		case 25:
			return 1;

		case 26:
			if (mMYINFO.mAvatarInfo.aLevel2 + mMYINFO.mAvatarInfo.aLevel1 < tITEM_INFO->iMartialLevelLimit + tITEM_INFO->iLevelLimit)
			{
				mBASICUI.Insert1(mMESSAGE.Return(421), mFONTCOLOR.mData[44]);
				return 1;
			}
			for (i = 0; i < 10; i++)
			{
				if (mMYINFO.mAvatarInfo.aWineBottle[i] == tITEM_INFO->iIndex && mMYINFO.mAvatarInfo.aWineBottle1Quantity[i] > 0)
				{
					mBASICUI.Insert1(mMESSAGE.Return(1947), mFONTCOLOR.mData[44]);
					return 1;
				}
			}
			for (i = 0; i < 10; i++)
			{
				if (mMYINFO.mAvatarInfo.aWineBottle1Quantity[i] == 0)
				{
					break;
				}
			}
			if (i != 10)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mMYINFO.mUseInventoryPage = tPage;
				mMYINFO.mUseInventoryIndex = tIndex;
				sprintf(Buffer, mMESSAGE.Return(2998), tITEM_INFO->iName);
				mCBOXUI.Set(7, Buffer, "");
				INVENUI::Off();
			}
			return 1;

		case 35:
		case 36:
			if (tITEM_INFO->iIndex % 3 != (mMYINFO.mAvatarInfo.aPreviousTribe + 1) % 3)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1521), mFONTCOLOR.mData[44]);
				return 1;
			}
			/*if (tITEM_INFO->iIndex == 376 || tITEM_INFO->iIndex == 377 || tITEM_INFO->iIndex == 378)
			{
				v825 = -1;
				mPLAY.CheckFourGuildName(mPLAY, mMYINFO.mAvatarInfo.aTribe, mMYINFO.mAvatarInfo.aGuildName, &v825);
				if (v825)
				{
					v674 = mFONTCOLOR.mData[44];
					v304 = mMESSAGE.Return(2038);
					mBASICUI.Insert1(v304, v674);
					return 0;
				}
			}*/
			for (k = 0; k < 10; ++k)
			{
				if (tITEM_INFO->iIndex == mMYINFO.mAvatarInfo.aCostume[k])
				{
					mBASICUI.Insert1(mMESSAGE.Return(1514), mFONTCOLOR.mData[44]);
					return 1;
				}
				if (!mMYINFO.mAvatarInfo.aCostume[k])
				{
					break;
				}
			}
			if (k == 10)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1516), mFONTCOLOR.mData[44]);
				return 1;
			}
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mMYINFO.mUseInventoryPage = tPage;
			mMYINFO.mUseInventoryIndex = tIndex;
			mCBOXUI.Set(7, mMESSAGE.Return(1522), "");
			return 1;

		default:
			break;
		}
		switch (tITEM_INFO->iIndex)
		{
		case 506:
		case 1017:
			if (mMYINFO.mAvatarInfo.aEatLifePotion >= 600)
			{
				mBASICUI.Insert1(mMESSAGE.Return(604), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;
			

		case 507:
		case 1018:
			if (mMYINFO.mAvatarInfo.aEatManaPotion >= 600)
			{
				mBASICUI.Insert1(mMESSAGE.Return(605), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 508:
		case 1093:
			if (mMYINFO.mAvatarInfo.aEatAgilityPotion >= 600)
			{
				mBASICUI.Insert1(mMESSAGE.Return(874), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 509:
		case 1092:
			if (mMYINFO.mAvatarInfo.aEatStrengthPotion >= 600)
			{
				mBASICUI.Insert1(mMESSAGE.Return(873), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 512:
		case 530:
		case 536:
			break;

		case 537:
			if (mMYINFO.mAvatarInfo.aRebirth < 7)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1858), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;
			

		case 539:
		case 553:
		case 554:
		case 555:
		case 556:
		case 557:
			break;

		case 558:
			if (!strcmp(mMYINFO.mAvatarInfo.aGuildName, ""))
			{
				mBASICUI.Insert1(mMESSAGE.Return(1715), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 566:
		case 567:
		case 592:
		case 574:
			break;

		case 577:
			if (mMYINFO.mAvatarInfo.aRebirth < 12)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1934), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;
			

		case 578:
			if (mMYINFO.mAvatarInfo.aEatElementAtkDefPotion / 1000 >= 600)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1926), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;
			

		case 579:
			if (mMYINFO.mAvatarInfo.aEatElementAtkDefPotion % 1000 >= 600)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1927), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;
			

		case 580:
		case 581:
		case 582:
		case 583:
		//case 584:
		case 585:
		case 586:
		case 588:
		case 589:
		case 605:
		case 606:
		case 607:
		case 608:
		case 609:
		case 613:
		case 620:
		case 621:
		case 622:
		case 623:
		case 624:
		case 625:
		case 626:
		case 627:
		case 628:
		case 629:
		case 635:
		case 642:
		case 664:
		case 691:
		case 692:
		case 693:
		case 694:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
			break;

		case 590:
			if (!mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe))
			{
				mBASICUI.Insert1(mMESSAGE.Return(842), mFONTCOLOR.mData[44]);
				return 1;
			}
			switch (mMYINFO.mAvatarInfo.aTribe)
			{
			case 0:
				if (mMYINFO.mPresentZoneNumber != 1
					&& mMYINFO.mPresentZoneNumber != 2
					&& mMYINFO.mPresentZoneNumber != 3
					&& mMYINFO.mPresentZoneNumber != 4)
				{
					mBASICUI.Insert1(mMESSAGE.Return(791), mFONTCOLOR.mData[44]);
					return 1;
				}
				break;
			case 1:
				if (mMYINFO.mPresentZoneNumber != 6
					&& mMYINFO.mPresentZoneNumber != 7
					&& mMYINFO.mPresentZoneNumber != 8
					&& mMYINFO.mPresentZoneNumber != 9)
				{
					mBASICUI.Insert1(mMESSAGE.Return(791), mFONTCOLOR.mData[44]);
					return 1;
				}
				break;
			case 2:
				if (mMYINFO.mPresentZoneNumber != 11
					&& mMYINFO.mPresentZoneNumber != 12
					&& mMYINFO.mPresentZoneNumber != 13
					&& mMYINFO.mPresentZoneNumber != 14)
				{
					mBASICUI.Insert1(mMESSAGE.Return(791), mFONTCOLOR.mData[44]);
					return 1;
				}
				break;
			case 3:
				if (mMYINFO.mPresentZoneNumber != 140
					&& mMYINFO.mPresentZoneNumber != 141
					&& mMYINFO.mPresentZoneNumber != 142
					&& mMYINFO.mPresentZoneNumber != 143)
				{
					mBASICUI.Insert1(mMESSAGE.Return(791), mFONTCOLOR.mData[44]);
					return 1;
				}
				break;
			default:
				return 1;
			}
			if (!mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
			{
				mBASICUI.Insert1(mMESSAGE.Return(824), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 591:
			if (mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) != 1)
			{
				mBASICUI.Insert1(mMESSAGE.Return(519), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) == -1 || !mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) || mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) == 1 || mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) == 2 || mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) == 3)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mMYINFO.mUseInventoryPage = tPage;
				mMYINFO.mUseInventoryIndex = tIndex;
				mInvenType = 5;
				return 1;
			}
			mBASICUI.Insert1(mMESSAGE.Return(899), mFONTCOLOR.mData[44]);
			return 1;
			//Chest registration//
		case 587:
		case 593:
		case 601://War Box
		//case 717://8 th 100%//
		case 885://Pet deity 100%
		case 883://Box Pet Rare M1 100% Gain
		case 1157://Box Pet Elite M15 100% Gain
		case 1189://Clan Return Sky
		case 1249:
		case 602:
		case 18010:
		case 18011:
		case 18012:
		case 753:
		case 754:
		case 18013:
		case 1070:
		case 18014:
		case 18015:
		case 2193://Halo Cuopon +1
		case 715:// CP Box
		case 2298:
		case 716://sag click
		case 603:
		case 604:
		case 2159:// Pet Deity Box
		case 610:
		case 686:
		case 687:
			break;

		case 611:
		case 612:
		case 652:
			if (mMYINFO.mAvatarInfo.aAnimalIndex < 0 || mMYINFO.mAvatarInfo.aAnimalIndex < 10)
			{
				mBASICUI.Insert1(mMESSAGE.Return(2186), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mUTIL.ReturnMountSort(mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber) == 30)
			{
				mBASICUI.Insert1(mMESSAGE.Return(2555), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 632://Rebirth Pill
			if (mMYINFO.mAvatarInfo.aLevel2 != 12)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1235), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aRebirth >= 6)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1238), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aGeneralExperience2 != 1481117817)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1236), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 636:
			if (mMYINFO.mAvatarInfo.aEatLifePotion > 190)
			{
				mBASICUI.Insert1(mMESSAGE.Return(604), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 637:
			if (mMYINFO.mAvatarInfo.aEatManaPotion > 190)
			{
				mBASICUI.Insert1(mMESSAGE.Return(605), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 638:
			if (mMYINFO.mAvatarInfo.aEatStrengthPotion > 190)
			{
				mBASICUI.Insert1(mMESSAGE.Return(873), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 639:
			if (mMYINFO.mAvatarInfo.aEatAgilityPotion > 190)
			{
				mBASICUI.Insert1(mMESSAGE.Return(874), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 640:
			if (mMYINFO.mAvatarInfo.aEatElementAtkDefPotion / 1000 > 190)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1926), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 641:
			if (mMYINFO.mAvatarInfo.aEatElementAtkDefPotion % 1000 > 190)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1927), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 649:
			if (mMYINFO.mAvatarInfo.aLevel1 < 113)
			{
				mBASICUI.Insert1(mMESSAGE.Return(524), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aLevel2 == 12 && mLEVEL.ReturnHighExpValue(mMYINFO.mAvatarInfo.aLevel2) == mMYINFO.mAvatarInfo.aGeneralExperience2)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1576), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 650:
			if (mMYINFO.mAvatarInfo.aLevel1 < 113)
			{
				mBASICUI.Insert1(mMESSAGE.Return(524), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aLevel2 == 12 && mLEVEL.ReturnHighExpValue(mMYINFO.mAvatarInfo.aLevel2) == mMYINFO.mAvatarInfo.aGeneralExperience2)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1576), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 651:
			if (mMYINFO.mAvatarInfo.aEatStrengthPotion < 200 || mMYINFO.mAvatarInfo.aEatAgilityPotion < 200 || mMYINFO.mAvatarInfo.aEatManaPotion < 200 || mMYINFO.mAvatarInfo.aEatLifePotion < 200)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2203), mFONTCOLOR.mData[44]);
			return 1;

		case 665:
			sprintf(Buffer, mMESSAGE.Return(2998), tITEM_INFO->iName);
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mMYINFO.mUseInventoryPage = tPage;
			mMYINFO.mUseInventoryIndex = tIndex;
			mTOWERBUILDUI.Set(1);
			return 1;

		case 707:
			if (mMYINFO.mAvatarInfo.aDiamondPill < 12)
			{
				if (mMYINFO.mAvatarInfo.aDiamondPill < mMYINFO.mAvatarInfo.aRebirth)
				{
					break;
				}
				mBASICUI.Insert1(mMESSAGE.Return(2303), mFONTCOLOR.mData[44]);
				return 1;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2380), mFONTCOLOR.mData[44]);
			return 1;

		case 712:
			if (mMYINFO.mAvatarInfo.aLevel2 >= 12)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1213), mFONTCOLOR.mData[44]);
			return 1;

		case 713:
			if (mMYINFO.mAvatarInfo.aLevel2 >= 12)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1213), mFONTCOLOR.mData[44]);
			return 1;

		case 1066:
			if (mMYINFO.mAvatarInfo.aAutoHuntState != 1)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mMYINFO.mUseInventoryPage = tPage;
				mMYINFO.mUseInventoryIndex = tIndex;
				mInvenType = 2;
				mRemoveSkillPage = 0;
				mRemoveSkillIndex = -1;
			}
			return 1;

		case 801:
			if (mMYINFO.mAvatarInfo.aLevel2 < 12)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1213), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aEatLifePotion >= 200)
			{
				if (mMYINFO.mAvatarInfo.aEatLifePotion < 300)
				{
					break;
				}
				mBASICUI.Insert1(mMESSAGE.Return(2324), mFONTCOLOR.mData[44]);
				return 1;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2280), mFONTCOLOR.mData[44]);
			return 1;

		case 802:
			if (mMYINFO.mAvatarInfo.aLevel2 < 12)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1213), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aEatManaPotion >= 200)
			{
				if (mMYINFO.mAvatarInfo.aEatManaPotion < 300)
				{
					break;
				}
				mBASICUI.Insert1(mMESSAGE.Return(2325), mFONTCOLOR.mData[44]);
				return 1;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2281), mFONTCOLOR.mData[44]);
			return 1;

		case 803:
			if (mMYINFO.mAvatarInfo.aLevel2 < 12)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1213), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aEatStrengthPotion >= 200)
			{
				if (mMYINFO.mAvatarInfo.aEatStrengthPotion < 300)
				{
					break;
				}

				mBASICUI.Insert1(mMESSAGE.Return(2326), mFONTCOLOR.mData[44]);
				return 1;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2282), mFONTCOLOR.mData[44]);
			return 1;

		case 804:
			if (mMYINFO.mAvatarInfo.aLevel2 < 12)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1213), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aEatAgilityPotion >= 200)
			{
				if (mMYINFO.mAvatarInfo.aEatAgilityPotion < 300)
				{
					break;
				}

				mBASICUI.Insert1(mMESSAGE.Return(2327), mFONTCOLOR.mData[44]);
				return 1;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2283), mFONTCOLOR.mData[44]);
			return 1;

		case 805:
			if (mMYINFO.mAvatarInfo.aLevel2 < 12)
			{
				mBASICUI.Insert1(mMESSAGE.Return(1213), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aEatElementAtkDefPotion / 1000 >= 200)
			{
				if (mMYINFO.mAvatarInfo.aEatElementAtkDefPotion / 1000 < 300)
				{
					break;
				}

				mBASICUI.Insert1(mMESSAGE.Return(2328), mFONTCOLOR.mData[44]);
				return 1;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2284), mFONTCOLOR.mData[44]);
			return 1;

		case 806:
			if (mMYINFO.mAvatarInfo.aLevel2 >= 12)
			{
				if (mMYINFO.mAvatarInfo.aEatElementAtkDefPotion % 1000 >= 200)
				{
					if (mMYINFO.mAvatarInfo.aEatElementAtkDefPotion % 1000 < 300)
					{
						break;
					}
					mBASICUI.Insert1(mMESSAGE.Return(2329), mFONTCOLOR.mData[44]);
					return 1;
				}
				mBASICUI.Insert1(mMESSAGE.Return(2285), mFONTCOLOR.mData[44]);
				return 1;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1213), mFONTCOLOR.mData[44]);
			return 1;

		case 807:
		case 809:
		case 810:
		case 811:
		case 812:
		case 813:
		case 828:
		case 829:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 869:
//		case 883:
		case 887:
		case 889:
		case 890:
		case 989:
		case 998:
		case 999:
			break;

		case 867:
			if (mMYINFO.mAvatarInfo.aUpgradeValue < 96)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1140), mFONTCOLOR.mData[44]);
			return 1;

		case 886:
			if (mMYINFO.mAvatarInfo.aLevel2 != 11)
			{
				mBASICUI.Insert1(mMESSAGE.Return(2308), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aGeneralExperience2 >= mLEVEL.ReturnHighExpValue(11))
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2308), mFONTCOLOR.mData[44]);
			return 1;

		case 891:
			if (mMYINFO.mAvatarInfo.aKillOtherTribe >= 10000)
			{
				if (mMYINFO.mAvatarInfo.aTitle % 100 >= 12)
				{
					if (mMYINFO.mAvatarInfo.aTitle % 100 < 14)
					{
						break;
					}
					mBASICUI.Insert1(mMESSAGE.Return(940), mFONTCOLOR.mData[44]);
					return 1;
				}
				mBASICUI.Insert1(mMESSAGE.Return(2511), mFONTCOLOR.mData[44]);
				return 1;
			}
			mBASICUI.Insert1(mMESSAGE.Return(871), mFONTCOLOR.mData[44]);
			return 1;

		case 1026:
			Off();
			SET_ITEM(6, "", mMESSAGE.Return(289));

		case 1027:
			if (mMYINFO.mAvatarInfo.aAutoHuntState != 1)
			{
				break;
			}
			return 1;

		case 1028:
		case 1035:
		case 1036:
		case 1037:
		case 1041:
		case 1043:
		case 1045:
			break;

		case 1047:
			if (mMYINFO.mAvatarInfo.aLevel1 >= 113)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(524), mFONTCOLOR.mData[44]);
			return 1;

		case 1048:
			if (mMYINFO.mAvatarInfo.aLevel1 >= 100)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(818), mFONTCOLOR.mData[44]);
			return 1;

		case 1049:
			if (mMYINFO.mAvatarInfo.aLevel1 >= 145)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(665), mFONTCOLOR.mData[44]);
			return 1;

		case 1301:
		case 1302:
		case 1303:
		case 1304:
		case 1305:
		case 1306:
		case 1307:
		case 6500:
		case 6501:
		case 6502:
		case 6503:
		case 6504:
		case 6505:
		case 6506:
		case 6507:
		case 6508:
		case 6509:
		case 1308:
		case 1309:
		case 1313:
		case 1314:
		case 1315:
		case 1316:
		case 1317:
		case 1318:
		case 1319:
		case 1320:
		case 1321:
		case 1322:
		case 1323:
		case 1324:
		case 1325:
		case 1326:
		case 1327:
		case 1328:
		case 1329:
		case 1330:
		case 1331:
		case 1332:
		case 1333:
		case 1334:
		case 1335:
		case 1336:
		case 1337:
		case 1338:
		case 1339:
		case 1340:
		case 1341:
		case 1342:
		case 1343:
		case 1344:
		case 1345:
		case 1346:
		case 1347:
			for (index01 = 0; index01 < 10; index01++)
			{
				if (mMYINFO.mAvatarInfo.aAnimal[index01] == tITEM_INFO->iIndex)
				{
					break;
				}
			}
			if (index01 < 10)
			{
				mBASICUI.Insert1(mMESSAGE.Return(908), mFONTCOLOR.mData[44]);
				return 1;
			}
			for (index01 = 0; index01 < 10; index01++)
			{
				if (mMYINFO.mAvatarInfo.aAnimal[index01] == 0)
				{
					break;
				}
			}
			if (index01 == 10)
			{
				mBASICUI.Insert1(mMESSAGE.Return(914), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1069:
//		case 1070:
		case 1071:
		case 1146:
		case 1149:
		case 1153:
		case 1221:
		case 1222:
		case 1227:
		case 1228:
		case 1229:
		case 1230:
		case 1231:
		case 1232:
		case 1233:
		case 1237:
		case 1240:
			break;

		case 1075:
			if (!mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) || mMYINFO.mAvatarInfo.aTribe)
			{
				mBASICUI.Insert1(mMESSAGE.Return(786), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mPresentZoneNumber != 2
				&& mMYINFO.mPresentZoneNumber != 3
				&& mMYINFO.mPresentZoneNumber != 4
				&& mMYINFO.mPresentZoneNumber != 7
				&& mMYINFO.mPresentZoneNumber != 8
				&& mMYINFO.mPresentZoneNumber != 9
				&& mMYINFO.mPresentZoneNumber != 12
				&& mMYINFO.mPresentZoneNumber != 13
				&& mMYINFO.mPresentZoneNumber != 14
				&& mMYINFO.mPresentZoneNumber != 141
				&& mMYINFO.mPresentZoneNumber != 142
				&& mMYINFO.mPresentZoneNumber != 143)
			{
				mBASICUI.Insert1(mMESSAGE.Return(791), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (!mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
			{
				mBASICUI.Insert1(mMESSAGE.Return(824), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1076:
			if (!mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) || mMYINFO.mAvatarInfo.aTribe != 1)
			{
				mBASICUI.Insert1(mMESSAGE.Return(786), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mPresentZoneNumber != 2
				&& mMYINFO.mPresentZoneNumber != 3
				&& mMYINFO.mPresentZoneNumber != 4
				&& mMYINFO.mPresentZoneNumber != 7
				&& mMYINFO.mPresentZoneNumber != 8
				&& mMYINFO.mPresentZoneNumber != 9
				&& mMYINFO.mPresentZoneNumber != 12
				&& mMYINFO.mPresentZoneNumber != 13
				&& mMYINFO.mPresentZoneNumber != 14
				&& mMYINFO.mPresentZoneNumber != 141
				&& mMYINFO.mPresentZoneNumber != 142
				&& mMYINFO.mPresentZoneNumber != 143)
			{
				mBASICUI.Insert1(mMESSAGE.Return(791), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (!mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
			{
				mBASICUI.Insert1(mMESSAGE.Return(824), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1077:
			if (!mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) || mMYINFO.mAvatarInfo.aTribe != 2)
			{
				mBASICUI.Insert1(mMESSAGE.Return(786), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mPresentZoneNumber != 2
				&& mMYINFO.mPresentZoneNumber != 3
				&& mMYINFO.mPresentZoneNumber != 4
				&& mMYINFO.mPresentZoneNumber != 7
				&& mMYINFO.mPresentZoneNumber != 8
				&& mMYINFO.mPresentZoneNumber != 9
				&& mMYINFO.mPresentZoneNumber != 12
				&& mMYINFO.mPresentZoneNumber != 13
				&& mMYINFO.mPresentZoneNumber != 14
				&& mMYINFO.mPresentZoneNumber != 141
				&& mMYINFO.mPresentZoneNumber != 142
				&& mMYINFO.mPresentZoneNumber != 143)
			{
				mBASICUI.Insert1(mMESSAGE.Return(791), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (!mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
			{
				mBASICUI.Insert1(mMESSAGE.Return(825), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1078:
			if (mPLAY.ReturnTribeRole(mMYINFO.mAvatarInfo.aName, mMYINFO.mAvatarInfo.aTribe) && mMYINFO.mAvatarInfo.aTribe == 3)
			{
				if (mMYINFO.mPresentZoneNumber == 2 || mMYINFO.mPresentZoneNumber == 3 || mMYINFO.mPresentZoneNumber == 4 || mMYINFO.mPresentZoneNumber == 7 || mMYINFO.mPresentZoneNumber == 8 || mMYINFO.mPresentZoneNumber == 9 || mMYINFO.mPresentZoneNumber == 12 || mMYINFO.mPresentZoneNumber == 13 || mMYINFO.mPresentZoneNumber == 14 || mMYINFO.mPresentZoneNumber == 141 || mMYINFO.mPresentZoneNumber == 142 || mMYINFO.mPresentZoneNumber == 143)
				{
					if (mUTIL.CheckGeneralMovingZoneForLocation(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation))
					{
						break;
					}
					mBASICUI.Insert1(mMESSAGE.Return(824), mFONTCOLOR.mData[44]);
					return 1;
				}
				mBASICUI.Insert1(mMESSAGE.Return(791), mFONTCOLOR.mData[44]);
				return 1;
			}
			mBASICUI.Insert1(mMESSAGE.Return(786), mFONTCOLOR.mData[44]);
			return 1;

		case 1094:
			break;

		case 1095:
		case 1124:
			if (mMYINFO.mAvatarInfo.aLevel1 >= 100)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(854), mFONTCOLOR.mData[44]);
			return 1;

		case 1097:
			if (mMYINFO.mAvatarInfo.aLevel1 >= 113)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(524), mFONTCOLOR.mData[44]);
			return 1;

		case 1098:
			if (mMYINFO.mAvatarInfo.aLevel1 >= 113)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(524), mFONTCOLOR.mData[44]);
			return 1;

		case 1102:
		case 1103:
		case 1104:
			break;

		case 1105:
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mMYINFO.mUseInventoryPage = tPage;
			mMYINFO.mUseInventoryIndex = tIndex;
			mInvenType = 3;
			mRemoveSkillPage = 0;
			mRemoveSkillIndex = -1;
			return 1;

		case 1108:
			break;

		case 1109:
			if (mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) != -1 && mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) && mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) != 1 && mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) != 2 && mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) != 3)
			{
				mBASICUI.Insert1(mMESSAGE.Return(899), mFONTCOLOR.mData[44]);
				return 1;
			}
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mMYINFO.mUseInventoryPage = tPage;
			mMYINFO.mUseInventoryIndex = tIndex;
			mInvenType = 5;
			return 1;

		case 1118:
		case 1119:
		case 1120:
			break;

		case 1121:
			if (mMYINFO.mAvatarInfo.aLevel1 < 1 || mMYINFO.mAvatarInfo.aLevel1 > 112)
			{
				mBASICUI.Insert1(mMESSAGE.Return(835), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1122:
			if (mMYINFO.mAvatarInfo.aLevel1 < 1 || mMYINFO.mAvatarInfo.aLevel1 > 112)
			{
				mBASICUI.Insert1(mMESSAGE.Return(835), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1123:
		case 1234:
			if (mMYINFO.mAvatarInfo.aLevel1 < 1 || mMYINFO.mAvatarInfo.aLevel1 > 112)
			{
				mBASICUI.Insert1(mMESSAGE.Return(835), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1125:
			if (mMYINFO.mAvatarInfo.aLevel1 >= 40)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2200), mFONTCOLOR.mData[44]);
			return 1;

		case 1130:
		case 1132:
			break;

		case 1134:
			if (mMYINFO.mAvatarInfo.aLevel1 < 1 || mMYINFO.mAvatarInfo.aLevel1 > 99)
			{
				mBASICUI.Insert1(mMESSAGE.Return(668), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aLevel2 <= 0)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(668), mFONTCOLOR.mData[44]);
			return 1;

		case 1135:
			if (mMYINFO.mAvatarInfo.aLevel1 < 100 || mMYINFO.mAvatarInfo.aLevel1 > 112)
			{
				mBASICUI.Insert1(mMESSAGE.Return(670), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aLevel2 <= 0)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(670), mFONTCOLOR.mData[44]);
			return 1;

		case 1136:
			if (mMYINFO.mAvatarInfo.aLevel1 < 113 || mMYINFO.mAvatarInfo.aLevel1 > 145)
			{
				mBASICUI.Insert1(mMESSAGE.Return(672), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aLevel2 <= 0)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(672), mFONTCOLOR.mData[44]);
			return 1;

		case 1137:
			if (mMYINFO.mAvatarInfo.aLevel1 >= 1 && mMYINFO.mAvatarInfo.aLevel1 <= 99)
			{
				if (mMYINFO.mAvatarInfo.aLevel2 <= 0)
				{
					GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
					mMYINFO.mUseInventoryPage = tPage;
					mMYINFO.mUseInventoryIndex = tIndex;
					mInvenType = 4;
					mRemoveStatIndex = 0;
				}
				mBASICUI.Insert1(mMESSAGE.Return(668), mFONTCOLOR.mData[44]);
				return 1;
			}
			mBASICUI.Insert1(mMESSAGE.Return(668), mFONTCOLOR.mData[44]);
			return 1;

		case 1138:
			if (mMYINFO.mAvatarInfo.aLevel1 >= 100 && mMYINFO.mAvatarInfo.aLevel1 <= 112)
			{
				if (mMYINFO.mAvatarInfo.aLevel2 <= 0)
				{
					GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
					mMYINFO.mUseInventoryPage = tPage;
					mMYINFO.mUseInventoryIndex = tIndex;
					mInvenType = 4;
					mRemoveStatIndex = 0;
				}
				mBASICUI.Insert1(mMESSAGE.Return(670), mFONTCOLOR.mData[44]);
				return 1;
			}
			mBASICUI.Insert1(mMESSAGE.Return(670), mFONTCOLOR.mData[44]);
			return 1;

		case 1139:
			if (mMYINFO.mAvatarInfo.aLevel1 < 113 || mMYINFO.mAvatarInfo.aLevel1 > 145)
			{
				mBASICUI.Insert1(mMESSAGE.Return(672), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aLevel2 <= 0)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mMYINFO.mUseInventoryPage = tPage;
				mMYINFO.mUseInventoryIndex = tIndex;
				mInvenType = 4;
				mRemoveStatIndex = 0;
			}
			mBASICUI.Insert1(mMESSAGE.Return(672), mFONTCOLOR.mData[44]);
			return 1;

		case 1140:
		case 1141:
			break;

		case 1142:
			if (mMYINFO.mAvatarInfo.aLevel1 < 145)
			{
				mBASICUI.Insert1(mMESSAGE.Return(886), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aLevel2 >= 1)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(886), mFONTCOLOR.mData[44]);
			return 1;

		case 1143:
			if (mMYINFO.mAvatarInfo.aLevel1 < 145)
			{
				mBASICUI.Insert1(mMESSAGE.Return(886), mFONTCOLOR.mData[44]);
			}
			else
			{
				if (mMYINFO.mAvatarInfo.aLevel2 >= 1)
				{
					GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
					mMYINFO.mUseInventoryPage = tPage;
					mMYINFO.mUseInventoryIndex = tIndex;
					mInvenType = 4;
					mRemoveStatIndex = 0;
				}
				mBASICUI.Insert1(mMESSAGE.Return(886), mFONTCOLOR.mData[44]);
				return 1;
			}
			return 1;

		case 1144:
		case 1239:
			if (mMYINFO.mAvatarInfo.aMoney <= 1900000000)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1303), mFONTCOLOR.mData[44]);
			return 1;

		case 1145:
			for (index01 = 0; index01 < 10; index01++)
			{
				if (mMYINFO.mAvatarInfo.aAnimal[index01] == 0)
				{
					break;
				}
			}
			if (index01 == 10)
			{
				mBASICUI.Insert1(mMESSAGE.Return(909), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1147:
		case 1148:
		case 1150:
		case 1151:
		case 1152:
		case 1154:
		case 1155:
//		case 1157:
		case 1158:
		case 1159:
		case 1160:
		case 1161:
		case 1162:
		case 1163:
		case 1164:
		case 1165:
		case 1166:
			break;

		case 1167:
			if (mMYINFO.mAvatarInfo.aLevel1 >= 113)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1196), mFONTCOLOR.mData[44]);
			return 1;

		case 1168:
		case 1169:
		case 1170:
			break;

		case 1171:
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mMYINFO.mUseInventoryPage = tPage;
			mMYINFO.mUseInventoryIndex = tIndex;
			mInvenType = 6;
			mChangeGenderIdx1 = mMYINFO.mAvatarInfo.aGender;
			mChangeGenderIdx2 = mMYINFO.mAvatarInfo.aHeadType;
			mChangeGenderIdx3 = mMYINFO.mAvatarInfo.aFaceType;
			return 1;

		case 1173:
		case 1174:
		case 1175:
		case 1176:
		case 1177:
		case 1180:
		case 1181:
			break;

		case 1182:
			if (mMYINFO.mAvatarInfo.aEatAgilityPotion >= 1)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1384), mFONTCOLOR.mData[44]);
			return 1;

		case 1185:
		case 1186:
			break;

		case 1187:
			if (mMYINFO.mAvatarInfo.aLevel1 >= 100)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(854), mFONTCOLOR.mData[44]);
			return 1;

		case 1188:
		case 1190:
		case 1191:
		case 1192:
		case 1193:
		case 1194:
		case 1195:
		case 1196:
		case 1197:
		case 1198:
		case 1199:
			break;

		case 1200:
		case 1494:
			if (mMYINFO.mAvatarInfo.aTitle >= 1)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1640), mFONTCOLOR.mData[44]);
			return 1;

		case 1201:
		case 1215:
		case 1216:
		case 1202:
		case 1203:
		case 1204:
		case 1205:
		case 1206:
			break;

		case 1211:
			if (!strcmp(mMYINFO.mAvatarInfo.aGuildName, ""))
			{
				mBASICUI.Insert1(mMESSAGE.Return(1715), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1214:
			GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
			mMYINFO.mUseInventoryPage = tPage;
			mMYINFO.mUseInventoryIndex = tIndex;
			mInvenType = 8;
			mChangeGenderIdx2 = mMYINFO.mAvatarInfo.aHeadType;
			mChangeGenderIdx3 = mMYINFO.mAvatarInfo.aFaceType;
			return 1;

		case 1217:
		case 1218:
		case 1219:
		case 1220:
			break;

		case 1224:
			if (mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) == -1 || !mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) || mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) == 1 || mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) == 2 || mZONEMAININFO.ReturnZoneTribeInfo1(mMYINFO.mPresentZoneNumber) == 3)
			{
				GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
				mMYINFO.mUseInventoryPage = tPage;
				mMYINFO.mUseInventoryIndex = tIndex;
				mInvenType = 9;
			}
			mBASICUI.Insert1(mMESSAGE.Return(899), mFONTCOLOR.mData[44]);
			return 1;

		case 1241:
			if (mMYINFO.mAvatarInfo.aLevel2 >= 12)
			{
				if (mMYINFO.mAvatarInfo.aRebirth < 12)
				{
					break;
				}
				else
				{
					mBASICUI.Insert1(mMESSAGE.Return(1238), mFONTCOLOR.mData[44]);
					return 1;
				}
			}
			else
			{
				mBASICUI.Insert1(mMESSAGE.Return(1235), mFONTCOLOR.mData[44]);
				return 1;
			}
			return 1;

		case 1242:
			if (mMYINFO.mAvatarInfo.aRebirth >= 12)
			{
				break;
			}
			else
			{
				mBASICUI.Insert1(mMESSAGE.Return(1934), mFONTCOLOR.mData[44]);
			}
			return 1;

		case 1355:
		case 1356:
		case 1357:
		case 1358:
		case 1359:
		case 1367:
			break;

		case 1370:
			if (mMYINFO.mAvatarInfo.aLevel1 >= 113)
			{

				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1196), mFONTCOLOR.mData[44]);
			return 1;

		case 1371:
		case 1372:
		case 1373:
		case 1374:
		case 1375:
		case 1376:
		case 1377:
		case 1378:
		case 1379:
			if (mMYINFO.mAvatarInfo.aLevel2 >= 12)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1213), mFONTCOLOR.mData[44]);
			return 1;

		case 1419:
			if (mMYINFO.mAvatarInfo.aLevel1 < 1 || mMYINFO.mAvatarInfo.aLevel1 > 112)
			{
				mBASICUI.Insert1(mMESSAGE.Return(835), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1420:
			if (mMYINFO.mAvatarInfo.aLevel1 >= 1 && mMYINFO.mAvatarInfo.aLevel1 <= 112)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(835), mFONTCOLOR.mData[44]);
			return 1;

		case 1421:
			break;

		case 1434:
			if (mMYINFO.mAvatarInfo.aRebirth >= 1)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1417), mFONTCOLOR.mData[44]);
			return 1;

		case 1436:
		case 1458:
		case 1438:
		case 1439:
		case 1444:
		case 1445:
		case 1446:
		case 1447:
		case 1448:
		case 1449:
		case 1499:
		case 1455:
		case 1456:
			break;

		case 1459:
			if (mMYINFO.mAvatarInfo.aLevel1 < 145)
			{
				mBASICUI.Insert1(mMESSAGE.Return(886), mFONTCOLOR.mData[44]);
				return 1;
			}
			if (mMYINFO.mAvatarInfo.aLevel2 < 1)
			{
				mBASICUI.Insert1(mMESSAGE.Return(886), mFONTCOLOR.mData[44]);
				return 1;
			}
			break;

		case 1477:
			break;

		case 1489:
			if (mMYINFO.mAvatarInfo.aLevel1 >= 113 && mMYINFO.mAvatarInfo.aLevel1 <= 145 && mMYINFO.mAvatarInfo.aLevel2 <= 0)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(672), mFONTCOLOR.mData[44]);
			return 1;

		case 1833:
		case 1834:
			if (mMYINFO.mAvatarInfo.aRebirth >= 12)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2323), mFONTCOLOR.mData[44]);
			return 1;

		case 1850:
		case 1894:
		case 1897:
		case 1898:
		case 1947:
		case 2018:
		case 2025:
		case 2068:
		case 2069:
		case 2070:
		case 2071:
		case 2072:
		case 2073:
		case 2074:
		case 2076:
			break;

		case 2019:
		case 2020:
		case 2021:
			break;

		case 2022:
			if (mMYINFO.mAvatarInfo.aLevel1 < 145)
			{
				mBASICUI.Insert1(mMESSAGE.Return(886), mFONTCOLOR.mData[44]);
			}
			else
			{
				if (mMYINFO.mAvatarInfo.aLevel2 >= 1)
				{
					GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
					mMYINFO.mUseInventoryPage = tPage;
					mMYINFO.mUseInventoryIndex = tIndex;
					mInvenType = 4;
					mRemoveStatIndex = 0;
				}
				else
				{
					mBASICUI.Insert1(mMESSAGE.Return(886), mFONTCOLOR.mData[44]);
				}
			}
			return 1;

		case 2138:
		case 2139:
//		case 2159:
		case 2169:
		case 2170:
		case 2171:
		case 2194:
		case 2249:
		case 2250:
		case 2251:
		case 2252:
		case 2263:
		case 2265:
		case 2292:
		case 2295:
		case 2311:
		case 2336:
		case 2344:
		case 2345:
		case 2377:
		case 2382:
			break;
		case 750:
			if (mMYINFO.mAvatarInfo.aCapsuleOnlineTime >= 1000)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1248), mFONTCOLOR.mData[44]);
			return 1;
		case 751:
			if (mMYINFO.mAvatarInfo.aCapsuleMallPoints >= 2000)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1249), mFONTCOLOR.mData[44]);
			return 1;
		case 752:
			if (mMYINFO.mAvatarInfo.aHealthBoostScroll >= 100)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(1250), mFONTCOLOR.mData[44]);
			return 1;

		case 717://New Box Sistem Skill
			if (mMYINFO.mAvatarInfo.aWingProtectionScroll >= 10)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2840), mFONTCOLOR.mData[44]);
			return 1;

		case 714://New Box Sistem Wings
			if (mMYINFO.mAvatarInfo.aDailyOnlineTime >= 60)
			{
				break;
			}
			mBASICUI.Insert1(mMESSAGE.Return(2840), mFONTCOLOR.mData[44]);
			return 1;

		
			break;


		default:
			return 1;
		}
		GSOUND::Play(&mGDATA.mSOUND_5[2], 0, 100);
		mMYINFO.mUseInventoryPage = tPage;
		mMYINFO.mUseInventoryIndex = tIndex;
		if (tMsg == 0)
		{
			sprintf(Buffer, mMESSAGE.Return(2998), tITEM_INFO->iName);
			if (tBoxSort == 0)
				mCBOXUI.Set(7, Buffer, "");
			else
				mCBOXUI.Set(tBoxSort, Buffer, "");
		}
		else
		{
			if (tBoxSort == 0)
				mCBOXUI.Set(7, mMESSAGE.Return(tMsg), "");
			else
				mCBOXUI.Set(tBoxSort, mMESSAGE.Return(tMsg), "");
		}
		return 1;
	}
}


int INVENUI::RBUTTONUP(int uX, int uY)
{
	return 0;
}

int INVENUI::KEYBOARD()
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
		else if (mGXD.mKeyboardBufferedData[i].dwOfs == 23)
		{
			INVENUI::Off();
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
		else if (mGXD.mKeyboardBufferedData[j].dwOfs == 23)
		{
			mUI.Off(0);
			INVENUI::Set();
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

void INVENUI::DrawItemInfo(int uX, int uY, int tItemIndex, int tQuantity, int tImprove, int tSort, int tSocket1, int tSocket2, int tSocket3, int tSocket4, int tSocket5, int tSort2)
{
	char tMessage[100][101];
	int tDisplaySort[100];
	char Buffer[1000];
	char Buffer2[1000];
	ITEM_INFO* tITEM_INFO;
	SKILL_INFO* tSKILL_INFO;
	int tISValue = mUTIL.ReturnISValue(tImprove);
	int tIUValue = mUTIL.ReturnIUValue(tImprove);
	int tRFValue = mUTIL.ReturnRFValue(tImprove);
	int t4thValue = mUTIL.Return4thValue(tImprove);
	int tItemSort;
	int tMsgSort = 0;
	int tLineBreak = 0;
	int tItemLevel = 0;
	int i, j, k, l;
	int tDisplayX = 0;
	int tDisplayY = 0;
	int tMessageX = 0;
	int tMessageY = 0;
	int tStrLen = 0;
	int v594 = tRFValue == 25;
	char* tstr;
	char* tstr2;
	char* tstr3;
	char* tstr4;
	int v586;
	int tFinalLength;
	float tWingStat;
	float tPetPercent;
	int tValue, tValue2, tValue3, tValue4, tValue5;
	float fValue, fValue2, fValue3, fValue4, fValue5;
	int tMessageNum;
	int sX, sY, mX, mY;
	int tSocketNum;
	int tGems[5];
	int tGemMode, tGemLevel, sAdd, sAdd2;
	int tFontColor;
	int tStat1, tStat2, tStat3, tStat4;

	tITEM_INFO = mITEM.Search(tItemIndex);
	if (!tITEM_INFO)
	{
		return;
	}

	tItemSort = mUTIL.ReturnItemSort(tITEM_INFO);

	// Name and Rarity
	switch (tITEM_INFO->iSort)
	{
	case 1:
	case 2:
		sprintf(tMessage[tMsgSort], "%s", tITEM_INFO->iName);
		tDisplaySort[tMsgSort++] = 1;
		break;

	case 3:
		switch (tITEM_INFO->iType)
		{
		case 1:
			tstr = mMESSAGE.Return(1001);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 1;
			break;
		case 2:
			tstr = mMESSAGE.Return(1002);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 24;
			break;
		case 3:
			tstr = mMESSAGE.Return(1003);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 3;
			break;
		case 4:
			tstr = mMESSAGE.Return(1004);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 25;
			break;
		case 5:
		case 6:
			tstr = mMESSAGE.Return(2560);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 2;
			break;
		default:
			break;
		}
		break;

	case 4:
		sprintf(tMessage[tMsgSort], "%s", tITEM_INFO->iName);
		tDisplaySort[tMsgSort++] = 32;
		break;

	case 5:
		switch (tITEM_INFO->iType)
		{
		case 1:
			tstr = mMESSAGE.Return(1001);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 1;
			break;
		case 2:
			tstr = mMESSAGE.Return(1002);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 24;
			break;
		case 3:
			tstr = mMESSAGE.Return(1003);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 3;
			break;
		case 4:
			tstr = mMESSAGE.Return(1004);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 25;
			break;
		case 5:
		case 6:
			tstr = mMESSAGE.Return(2560);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 2;
			break;
		default:
			break;
		}
		break;

	case 6:
		if (tITEM_INFO->iType == 5 || tITEM_INFO->iType == 6 || tITEM_INFO->iType == 7 || tITEM_INFO->iType == 8)
		{
			tstr = mMESSAGE.Return(2560);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort] = 2;
		}
		else if (tITEM_INFO->iIndex == 126 || tITEM_INFO->iIndex == 129 || tITEM_INFO->iIndex == 132 || tITEM_INFO->iIndex == 135 || tITEM_INFO->iIndex == 138 || tITEM_INFO->iIndex == 141 || tITEM_INFO->iIndex == 144 || tITEM_INFO->iIndex == 147 || tITEM_INFO->iIndex == 150 || tISValue <= 0)
		{
			sprintf(tMessage[tMsgSort], "%s", tITEM_INFO->iName);
			tDisplaySort[tMsgSort] = 1;
		}
		else
		{
			sprintf(tMessage[tMsgSort], "%s(%d%%)", tITEM_INFO->iName, 3 * tISValue);
			tDisplaySort[tMsgSort] = 1;
		}
		++tMsgSort;
		break;

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
		if (tISValue <= 0) // No Enchant
		{
			switch (tITEM_INFO->iType)
			{
			case 1:
				tstr = mMESSAGE.Return(1001);
				sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
				tDisplaySort[tMsgSort++] = 1;
				break;
			case 2:
				tstr = mMESSAGE.Return(1002);
				sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
				tDisplaySort[tMsgSort++] = 24;
				break;
			case 3:
				tstr = mMESSAGE.Return(1003);
				sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
				if (tITEM_INFO->iCheckItemSet == 1)
					tDisplaySort[tMsgSort] = 3;
				else
					tDisplaySort[tMsgSort] = 40;
				++tMsgSort;
				break;
			case 4:
				tstr = mMESSAGE.Return(1004);
				sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
				if (tITEM_INFO->iCheckItemSet == 2)
					tDisplaySort[tMsgSort] = 27;
				else
					tDisplaySort[tMsgSort] = 25;
				++tMsgSort;
				break;
			case 5:
			case 6:
			case 7:
			case 8:
				tstr = mMESSAGE.Return(2560);
				sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
				tDisplaySort[tMsgSort++] = 2;
				break;
			default:
				break;
			}
		}
		else // With Enchant
		{
			switch (tITEM_INFO->iType)
			{
			case 1:
				tstr = mMESSAGE.Return(1006);
				tstr2 = mMESSAGE.Return(1001);
				sprintf(tMessage[tMsgSort], "%s%s %s(%d%%)", tITEM_INFO->iName, tstr2, tstr, 3 * tISValue);
				tDisplaySort[tMsgSort++] = 1;
				break;
			case 2:
				tstr = mMESSAGE.Return(1006);
				tstr2 = mMESSAGE.Return(1002);
				sprintf(tMessage[tMsgSort], "%s%s %s(%d%%)", tITEM_INFO->iName, tstr2, tstr, 3 * tISValue);
				tDisplaySort[tMsgSort++] = 24;
				break;
			case 3:
				tstr = mMESSAGE.Return(1006);
				tstr2 = mMESSAGE.Return(1003);
				sprintf(tMessage[tMsgSort], "%s%s %s(%d%%)", tITEM_INFO->iName, tstr2, tstr, 3 * tISValue);
				if (tITEM_INFO->iCheckItemSet == 1)
					tDisplaySort[tMsgSort] = 3;
				else
					tDisplaySort[tMsgSort] = 40;
				++tMsgSort;
				break;
			case 4:
				if (tITEM_INFO->iCheckItemSet == 3)
				{
					tstr = mMESSAGE.Return(2452);
					tstr2 = mMESSAGE.Return(1004);
					sprintf(tMessage[tMsgSort], "%s%s %d %s", tITEM_INFO->iName, tstr2, tISValue, tstr);
				}
				else
				{
					tstr = mMESSAGE.Return(1006);
					tstr2 = mMESSAGE.Return(1004);
					sprintf(tMessage[tMsgSort], "%s%s %s(%d%%)", tITEM_INFO->iName, tstr2, tstr, 3 * tISValue);
				}
				if (tITEM_INFO->iCheckItemSet == 2)
					tDisplaySort[tMsgSort] = 27;
				else
					tDisplaySort[tMsgSort] = 25;
				++tMsgSort;
				break;
			case 5:
				if (tItemSort == 8)
				{
					if (tISValue < 100)
					{
						tstr = mMESSAGE.Return(2452);
						tstr2 = mMESSAGE.Return(1006);
						tstr3 = mMESSAGE.Return(2560);
						sprintf(tMessage[tMsgSort], "%s%s %s(%d%s)", tITEM_INFO->iName, tstr3, tstr2, tISValue, tstr);
					}
					else
					{
						tISValue -= 100;
						tstr = mMESSAGE.Return(2567);
						tstr2 = mMESSAGE.Return(2452);
						tstr3 = mMESSAGE.Return(1006);
						tstr4 = mMESSAGE.Return(2560);
						sprintf(tMessage[tMsgSort], "%s%s %s(%d%s%s)", tITEM_INFO->iName, tstr4, tstr3, tISValue, tstr2, tstr);
					}
					tDisplaySort[tMsgSort++] = 2;
				}
				else
				{
					if (tISValue < 100)
					{
						tstr = mMESSAGE.Return(2452);
						tstr2 = mMESSAGE.Return(1006);
						tstr3 = mMESSAGE.Return(2560);
						sprintf(tMessage[tMsgSort], "%s%s %s(%d%s)", tITEM_INFO->iName, tstr3, tstr2, tISValue, tstr);
					}
					else
					{
						tISValue -= 100;
						tstr = mMESSAGE.Return(2567);
						tstr2 = mMESSAGE.Return(2452);
						tstr3 = mMESSAGE.Return(1006);
						tstr4 = mMESSAGE.Return(2560);
						sprintf(tMessage[tMsgSort], "%s%s %s(%d%s%s)", tITEM_INFO->iName, tstr4, tstr3, tISValue, tstr2, tstr);
					}
					tDisplaySort[tMsgSort++] = 2;
				}
				break;
			case 6:
				if (tISValue < 100)
				{
					tstr = mMESSAGE.Return(2452);
					tstr2 = mMESSAGE.Return(1006);
					tstr3 = mMESSAGE.Return(2560);
					sprintf(tMessage[tMsgSort], "%s%s %s(%d%s)", tITEM_INFO->iName, tstr3, tstr2, tISValue, tstr);
				}
				else
				{
					tISValue -= 100;
					tstr = mMESSAGE.Return(2567);
					tstr2 = mMESSAGE.Return(2452);
					tstr3 = mMESSAGE.Return(1006);
					tstr4 = mMESSAGE.Return(2560);
					sprintf(tMessage[tMsgSort], "%s%s %s(%d%s%s)", tITEM_INFO->iName, tstr4, tstr3, tISValue, tstr2, tstr);
				}
				tDisplaySort[tMsgSort++] = 2;
				break;
			case 7:
				if (tItemSort == 8)
				{
					if (tISValue < 100)
					{
						tstr = mMESSAGE.Return(2452);
						tstr2 = mMESSAGE.Return(1006);
						tstr3 = mMESSAGE.Return(2560);
						sprintf(tMessage[tMsgSort], "%s%s %s(%d%s)", tITEM_INFO->iName, tstr3, tstr2, tISValue, tstr);
					}
					else
					{
						tISValue -= 100;
						tstr = mMESSAGE.Return(2567);
						tstr2 = mMESSAGE.Return(2452);
						tstr3 = mMESSAGE.Return(1006);
						tstr4 = mMESSAGE.Return(2560);
						sprintf(tMessage[tMsgSort], "%s%s %s(%d%s%s)", tITEM_INFO->iName, tstr4, tstr3, tISValue, tstr2, tstr);
					}
					tDisplaySort[tMsgSort++] = 2;
				}
				else
				{
					if (tISValue < 100)
					{
						tstr = mMESSAGE.Return(2452);
						tstr2 = mMESSAGE.Return(1006);
						tstr3 = mMESSAGE.Return(2560);
						sprintf(tMessage[tMsgSort], "%s%s %s(%d%s)", tITEM_INFO->iName, tstr3, tstr2, tISValue, tstr);
					}
					else
					{
						tISValue -= 100;
						tstr = mMESSAGE.Return(2567);
						tstr2 = mMESSAGE.Return(2452);
						tstr3 = mMESSAGE.Return(1006);
						tstr4 = mMESSAGE.Return(2560);
						sprintf(tMessage[tMsgSort], "%s%s %s(%d%s%s)", tITEM_INFO->iName, tstr4, tstr3, tISValue, tstr2, tstr);
					}
					tDisplaySort[tMsgSort++] = 2;
				}
				break;

			case 8:
				if (tISValue < 100)
				{
					tstr = mMESSAGE.Return(2452);
					tstr2 = mMESSAGE.Return(1006);
					tstr3 = mMESSAGE.Return(2560);
					sprintf(tMessage[tMsgSort], "%s%s %s(%d%s)", tITEM_INFO->iName, tstr3, tstr2, tISValue, tstr);
				}
				else
				{
					tISValue -= 100;
					tstr = mMESSAGE.Return(2567);
					tstr2 = mMESSAGE.Return(2452);
					tstr3 = mMESSAGE.Return(1006);
					tstr4 = mMESSAGE.Return(2560);
					sprintf(tMessage[tMsgSort], "%s%s %s(%d%s%s)", tITEM_INFO->iName, tstr4, tstr3, tISValue, tstr2, tstr);
				}
				tDisplaySort[tMsgSort++] = 2;
				break;

			default:
				break;
			}
		}
		if (tIUValue > 0 && tItemSort != 1 && tItemSort != 8 && tItemSort != 4 && tItemSort != 11 && tItemSort != 12)
		{
			tstr = mMESSAGE.Return(1007);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tIUValue);
			tDisplaySort[tMsgSort++] = 31;
		}
		break;

	case 22:
		if (tITEM_INFO->iType == 3)
		{
			tPetPercent = mPET.ReturnGrowPercent(tITEM_INFO->iIndex, tImprove);
			tstr = mMESSAGE.Return(1005);
			tstr2 = mMESSAGE.Return(1003);
			sprintf(tMessage[tMsgSort], "%s%s %s(%.3f%%)", tITEM_INFO->iName, tstr2, tstr, tPetPercent);
			tDisplaySort[tMsgSort++] = 3;
		}
		else if (tITEM_INFO->iType == 4)
		{
			tPetPercent = mPET.ReturnGrowPercent(tITEM_INFO->iIndex, tImprove);
			tstr = mMESSAGE.Return(1005);
			tstr2 = mMESSAGE.Return(1004);
			sprintf(tMessage[tMsgSort], "%s%s %s(%.3f%%)", tITEM_INFO->iName, tstr2, tstr, tPetPercent);
			tDisplaySort[tMsgSort++] = 25;
		}
		break;

	case 23:
	case 24:
		tstr = mMESSAGE.Return(1004);
		sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
		tDisplaySort[tMsgSort++] = 25;
		break;

	case 26:
	LABEL_110:
		tstr = mMESSAGE.Return(1002);
		sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
		tDisplaySort[tMsgSort++] = 24;
		break;

	case 28:
		if (tITEM_INFO->iType == 3)
		{
		LABEL_78:
			tstr = mMESSAGE.Return(1003);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 3;
		}
		else if (tITEM_INFO->iType == 4)
		{
		LABEL_7:
			tstr = mMESSAGE.Return(1004);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 25;
		}
		break;

	case 29:
		if (tISValue <= 0)
		{
			switch (tITEM_INFO->iType)
			{
			case 1:
				tstr = mMESSAGE.Return(1001);
				sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
				tDisplaySort[tMsgSort++] = 1;
				break;
			case 2:
				tstr = mMESSAGE.Return(1002);
				sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
				tDisplaySort[tMsgSort++] = 24;
				break;
			case 3:
				tstr = mMESSAGE.Return(1003);
				sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
				if (tITEM_INFO->iCheckItemSet == 1)
					tDisplaySort[tMsgSort] = 3;
				else
					tDisplaySort[tMsgSort] = 40;
				++tMsgSort;
				break;
			case 4:
				tstr = mMESSAGE.Return(1004);
				sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
				if (tITEM_INFO->iCheckItemSet == 2)
					tDisplaySort[tMsgSort] = 27;
				else
					tDisplaySort[tMsgSort] = 25;
				++tMsgSort;
				break;
			case 5:
				tstr = mMESSAGE.Return(2560);
				sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
				tDisplaySort[tMsgSort++] = 2;
				break;
			default:
				break;
			}
		}
		else
		{
			switch (tITEM_INFO->iType)
			{
			case 1:
				tstr = mMESSAGE.Return(1006);
				tstr2 = mMESSAGE.Return(1001);
				sprintf(tMessage[tMsgSort], "%s%s %s(%d%%)", tITEM_INFO->iName, tstr2, tstr, 3 * tISValue);
				tDisplaySort[tMsgSort++] = 1;
				break;
			case 2:
				tstr = mMESSAGE.Return(1006);
				tstr2 = mMESSAGE.Return(1002);
				sprintf(tMessage[tMsgSort], "%s%s %s(%d%%)", tITEM_INFO->iName, tstr2, tstr, 3 * tISValue);
				tDisplaySort[tMsgSort++] = 24;
				break;
			case 3:
				tstr = mMESSAGE.Return(1006);
				tstr2 = mMESSAGE.Return(1003);
				sprintf(tMessage[tMsgSort], "%s%s %s(%d%%)", tITEM_INFO->iName, tstr2, tstr, 3 * tISValue);
				if (tITEM_INFO->iCheckItemSet == 1)
					tDisplaySort[tMsgSort] = 3;
				else
					tDisplaySort[tMsgSort] = 40;
				++tMsgSort;
				break;
			case 4:
				if (tITEM_INFO->iCheckItemSet == 3)
				{
					tstr = mMESSAGE.Return(2452);
					tstr2 = mMESSAGE.Return(1004);
					sprintf(tMessage[tMsgSort], "%s%s %d %s", tITEM_INFO->iName, tstr2, tISValue, tstr);
				}
				else
				{
					tstr = mMESSAGE.Return(1006);
					tstr2 = mMESSAGE.Return(1004);
					sprintf(tMessage[tMsgSort], "%s%s %s(%d%%)", tITEM_INFO->iName, tstr2, tstr, 3 * tISValue);
				}
				if (tITEM_INFO->iCheckItemSet == 2)
					tDisplaySort[tMsgSort] = 27;
				else
					tDisplaySort[tMsgSort] = 25;
				++tMsgSort;
				break;
			case 5:
				if (tISValue < 100)
				{
					tstr = mMESSAGE.Return(2452);
					tstr2 = mMESSAGE.Return(1006);
					tstr3 = mMESSAGE.Return(2560);
					sprintf(tMessage[tMsgSort], "%s%s %s(%d%s)", tITEM_INFO->iName, tstr3, tstr2, tISValue, tstr);
				}
				else
				{
					tISValue -= 100;
					tstr = mMESSAGE.Return(2567);
					tstr2 = mMESSAGE.Return(2452);
					tstr3 = mMESSAGE.Return(1006);
					tstr4 = mMESSAGE.Return(2560);
					sprintf(tMessage[tMsgSort], "%s%s %s(%d%s%s)", tITEM_INFO->iName, tstr4, tstr3, tISValue, tstr2, tstr);
				}
				tDisplaySort[tMsgSort++] = 2;
				break;
			default:
				break;
			}
		}
		break;

	case 30:
		switch (tITEM_INFO->iType)
		{
		case 1:
		LABEL_109:
			tstr = mMESSAGE.Return(1001);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 1;
			break;
		case 2:
			tstr = mMESSAGE.Return(1002);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 24;
			break;
		case 3:
			tstr = mMESSAGE.Return(1003);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 3;
			break;
		case 4:
			tstr = mMESSAGE.Return(1004);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 25;
			break;
		default:
			break;
		}
		break;

	case 31:
	case 32:
	LABEL_111:
		tstr = mMESSAGE.Return(2560);
		sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
		tDisplaySort[tMsgSort++] = 2;
		break;

	case 34:
		switch (tITEM_INFO->iType)
		{
		case 1:
			tstr = mMESSAGE.Return(1001);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 1;
			break;
		case 2:
			tstr = mMESSAGE.Return(1002);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 24;
			break;
		case 3:
			tstr = mMESSAGE.Return(1003);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 3;
			break;
		case 4:
			tstr = mMESSAGE.Return(1004);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 25;
			break;
		case 5:
			tstr = mMESSAGE.Return(2560);
			sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
			tDisplaySort[tMsgSort++] = 3;
			break;
		default:
			break;
		}
		break;

	case 35:
		tstr = mMESSAGE.Return(1002);
		sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
		tDisplaySort[tMsgSort++] = 24;
		break;

	case 36:
		tstr = mMESSAGE.Return(2560);
		sprintf(tMessage[tMsgSort], "%s%s", tITEM_INFO->iName, tstr);
		tDisplaySort[tMsgSort++] = 2;
		break;

	default:
		break;
	}


	// Item Type
	tLineBreak = 0;
	switch (tITEM_INFO->iSort)
	{
	case 1:
		tstr = mMESSAGE.Return(1008);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 2:
		if (tITEM_INFO->iPotionType[0] <= 0 || tITEM_INFO->iPotionType[0] > 6)
		{
			tstr = mMESSAGE.Return(1010);
			strcpy(tMessage[tMsgSort], tstr);
			tDisplaySort[tMsgSort++] = 1;
			tLineBreak = 1;
			break;
		}
		tstr = mMESSAGE.Return(1009);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 3:
	case 35:
		tstr = mMESSAGE.Return(1010);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 4:
		tstr = mMESSAGE.Return(1011);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 5:
	case 23:
	case 24:
	case 25:
		tstr = mMESSAGE.Return(1012);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 6:
		tstr = mMESSAGE.Return(1013);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 7:
		tstr = mMESSAGE.Return(1014);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 8:
		tstr = mMESSAGE.Return(1015);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 9:
		tstr = mMESSAGE.Return(1016);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 10:
		tstr = mMESSAGE.Return(1017);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 11:
		tstr = mMESSAGE.Return(1018);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 12:
		tstr = mMESSAGE.Return(1019);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 13:
		tstr = mMESSAGE.Return(1020);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 14:
		tstr = mMESSAGE.Return(1021);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 15:
		tstr = mMESSAGE.Return(1022);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;

	case 16:
		tstr = mMESSAGE.Return(1023);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 17:
		tstr = mMESSAGE.Return(1024);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 18:
		tstr = mMESSAGE.Return(1025);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 19:
		tstr = mMESSAGE.Return(1026);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 20:
		tstr = mMESSAGE.Return(1027);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 21:
		tstr = mMESSAGE.Return(1028);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 22:
		tstr = mMESSAGE.Return(1029);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 26:
		tstr = mMESSAGE.Return(2426);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 28:
		tstr = mMESSAGE.Return(2505);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 29:
		tstr = mMESSAGE.Return(2523);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 30:
		tstr = mMESSAGE.Return(2534);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 31:
	case 32:
		tstr = mMESSAGE.Return(2721);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 33:
	case 37:
	case 38:
		tstr = mMESSAGE.Return(2771);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
	case 34:
		tstr = mMESSAGE.Return(2879);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 36:
		tstr = mMESSAGE.Return(2899);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	default:
		break;
	}
	if (tLineBreak)
	{
		strcpy(tMessage[tMsgSort++], "");
	}
	tLineBreak = 0;


	// Item Desc
	for (i = 0; i < 3; ++i)
	{
		if (strcmp(tITEM_INFO->iDescription[i], ""))
		{
			strcpy(tMessage[tMsgSort], tITEM_INFO->iDescription[i]);
			tDisplaySort[tMsgSort++] = 1;
			tLineBreak = 1;
		}
	}
	if (tITEM_INFO->iCheckAvatarTrade == 1)
	{
		tstr = mMESSAGE.Return(810);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 2;
		tLineBreak = 1;
	}
	if (tLineBreak)
	{
		strcpy(tMessage[tMsgSort++], "");
	}
	tLineBreak = 0;


	// For What Faction
	switch (tITEM_INFO->iEquipInfo[0])
	{
	case 1:
		tstr = mMESSAGE.Return(1030);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 2:
		tstr = mMESSAGE.Return(1031);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 3:
		tstr = mMESSAGE.Return(1032);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	case 4:
		tstr = mMESSAGE.Return(1033);
		strcpy(tMessage[tMsgSort], tstr);
		tDisplaySort[tMsgSort++] = 1;
		tLineBreak = 1;
		break;
	default:
		break;
	}
	if (tLineBreak)
	{
		strcpy(tMessage[tMsgSort++], "");
	}
	tLineBreak = 0;


	// Item Level
	if (tITEM_INFO->iSort <= 0 || tITEM_INFO->iSort > 4 && tITEM_INFO->iSort != 6)
	{
		if (tITEM_INFO->iMartialLevelLimit >= 1)
		{
			tstr = mMESSAGE.Return(1036);
			tItemLevel = tITEM_INFO->iMartialLevelLimit;
			tstr2 = mMESSAGE.Return(1116);
			sprintf(tMessage[tMsgSort], "%s : %d %s", tstr2, tItemLevel, tstr);
			tDisplaySort[tMsgSort++] = 28;
			tLineBreak = 1;
		}
		else
		{
			if (tITEM_INFO->iLevelLimit >= 113)
			{
				tstr = mMESSAGE.Return(1036);
				tItemLevel = tITEM_INFO->iLevelLimit - 112;
				tstr2 = mMESSAGE.Return(1035);
			}
			else
			{
				tstr = mMESSAGE.Return(1036);
				tItemLevel = tITEM_INFO->iLevelLimit;
				tstr2 = mMESSAGE.Return(1034);
			}
			sprintf(tMessage[tMsgSort], "%s : %d %s", tstr2, tItemLevel, tstr);
			tDisplaySort[tMsgSort++] = 28;
			tLineBreak = 1;
		}
	}
	if (tLineBreak)
	{
		strcpy(tMessage[tMsgSort++], "");
	}
	tLineBreak = 0;


	// Item Stat Points
	if (tITEM_INFO->iStrength > 0)
	{
		tValue = tITEM_INFO->iStrength;
		tstr = mMESSAGE.Return(1037);
		sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
		tDisplaySort[tMsgSort++] = 5;
		tLineBreak = 1;
	}
	if (tITEM_INFO->iWisdom > 0)
	{
		tValue = tITEM_INFO->iWisdom;
		tstr = mMESSAGE.Return(1038);
		sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
		tDisplaySort[tMsgSort++] = 5;
		tLineBreak = 1;
	}
	if (tITEM_INFO->iVitality > 0)
	{
		tValue = tITEM_INFO->iVitality;
		tstr = mMESSAGE.Return(1039);
		sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
		tDisplaySort[tMsgSort++] = 5;
		tLineBreak = 1;
	}
	if (tITEM_INFO->iKi > 0)
	{
		tValue = tITEM_INFO->iKi;
		tstr = mMESSAGE.Return(1040);
		sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
		tDisplaySort[tMsgSort++] = 5;
		tLineBreak = 1;
	}
	if (tITEM_INFO->iSort == 28)
	{
		if (mPET.ReturnAmuletHP(tITEM_INFO->iIndex) > 0)
		{
			tValue = mPET.ReturnAmuletHP(tITEM_INFO->iIndex);
			tstr = mMESSAGE.Return(1123);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
		}
		if (mPET.ReturnAmuletPetMP(tITEM_INFO->iIndex) > 0)
		{
			tValue = mPET.ReturnAmuletPetMP(tITEM_INFO->iIndex);
			tstr = mMESSAGE.Return(1124);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
		}
	}
	if (tITEM_INFO->iSort == 31 || tITEM_INFO->iSort == 32)
	{
		if (mPET.ReturnLegendPetHPStat(tITEM_INFO->iIndex) > 0)
		{
			tValue = mPET.ReturnLegendPetHPStat(tITEM_INFO->iIndex);
			tstr = mMESSAGE.Return(1123);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
		}
		if (mPET.ReturnLegendPetMPStat(tITEM_INFO->iIndex) > 0)
		{
			tValue = mPET.ReturnLegendPetMPStat(tITEM_INFO->iIndex);
			tstr = mMESSAGE.Return(1124);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
		}
	}
	// Display Stats
	if (tITEM_INFO->iAttackPower > 0)
	{
		switch (tITEM_INFO->iSort)
		{
		case 6:
			if (tItemSort == 2 || tISValue <= 0)
			{
				tValue = tITEM_INFO->iAttackPower;
				tstr = mMESSAGE.Return(1041);
				sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
				break;
			}
			tWingStat = 0.0f;
			if (tITEM_INFO->iIndex == 213 || tITEM_INFO->iIndex == 214 || tITEM_INFO->iIndex == 215 || tITEM_INFO->iIndex == 216 || tITEM_INFO->iIndex == 217 || tITEM_INFO->iIndex == 218 || tITEM_INFO->iIndex == 2303 || tITEM_INFO->iIndex == 2304 || tITEM_INFO->iIndex == 2305)
			{
				tWingStat = 23.4f;
			}
			else if (tITEM_INFO->iIndex == 219 || tITEM_INFO->iIndex == 220 || tITEM_INFO->iIndex == 221)
			{
				tWingStat = 40.0f;
			}
			else if (tITEM_INFO->iIndex == 222 || tITEM_INFO->iIndex == 223 || tITEM_INFO->iIndex == 224)
			{
				tWingStat = 50.0f;
			}
			else if (tITEM_INFO->iIndex == 225 || tITEM_INFO->iIndex == 226 || tITEM_INFO->iIndex == 227)
			{
				tWingStat = 60.0f;
			}
			else if (tITEM_INFO->iIndex == 228 || tITEM_INFO->iIndex == 229 || tITEM_INFO->iIndex == 230)
			{
				tWingStat = 70.0f;
			}
			else if (tITEM_INFO->iIndex == 231 || tITEM_INFO->iIndex == 232 || tITEM_INFO->iIndex == 233)
			{
				tWingStat = 100.0f;
			}
			else
			{
				tWingStat = 11.7f;
			}
			tValue = (tISValue * tWingStat);
			tValue2 = tITEM_INFO->iAttackPower;
			tstr = mMESSAGE.Return(1041);
			sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;

		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			if (tIUValue <= 0)
			{
				if (tItemSort == 1 || tItemSort == 4)
				{
					if (tISValue <= 0)
					{
						tValue = tITEM_INFO->iAttackPower;
						tstr = mMESSAGE.Return(1041);
						sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
						tDisplaySort[tMsgSort++] = 27;
						tLineBreak = 1;
						break;
					}
					if (tISValue >= 100)
					{
						tISValue -= 100;
					}
					tValue = 1200 * tISValue;
					tValue2 = tITEM_INFO->iAttackPower;
					tstr = mMESSAGE.Return(1041);
					sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
					break;
				}
				if (tITEM_INFO->iCheckItemSet == 3)
				{
					if (tISValue <= 0)
					{
						tValue = tITEM_INFO->iAttackPower;
						tstr = mMESSAGE.Return(1041);
						sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
					}
					else
					{
						tValue = mUTIL.ReturnSet3ItemIUValue_AttackPower(tISValue);
						tValue2 = tITEM_INFO->iAttackPower;
						tstr = mMESSAGE.Return(1041);
						sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
					}
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
				else
				{
					if (tISValue <= 0)
					{
						tValue = tITEM_INFO->iAttackPower;
						tstr = mMESSAGE.Return(1041);
						sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
					}
					else
					{
						tValue = (tITEM_INFO->iAttackPower * tISValue * 0.03f);
						tValue2 = tITEM_INFO->iAttackPower;
						tstr = mMESSAGE.Return(1041);
						sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
					}
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
			}
			else
			{
				if (tItemSort == 1 || tItemSort == 4)
				{
					if (tISValue <= 0)
					{
						tValue = tITEM_INFO->iAttackPower;
						tstr = mMESSAGE.Return(1041);
						sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
						tDisplaySort[tMsgSort++] = 27;
						tLineBreak = 1;
						break;
					}
					if (tISValue >= 100)
					{
						tISValue -= 100;
					}
					tValue = 1200 * tISValue;
					tValue2 = tITEM_INFO->iAttackPower;
					tstr = mMESSAGE.Return(1041);
					sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
					break;
				}
				if (tITEM_INFO->iCheckItemSet == 2)
				{
					tValue = mUTIL.ReturnSetItemIUValue_AttackPower(7, tIUValue, 0);
					if (tISValue <= 0)
					{
						tValue2 = tITEM_INFO->iAttackPower;
						tstr = mMESSAGE.Return(1041);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue);
					}
					else
					{
						tValue2 = (tITEM_INFO->iAttackPower * tISValue * 0.03f);
						tValue3 = tITEM_INFO->iAttackPower;
						tstr = mMESSAGE.Return(1041);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)(+%d)", tstr, tValue3, tValue, tValue2);
					}
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
				else
				{
					tValue = mUTIL.ReturnIUEffectValue(tITEM_INFO, 1);
					if (tISValue <= 0)
					{
						tValue2 = tITEM_INFO->iAttackPower;
						tstr = mMESSAGE.Return(1041);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue * tIUValue);
					}
					else
					{
						tValue2 = ((tValue * tIUValue + tITEM_INFO->iAttackPower) * tISValue * 0.03f);
						tValue3 = tITEM_INFO->iAttackPower;
						tstr = mMESSAGE.Return(1041);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)(+%d)", tstr, tValue3, tValue * tIUValue, tValue2);
					}
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
			}
			break;

		case 28:
			tValue = tITEM_INFO->iAttackPower;
			tstr = mMESSAGE.Return(1125);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;

		case 29:
			if (tItemSort == 9)
			{
				tValue = tITEM_INFO->iAttackPower;
				tstr = mMESSAGE.Return(1041);
				sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
				break;
			}
			if (tISValue <= 0)
			{
				tValue = tITEM_INFO->iAttackPower;
				tstr = mMESSAGE.Return(1041);
				sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			}
			else
			{
				tValue = 6 * tISValue;
				tValue2 = tITEM_INFO->iAttackPower;
				tstr = mMESSAGE.Return(1041);
				sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
			}
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;

		default:
			tValue = tITEM_INFO->iAttackPower;
			tstr = mMESSAGE.Return(1041);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;
		}
	}
	if (tITEM_INFO->iDefensePower > 0)
	{
		switch (tITEM_INFO->iSort)
		{
		case 6:
			if (tItemSort == 2 || tISValue <= 0)
			{
				tValue = tITEM_INFO->iDefensePower;
				tstr = mMESSAGE.Return(1042);
				sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
				break;
			}
			tWingStat = 0.0f;
			if (tITEM_INFO->iIndex == 204 || tITEM_INFO->iIndex == 205 || tITEM_INFO->iIndex == 206 || tITEM_INFO->iIndex == 216 || tITEM_INFO->iIndex == 217 || tITEM_INFO->iIndex == 218 || tITEM_INFO->iIndex == 2303 || tITEM_INFO->iIndex == 2304 || tITEM_INFO->iIndex == 2305)
			{
				tWingStat = 48.75f;
			}
			else if (tITEM_INFO->iIndex == 219 || tITEM_INFO->iIndex == 220 || tITEM_INFO->iIndex == 221)
			{
				tWingStat = 45.0f;
			}
			else if (tITEM_INFO->iIndex == 222 || tITEM_INFO->iIndex == 223 || tITEM_INFO->iIndex == 224)
			{
				tWingStat = 55.0f;
			}
			else if (tITEM_INFO->iIndex == 225 || tITEM_INFO->iIndex == 226 || tITEM_INFO->iIndex == 227)
			{
				tWingStat = 65.0f;
			}
			else if (tITEM_INFO->iIndex == 228 || tITEM_INFO->iIndex == 229 || tITEM_INFO->iIndex == 230)
			{
				tWingStat = 75.0f;
			}
			else if (tITEM_INFO->iIndex == 231 || tITEM_INFO->iIndex == 232 || tITEM_INFO->iIndex == 233)
			{
				tWingStat = 110.0f;
			}
			else
			{
				tWingStat = 24.35f;
			}
			tValue = (tISValue * tWingStat);
			tValue2 = tITEM_INFO->iDefensePower;
			tstr = mMESSAGE.Return(1042);
			sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;

		case 8:
			if (tITEM_INFO->iType == 5)
			{
				tValue = tITEM_INFO->iDefensePower;
				tstr = mMESSAGE.Return(1042);
				sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
				break;
			}
			if (tIUValue <= 0)
			{
				if (tISValue <= 0)
				{
					tValue = tITEM_INFO->iDefensePower;
					tstr = mMESSAGE.Return(1042);
					sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
				}
				else
				{
					tValue = 6 * tISValue;
					tValue2 = tITEM_INFO->iDefensePower;
					tstr = mMESSAGE.Return(1042);
					sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
				}
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
			}
			else if (tITEM_INFO->iCheckItemSet == 2)
			{
				tValue = mUTIL.ReturnSetItemIUValue_DefensePower(1, tIUValue, 0);
				if (tISValue <= 0)
				{
					tValue2 = tITEM_INFO->iDefensePower;
					tstr = mMESSAGE.Return(1042);
					sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tstr);
				}
				else
				{
					tValue2 = 6 * tISValue;
					tValue3 = tITEM_INFO->iDefensePower;
					tstr = mMESSAGE.Return(1042);
					sprintf(tMessage[tMsgSort], "%s : (%d+%d)(+%d)", tstr, tValue3, tValue, tValue2);
				}
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
			}
			else
			{
				tValue = mUTIL.ReturnIUEffectValue(tITEM_INFO, 2);
				if (tISValue <= 0)
				{
					tValue2 = tITEM_INFO->iDefensePower;
					tstr = mMESSAGE.Return(1042);
					sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue * tIUValue);
				}
				else
				{
					tValue2 = 6 * tISValue;
					tValue3 = tITEM_INFO->iDefensePower;
					tstr = mMESSAGE.Return(1042);
					sprintf(tMessage[tMsgSort], "%s : (%d+%d)(+%d)", tstr, tValue3, tValue * tIUValue, tValue2);
				}
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
			}
			break;

		case 9:
			if (tIUValue <= 0)
			{
				if (tItemSort == 1 || tItemSort == 4)
				{
					if (tISValue <= 0)
					{
						tValue = tITEM_INFO->iDefensePower;
						tstr = mMESSAGE.Return(1042);
						sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
						tDisplaySort[tMsgSort++] = 27;
						tLineBreak = 1;
						break;
					}
					if (tISValue >= 100)
					{
						tISValue -= 100;
					}
					tValue = 1000 * tISValue;
					tValue2 = tITEM_INFO->iDefensePower;
					tstr = mMESSAGE.Return(1042);
					sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
					break;
				}
				if (tISValue <= 0)
				{
					tValue = tITEM_INFO->iDefensePower;
					tstr = mMESSAGE.Return(1042);
					sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
				}
				else
				{
					tValue = (tITEM_INFO->iDefensePower * tISValue * 0.03f);
					tValue2 = tITEM_INFO->iDefensePower;
					tstr = mMESSAGE.Return(1042);
					sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
				}
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
			}
			else
			{
				if (tItemSort == 1 || tItemSort == 4)
				{
					if (tISValue <= 0)
					{
						tValue = tITEM_INFO->iDefensePower;
						tstr = mMESSAGE.Return(1042);
						sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
						tDisplaySort[tMsgSort++] = 27;
						tLineBreak = 1;
						break;
					}
					if (tISValue >= 100)
					{
						tISValue -= 100;
					}
					tValue = 1000 * tISValue;
					tValue2 = tITEM_INFO->iDefensePower;
					tstr = mMESSAGE.Return(1042);
					sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
					break;
				}
				if (tITEM_INFO->iCheckItemSet == 2)
				{
					tValue = mUTIL.ReturnSetItemIUValue_DefensePower(2, tIUValue, 0);
					if (tISValue <= 0)
					{
						tValue2 = tITEM_INFO->iDefensePower;
						tstr = mMESSAGE.Return(1042);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue);
					}
					else
					{
						tValue2 = (tITEM_INFO->iDefensePower * tISValue * 0.03f);
						tValue3 = tITEM_INFO->iDefensePower;
						tstr = mMESSAGE.Return(1042);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)(+%d)", tstr, tValue3, tValue, tValue2);
					}
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
				else
				{
					tValue = mUTIL.ReturnIUEffectValue(tITEM_INFO, 2);
					if (tISValue <= 0)
					{
						tValue2 = tITEM_INFO->iDefensePower;
						tstr = mMESSAGE.Return(1042);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue * tIUValue);
					}
					else
					{
						tValue2 = ((tValue * tIUValue + tITEM_INFO->iDefensePower) * tISValue * 0.03f);
						tValue3 = tITEM_INFO->iDefensePower;
						tstr = mMESSAGE.Return(1042);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)(+%d)", tstr, tValue3, tValue * tIUValue, tValue2);
					}
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
			}
			break;

		case 10:
			if (tIUValue <= 0 || tItemSort == 1 || tItemSort == 4)
			{
				tValue = tITEM_INFO->iDefensePower;
				tstr = mMESSAGE.Return(1042);
				sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
				break;
			}
			if (tITEM_INFO->iCheckItemSet == 2)
			{
				tValue = mUTIL.ReturnSetItemIUValue_DefensePower(3, tIUValue, 0);
				tValue2 = tITEM_INFO->iDefensePower;
				tstr = mMESSAGE.Return(1042);
				sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue);
			}
			else
			{
				tValue = mUTIL.ReturnIUEffectValue(tITEM_INFO, 2);
				tValue2 = tITEM_INFO->iDefensePower;
				tstr = mMESSAGE.Return(1042);
				sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue * tIUValue);
			}
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;

		case 12:
			if (tIUValue <= 0)
			{
				tValue = tITEM_INFO->iDefensePower;
				tstr = mMESSAGE.Return(1042);
				sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
				break;
			}
			if (tITEM_INFO->iCheckItemSet == 2)
			{
				tValue = mUTIL.ReturnSetItemIUValue_DefensePower(5, tIUValue, 0);
				tValue2 = tITEM_INFO->iDefensePower;
				tstr = mMESSAGE.Return(1042);
				sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue2);
			}
			else
			{
				tValue = mUTIL.ReturnIUEffectValue(tITEM_INFO, 2);
				tValue2 = tITEM_INFO->iDefensePower;
				tstr = mMESSAGE.Return(1042);
				cout << tIUValue << " " << tValue << endl;
				sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue * tIUValue);
			}
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;

		case 28:
			tValue = tITEM_INFO->iDefensePower;
			tstr = mMESSAGE.Return(1126);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;

		case 29:
			if (tItemSort == 9)
			{
				tValue = tITEM_INFO->iDefensePower;
				tstr = mMESSAGE.Return(1042);
				sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
				break;
			}
			if (tISValue <= 0)
			{
				tValue = tITEM_INFO->iDefensePower;
				tstr = mMESSAGE.Return(1042);
				sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			}
			else
			{
				tValue = 6 * tISValue;
				tValue2 = tITEM_INFO->iDefensePower;
				tstr = mMESSAGE.Return(1042);
				sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
			}
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;

		default:
			tValue = tITEM_INFO->iDefensePower;
			tstr = mMESSAGE.Return(1042);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;
		}
	}
	if (tITEM_INFO->iAttackSucess > 0)
	{
		switch (tITEM_INFO->iSort)
		{
		case 10:
			if (tIUValue <= 0)
			{
				if (tItemSort == 1 || tItemSort == 4)
				{
					if (tISValue > 0)
					{
						if (tISValue >= 100)
						{
							tISValue -= 100;
						}
						sprintf(tMessage[tMsgSort], "%s : %d(+%d)", mMESSAGE.Return(1043), tITEM_INFO->iAttackSucess, 1500 * tISValue);
						tDisplaySort[tMsgSort++] = 27;
						tLineBreak = 1;
					}
					break;
				}
				if (tISValue <= 0)
				{
					tValue = tITEM_INFO->iAttackSucess;
					tstr = mMESSAGE.Return(1043);
					sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
				}
				else
				{
					tValue = (tITEM_INFO->iAttackSucess * tISValue * 0.03f);
					tValue2 = tITEM_INFO->iAttackSucess;
					tstr = mMESSAGE.Return(1043);
					sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
				}
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
				break;
			}
			else
			{
				if (tItemSort == 1 || tItemSort == 4)
				{
					if (tISValue > 0)
					{
						if (tISValue >= 100)
						{
							tISValue -= 100;
						}
						sprintf(tMessage[tMsgSort], "%s : %d(+%d)", mMESSAGE.Return(1043), tITEM_INFO->iAttackSucess, 1500 * tISValue);
						tDisplaySort[tMsgSort++] = 27;
						tLineBreak = 1;
					}
					break;
				}
				if (tITEM_INFO->iCheckItemSet == 2)
				{
					tValue = mUTIL.ReturnSetItemIUValue_AttackSuccess(3, tIUValue, 0);
					if (tISValue <= 0)
					{
						tValue2 = tITEM_INFO->iAttackSucess;
						tstr = mMESSAGE.Return(1043);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue);
					}
					else
					{
						tValue2 = (tITEM_INFO->iAttackSucess * tISValue * 0.03f);
						tValue3 = tITEM_INFO->iAttackSucess;
						tstr = mMESSAGE.Return(1043);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)(+%d)", tstr, tValue3, tValue, tValue2);
					}
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
				else
				{
					tValue = mUTIL.ReturnIUEffectValue(tITEM_INFO, 3);
					if (tISValue <= 0)
					{
						tValue2 = tITEM_INFO->iAttackSucess;
						tstr = mMESSAGE.Return(1043);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue * tIUValue);
					}
					else
					{
						tValue2 = ((tValue * tIUValue + tITEM_INFO->iAttackSucess) * tISValue * 0.03f);
						tValue3 = tITEM_INFO->iAttackSucess;
						tstr = mMESSAGE.Return(1043);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)(+%d)", tstr, tValue3, tValue * tIUValue, tValue2);
					}
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
			}
			break;

		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			if (tIUValue <= 0 || tItemSort == 1 || tItemSort == 4)
			{
				sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1043), tITEM_INFO->iAttackSucess);
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
				break;
			}
			if (tITEM_INFO->iCheckItemSet == 2)
			{
				tValue = mUTIL.ReturnSetItemIUValue_AttackSuccess(7, tIUValue, 0);
				tValue2 = tITEM_INFO->iAttackSucess;
				tstr = mMESSAGE.Return(1043);
				sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue);
			}
			else
			{
				tValue = mUTIL.ReturnIUEffectValue(tITEM_INFO, 3);
				tValue2 = tITEM_INFO->iAttackSucess;
				tstr = mMESSAGE.Return(1043);
				sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue * tIUValue);
			}
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;

		default:
			sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1043), tITEM_INFO->iAttackSucess);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;
		}
	}
	if (tITEM_INFO->iAttackBlock > 0)
	{
		switch (tITEM_INFO->iSort)
		{
		case 9:
			if (tIUValue <= 0 || tItemSort == 1 || tItemSort == 4)
			{
				sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1044), tITEM_INFO->iAttackBlock);
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
				break;
			}
			if (tITEM_INFO->iCheckItemSet == 2)
			{
				tValue = mUTIL.ReturnSetItemIUValue_AttackBlock(2, tIUValue, 0);
				tValue2 = tITEM_INFO->iAttackBlock;
				tstr = mMESSAGE.Return(1044);
				sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue);
			}
			else
			{
				tValue = mUTIL.ReturnIUEffectValue(tITEM_INFO, 4);
				tValue2 = tITEM_INFO->iAttackBlock;
				tstr = mMESSAGE.Return(1044);
				sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue * tIUValue);
			}
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;

		case 12:
			if (tIUValue <= 0)
			{
				if (tItemSort == 1 || tItemSort == 4)
				{
					if (tISValue <= 0)
					{
						sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1044), tITEM_INFO->iAttackBlock);
						tDisplaySort[tMsgSort++] = 27;
						tLineBreak = 1;
						break;
					}
					if (tISValue >= 100)
					{
						tISValue -= 100;
					}
					sprintf(tMessage[tMsgSort], "%s : %d(+%d)", mMESSAGE.Return(1044), tITEM_INFO->iAttackBlock, 300 * tISValue);
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
					break;
				}
				if (tISValue <= 0)
				{
					tValue = tITEM_INFO->iAttackBlock;
					tstr = mMESSAGE.Return(1044);
					sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
				}
				else
				{
					tValue = (tITEM_INFO->iAttackBlock * tISValue * 0.03f);
					tValue2 = tITEM_INFO->iAttackBlock;
					tstr = mMESSAGE.Return(1044);
					sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
				}
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
			}
			else
			{
				if (tItemSort == 1 || tItemSort == 4)
				{
					if (tISValue <= 0)
					{
						sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1044), tITEM_INFO->iAttackBlock);
						tDisplaySort[tMsgSort++] = 27;
						tLineBreak = 1;
						break;
					}
					if (tISValue >= 100)
					{
						tISValue -= 100;
					}
					sprintf(tMessage[tMsgSort], "%s : %d(+%d)", mMESSAGE.Return(1044), tITEM_INFO->iAttackBlock, 300 * tISValue);
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
					break;
				}
				if (tITEM_INFO->iCheckItemSet == 2)
				{
					tValue = mUTIL.ReturnSetItemIUValue_AttackBlock(5, tIUValue, 0);
					if (tISValue <= 0)
					{
						tValue2 = tITEM_INFO->iAttackBlock;
						tstr = mMESSAGE.Return(1044);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue);
					}
					else
					{
						tValue2 = (tITEM_INFO->iAttackBlock * tISValue * 0.03f);
						tValue3 = tITEM_INFO->iAttackBlock;
						tstr = mMESSAGE.Return(1044);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)(+%d)", tstr, tValue3, tValue, tValue2);
					}
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
				else
				{
					tValue = mUTIL.ReturnIUEffectValue(tITEM_INFO, 4);
					if (tISValue <= 0)
					{
						tValue2 = tITEM_INFO->iAttackBlock;
						tstr = mMESSAGE.Return(1044);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue * tIUValue);
					}
					else
					{
						tValue2 = ((tValue * tIUValue + tITEM_INFO->iAttackBlock) * tISValue * 0.03f);
						tValue3 = tITEM_INFO->iAttackBlock;
						tstr = mMESSAGE.Return(1044);
						sprintf(tMessage[tMsgSort], "%s : (%d+%d)(+%d)", tstr, tValue3, tValue * tIUValue, tValue2);
					}
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
			}
			break;

		default:
			sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1044), tITEM_INFO->iAttackBlock);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;
		}
	}
	if (tITEM_INFO->iElementAttackPower > 0)
	{
		switch (tITEM_INFO->iSort)
		{
		case 6:
			if (tISValue <= 0 || tItemSort == 2)
			{
				sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1047), tITEM_INFO->iElementAttackPower);
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
				break;
			}
			tWingStat = 0.0f;
			if (tITEM_INFO->iIndex == 210 || tITEM_INFO->iIndex == 211 || tITEM_INFO->iIndex == 212 || tITEM_INFO->iIndex == 216 || tITEM_INFO->iIndex == 217 || tITEM_INFO->iIndex == 218 || tITEM_INFO->iIndex == 2303 || tITEM_INFO->iIndex == 2304 || tITEM_INFO->iIndex == 2305)
			{
				tWingStat = 7.8f;
			}
			else if (tITEM_INFO->iIndex == 219 || tITEM_INFO->iIndex == 220 || tITEM_INFO->iIndex == 221)
			{
				tWingStat = 15.0f;
			}
			else if (tITEM_INFO->iIndex == 222 || tITEM_INFO->iIndex == 223 || tITEM_INFO->iIndex == 224)
			{
				tWingStat = 20.0f;
			}
			else if (tITEM_INFO->iIndex == 225 || tITEM_INFO->iIndex == 226 || tITEM_INFO->iIndex == 227)
			{
				tWingStat = 25.0f;
			}
			else if (tITEM_INFO->iIndex == 228 || tITEM_INFO->iIndex == 229 || tITEM_INFO->iIndex == 230)
			{
				tWingStat = 30.0f;
			}
			else if (tITEM_INFO->iIndex == 231 || tITEM_INFO->iIndex == 232 || tITEM_INFO->iIndex == 233)
			{
				tWingStat = 50.0f;
			}
			else
			{
				tWingStat = 3.9f;
			}
			tValue = (tISValue * tWingStat);
			tValue2 = tITEM_INFO->iElementAttackPower;
			tstr = mMESSAGE.Return(1047);
			sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;

		case 11:
			if (tIUValue <= 0)
			{
				if (tItemSort == 1 || tItemSort == 4 && tISValue <= 0)
				{
					if (tISValue >= 100)
					{
						tISValue -= 100;
					}
					sprintf(tMessage[tMsgSort], "%s : %d(+%d)", mMESSAGE.Return(1047), tITEM_INFO->iElementAttackPower, 200 * tISValue);
					tDisplaySort[tMsgSort++] = 27;

					sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1048), 200 * tISValue);
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
				else
				{
					sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1047), tITEM_INFO->iElementAttackPower);
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
				break;
				/*if (tItemSort == 1 || tItemSort == 4 )
				{
					if (tISValue <= 0)
					{
						sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1047), tITEM_INFO->iElementAttackPower);
						tDisplaySort[tMsgSort++] = 27;
						tLineBreak = 1;
						break;
					}
					if (tISValue >= 100)
					{
						tISValue -= 100;
					}
					sprintf(tMessage[tMsgSort], "%s : %d(+%d)", mMESSAGE.Return(1047), tITEM_INFO->iElementAttackPower, 200 * tISValue);
					tDisplaySort[tMsgSort++] = 27;
					sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1048), 200 * tISValue);
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
					break;
				}*/
			}
			else
			{
				if (tItemSort == 1 || tItemSort == 4)
				{
					if (tISValue <= 0)
					{
						sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1047), tITEM_INFO->iElementAttackPower);
						tDisplaySort[tMsgSort++] = 27;
						tLineBreak = 1;
						break;
					}
					if (tISValue >= 100)
					{
						tISValue -= 100;
					}
					sprintf(tMessage[tMsgSort], "%s : %d(+%d)", mMESSAGE.Return(1047), tITEM_INFO->iElementAttackPower, 200 * tISValue);
					tDisplaySort[tMsgSort++] = 27;
					sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1048), 200 * tISValue);
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
					break;
				}
				if (tITEM_INFO->iCheckItemSet == 2)
				{
					tValue = mUTIL.ReturnSetItemIUValue_ElementAttackPower(4, tIUValue, 0);
					tValue2 = tITEM_INFO->iElementAttackPower;
					tstr = mMESSAGE.Return(1047);
					sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue);
				}
				else
				{
					tValue = mUTIL.ReturnIUEffectValue(tITEM_INFO, 5);
					tValue2 = tITEM_INFO->iElementAttackPower;
					tstr = mMESSAGE.Return(1047);
					sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue * tIUValue);
				}
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
			}
			break;

		default:
			sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1047), tITEM_INFO->iElementAttackPower);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;
		}
	}
	if (tITEM_INFO->iElementDefensePower > 0)
	{
		switch (tITEM_INFO->iSort)
		{
		case 6:
			if (tISValue <= 0 || tItemSort == 2)
			{
				sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1048), tITEM_INFO->iElementDefensePower);
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
				break;
			}
			tWingStat = 0.0f;
			if (tITEM_INFO->iIndex == 234)
			{
				tWingStat = 3.90f;
			}
			else if (tITEM_INFO->iIndex == 207 || tITEM_INFO->iIndex == 208 || tITEM_INFO->iIndex == 209 || tITEM_INFO->iIndex == 216 || tITEM_INFO->iIndex == 217 || tITEM_INFO->iIndex == 218 || tITEM_INFO->iIndex == 2303 || tITEM_INFO->iIndex == 2304 || tITEM_INFO->iIndex == 2305)
			{
				tWingStat = 7.8f;
			}
			else if (tITEM_INFO->iIndex == 219 || tITEM_INFO->iIndex == 220 || tITEM_INFO->iIndex == 221)
			{
				tWingStat = 15.0f;
			}
			else if (tITEM_INFO->iIndex == 222 || tITEM_INFO->iIndex == 223 || tITEM_INFO->iIndex == 224)
			{
				tWingStat = 20.0f;
			}
			else if (tITEM_INFO->iIndex == 225 || tITEM_INFO->iIndex == 226 || tITEM_INFO->iIndex == 227)
			{
				tWingStat = 25.0f;
			}
			else if (tITEM_INFO->iIndex == 228 || tITEM_INFO->iIndex == 229 || tITEM_INFO->iIndex == 230)
			{
				tWingStat = 30.0f;
			}
			else if (tITEM_INFO->iIndex == 231 || tITEM_INFO->iIndex == 232 || tITEM_INFO->iIndex == 233)
			{
				tWingStat = 50.0f;
			}
			else
			{
				tWingStat = 3.9f;
			}
			tValue = (tISValue * tWingStat);
			sprintf(tMessage[tMsgSort], "%s : %d(+%d)", mMESSAGE.Return(1048), tITEM_INFO->iElementDefensePower, tValue);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;

		case 7:
			if (tIUValue <= 0)
			{
				if (tItemSort == 1 || tItemSort == 4)
				{
					if (tISValue <= 0)
					{
						sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1048), tITEM_INFO->iElementDefensePower);
						tDisplaySort[tMsgSort++] = 27;
						tLineBreak = 1;
						break;
					}
					if (tISValue >= 100)
					{
						tISValue -= 100;
					}
					sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1048), tITEM_INFO->iElementDefensePower);
					tDisplaySort[tMsgSort++] = 27;
					sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1123), 500 * tISValue);
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
					break;
				}
				sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1048), tITEM_INFO->iElementDefensePower);
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
				break;
			}
			else
			{
				if (tItemSort == 1 || tItemSort == 4)
				{
					if (tISValue <= 0)
					{
						sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1048), tITEM_INFO->iElementDefensePower);
						tDisplaySort[tMsgSort++] = 27;
						tLineBreak = 1;
						break;
					}
					if (tISValue >= 100)
					{
						tISValue -= 100;
					}
					sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1048), tITEM_INFO->iElementDefensePower);
					tDisplaySort[tMsgSort++] = 27;
					sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1123), 500 * tISValue);
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
					break;
				}
				if (tITEM_INFO->iCheckItemSet == 2)
				{
					tValue = mUTIL.ReturnSetItemIUValue_ElementDefensePower(0, tIUValue, 0);
					tValue2 = tITEM_INFO->iElementDefensePower;
					tstr = mMESSAGE.Return(1048);
					sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue);
				}
				else
				{
					tValue = mUTIL.ReturnIUEffectValue(tITEM_INFO, 6);
					tValue2 = tITEM_INFO->iElementDefensePower;
					tstr = mMESSAGE.Return(1048);
					sprintf(tMessage[tMsgSort], "%s : (%d+%d)", tstr, tValue2, tValue * tIUValue);
				}
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
			}
			break;

		default:
			sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1048), tITEM_INFO->iElementDefensePower);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;
		}
	}
	if (tITEM_INFO->iCritical > 0)
	{
		switch (tITEM_INFO->iSort)
		{
		case 11:
			sprintf(tMessage[tMsgSort], "%s : %d(+%d)(%%)", mMESSAGE.Return(1045), tITEM_INFO->iCritical, tISValue / 4);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
			break;

		default:
			if (tItemSort == 1 || tItemSort == 4 || tISValue <= 0)
			{
				sprintf(tMessage[tMsgSort], "%s : %d(%%)", mMESSAGE.Return(1045), tITEM_INFO->iCritical);
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
			}
			break;

		}
	}
	switch (tITEM_INFO->iSort)
	{
	case 7:
		if (tItemSort == 1 || tItemSort == 4 || tISValue <= 0)
		{
			if (tITEM_INFO->iLuck > 0)
			{
				sprintf(tMessage[tMsgSort], "%s : %d", mMESSAGE.Return(1046), tITEM_INFO->iLuck);
				tDisplaySort[tMsgSort++] = 27;
				tLineBreak = 1;
			}
		}
		else
		{
			tValue = 12 * tISValue;
			tValue2 = tITEM_INFO->iLuck;
			tstr = mMESSAGE.Return(1046);
			sprintf(tMessage[tMsgSort], "%s : %d(+%d)", tstr, tValue2, tValue);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
		}
		break;

	default:
		if (tITEM_INFO->iLuck > 0)
		{
			tValue = tITEM_INFO->iLuck;
			tstr = mMESSAGE.Return(1046);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 27;
			tLineBreak = 1;
		}
		break;
	}
	if (tLineBreak)
	{
		strcpy(tMessage[tMsgSort++], "");
	}
	tLineBreak = 0;

	// Bonus Skill Info
	for (i = 0; i < 8; ++i)
	{
		if (tITEM_INFO->iBonusSkillInfo[i][0] >= 1)
		{
			tSKILL_INFO = mSKILL.Search(tITEM_INFO->iBonusSkillInfo[i][0]);
			if (tSKILL_INFO)
			{
				sprintf(tMessage[tMsgSort], "%s (+%d)", tSKILL_INFO->sName, tITEM_INFO->iBonusSkillInfo[i][1]);
				tDisplaySort[tMsgSort++] = 7;
				tLineBreak = 1;
			}
		}
	}
	if (tLineBreak)
	{
		strcpy(tMessage[tMsgSort++], "");
	}
	tLineBreak = 0;

	// Potion Info
	switch (tITEM_INFO->iSort)
	{
	case 2:
		switch (tITEM_INFO->iPotionType[0])
		{
		case 1:
			tValue = tITEM_INFO->iPotionType[1];
			tstr = mMESSAGE.Return(1049);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
			break;
		case 2:
			tValue = tITEM_INFO->iPotionType[1];
			tstr = mMESSAGE.Return(1050);
			sprintf(tMessage[tMsgSort], "%s : %d(%%)", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
			break;
		case 3:
			tValue = tITEM_INFO->iPotionType[1];
			tstr = mMESSAGE.Return(1051);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
			break;
		case 4:
			tValue = tITEM_INFO->iPotionType[1];
			tstr = mMESSAGE.Return(1052);
			sprintf(tMessage[tMsgSort], "%s : %d(%%)", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
			break;
		case 5:
			tValue = tITEM_INFO->iPotionType[1];
			tstr = mMESSAGE.Return(1050);
			sprintf(tMessage[tMsgSort], "%s : %d(%%)", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tValue = tITEM_INFO->iPotionType[1];
			tstr = mMESSAGE.Return(1052);
			sprintf(tMessage[tMsgSort], "%s : %d(%%)", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
			break;
		case 6:
		case 16:
			tValue = tITEM_INFO->iPotionType[1];
			tstr = mMESSAGE.Return(1053);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
			break;
		default:
			break;
		}
		break;

	case 5:
		tSKILL_INFO = mSKILL.Search(tITEM_INFO->iGainSkillNumber);
		if (tSKILL_INFO)
		{
			tstr = mMESSAGE.Return(1122);
			sprintf(tMessage[tMsgSort], "%s : %s", tstr, tSKILL_INFO->sName);
			tDisplaySort[tMsgSort++] = 3;
			tValue = tSKILL_INFO->sLearnSkillPoint;
			tstr = mMESSAGE.Return(1121);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
		}
		break;

	case 7:
		if (tITEM_INFO->iLastAttackBonusInfo[0] > 0)
		{
			tValue = tITEM_INFO->iLastAttackBonusInfo[0];
			tstr = mMESSAGE.Return(1055);
			sprintf(tMessage[tMsgSort], "%s : %d(%%)", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
		}
		if (tITEM_INFO->iLastAttackBonusInfo[1] > 0)
		{
			tValue = tITEM_INFO->iLastAttackBonusInfo[1];
			tstr = mMESSAGE.Return(1056);
			sprintf(tMessage[tMsgSort], "%s : %d(%%)", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
		}
		if (tITEM_INFO->iCapeInfo[2] > 0)
		{
			tValue = tITEM_INFO->iCapeInfo[2];
			tstr = mMESSAGE.Return(1059);
			sprintf(tMessage[tMsgSort], "%s : +%d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
		}
		break;

	case 8:
		if (tITEM_INFO->iCapeInfo[0] > 0)
		{
			tValue = tITEM_INFO->iCapeInfo[0];
			tstr = mMESSAGE.Return(1057);
			sprintf(tMessage[tMsgSort], "%s : %d(%%)", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
		}
		if (tITEM_INFO->iCapeInfo[1] > 0)
		{
			tValue = tITEM_INFO->iCapeInfo[1];
			tstr = mMESSAGE.Return(1058);
			sprintf(tMessage[tMsgSort], "%s : %d(%%)", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
		}
		if (tITEM_INFO->iCapeInfo[2] > 0)
		{
			tValue = tITEM_INFO->iCapeInfo[2];
			tstr = mMESSAGE.Return(1059);
			sprintf(tMessage[tMsgSort], "%s : +%d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
		}
		if (tItemSort == 8)
		{
			tValue = 0;
			tValue2 = 0;
			if (tIUValue > 0)
			{
				tValue = 10 * (tIUValue / 10);
				tValue = tIUValue % 10;
				tMessageNum = 0;
				switch (tValue)
				{
				case 20:
					tMessageNum = 2734;
					break;
				case 30:
					tMessageNum = 2735;
					break;
				case 40:
					tMessageNum = 2736;
					break;
				case 50:
					tMessageNum = 2737;
					break;
				}
				if (tValue2)
				{
					tstr = mMESSAGE.Return(tMessageNum);
					tstr2 = mMESSAGE.Return(2733);
					sprintf(tMessage[tMsgSort], "%s : %s (+%d)", tstr2, tstr, tValue2);
				}
				else
				{
					tstr = mMESSAGE.Return(tMessageNum);
					tstr2 = mMESSAGE.Return(2733);
					sprintf(tMessage[tMsgSort], "%s : %s", tstr2, tstr);
				}
				tDisplaySort[tMsgSort++] = 3;
				tLineBreak = 1;
			}
			if (tISValue <= 0 || tISValue >= 100)
			{
				if (tISValue >= 100)
				{
					tValue = tISValue - 100;
					tstr = mMESSAGE.Return(2738);
					sprintf(tMessage[tMsgSort], "%s : (+%d%%)", tstr, tValue);
					tDisplaySort[tMsgSort++] = 3;
					tLineBreak = 1;
				}
			}
			else
			{
				tValue = tISValue;
				tstr = mMESSAGE.Return(2738);
				sprintf(tMessage[tMsgSort], "%s : (+%d%%)", tstr, tValue);
				tDisplaySort[tMsgSort++] = 3;
				tLineBreak = 1;
			}
			if (tValue2 > 0)
			{
				tMessageNum = 0;
				switch (tValue)
				{
				case 20:
					tMessageNum = 2788;
					break;
				case 30:
					tMessageNum = 2789;
					break;
				case 40:
					tMessageNum = 2790;
					break;
				case 50:
					tMessageNum = 2791;
					break;
				}
				tstr = mMESSAGE.Return(tMessageNum);
				sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue2);
				tDisplaySort[tMsgSort++] = 3;
				tLineBreak = 1;
			}
		}
		break;

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
		if (tITEM_INFO->iCapeInfo[2] > 0)
		{
			tValue = tITEM_INFO->iCapeInfo[2];
			tstr = mMESSAGE.Return(1059);
			sprintf(tMessage[tMsgSort], "%s : +%d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
		}
		break;

	case 22:
		tstr = mMESSAGE.Return(1054);
		sprintf(tMessage[tMsgSort], "%s : %d", tstr, tQuantity);
		tDisplaySort[tMsgSort++] = 3;
		if (mPET.GetPetLife(tITEM_INFO->iIndex, tImprove) > 0)
		{
			tValue = mPET.GetPetLife(tITEM_INFO->iIndex, tImprove);
			tstr = mMESSAGE.Return(1123);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
		}
		if (mPET.GetPetChi(tITEM_INFO->iIndex, tImprove) > 0)
		{
			tValue = mPET.GetPetChi(tITEM_INFO->iIndex, tImprove);
			tstr = mMESSAGE.Return(1124);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
		}
		if (mPET.GetPetAtk(tITEM_INFO->iIndex, tImprove, tQuantity) > 0)
		{
			tValue = mPET.GetPetAtk(tITEM_INFO->iIndex, tImprove, tQuantity);
			tstr = mMESSAGE.Return(1125);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
		}
		if (mPET.GetPetDef(tITEM_INFO->iIndex, tImprove, tQuantity) > 0)
		{
			tValue = mPET.GetPetDef(tITEM_INFO->iIndex, tImprove, tQuantity);
			tstr = mMESSAGE.Return(1126);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
		}
		if (mPET.GetPetAdditionalAtk(tITEM_INFO->iIndex, tImprove, tQuantity) > 0)
		{
			tValue = mPET.GetPetAdditionalAtk(tITEM_INFO->iIndex, tImprove, tQuantity);
			tstr = mMESSAGE.Return(1098);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 34;
		}
		tLineBreak = 1;
		break;

	case 28:
		if (tImprove > 0)
		{
			tValue = mUTIL.ReturnISValue(tImprove) / 10;
			switch (tValue)
			{
			case 1:
				tMessageNum = 1125;
				break;
			case 2:
				tMessageNum = 1123;
				break;
			case 3:
				tMessageNum = 2506;
				break;
			case 4:
				tMessageNum = 1124;
				break;
			case 5:
				tMessageNum = 1104;
				break;
			case 6:
				tMessageNum = 1105;
				break;
			default:
				tMessageNum = 0;
				break;
			}
			if (tMessageNum > 0)
			{
				tValue = mPET.ReturnAmuletPetability1(tITEM_INFO->iIndex, tImprove, tMessageNum);
				tstr = mMESSAGE.Return(tMessageNum);
				sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
				tDisplaySort[tMsgSort++] = 3;
			}
			tValue = mUTIL.ReturnIUValue(tImprove) / 10;
			switch (tValue)
			{
			case 1:
				tValue2 = 103;
				break;
			case 2:
				tValue2 = 82;
				break;
			case 3:
				tValue2 = 83;
				break;
			case 4:
				tValue2 = 105;
				break;
			case 5:
				tValue2 = 104;
				break;
			case 6:
				tValue2 = 84;
				break;
			default:
				tValue2 = 0;
				break;
			}
			tSKILL_INFO = mSKILL.Search(tValue2);
			if (!tSKILL_INFO)
				tValue2 = 0;
			if (tValue2 > 0)
			{
				tValue3 = mPET.ReturnPetAddSkillPoint(tITEM_INFO->iIndex, tImprove, tValue);
				sprintf(tMessage[tMsgSort], "%s : %d", tSKILL_INFO->sName, tValue3);
				tDisplaySort[tMsgSort++] = 3;
			}
			tValue = mUTIL.ReturnRFValue(tImprove) / 10;
			switch (tValue)
			{
			case 1:
				tMessageNum = 1125;
				break;
			case 2:
				tMessageNum = 1123;
				break;
			case 3:
				tMessageNum = 1104;
				break;
			case 4:
				tMessageNum = 1105;
				break;
			case 5:
				tMessageNum = 1107;
				break;
			default:
				tMessageNum = 0;
				break;
			}
			if (tMessageNum > 0)
			{
				fValue = mPET.ReturnAmuletPetability3(tITEM_INFO->iIndex, tImprove, tValue);
				tstr = mMESSAGE.Return(tMessageNum);
				sprintf(tMessage[tMsgSort], "%s : %.1f", tstr, fValue);
				tDisplaySort[tMsgSort++] = 3;
			}
		}
		break;

	case 29:
		if (tITEM_INFO->iCapeInfo[0] > 0)
		{
			tValue = tITEM_INFO->iCapeInfo[0];
			tstr = mMESSAGE.Return(1057);
			sprintf(tMessage[tMsgSort], "%s : %d(%%)", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
		}
		if (tITEM_INFO->iCapeInfo[1] > 0)
		{
			tValue = tITEM_INFO->iCapeInfo[1];
			tstr = mMESSAGE.Return(1058);
			sprintf(tMessage[tMsgSort], "%s : %d(%%)", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
		}
		if (tITEM_INFO->iCapeInfo[2] > 0)
		{
			tValue = tITEM_INFO->iCapeInfo[2];
			tstr = mMESSAGE.Return(1059);
			sprintf(tMessage[tMsgSort], "%s : +%d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
		}
		if (tItemSort == 9)
		{
			if (t4thValue > 0)
			{
				tValue = 10 * (t4thValue / 10);
				tValue2 = t4thValue % 10;
				switch (tValue)
				{
				case 20:
					tMessageNum = 2734;
					break;
				case 30:
					tMessageNum = 2735;
					break;
				case 40:
					tMessageNum = 2736;
					break;
				case 50:
					tMessageNum = 2737;
					break;
				}
				if (tValue2)
				{
					tstr = mMESSAGE.Return(tMessageNum);
					tstr2 = mMESSAGE.Return(2733);
					sprintf(tMessage[tMsgSort], "%s : %s (+%d)", tstr2, tstr, tValue2);
				}
				else
				{
					tstr = mMESSAGE.Return(tMessageNum);
					tstr2 = mMESSAGE.Return(2733);
					sprintf(tMessage[tMsgSort], "%s : %s", tstr2, tstr);
				}
				tDisplaySort[tMsgSort++] = 3;
				tLineBreak = 1;
			}
			if (tISValue <= 0 || tISValue >= 100)
			{
				if (tISValue >= 100)
				{
					tValue = tISValue - 100;
					tstr = mMESSAGE.Return(2738);
					sprintf(tMessage[tMsgSort], "%s : (+%d%%)", tstr, tValue);
					tDisplaySort[tMsgSort++] = 3;
					tLineBreak = 1;
				}
			}
			else
			{
				tValue = tISValue;
				tstr = mMESSAGE.Return(2738);
				sprintf(tMessage[tMsgSort], "%s : (+%d%%)", tstr, tValue);
				tDisplaySort[tMsgSort++] = 3;
				tLineBreak = 1;
			}
			if (tValue2 > 0)
			{
				switch (tValue)
				{
				case 20:
					tMessageNum = 2788;
					break;
				case 30:
					tMessageNum = 2789;
					break;
				case 40:
					tMessageNum = 2790;
					break;
				case 50:
					tMessageNum = 2791;
					break;
				}
				tstr = mMESSAGE.Return(tMessageNum);
				sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue2);
				tDisplaySort[tMsgSort++] = 3;
				tLineBreak = 1;
			}
		}
		if (tImprove > 0)
		{
			tValue = mUTIL.ReturnIUValue(tImprove) / 10;
			switch (tValue)
			{
			case 1:
				tMessageNum = 1041;
				break;
			case 2:
				tMessageNum = 1042;
				break;
			case 3:
				tMessageNum = 1123;
				break;
			case 4:
				tMessageNum = 1124;
				break;
			case 5:
				tMessageNum = 1047;
				break;
			case 6:
				tMessageNum = 1048;
				break;
			case 7:
				tMessageNum = 1045;
				break;
			case 8:
				tMessageNum = 1058;
				break;
			default:
				tMessageNum = 0;
				break;
			}
			if (tMessageNum > 0)
			{
				if (tValue == 7 || tValue == 8)
				{
					fValue = mUTIL.ReturnCapeAbility(tITEM_INFO->iIndex, tImprove, tValue);
					tstr = mMESSAGE.Return(tMessageNum);
					sprintf(tMessage[tMsgSort], "%s : %.1f", tstr, fValue);
					tDisplaySort[tMsgSort++] = 3;
				}
				else
				{
					tValue = mUTIL.ReturnCapeAbility(tITEM_INFO->iIndex, tImprove, tValue);
					tstr = mMESSAGE.Return(tMessageNum);
					sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
					tDisplaySort[tMsgSort++] = 3;
				}
			}
		}
		break;

	case 30:
		sX = mMYINFO.mScreenXSize / 2;
		tDisplayX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2735]) / 2;
		sY = mMYINFO.mScreenYSize / 2;
		tDisplayY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2735]) / 2;
		for (i = 0; i < 10; ++i)
		{
			mX = tDisplayX + 55 * (i % 5) + 19;
			mY = tDisplayY + 55 * (i / 5) + 41;
			if (uX > mX && uX < mX + 55 && uY > mY && uY < mY + 55)
			{
				tStat1 = mUTIL.ReturnISValue(mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
				tStat2 = mUTIL.ReturnIUValue(mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
				tStat3 = mUTIL.ReturnRFValue(mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
				tStat4 = mUTIL.Return4thValue(mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);

				// 1-9 = 11-20% HP Increase			- 0
				// 10-19 = 11-20% MP Increase		- 1
				// 20-29 = 11-20% Damage			- 2
				// 30-39 = 11-20% Defense			- 3
				// 40-49 = 11-20% Hit Rate			- 4
				// 50-59 = 11-20% Dodge				- 5
				// 60-69 = 11-20% Critical Chance	- 6
				// 70-79 = 11-20% Luck Increase		- 7
				// 80-89 = 11-20% Attr. Damage		- 8
				// 90-99 = 11-20% Attr. Defense		- 9
				if (tStat1 > 0)
				{
					sprintf(tMessage[tMsgSort], "%s : %d%%", mMESSAGE.Return(1039 + (tStat1 / 10)), 11 + (tStat1 % 10));
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
				if (tStat2 > 0)
				{
					sprintf(tMessage[tMsgSort], "%s : %d%%", mMESSAGE.Return(1039 + (tStat2 / 10)), 11 + (tStat2 % 10));
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
				if (tStat3 > 0)
				{
					sprintf(tMessage[tMsgSort], "%s : %d%%", mMESSAGE.Return(1039 + (tStat3 / 10)), 11 + (tStat3 % 10));
					tDisplaySort[tMsgSort++] = 27;
					tLineBreak = 1;
				}
				if (tStat4 > 0)
				{
					sprintf(tMessage[tMsgSort], "%s : %d%%", mMESSAGE.Return(1039 + (tStat3 / 10)), 11 + (tStat3 % 10));
					tDisplaySort[tMsgSort++] = 3;
					tLineBreak = 1;
				}
			}
		}
		break;
		//tValue = mUTIL.ReturnLeetMountStat1(1, tITEM_INFO->iIndex);
		//tValue2 = mUTIL.ReturnLeetMountStat1(2, tITEM_INFO->iIndex);
		//tValue3 = mUTIL.ReturnLeetMountStat1(3, tITEM_INFO->iIndex);
		//tValue4 = mUTIL.ReturnLeetMountStat1(4, tITEM_INFO->iIndex);
		//tValue5 = mUTIL.ReturnLeetMountStat1(5, tITEM_INFO->iIndex);
		//if (tValue > 0)
		//{
		//	tstr = mMESSAGE.Return(1047); //Attribution Damage
		//	sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue);
		//	tDisplaySort[tMsgSort++] = 27;
		//	tLineBreak = 1;
		//}
		//if (tValue2 > 0)
		//{
		//	tstr = mMESSAGE.Return(1048); //Attribution Defense
		//	sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue2);
		//	tDisplaySort[tMsgSort++] = 27;
		//	tLineBreak = 1;
		//}
		//if (tValue3 > 0)
		//{
		//	tstr = mMESSAGE.Return(1045); //Critical Damage gate
		//	sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue3);
		//	tDisplaySort[tMsgSort++] = 27;
		//	tLineBreak = 1;
		//}
		//if (tValue4 > 0)
		//{
		//	tstr = mMESSAGE.Return(1058); //Critical Damage Defense rate
		//	sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue4);
		//	tDisplaySort[tMsgSort++] = 27;
		//	tLineBreak = 1;
		//}
		//if (tValue5 > 0)
		//{
		//	tstr = mMESSAGE.Return(1123); // HP increase
		//	sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue5);
		//	tDisplaySort[tMsgSort++] = 27;
		//	tLineBreak = 1;
		//}
		//sX = mMYINFO.mScreenXSize / 2;
		//tDisplayX = sX - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[2735]) / 2;
		//sY = mMYINFO.mScreenYSize / 2;
		//tDisplayY = sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[2735]) / 2;
		//for (i = 0; i < 10; ++i)
		//{
		//	mX = tDisplayX + 55 * (i % 5) + 19;
		//	mY = tDisplayY + 55 * (i / 5) + 41;
		//	if (uX > mX && uX < mX + 55 && uY > mY && uY < mY + 55)
		//	{
		//		tValue = 10 * (mMYINFO.mAvatarInfo.aAnimalExpActivity[i] / 10000000);
		//		tValue2 = 10 * (mMYINFO.mAvatarInfo.aAnimalExpActivity[i] % 1000000 / 10000);
		//		tValue3 = 10 * (mMYINFO.mAvatarInfo.aAnimalExpActivity[i] % 1000 / 10);
		//		switch (tValue)
		//		{
		//		case 10:
		//			tValue4 = mUTIL.ReturnLeetMountStat2(1, 10, mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
		//			tstr = mMESSAGE.Return(1041);
		//			sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue4);
		//			tDisplaySort[tMsgSort++] = 27;
		//			tLineBreak = 1;
		//			break;
		//		case 20:
		//			tValue4 = mUTIL.ReturnLeetMountStat2(1, 20, mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
		//			tstr = mMESSAGE.Return(1042);
		//			sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue4);
		//			tDisplaySort[tMsgSort++] = 27;
		//			tLineBreak = 1;
		//			break;
		//		case 70:
		//			tValue4 = mUTIL.ReturnLeetMountStat2(1, 70, mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
		//			tstr = mMESSAGE.Return(1047);
		//			sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue4);
		//			tDisplaySort[tMsgSort++] = 27;
		//			tLineBreak = 1;
		//			break;
		//		case 80:
		//			tValue4 = mUTIL.ReturnLeetMountStat2(1, 80, mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
		//			tstr = mMESSAGE.Return(1048);
		//			sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue4);
		//			tDisplaySort[tMsgSort++] = 27;
		//			tLineBreak = 1;
		//			break;
		//		default:
		//			break;
		//		}
		//		if (tValue2 == 30)
		//		{
		//			tValue4 = mUTIL.ReturnLeetMountStat2(2, 30, mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
		//			tstr = mMESSAGE.Return(1123);
		//			sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue4);
		//			tDisplaySort[tMsgSort++] = 27;
		//			tLineBreak = 1;
		//		}
		//		else if (tValue2 == 130)
		//		{
		//			tValue4 = mUTIL.ReturnLeetMountStat2(2, 130, mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
		//			tstr = mMESSAGE.Return(1045);
		//			sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue4);
		//			tDisplaySort[tMsgSort++] = 27;
		//			tLineBreak = 1;
		//		}
		//		switch (tValue3)
		//		{
		//		case 10:
		//			tValue4 = mUTIL.ReturnLeetMountStat2(3, 10, mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
		//			tstr = mMESSAGE.Return(1098);
		//			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue4);
		//			tDisplaySort[tMsgSort++] = 3;
		//			tLineBreak = 1;
		//			break;
		//		case 20:
		//			tValue4 = mUTIL.ReturnLeetMountStat2(3, 20, mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
		//			tstr = mMESSAGE.Return(2506);
		//			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue4);
		//			tDisplaySort[tMsgSort++] = 3;
		//			tLineBreak = 1;
		//			break;
		//		case 30:
		//			tValue4 = mUTIL.ReturnLeetMountStat2(3, 30, mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
		//			tstr = mMESSAGE.Return(1104);
		//			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue4);
		//			tDisplaySort[tMsgSort++] = 3;
		//			tLineBreak = 1;
		//			break;
		//		case 40:
		//			tValue4 = mUTIL.ReturnLeetMountStat2(3, 40, mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
		//			tstr = mMESSAGE.Return(1123);
		//			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue4);
		//			tDisplaySort[tMsgSort++] = 3;
		//			tLineBreak = 1;
		//			break;
		//		case 50:
		//			tValue4 = mUTIL.ReturnLeetMountStat2(3, 50, mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
		//			tstr = mMESSAGE.Return(1126);
		//			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue4);
		//			tDisplaySort[tMsgSort++] = 3;
		//			tLineBreak = 1;
		//			break;
		//		case 60:
		//			tValue4 = mUTIL.ReturnLeetMountStat2(3, 60, mMYINFO.mAvatarInfo.aAnimalExpActivity[i]);
		//			tstr = mMESSAGE.Return(1105);
		//			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue4);
		//			tDisplaySort[tMsgSort++] = 3;
		//			tLineBreak = 1;
		//			break;
		//		default:
		//			continue;
		//		}
		//	}
		//}
		//break;

	case 31:
	case 32:
		if (tITEM_INFO->iCapeInfo[2] > 0)
		{
			tValue = tITEM_INFO->iCapeInfo[2];
			tstr = mMESSAGE.Return(1059);
			sprintf(tMessage[tMsgSort], "%s : +%d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
		}
		break;

	default:
		break;
	}
	if (tLineBreak)
	{
		strcpy(tMessage[tMsgSort++], "");
	}


	// Refine Info
	if ((tITEM_INFO->iType == 3 || tITEM_INFO->iType == 4 || tITEM_INFO->iType == 5 || tITEM_INFO->iType == 6 || tITEM_INFO->iType == 7 || tITEM_INFO->iType == 8) && tRFValue > 0)
	{
		switch (tITEM_INFO->iSort)
		{
		case 7:
			tValue = tRFValue;
			tstr = mMESSAGE.Return(1933);
			sprintf(tMessage[tMsgSort], tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tValue = tRFValue;
			tstr = mMESSAGE.Return(1795);
			sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tValue = 5 * v594 + 5 * tRFValue;
			tstr = mMESSAGE.Return(1037);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
			break;

		case 8:
		case 29:
			tValue = tRFValue;
			tstr = mMESSAGE.Return(1933);
			sprintf(tMessage[tMsgSort], tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			fValue = tRFValue * 1.6;
			tstr = mMESSAGE.Return(1796);
			sprintf(tMessage[tMsgSort], "%s : %.1f%%", tstr, fValue);
			tDisplaySort[tMsgSort++] = 3;
			tValue = 5 * v594 + 5 * tRFValue;
			tstr = mMESSAGE.Return(1038);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
			break;

		case 9:
			tValue = tRFValue;
			tstr = mMESSAGE.Return(1933);
			sprintf(tMessage[tMsgSort], tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tValue = 400 * tRFValue;
			tstr = mMESSAGE.Return(1123);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tValue = 5 * v594 + 5 * tRFValue;
			tstr = mMESSAGE.Return(1040);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
			break;

		case 10:
			tValue = tRFValue;
			tstr = mMESSAGE.Return(1933);
			sprintf(tMessage[tMsgSort], tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			fValue = tRFValue * 0.5;
			tstr = mMESSAGE.Return(1103);
			sprintf(tMessage[tMsgSort], "%s : %.1f%%", tstr, fValue);
			tDisplaySort[tMsgSort++] = 3;
			tValue = 5 * v594 + 5 * tRFValue;
			tstr = mMESSAGE.Return(1038);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
			break;

		case 11:
			tValue = tRFValue;
			tstr = mMESSAGE.Return(1933);
			sprintf(tMessage[tMsgSort], tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			fValue = tRFValue * 0.1;
			tstr = mMESSAGE.Return(1794);
			sprintf(tMessage[tMsgSort], "%s : %.1f%%", tstr, fValue);
			tDisplaySort[tMsgSort++] = 3;
			tValue = 5 * v594 + 5 * tRFValue;
			tstr = mMESSAGE.Return(1039);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
			break;

		case 12:
			tValue = tRFValue;
			tstr = mMESSAGE.Return(1933);
			sprintf(tMessage[tMsgSort], tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			fValue = tRFValue * 0.5;
			tstr = mMESSAGE.Return(1102);
			sprintf(tMessage[tMsgSort], "%s : %.1f%%", tstr, fValue);
			tDisplaySort[tMsgSort++] = 3;
			tValue = 5 * v594 + 5 * tRFValue;
			tstr = mMESSAGE.Return(1038);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
			break;

		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			tValue = tRFValue;
			tstr = mMESSAGE.Return(1933);
			sprintf(tMessage[tMsgSort], tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tValue = tRFValue;
			tstr = mMESSAGE.Return(1107);
			sprintf(tMessage[tMsgSort], "%s : %d%%", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tValue = 5 * v594 + 5 * tRFValue;
			tstr = mMESSAGE.Return(1040);
			sprintf(tMessage[tMsgSort], "%s : %d", tstr, tValue);
			tDisplaySort[tMsgSort++] = 3;
			tLineBreak = 1;
			break;

		default:
			break;
		}
		if (tLineBreak)
		{
			strcpy(tMessage[tMsgSort++], "");
		}
	}
	// Draw Socket Name
	switch (tItemSort)
	{
	case 2:
		if (tISValue > 0)
		{
			tMessageNum = INVENUI::GetSocketMessage2(1, tISValue, &tValue, &tValue2);
			tstr = mMESSAGE.Return(tMessageNum);
			sprintf(Buffer, tstr);
			strcpy(tMessage[tMsgSort], Buffer);
			tDisplaySort[tMsgSort++] = 3;
		}
		if (tIUValue > 0)
		{
			tMessageNum = INVENUI::GetSocketMessage2(1, tIUValue, &tValue, &tValue2);
			tstr = mMESSAGE.Return(tMessageNum);
			sprintf(Buffer, tstr);
			strcpy(tMessage[tMsgSort], Buffer);
			tDisplaySort[tMsgSort++] = 3;
		}
		if (tRFValue > 0)
		{
			tMessageNum = INVENUI::GetSocketMessage2(1, tRFValue, &tValue, &tValue2);
			tstr = mMESSAGE.Return(tMessageNum);
			sprintf(Buffer, tstr);
			strcpy(tMessage[tMsgSort], Buffer);
			tDisplaySort[tMsgSort++] = 3;
		}
		tValue4 = mUTIL.Return4thValue(tImprove);
		if (tValue4 > 0)
		{
			tMessageNum = INVENUI::GetSocketMessage2(2, tValue4, &tValue, &tValue2);
			tstr = mMESSAGE.Return(tMessageNum);
			sprintf(Buffer, tstr, tValue, tValue2);
			strcpy(tMessage[tMsgSort], Buffer);
			tDisplaySort[tMsgSort++] = 3;
		}
		break;

	case 1:
		if (tIUValue > 0)
		{
			tMessageNum = mUTIL.ReturnLegendCombineStatValue(tIUValue, &tValue2, &tValue3) + 2681;
			if (tValue > 0)
			{
				tstr = mMESSAGE.Return(tMessageNum);
				sprintf(tMessage[tMsgSort], tstr, tValue2);
				tDisplaySort[tMsgSort++] = 3;
			}
		}
		break;

	case 4:
		tstr = mMESSAGE.Return(2681);
		sprintf(tMessage[tMsgSort], tstr, 5 - tIUValue);
		tDisplaySort[tMsgSort++] = 3;
		break;

	case 5:
	case 6:
		if (tISValue > 0)
		{
			tValue = tISValue % 10;
			tMessageNum = INVENUI::GetSocketMessage3(1, tISValue);
			tstr = mMESSAGE.Return(tMessageNum);
			sprintf(Buffer, "%s : %d%%", tstr, tValue);
			strcpy(tMessage[tMsgSort], Buffer);
			tDisplaySort[tMsgSort++] = 3;
		}
		if (tIUValue > 0)
		{
			tValue = tIUValue % 10;
			tMessageNum = INVENUI::GetSocketMessage3(2, tIUValue);
			tstr = mMESSAGE.Return(tMessageNum);
			sprintf(Buffer, "%s : + %d", tstr, tValue);
			strcpy(tMessage[tMsgSort], Buffer);
			tDisplaySort[tMsgSort++] = 3;
		}
		if (tRFValue > 0)
		{
			tValue = tRFValue % 10;
			tMessageNum = INVENUI::GetSocketMessage3(3, tRFValue);
			tstr = mMESSAGE.Return(tMessageNum);
			sprintf(Buffer, "%s : %d%%", tstr, tValue);
			strcpy(tMessage[tMsgSort], Buffer);
			tDisplaySort[tMsgSort++] = 3;
		}
		tValue = mUTIL.Return4thValue(tImprove);
		if (tValue > 0)
		{
			tMessageNum = INVENUI::GetSocketMessage3(4, tValue);
			tstr = mMESSAGE.Return(tMessageNum);
			sprintf(Buffer, "%s : %d%%", tstr, 2 * (tValue % 10));
			strcpy(tMessage[tMsgSort], Buffer);
			tDisplaySort[tMsgSort++] = 3;
		}
		break;
	}
	v586 = 0;
	tGems[0] = 0;
	tGems[1] = 0;
	tGems[2] = 0;
	tGems[3] = 0;
	tGems[4] = 0;
	// Draw Socket Details
	if ((tITEM_INFO->iType == 3 || tITEM_INFO->iType == 4 || tITEM_INFO->iType == 5 || tITEM_INFO->iType == 6 || tITEM_INFO->iType == 7 || tITEM_INFO->iType == 8) && (tITEM_INFO->iSort >= 7 && tITEM_INFO->iSort <= 21 || tITEM_INFO->iSort == 29))
	{
		tSocketNum = mUTIL.GetSocketAbility(tSocket1, tSocket2, tSocket3, &tGems[0], &tGems[1], &tGems[2], &tGems[3], &tGems[4]);
		v586 = tMsgSort;
		strcpy(tMessage[tMsgSort++], "");
		strcpy(tMessage[tMsgSort++], "");
		strcpy(tMessage[tMsgSort++], "");
		for (j = 0; j < 5; ++j)
		{
			if (tGems[j] > 0)
			{
				tGemMode = tGems[j] / 1000;
				tGemLevel = tGems[j] % 1000;
				if (tGemMode == 1)
				{
					tMessageNum = INVENUI::GetSocketMessage1(1, tGemLevel, &sAdd, &sAdd2);
					tstr = mMESSAGE.Return(tMessageNum);
					strcpy(tMessage[tMsgSort], tstr);
					tDisplaySort[tMsgSort++] = 3;
				}
				else if (tGemMode <= 1 || tGemMode >= 30)
				{
					if (tGemMode < 30 || tGemMode > 38)
					{
						if (tGemMode < 39 || tGemMode > 42)
						{
							if (tGemMode >= 43 && tGemMode <= 46)
							{
								tMessageNum = INVENUI::GetSocketMessage1(tGemMode, tGemLevel, &sAdd, &sAdd2);
								fValue = sAdd / 10.0;
								tstr = mMESSAGE.Return(tMessageNum);
								sprintf(Buffer, tstr, fValue);
								strcpy(tMessage[tMsgSort], Buffer);
								tDisplaySort[tMsgSort++] = 3;
							}
						}
						else
						{
							tMessageNum = INVENUI::GetSocketMessage1(tGemMode, tGemLevel, &sAdd, &sAdd2);
							fValue = sAdd / 10.0;
							tstr = mMESSAGE.Return(tMessageNum);
							sprintf(Buffer, tstr, fValue);
							strcpy(tMessage[tMsgSort], Buffer);
							tDisplaySort[tMsgSort++] = 3;
						}
					}
					else
					{
						tMessageNum = INVENUI::GetSocketMessage1(tGemMode, tGemLevel, &sAdd, &sAdd2);
						tstr = mMESSAGE.Return(tMessageNum);
						sprintf(Buffer, tstr, sAdd);
						strcpy(tMessage[tMsgSort], Buffer);
						tDisplaySort[tMsgSort++] = 3;
					}
				}
				else
				{
					tMessageNum = INVENUI::GetSocketMessage1(tGemMode, tGemLevel, &sAdd, &sAdd2);
					tstr = mMESSAGE.Return(tMessageNum);
					sprintf(Buffer, tstr, sAdd);
					strcpy(tMessage[tMsgSort], Buffer);
					tDisplaySort[tMsgSort++] = 3;
				}
			}
		}
		strcpy(tMessage[tMsgSort++], "");
	}
	// Draw Engraving Status
	if (tItemSort == 8)
	{
		if (mUTIL.DrawEngraveStatInfo(tITEM_INFO->iEquipInfo[1], Buffer, Buffer2, &tMessageNum, &tFontColor, 8, tImprove) == 1)
		{
			tstr = mMESSAGE.Return(tMessageNum);
			sprintf(tMessage[tMsgSort], "%s%s", Buffer, tstr);
			tDisplaySort[tMsgSort++] = tFontColor;
			strcpy(tMessage[tMsgSort], Buffer2);
			tDisplaySort[tMsgSort++] = 1;
			strcpy(tMessage[tMsgSort++], "");
		}
	}
	else if ((tItemSort == 1 || tItemSort == 4) && (tITEM_INFO->iSort == 7 || tITEM_INFO->iSort == 9 || tITEM_INFO->iSort == 10 || tITEM_INFO->iSort == 11 || tITEM_INFO->iSort == 12) && mUTIL.DrawEngraveStatInfo(tITEM_INFO->iEquipInfo[1], Buffer, Buffer2, &tMessageNum, &tFontColor, tItemSort, tImprove) == 1)
	{
		tstr = mMESSAGE.Return(tMessageNum);
		sprintf(tMessage[tMsgSort], "%s%s", Buffer, tstr);
		tDisplaySort[tMsgSort++] = tFontColor;
		strcpy(tMessage[tMsgSort], Buffer2);
		tDisplaySort[tMsgSort++] = 1;
		strcpy(tMessage[tMsgSort++], "");
	}

	// Buy and Sell Price Info
	if (tSort2 != 1)
	{
		if (mMYINFO.mPresentZoneNumber == 291 && tSort == 2)
		{
			mUTIL.ChangeMoneyToString((tITEM_INFO->iBuyCost * 0.90f), Buffer, &tDisplaySort[tMsgSort]);
		}
		else
		{
			mUTIL.ChangeMoneyToString(tITEM_INFO->iBuyCost, Buffer, &tDisplaySort[tMsgSort]);
		}
		if (tITEM_INFO->iBuyCPCost >= 1)
		{
			tValue = tITEM_INFO->iBuyCPCost;
			tstr = mMESSAGE.Return(1415);
			tstr2 = mMESSAGE.Return(589);
			tstr3 = mMESSAGE.Return(1060);
			sprintf(tMessage[tMsgSort], "%s : %s%s[%s(%d)]", tstr3, Buffer, tstr2, tstr, tValue);
		}
		else
		{
			tstr = mMESSAGE.Return(589);
			tstr2 = mMESSAGE.Return(1060);
			sprintf(tMessage[tMsgSort], "%s : %s%s", tstr2, Buffer, tstr);
		}
		mUTIL.ChangeMoneyToString(tITEM_INFO->iSellCost, Buffer, &tDisplaySort[++tMsgSort]);
		tstr = mMESSAGE.Return(589);
		tstr2 = mMESSAGE.Return(1061);
		sprintf(tMessage[tMsgSort++], "%s : %s%s", tstr2, Buffer, tstr);
	}

	// Draw Item Index
	if (mMYINFO.uUserSort > 0)
	{
		sprintf(tMessage[tMsgSort], "Item ID: %d", tITEM_INFO->iIndex);
		tDisplaySort[tMsgSort++] = 2;
		sprintf(tMessage[tMsgSort], "Item Sort: %d", tITEM_INFO->iSort);
		tDisplaySort[tMsgSort++] = 2;
		sprintf(tMessage[tMsgSort], "Item Type: %d", tITEM_INFO->iType);
		tDisplaySort[tMsgSort++] = 2;
	}

	// Begin Display Item Background
	tFinalLength = 0;
	for (i = 0; i < tMsgSort; ++i)
	{
		tStrLen = strlen(tMessage[i]);
		if (tStrLen > tFinalLength)
		{
			tFinalLength = strlen(tMessage[i]);
		}
	}
	if ((tITEM_INFO->iType == 3 || tITEM_INFO->iType == 4 || tITEM_INFO->iType == 5 || tITEM_INFO->iType == 6) && (tITEM_INFO->iSort >= 7 && tITEM_INFO->iSort <= 21 || tITEM_INFO->iSort == 29) && tFinalLength < 33)
	{
		tFinalLength = 33;
	}
	tDisplayX = uX - 13 * ((tFinalLength - 1) / 2 + 1);
	tDisplayY = uY - 15 * (tMsgSort + 2) / 2;
	for (i = 0; i < tMsgSort + 2; ++i)
	{
		for (k = 0; k < (tFinalLength - 1) / 2 + 1; ++k)
		{
			GIMAGE2D::Display(&mGDATA.mUI_MAIN[2424], tDisplayX + 13 * k, tDisplayY + 15 * i);
		}
	}
	// Draw Socket Info and Text Info
	tMessageX = tDisplayX + 13 * ((tFinalLength - 1) / 2 + 1) / 2;
	tMessageY = tDisplayY + 16;
	for (i = 0; i < tMsgSort; ++i)
	{
		mUTIL.DrawFont2D(tMessage[i], tMessageX - mUTIL.GetStringLength(tMessage[i]) / 2, tMessageY, tDisplaySort[i]);


		if ((tITEM_INFO->iType == 3 || tITEM_INFO->iType == 4 || tITEM_INFO->iType == 5 || tITEM_INFO->iType == 6 || tITEM_INFO->iType == 7 || tITEM_INFO->iType == 8) && (tITEM_INFO->iSort >= 7 && tITEM_INFO->iSort <= 21 || tITEM_INFO->iSort == 29) && v586 == i)
		{
			for (l = 0; l < 5; ++l)
			{
				if (tGems[l] > 0)
				{
					int v528 = mUTIL.GetSocketImage(tGems[l] / 1000, tGems[l] % 1000);
					if (v528 > 0)
					{
						GIMAGE2D::Display(&mGDATA.mUI_MAIN[v528], tMessageX + 40 * l - 93, tMessageY);
					}
				}
				else if (tSocketNum <= l)
				{
					GIMAGE2D::Display(&mGDATA.mUI_MAIN[2 * l + 3317], tMessageX + 40 * l - 93, tMessageY);
				}
				else
				{
					GIMAGE2D::Display(&mGDATA.mUI_MAIN[2 * l + 3318], tMessageX + 40 * l - 93, tMessageY);
				}
			}
		}
		tMessageY += 15;
		// Draw Celestial Star Socket
		//if ( tItemSort == 11 || tItemSort == 12)
		//{
		//	if ( v586 == i )
		//	{
		//		//sub_558FD0(tSort2, v747, v636);
		//		for (k = 0; k < 4; ++k)
		//		{
		//			if (v636[k] <= 0)
		//				GIMAGE2D::Display(&mGDATA.mUI_MAIN[2 * l + 3318], v596 + 40 * k - 73, tY + 15);
		//			else
		//				GIMAGE2D::Display(&mGDATA.mUI_MAIN[v636[k]], v596 + 40 * k - 73, tY + 15);
		//				//GIMAGE2D::Display(&dword_90ABF0[37 * v636[k]], v596 + 40 * k - 73, tY + 15);
		//		}
		//		tY += 15;
		//	}
		//}
		//else if (tItemSort == 13)
		//{
		//	if (v706 == i)
		//	{
		//		if (tSort2 / 1000 <= 0)
		//			GIMAGE2D::Display(dword_982A28, v725 - 73, v703 + 15);
		//		else
		//			GIMAGE2D::Display(dword_9ACB18, v725 - 73, v703 + 15);
		//		if (tSort2 % 1000 <= 0)
		//			GIMAGE2D::Display(dword_982B50, v725 - 33, v703 + 15);
		//		else
		//			GIMAGE2D::Display(dword_9ACBAC, v725 - 33, v703 + 15);
		//		v703 += 15;
		//	}
		//}
		//else if (tItemSort == 14 && v706 == i)
		//{
		//	if (tSort2 / 1000 <= 0)
		//		GIMAGE2D::Display(dword_982A28, v725 - 73, v703 + 15);
		//	else
		//		GIMAGE2D::Display(dword_9ACB18, v725 - 73, v703 + 15);
		//	if (tSort2 % 1000 <= 0)
		//		GIMAGE2D::Display(dword_982B50, v725 - 33, v703 + 15);
		//	else
		//		GIMAGE2D::Display(dword_9ACBAC, v725 - 33, v703 + 15);
		//	v703 += 15;
		//}
	}
}

int INVENUI::GetEquipIndex1(int uX, int uY, int tInvalidIndex)
{
	int i = 0;

	if (!mActive)
		return -1;
	if (mInvenType != 1)
		return -1;
	if (mInvenSort == 3)
		return -1;
	if (mInvenSort == 1)
	{
		for (i = 0; i < 9 && (i == tInvalidIndex || uX < mEquipCoord[i][0] || uX > mEquipCoord[i][2] || uY < mEquipCoord[i][1] || uY > mEquipCoord[i][3]); ++i)
		{
			;
		}
		if (i == 9)
		{
			return -1;
		}
	}
	else if (mInvenSort == 2)
	{
		for (i = 9; i < 13 && (i == tInvalidIndex || uX < mEquipCoord[i][0] || uX > mEquipCoord[i][2] || uY < mEquipCoord[i][1] || uY > mEquipCoord[i][3]); ++i)
		{
			;
		}
		if (i == 13)
		{
			return -1;
		}
	}
	else if (mInvenSort == 4)
	{
		for (i = 13; i < 21 && (i == tInvalidIndex || uX < mEquipCoord[i][0] || uX > mEquipCoord[i][2] || uY < mEquipCoord[i][1] || uY > mEquipCoord[i][3]); ++i)
		{
			;
		}
		if (i == 21)
		{
			return -1;
		}
	}
	if (mInvenSort == 1 || mInvenSort == 2)
	{
		if (mMYINFO.mAvatarInfo.aEquip[i][0] <= 0)
		{
			return -1;
		}
		else
		{
			return i;
		}
	}
	else if (mInvenSort == 4)
	{
		return i;
	}
}
int INVENUI::GetEquipIndex2(int uX, int uY, int tInvalidIndex)
{
	int i = 0;

	if (!mActive)
		return -1;
	if (mInvenType != 1)
		return -1;
	if (mInvenSort == 3)
		return -1;
	if (mInvenSort == 1)
	{
		for (i = 0; i < 9 && (i == tInvalidIndex || uX < mEquipCoord[i][0] || uX > mEquipCoord[i][2] || uY < mEquipCoord[i][1] || uY > mEquipCoord[i][3]); ++i)
		{
			;
		}
		if (i == 9)
		{
			return -1;
		}
	}
	else if (mInvenSort == 2)
	{
		for (i = 9; i < 13 && (i == tInvalidIndex || uX < mEquipCoord[i][0] || uX > mEquipCoord[i][2] || uY < mEquipCoord[i][1] || uY > mEquipCoord[i][3]); ++i)
		{
			;
		}
		if (i == 13)
		{
			return -1;
		}
	}
	else if (mInvenSort == 4)
	{
		for (i = 13; i < 21 && (i == tInvalidIndex || uX < mEquipCoord[i][0] || uX > mEquipCoord[i][2] || uY < mEquipCoord[i][1] || uY > mEquipCoord[i][3]); ++i)
		{
			;
		}
		if (i == 21)
		{
			return -1;
		}
	}
	if (mMYINFO.mAvatarInfo.aEquip[i][0] >= 1)
	{
		return -1;
	}
	else
	{
		return i;
	}
}
int INVENUI::GetTradeIndex1(int uX, int uY, int tInvalidIndex)
{
	int i;

	if (!mActive)
	{
		return -1;
	}
	if (mInvenType != 1)
	{
		return -1;
	}
	if (mInvenSort != 3)
	{
		return -1;
	}
	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	for (i = 0; i < 8; i++)
	{
		if (i == tInvalidIndex || uX < mX + 54 * (i % 4) + 31 || uX > mX + 54 * (i % 4) + 81 || uY < mY + 55 * (i / 4) + 60 || uY > mY + 55 * (i / 4) + 110)
		{
			continue;
		}
		break;
	}
	if (i == 8)
	{
		return -1;
	}
	if (mMYINFO.mAvatarInfo.aTrade[i][0] <= 0)
	{
		return -1;
	}
	return i;
}
int INVENUI::GetTradeIndex2(int uX, int uY, int tInvalidIndex)
{
	int i;

	if (!mActive)
	{
		return -1;
	}
	if (mInvenType != 1)
	{
		return -1;
	}
	if (mInvenSort != 3)
	{
		return -1;
	}
	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	for (i = 0; i < 8; i++)
	{
		if (i == tInvalidIndex || uX < mX + 54 * (i % 4) + 31 || uX > mX + 54 * (i % 4) + 81 || uY < mY + 55 * (i / 4) + 60 || uY > mY + 55 * (i / 4) + 110)
		{
			continue;
		}
		break;
	}
	if (i == 8)
	{
		return -1;
	}
	if (mMYINFO.mAvatarInfo.aTrade[i][0] >= 1)
	{
		return -1;
	}
	return i;
}
int INVENUI::PutTrade1(int uX, int uY, int tItemIndex, int tQuantity, int tInvalidIndex)
{
	int v8;
	ITEM_INFO* v9;

	v8 = INVENUI::GetTradeIndex1(uX, uY, tInvalidIndex);
	if (v8 == -1)
	{
		return INVENUI::GetTradeIndex2(uX, uY, tInvalidIndex);
	}
	v9 = mITEM.Search(tItemIndex);
	if (!v9)
	{
		return -1;
	}
	if (v9->iSort != 2)
	{
		return -1;
	}
	if (mMYINFO.mAvatarInfo.aTrade[v8][0] == tItemIndex && tQuantity + mMYINFO.mAvatarInfo.aTrade[v8][1] <= MAX_ITEM_DUPLICATION_NUM)
	{
		return v8;
	}
	return -1;
}
int INVENUI::PutTradeMoney(int uX, int uY, int tItemIndex)
{
	if (!mActive)
	{
		return 0;
	}
	if (mInvenType != 1)
	{
		return -1;
	}
	if (mInvenSort != 3)
	{
		return 0;
	}
	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	if (uX <= mX + 30 || uX >= mX + 245 || uY <= mY + 42 || uY >= mY + 166)
	{
		return 0;
	}
	else
	{
		return ~mUTIL.CheckOverMaximum(mMYINFO.mAvatarInfo.aTradeMoney, tItemIndex);
	}
}
int INVENUI::PutChangeMoneyToBigMoney(int uX, int uY, int tItemIndex)
{
	if (!mActive)
	{
		return 0;
	}
	if (mInvenType != 1)
	{
		return -1;
	}
	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	if (uX <= mX + 65 || uX >= mX + 120 || uY <= mY + 435 || uY >= mY + 451)
	{
		return 0;
	}
	if (tItemIndex == 1000000000)
	{
		if (mUTIL.CheckOverBigMoneyMaximum(mMYINFO.mAvatarInfo.aMoney2, 1))
		{
			mBASICUI.Insert1(mMESSAGE.Return(1918), mFONTCOLOR.mData[44]);
			return 0;
		}
		return 1;
	}
	else
	{
		mBASICUI.Insert1(mMESSAGE.Return(1917), mFONTCOLOR.mData[44]);
		return 0;
	}
}

int INVENUI::PutChangeBigMoneyToMoney(int uX, int uY, int tItemIndex)
{
	if (!mActive)
	{
		return 0;
	}
	if (mInvenType != 1)
	{
		return -1;
	}
	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	if (uX <= mX + 123 || uX >= mX + 241 || uY <= mY + 435 || uY >= mY + 451)
	{
		return 0;
	}
	if (tItemIndex == 1)
	{
		if (mUTIL.CheckOverMaximum(mMYINFO.mAvatarInfo.aMoney, 1000000000))
		{
			mBASICUI.Insert1(mMESSAGE.Return(101), mFONTCOLOR.mData[44]);
			return 0;
		}
		return 1;
	}
	else
	{
		mBASICUI.Insert1(mMESSAGE.Return(1917), mFONTCOLOR.mData[44]);
		return 0;
	}
}
int INVENUI::PutBigTradeMoney(int uX, int uY, int tItemIndex)
{
	char* v5;
	int v6;

	if (!mActive)
	{
		return 0;
	}
	if (mInvenType != 1)
	{
		return -1;
	}
	if (mInvenSort != 3)
	{
		return 0;
	}
	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	if (uX <= mX + 30 || uX >= mX + 245 || uY <= mY + 42 || uY >= mY + 166)
	{
		return 0;
	}
	if (mUTIL.CheckOverBigMoneyMaximum(mMYINFO.mAvatarInfo.aTradeMoney2, tItemIndex))
	{
		mBASICUI.Insert1(mMESSAGE.Return(1918), mFONTCOLOR.mData[44]);
		return 0;
	}
	return 1;
}
//STACK SISTEM
void INVENUI::GetInventory1(int uX, int uY, int a5, int a6, int* tPage, int* tIndex, int* a9, int* a10, int tInvalid)
{
	int v11;
	int v12;
	ITEM_INFO* v13;
	int i;
	int k;
	int j;

	if (mActive)
	{
		if (mInvenType == 1)
		{
			mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
			for (i = 0; i < 8; ++i)
			{
				for (j = 0; j < 8 && (uX < mX + 26 * i + 34 || uX > mX + 26 * i + 59 || uY < mY + 26 * j + 193 || uY > mY + 26 * j + 218); ++j)
				{
					;
				}
				if (j < 8)
				{
					break;
				}
			}
			if (i == 8)
			{
				*tPage = -1;
			}
			else
			{
				*a9 = i;
				*a10 = j;
				for (k = 0; k < 64; ++k)
				{
					if (mMYINFO.mAvatarInfo.aInventory[mInvenPage][k][0] >= 1 && k != tInvalid)
					{
						v13 = mITEM.Search(mMYINFO.mAvatarInfo.aInventory[mInvenPage][k][0]);
						if (v13)
						{
							if (v13->iSort == 2 || v13->iSort == 7 || v13->iSort == 11)
							{
								v11 = 1;
								v12 = 1;
							}
							else
							{
								v11 = 2;
								v12 = 2;
							}
							if (*a9 >= mMYINFO.mAvatarInfo.aInventory[mInvenPage][k][1] && *a9 < v11 + mMYINFO.mAvatarInfo.aInventory[mInvenPage][k][1]
								&& *a10 >= mMYINFO.mAvatarInfo.aInventory[mInvenPage][k][2] && *a10 < v12 + mMYINFO.mAvatarInfo.aInventory[mInvenPage][k][2])
							{
								*tPage = mInvenPage;
								*tIndex = k;
								return;
							}
						}
					}
				}
				*tPage = -1;
			}
		}
		else
		{
			*tPage = -1;
		}
	}
	else
	{
		*tPage = -1;
	}
}
//STACK SISTEM
void INVENUI::GetInventory2(int uX, int uY, int tItemIndex, int tItemX, int* tPage, int* tIndex, int* tXPost, int* tYPost, int tInvalidIndex)
{
	int v11;
	int v12;
	int v13;
	int v14;
	int v15[8][8];
	ITEM_INFO* v16;
	int v17;
	int i;
	int j;
	int v20;
	int k;

	v17 = 8;
	v20 = 8;
	if (!mActive)
	{
		*tPage = -1;
		return;
	}
	if (mInvenType != 1)
	{
		*tPage = -1;
		return;
	}
	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	v16 = mITEM.Search(tItemIndex);
	if (!v16)
	{
		*tPage = -1;
		return;
	}
	if (v16->iSort == 2 || v16->iSort == 7 || v16->iSort == 11)
	{
		for (i = 0; i < 8; ++i)
		{
			for (j = 0; j < 8 && (uX < mX + 26 * i + 34 || uX > mX + 26 * i + 59 || uY < mY + 26 * j + 193 || uY > mY + 26 * j + 218); ++j)
			{
				;
			}
			if (j < 8)
			{
				break;
			}
		}
		if (i == 8)
		{
			*tPage = -1;
			return;
		}
	}
	else
	{
		for (i = 0; i < 7; ++i)
		{
			for (j = 0; j < 7 && (uX - 10 < mX + 26 * i + 34 || uX - 10 > mX + 26 * i + 84 || uY - 10 < mY + 26 * j + 193 || uY - 10 > mY + 26 * j + 243 || uX + 10 < mX + 26 * i + 34 || uX + 10 > mX + 26 * i + 84 || uY + 10 < mY + 26 * j + 193 || uY + 10 > mY + 26 * j + 243); ++j)
			{
				;
			}
			if (j < 7)
			{
				break;
			}
		}
		if (i == 7)
		{
			*tPage = -1;
			return;
		}
	}
	*tXPost = i;
	*tYPost = j;
	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
		{
			v15[i][j] = 0;
		}
	}
	for (i = 0; i < 64; ++i)
	{
		if (mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][0] >= 1)
		{
			v16 = mITEM.Search(mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][0]);
			if (v16)
			{
				if (v16->iSort == 2 || v16->iSort == 7 || v16->iSort == 11)
				{
					v11 = 1;
					v13 = 1;
					if (mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][1] < 0 || mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][1] > 7 || mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][2] < 0 || mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][2] > 7)
					{
						*tPage = -1;
						return;
					}
				}
				else
				{
					v11 = 2;
					v13 = 2;
					if (mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][1] < 0 || mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][1] > 6 || mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][2] < 0 || mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][2] > 6)
					{
						*tPage = -1;
						return;
					}
				}
				for (j = mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][1]; j < v11 + mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][1]; ++j)
				{
					for (k = mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][2]; k < v13 + mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][2]; ++k)
					{
						v15[j][k] = 1;
					}
				}
			}
		}
	}
	v16 = mITEM.Search(tItemIndex);
	if (!v16)
	{
		*tPage = -1;
		return;
	}
	if (v16->iSort == 2 || v16->iSort == 7 || v16->iSort == 11)
	{
		v12 = 1;
		v14 = 1;
		if (*tXPost < 0 || *tXPost > 7 || *tYPost < 0 || *tYPost > 7)
		{
			*tPage = -1;
			return;
		}
	}
	else
	{
		v12 = 2;
		v14 = 2;
		if (*tXPost < 0 || *tXPost > 6 || *tYPost < 0 || *tYPost > 6)
		{
			*tPage = -1;
			return;
		}
	}
	for (i = *tXPost; i < v12 + *tXPost; ++i)
	{
		for (j = *tYPost; j < v14 + *tYPost; ++j)
		{
			if (v15[i][j])
			{
				*tPage = -1;
				return;
			}
		}
	}
	for (i = 0; i < 64 && (mMYINFO.mAvatarInfo.aInventory[mInvenPage][i][0] > 0 || i == tInvalidIndex); ++i)
	{
		;
	}
	if (i == 64)
	{
		*tPage = -1;
	}
	else
	{
		*tPage = mInvenPage;
		*tIndex = i;
	}
}
//STACK SISTEM
void INVENUI::PutInventory1(int uX, int uY, int tItemIndex, int tQuantity, int* tPage, int* tIndex, int* tX, int* tY, int a10)
{
	int v11;
	int v12;
	int v13;
	int v14;
	int v15;
	int v16;
	int v17;
	int v18;
	int l;
	int m;
	int v21[8][8];
	ITEM_INFO* v22;
	ITEM_INFO* v23;
	int v24;
	int i;
	int j;
	int v27;
	int k;

	v24 = 8;
	v27 = 8;
	v23 = mITEM.Search(tItemIndex);
	if (v23)
	{
		if (uX <= -1)
		{
			if (v23->iSort == 2)
			{
				for (i = 0; i < 64; ++i)
				{
					if (mMYINFO.mAvatarInfo.aInventory[0][i][0] == tItemIndex && tQuantity + mMYINFO.mAvatarInfo.aInventory[0][i][3] <= MAX_ITEM_DUPLICATION_NUM)
					{
						*tPage = 0;
						*tIndex = i;
						*tX = mMYINFO.mAvatarInfo.aInventory[0][i][1];
						*tY = mMYINFO.mAvatarInfo.aInventory[0][i][2];
						return;
					}
				}
				if (mMYINFO.mAvatarInfo.aExpandInventoryDate > 0)
				{
					for (i = 0; i < 64; ++i)
					{
						if (mMYINFO.mAvatarInfo.aInventory[1][i][0] == tItemIndex && tQuantity + mMYINFO.mAvatarInfo.aInventory[1][i][3] <= MAX_ITEM_DUPLICATION_NUM)
						{
							*tPage = 1;
							*tIndex = i;
							*tX = mMYINFO.mAvatarInfo.aInventory[1][i][1];
							*tY = mMYINFO.mAvatarInfo.aInventory[1][i][2];
							return;
						}
					}
				}
			}
			for (i = 0; i < 64 && mMYINFO.mAvatarInfo.aInventory[0][i][0] >= 1; ++i)
			{
				;
			}
			if (i < 64)
			{
				*tPage = 0;
				*tIndex = i;
				for (i = 0; i < 8; ++i)
				{
					for (j = 0; j < 8; ++j)
					{
						v21[i][j] = 0;
					}
				}
				for (i = 0; i < 64; ++i)
				{
					if (mMYINFO.mAvatarInfo.aInventory[*tPage][i][0] >= 1)
					{
						v22 = mITEM.Search(mMYINFO.mAvatarInfo.aInventory[*tPage][i][0]);
						if (v22)
						{
							if (v22->iSort == 2 || v22->iSort == 7 || v22->iSort == 11)
							{
								v11 = 1;
								v15 = 1;
								if (mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] > 7 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] > 7)
								{
									*tPage = -1;
									return;
								}
							}
							else
							{
								v11 = 2;
								v15 = 2;
								if (mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] > 6 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] > 6)
								{
									*tPage = -1;
									return;
								}
							}
							for (j = mMYINFO.mAvatarInfo.aInventory[*tPage][i][1]; j < v11 + mMYINFO.mAvatarInfo.aInventory[*tPage][i][1]; ++j)
							{
								for (k = mMYINFO.mAvatarInfo.aInventory[*tPage][i][2]; k < v15 + mMYINFO.mAvatarInfo.aInventory[*tPage][i][2]; ++k)
								{
									v21[j][k] = 1;
								}
							}
						}
					}
				}
				if (v23->iSort == 2 || v23->iSort == 7 || v23->iSort == 11)
				{
					v12 = 1;
					v16 = 1;
				}
				else
				{
					v12 = 2;
					v16 = 2;
				}
				for (i = 0; i < 8; ++i)
				{
					for (j = 0; j < 8; ++j)
					{
						if (!v21[i][j])
						{
							for (k = i; k < v12 + i && k != 8; ++k)
							{
								for (l = j; l < v16 + j && l != 8 && !v21[k][l]; ++l)
								{
									;
								}
								if (l < v16 + j)
								{
									break;
								}
							}
							if (k == v12 + i)
							{
								*tX = i;
								*tY = j;
								return;
							}
						}
					}
				}
			}
			if (mMYINFO.mAvatarInfo.aExpandInventoryDate >= 1)
			{
				for (i = 0; i < 64 && mMYINFO.mAvatarInfo.aInventory[1][i][0] >= 1; ++i)
				{
					;
				}
				if (i == 64)
				{
					*tPage = -1;
				}
				else
				{
					*tPage = 1;
					*tIndex = i;
					for (i = 0; i < 8; ++i)
					{
						for (j = 0; j < 8; ++j)
						{
							v21[i][j] = 0;
						}
					}
					for (i = 0; i < 64; ++i)
					{
						if (mMYINFO.mAvatarInfo.aInventory[*tPage][i][0] >= 1)
						{
							v22 = mITEM.Search(mMYINFO.mAvatarInfo.aInventory[*tPage][i][0]);
							if (v22)
							{
								if (v22->iSort == 2 || v22->iSort == 7 || v22->iSort == 11)
								{
									v13 = 1;
									v17 = 1;
									if (mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] > 7 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] > 7)
									{
										*tPage = -1;
										return;
									}
								}
								else
								{
									v13 = 2;
									v17 = 2;
									if (mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] > 6 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] > 6)
									{
										*tPage = -1;
										return;
									}
								}
								for (j = mMYINFO.mAvatarInfo.aInventory[*tPage][i][1]; j < v13 + mMYINFO.mAvatarInfo.aInventory[*tPage][i][1]; ++j)
								{
									for (k = mMYINFO.mAvatarInfo.aInventory[*tPage][i][2]; k < v17 + mMYINFO.mAvatarInfo.aInventory[*tPage][i][2]; ++k)
									{
										v21[j][k] = 1;
									}
								}
							}
						}
					}
					if (v23->iSort == 2 || v23->iSort == 7 || v23->iSort == 11)
					{
						v14 = 1;
						v18 = 1;
					}
					else
					{
						v14 = 2;
						v18 = 2;
					}
					for (i = 0; i < 8; ++i)
					{
						for (j = 0; j < 8; ++j)
						{
							if (!v21[i][j])
							{
								for (k = i; k < v14 + i && k != 8; ++k)
								{
									for (m = j; m < v18 + j && m != 8 && !v21[k][m]; ++m)
									{
										;
									}
									if (m < v18 + j)
									{
										break;
									}
								}
								if (k == v14 + i)
								{
									*tX = i;
									*tY = j;
									return;
								}
							}
						}
					}
					*tPage = -1;
				}
			}
			else
			{
				*tPage = -1;
			}
		}
		else if (mActive)
		{
			if (mInvenType == 1)
			{
				INVENUI::GetInventory1(uX, uY, tItemIndex, tQuantity, tPage, tIndex, tX, tY, a10);
				if (*tPage == -1)
				{
					INVENUI::GetInventory2(uX, uY, tItemIndex, tQuantity, tPage, tIndex, tX, tY, a10);
				}
				else if (v23->iSort != 2 || mMYINFO.mAvatarInfo.aInventory[*tPage][*tIndex][0] != tItemIndex || tQuantity + mMYINFO.mAvatarInfo.aInventory[*tPage][*tIndex][3] > MAX_ITEM_DUPLICATION_NUM)
				{
					*tPage = -1;
				}
			}
			else
			{
				*tPage = -1;
			}
		}
		else
		{
			*tPage = -1;
		}
	}
	else
	{
		*tPage = -1;
	}
}
//STACK SISTEM
void INVENUI::PutInventory2(int tItemIndex, int* tPage, int* tIndex, int* tXPost, int* tYPost)
{
	int v5;
	int v6;
	int v7;
	int v8;
	int v9;
	int v10;
	int v11;
	int v12;
	int l;
	int m;
	int v15[8][8];
	ITEM_INFO* v16;
	ITEM_INFO* v17;
	int v18;
	int i;
	int j;
	int v21;
	int k;

	v18 = 8;
	v21 = 8;
	v17 = mITEM.Search(tItemIndex);
	if (v17)
	{
		for (i = 0; i < 64 && mMYINFO.mAvatarInfo.aInventory[0][i][0] >= 1; ++i)
		{
			;
		}
		if (i < 64)
		{
			*tPage = 0;
			*tIndex = i;
			for (i = 0; i < 8; ++i)
			{
				for (j = 0; j < 8; ++j)
				{
					v15[i][j] = 0;
				}
			}
			for (i = 0; i < 64; ++i)
			{
				if (mMYINFO.mAvatarInfo.aInventory[*tPage][i][0] >= 1)
				{
					v16 = mITEM.Search(mMYINFO.mAvatarInfo.aInventory[*tPage][i][0]);
					if (v16)
					{
						if (v16->iSort == 2 || v16->iSort == 7 || v16->iSort == 11)
						{
							v5 = 1;
							v9 = 1;
							if (mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] > 7 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] > 7)
							{
								*tPage = -1;
								return;
							}
						}
						else
						{
							v5 = 2;
							v9 = 2;
							if (mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] > 6 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] > 6)
							{
								*tPage = -1;
								return;
							}
						}
						for (j = mMYINFO.mAvatarInfo.aInventory[*tPage][i][1]; j < v5 + mMYINFO.mAvatarInfo.aInventory[*tPage][i][1]; ++j)
						{
							for (k = mMYINFO.mAvatarInfo.aInventory[*tPage][i][2]; k < v9 + mMYINFO.mAvatarInfo.aInventory[*tPage][i][2]; ++k)
							{
								v15[j][k] = 1;
							}
						}
					}
				}
			}
			if (v17->iSort == 2 || v17->iSort == 7 || v17->iSort == 11)
			{
				v6 = 1;
				v10 = 1;
			}
			else
			{
				v6 = 2;
				v10 = 2;
			}
			for (i = 0; i < 8; ++i)
			{
				for (j = 0; j < 8; ++j)
				{
					if (!v15[i][j])
					{
						for (k = i; k < v6 + i && k != 8; ++k)
						{
							for (l = j; l < v10 + j && l != 8 && !v15[k][l]; ++l)
							{
								;
							}
							if (l < v10 + j)
							{
								break;
							}
						}
						if (k == v6 + i)
						{
							*tXPost = i;
							*tYPost = j;
							return;
						}
					}
				}
			}
		}
		if (mMYINFO.mAvatarInfo.aExpandInventoryDate >= 1)
		{
			for (i = 0; i < 64 && mMYINFO.mAvatarInfo.aInventory[1][i][0] >= 1; ++i)
			{
				;
			}
			if (i == 64)
			{
				*tPage = -1;
			}
			else
			{
				*tPage = 1;
				*tIndex = i;
				for (i = 0; i < 8; ++i)
				{
					for (j = 0; j < 8; ++j)
					{
						v15[i][j] = 0;
					}
				}
				for (i = 0; i < 64; ++i)
				{
					if (mMYINFO.mAvatarInfo.aInventory[*tPage][i][0] >= 1)
					{
						v16 = mITEM.Search(mMYINFO.mAvatarInfo.aInventory[*tPage][i][0]);
						if (v16)
						{
							if (v16->iSort == 2 || v16->iSort == 7 || v16->iSort == 11)
							{
								v7 = 1;
								v11 = 1;
								if (mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] > 7 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] > 7)
								{
									*tPage = -1;
									return;
								}
							}
							else
							{
								v7 = 2;
								v11 = 2;
								if (mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][1] > 6 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] < 0 || mMYINFO.mAvatarInfo.aInventory[*tPage][i][2] > 6)
								{
									*tPage = -1;
									return;
								}
							}
							for (j = mMYINFO.mAvatarInfo.aInventory[*tPage][i][1]; j < v7 + mMYINFO.mAvatarInfo.aInventory[*tPage][i][1]; ++j)
							{
								for (k = mMYINFO.mAvatarInfo.aInventory[*tPage][i][2]; k < v11 + mMYINFO.mAvatarInfo.aInventory[*tPage][i][2]; ++k)
								{
									v15[j][k] = 1;
								}
							}
						}
					}
				}
				if (v17->iSort == 2 || v17->iSort == 7 || v17->iSort == 11)
				{
					v8 = 1;
					v12 = 1;
				}
				else
				{
					v8 = 2;
					v12 = 2;
				}
				for (i = 0; i < 8; ++i)
				{
					for (j = 0; j < 8; ++j)
					{
						if (!v15[i][j])
						{
							for (k = i; k < v8 + i && k != 8; ++k)
							{
								for (m = j; m < v12 + j && m != 8 && !v15[k][m]; ++m)
								{
									;
								}
								if (m < v12 + j)
								{
									break;
								}
							}
							if (k == v8 + i)
							{
								*tXPost = i;
								*tYPost = j;
								return;
							}
						}
					}
				}
				*tPage = -1;
			}
		}
		else
		{
			*tPage = -1;
		}
	}
	else
	{
		*tPage = -1;
	}
}
BOOL INVENUI::PutInventoryMoney(int uX, int uY, int tItemIndex)
{
	if (!mActive)
	{
		return 0;
	}
	if (mInvenType != 1)
	{
		return 0;
	}
	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	if (uX <= mX + 30 || uX >= mX + 245 || uY <= mY + 192 || uY >= mY + 451)
	{
		return FALSE;
	}
	else
	{
		return !mUTIL.CheckOverMaximum(mMYINFO.mAvatarInfo.aMoney, tItemIndex);
	}
}
int INVENUI::PutBigInventoryMoney(int uX, int uY, int tItemIndex)
{
	if (!mActive)
	{
		return 0;
	}
	if (mInvenType != 1)
	{
		return 0;
	}
	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	if (uX <= mX + 30 || uX >= mX + 245 || uY <= mY + 192 || uY >= mY + 451)
	{
		return 0;
	}
	if (mUTIL.CheckOverBigMoneyMaximum(mMYINFO.mAvatarInfo.aMoney2, tItemIndex))
	{
		mBASICUI.Insert1(mMESSAGE.Return(1918), mFONTCOLOR.mData[44]);
		return 0;
	}
	return 1;
}
int INVENUI::GetPetInventory1(int uX, int uY, int tInvalidIndex)
{
	int v6;
	int i;
	int v8;
	int v9;

	if (!mActive)
	{
		return -1;
	}
	if (!mPetBagState)
	{
		return -1;
	}
	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	v6 = mX - 284;
	v9 = mY;
	/*for (i = 0;
		i < 10
		&& (i + 10 * tPetInvPage == tInvalidIndex
			|| uX < v6 + 55 * (i % 5) + 19
			|| uX > v6 + 55 * (i % 5) + 74
			|| uY < v9 + 55 * (i / 5) + 41
			|| uY > v9 + 55 * (i / 5) + 96);
		++i)
	{
		;
	}*/
	for (i = 0; i < 10; i++)
	{
		if (i + 10 * mPetBagPage == tInvalidIndex || uX < v6 + 55 * (i % 5) + 19 || uX > v6 + 55 * (i % 5) + 74 || uY < v9 + 55 * (i / 5) + 41 || uY > v9 + 55 * (i / 5) + 96)
		{
			continue;
		}
		break;
	}
	v8 = i + 10 * mPetBagPage;
	if (v8 == 20 / (2 - mPetBagPage))
	{
		return -1;
	}
	if (mMYINFO.mAvatarInfo.aPetInventoryData[v8] <= 0)
	{
		return -1;
	}
	return v8;
}
int INVENUI::GetPetInventory2(int uX, int uY, int tInvalidIndex)
{
	int v6;
	int i;
	int v8;
	int v9;

	if (!mActive)
	{
		return -1;
	}
	if (!mPetBagState)
	{
		return -1;
	}
	mMYINFO.AdjustScreenCoord(299, 764, 182, &mX, &mY);
	v6 = mX - 284;
	v9 = mY;
	for (i = 0; i < 10; i++)
	{
		if (i + 10 * mPetBagPage == tInvalidIndex || uX < v6 + 55 * (i % 5) + 19 || uX > v6 + 55 * (i % 5) + 74 || uY < v9 + 55 * (i / 5) + 41 || uY > v9 + 55 * (i / 5) + 96)
		{
			continue;
		}
		break;
	}
	v8 = i + 10 * mPetBagPage;
	if (v8 == 20 / (2 - mPetBagPage))
	{
		return -1;
	}
	if (mMYINFO.mAvatarInfo.aPetInventoryData[v8] >= 1)
	{
		return -1;
	}
	return v8;
}
int INVENUI::SetPetInventory1(int uX, int uY, int tItemIndex, int tInvalidIndex)
{
	int v7;

	v7 = INVENUI::GetPetInventory1(uX, uY, tInvalidIndex);
	if (v7 == -1)
	{
		return INVENUI::GetPetInventory2(uX, uY, tInvalidIndex);
	}
	if (!mITEM.Search(tItemIndex))
	{
		return -1;
	}
	if (mMYINFO.mAvatarInfo.aPetInventoryData[v7] == tItemIndex)
	{
		return v7;
	}
	return -1;
}
BOOL INVENUI::CheckSpaceFor2x2(int tPage, int uX, int uY)
{
	ITEM_INFO* v4;
	int v5;
	int v6;
	int v7[8][8];
	int v8;
	int i;
	int j;
	int v11;
	int k;

	v8 = 8;
	v11 = 8;
	if (uX < 0 || uX > 6 || uY < 0 || uY > 6)
		return 0;
	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
			v7[i][j] = 0;
	}
	for (i = 0; i < 64; ++i)
	{
		if (mMYINFO.mAvatarInfo.aInventory[tPage][i][0] >= 1)
		{
			v4 = mITEM.Search(mMYINFO.mAvatarInfo.aInventory[tPage][i][0]);
			if (v4)
			{
				if (v4->iSort == 2 || v4->iSort == 7 || v4->iSort == 11)
				{
					v5 = 1;
					v6 = 1;
				}
				else
				{
					v5 = 2;
					v6 = 2;
				}
				for (j = mMYINFO.mAvatarInfo.aInventory[tPage][i][1]; j < v5 + mMYINFO.mAvatarInfo.aInventory[tPage][i][1]; ++j)
				{
					for (k = mMYINFO.mAvatarInfo.aInventory[tPage][i][2]; k < v6 + mMYINFO.mAvatarInfo.aInventory[tPage][i][2]; ++k)
						v7[j][k] = 1;
				}
			}
		}
	}
	return !v7[uX][uY] && !v7[uX][uY + 1] && !v7[uX + 1][uY] && !v7[uX + 1][uY + 1];
}
int INVENUI::IsFindItem1(int tSelectAvtIndex, int tItemIndex, int* tPage, int* tIndex)
{
	int j;
	int i;

	for (i = 0; i < 2; ++i)
	{
		for (j = 0; j < 64; ++j)
		{
			if (mMYINFO.mSelectAvatarInfo[tSelectAvtIndex].aInventory[i][j][0] == tItemIndex)
			{
				*tPage = i;
				*tIndex = j;
				return 1;
			}
		}
	}
	return 0;
}
int INVENUI::IsFindItem2(int tItemIndex)
{
	int v2;
	int i;
	int j;

	v2 = 1;
	if (mMYINFO.mAvatarInfo.aExpandInventoryDate > 0)
		v2 = 2;
	for (i = 0; i < v2; ++i)
	{
		for (j = 0; j < 64; ++j)
		{
			if (mMYINFO.mAvatarInfo.aInventory[i][j][0] == tItemIndex)
				return 1;
		}
	}
	return 0;
}

void INVENUI::IsFindItem3(int tItemIndex, int* tPage, int* tIndex)
{
	int i, j;
	int tExpandBag;

	tExpandBag = 1;
	*tPage = -1;
	*tIndex = -1;
	if (mMYINFO.mAvatarInfo.aExpandInventoryDate > 0)
		tExpandBag = 2;
	for (i = 0; i < tExpandBag; i++)
	{
		for (j = 0; j < 64; j++)
		{
			if (mMYINFO.mAvatarInfo.aInventory[i][j][0] == tItemIndex)
			{
				*tPage = i;
				*tIndex = j;
				break;
			}
		}
	}
}

int INVENUI::GetSocketMessage1(int tGemMode, int tGemLevel, int* sAdd, int* sAdd2)
{
	int result;

	if (tGemMode == 1)
		return tGemLevel + 1803;
	if (tGemMode < 39 || tGemMode > 42)
	{
		if (tGemMode < 43 || tGemMode > 46)
		{
			mUTIL.SetSocketInfo(tGemMode, tGemLevel, sAdd, sAdd2);
			result = tGemMode + 2583;
		}
		else
		{
			mUTIL.SetSocketInfo(tGemMode, tGemLevel, sAdd, sAdd2);
			result = tGemMode + 2698;
		}
	}
	else
	{
		mUTIL.SetSocketInfo(tGemMode, tGemLevel, sAdd, sAdd2);
		result = tGemMode + 2702;
	}
	return result;
}
int INVENUI::GetSocketMessage2(int tGemMode, int tGemLevel, int* sAdd, int* sAdd2)
{
	if (tGemMode == 1)
	{
		if (tGemLevel >= 1 && tGemLevel <= 20)
		{
			*sAdd = 50 * tGemLevel;
			return 2629;
		}
		if (tGemLevel >= 21 && tGemLevel <= 40)
		{
			*sAdd = 20 * (tGemLevel - 20);
			return 2630;
		}
		if (tGemLevel >= 41 && tGemLevel <= 60)
		{
			*sAdd = 100 * (tGemLevel - 40);
			return 2631;
		}
		if (tGemLevel >= 61 && tGemLevel <= 80)
		{
			*sAdd = 125 * (tGemLevel - 60);
			return 2632;
		}
		if (tGemLevel >= 81 && tGemLevel <= 100)
		{
			*sAdd = 50 * (tGemLevel - 80);
			return 2633;
		}
	}
	else
	{
		if (tGemLevel >= 1 && tGemLevel <= 5)
		{
			*sAdd = 400;
			*sAdd2 = 200 * tGemLevel;
			return 2634;
		}
		if (tGemLevel >= 6 && tGemLevel <= 10)
		{
			*sAdd = 800;
			*sAdd2 = 200 * (tGemLevel - 5);
			return 2634;
		}
		if (tGemLevel >= 11 && tGemLevel <= 15)
		{
			*sAdd = 1200;
			*sAdd2 = 200 * (tGemLevel - 10);
			return 2634;
		}
		if (tGemLevel >= 16 && tGemLevel <= 20)
		{
			*sAdd = 1600;
			*sAdd2 = 200 * (tGemLevel - 15);
			return 2634;
		}
		if (tGemLevel >= 21 && tGemLevel <= 25)
		{
			*sAdd = 2000;
			*sAdd2 = 200 * (tGemLevel - 20);
			return 2634;
		}
		if (tGemLevel >= 26 && tGemLevel <= 30)
		{
			*sAdd = 400;
			*sAdd2 = 200 * (tGemLevel - 25);
			return 2602;
		}
		if (tGemLevel >= 31 && tGemLevel <= 35)
		{
			*sAdd = 800;
			*sAdd2 = 200 * (tGemLevel - 30);
			return 2602;
		}
		if (tGemLevel >= 36 && tGemLevel <= 40)
		{
			*sAdd = 1200;
			*sAdd2 = 200 * (tGemLevel - 35);
			return 2602;
		}
		if (tGemLevel >= 41 && tGemLevel <= 45)
		{
			*sAdd = 1600;
			*sAdd2 = 200 * (tGemLevel - 40);
			return 2602;
		}
		if (tGemLevel >= 46 && tGemLevel <= 50)
		{
			*sAdd = 2000;
			*sAdd2 = 200 * (tGemLevel - 45);
			return 2602;
		}
	}
	return 0;
}
int INVENUI::GetSocketMessage3(int tSort, int tValue)
{
	int result;

	switch (tSort)
	{
	case 1:
		switch (tValue)
		{
		case 1:
			result = 1098;
			break;
		case 2:
			result = 1098;
			break;
		case 3:
			result = 1098;
			break;
		default:
			result = 0;
			break;
		}
		break;
	case 2:
		switch (tValue)
		{
		case 11:
			result = 1059;
			break;
		case 12:
			result = 1059;
			break;
		case 13:
			result = 1059;
			break;
		default:
			result = 0;
			break;
		}
		break;
	case 3:
		switch (tValue)
		{
		case 21:
			result = 2727;
			break;
		case 22:
			result = 2727;
			break;
		case 23:
			result = 2727;
			break;
		default:
			result = 0;
			break;
		}
		break;
	case 4:
		switch (tValue)
		{
		case 31:
			result = 2727;
			break;
		case 32:
			result = 2727;
			break;
		case 33:
			result = 2727;
			break;
		default:
			result = 0;
			break;
		}
		break;
	default:
		result = 0;
		break;
	}
	return result;
}