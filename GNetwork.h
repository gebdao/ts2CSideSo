#define MAX_RECV_BUFFER_SIZE 200000
class NETWORK
{

public:
	BOOL mCheckInitForNetwork;
	char mPacketEncryption[4];
	BOOL mCheckConnectState;
	SOCKET mSocket;
	SOCKADDR_IN mAddress;
	char mBuffer[MAX_RECV_BUFFER_SIZE];
	int mTotalRecvSize;
	BYTE mCompress[MAX_RECV_BUFFER_SIZE];

	BOOL Init();
	void Free();
	void CLOSE();
	void PROCESS_FOR_NETWORK(WPARAM wPrm, LPARAM lPrm);
	void CONNECT_1(char* tIP, int tPort, int* tResult);
	void CONNECT_2(char* tIP, int tPort, int* tResult);
	u_short InChkSum(u_short* p, int n);
	int PingToHost(char* ip_addr, int TimeoutSec);
};
extern NETWORK mNETWORK;

typedef struct icmp_hdr
{
	unsigned char icmp_type;
	unsigned char icmp_code;
	unsigned short icmp_checksum;
	unsigned short icmp_id;
	unsigned short icmp_sequence;
	DWORD icmp_timestamp;
} ICMP_HDR, * PICMP_HDR, FAR* LPICMP_HDR;

#define MAX_TRANSFER_BUFFER_SIZE	10000
class TRANSFER
{
private:

public:
	char mBuffer[MAX_TRANSFER_BUFFER_SIZE];
	int mBufferSize;

