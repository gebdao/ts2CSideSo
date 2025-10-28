#pragma once

class AVATAR_OBJECT
{
private:

public:
	BOOL mCheckValidState;
	int mIndex;
	DWORD mUniqueNumber;
	float mLastActionUpdateTime;
	float mFuryEffectDuration;
	float mHeroRankRemainTimeBeforeUpdate;
	OBJECT_FOR_AVATAR mDATA;
	int mCheckValidForAttack;
	int tAttackType;
	int tActionSort;
	int tAttackSort;
	int mCheckValidFrameForAction;
	ATTACK_FOR_PROTOCOL tAvatarAttackInfo;
	float mEffectLocation[3];
	int mCheckDeath;
	float mDeathTimeBeforeRespawn;
	int mDeathCount;
	int b;
	int mGeneralChatState;
	float mGeneralChatSendTime;
	char mGeneralChatContent[61];
	int mLevelUpEffectState;
	float mLevelUpEffectStateUpdateTime;
	int mRebirthEffectState;
	float mRebirthEffectStateUpdateTime;
	int mReflectDamageEffectState;
	float mReflectDamageEffectStateUpdateTime;
	int mDestroyHeavenShieldState;
	float mDestroyHeavenShieldStateUpdateTime;
	int mHealOtherPlayerSkillEffectState;
	float mHealOtherPlayerSkillEffectUpdateTime;
	int mHealManaOtherPlayerSkillEffectState;
	float mHealManaOtherPlayerSkillEffectUpdateTime;
	int mDamageUpForGarudaEffect;
	float mDamageUpForGarudaUpdateTime;
	int mPetGrowEffectState;
	float mPetGrowEffectStateUpdateTime;
	int mSantaPetEffectState;
	int mAtkRateBookForEffect;
	float mAtkRateBookForEffectUpdateTime;
	int mDodgeBookForEffect;
	float mDodgeBookForEffectUpdateTime;
	float mPinkArrowForGMEffect;

	void DrawAvatarName(int tDrawSort, int mIndex, float dTime);
	void Draw(int tDrawSort, int mIndex, float dTime);
	void DrawShadow(int mIndex, float dTime);
	void Update(int mIndex, float dTime);
	void Init();
	void Free();
	void InitForCreate(int mIndex);
	void InitForAction(int mIndex);
	void ProcessGAttackPacket(int tSkillNumber);
	void ProcessSAttackPacket();
	void ProcessRAttackPacket();
	void ProcessRAttackPacketForPartySkill();
	void ProcessBAttackPacketForPartySkill();
	void SetEffect(int mIndex);
	void PlayActionSound(int mIndex);
	BOOL ProcessForJumpRun(float mEffectLocation[3], float mTargetLocation[3], int tSort, float mLocation[3], float dTime);
	float MaxAttackSpeed(int aEffectValueForView[38]);
	float MiniRunSpeed(int aEffectValueForView[38]);
	float MaxRunSpeed(int aEffectValueForView[38]);
	float MiniFastRunSpeed(int aEffectValueForView[38]);
	float MaxFastRunSpeed(int aEffectValueForView[38]);
	void A000(int mIndex, float dTime);
	void A001(int mIndex, float dTime);
	void A002(int mIndex, float dTime);
	void A003(int mIndex, float dTime);
	void A004(int mIndex, float dTime);
	void A005(int mIndex, float dTime);
	void A006(int mIndex, float dTime);
	void A007(int mIndex, float dTime);
	void A009(int mIndex, float dTime);
	void A010(int mIndex, float dTime);
	void A011(int mIndex, float dTime);
	void A012(int mIndex, float dTime);
	void A013(int mIndex, float dTime);
	void A014(int mIndex, float dTime);
	void A015(int mIndex, float dTime);
	void A016(int mIndex, float dTime);
	void A017(int mIndex, float dTime);
	void A018(int mIndex, float dTime);
	void A019(int mIndex, float dTime);
	void A020(int mIndex, float dTime);
	void A021(int mIndex, float dTime);
	void A022(int mIndex, float dTime);
	void A023(int mIndex, float dTime);
	void A030(int mIndex, float dTime);
	void A031(int mIndex, float dTime);
	void A032(int mIndex, float dTime);
	void A033(int mIndex, float dTime);
	void A034(int mIndex, float dTime);
	void A035(int mIndex, float dTime);
	void A036(int mIndex, float dTime);
	void A037(int mIndex, float dTime);
	void A038(int mIndex, float dTime);
	void A039(int mIndex, float dTime);
	void A040(int mIndex, float dTime);
	void A041(int mIndex, float dTime);
	void A042(int mIndex, float dTime);
	void A043(int mIndex, float dTime);
	void A044(int mIndex, float dTime);
	void A045(int mIndex, float dTime);
	void A046(int mIndex, float dTime);
	void A048(int mIndex, float dTime);
	void A049(int mIndex, float dTime);
	void A050(int mIndex, float dTime);
	void A051(int mIndex, float dTime);
	void A052(int mIndex, float dTime);
	void A054(int mIndex, float dTime);
	void A055(int mIndex, float dTime);
	void A056(int mIndex, float dTime);
	void A057(int mIndex, float dTime);
	void A058(int mIndex, float dTime);
	void A060(int mIndex, float dTime);
	void A061(int mIndex, float dTime);
	void A062(int mIndex, float dTime);
	void A063(int mIndex, float dTime);
	void A064(int mIndex, float dTime);
	void A065(int mIndex, float dTime);
	void A066(int mIndex, float dTime);
	void A067(int mIndex, float dTime);
	void A068(int mIndex, float dTime);
	void A069(int mIndex, float dTime);
	void A070(int mIndex, float dTime);
	void A071(int mIndex, float dTime);
	void A072(int mIndex, float dTime);
	void A073(int mIndex, float dTime);
	void A074(int mIndex, float dTime);
	void A075(int mIndex, float dTime);
	void A076(int mIndex, float dTime);
	void A081(int mIndex, float dTime);
	void A082(int mIndex, float dTime);
	void A083(int mIndex, float dTime);
	void A085(int mIndex, float dTime);
	void A086(int mIndex, float dTime);
	void A087(int mIndex, float dTime);
	void A088(int mIndex, float dTime);
	void A089(int mIndex, float dTime);
	void A090(int mIndex, float dTime);
	void A091(int mIndex, float dTime);
	void A092(int mIndex, float dTime);
	void A093(int mIndex, float dTime);
	void A094(int mIndex, float dTime);
	void A095(int mIndex, float dTime);
	void A096(int mIndex, float dTime);
	void A097(int mIndex, float dTime);
	void A098(int mIndex, float dTime);
	float MiniAttackSpeed(int aEffectValueForView[38]);

};

