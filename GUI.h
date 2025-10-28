#pragma once

class BASICUI
{
public:
	int mX;
	int mY;
	int mIsClick[150];
	int mPartyIndex;
	int mMinimap;
	int mMinimapZoom;
	int mChatDisplay[5];
	int mChatWindow;
	int mSelectChatIndex;
	char mChatName[MAX_AVATAR_NAME_LENGTH];
	int mSysMessageNum;
	int mMaxSysMessageNum;
	char mSysMessagee[300][122];
	int mSysMessageSort[300];
	int mSysMessageState;
	float mSysMessageUpdateTime;
	int mChatMessageNum;
	int mMaxChatMessageNum;
	char mChatMessage[300][122];
	int mChatMessageSort[300];
	char mChatAvatarName[300][13];
	int mChatState;
	float mChatUpdateTime;
	int mUseItemDisplayState;
	int nIsClick[20];

	BASICUI();
	BOOL Init();
	void InitForEnterZone();
	void Draw(int uX, int uY);
	BOOL LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	BOOL DrawForRollOver(int uX, int uY);
	void Insert1(char* tMessage, int tDisplaySort);
	void Insert2(char* tMessage, int tDisplaySort, char* tAvatarName);
	int GetHotkeyIndex1(int uX, int uY, int tInvalidIndex);
	int GetHotkeyIndex2(int uX, int uY, int tInvalidIndex);
	int PutHotkey1(int uX, int uY, int tItemIndex, int tQuantity, int tInvalidIndex);
	void ProcessEnterForEditBox00();
	void ProcessEnterForEditBox04();
	void ProcessEnterForEditBox05();
	BOOL ProcessForGMCommand(char* tString);
};
extern BASICUI mBASICUI;


class SPECIALSHOP
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[10];
	int mItemList[3][28];
	int mCurrentPage;
	int mMaxPage;


	SPECIALSHOP();
	void Set();
	void Off();
	void InitForEnterZone();
	void Draw(int uX, int uY);
	BOOL DrawForRollOver(int uX, int uY);
	int SearchWhatClick(int uX, int uY);
	BOOL RBUTTONDOWN(int uX, int uY);
	BOOL KEYBOARD();
	BOOL LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	

};
extern SPECIALSHOP mSPSHOP;



class UI
{
public:
	int mX;
	int mY;

	BOOL Init();
	void Free();
	void Draw();
	void Off(int tSort);
	BOOL DrawForRollOver(int uX, int uY);
	BOOL LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	BOOL RBUTTONDOWN(int uX, int uY);
	BOOL RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void InitForEnterZone();
	BOOL CheckActiveUIForItem();

};
extern UI mUI;

class NPCUI
{
public:
	int mX;
	int mY;
	NPC_INFO* mNPCInfo;
	int mActive;
	int mPage[6];
	int mIndex[6];
	NPCINVUI mInv[6];
	int mIsClick[100];
	int mChoice[10];
	int mWorkId;
	int mNPCSpeechNum[5];
	int mNPCSpeechIndex;
	QUEST_INFO* mQuestInfo;
	int mQuestSort;
	int mQuestData[5];
	int mSkillIndex;
	int mStorePage;
	int mShopTotalPage;
	int mShopPresentPage;
	int mMakeItemTotalPage;
	int mMakeItemInfo[100][6];
	int mMakeItemPresentPage;
	int mMakeItemSort;
	int mCashItemAmount;
	int mCashShopItem[4];
	int mCashShopInfo[4][14][10][4];
	int mCashShopMaxPage;
	int mCashShopPage;
	int mCashShopIndex;
	BOOL mDemandBloodShopInfo;
	int mBloodStoreInfo[MAX_BLOODSTORE_PAGE_NUM][10][3];
	int mBloodStoreCurrentPage;
	int mBloodStoreMaxPage;
	int mBloodStoreIndex;
	int tUltimateUpgradeState[2];
	char tTribePosAvtName[13];
	int mTribeWeaponIndex[10];
	int mAvatarTitleCost;
	int mItemSearchInfo[8];
	int mItemSearchUserIndex[1000];
	char mItemSearchAvtName[1000][13];
	int mItemSearchPage[1000];
	int mItemSearchIndex[1000];
	int mItemSearchData[1000][9];
	int mItemSearchSocket[1000][5];
	int mPossibleGetCashInfo;
	int mPossibleBuyCashItem;
	int mCashShopVersion;
	int mTribeCashShopInfo[3][10][10][4];
	int mUpdateTime;
	int mGambleInfo[10];
	int tRemovGemIndex;
	BYTE mUnkdata3[295];
	int mPageSort;
	int mUnknown;
	int mUseTalismanNum;


