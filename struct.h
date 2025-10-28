#ifndef H_STRUCTS
#define H_STRUCTS

#define PROGRAM_LOGIN_VERSION				90959
#define MAX_USER_ID_LENGTH					14
#define MAX_USER_PASSWORD_LENGTH			33
#define MAX_MOUSE_PASSWORD_LENGTH			5
#define MAX_USER_AVATAR_NUM					3
#define WM_USER_NEW                         10
#define WM_NETWORK_MESSAGE_1				WM_USER_NEW + 1
#define MAX_AVATAR_EFFECT_SORT_NUM			38
#define MAX_LEGENDARY_EFFECT_SORT_NUM		24
#define MAX_AVATAR_NAME_LENGTH				13
#define MAX_LIMIT_LEVEL_NUM					145
#define MAX_LIMIT_HIGH_LEVEL_NUM			12
#define MAX_ITEM_TYPE						8
#define MAX_ITEM_SORT						36
#define MAX_NUMBER_SIZE						2000000000
#define MIN_VALID_ZONE_NUMBER				1
#define MAX_VALID_ZONE_NUMBER				350
#define MAX_TRIBE4_QUEST_NAME_LENGTH		13
#define MAX_GUILD_NAME_LENGTH				13
#define MAX_TRIBE_VOTE_AVATAR_NUM			10
#define MAX_TRIBE_SUBMASTER_NUM				12
#define MAX_EQUIP_SLOT_NUM					21
#define MAX_ITEM_DUPLICATION_NUM			99//99
#define MAX_BLOODSTORE_PAGE_NUM				5
#define MAX_CHAT_CONTENT_LENGTH				61
#define MAX_MESSAGE_NUM						4000
#define MAX_ZONE_NUM						350
#define MAX_ZONE_NAME						51//21
#define MAX_EDITBOX_NUM						21

#define MAX_UI_NUM							4600
#define MAX_ITEM_ICON_NUM					9000//3600
#define MAX_SKILL_ICON_NUM					800
#define MAX_SKILL_INFO_NUM					312
#define MAX_HELP_UI_NUM						999
#define MAX_TRIBE_NUM						3
#define MAX_GENDER_NUM						2
#define MAX_BUFF_ICON_NUM					35
#define MAX_MAPLOAD_UI_NUM					MAX_VALID_ZONE_NUMBER
#define MAX_CHARACTER_MODEL_NUM				1000//511
#define MAX_AVATAR_TYPE_NUM					8
#define MAX_AVATAR_MOTION_SORT_NUM			128
#define MAX_SKILL_ATTACK_EFFECT_NUM			511
#define MAX_SKILL_EFFECT_NUM				35
#define MAX_MONSTER_MODEL_NUM				336
#define MAX_MONSTER_SORT_NUM				21
#define MAX_MONSTER_SOUND_NUM				291
#define MAX_AVATAR_SKILL_EFFECT_NUM			35
#define MAX_WEAPON_2D_NUM					57
#define MAX_NPC_MODEL_NUM					66
#define MAX_PET_MODEL_NUM					65
#define MAX_CAPE1_MODEL_NUM					25
#define MAX_CAPE2_MODEL_NUM					8
#define MAX_MOUNT_MODEL_NUM					52
#define MAX_COSTUME_MODEL_NUM				41
#define MAX_MOBJECT_MODEL3_NUM				300//246