	BOOL Init();
	BOOL T_REGISTER_AVATAR_SEND(char* tID, char* tAvatarName, ACTION_INFO* tAction);
	BOOL T_CLIENT_OK_FOR_ZONE_SEND(int tTribe, int tZoneNumber);
	BOOL T_IMPROVE_ITEM_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2);
	BOOL T_PROCESS_DATA_SEND(int tSort, BYTE tData[100]);
	BOOL T_TRIBE_WORK_SEND(int tSort, BYTE tData[100]);
	BOOL T_END_PSHOP_SEND(int tSort);
	BOOL T_PSHOP_ITEM_INFO_SEND(int tValue1, int tValue2);
	BOOL T_DAILY_MISSION_SEND(int tSort, int tPage, int tIndex, int tXPost, int tYPost);
	BOOL T_CLOAK_UPGRADE_SEND(int tPage1, int tIndex1, int tPage2, int tIndex2);
	BOOL T_MAKE_ITEM_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4);
	BOOL T_SOCKET_ITEM_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2);
	BOOL T_TRIBE_BANK_SEND(int tSort, int tBankIndex);
	BOOL T_CHAR_RANK_BUFF_SEND(int tAbilityIndex);
	BOOL T_GUILD_FIND_SEND(char* tString);
	BOOL T_GUILD_NOTICE_SEND(char* tString);
	BOOL T_GUILD_WORK_SEND(int tSort, BYTE tData[500]);
	BOOL T_DEMAND_PSHOP_SEND(char* tAvtName);
	BOOL T_GET_DEPUTY_PSHOP_SEND(int tSort, int mUniqueNumber, char* tAvtName);
	BOOL T_TRIBE_NOTICE_SEND(char* tString);
	BOOL T_ANIMAL_STATE_SEND(int tSort, int tValue);
	BOOL T_PET_COMBINE_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4);// W_PET_COMBINE_SEND
	BOOL T_COMBINE_G12_PET_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4);// W_COMBINE_G12_PET_SEND
	BOOL T_DESTROY_ITEM_SEND(int tPage, int tIndex);
	BOOL T_COSTUME_STATE_SEND(int tSort, int tValue);
	BOOL T_FACTION_NOTICE_SEND(char* tString);
	BOOL T_DEMAND_BLOODSTAINED_INFO_SEND();
	BOOL T_GET_CASH_ITEM_INFO_SEND();
	BOOL T_SKY_UP_ITEM_SEND(int tPage1, int tIndex1, int tPage2, int tIndex2);
	BOOL T_TIME_EFFECT_SEND(int tValue);
	BOOL T_GET_CASH_SIZE_SEND(int tSort);
	BOOL T_DEMAND_ZONE_SERVER_INFO_2(int tSort, int tZoneNum);
	BOOL T_FAIL_MOVE_ZONE_2_SEND();
	BOOL T_DUEL_CANCEL_SEND();
	BOOL T_TRADE_CANCEL_SEND();
	BOOL T_TRADE_ANSWER_SEND(int tAnswer);
	BOOL T_TRADE_START_SEND();
	BOOL T_FRIEND_CANCEL_SEND();
	BOOL T_FRIEND_DELETE_SEND(int tFriendIndex);
	BOOL T_PARTY_CANCEL_SEND();
	BOOL T_PARTY_ANSWER_SEND(int tAnswer);
	BOOL T_PARTY_LEAVE_SEND();
	BOOL T_PARTY_BREAK_SEND();
	BOOL T_PARTY_EXILE_SEND(char* tAvtName);
	BOOL T_PARTY_MAKE_SEND();
	BOOL T_PARTY_JOIN_SEND();
	BOOL T_GUILD_CANCEL_SEND();
	BOOL T_TEACHER_CANCEL_SEND();
	BOOL T_TEACHER_END_SEND();
	BOOL T_CHANGE_AUTO_INFO(int tLifeRatio, int tManaRatio);
	BOOL T_USE_HOTKEY_ITEM_SEND(int tPage, int tIndex);
	BOOL T_COSTUME_HIDE_SEND(int tState);
	BOOL T_297_TYPE_CANCEL_SEND(int tZoneNum, int tTribe, char* tAvtName);
	BOOL T_TRADE_ASK_SEND(char* tAvtName);
	BOOL T_FRIEND_ASK_SEND(char* tAvtName);
	BOOL T_FRIEND_ANSWER_SEND(int tAnswer);
	BOOL T_FRIEND_MAKE_SEND(int tIndex);
	BOOL T_FRIEND_FIND_SEND(int tIndex);
	BOOL T_TEACHER_ASK_SEND(char* tAvtName);
	BOOL T_TEACHER_ANSWER_SEND(int tAnswer);
	BOOL T_TEACHER_START_SEND();
	BOOL T_TEACHER_STATE_SEND();
	BOOL T_GUILD_ASK_SEND(char* tAvtName);
	BOOL T_GUILD_ANSWER_SEND(int tAnswer);
	BOOL T_PARTY_ASK_SEND(char* tAvtName);
	BOOL T_DUEL_ASK_SEND(char* tAvtName, int tSort);
	BOOL T_DUEL_ANSWER_SEND(int tAnswer);
	BOOL T_DUEL_START_SEND();
	BOOL T_CONTINUE_SKILL_STAT_SEND();
	BOOL T_TRADE_MENU_SEND();
	BOOL T_TRADE_END_SEND();
	BOOL T_HERO_RANK_REWARD_CLAIM_SEND();
	BOOL T_DEMAND_HERO_RANK_SEND();
	BOOL T_AUTO_CONFIG_SEND(int tAutoState);
	BOOL T_START_PSHOP_SEND(int tSort, PSHOP_INFO* tPShopInfo);
	BOOL T_SET_DEPUTY_PSHOP_MONEY_SEND(int tMoney, int tMoney2);
	BOOL T_ABSORB_STATE_SEND(int tState);
	BOOL T_FRIEND_SEND(int tIndex);
	BOOL T_CHANGE_TO_TRIBE4_SEND();
	BOOL T_BUY_CASH_ITEM_SEND(int tItemIndex, int tPage, int tIndex, int tValue[6], int tVersion);
	BOOL T_TRIBE_VOTE_SEND(int tSort, int tTribeVoteIndex);
	BOOL T_SMELT_ITEM_SEND(int tPage1, int tIndex1, int tPage2, int tIndex2);
	BOOL T_FISHING_STATE_SEND(int tSort, float tCoordX, int tCoordZ);
	BOOL T_FISHING_RESULT_SEND(int tSort, int tFishingStep);
	BOOL T_FISHING_REWARD_SEND();
	BOOL T_TRAP_CHECK_SEND(int mIndex, float tLocation[3]);
	BOOL T_BUY_CAPSULE_SEND(int tBuySort, int tPage, int tIndex, int tX, int tY);
	BOOL T_TOWER_UPGRADE_SEND(int tZoneNum, int tTower1, int tTower2, int tPage, int tIndex);
	BOOL T_ADDITIONAL_SOCKET_SEND(int tPage1, int tIndex1, int tPage2, int tIndex2);
	BOOL T_ADD_ITEM_SEND(int tPage1, int tIndex1, int tPage2, int tIndex2);
	BOOL T_ENGRAVE_ITEM_SEND(int tPage1, int tIndex1, int tPage2, int tIndex2);
	BOOL T_BUY_BLOODSTAINED_ITEM_SEND(int tItemPage, int tItemIndex, int tPage, int tIndex, int tValue[6]);
	BOOL T_EXCHANGE_ITEM_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2);
	BOOL T_HIGH_ITEM_SEND(int tPage1, int tIndex1, int tPage2, int tIndex2);
	BOOL T_LOW_ITEM_SEND(int tPage1, int tIndex1, int tPage2, int tIndex2);
	BOOL T_MAKE_SKILL_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4);
	BOOL T_SET_DEPUTY_PSHOP_SEND(int tSort, char* tPShopName, int tDeputyPage, int tDeputyIndex, int tDeputyItem, int tPage, int tIndex, int tXPost, int tYPost, int tDeputyInfo[7]);
	BOOL T_BUY_PSHOP_SEND(DWORD mUniqueNumber, char* tAvtName, int tPage, int tIndex, int tQuantity, int tPage2, int tIndex2, int tXPost, int tYPost);
	BOOL T_GUILD_CHAT_SEND(char* tString);
	BOOL T_GENERAL_SHOUT_SEND(char* tString);
	BOOL T_PARTY_CHAT_SEND(char* tString);
	BOOL T_TRIBE_CHAT_SEND(char* tString);
	BOOL T_SECRET_CHAT_SEND(char* tAvatarName, char* tString);
	BOOL T_GENERAL_CHAT_SEND(char* tString);
	BOOL T_RAGE_SEND();
	BOOL T_CONTINUE_SKILL_USE_SEND(int tSort);
	BOOL T_BOOZE_DRINK_SEND(int tSort, int tBottleIndex);
	BOOL T_ADD_PET_ABILITY_SEND(int tPage1, int tIndex1, int tPage2, int tIndex2);
	BOOL T_LEGENDARY_UPGRADE_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4);
	BOOL T_IMPROVE_LEGENDARY_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2);
	BOOL T_UNSEAL_LEGENDARY_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4);// W_UNSEAL_LEGENDARY_SEND
	BOOL T_CRAFT_COSTUME_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4);// W_CRAFT_COSTUME_SEND
	BOOL T_USE_INVENTORY_ITEM_SEND(int tPage, int tIndex, int tValue);
	BOOL T_AVATAR_ACTION_SEND(ACTION_INFO* tAction);
	BOOL T_UPDATE_AVATAR_ACTION(ACTION_INFO* tAction);
	BOOL T_GENERAL_NOTICE_SEND(char* tMessage);
	BOOL T_PROCESS_ATTACK_SEND(ATTACK_FOR_PROTOCOL* tAttackInfo);// W_PROCESS_ATTACK_SEND
	BOOL T_AMULET_COMBINE_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4);// W_AMULET_COMBINE_SEND

};
extern TRANSFER mTRANSFER;