	void Set(NPC_OBJECT* tNPC);
	BOOL Init();
	void Reset();
	void SetInvalidIndex();
	void Off();
	void InitForEnterZone();
	void LButtonup021(int tSort, int tCash);
	void LButtonUp074();
	BOOL LBUTTONDOWN(int uX, int uY);
	void LButtonDown_000(int uX, int uY);
	void LBUTTONDOWN2(int uX, int uY);
	void LBUTTONDOWN5(int uX, int uY);
	void LBUTTONDOWN6(int uX, int uY);
	void LBUTTONDOWN7(int uX, int uY);
	void LBUTTONDOWN8(int uX, int uY);
	void LBUTTONDOWN10(int uX, int uY);
	void LBUTTONDOWN11(int uX, int uY);
	void LBUTTONDOWN12(int uX, int uY);
	void LBUTTONDOWN13(int uX, int uY);
	void LBUTTONDOWN14(int uX, int uY);
	void LBUTTONDOWN17(int uX, int uY);
	void LBUTTONDOWN18(int uX, int uY);
	void LBUTTONDOWN19(int uX, int uY);
	void LBUTTONDOWN20(int uX, int uY);
	void LBUTTONDOWN21(int uX, int uY);
	void LBUTTONDOWN22(int uX, int uY);
	void LBUTTONDOWN23(int uX, int uY);
	void LBUTTONDOWN25(int uX, int uY);
	void LBUTTONDOWN26(int uX, int uY);
	void LBUTTONDOWN27(int uX, int uY);
	void LBUTTONDOWN28(int uX, int uY);
	void LBUTTONDOWN29(int uX, int uY);
	void LBUTTONDOWN30(int uX, int uY);
	void LBUTTONDOWN33(int uX, int uY);
	void LBUTTONDOWN34(int uX, int uY);
	void LBUTTONDOWN35(int uX, int uY);
	void LBUTTONDOWN36(int uX, int uY);
	void LBUTTONDOWN37(int uX, int uY);
	void LBUTTONDOWN38(int uX, int uY);
	void LBUTTONDOWN39(int uX, int uY);
	void LBUTTONDOWN40(int uX, int uY);
	void LBUTTONDOWN41(int uX, int uY);
	void LBUTTONDOWN42(int uX, int uY);
	void LBUTTONDOWN43(int uX, int uY);
	void LBUTTONDOWN44(int uX, int uY);
	void LBUTTONDOWN45(int uX, int uY);
	void LBUTTONDOWN46(int uX, int uY);
	void LBUTTONDOWN51(int uX, int uY);
	void LBUTTONDOWN52(int uX, int uY);
	void LBUTTONDOWN54(int uX, int uY);
	void LBUTTONDOWN56(int uX, int uY);
	void LBUTTONDOWN58(int uX, int uY);
	void LBUTTONDOWN61(int uX, int uY);
	void LBUTTONDOWN62(int uX, int uY);
	void LBUTTONDOWN63(int uX, int uY);
	void LBUTTONDOWN66(int uX, int uY);
	void LBUTTONDOWN67(int uX, int uY);
	void LBUTTONDOWN68(int uX, int uY);
	void LBUTTONDOWN69(int uX, int uY);
	void LBUTTONDOWN70(int uX, int uY);
	void LBUTTONDOWN72(int uX, int uY);
	void LBUTTONDOWN73(int uX, int uY);
	void LBUTTONDOWN74(int uX, int uY);
	void LBUTTONDOWN75(int uX, int uY);
	void LBUTTONDOWN76(int uX, int uY);
	void LBUTTONDOWN77(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	BOOL RBUTTONDOWN(int uX, int uY);
	void RBUTTONDOWN6(int uX, int uY);
	void RBUTTONDOWN8(int uX, int uY);
	void RBUTTONDOWN10(int uX, int uY);
	void RBUTTONDOWN12(int uX, int uY);
	void RBUTTONDOWN13(int uX, int uY);
	void RBUTTONDOWN14(int uX, int uY);
	void RBUTTONDOWN17(int uX, int uY);
	void RBUTTONDOWN18(int uX, int uY);
	void RBUTTONDOWN19(int uX, int uY);
	void RBUTTONDOWN22(int uX, int uY);
	void RBUTTONDOWN23(int uX, int uY);
	void RBUTTONDOWN25(int uX, int uY);
	void RBUTTONDOWN26(int uX, int uY);
	void RBUTTONDOWN30(int uX, int uY);
	void RBUTTONDOWN41(int uX, int uY);
	void RBUTTONDOWN42(int uX, int uY);
	void RBUTTONDOWN46(int uX, int uY);
	void RBUTTONDOWN51(int uX, int uY);
	void RBUTTONDOWN54(int uX, int uY);
	void RBUTTONDOWN56(int uX, int uY);
	void RBUTTONDOWN58(int uX, int uY);
	void RBUTTONDOWN63(int uX, int uY);
	void RBUTTONDOWN66(int uX, int uY);
	void RBUTTONDOWN67(int uX, int uY);
	void RBUTTONDOWN68(int uX, int uY);
	void RBUTTONDOWN69(int uX, int uY);
	void RBUTTONDOWN70(int uX, int uY);
	void RBUTTONDOWN72(int uX, int uY);
	void RBUTTONDOWN73(int uX, int uY);
	void RBUTTONDOWN75(int uX, int uY);
	BOOL RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	BOOL DrawForRollOver(int uX, int uY);
	void DrawForRollOver5(int uX, int uY);
	void DrawForRollOver6(int uX, int uY);
	void DrawForRollOver8(int uX, int uY);
	void DrawForRollOver10(int uX, int uY);
	void DrawForRollOver12(int uX, int uY);
	void DrawForRollOver13(int uX, int uY);
	void DrawForRollOver14(int uX, int uY);
	void DrawForRollOver17(int uX, int uY);
	void DrawForRollOver18(int uX, int uY);
	void DrawForRollOver19(int uX, int uY);
	void DrawForRollOver21(int uX, int uY);
	void DrawForRollOver22(int uX, int uY);
	void DrawForRollOver23(int uX, int uY);
	void DrawForRollOver25(int uX, int uY);
	void DrawForRollOver26(int uX, int uY);
	void DrawForRollOver30(int uX, int uY);
	void DrawForRollOver33(int uX, int uY);
	void DrawForRollOver34(int uX, int uY);
	void DrawForRollOver41(int uX, int uY);
	void DrawForRollOver42(int uX, int uY);
	void DrawForRollOver46(int uX, int uY);
	void DrawForRollOver51(int uX, int uY);
	void DrawForRollOver54(int uX, int uY);
	void DrawForRollOver56(int uX, int uY);
	void DrawForRollOver58(int uX, int uY);
	void DrawForRollOver63(int uX, int uY);
	void DrawForRollOver66(int uX, int uY);
	void DrawForRollOver67(int uX, int uY);
	void DrawForRollOver68(int uX, int uY);
	void DrawForRollOver69(int uX, int uY);
	void DrawForRollOver70(int uX, int uY);
	void DrawForRollOver72(int uX, int uY);
	void DrawForRollOver73(int uX, int uY);
	void DrawForRollOver74(int uX, int uY);
	void DrawForRollOver75(int uX, int uY);
	void Draw_000(int uX, int uY);
	void Draw2(int uX, int uY);
	void Draw5(int uX, int uY);
	void Draw6(int uX, int uY);
	void Draw7(int uX, int uY);
	void Draw8(int uX, int uY);
	void Draw10(int uX, int uY);
	void Draw11(int uX, int uY);
	void Draw12(int uX, int uY);
	void Draw13(int uX, int uY);
	void Draw14(int uX, int uY);
	void Draw17(int uX, int uY);
	void Draw18(int uX, int uY);
	void Draw19(int uX, int uY);
	void Draw20(int uX, int uY);
	void Draw21(int uX, int uY);
	void Draw22(int uX, int uY);
	void Draw23(int uX, int uY);
	void Draw25(int uX, int uY);
	void Draw26(int uX, int uY);
	void Draw27(int uX, int uY);
	void Draw28(int uX, int uY);
	void Draw29(int uX, int uY);
	void Draw30(int uX, int uY);
	void Draw33(int uX, int uY);
	void Draw34(int uX, int uY);
	void Draw35(int uX, int uY);
	void Draw36(int uX, int uY);
	void Draw37(int uX, int uY);
	void Draw38(int uX, int uY);
	void Draw39(int uX, int uY);
	void Draw40(int uX, int uY);
	void Draw41(int uX, int uY);
	void Draw42(int uX, int uY);
	void Draw43(int uX, int uY);
	void Draw44(int uX, int uY);
	void Draw45(int uX, int uY);
	void Draw46(int uX, int uY);
	void Draw51(int uX, int uY);
	void Draw52(int uX, int uY);
	void Draw54(int uX, int uY);
	void Draw56(int uX, int uY);
	void Draw58(int uX, int uY);
	void Draw61(int uX, int uY);
	void Draw62(int uX, int uY);
	void Draw63(int uX, int uY);
	void Draw66(int uX, int uY);
	void Draw67(int uX, int uY);
	void Draw68(int uX, int uY);
	void Draw69(int uX, int uY);
	void Draw70(int uX, int uY);
	void Draw72(int uX, int uY);
	void Draw73(int uX, int uY);
	void Draw74(int uX, int uY);
	void Draw75(int uX, int uY);
	void Draw77(int uX, int uY);
	void LBUTTONUP000(int uX, int uY);
	void LBUTTONUP2(int uX, int uY);
	void LBUTTONUP5(int uX, int uY);
	void LBUTTONUP6(int uX, int uY);
	void LBUTTONUP7(int uX, int uY);
	void LBUTTONUP8(int uX, int uY);
	void LBUTTONUP10(int uX, int uY);
	void LBUTTONUP11(int uX, int uY);
	void LBUTTONUP12(int uX, int uY);
	void LBUTTONUP13(int uX, int uY);
	void LBUTTONUP14(int uX, int uY);
	void LBUTTONUP17(int uX, int uY);// Craft Skill Elder
	void LBUTTONUP18(int uX, int uY);
	void LBUTTONUP19(int uX, int uY);
	void LBUTTONUP20(int uX, int uY);
	void LBUTTONUP21(int uX, int uY);
	void LBUTTONUP22(int uX, int uY);
	void LBUTTONUP23(int uX, int uY);
	void LBUTTONUP25(int uX, int uY);
	void LBUTTONUP26(int uX, int uY);
	void LBUTTONUP27(int uX, int uY);
	void LBUTTONUP28(int uX, int uY);
	void LBUTTONUP29(int uX, int uY);
	void LBUTTONUP30(int uX, int uY);
	void LBUTTONUP33(int uX, int uY);
	void LBUTTONUP34(int uX, int uY);
	void LBUTTONUP35(int uX, int uY);
	void LBUTTONUP36(int uX, int uY);
	void LBUTTONUP37(int uX, int uY);
	void LBUTTONUP38(int uX, int uY);
	void LBUTTONUP39(int uX, int uY);
	void LBUTTONUP40(int uX, int uY);
	void LBUTTONUP41(int uX, int uY);// Craft Pet Trader Nungsi 
	void LBUTTONUP42(int uX, int uY);
	void LBUTTONUP43(int uX, int uY);
	void LBUTTONUP44(int uX, int uY);
	void LBUTTONUP45(int uX, int uY);
	void LBUTTONUP46(int uX, int uY);
	void LBUTTONUP51(int uX, int uY);
	void LBUTTONUP52(int uX, int uY);
	void LBUTTONUP54(int uX, int uY);
	void LBUTTONUP56(int uX, int uY);
	void LBUTTONUP58(int uX, int uY);
	void LBUTTONUP61(int uX, int uY);
	void LBUTTONUP62(int uX, int uY);
	void LBUTTONUP63(int uX, int uY);
	void LBUTTONUP66(int uX, int uY);// Craft Begar
	void LBUTTONUP67(int uX, int uY);
	void LBUTTONUP68(int uX, int uY);
	void LBUTTONUP69(int uX, int uY);
	void LBUTTONUP70(int uX, int uY);// Craft 2 Tailor
	void LBUTTONUP72(int uX, int uY);
	void LBUTTONUP73(int uX, int uY);
	void LBUTTONUP74(int uX, int uY);
	void LBUTTONUP75(int uX, int uY);
	void LBUTTONUP77(int uX, int uY);
	int ReturnAtributeMoveZone(int tIndex);
	int ReturnGuardMoveNum();
	int ReturnGuardMoveZone(int a2);
	char* ReturnGuardMoveName(int mIndex);
	char* ReturnGuard2MoveName(int tZoneNumber);
	int ReturnLevelBattleZoneNumber();
	int CheckPossibleMoveLevelBattleZone();
	int ReturnLevel319ZoneNumber();
	int CheckPossibleMove319ZoneNumber();
	int ReturnZone195TypeZoneNumber();
	int ReturnZone175TypeZoneNumber();
	int CheckPossibleMoveZone175TypeZone();
	int ReturnZone267TypeZoneNumber();
	int CheckPossibleEnter267TypeZoneNumber();
	int ReturnZone241TypeZoneNumber();
	void LButtonup001();
	void LButtonup003();
	void LButtonup004();
	void LButtonup005();
	void LButtonup006();
	void LButtonup007();
	void LButtonup008();
	void LButtonup009();
	void LButtonup010();
	void LButtonup011();
	void LButtonup012();
	void LButtonup013();
	void LButtonup014();
	void LButtonup015();
	void LButtonup016();
	void LButtonup017();// Craft Skill Elder
	void LButtonup018();
	void LButtonup019();
	void LButtonup020();
	void LButtonup022();
	void LButtonup023();
	void LButtonup025();
	void LButtonup026();
	void LButtonup027();
	void LButtonup028();
	void LButtonup029();
	void LButtonup030();
	void LButtonup033();
	void LButtonup034();
	void LButtonup035();
	void LButtonup036();
	void LButtonup037();
	void LButtonup038();
	void LButtonup039();
	void LButtonup040();
	void LButtonup041();// Craft Pet Trader Nungsi 
	void LButtonup042();
	void LButtonup043();
	void LButtonup044();
	void LButtonup045();
	void LButtonup046();
	void LButtonup047();
	void LButtonup048();
	void LButtonup049();
	void LButtonup050();
	void LButtonup051();
	void LButtonup052();
	void LButtonup053();
	void LButtonup054();
	void LButtonup055();
	void LButtonup056();
	void LButtonup059();
	void LButtonup061();
	void LButtonup062();
	void LButtonup063();
	void LButtonup064();
	void LButtonup066();// Craft Begar
	void LButtonup067();
	void LButtonup068();
	void LButtonup069();
	void LButtonup070();// Craft 2 Tailor
	void LButtonup072();
	void LButtonup073();
	void LButtonup075();
	void LButtonup077();
	int ReturnGuard2MoveNum();
	int ReturnGuard2MoveZone(int mIndex);
	int ReturnZone275TypeZoneNumber();
	void ChangeTribeMasters(int tSort);
	int GetStoreItemIndex1(int uX, int uY, int tInvalidIndex);
	int GetStoreItemIndex2(int uX, int uY, int tInvalidIndex);
	int PutStoreItem1(int uX, int uY, int tItemIndex, int tQuantity, int tInvalidIndex);
	BOOL PutStoreMoney(int uX, int uY, int tInvalidIndex);
	BOOL PutSaveMoney(int uX, int uY, int tInvalidIndex);
	int PutBigStoreMoney(int uX, int uY, int tInvalidIndex);
	int PutBigSaveMoney(int uX, int uY, int tInvalidIndex);
	int GetSaveItemIndex1(int uX, int uY, int tInvalidIndex);
	int GetSaveItemIndex2(int uX, int uY, int tInvalidIndex);
	int PutSaveItem1(int uX, int uY, int tItemIndex, int tQuantity, int tInvalidIndex);
	int GetNPCShopIndex1(int uX, int uY);
	int GetNPCShopIndex2(int uX, int uY);
	int GetImproveIndex1(int uX, int uY);
	int GetImproveIndex2(int uX, int uY);
	int GetImprove2Index1(int uX, int uY);
	int GetImprove2Index2(int uX, int uY);
	int GetImprove3Index1(int uX, int uY);
	int GetImprove3Index2(int uX, int uY);
	int GetAddIndex1(int uX, int uY);
	int GetAddIndex2(int uX, int uY);
	int GetSmeltIndex1(int uX, int uY);
	int GetSmeltIndex2(int uX, int uY);
	int GetAccTransferIndex1(int uX, int uY);
	int GetAccTransferIndex2(int uX, int uY);
	int GetRequiemSmeltIndex1(int uX, int uY);
	int GetRequiemSmeltIndex2(int uX, int uY);
	int GetExchangeIndex1(int uX, int uY);
	int GetExchangeIndex2(int uX, int uY);
	int GetHighIndex1(int uX, int uY);
	int GetHighIndex2(int uX, int uY);
	int GetLegendHighIndex1(int uX, int uY);
	int GetLegendHighIndex2(int uX, int uY);
	int GetLegendImproveIndex1(int uX, int uY);
	int GetLegendImproveIndex2(int uX, int uY);
	int GetLegendImprove2Index1(int uX, int uY);
	int GetLegendImprove2Index2(int uX, int uY);
	int GetLegendEngraveIndex1(int uX, int uY);
	int GetLegendEngraveIndex2(int uX, int uY);
	int GetLowIndex1(int uX, int uY);
	int GetLowIndex2(int uX, int uY);
	int GetMakeItemIndex1(int uX, int uY);
	int GetMakeItemIndex2(int uX, int uY);
	int GetMakeBirdIndex1(int uX, int uY);
	int GetMakeBirdIndex2(int uX, int uY);
	int GetMakeSkillIndex1(int uX, int uY);
	int GetMakeSkillIndex2(int uX, int uY);
	int GetDestroyIndex1(int uX, int uY);
	int GetDestroyIndex2(int uX, int uY);
	int GetSkyImproveIndex1(int uX, int uY);
	int GetSkyImproveIndex2(int uX, int uY);
	int GetSocketExchangeIndex1(int uX, int uY);
	int GetSocketExchangeIndex2(int uX, int uY);
	int GetSocketInitIndex1(int uX, int uY);
	int GetSocketInitIndex2(int uX, int uY);
	int GetSocketJewelUpIdx1(int uX, int uY);
	int GetSocketJewelUpIdx2(int uX, int uY);
	int GetSocketJewelDeleteIdx1(int uX, int uY);
	int GetSocketJewelDeleteIdx2(int uX, int uY);
	int GetSocketAddUpIndex1(int uX, int uY);
	int GetSocketAddUpIndex2(int uX, int uY);
	int GetCloakUpIndex1(int uX, int uY);
	int GetCloakUpIndex2(int uX, int uY);
	int GetMakeG12PetIndex1(int uX, int uY);
	int GetMakeG12PetIndex2(int uX, int uY);
	int GetLegendSocketIndex1(int uX, int uY);
	int GetLegendSocketIndex2(int uX, int uY);
	int GetPetAddAbilityIndex1(int uX, int uY);
	int GetPetAddAbilityIndex2(int uX, int uY);
	int GetCashShopIndex1(int uX, int uY);
	int GetSearchBuyIndex1(int uX, int uY);
	int GetBloodShopIndex1(int uX, int uY);
	char* DrawTeleportBoardInfo(int mIndex);
	int ReturnMenuImage(int tWorkSort);
	int ReturnMoneyMoveNum();
	int ReturnMoneyMoveZoneNumber(int tIndex);
	char* ReturnMoneyMoveInfo(int tZone);
	void FourGuildMoveZone(int tZoneIndex, float tCoord[3]);
	int FourGuildZoneCoord(int tTribe, char* tGuildName, float tLocation[3]);
};
extern NPCUI mNPCUI;


class INVENUI
{
public:
	int mX;
	int mY;
	int mEquipCoord[MAX_EQUIP_SLOT_NUM][4];
	int mEquipPart[MAX_EQUIP_SLOT_NUM];
	int mTeleportZone[4][13];
	int mDungeonZone[4][14];
	int mActive;
	int mIsClick[50];
	int mInvenType;
	int mInvenSort;
	int mInvenPage;
	int mRemoveSkillPage;
	int mRemoveSkillIndex;
	int mRemoveStatIndex;
	int mChangeGenderIdx1;
	int mChangeGenderIdx2;
	int mChangeGenderIdx3;
	int mUnkA[2];
	int mPetBagState;
	int mPetBagPage;
	int mUnknown;
	int mBaguaWindowState;