class NPC_OBJECT
{
private:

public:
	NPC_INFO* mNPC_INFO;
	int mCheckValidState;
	int mMotionIndex;
	float mFrame;
	float mLocation[3];
	float mFront;
	float mPostFront;
	int mCollision; 

	void Init();
	void Free();
	void PlayActionSound();
	void Draw(int tDrawSort, int mIndex, float dTime);
	void DrawShadow(int mIndex, float dTime);
	void DrawInfo(int tSort, int mIndex, float dTime);
	void A001(int mIndex, float dTime);
	void A002(int mIndex, float dTime);
	void Update(int mIndex, float dTime);
	BOOL CheckNpcToCoordDistance(float tSCoord[3]);
};

class MONSTER_OBJECT
{
public:
	BOOL mCheckValidState;
	int mServerIndex;
	DWORD mUniqueNumber;
	float mMonsterUpdateTime;
	OBJECT_FOR_MONSTER mMONSTER;
	MONSTER_INFO* mMONSTER_INFO;
	float mAttackRadius;
	int mCollision;
	int mMonsterActionState;
	int mMonsterAttackSort;
	int mMonsterAttackType;
	int mMonsterAttackPacket;
	ATTACK_FOR_PROTOCOL mAttackInfo;
	int mCheckMonsterIsDead;
	float mDeathSpeed;
	float mDeathTime;
	BOOL mMatureMode;
	float mPreLocation[3];
	int mMatureRand;
	int mPlayMatureSound;
	float mHeightForMature;
	float mLocation[3];
	float mFront;
	BOOL mEffectForBossDeath;
	float mEffectForBossDeathFrame;
	BOOL mEffectForBossSpawn;
	float mEffectForBossSpawnFrame;
	BOOL mSpecialEffectForBoss;
	float mSpecialEffectForBossFrame;