typedef struct
{
	int aVisibleState;
	int aSpecialState;
	int aPlayTime1;
	int aPlayTime2;
	int aKillOtherTribe;
	char aName[MAX_AVATAR_NAME_LENGTH];
	int aTribe;
	int aPreviousTribe;
	int aGender;
	int aHeadType;
	int aFaceType;
	int aLevel1;
	int aLevel2;
	int aGeneralExperience1;
	int aGeneralExperience2;
	int aVit;
	int aStr;
	int aInt;
	int aDex;
	int aEatLifePotion;
	int aEatManaPotion;
	int aStateBonusPoint;
	int aSkillPoint;
	int aEquip[MAX_EQUIP_SLOT_NUM][4];
	int aExpandInventoryDate;
	int aMoney;
	int aInventory[2][64][6];
	int aTradeMoney;
	int aTrade[8][4];
	int aExpandStoreDate;
	int aStoreMoney;
	int aStoreItem[2][28][4];
	int aSkill[40][2];
	int aHotKey[3][14][3];
	int aQuestInfo[5];
	char aFriend[10][13];
	char aTeacher[13];
	char aStudent[13];
	int aTeacherPoint;
	char aGuildName[13];
	int aGuildRole;
	char aCallName[5];
	int aGuildMarkNum;
	int aGuildMarkEffect;
	int aLogoutInfo[6];
	int aProtectForDeath;
	int aProtectForDestroy;
	int aDoubleExpTime1;
	int aDoubleExpTime2;
	int aDoubleKillNumTime;
	int aDoubleKillExpTime;
	int aNineTowerKeyNum;
	int aZone101TypeTime;
	int aZone125TypeTime;
	int aZone126TypeTime;
	int aKillMonsterNum;
	int aKillMonsterNum2;
	int iKill_Monster_Count;
	int aSearchAndBuyDate;
	int aLifePotionConvertNum;
	int aChiPotionConvertNum;
	int aTribeVoteDate;
	int aAutoLifeRatio;
	int aAutoChiRatio;
	int aEatStrengthPotion;
	int aEatAgilityPotion;
	int aAnimal[10];
	int aAnimalIndex;
	int aAnimalTime;
	int aLuckyCombine;
	int aLuckyUpgrade;
	int aLuckyDrop;
	int aTitle;
	int aExtinctionScroll;
	int aUpgradeValue;
	int aBeginnerPackageIcon;
	int aCapsuleOnlineTime;
	int aCapsulePVPPoint;
	int aCPProtectionCharm;
	int iUseOrnament;
	int iSilverOrnamentRemainsTime;
	int aIslandOfBloodTime;
	int aIslandOfSoul1Time;
	int aIslandOfSoul2Time;
	int aIslandOfSoul3Time;
	int aIslandOfSoul4Time;
	int aIslandOfSoul5Time;
	int aIslandOfSoul6Time;
	int aRebirth;
	int aLifeOrDeath;
	int aUltimateTicket;
	int iGoldOrnamentRemainsTime;
	int aDoubleIslandOfBloodTimeUse;
	int aSoulBoost;
	int aRegistrationTicket;
	int aRegistration;
	int aPCCafeOnlineTimeToMerit;
	int aDoubleBuffTime;
	int aExpPill;
	int aFactionReturnScroll;
	int aPat_Exp_x2_Time;
	int aDoubleKillNumTime2;
	int uSaveMoney;
	int uSaveItem[28][4];
	char aPartyName[MAX_AVATAR_NAME_LENGTH];
	int aCostume[10];
	int aTimedCostumeInventory[10];
	int aCostumeIndex;
	int aDamageBoostScroll;
	int aHealthBoostScroll;
	int aCriticalBoostScroll;
	int aAutoBuffScroll;
	int aAutoBuffScrollSkillSlots[8][2];
	int aCitadelTicket;
	int aTimeEffectTime;
	int aTimeEffect;
	int aTimeEffect2;
	int aInventorySocket[2][64][5];
	int aEquipSocket[21][5];
	int aTradeSocket[8][5];
	int aStoreSocket[2][28][5];
	int aSaveSocket[28][5];
	int aAutoHunt7Day;
	int aAutoHunt5Hour;
	int aAutoHuntState;
	int aAutoHuntUNK;
	int aAutoHuntData[8][2];
	int aStandStillOrMovingHunt;
	int aAutoSkillAttack[2][2];
	int aNumberOfMonsters;
	int aItemPickUp;
	int aInsufficientBag;
	int aActUponDeath;
	int aTakePetFood;
	int aTakeMountFood;
	int aMoney2;
	int aTradeMoney2;
	int aStoreMoney2;
	int uSaveMoney2;
	int aEatElementAtkDefPotion;
	int aIvyHallTimeR12;
	int aPreventRefineBreak;
	int aEvergreenPalaceTime;
	int aUnsealCharm;
	int aPK;
	int aHeavenlyWarTicket;
	int aTevushiRoad;
	int aIvyHallFishing;
	int aIvyHallRequirementStruct;
	int aProxyShopTime;
	int aMaxHPElixirEatState;
	int aMaxMPElixirEatState;
	int aMaxStrElixirEatState;
	int aMaxAgiElixirEatState;
	int aRankPoints;
	int aRankAbility;
	int aFactionNoticeScroll;
	int aAnimalExpActivity[10];
	int aAnimalAbilityStats[10];
	int aDoubleMountExpTime;
	int aVigilanteScroll;
	int aMountAbsorbTime;
	int aAbsorbState;
	int aCapsuleMallPoints;
	int aFuryCount;
	int aFuryEffectDuration;
	int aFuryState;
	int aRageBurstPill;
	int aDoubleRageGain;
	int aWarriorScroll;
	int aHeroPill;
	int aWingProtectionScroll;
	int aPreventImproveDown;
	int aPetInventoryDate;
	int aPetInventoryData[20];
	int aDailyWarCount;
	int aDailyPVPCount;
	int aDailyPVMKillCount;
	int aDailyOnlineTime;
	int aHeavenlyOrderCharm;
	int aDiamondPill;
	int aTheFortressTime;
	int aWineBottle[10];
	int aWineBottle1Quantity[10];
	int aWineDrinkIndex;
	int aActiveBoozeTime;
	int aCombineSkills[2][14];
	int aNewSkillsState;
	int aLimitedDungeonTicket;
	int aSecretSkillState;
	int aSecretSkillCooldown;
	int aPremiumService;
	int aLunaCharm;
	int aLoginEventClaimState;
	int aLoginGameWebMallPoints;
	int aAttrDungeonTicket;
	int aMountPenglai;
	int aLegendSetPassiveSocketBuffState[6];
	int aCheonganbu;
	int aLegendSetSkillForMount;
	int aHornVeinUnlockCount;
	int aHornVeinShield;
	int aLegendaryCostume[10];
	int aSoulCostumeCapsulePoint;
	int aMetastatisLevel;
	int aMetastatisVit;
	int aMetastatisInt;
	int aMetastatisStr;
	int aMetastatisDex;
	int aHwangoldan;
	int aSungoldan;
	int aThousandMoonBuff;
	int aMetastatisVitOrb;
	int aMetastatisIntOrb;
	int aMetastatisStrOrb;
	int aMetastatisDexOrb;
	int aWolcheonTime;
	int aCheonhadoHallTime;
	int aSkillUpgradePoints;

	int aRebatePoint;
	int aEnchantTalisman;
	int aEnchantTalismanSP;
	int aWingEnchantTalisman;
#ifdef CONSTELLATION
	int aConstellation[10];
#endif
}
AVATAR_INFO;

typedef struct
{
	int 	aType;
	int 	aSort;
	float 	aFrame;
	float 	aLocation[3];
	float 	aTargetLocation[3];
	float 	aFront;
	float 	aTargetFront;
	int 	aTargetObjectSort;
	int 	aTargetObjectIndex;
	DWORD 	aTargetObjectUniqueNumber;
	int 	aSkillNumber;
	int 	aSkillGradeNum1;
	int 	aSkillGradeNum2;
	int 	aSkillValue;
}
ACTION_INFO;

typedef struct
{
	int aVisibleState;
	int aSpecialState;
	int aKillOtherTribe;
	int aGuildMarkNum;
	char aGuildName[MAX_GUILD_NAME_LENGTH];
	int aGuildRole;
	char aCallName[5];
	int aGuildMarkEffect;
	char aName[MAX_AVATAR_NAME_LENGTH];
	int aTribe;
	int aPreviousTribe;
	int aGender;
	int aHeadType;
	int aFaceType;
	int aLevel1;
	int aLevel2;
	int aEquipForView[13][2];
	int aAnimalNumber;
	int aTitle; // 1-12 / 101-112 / 201-212 / 301-312 / 401-412
	int aHalo;
	int aRebirth;
	int aZone270TypeBattleTeam;
	ACTION_INFO aAction;
	int aMaxLifeValue;
	int aLifeValue;
	int aMaxManaValue;
	int aManaValue;
	int	aKRUnknown;
	int	aHornVeinShield;
	int aEffectValueForView[MAX_AVATAR_EFFECT_SORT_NUM];
	char aPartyName[MAX_AVATAR_NAME_LENGTH];
	int aDuelState[3];
	int aPShopState;
	char aPShopName[28];
	int aFashionNumber;
	int aGuildBuff;
	int aBuffSort;
	int aAutoHuntState;
	int mFishingState;
	int mFishingStep;
	float mFishingLocation[3];
	int aRankPoint;
	int aArrow;
	int aAnimalAbsorbState;
	int mPartState;
	int mPartAttack;
	int mPartAttackSort;
	float mPartBulletLocation[3];
	float mPartFrame;
	int mSpecialSkillState;
	int aSecretSkillState;
	int aSecretSkillCooldown;
	int aCostumeHide;
}
OBJECT_FOR_AVATAR;

typedef struct
{
	int mCase;
	int mServerIndex1;
	DWORD mUniqueNumber1;
	int mServerIndex2;
	DWORD mUniqueNumber2;
	float mSenderLocation[3];
	int mAttackActionValue1;
	int mAttackActionValue2;
	int mAttackActionValue3;
	int mAttackActionValue4;
	int mAttackResultValue;
	int mAttackCriticalExist;
	int mAttackElementDamage;
	int mAttackViewDamageValue;
	int mAttackRealDamageValue;
	int mPitifulStrikeValue;
	int mNewAttackValue;
	int mNewAttackValue1;
	int mSpiritDamage;
}
ATTACK_FOR_PROTOCOL;

typedef struct
{
	int lIndex;
	int lRangeInfo[3];
	int lAttackPower;
	int lDefensePower;
	int lAttackSuccess;
	int lAttackBlock;
	int lElementAttack;
	int lLife;
	int lMana;
}
LEVEL_INFO;