typedef struct
{
	void (*PROC)();
}
WORKER_FUNCTION;

class WORK
{
public:
	WORKER_FUNCTION W_FUNCTION[256];
	int mWorkerFunctionSize[256];



	static BOOL Init();
	static void W_REGISTER_AVATAR_RECV();
	static void W_BROADCAST_WORLD_INFO();
	static void W_AVATAR_EFFECT_VALUE_INFO();
	static void W_AVATAR_CHANGE_INFO_1();
	static void W_AVATAR_ACTION_RECV();
	static void W_MONSTER_ACTION_RECV();
	static void W_ITEM_ACTION_RECV();
	static void W_AVATAR_CHANGE_INFO_2_RECV();
	static void W_USE_INVENTORY_ITEM_RECV();
	static void W_IMPROVE_ITEM_RECV();
	static void W_ADD_ITEM_RECV();
	static void W_EXCHANGE_ITEM_RECV();
	static void W_HIGH_ITEM_RECV();
	static void W_LOW_ITEM_RECV();
	static void W_MAKE_ITEM_RECV();
	static void W_MAKE_SKILL_RECV();
	static void W_START_PSHOP_RECV();
	static void W_END_PSHOP_RECV();
	static void W_DEMAND_PSHOP_RECV();
	static void W_BUY_PSHOP_RECV();
	static void W_CHANGE_TO_TRIBE4_RECV();
	static void W_GENERAL_CHAT_RECV();
	static void W_SECRET_CHAT_RECV();
	static void W_GENERAL_SHOUT_RECV();
	static void W_GET_CASH_SIZE_RECV();
	static void W_BUY_CASH_ITEM_RECV();
	static void W_DUEL_ASK_RECV();
	static void W_DUEL_CANCEL_RECV();
	static void W_DUEL_ANSWER_RECV();
	static void W_DUEL_START_RECV();
	static void W_DUEL_TIME_INFO_RECV();
	static void W_DUEL_END_RECV();
	static void W_TRADE_ASK_RECV();
	static void W_TRADE_CANCEL_RECV();
	static void W_TRADE_ANSWER_RECV();
	static void W_TRADE_START_RECV();
	static void W_TRADE_STATE_RECV();
	static void W_TRADE_MENU_RECV();
	static void W_TRADE_END_RECV();
	static void W_FRIEND_ASK_RECV();
	static void W_FRIEND_CANCEL_RECV();
	static void W_FRIEND_ANSWER_RECV();
	static void W_FRIEND_MAKE_RECV();
	static void W_FRIEND_FIND_RECV();
	static void W_FRIEND_DELETE_RECV();
	static void W_TEACHER_ASK_RECV();
	static void W_TEACHER_CANCEL_RECV();
	static void W_TEACHER_ANSWER_RECV();
	static void W_TEACHER_START_RECV();
	static void W_TEACHER_END_RECV();
	static void W_TEACHER_STATE_RECV();
	static void W_PARTY_ASK_RECV();
	static void W_PARTY_CANCEL_RECV();
	static void W_PARTY_ANSWER_RECV();
	static void W_PARTY_MAKE_RECV();
	static void W_PARTY_JOIN_RECV();
	static void W_PARTY_CHAT_RECV();
	static void W_PARTY_LEAVE_RECV();
	static void W_PARTY_EXILE_RECV();
	static void W_PARTY_INFO_RECV();
	static void W_PARTY_BREAK_RECV();
	static void W_GUILD_ASK_RECV();
	static void W_GUILD_CANCEL_RECV();
	static void W_GUILD_ANSWER_RECV();
	static void W_GUILD_WORK_RECV();
	static void W_GUILD_NOTICE_RECV();
	static void W_GUILD_CHAT_RECV();
	static void W_GUILD_FIND_RECV();
	static void W_GUILD_LOGIN_INFO_RECV();
	static void W_GENERAL_NOTICE_RECV();
	static void W_PROCESS_ATTACK_RECV();
	static void W_PROCESS_DATA_RECV();
	static void W_DEMAND_ZONE_SERVER_INFO_2_RESULT();
	static void W_USE_HOTKEY_ITEM_RECV();
	static void W_TRIBE_ALLIANCE_RECV();
	static void W_049_TYPE_BATTLE_INFO_RECV();
	static void W_051_TYPE_BATTLE_INFO_RECV();
	static void W_GM_COMMAND_INFO_RECV();
	static void W_RETURN_TO_ZONE037_RECV();
	static void W_194_TYPE_BATTLE_INFO_RECV();
	static void W_194_TYPE_BATTLE_COUNTDOWN_RECV();
	static void W_ANIMAL_STATE_RECV();
	static void W_267_TYPE_BATTLE_INFO_RECV();
	static void W_241_TYPE_BATTLE_INFO_RECV();
	static void W_MAKE_BIRD_RECV();
	static void W_DESTROY_ITEM_RECV();
	static void W_270_TYPE_BATTLE_INFO();
	static void W_COSTUME_STATE_RECV();
	static void W_GET_CASH_ITEM_INFO_RECV();
	static void W_UPDATE_CASH_ITEM_INFO();
	static void W_GET_ZONE_CONNECT_USER_RECV();
	static void W_SKY_UP_ITEM_RECV();
	static void W_CONTINUE_SKILL_STAT_RECV();
	static void W_CONTINUE_SKILL_USE_RECV();
	static void W_DICE_BATTLE_RECV();
	static void W_297_TYPE_REMAIN_INFO();
	static void W_SOCKET_SYSTEM_RECV();
	static void W_297_TYPE_REMAIN_MONSTER_INFO();
	static void W_MULTI_ITEM_CREATE_RECV();
	static void W_PCROOM_PET_RECV();
	static void W_SET_HOTKEY_INVENTORY_RECV();
	static void W_CANCEL_HOISUNDO_OK_RECV();
	static void W_AUTO_CONFIG_RECV();
	static void W_SMELT_ITEM_RECV();
	static void W_88_TYPE_INFO();
	static void W_SAMGUNDO_CENTER_INFO();
	static void W_FISHING_STATE_RECV();
	static void W_FISHING_RESULT_RECV();
	static void W_FISHING_REWARD_RECV();
	static void W_TRAP_POSITION_RECV();
	static void W_FOUR_GUILD_CHALLENGE_RECV();
	static void W_DECIDE_CHALLENGE_FOURGUILD_RECV();
	static void W_FOUR_GUILD_REMAIN_INFO();
	static void W_DEPUTY_PSHOP_ACTION_RECV();
	static void W_GET_DEPUTY_PSHOP_RECV();
	static void W_SET_DEPUTY_PSHOP_RECV();
	static void W_SET_DEPUTY_PSHOP_MONEY_RECV();
	static void W_ITEM_TO_BAG_RECV();
	static void W_FACTION_NOTICE_RECV();
	static void W_BUY_CAPSULE_ITEM_RECV();
	static void W_DEMAND_HERO_RANK_CURRENT();
	static void W_GET_HERO_RANK_REWARD();
	static void W_DEMAND_HERO_RANK_OLD();
	static void W_TOWER_UPGRADE_RECV();
	static void W_TOWER_INFO_RECV();
	static void W_TOWER_REPAIR_RECV();
	static void W_319_BATTLE_TYPE_INFO_RECV();
	static void W_DAILY_MISSION_RECV();
	static void W_CLOAK_UPGRADE_RECV();
	static void W_BOOZE_DRINK_RECV();
	static void W_IMPROVE_LEGENDARY_RECV();
	static void W_COSTUME_HIDE_RECV();
	static void W_DEMAND_BLOOD_SHOP_RECV();
	static void W_BUY_BLOOD_SHOP_RECV();
	static void W_BROADCAST_INFO_RECV();
	static void W_TRIBE_WORK_RECV();
	static void W_TRIBE_NOTICE_RECV();
	static void W_TRIBE_CHAT_RECV();
	static void W_TRIBE_BANK_RECV();
	static void W_TRIBE_VOTE_RECV();


};
extern WORK mWORK[1];