	void Init();
	void Free();
	void PlayActionSound(int mIndex);
	void DrawShadow(int mIndex, float dTime);
	void DrawInfo(int mIndex, float dTime);
	void InitForCreate(int mIndex);
	void InitForAction(int mIndex);
	void Update(int mIndex, float dTime);
	void Draw(int tDrawSort, int mIndex, float dTime);
	void ProcessGAttackPacket();
	void ProcessRAttackPacket();
	void ProcessBAttackPacket();
	void ProcessSAttackPacket();
	void A001(int mIndex, float dTime);
	void A002(int mIndex, float dTime);
	void A004(int mIndex, float dTime);
	void A005(int mIndex, float dTime);
	void A006(int mIndex, float dTime);
	void A008(int mIndex, float dTime);
	void A009(int mIndex, float dTime);
	void A013(int mIndex, float dTime);
	void A020(int mIndex, float dTime);
	BOOL CheckMonsterToCoordDistance(float tSCoord[3]);
};

class ITEM_OBJECT
{
private:

public:
	BOOL mCheckValidState;
	int mServerIndex;
	DWORD mUniqueNumber;
	float mItemUpdateTime;
	OBJECT_FOR_ITEM mDATA;
	ITEM_INFO* mITEM_INFO;
	int mSoundIdx;
	int mModelIdx;
	float mPreLocation[3];
	float mFront;
	float mLocation[3];
	float mAngle[3];


	void Init();
	void Free();
	void PlayActionSound(int mIndex);
	void Draw(int tDrawSort, int mIndex, float dTime);
	void DrawInfo(int mIndex, float dTime);
	void InitForCreate(int mIndex);
	void Update(int mIndex, float dTime);
	BOOL CheckPossibleGetItem();
};

class EFFECT_OBJECT
{
private:

public:
	BOOL mCheckValidState;
	int mEffectIndex;
	int mEffectState;
	int mUserIndex;
	DWORD mUniqueNumber;
	int mDamageSoundSort;
	int mTargetObjType;
	int mTargetObjIndex;
	DWORD mTargetObjUniqueNumber;
	int UNKa1;
	int mTribe;
	float UNKa3;
	int UNKa4;
	int tPreviousTribe;
	int tGender;
	int aSort;
	float mEffectFrame;
	float tLocation1[3];
	float tAngle1[3];
	float tLocation2[3];
	float tAngle2[3];
	float mBulletInfo;
	GSOBJECT* mSObjectForEffect;
	int mSObjectIndex;
	int mParticleIndex;
	POBJECT_FOR_GXD mDATA;
	ATTACK_FOR_PROTOCOL tAttackInfo;

	
	EFFECT_OBJECT();
	void Init();
	void Free();
	void SetBloodForAvatar(AVATAR_OBJECT* tAvatar, int tSort);
	void SetBloodForMonster(MONSTER_OBJECT* tMonster, int tSort);
	void SetFastRunForAvatar(AVATAR_OBJECT* tAVATAR);
	void SetJumpRunForAvatar(AVATAR_OBJECT* tAVATAR);
	void SetStripForMonster(MONSTER_OBJECT* tMONSTER);
	void SetCriticalEffectForAvatar(int tSort, AVATAR_OBJECT* tAVATAR, int tSort2);
	void SetCriticalEffectForMonster(MONSTER_OBJECT* tMONSTER);
	void SetLevelEffectForLeftEye(AVATAR_OBJECT* tAVATAR);
	void SetLevelEffectForRightEye(AVATAR_OBJECT* tAVATAR);
	void SetLevelEffectForLeftHand(AVATAR_OBJECT* tAVATAR);
	void SetLevelEffectForRightHand(AVATAR_OBJECT* tAVATAR);
	void SetHighLevelEffect_1(AVATAR_OBJECT* tAVATAR);
	void SetHighLevelEffect_2(AVATAR_OBJECT* tAVATAR);
	void SetHighLevelEffect_3(AVATAR_OBJECT* tAVATAR);
	void SetHighLevelEffect_4(AVATAR_OBJECT* tAVATAR);
	void SetHighLevelEffect_5(AVATAR_OBJECT* tAVATAR);
	void SetHighLevelEffect_6(AVATAR_OBJECT* tAVATAR);
	void SetZone175TypeMonsterEffect(int tSort, MONSTER_OBJECT* tMONSTER);
	void Draw(int tDrawSort, int mIndex, float dTime);
	void Update(int mIndex, float dTime);
	BOOL MoveCurve(float tLocation1[3], float tLocation2[3], float tUnknown, float mBulletInfo, float tLocation3[3]);
	void SetAbsorbEffect_1(AVATAR_OBJECT* tAVATAR);
	void SetAbsorbEffect_2(AVATAR_OBJECT* tAVATAR);
	void SetAbsorbEffect_3(AVATAR_OBJECT* tAVATAR);
	void SetAbsorbEffect_4(AVATAR_OBJECT* tAVATAR);
	void SetAbsorbEffect_5(AVATAR_OBJECT* tAVATAR);
	void SetAbsorbEffect_6(AVATAR_OBJECT* tAVATAR);

};

