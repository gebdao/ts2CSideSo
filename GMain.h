#pragma once

class MESSAGE
{
public:
	int mDataNum;
	char mMessage[MAX_MESSAGE_NUM][101];

	BOOL Init();
	char* Return(int tMessageNum);
};
extern MESSAGE mMESSAGE;


class ZONENAME
{
public:
	int mTotalZoneNumber;
	char mZoneName[MAX_ZONE_NUM][MAX_ZONE_NAME];

	int Init();
	void Free();
	char* Return(int tZoneNumber);
};
extern ZONENAME mZONENAME;

class MAIN
{
public:
	int mMainMode;
	int mSubMode;
	DWORD mTicks;
	BOOL bIsClick[150];
	SOUNDDATA_FOR_GXD mBGM;
	int mLoginBGNum;
	char mWorldIP[1000][16];
	int mWorldPort[1000];
	int mMaxPlayerNum[1000];
	int mGagePlayerNum[1000];
	int mPresentPlayerNum[1000];
	int mWorldMin;
	int mWorldMax;
	int mWorldIndex;
	int mSecondPasswordState;
	int mSecondPasswordType;
	int mSecondPasswordInputIndex;
	int mInputNum[3];
	char aInputText[3][5];
	int mSecondPasswordImage[10];
	int mSecondLoginTryNum;
	int mGiftType;
	int tLoginWebMallState;
	int tLoginWebMallPage;
	int tLoginWebMallMaxPage;
	int tLoginWebMallSelectIndex;
	int mLoginWebmallInfo[200];
	int unk101[101];
	int bTransferState;
	int mTransferIndex;
	int mSelectState;
	int mChangeNameWindowState;
	int bOpenWebStorageState;
	int uCurrentGiftPage;
	int tWebStorageSelectIndex;
	int mWantGiftIndex;
	int bResetInputSecondPassword;
	int unk6;
	int mSelectBG;
	int mSelectType;
	int mSelectAvtIndex;
	int mCreateWeaponType;
	int mActType;
	int mActSort;
	float mActFrame;
	float mActCoord[3];
	float mActAngle[3];
	int mLoadStep;
	int mLoadImg;
	BOOL mEngineIsStart;

	MAIN();
	BOOL Init();
	void Free();
	void Start();
	void Logic(float dTime);
	void Draw(float dTime);
	void Logic1(float dTime);
	void Logic2(float dTime);
	void Logic3(float dTime);
	void Logic4(float dTime);
	void Logic5(float dTime);
	void Logic6(float dTime);
	void Logic7(float dTime);
	void Logic8(float dTime);
	void Draw1(float dTime);
	void Draw2(float dTime);
	void Draw3(float dTime);
	void Draw4(float dTime);
	void Draw5(float dTime);
	void Draw6(float dTime);
	void Draw7(float dTime);
	void Draw8(float dTime);
	void Draw6ForZone(int tDrawSort, float dTime);
	void LBUTTONDOWN2(int uX, int uY);
	void LBUTTONDOWN3(int uX, int uY);
	void LBUTTONUP2(int uX, int uY);
	void LBUTTONUP3(int uX, int uY);
	void LBUTTONUP4(int uX, int uY);
	void LBUTTONUP6(int uX, int uY);
	void LBUTTONUP8(int uX, int uY);
	void LBUTTONDOWN4(int uX, int uY);
	void LBUTTONDOWN6(int uX, int uY);
	void LBUTTONDOWN8(int uX, int uY);
	void LBUTTONDOWN(int uX, int uY);
	void LBUTTONUP(int uX, int uY);
	void RBUTTONDOWN(int uX, int uY);
	void RBUTTONUP(int uX, int uY);
	void KEYBOARD();
	void KEYBOARD6();
	BOOL KEYBOARD6_FOR_SKILL();
	void TW_LOGIN_SEND(char* tID, char* tPassword, int tVersion, int* tResult);
	void TW_CLIENT_OK_FOR_LOGIN_SEND(int* tResult);
	void TW_CREATE_MOUSE_PASSWORD_SEND(char* tInputText, int* tResult);
	void TW_LOGIN_MOUSE_PASSWORD_SEND(char* tInputText, int* tResult);
	void TW_CHANGE_MOUSE_PASSWORD_SEND(char* tInputText, char* tInputText2, int* tResult);
	void TW_CREATE_AVATAR_SEND(int tAvatarSort, AVATAR_INFO* tAvtInfo, int* tResult);
	void TW_DELETE_AVATAR_SEND(int tSelectAvtIndex, int tSort, int tValue, int* tResult);
	void TW_FAIL_MOVE_ZONE_1_SEND(int* tResult);
	void TW_DEMAND_ZONE_SERVER_INFO_1(int tSelectAvtIndex, char* tIP, int* tPort, int* tZone, int* tResult);
	void TW_DEMAND_GIFT_SEND(int* tResult);
	void TW_WANT_GIFT_SEND(int tSort, int tGiftIndex, int* tResult);
	void TW_DEMAND_WEBMALL_SEND();
	void TW_BUY_WEBMALL_SEND(int tIndex, int* tResult);
	void TW_CHANGE_AVATAR_NAME_SEND(int tSelectAvtIndex, char* tAvtName, int tPage, int tIndex, int* tResult);
	void TW_CREATE_ACCOUNT_SEND(char* tID, char* tPassword, int* tResult);
	int GetWorldUser(char* tIP, int tPort, int* mMaxPlayerNum, int* mGagePlayerNum);
	int ReturnXCoord(int tIndex);
	int ReturnYCoord(int tIndex);
	int ReturnWorldNameImage(int tIndex);
	int ReturnWorldNameImageForConnect(int tIndex);
	void DisplayWorldUserNumber(int tWorldIndex, int tPresentPlayerNum);
	BOOL CheckForInventory();
	void ProcessForDeleteAvatar();
	void DrawAvatarInfo(int tDrawSort, int tSort, AVATAR_INFO* tAvtInfo, int mActType, int mActSort, float mActFrame, float mActCoord[3], float mActAngle[3]);
	int GetLoginWebMallIndex0(int sX, int sY, int mX, int mY);
	int ReturnWorldGroupImage(int tGroupIndex, int tSort);
	void ProcessForCamera();
	void Logic6ForZone(float dTime);
	void ProcessForGetAvatar1(int mIndex, DWORD mUniqueNumber);
	BOOL ProcessForGetAvatar2();
	void ProcessForGetAvatar3();
	void ProcessForGetNPC1(int mIndex);
	int ProcessForGetNPC3();
	void ProcessForGetMonster1(int mIndex, DWORD mUniqueNumber);
	BOOL ProcessForGetMonster2();
	void ProcessForGetMonster3();
	void ProcessForGetDeputyPShop1(int mIndex);
	int ProcessForGetDeputyPShop2();
	void ProcessForGetItem1(int mIndex, DWORD mUniqueNumber);
	int ProcessForGetItem2();
	void ProcessForGetItem3();
	void ProcessForGetItem4();
	BOOL ProcessForSkill1(float tLocation[3], ACTION_INFO* tAction);
	BOOL ProcessForSkill2(int tHotkeyIndex, int mX, int mY, int tSort1, int tSort2);
	void ExamineSelectObject(int mX, int mY, int* tSelectSort, int* tSelectIndex, int tSort);
};
extern MAIN mMAIN;