	BOOL LBUTTONUP(int uX, int uY);
	BOOL Init();
	void Set();
	void InitForEnterZone();
	void Off();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);
	BOOL LBUTTONDOWN(int uX, int uY);
	BOOL CheckPossibleEquip(ITEM_INFO* tITEM, int tEquipIndex);
	BOOL RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void DrawItemInfo( int uX, int uY, int tItemIndex, int tQuantity, int tImprove, int tSort, int tSocket1, int tSocket2, int tSocket3, int tSocket4, int tSocket5, int tSort2 );
	void GetInventory1(int uX, int uY, int a5, int a6, int* tPage, int* tIndex, int* a9, int* a10, int tInvalid);
	void GetInventory2(int uX, int uY, int tItemIndex, int tItemX, int* tPage, int* tIndex, int* tXPost, int* tYPost, int tInvalidIndex);
	void PutInventory1(int uX, int uY, int tItemIndex, int tQuantity, int* tPage, int* tIndex, int* tX, int* tY, int a10);
	void PutInventory2(int tItemIndex, int* tPage, int* tIndex, int* tXPost, int* tYPost);
	BOOL PutInventoryMoney(int uX, int uY, int tItemIndex);
	int PutBigInventoryMoney(int uX, int uY, int tItemIndex);
	int GetPetInventory1(int uX, int uY, int tInvalidIndex);
	int GetPetInventory2(int uX, int uY, int tInvalidIndex);
	int SetPetInventory1(int uX, int uY, int tItemIndex, int tInvalidIndex);
	BOOL CheckSpaceFor2x2(int tPage, int uX, int uY);
	int IsFindItem1(int tSelectAvtIndex, int tItemIndex, int* tPage, int* tIndex);
	int IsFindItem2(int tItemIndex);
	void IsFindItem3(int tItemIndex, int* tPage, int* tIndex);
	int GetSocketMessage1(int tGemMode, int tGemLevel, int* sAdd, int* sAdd2);
	int GetSocketMessage2(int tGemMode, int tGemLevel, int* sAdd, int* sAdd2);
	int GetSocketMessage3(int tSort, int tValue);
	int GetEquipIndex1(int uX, int uY, int tInvalidIndex);
	int GetEquipIndex2(int uX, int uY, int tInvalidIndex);
	int GetTradeIndex1(int uX, int uY, int tInvalidIndex);
	int GetTradeIndex2(int uX, int uY, int tInvalidIndex);
	int PutTrade1(int uX, int uY, int tItemIndex, int tQuantity, int tInvalidIndex);
	int PutTradeMoney(int uX, int uY, int tItemIndex);
	int PutChangeMoneyToBigMoney(int uX, int uY, int tItemIndex);
	int PutChangeBigMoneyToMoney(int uX, int uY, int tItemIndex);
	int PutBigTradeMoney(int uX, int uY, int tItemIndex);


};
extern INVENUI mINVENUI;

class CBOXUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[2];
	float mUpdateTime;
	int mSort;
	char mMessage1[101];
	char mMessage2[101];

	BOOL Init();
	void Off();
	void InitForEnterZone();
	void Set(int tSort, char* tMessage, char* tMessage2);
	int LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	BOOL RBUTTONDOWN(int uX, int uY);
	BOOL RBUTTONUP(int uX, int uY);
	BOOL KEYBOARD();
	void Draw(int uX, int uY);
	BOOL DrawForRollOver(int uX, int uY);

};
extern CBOXUI mCBOXUI;


class CAPSULEUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mRewardPoolActive;
	int bIsClicked[14];
	int mBuySort;
	int mBuyQuantity;
	int mBuyNum;
	int mAnimationFrame;
	char mMessage1[61];
	char mMessage2[61];

	BOOL Init();
	void DrawString(char* tString);
	void Set();
	void InitForEnterZone();
	void Off();
	BOOL LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	BOOL DrawForRollOver(int uX, int uY);

};
extern CAPSULEUI mCAPSULEUI;



class STATUSUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[9];


	BOOL LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	BOOL Init();
	void Set();
	void Off();
	void InitForEnterZone();
	int DrawForRollOver(int uX, int uY);

};
extern STATUSUI mSTATUSUI;


class TRIBEVOTEUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[31];
	int mSelectIndex;
	int munkA;

	void Draw(int uX, int uY);
	BOOL Init();
	BOOL LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Off();
	void InitForEnterZone();
	void Set();
	int DrawForRollOver(int uX, int uY);
};
extern TRIBEVOTEUI mTRIBEVOTEUI;


class TRIBEBANKUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[51];
	int mSilverValue[50];

	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);
	BOOL LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Off();
	BOOL Init();
	void InitForEnterZone();
	void Set();

};
extern TRIBEBANKUI mTRIBEBANKUI;



class FRIENDUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[2];
	int mSelectIndex;
	int mZoneNumber[10];

	BOOL Init();
	void InitForEnterZone();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);
	BOOL LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Set();
	void Off();

};
extern FRIENDUI mFRIENDUI;




class PARTYUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[3];

	BOOL Init();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);
	BOOL LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void InitForEnterZone();
	void Off();
	void Set();

};
extern PARTYUI mPARTYUI;


class GAMEOPTIONUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[47];

	BOOL Init();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);
	BOOL LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Off();
	void Set();
	void InitForEnterZone();

};
extern GAMEOPTIONUI mGAMEOPTIONUI;


class BOARDUI
{
public:
	int mX;
	int mY;
	int mDisplayState[13];
	char mMessage1[13][101];
	char mMessage2[101];
	float mUpdateTime[13];