typedef struct
{
	int iIndex;
	char iName[25];
	char iDescription[3][51];
	char iEmpty[2];
	int iType;
	int iSort;
	int iDataNumber2D;
	int iDataNumber3D;
	int iAddDataNumber3D;
	int iLevel;
	int iMartialLevel;
	int iEquipInfo[2];
	int iBuyCost;
	int iSellCost;
	int iBuyCPCost;
	int iLevelLimit;
	int iMartialLevelLimit;
	int iCheckMonsterDrop;
	int iCheckNPCSell;
	int iCheckNPCShop;
	int iCheckAvatarDrop;
	int iCheckAvatarTrade;
	int iCheckAvatarShop;
	int iCheckImprove;
	int iCheckHighImprove;
	int iCheckHighItem;
	int iCheckLowItem;
	int iCheckExchange;
	int iCheckItemSet;
	int iCheckExpire;
	int iCheckPossibleDestroy;
	int iStrength;
	int iWisdom;
	int iVitality;
	int iKi;
	int iLuck;
	int iAttackPower;
	int iDefensePower;
	int iAttackSucess;
	int iAttackBlock;
	int iElementAttackPower;
	int iElementDefensePower;
	int iCritical;
	int iPotionType[2];
	int iGainSkillNumber;
	int iLastAttackBonusInfo[2];
	int iCapeInfo[3];
	int iBonusSkillInfo[8][2];
	int iCheckPossibleUpgradeValue;
}
ITEM_INFO;

typedef struct
{
	int iIndex;
	char iName[25];
	char iDescription[3][51];
	char iEmpty[2];
	int iType;
	int iSort;
	int iDataNumber2D;
	int iDataNumber3D;
	int iAddDataNumber3D;
	int iLevel;
	int iMartialLevel;
	int iEquipInfo[2];
	int iBuyCost;
	int iSellCost;
	int iBuyCPCost;
	int iLevelLimit;
	int iMartialLevelLimit;
	int iCheckMonsterDrop;
	int iCheckNPCSell;
	int iCheckNPCShop;
	int iCheckAvatarDrop;
	int iCheckAvatarTrade;
	int iCheckAvatarShop;
	int iCheckImprove;
	int iCheckHighImprove;
	int iCheckHighItem;
	int iCheckLowItem;
	int iCheckExchange;
	int iCheckItemSet;
	int iCheckExpire;
	int iCheckPossibleDestroy;
	int iStrength;
	int iWisdom;
	int iVitality;
	int iKi;
	int iLuck;
	int iAttackPower;
	int iDefensePower;
	int iAttackSucess;
	int iAttackBlock;
	int iElementAttackPower;
	int iElementDefensePower;
	int iCritical;
	int iPotionType[2];
	int iGainSkillNumber;
	int iLastAttackBonusInfo[2];
	int iCapeInfo[3];
	int iBonusSkillInfo[8][2];
	int iCheckPossibleUpgradeValue;
}
ITEM_INFO_NEW;

typedef struct
{
	int sManaUse;
	int sRecoverInfo[2];
	int sStunAttack;
	int sStunDefense;
	int sFastRunSpeed;
	int sAttackInfo[3];
	int sRunTime;
	int sChargingDamageUp;
	int sAttackPowerUp;
	int sDefensePowerUp;
	int sAttackSuccessUp;
	int sAttackBlockUp;
	int sElementAttackUp;
	int sElementDefenseUp;
	int sAttackSpeedUp;
	int sRunSpeedUp;
	int sShieldLifeUp;
	int sLuckUp;
	int sCriticalUp;
	int sReturnSuccessUp;
	int sStunDefenseUp;
	int sDestroySuccessUp;
}
GRADE_INFO_FOR_SKILL;

typedef struct
{
	int sIndex;
	char sName[25];
	char sDescription[10][51];
	char sEmpty[1];
	int sType;
	int sAttackType;
	int sDataNumber2D;
	int sTribeInfo[2];
	int sLearnSkillPoint;
	int sMaxUpgradePoint;
	int sTotalHitNumber;
	int sValidRadius;
	GRADE_INFO_FOR_SKILL sGradeInfo[2];
	int sIsUsingProtect;
	int sProtectValue;
} 
SKILL_INFO;

typedef struct
{
	int sIndex;
	char sName[25];
	char sDescription[10][51];
	char sEmpty[1];
	int sType;
	int sAttackType;
	int sDataNumber2D;
	int sTribeInfo[2];
	int sLearnSkillPoint;
	int sMaxUpgradePoint;
	int sTotalHitNumber;
	int sValidRadius;
	GRADE_INFO_FOR_SKILL sGradeInfo[2];
	int sIsUsingProtect;
	int sProtectValue;
} 
SKILL_INFO_NEW;

typedef struct
{
	int mIndex;
	char mName[25];
	char mChatInfo[2][101];
	char mEmpty[1];
	int mType;
	int mSpecialType;
	int mDamageType;
	int mDataSortNumber3D;
	int mSize[4];
	int mSizeCategory;
	int mCheckCollision;
	int mFrameInfo[6];
	int mTotalHitNum;
	int mHitFrame[3];
	int mTotalSkillHitNum;
	int mSkillHitFrame[3];
	int mBulletInfo[2];
	int mSummonTime[2];
	int mItemLevel;
	int mMartialItemLevel;
	int mRealLevel;
	int mMartialRealLevel;
	int mGeneralExperience;
	int mPatExperience;
	int mLife;
	int mAttackType;
	int mRadiusInfo[2];
	int mWalkSpeed;
	int mRunSpeed;
	int mDeathSpeed;
	int mAttackPower;
	int mDefensePower;
	int mAttackSuccess;
	int mAttackBlock;
	int mElementAttackPower;
	int mElementDefensePower;
	int mCritical;
	int mFollowInfo[2];
	int mNewKRInfo;
	int mDropMoneyInfo[3];
	int mDropPotionInfo[5][2];
	int mDropItemInfo[12];
	int mDropQuestItemInfo[2];
	int mDropExtraItemInfo[50][2];
}
MONSTER_INFO;

typedef struct
{
	int nIndex;
	char nName[28];
	int nSpeechNum;
	char nSpeech[5][5][51];
	char nEmpty[1];
	int nTribe;
	int nType;
	int nDataSortNumber2D;
	int nDataSortNumber3D;
	int nSize[3];
	int nMenu[100];
	int nShopInfo[3][28];
	int nSkillInfo1[3][8];
	int nSkillInfo2[3][3][3][8];
	int nGambleCostInfo[145][15];
}
NPC_INFO;