class PROXY_OBJECT
{
private:

public:
	BOOL mCheckValidState;
	int mIndex;
	DWORD mUniqueNumber;
	float mProxyUpdateTime;
	float mFront;
	OBJECT_FOR_DEPUTYSHOP mDATA;


	void Init();
	void Free();
	void Draw(int tDrawSort, float dTime);
	void DrawInfo(float dTime);
	void Update(float dTime);
	BOOL CheckProxyToCoordDistance(float tLocation[3]);
};

class PLAY
{
private:

public:
	int mNoAnimalGAttackFrame[3][4][3][3];
	int mNoAnimalGAttackSkillNum[3][4][3][3];
	int mAnimalGAttackFrame[3][4][3][3];
	int mAnimalGAttackSkillNum[3][4][3][3];
	WORLD_INFO mWorldInfo;
	TRIBE_INFO mTribeInfo;
	char tOldHeroRankNames[4][10][13];
	int tOldHeroRankPoints[4][10];
	char tCurrentHeroRankNames[4][10][13];
	int tCurrentHeroRankPoints[4][10];
	int MAX_AVATAR_OBJECT;
	int MAX_NPC_OBJECT;
	int MAX_MONSTER_OBJECT;
	int MAX_ITEM_OBJECT;
	int MAX_EFFECT_OBJECT;
	int MAX_PROXY_OBJECT;
	AVATAR_OBJECT mAVATAR_OBJECT[1000];
	NPC_OBJECT mNPC_OBJECT[100];
	MONSTER_OBJECT mMONSTER_OBJECT[1000];
	ITEM_OBJECT mITEM_OBJECT[1000];
	EFFECT_OBJECT mEFFECT_OBJECT[1000];
	PROXY_OBJECT mPROXY_OBJECT[500];
	float mZonePlayerCount[351];
	CRITICAL_SECTION mCriticalSection;