// Class CInnerAuto

typedef struct
{
	int mIndex;
	float fDistance;
	BOOL bSomeValid;
}
MONSTER_DISTANCE;

#define MAX_NEAR_MONSTER	15
class CInnerAuto
{
public:
	BYTE bIsClick[12];
	int unk3;
	int unk4;
	BYTE mActive;
	int mY;
	int mX;
	USHORT mIsAutoState;
	MONSTER_DISTANCE mNearMonster[15];
	USHORT mMaxNearMonster;
	int mTargetObjIndex;
	int mCurActionSort;
	DWORD dSearchTick;
	DWORD mCurActionSortTick;
	DWORD dActionTick;
	DWORD dSkillTick;
	DWORD unk62;
	DWORD dPotionTIck;
	float aActLocation[3];
	float aActTargetLocation[3];
	BOOL mWantToMove;
	BOOL bIsAction;
	BOOL mChangeZone;
	BOOL bTakeItem;
	USHORT mItemSetupTab;
	USHORT unk75;
	char mObtainItem[48][25];
	char mLoseItem[48][25];

	BOOL Init();
	void LoadObtainItemList();
	void LoadLoseItemList();
	BOOL SaveObtainItemList();
	BOOL SaveLoseItemList();
	void Set();
	BOOL InitForMovezone();
	BOOL CheckInvalidLocation(float tLocation[3]);
	void Update();
	BOOL LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	void Draw(int uX, int uY);
	void DrawForBuff(int uX, int uY);
	void DrawSkillPosition();
	void DrawForHunt(int uX, int uY);
	void DrawForItemList(int uX, int uY);
	int IsOnSkillBox(int uX, int uY);
	BOOL LbuttonDownForHunt(int uX, int uY);
	BOOL LbuttonDownForItemList(int uX, int uY);
	BOOL LbuttonDownForBuff(int uX, int uY);
	BOOL LbuttonUpForHunt(int uX, int uY);
	BOOL LbuttonUpForBuff(int uX, int uY);
	BOOL LbuttonUpForItemList(int uX, int uY);
	int CheckIsBegin();
	BOOL CheckPotion();
	BOOL GetIsTargetValid0(int tTargetObjIndex);
	void ClearMonster();
	void SetTargetUnvalid0();
	void SetBuffSkill(int tIndex, int tItemIndex, int tXPost);
	BOOL IsBuffSkill(int tSort, int s);
	BOOL IsAttackSkill(int tSort, int s);
	BOOL GetWeponKind(int tItem);
	BOOL GetTribeKind(int tTribe);
	void HotKeyAutoStop();
	void HotKeyAutoStart();
	BOOL IsAbleKey(int tShortcutKey, int tKey);
	BOOL TakeItem();
	BOOL UseItem();
	int CheckParty();
	BOOL EatChunGongDan();
	BOOL EatChunWangDan();
	int GetItemIndex();
	BOOL SetAvatarTarget();
	int GetTargetMonster();
	BOOL SearchMonster();
	float GetDiatenceFromMonster(float tLocation[3]);
	void SwapMinDistenceMonster(int a2, float a3, int a4);
	int GetWeponAttackKind(int tSort);
	BOOL GetNearMonster();
	void SetTargetUnvalid(int mIndex);
	BOOL MoveNoTarget();
	int SearchWall(float tCoord[3]);
	BOOL GetIsTargetValid();
	void GetIsOn(int tIsTake);
	BOOL IsPriorityObtainItem(char* iName);
	BOOL IsPriorityLoseItem(char* iName);
	BOOL IsItemListExist(char* iName);
};
extern CInnerAuto mCInnerAuto;