typedef struct
{
	int mZone038WinTribe;
	int mZone038WinDate;
	int mTribeSymbolBattle;
	int mTribe1Symbol;
	int mTribe2Symbol;
	int mTribe3Symbol;
	int mTribe4Symbol;
	int mMonsterSymbol;
	int mMonsterSymbolDate;
	int mTribePoint[4];
	int mTribeCloseInfo[2];
	int mPossibleAllianceInfo[4][2];
	int mAllianceState[2][2];
	int mTribeVoteState[4];
	int mCloseVoteState[4];
	int mTribe4QuestDate;
	int mTribe4QuestState;
	char mTribe4QuestName[13];
	int mZone049TypeState[13];
	int mZone049TypeStateTime[13];
	int mZone051TypeState[6];
	int mZone051TypeStateTime[6];
	int mZone053TypeState[10];
	int mZone053TypeStateTime[10];
	int mZone175TypeState[4][8];
	int mTribeGuardState[4][4];
	int mZone194State;
	int mValleyOfDeacesedState[3];
	int mValleyOfDeacesedStartState[3];
	float mTribeGeneralExperienceUpRatioInfo[4];
	float mTribeItemDropUpRatioInfo[4];
	float mTribeItemDropUpRatioForMyoungInfo[4];
	int mTribeKillOtherTribeAddValueInfo[4];
	int mTribeMasterCallAbility[4];
	int mZone267TypeState[3];
	int mLifeOrDeathState[20];
	int mZone270TypeState[5];
	int mFortressOfLostSoulState;
	char mHoldingGuild[13];
	char mChallangeGuild[13];
	char mGuildRankName[3][13];
	int mGuildRankPoints[3];
	int mValleyOfTearsState;
	int mBigFourGuildState[4];
	char mBigForGuildName[4][4][13];
	char mBigFourGuildForChallenge[4][13];
	int mZone200TypeState;
	int mFullmoonGroundsState[4];
	int mGoldenMoonTempleState;
	int mProvingGroundsPoint[4];
	int mProvingGroundsState[4];
	int mZone319TypeState[5];
	int mRainWaterHeavenState1;
	int mRainWaterHeavenState2;
}
WORLD_INFO;

typedef struct
{
	char mTribeVoteName[4][MAX_TRIBE_VOTE_AVATAR_NUM][MAX_AVATAR_NAME_LENGTH];
	int mTribeVoteLevel[4][MAX_TRIBE_VOTE_AVATAR_NUM];
	int mTribeVoteKillOtherTribe[4][MAX_TRIBE_VOTE_AVATAR_NUM];
	int mTribeVotePoint[4][MAX_TRIBE_VOTE_AVATAR_NUM];
	char mTribeMaster[4][MAX_AVATAR_NAME_LENGTH];
	char mTribeSubMaster[4][MAX_TRIBE_SUBMASTER_NUM][MAX_AVATAR_NAME_LENGTH];
	char mValleyOfDeceasedRegistrationLevel[4][5][13];
	char mValleyOfDeceasedRegistrationMaster[4][5][13];
	char mValleyOfDeceasedRegistrationGod[4][5][13];
}
TRIBE_INFO;

typedef struct
{
	int iIndex;
	int iQuantity;
	int iValue;
	int iItemRecognitionNumber;
	float iLocation[3];
	char iMaster[13];
	char iPartyName[13];
	int iPartyState;
	DWORD iCreateTime;
	DWORD iPresentTime;
	int iCreateState;
	int iSocket[5];
}
OBJECT_FOR_ITEM;


typedef struct
{
	int mIndex;
	ACTION_INFO mAction;
	int mLifeValue;
}
OBJECT_FOR_MONSTER;


typedef struct
{
	int iIndex;
	int iX;
	int iY;
	int iQuantity;
	int iImproveState;
	int iSerialNumber;
	int iSocket[5];
}
NPCINVUI;

typedef struct 
{
	int sGemMode;
	int sUnknown;
	int sGemLevel;
	int sAdd;
	int sAdd2;
}
SOCKET_INFO;

typedef struct
{
	DWORD mUniqueNumber;
	char mName[25];
	int mItemInfo[5][5][9];
	int mItemSocket[5][5][5];
}
PSHOP_INFO;

typedef struct
{
	char gName[13];
	int gGrade;
	char gMaster01[13];
	char gSubMaster01[13];
	char gSubMaster02[13];
	char gMemberName[50][13];
	int gMemberRole[50];
	char gMemberCall[50][5];
	char gNotice[4][51];
	int gScore1;
	int gPoints;
	int gBuffEffectTime;
	int gBuffSort;
	int gMasterEntrustDate;
}
GUILD_INFO;

typedef struct
{
	float tShopLocation[3];
	char tShopAvatarName[13];
	char tShopName[25];
}
OBJECT_FOR_DEPUTYSHOP;

typedef struct
{
	char mAvatarName[13];
	int mItemInfo[5][5][5];
	int mItemSocket[5][5][5];
	int mMoney;
	int mMoney2;
}
PROXY_INFO;

typedef struct
{
	int hIndex;
	char hKeyword[5][13];
	int hTribe;
	int hLevel;
	int h2DImage;
}
HELP_INFO;

typedef struct
{
	int qIndex;
	char qSubject[51];
	int qCategory;
	int qStep;
	int qLevel;
	int qType;
	int qSort;
	int qSummonInfo[4];
	int qStartNPCNumber;
	int qKeyNPCNumber[5];
	int qEndNPCNumber;
	int qSolution[4];
	int qReward[3][2];
	int qNextIndex;
	char qStartSpeech[15][51];
	int qStartSpeechColor[15];
	char qHurrySpeech[15][51];
	int qHurrySpeechColor[15];
	char qProcessSpeech1[15][51];
	int qProcessSpeech1Color[15];
	char qProcessSpeech2[15][51];
	int qProcessSpeech2Color[15];
	char qProcessSpeech3[15][51];
	int qProcessSpeech3Color[15];
	char qProcessSpeech4[15][51];
	int qProcessSpeech4Color[15];
	char qProcessSpeech5[15][51];
	int qProcessSpeech5Color[15];
	char qSuccessSpeech[15][51];
	int qSuccessSpeechColor[15];
	char qFailureSpeech[15][51];
	int qFailureSpeechColor[15];
	char qCallSpeech[15][51];
	int qCallSpeechColor[15];
}
QUEST_INFO;

typedef struct
{
	char mAvatarName[4][10][MAX_AVATAR_NAME_LENGTH];
	int mAvatarPoint[4][10];
}
HERO_RANKING_INFO;

typedef struct
{
	BYTE data[108];
}
LOADER_THREAD;

typedef struct
{
	int tDataNum;
	int sX;
	int sY;
}
COORD_TABLE;

#pragma pack(push, 1)

typedef struct
{
	UINT8  HdrLength : 4;
	UINT8  Version : 4;
	UINT8  TOS;
	UINT16 Length;
	UINT16 Id;
	UINT16 FragOff0;
	UINT8  TTL;
	UINT8  Protocol;
	UINT16 Checksum;
	UINT32 SrcAddr;
	UINT32 DstAddr;
} 
WINDIVERT_IPHDR, * PWINDIVERT_IPHDR;

typedef struct
{
	UINT16 SrcPort;
	UINT16 DstPort;
	UINT32 SeqNum;
	UINT32 AckNum;
	UINT16 Reserved1 : 4;
	UINT16 HdrLength : 4;
	UINT16 Fin : 1;
	UINT16 Syn : 1;
	UINT16 Rst : 1;
	UINT16 Psh : 1;
	UINT16 Ack : 1;
	UINT16 Urg : 1;
	UINT16 Reserved2 : 2;
	UINT16 Window;
	UINT16 Checksum;
	UINT16 UrgPtr;
}
WINDIVERT_TCPHDR, * PWINDIVERT_TCPHDR;