	PLAY();
	BOOL Init();
	void Free();
	void InitForEnterZone();
	void PROCESS_DATA_201_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost1, int tYPost1);
	void PROCESS_DATA_202_SEND(int tNPCIndex, int tSkillIndex);
	void PROCESS_DATA_203_SEND(int tIndex);
	void PROCESS_DATA_204_SEND(int tSkillSort, int tSkillIndex, int tSkillGrade, int tHotKeyPage, int tHotKeyIndex);
	void PROCESS_DATA_205_SEND(int tHotKeyPage, int tHotKeyIndex);
	void PROCESS_DATA_206_SEND(int tAddSort);
	void PROCESS_DATA_207_SEND(int tMoveZoneValue);
	void PROCESS_DATA_208_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_209_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_210_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_211_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_212_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_213_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_214_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_215_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_216_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_218_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_219_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_220_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_221_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_222_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_223_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_224_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_225_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_226_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_227_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_228_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_229_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_230_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_231_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_232_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_234_SEND(int tSort);
	void PROCESS_DATA_235_SEND(int tValue);
	void PROCESS_DATA_236_SEND();
	void PROCESS_DATA_237_SEND();
	void PROCESS_DATA_238_SEND();
	void PROCESS_DATA_239_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_240_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_241_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_242_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_243_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_244_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_245_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_246_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_249_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_233_SEND(int tNpcIndex, int tSkillIndex);
	void PROCESS_DATA_247_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_248_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_250_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_251_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_252_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_253_SEND(int tPage1, int tIndex1, int tQuantity1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_254_SEND(int tPage1, int tIndex1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_255_SEND(int tPage1, int tIndex1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_256_SEND(int tPage1, int tIndex1, int tPage2, int tIndex2, int tXPost, int tYPost);
	void PROCESS_DATA_501_SEND();
	void PROCESS_DATA_502_SEND();
	void PROCESS_DATA_505_SEND(int tValue);
	void PROCESS_DATA_506_SEND(int tValue);
	void PROCESS_DATA_507_SEND(float tLocation[3]);
	void PROCESS_DATA_508_SEND(int tValue);
	void PROCESS_DATA_511_SEND();
	void PROCESS_DATA_512_SEND();
	void PROCESS_DATA_513_SEND(char* tAvatarName);
	void PROCESS_DATA_514_SEND(char* tAvatarName);
	void PROCESS_DATA_515_SEND(char* tAvatarName);
	void PROCESS_DATA_516_SEND();
	void PROCESS_DATA_518_SEND(char* tAvatarName);
	void PROCESS_DATA_519_SEND(char* tAvatarName);
	void PROCESS_DATA_521_SEND(int tValue);
	void PROCESS_DATA_522_SEND(int tSort, int tValue);
	void PROCESS_DATA_523_SEND(int tSort, int tValue);
	int ReturnTribeRole( char* tAvtName1, int tTribe);
	int ReturnTribeSubMasterNum(int tTribe);
	int CheckPossibleChangeToTribe4();
	int ReturnLowOrHighTribe(int tSort);
	int ReturnTribePointForReturnFaction(int tTribe);
	void DemandGuildCreate(char* tGuildName);
	void DemandGuildInfo(int tSort);
	void DemandGuildEnter();
	void DemandGuildDelegateMaster(char* tAvtName, char* tGuildName, int tEntrustDate);
	void DemandGuildMarkEffectOff();
	void DemandGuildMarkEffectOn();
	void DemandGuildBuffSort(int tSort);
	void DemandGuildCallName(char* tAvtName, char* tCallName);
	void DemandGuildNotice(char* tString);
	void DemandGuildBreak();
	void DemandGuildExpand();
	void DemandGuildOut(char* tAvtName);
	void DemandGuildLeave();
	void DemandGuildRole(char* tAvtName, int tSort);
	void DemandTribeStatInit();
	void DemandMakeTribeWeapon(int tSort);
	void DemandInsertTribeSubMaster(char* tAvtName);
	void DemandDeleteTribeSubMaster(char* tAvtName);
	void ProcessForData(int tResult, int tSort, BYTE tData[100]);
	char* ReturnTribeName(int tTribe);
	BOOL CheckPossibleChangeAction();
	int ReturnAlliance(int tTribe);
	int ReturnDamageUpForTribeSymbol(int a2);
	int ReturnDamageDownForTribeSymbol(int a2);
	int ReturnTribeSymbolCount(int tTribe);
	int ReturnTribePointWithAlliance(int tTribe);
	int ReturnSmallTribe();
	BOOL ReturnSmallTribeAdvantage(int a2);
	BOOL CheckPossibleMonsterTarget(int aSort);
	void ReturnToTown(int tSort);
	void ReturnToTownFromZone194();
	void ReturnToZone037();
	void ReturnToTownOffAuto(int tSort);
	BOOL CheckPossibleAvatarTarget(int aSort);
	BOOL CheckRAttackRange(int tSkillNumber, float tLocation1[3], float tLocation2[3], float tRange);
	int CheckPossibleTribeAttack(int tTribe, int tZone270Team, char* tGuildName);
	void ProcessForAttackResult(ATTACK_FOR_PROTOCOL* tAttackInfo);
	int CheckMAttackFrame(MONSTER_INFO* self, float aFrame);
	int CheckMSkillFrame(MONSTER_INFO* self, float aFrame);
	int CheckGAttackFrame(int tPreviousTribe, int tWeaponClass, int aSort, float aFrame, int* tSkillNumber, int tAnimalNumber);
	int CheckSAttackFrame(int tSkillNumber, float aFrame, int tWeaponSort);
	BOOL GetPartySkillLocation(float aFront, float aLocation[3], int tSkillIndex, int index, float tLocation[3]);
	int ReturnCharacterFrameNum(char* tFileName);
	int ReturnMonsterFrameNum(char* tFileName);
	BOOL CheckTrap(int tTribe);
	BOOL CheckTrapView(int tTribe);
	int ReturnSoundIndexFromHit(int mAttackActionValue2);
	void ClearHoisundoName(int tIndex);
	int ReturnHoisundoReward(int tIndex);
	void DeleteFourGuildCostume();
};
extern PLAY mPLAY;