	BOOL Init();
	void Off();
	int LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Set(int tSort1, int tSort2, char* tString, char* tString2);
	void Draw(int uX, int uY);
	BOOL DrawForRollOver(int uX, int uY);
};
extern BOARDUI mBOARDUI;


class MBOXUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[1];
	int mSort;
	char mMessage1[101];
	char mMessage2[101];



	BOOL Init();
	void Set(int tSort, char* tMessage, char* tMessage2);
	void Off();
	void InitForEnterZone();
	int LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	BOOL RBUTTONDOWN(int a2, int a3);
	BOOL RBUTTONUP(int uX, int uY);
	BOOL KEYBOARD();
	void Draw(int uX, int uY);
	BOOL DrawForRollOver(int uX, int uY);
};
extern MBOXUI mMBOXUI;


class HSBRANKUI
{
public:
	int mX;
	int mY;
	int mAbilityIndex;
	int mActive;
	int mIsClick[9];

	BOOL Init();
	void InitForEnterZone();
	void Set();
	void Off();
	int LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
};
extern HSBRANKUI mHSBRANKUI;


class TOWERBUILDUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[13];
	int mSort;
	int mZoneNumber;
	int mTower[12];
	int mTowerState[12];


	BOOL Init();
	void InitForEnterZone();
	void Set(int tSort);
	void Off();
	int LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);
	BOOL WorkForTowerUpgrade(int a2);
	int WorkForTowerBuild(int tWhatTower);
	int ReturnTowerIndex(int tZoneNum);
	BOOL MapToTribeIndex(int tZoneNumber, int tTribe);

};
extern TOWERBUILDUI mTOWERBUILDUI;


class SKILLUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mAutoBuffWindow;
	int mIsClick[125];
	int mSkillLevel[40];
	int mSetState;


	BOOL Init();
	void Set(int tSort);
	void Off();
	void InitForEnterZone();
	BOOL LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);
	void DrawSkillInfo(int uX, int uY, int tSkillNum, int tSkillLevel);
	BOOL CheckPossibleActionSkill(int tSkill[2]);
	int ReturnEmoticonImageIndex(int a1);
	int GetSkillIndex1(int uX, int uY);
	int GetSkillIndex2(int uX, int uY);
	BOOL GetContinueSkillIndex(int tSkill, int tSkillGrade);

};
extern SKILLUI mSKILLUI;

class CHOICEUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick;
	int mSort;
	int mPage;
	int mIndex;
	int mItemIdx;
	int mItemX;
	int mItemY;
	int mItemQuantity;
	int mItemImprove;
	int mItemSerial;
	int mItemSocket[5];
	int mIsShift;
	int mShiftX;
	int mShiftY;
	int mPriceIdx;
	char mPrice[12];
	int munkbb;
	int mShiftSort;
	float mUpdateTime;
	int mPShopPrice;
	int mUnknown;


	BOOL Init();
	void InitForEnterZone();
	void Set(int tSort, int tPage, int tIndex, int tItemIndex, int tXPost, int tYPost, int tQuantity, int tImprove, int tRecogNum, int bIsShift, int bShiftXPost, int bShiftYPost);
	void Off();
	int LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	BOOL RBUTTONDOWN(int uX, int uY);
	BOOL RBUTTONUP(int uX, int uY);
	BOOL KEYBOARD();
	void OffForDeath();
	void NetworkOK();
	void NetworkNO();
	void InitForPick();
	void InitForDown();
	void Draw(int uX, int uY);
	BOOL DrawForRollOver(int uX, int uY);
};
extern CHOICEUI mCHOICEUI;


class PSHOPUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[7];
	int mPShopSort;
	char mAvatarName[13];
	PSHOP_INFO mPShopInfo;
	int mPage;
	int mIndex;
	int mPriceIdx;
	char mPrice[12];
	int mMoney;
	int mMoney2;
	int mDisplaySort;
	int mMenuSort;
	int ccc;

	BOOL Init();
	void InitForEnterZone();
	void Set();
	void Off(int tSort, char* tAvatarName, DWORD mUniqueNumber);
	int LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	BOOL RBUTTONDOWN(int uX, int uY);
	BOOL RBUTTONUP(int uX, int uY);
	BOOL KEYBOARD();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);
	void InitForInputPrice(int tIndex);
	int GetPShopIndex1(int uX, int uY, int tInvalidIndex);
	int GetPShopIndex2(int uX, int uY, int tInvalidIndex);
	int PutPShop1(int uX, int uY, int tItemIndex, int tQuantity, int tInvalidIndex);
	BOOL CheckPossiblePShopRegion(int tTribe, int tZoneNumber, float tCoord[3]);
	BOOL CheckPossibleDeputyPShopRegion(int tTribe, int tZoneNumber, float tCoord[3]);
	void DeputyPShopSubReset();

};
extern PSHOPUI mPSHOPUI;


class QUESTUI
{
public:
	int mX;
	int mY;
	QUEST_INFO* mDATA;
	int mActive;
	int mIsClick[4];


	BOOL Init();
	void Set(int tSort);
	void Off();
	void InitForEnterZone();
	void Draw(int uX, int uY);
	int LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	BOOL DrawForRollOver(int uX, int uY);

};
extern QUESTUI mQUESTUI;


class GUILDUI
{
public:
	int mX;
	int mY;
	GUILD_INFO mGuildInfo;
	int mGuildOnlineState[50];
	int mActive;
	int mIsClick[26];
	int mWorkSort;
	int mGuildPage;
	int mSelectIndex;
	int mGuildFreeSlot;
	int mFindIndex;
	char mGuildNotice[4][51];
	int mAppointSort;
	char mSelectAvatarName[13];
	char mCallName[5];
	int mMarkNum;
	int mMarkState[1000];
	char mMarkGuildName[1000][13];
	int mMarkFrame[1000][14];
	int mUnknown;


	 BOOL Init();
	 void InitForEnterZone();
	 void SetWithGuildInfo();
	 void Set();
	 void Off();
	 BOOL LBUTTONDOWN(int uX, int uY);
	 int LBUTTONUP(int uX, int uY);
	 int RBUTTONDOWN(int uX, int uY);
	 int RBUTTONUP(int uX, int uY);
	 int KEYBOARD();
	 void Draw(int uX, int uY);
	 int DrawForRollOver(int uX, int uY);
	 void CalculatePresentMemberNum();
	 void ProcessMemberConnectInfo();
	 void ProcessForGuildNotice();

};
extern GUILDUI mGUILDUI;


class TRIBENOTICEUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[1];


	BOOL Init();
	void Set();
	void InitForEnterZone();
	void Off();
	BOOL LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	void ProcessForTribeNotice();
	int DrawForRollOver(int uX, int uY);

};
extern TRIBENOTICEUI mTRIBENOTICEUI;


class AUTOUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[5];



	BOOL Init();
	void Set();
	void InitForEnterZone();
	void Off();
	BOOL LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);
	void ProcessForAuto();

};
extern AUTOUI mAUTOUI;


// Class of ANIMALUI

class ANIMALUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[25];
	int mAnimalAbilityWindow;

	
	BOOL Init();
	void InitForEnterZone();
	void Set();
	void Off();
	int LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);
	void Up(int tSort);
	void Down(int tSort);
	void Delete(int tSort);

};
extern ANIMALUI mANIMALUI;


class COSTUMEUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[5];


	BOOL Init();
	void InitForEnterZone();
	void Set();
	void Off();
	BOOL LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);
	void Up(int tSort);
	void Down(int tSort);

};
extern COSTUMEUI mCOSTUMEUI;



class BONUSUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[2];



	BOOL Init();
	void InitForEnterZone();
	void Set();
	void Off();
	BOOL LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);

};
extern BONUSUI mBONUSUI;


class HOISUNDO_UI
{
public:
	int mX;
	int mY;
	int mRegCount[4][3];
	int mActive;
	int mIsClick[3];


	BOOL Init();
	void InitForEnterZone();
	void Set();
	void Off();
	int LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);

};
extern HOISUNDO_UI mHOISUNDO_UI;


class GUILD_RANKING_UI
{
public:
	int mX;
	int mY;
	char mGuildName[92];
	int mActive;
	int mIsClick;



	BOOL Init();
	void InitForEnterZone();
	void Set();
	void Off();
	int IsChallengeGuildName(int tSort, char* tGuildName);
	void SetChallengeGuildName(int tPos, char* tGuildName);
	int LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);

};
extern GUILD_RANKING_UI mGUILD_RANKING_UI;


class FACTIONNOTICEUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[2];


	BOOL Init();
	void Set();
	void InitForEnterZone();
	BOOL LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);
	void SetEditBox();
	void GetEditBoxText();

};
extern FACTIONNOTICEUI mFACTIONNOTICEUI;


class TRIBESKILL
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[3];
	int mSelectIndex;


	BOOL Init();
	void InitForEnterZone();
	void Set();
	void Off();
	BOOL LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);

};
extern TRIBESKILL mTRIBESKILL;


// Class of BOOZEUI
class BOOZEUI
{
public:
	int mX;
	int mY;
	COORD_TABLE mCoord[9];
	int mActive;
	int mIsClick[4];


	BOOL Init();
	int ReturnXCoord(int tDataNum);
	int ReturnYCoord(int tDataNum);
	void InitForEnterZone();
	void Set();
	void Off();
	void Draw(int uX, int uY);
	BOOL LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	int DrawForRollOver(int uX, int uY);
	void UseBooze(int tSort, int tSort2);

};
extern BOOZEUI mBOOZEUI;

// Class of NEWSKILLUI
class SPECIALSKILL
{
public:
	int mX;
	int mY;
	COORD_TABLE mCoord[12];
	int mActive;
	int mSort;
	int mIsClick[4];


	BOOL Init();
	int ReturnXCoord(int tDataNum);
	int ReturnYCoord(int tDataNum);
	void InitForEnterZone();
	void Set(int tSort);
	void Off();
	void Draw(int uX, int uY);
	BOOL LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void CheckSkill(int a1);
	int DrawForRollOver(int uX, int uY);

};
extern SPECIALSKILL mSPECIALSKILL;


class HELPUI
{
public:
	int mX;
	int mY;
	int mActive;
	int aa;
	float bb;
	float mUpdateTime;
	float dd;
	int mIsClick[6];
	int mHelpConditionEffectIndex;
	int ee;


	BOOL Init();
	void InitForEnterZone();
	void Set();
	void Off();
	void Draw(int uX, int uY);
	int LBUTTONDOWN(int uX, int uY);
	BOOL LBUTTONUP(int uX, int uY);
	BOOL RBUTTONDOWN(int uX, int uY);
	BOOL RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	BOOL DrawForRollOver(int uX, int uY);
	void ProcessForSearchHelp();

};
extern HELPUI mHELPUI;


class TRIBEUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[1];


	BOOL Init();
	void InitForEnterZone();
	void Set();
	void Off();
	BOOL LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);

};
extern TRIBEUI mTRIBEUI;



class AVATARUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[9];
	int mState;
	char mAvatarName[13];
	int mLevel1;
	int mLevel2;
	int mTribe;



	BOOL Init();
	void InitForEnterZone();
	void Set(char* tName, int tLevel1, int tLevel2, int tTribe);
	void Off();
	int LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	BOOL RBUTTONDOWN(int uX, int uY);
	BOOL RBUTTONUP(int uX, int uY);
	BOOL KEYBOARD();
	void Draw(int uX, int uY);
	BOOL DrawForRollOver(int uX, int uY);
	BOOL CheckProcessAvatarExist();
	BOOL CheckProcessAvatarParty();
	BOOL CheckProcessAvatarGuild();

};
extern AVATARUI mAVATARUI;


// Class of TRADEUI

class TRADEUI
{
public:
	int mX;
	int mY;
	char mAvatarName[13];
	int mLevel;
	int mActive;
	int mIsClick[2];
	int mTradeMoney;
	int mTradeItem[8][4];
	int mTradeSocket[8][5];
	int mOwnTradeState;
	int mOtherTradeState;
	int mTradeMoney2;

	BOOL Init();
	void InitForEnterZone();
	void Set(int tTradeMoney, int tTrade[8][4], int tTradeSocket[8][5], int tTradeMoney2);
	void Off(int tSort);
	int LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	BOOL RBUTTONDOWN(int uX, int uY);
	BOOL RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);
	int GetTradeIndex0(int uX, int uY, int tIndex);

};
extern TRADEUI mTRADEUI;


class HERORANKUI
{
public:
	int mX;
	int mY;
	int mActive;
	int mIsClick[2];


	BOOL Init();
	void Set();
	void Off();
	void InitForEnterZone();
	int LBUTTONDOWN(int uX, int uY);
	int LBUTTONUP(int uX, int uY);
	int RBUTTONDOWN(int uX, int uY);
	int RBUTTONUP(int uX, int uY);
	int KEYBOARD();
	void Draw(int uX, int uY);
	int DrawForRollOver(int uX, int uY);

};
extern HERORANKUI mHERORANKUI;