#pragma pack(pop)


// PACKET DEFINITION

#define P_REGISTER_AVATAR_SEND	12
#define S_REGISTER_AVATAR_SEND	9 + MAX_USER_ID_LENGTH + MAX_AVATAR_NAME_LENGTH + sizeof(ACTION_INFO)

#define P_CLIENT_OK_FOR_ZONE_SEND	13
#define S_CLIENT_OK_FOR_ZONE_SEND	17

#define P_GENERAL_NOTICE_SEND	17
#define S_GENERAL_NOTICE_SEND	70

#define P_PROCESS_ATTACK_SEND	18
#define S_PROCESS_ATTACK_SEND	93

#define P_PROCESS_DATA_SEND	19
#define S_PROCESS_DATA_SEND	113

#define P_DEMAND_ZONE_SERVER_INFO_2	20
#define S_DEMAND_ZONE_SERVER_INFO_2	17

#define P_FAIL_MOVE_ZONE_2_SEND	21
#define S_FAIL_MOVE_ZONE_2_SEND	9

#define P_USE_HOTKEY_ITEM_SEND	22
#define S_USE_HOTKEY_ITEM_SEND	17

#define P_USE_INVENTORY_ITEM_SEND	23
#define S_USE_INVENTORY_ITEM_SEND	21

#define P_ADD_ITEM_SEND	25
#define S_ADD_ITEM_SEND	25

#define P_EXCHANGE_ITEM_SEND	26
#define S_EXCHANGE_ITEM_SEND	29

#define P_HIGH_ITEM_SEND	27
#define S_HIGH_ITEM_SEND	25

#define P_LOW_ITEM_SEND	28
#define S_LOW_ITEM_SEND	25

#define P_MAKE_SKILL_SEND	30
#define S_MAKE_SKILL_SEND	45

#define P_START_PSHOP_SEND	31
#define S_START_PSHOP_SEND	9 + 4 + sizeof(PSHOP_INFO)

#define P_END_PSHOP_SEND	32
#define S_END_PSHOP_SEND	13

#define P_PSHOP_ITEM_INFO_SEND	34
#define S_PSHOP_ITEM_INFO_SEND	17

#define P_GET_CASH_SIZE_SEND	41
#define S_GET_CASH_SIZE_SEND	13

#define P_TRIBE_WORK_SEND	79
#define S_TRIBE_WORK_SEND	113

#define P_MAKE_ITEM_SEND	29
#define S_MAKE_ITEM_SEND	45

#define P_DEMAND_PSHOP_SEND	33
#define S_DEMAND_PSHOP_SEND	22

#define P_BUY_PSHOP_SEND	35
#define S_BUY_PSHOP_SEND	54

#define P_CHANGE_TO_TRIBE4_SEND	37
#define S_CHANGE_TO_TRIBE4_SEND	9

#define P_GENERAL_CHAT_SEND	38
#define S_GENERAL_CHAT_SEND	70

#define P_SECRET_CHAT_SEND	39
#define S_SECRET_CHAT_SEND	83

#define P_GENERAL_SHOUT_SEND	40
#define S_GENERAL_SHOUT_SEND	70

#define P_DUEL_ASK_SEND	43
#define S_DUEL_ASK_SEND	26

#define P_BUY_CASH_ITEM_SEND	42
#define S_BUY_CASH_ITEM_SEND	49

#define P_DUEL_ANSWER_SEND	45
#define S_DUEL_ANSWER_SEND	13

#define P_DUEL_START_SEND	46
#define S_DUEL_START_SEND	9

#define P_DUEL_CANCEL_SEND	44
#define S_DUEL_CANCEL_SEND	9

#define P_TRADE_ASK_SEND	47
#define S_TRADE_ASK_SEND	22

#define P_TRADE_CANCEL_SEND	48
#define S_TRADE_CANCEL_SEND	9

#define P_TRADE_ANSWER_SEND	49
#define S_TRADE_ANSWER_SEND	13

#define P_TRADE_START_SEND	50
#define S_TRADE_START_SEND	9

#define P_TRADE_MENU_SEND	51
#define S_TRADE_MENU_SEND	9

#define P_TRADE_END_SEND	52
#define S_TRADE_END_SEND	9

#define P_FRIEND_ASK_SEND	53
#define S_FRIEND_ASK_SEND	22

#define P_FRIEND_ANSWER_SEND	55
#define S_FRIEND_ANSWER_SEND	13

#define P_FRIEND_MAKE_SEND	56
#define S_FRIEND_MAKE_SEND	13

#define P_FRIEND_FIND_SEND	57
#define S_FRIEND_FIND_SEND	13

#define P_FRIEND_CANCEL_SEND	54
#define S_FRIEND_CANCEL_SEND	9

#define P_FRIEND_DELETE_SEND	58
#define S_FRIEND_DELETE_SEND	13

#define P_FRIEND_SEND	57
#define S_FRIEND_SEND	13

#define P_PARTY_ASK_SEND	65
#define S_PARTY_ASK_SEND	22

#define P_PARTY_CANCEL_SEND	66
#define S_PARTY_CANCEL_SEND	9

#define P_PARTY_ANSWER_SEND	67
#define S_PARTY_ANSWER_SEND	13

#define P_PARTY_CHAT_SEND	68
#define S_PARTY_CHAT_SEND	70

#define P_PARTY_LEAVE_SEND	69
#define S_PARTY_LEAVE_SEND	9

#define P_PARTY_BREAK_SEND	71
#define S_PARTY_BREAK_SEND	9

#define P_PARTY_EXILE_SEND	70
#define S_PARTY_EXILE_SEND	22

#define P_GUILD_ASK_SEND	72
#define S_GUILD_ASK_SEND	22

#define P_GUILD_ANSWER_SEND	74
#define S_GUILD_ANSWER_SEND	13

#define P_GUILD_CANCEL_SEND	73
#define S_GUILD_CANCEL_SEND	9

#define P_TEACHER_ASK_SEND	59
#define S_TEACHER_ASK_SEND	22

#define P_TEACHER_ANSWER_SEND	59
#define S_TEACHER_ANSWER_SEND	22

#define P_TEACHER_CANCEL_SEND	60
#define S_TEACHER_CANCEL_SEND	9

#define P_TEACHER_START_SEND	62
#define S_TEACHER_START_SEND	9

#define P_TEACHER_END_SEND	63
#define S_TEACHER_END_SEND	9

#define P_TEACHER_STATE_SEND	64
#define S_TEACHER_STATE_SEND	9

#define P_TRIBE_BANK_SEND	82
#define S_TRIBE_BANK_SEND	17

#define P_TRIBE_VOTE_SEND	83
#define S_TRIBE_VOTE_SEND	17

#define P_GUILD_WORK_SEND	75
#define S_GUILD_WORK_SEND	513

#define P_GUILD_NOTICE_SEND	76
#define S_GUILD_NOTICE_SEND	70

#define P_GUILD_CHAT_SEND	77
#define S_GUILD_CHAT_SEND	70

#define P_GUILD_FIND_SEND	78
#define S_GUILD_FIND_SEND	22

#define P_TRIBE_NOTICE_SEND	80
#define S_TRIBE_NOTICE_SEND	70

#define P_TRIBE_CHAT_SEND	81
#define S_TRIBE_CHAT_SEND	70

#define P_TRIBE_BANK_SEND	82
#define S_TRIBE_BANK_SEND	17

#define P_CHANGE_AUTO_INFO_SEND	86
#define S_CHANGE_AUTO_INFO_SEND	17

#define P_ANIMAL_STATE_SEND	87
#define S_ANIMAL_STATE_SEND	17

#define P_PET_COMBINE_SEND	88
#define S_PET_COMBINE_SEND	45

#define P_DESTROY_ITEM_SEND	89
#define S_DESTROY_ITEM_SEND	17

#define P_COSTUME_STATE_SEND	90
#define S_COSTUME_STATE_SEND	17

#define P_GET_CASH_ITEM_INFO_SEND	91
#define S_GET_CASH_ITEM_INFO_SEND	9

#define P_SKY_UP_ITEM_SEND	93
#define S_SKY_UP_ITEM_SEND	25

#define P_CONTINUE_SKILL_STAT_SEND	94
#define S_CONTINUE_SKILL_STAT_SEND	73

#define P_CONTINUE_SKILL_USE_SEND	95
#define S_CONTINUE_SKILL_USE_SEND	25

#define P_TIME_EFFECT_SEND	97
#define S_TIME_EFFECT_SEND	13

#define P_SOCKET_ITEM_SEND	98
#define S_SOCKET_ITEM_SEND	29

#define P_AUTO_CONFIG_SEND	99
#define S_AUTO_CONFIG_SEND	125

#define P_SMELT_ITEM_SEND	102
#define S_SMELT_ITEM_SEND	25

#define P_FISHING_STATE_SEND	103
#define S_FISHING_STATE_SEND	21

#define P_FISHING_RESULT_SEND	104
#define S_FISHING_RESULT_SEND	17

#define P_FISHING_REWARD_SEND	105
#define S_FISHING_REWARD_SEND	9

#define P_TRAP_CHECK_SEND	106
#define S_TRAP_CHECK_SEND	25

#define P_SET_DEPUTY_PSHOP_SEND	109
#define S_SET_DEPUTY_PSHOP_SEND	90

#define P_FACTION_NOTICE_SEND	112
#define S_FACTION_NOTICE_SEND	70

#define P_BUY_CAPSULE_SEND	114
#define S_BUY_CAPSULE_SEND	21

#define P_297_TYPE_CANCEL_SEND	100
#define S_297_TYPE_CANCEL_SEND	30

#define P_GET_DEPUTY_PSHOP_SEND	108
#define S_GET_DEPUTY_PSHOP_SEND	30

#define P_SET_DEPUTY_PSHOP_MONEY_SEND	110
#define S_SET_DEPUTY_PSHOP_MONEY_SEND	17

#define P_CHAR_RANK_BUFF_SEND	111
#define S_CHAR_RANK_BUFF_SEND	13

#define P_ABSORB_STATE_SEND	113
#define S_ABSORB_STATE_SEND	13

#define P_RAGE_SEND	117
#define S_RAGE_SEND	9

#define P_DEMAND_HERO_RANK_SEND	118
#define S_DEMAND_HERO_RANK_SEND	9

#define P_HERO_RANK_REWARD_CLAIM_SEND	119
#define S_HERO_RANK_REWARD_CLAIM_SEND	9

#define P_TOWER_UPGRADE_SEND	120
#define S_TOWER_UPGRADE_SEND	29

#define P_ADDITIONAL_SOCKET_SEND	121
#define S_ADDITIONAL_SOCKET_SEND	25

#define P_DAILY_MISSION_SEND	126
#define S_DAILY_MISSION_SEND	29

#define P_CLOAK_UPGRADE_SEND	127
#define S_CLOAK_UPGRADE_SEND	25

#define P_BOOZE_DRINK_SEND	129
#define S_BOOZE_DRINK_SEND	17

#define P_COMBINE_G12_PET_SEND	131
#define S_COMBINE_G12_PET_SEND	45

#define P_ADD_PET_ABILITY_SEND	132
#define S_ADD_PET_ABILITY_SEND	25

#define P_LEGENDARY_UPGRADE_SEND	133
#define S_LEGENDARY_UPGRADE_SEND	45

#define P_IMPROVE_LEGENDARY_SEND	134
#define S_IMPROVE_LEGENDARY_SEND	29

#define P_UNSEAL_LEGENDARY_SEND	135
#define S_UNSEAL_LEGENDARY_SEND	45

#define P_COSTUME_HIDE_SEND	139
#define S_COSTUME_HIDE_SEND	13

#define P_DEMAND_BLOODSTAINED_INFO_SEND	140
#define S_DEMAND_BLOODSTAINED_INFO_SEND	9

#define P_BUY_BLOODSTAINED_ITEM_SEND 141
#define S_BUY_BLOODSTAINED_ITEM_SEND 49

#define P_ENGRAVE_ITEM_SEND	142
#define S_ENGRAVE_ITEM_SEND	25

#define P_PARTY_MAKE_SEND 160
#define S_PARTY_MAKE_SEND 9

#define P_PARTY_JOIN_SEND 161
#define S_PARTY_JOIN_SEND 9

#define P_CRAFT_COSTUME_SEND	164
#define S_CRAFT_COSTUME_SEND	45

#define P_AMULET_COMBINE_SEND	165
#define S_AMULET_COMBINE_SEND	45






// CLIENT TO LOGIN

#define P_LOGIN_SEND	11
#define S_LOGIN_SEND	9 + MAX_USER_ID_LENGTH + MAX_USER_PASSWORD_LENGTH + 4 + HW_PROFILE_GUIDLEN

#define P_CREATE_MOUSE_PASSWORD_SEND	13
#define S_CREATE_MOUSE_PASSWORD_SEND	14

#define P_CHANGE_MOUSE_PASSWORD_SEND	14
#define S_CHANGE_MOUSE_PASSWORD_SEND	19

#define P_LOGIN_MOUSE_PASSWORD_SEND	15
#define S_LOGIN_MOUSE_PASSWORD_SEND	14

#define P_CREATE_AVATAR_SEND	17
#define S_CREATE_AVATAR_SEND	9 + 4 + sizeof(AVATAR_INFO)

#define P_DELETE_AVATAR_SEND	18
#define S_DELETE_AVATAR_SEND	9 + 4 + 4 + 4

#define P_CHANGE_AVATAR_NAME_SEND	19
#define S_CHANGE_AVATAR_NAME_SEND	34

#define P_WANT_GIFT_SEND	21
#define S_WANT_GIFT_SEND	17

#define P_DEMAND_ZONE_SERVER_INFO_1_SEND	22
#define S_DEMAND_ZONE_SERVER_INFO_1_SEND	13

#define P_FAIL_MOVE_ZONE_1_SEND	23
#define S_FAIL_MOVE_ZONE_1_SEND	9

#define P_DEMAND_GIFT_SEND	25
#define S_DEMAND_GIFT_SEND	9

#define P_DEMAND_WEBMALL_SEND	26
#define S_DEMAND_WEBMALL_SEND	9

#define P_BUY_WEBMALL_SEND	27
#define S_BUY_WEBMALL_SEND	14

#define P_CREATE_ACCOUNT_SEND	30
#define S_CREATE_ACCOUNT_SEND	9 + MAX_USER_ID_LENGTH + MAX_USER_PASSWORD_LENGTH




// Packet Family Definitions

#pragma pack(push, 1)

// LOGIN
typedef struct
{
	BYTE tProtocol1;
	int tResult;
	char uID[MAX_USER_ID_LENGTH];
	int uUserSort;
	int uLoginPremium;
	int mSecondLoginSort;
	char mMousePassword[MAX_MOUSE_PASSWORD_LENGTH];
	int mWebItem[50];
	BYTE tProtocol2;
	AVATAR_INFO mSelectAvtInfo1;
	BYTE tProtocol3;
	AVATAR_INFO mSelectAvtInfo2;
	BYTE tProtocol4;
	AVATAR_INFO mSelectAvtInfo3;
}
TW_LOGIN_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	AVATAR_INFO tAvatarInfo;
}
TW_CREATE_AVATAR_DATA;


// ZONE

typedef struct
{
	BYTE tProtocol;
	AVATAR_INFO tAvatarInfo;
	int tEffectValue[MAX_AVATAR_EFFECT_SORT_NUM][2];
}
W_REGISTER_AVATAR_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	WORLD_INFO mWorldInfo;
	TRIBE_INFO mTribeInfo;
}
W_BROADCAST_WORLD_INFO_DATA;

typedef struct
{
	BYTE tProtocol;
	int tUserIndex;
	DWORD tUniqueNumber;
	int mEffectValue[MAX_AVATAR_EFFECT_SORT_NUM][2];
	int mEffectValueState[MAX_AVATAR_EFFECT_SORT_NUM];
}
W_AVATAR_EFFECT_VALUE_INFO_DATA;

typedef struct
{
	BYTE tProtocol;
	int tServerIndex;
	DWORD tUniqueNumber;
	int tSort;
	int tValue1;
	int tValue2;
	int tValue3;
}
W_AVATAR_CHANGE_INFO_1_DATA;

typedef struct
{
	BYTE tProtocol;
	int tUserIndex;
	DWORD tUniqueNumber;
	OBJECT_FOR_AVATAR mDATA;
	int tCheckChangeActionState;
}
W_AVATAR_ACTION_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tServerIndex;
	DWORD tUniqueNumber;
	OBJECT_FOR_MONSTER mDATA;
	int tCheckChangeActionState;
}
W_MONSTER_ACTION_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tServerIndex;
	DWORD tUniqueNumber;
	OBJECT_FOR_ITEM mDATA;
	int tCheckChangeActionState;
}
W_ITEM_ACTION_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tContent[MAX_CHAT_CONTENT_LENGTH];
}
W_GENERAL_NOTICE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	ATTACK_FOR_PROTOCOL tAttackInfo;
}
W_PROCESS_ATTACK_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tValue;
}
W_AVATAR_CHANGE_INFO_2_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tSort;
	BYTE tData[100];
}
W_PROCESS_DATA_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tPage;
	int tIndex;
	int tValue;
	int tValue2;
}
W_USE_INVENTORY_ITEM_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	char tIP[16];
	int tPort;
}
W_DEMAND_ZONE_SERVER_INFO_2_RESULT_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tPage;
	int tIndex;
}
W_USE_HOTKEY_ITEM_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tCost;
	int tValue;
}
W_IMPROVE_ITEM_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tCost;
}
W_ADD_ITEM_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tCost;
	int tValue[6];
}
W_EXCHANGE_ITEM_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tCost;
	int tValue[6];
}
W_HIGH_ITEM_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tCost;
	int tValue[6];
}
W_LOW_ITEM_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tValue[6];
}
W_MAKE_ITEM_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tValue[6];
}
W_MAKE_SKILL_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	PSHOP_INFO tPShopInfo;
}
W_START_PSHOP_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
}
W_END_PSHOP_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	PSHOP_INFO tPShopInfo;
}
W_DEMAND_PSHOP_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tCost;
	int tPage;
	int tIndex;
	int tValue[6];
	int tSocket[5];
}
W_BUY_PSHOP_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
}
W_CHANGE_TO_TRIBE4_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
	char tContent[MAX_CHAT_CONTENT_LENGTH];
}
W_GENERAL_CHAT_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tZoneNumber;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
	char tContent[MAX_CHAT_CONTENT_LENGTH];
	int tSpecialSort;
}
W_SECRET_CHAT_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
	char tContent[MAX_CHAT_CONTENT_LENGTH];
}
W_GENERAL_SHOUT_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tCash;
	int tSort;
}
W_GET_CASH_SIZE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tCashSize;
	int tPage;
	int tIndex;
	int tValue[6];
}
W_BUY_CASH_ITEM_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
	int tSort;
}
W_DUEL_ASK_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
}
W_DUEL_CANCEL_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tAnswer;
}
W_DUEL_ANSWER_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tDuelState[3];
	int tRemainTime;
	int tIsPotionUsable;
}
W_DUEL_START_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tRemainTime;
}
W_DUEL_TIME_INFO_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
}
W_DUEL_END_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
	int tLevel;
}
W_TRADE_ASK_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
}
W_TRADE_CANCEL_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
}
W_TRADE_ANSWER_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tTradeMoney;
	int tTrade[8][4];
	int tTradeSocket[8][5];
	int tTradeMoney2;
}
W_TRADE_START_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tTradeMoney;
	int tTrade[8][4];
	int tTradeSocket[8][5];
	int tTradeMoney2;
}
W_TRADE_STATE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tCheckMe;
}
W_TRADE_MENU_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
}
W_TRADE_END_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
}
W_FRIEND_ASK_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
}
W_FRIEND_CANCEL_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
}
W_FRIEND_ANSWER_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tIndex;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
}
W_FRIEND_MAKE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tIndex;
	int tZoneNumber;
}
W_FRIEND_FIND_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tIndex;
}
W_FRIEND_DELETE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
}
W_TEACHER_ASK_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
}
W_TEACHER_CANCEL_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
}
W_TEACHER_ANSWER_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
}
W_TEACHER_START_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
}
W_TEACHER_END_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
}
W_TEACHER_STATE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
}
W_PARTY_ASK_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
}
W_PARTY_CANCEL_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
}
W_PARTY_ANSWER_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
}
W_PARTY_MAKE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
}
W_PARTY_JOIN_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
	char tContent[MAX_CHAT_CONTENT_LENGTH];
}
W_PARTY_CHAT_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
}
W_PARTY_LEAVE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
}
W_PARTY_EXILE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[5][MAX_AVATAR_NAME_LENGTH];
}
W_PARTY_INFO_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
}
W_PARTY_BREAK_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
}
W_GUILD_ASK_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
}
W_GUILD_CANCEL_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
}
W_GUILD_ANSWER_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tSort;
	GUILD_INFO tGuildInfo;
}
W_GUILD_WORK_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
	char tContent[MAX_CHAT_CONTENT_LENGTH];
}
W_GUILD_NOTICE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
	char tContent[MAX_CHAT_CONTENT_LENGTH];
}
W_GUILD_CHAT_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
}
W_GUILD_FIND_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
}
W_GUILD_LOGIN_INFO_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tSort;
	BYTE tData[100];
}
W_TRIBE_WORK_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tType;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
	char tContent[MAX_CHAT_CONTENT_LENGTH];
}
W_TRIBE_NOTICE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
	char tContent[MAX_CHAT_CONTENT_LENGTH];
}
W_TRIBE_CHAT_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tSort;
	int tTribeBankInfo[50];
	int tMoney;
}
W_TRIBE_BANK_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tSort;
	int tValue;
}
W_TRIBE_VOTE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tValue;
}
W_TRIBE_ALLIANCE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	BYTE tData[100];
}
W_BROADCAST_INFO_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tTribeUserNum[4];
	int tRemainTime;
}
W_049_TYPE_BATTLE_INFO_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tExistStone[4];
}
W_051_TYPE_BATTLE_INFO_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	BYTE tData[100];
}
W_GM_COMMAND_INFO_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
}
W_RETURN_TO_ZONE037_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tTribeUserNum[4];
}
W_194_TYPE_BATTLE_INFO_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tRemainTime;
}
W_194_TYPE_BATTLE_COUNTDOWN_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tValue;
}
W_ANIMAL_STATE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tTribeUserNum[4];
	int tRemainTime;
}
W_267_TYPE_BATTLE_INFO_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tRemainTime;
}
W_241_TYPE_BATTLE_INFO_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tValue[6];
}
W_MAKE_BIRD_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tMoney;
	int tValue[6];
}
W_DESTROY_ITEM_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tValue;
}
W_270_TYPE_BATTLE_INFO_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tSort;
	int CostumeIndex;
	int tPage;
	int tIndex;
	int tInvenIndex;
	int tItemIndex;
}
W_COSTUME_STATE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tCashItemInfoVersion;
	int tCashItemInfo[4][14][10][4];
}
W_GET_CASH_ITEM_INFO_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
}
W_UPDATE_CASH_ITEM_INFO_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tCost;
	int tValue[6];
}
W_SKY_UP_ITEM_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
}
W_CONTINUE_SKILL_STAT_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
}
W_CONTINUE_SKILL_USE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult1;
	int tResult2;
	int tResult3;
}
W_DICE_BATTLE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tResult1;
	int tResult2;
}
W_297_TYPE_REMAIN_INFO_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tResult;
	int tSocket[5];
}
W_SOCKET_SYSTEM_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tTribeUserNum[4];
}
W_297_TYPE_REMAIN_MONSTER_INFO_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int iPage;
	int iInvenSlot;
	int iInvenSlot2;
	int iInvenIndex;
	int iInvenIndex2;
	int tValue[8];
	int tImproveValue;
}
W_MULTI_ITEM_CREATE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tItemIndex;
	int tPage;
	int tIndex;
	int tCoord;
	int tImproveValue;
}
W_PCROOM_PET_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tPage1;
	int tIndex1;
	int tPage2;
	int tIndex2;
	int tItem;
	int tQuantity;
	int tType;
}
W_SET_HOTKEY_INVENTORY_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tIndex;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
}
W_CANCEL_HOISUNDO_OK_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tIndex;
	int tUniqueNumber;
	int tAutoState;
}
W_AUTO_CONFIG_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tCost;
	int tImprove;
}
W_SMELT_ITEM_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
	int tTribe;
}
W_SAMGUNDO_CENTER_INFO_DATA;

typedef struct
{
	BYTE tProtocol;
	int tUserIndex;
	int tUniqueNumber;
	int tSort;
	int tFishingState;
	int tFishingStep;
}
W_FISHING_STATE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tUserIndex;
	int tUniqueNumber;
	int tSort;
	int tFishingState;
	int tFishingStep;
}
W_FISHING_RESULT_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tItemIndex;
	int tPage;
	int tIndex;
	int tCoord;
}
W_FISHING_REWARD_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	float mTrapPosition[5][3];
}
W_TRAP_POSITION_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tGuildName[4][91];
}
W_FOUR_GUILD_CHALLENGE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tZoneIndex;
	int tResult;
}
W_DECIDE_CHALLENGE_FOURGUILD_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tResult;
}
W_FOUR_GUILD_REMAIN_INFO_DATA;

typedef struct
{
	BYTE tProtocol;
	int tUserIndex;
	DWORD tUniqueNumber;
	OBJECT_FOR_DEPUTYSHOP mDATA;
	int tSort;
}
W_DEPUTY_PSHOP_ACTION_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tDefaultSort;
	int tSort;
	PROXY_INFO tProxyInfo;
}
W_GET_DEPUTY_PSHOP_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	PROXY_INFO tProxyInfo;
	int tPage;
	int tIndex;
	int tValue[12];
}
W_SET_DEPUTY_PSHOP_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tMoney;
	int tMoney2;
}
W_SET_DEPUTY_PSHOP_MONEY_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tItem;
	int tPage;
	int tIndex;
	int tCoord;
}
W_ITEM_TO_BAG_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	char tAvatarName[MAX_AVATAR_NAME_LENGTH];
	char tContent[MAX_CHAT_CONTENT_LENGTH];
}
W_FACTION_NOTICE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tItemIndex;
	int tPage;
	int tIndex;
	int tX;
	int tY;
}
W_BUY_CAPSULE_ITEM_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	HERO_RANKING_INFO mDATA;
}
W_DEMAND_HERO_RANK_CURRENT_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tValue;
}
W_GET_HERO_RANK_REWARD_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	HERO_RANKING_INFO mDATA;
}
W_DEMAND_HERO_RANK_OLD_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tPage;
	int tIndex;
}
W_TOWER_UPGRADE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tTower[12];
	int tTowerState[12];
}
W_TOWER_INFO_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tRemainTime;
}
W_319_BATTLE_TYPE_INFO_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tSort;
	int tWarCount;
	int tPVPCount;
	int tPVMCount;
	int tOnlineTime;
	int tItem;
	int tPage;
	int tIndex;
	int tXPost;
	int tYPost;
}
W_DAILY_MISSION_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tValue[6];
}
W_CLOAK_UPGRADE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tWineIndex;
}
W_BOOZE_DRINK_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tSort;
	int tResult;
	int tImproveState;
}
W_IMPROVE_LEGENDARY_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
}
W_COSTUME_HIDE_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int mBloodStorePages;
	int mBloodStoreInfo[5][10][3];
}
W_DEMAND_BLOOD_SHOP_RECV_DATA;

typedef struct
{
	BYTE tProtocol;
	int tResult;
	int tPKPoints;
	int tPage;
	int tIndex;
	int tValue[6];
}
W_BUY_BLOOD_SHOP_RECV_DATA;


#pragma pop


#endif