#include "gxdheader.h"

WORK mWORK[1];

BOOL WORK::Init()
{

    mWORK[0].W_FUNCTION[12].PROC = W_REGISTER_AVATAR_RECV;
    mWORK[0].mWorkerFunctionSize[12] = sizeof(W_REGISTER_AVATAR_RECV_DATA);

    mWORK[0].W_FUNCTION[13].PROC = W_BROADCAST_WORLD_INFO;
    mWORK[0].mWorkerFunctionSize[13] = sizeof(W_BROADCAST_WORLD_INFO_DATA);

    mWORK[0].W_FUNCTION[15].PROC = W_AVATAR_ACTION_RECV;
    mWORK[0].mWorkerFunctionSize[15] = sizeof(W_AVATAR_ACTION_RECV_DATA);

    mWORK[0].W_FUNCTION[16].PROC = W_AVATAR_EFFECT_VALUE_INFO;
    mWORK[0].mWorkerFunctionSize[16] = sizeof(W_AVATAR_EFFECT_VALUE_INFO_DATA);

    mWORK[0].W_FUNCTION[17].PROC = W_AVATAR_CHANGE_INFO_1;
    mWORK[0].mWorkerFunctionSize[17] = sizeof(W_AVATAR_CHANGE_INFO_1_DATA);

    mWORK[0].W_FUNCTION[18].PROC = W_MONSTER_ACTION_RECV;
    mWORK[0].mWorkerFunctionSize[18] = sizeof(W_MONSTER_ACTION_RECV_DATA);

    mWORK[0].W_FUNCTION[19].PROC = W_ITEM_ACTION_RECV;
    mWORK[0].mWorkerFunctionSize[19] = sizeof(W_ITEM_ACTION_RECV_DATA);

    mWORK[0].W_FUNCTION[20].PROC = W_GENERAL_NOTICE_RECV;
    mWORK[0].mWorkerFunctionSize[20] = sizeof(W_GENERAL_NOTICE_RECV_DATA);

    mWORK[0].W_FUNCTION[21].PROC = W_PROCESS_ATTACK_RECV;
    mWORK[0].mWorkerFunctionSize[21] = sizeof(W_PROCESS_ATTACK_RECV_DATA);

    mWORK[0].W_FUNCTION[22].PROC = W_AVATAR_CHANGE_INFO_2_RECV;
    mWORK[0].mWorkerFunctionSize[22] = sizeof(W_AVATAR_CHANGE_INFO_2_RECV_DATA);

    mWORK[0].W_FUNCTION[23].PROC = W_PROCESS_DATA_RECV;
    mWORK[0].mWorkerFunctionSize[23] = sizeof(W_PROCESS_DATA_RECV_DATA);

    mWORK[0].W_FUNCTION[24].PROC = W_DEMAND_ZONE_SERVER_INFO_2_RESULT;
    mWORK[0].mWorkerFunctionSize[24] = sizeof(W_DEMAND_ZONE_SERVER_INFO_2_RESULT_DATA);

    mWORK[0].W_FUNCTION[25].PROC = W_USE_HOTKEY_ITEM_RECV;
    mWORK[0].mWorkerFunctionSize[25] = sizeof(W_USE_HOTKEY_ITEM_RECV_DATA);

    mWORK[0].W_FUNCTION[26].PROC = W_USE_INVENTORY_ITEM_RECV;
    mWORK[0].mWorkerFunctionSize[26] = sizeof(W_USE_INVENTORY_ITEM_RECV_DATA);

    mWORK[0].W_FUNCTION[27].PROC = W_IMPROVE_ITEM_RECV;
    mWORK[0].mWorkerFunctionSize[27] = sizeof(W_IMPROVE_ITEM_RECV_DATA);

    mWORK[0].W_FUNCTION[28].PROC = W_ADD_ITEM_RECV;
    mWORK[0].mWorkerFunctionSize[28] = sizeof(W_ADD_ITEM_RECV_DATA);

    mWORK[0].W_FUNCTION[29].PROC = W_EXCHANGE_ITEM_RECV;
    mWORK[0].mWorkerFunctionSize[29] = sizeof(W_EXCHANGE_ITEM_RECV_DATA);

    mWORK[0].W_FUNCTION[30].PROC = W_HIGH_ITEM_RECV;
    mWORK[0].mWorkerFunctionSize[30] = sizeof(W_HIGH_ITEM_RECV_DATA);

    mWORK[0].W_FUNCTION[31].PROC = W_LOW_ITEM_RECV;
    mWORK[0].mWorkerFunctionSize[31] = sizeof(W_LOW_ITEM_RECV_DATA);

    mWORK[0].W_FUNCTION[32].PROC = W_MAKE_ITEM_RECV;
    mWORK[0].mWorkerFunctionSize[32] = sizeof(W_MAKE_ITEM_RECV_DATA);

    mWORK[0].W_FUNCTION[33].PROC = W_MAKE_SKILL_RECV;
    mWORK[0].mWorkerFunctionSize[33] = sizeof(W_MAKE_SKILL_RECV_DATA);

    mWORK[0].W_FUNCTION[34].PROC = W_START_PSHOP_RECV;
    mWORK[0].mWorkerFunctionSize[34] = sizeof(W_START_PSHOP_RECV_DATA);

    mWORK[0].W_FUNCTION[35].PROC = W_END_PSHOP_RECV;
    mWORK[0].mWorkerFunctionSize[35] = sizeof(W_END_PSHOP_RECV_DATA);

    mWORK[0].W_FUNCTION[36].PROC = W_DEMAND_PSHOP_RECV;
    mWORK[0].mWorkerFunctionSize[36] = sizeof(W_DEMAND_PSHOP_RECV_DATA);

    /*mWORK[0].W_FUNCTION[37].PROC = W_PSHOP_ITEM_INFO_RECV;
    mWORK[0].mWorkerFunctionSize[37] = 86;*/

    mWORK[0].W_FUNCTION[38].PROC = W_BUY_PSHOP_RECV;
    mWORK[0].mWorkerFunctionSize[38] = sizeof(W_BUY_PSHOP_RECV_DATA);

    /*mWORK[0].W_FUNCTION[39].PROC = W_BUY_PSHOP_RECV;
    mWORK[0].mWorkerFunctionSize[39] = 61;*/

    mWORK[0].W_FUNCTION[40].PROC = W_CHANGE_TO_TRIBE4_RECV;
    mWORK[0].mWorkerFunctionSize[40] = sizeof(W_CHANGE_TO_TRIBE4_RECV_DATA);

    mWORK[0].W_FUNCTION[41].PROC = W_GENERAL_CHAT_RECV;
    mWORK[0].mWorkerFunctionSize[41] = sizeof(W_GENERAL_CHAT_RECV_DATA);

    mWORK[0].W_FUNCTION[42].PROC = W_SECRET_CHAT_RECV;
    mWORK[0].mWorkerFunctionSize[42] = sizeof(W_SECRET_CHAT_RECV_DATA);

    mWORK[0].W_FUNCTION[43].PROC = W_GENERAL_SHOUT_RECV;
    mWORK[0].mWorkerFunctionSize[43] = sizeof(W_GENERAL_SHOUT_RECV_DATA);

    mWORK[0].W_FUNCTION[44].PROC = W_GET_CASH_SIZE_RECV;
    mWORK[0].mWorkerFunctionSize[44] = sizeof(W_GET_CASH_SIZE_RECV_DATA);

    mWORK[0].W_FUNCTION[45].PROC = W_BUY_CASH_ITEM_RECV;
    mWORK[0].mWorkerFunctionSize[45] = sizeof(W_BUY_CASH_ITEM_RECV_DATA);

    mWORK[0].W_FUNCTION[46].PROC = W_DUEL_ASK_RECV;
    mWORK[0].mWorkerFunctionSize[46] = sizeof(W_DUEL_ASK_RECV_DATA);

    mWORK[0].W_FUNCTION[47].PROC = W_DUEL_CANCEL_RECV;
    mWORK[0].mWorkerFunctionSize[47] = sizeof(W_DUEL_CANCEL_RECV_DATA);

    mWORK[0].W_FUNCTION[48].PROC = W_DUEL_ANSWER_RECV;
    mWORK[0].mWorkerFunctionSize[48] = sizeof(W_DUEL_ANSWER_RECV_DATA);

    mWORK[0].W_FUNCTION[49].PROC = W_DUEL_START_RECV;
    mWORK[0].mWorkerFunctionSize[49] = sizeof(W_DUEL_START_RECV_DATA);

    mWORK[0].W_FUNCTION[50].PROC = W_DUEL_TIME_INFO_RECV;
    mWORK[0].mWorkerFunctionSize[50] = sizeof(W_DUEL_TIME_INFO_RECV_DATA);

    mWORK[0].W_FUNCTION[51].PROC = W_DUEL_END_RECV;
    mWORK[0].mWorkerFunctionSize[51] = sizeof(W_DUEL_END_RECV_DATA);

    mWORK[0].W_FUNCTION[52].PROC = W_TRADE_ASK_RECV;
    mWORK[0].mWorkerFunctionSize[52] = sizeof(W_TRADE_ASK_RECV_DATA);

    mWORK[0].W_FUNCTION[53].PROC = W_TRADE_CANCEL_RECV;
    mWORK[0].mWorkerFunctionSize[53] = sizeof(W_TRADE_CANCEL_RECV_DATA);

    mWORK[0].W_FUNCTION[54].PROC = W_TRADE_ANSWER_RECV;
    mWORK[0].mWorkerFunctionSize[54] = sizeof(W_TRADE_ANSWER_RECV_DATA);

    mWORK[0].W_FUNCTION[55].PROC = W_TRADE_START_RECV;
    mWORK[0].mWorkerFunctionSize[55] = sizeof(W_TRADE_START_RECV_DATA);

    mWORK[0].W_FUNCTION[56].PROC = W_TRADE_STATE_RECV;
    mWORK[0].mWorkerFunctionSize[56] = sizeof(W_TRADE_STATE_RECV_DATA);

    mWORK[0].W_FUNCTION[57].PROC = W_TRADE_MENU_RECV;
    mWORK[0].mWorkerFunctionSize[57] = sizeof(W_TRADE_MENU_RECV_DATA);

    mWORK[0].W_FUNCTION[58].PROC = W_TRADE_END_RECV;
    mWORK[0].mWorkerFunctionSize[58] = sizeof(W_TRADE_END_RECV_DATA);

    mWORK[0].W_FUNCTION[59].PROC = W_FRIEND_ASK_RECV;
    mWORK[0].mWorkerFunctionSize[59] = sizeof(W_FRIEND_ASK_RECV_DATA);

    mWORK[0].W_FUNCTION[60].PROC = W_FRIEND_CANCEL_RECV;
    mWORK[0].mWorkerFunctionSize[60] = sizeof(W_FRIEND_CANCEL_RECV_DATA);

    mWORK[0].W_FUNCTION[61].PROC = W_FRIEND_ANSWER_RECV;
    mWORK[0].mWorkerFunctionSize[61] = sizeof(W_FRIEND_ANSWER_RECV_DATA);

    mWORK[0].W_FUNCTION[62].PROC = W_FRIEND_MAKE_RECV;
    mWORK[0].mWorkerFunctionSize[62] = sizeof(W_FRIEND_MAKE_RECV_DATA);

    mWORK[0].W_FUNCTION[63].PROC = W_FRIEND_FIND_RECV;
    mWORK[0].mWorkerFunctionSize[63] = sizeof(W_FRIEND_FIND_RECV_DATA);

    mWORK[0].W_FUNCTION[64].PROC = W_FRIEND_DELETE_RECV;
    mWORK[0].mWorkerFunctionSize[64] = sizeof(W_FRIEND_DELETE_RECV_DATA);

    mWORK[0].W_FUNCTION[65].PROC = W_TEACHER_ASK_RECV;
    mWORK[0].mWorkerFunctionSize[65] = sizeof(W_TEACHER_ASK_RECV_DATA);

    mWORK[0].W_FUNCTION[66].PROC = W_TEACHER_CANCEL_RECV;
    mWORK[0].mWorkerFunctionSize[66] = sizeof(W_TEACHER_CANCEL_RECV_DATA);

    mWORK[0].W_FUNCTION[67].PROC = W_TEACHER_ANSWER_RECV;
    mWORK[0].mWorkerFunctionSize[67] = sizeof(W_TEACHER_ANSWER_RECV_DATA);

    mWORK[0].W_FUNCTION[68].PROC = W_TEACHER_START_RECV;
    mWORK[0].mWorkerFunctionSize[68] = sizeof(W_TEACHER_START_RECV_DATA);

    mWORK[0].W_FUNCTION[69].PROC = W_TEACHER_END_RECV;
    mWORK[0].mWorkerFunctionSize[69] = sizeof(W_TEACHER_END_RECV_DATA);

    mWORK[0].W_FUNCTION[70].PROC = W_TEACHER_STATE_RECV;
    mWORK[0].mWorkerFunctionSize[70] = sizeof(W_TEACHER_STATE_RECV_DATA);

    mWORK[0].W_FUNCTION[71].PROC = W_PARTY_ASK_RECV;
    mWORK[0].mWorkerFunctionSize[71] = sizeof(W_PARTY_ASK_RECV_DATA);

    mWORK[0].W_FUNCTION[72].PROC = W_PARTY_CANCEL_RECV;
    mWORK[0].mWorkerFunctionSize[72] = sizeof(W_PARTY_CANCEL_RECV_DATA);

    mWORK[0].W_FUNCTION[73].PROC = W_PARTY_ANSWER_RECV;
    mWORK[0].mWorkerFunctionSize[73] = sizeof(W_PARTY_ANSWER_RECV_DATA);

    mWORK[0].W_FUNCTION[74].PROC = W_PARTY_MAKE_RECV;
    mWORK[0].mWorkerFunctionSize[74] = sizeof(W_PARTY_MAKE_RECV_DATA);//70;

    mWORK[0].W_FUNCTION[75].PROC = W_PARTY_JOIN_RECV;
    mWORK[0].mWorkerFunctionSize[75] = sizeof(W_PARTY_JOIN_RECV_DATA);

    mWORK[0].W_FUNCTION[76].PROC = W_PARTY_CHAT_RECV;
    mWORK[0].mWorkerFunctionSize[76] = sizeof(W_PARTY_CHAT_RECV_DATA);

    mWORK[0].W_FUNCTION[77].PROC = W_PARTY_LEAVE_RECV;
    mWORK[0].mWorkerFunctionSize[77] = sizeof(W_PARTY_LEAVE_RECV_DATA);

    mWORK[0].W_FUNCTION[78].PROC = W_PARTY_EXILE_RECV;
    mWORK[0].mWorkerFunctionSize[78] = sizeof(W_PARTY_EXILE_RECV_DATA);

    mWORK[0].W_FUNCTION[79].PROC = W_PARTY_BREAK_RECV;
    mWORK[0].mWorkerFunctionSize[79] = sizeof(W_PARTY_BREAK_RECV_DATA);//18;

    mWORK[0].W_FUNCTION[80].PROC = W_GUILD_ASK_RECV;
    mWORK[0].mWorkerFunctionSize[80] = sizeof(W_GUILD_ASK_RECV_DATA);

    mWORK[0].W_FUNCTION[81].PROC = W_GUILD_CANCEL_RECV;
    mWORK[0].mWorkerFunctionSize[81] = sizeof(W_GUILD_CANCEL_RECV_DATA);

    mWORK[0].W_FUNCTION[82].PROC = W_GUILD_ANSWER_RECV;
    mWORK[0].mWorkerFunctionSize[82] = sizeof(W_GUILD_ANSWER_RECV_DATA);

    mWORK[0].W_FUNCTION[83].PROC = W_GUILD_WORK_RECV;
    mWORK[0].mWorkerFunctionSize[83] = sizeof(W_GUILD_WORK_RECV_DATA);

    mWORK[0].W_FUNCTION[84].PROC = W_GUILD_NOTICE_RECV;
    mWORK[0].mWorkerFunctionSize[84] = sizeof(W_GUILD_NOTICE_RECV_DATA);

    mWORK[0].W_FUNCTION[85].PROC = W_GUILD_CHAT_RECV;
    mWORK[0].mWorkerFunctionSize[85] = sizeof(W_GUILD_CHAT_RECV_DATA);

    mWORK[0].W_FUNCTION[86].PROC = W_GUILD_FIND_RECV;
    mWORK[0].mWorkerFunctionSize[86] = sizeof(W_GUILD_FIND_RECV_DATA);

    mWORK[0].W_FUNCTION[87].PROC = W_GUILD_LOGIN_INFO_RECV;
    mWORK[0].mWorkerFunctionSize[87] = sizeof(W_GUILD_LOGIN_INFO_RECV_DATA);

    mWORK[0].W_FUNCTION[88].PROC = W_TRIBE_WORK_RECV;
    mWORK[0].mWorkerFunctionSize[88] = sizeof(W_TRIBE_WORK_RECV_DATA);

    mWORK[0].W_FUNCTION[89].PROC = W_TRIBE_NOTICE_RECV;
    mWORK[0].mWorkerFunctionSize[89] = sizeof(W_TRIBE_NOTICE_RECV_DATA);

    mWORK[0].W_FUNCTION[90].PROC = W_TRIBE_CHAT_RECV;
    mWORK[0].mWorkerFunctionSize[90] = sizeof(W_TRIBE_CHAT_RECV_DATA);

    mWORK[0].W_FUNCTION[91].PROC = W_TRIBE_BANK_RECV;
    mWORK[0].mWorkerFunctionSize[91] = sizeof(W_TRIBE_BANK_RECV_DATA);

    mWORK[0].W_FUNCTION[92].PROC = W_TRIBE_VOTE_RECV;
    mWORK[0].mWorkerFunctionSize[92] = sizeof(W_TRIBE_VOTE_RECV_DATA);

    mWORK[0].W_FUNCTION[93].PROC = W_TRIBE_ALLIANCE_RECV;
    mWORK[0].mWorkerFunctionSize[93] = sizeof(W_TRIBE_ALLIANCE_RECV_DATA);

    mWORK[0].W_FUNCTION[94].PROC = W_BROADCAST_INFO_RECV;
    mWORK[0].mWorkerFunctionSize[94] = sizeof(W_BROADCAST_INFO_RECV_DATA);

    mWORK[0].W_FUNCTION[95].PROC = W_049_TYPE_BATTLE_INFO_RECV;
    mWORK[0].mWorkerFunctionSize[95] = sizeof(W_049_TYPE_BATTLE_INFO_RECV_DATA);

    mWORK[0].W_FUNCTION[96].PROC = W_051_TYPE_BATTLE_INFO_RECV;
    mWORK[0].mWorkerFunctionSize[96] = sizeof(W_051_TYPE_BATTLE_INFO_RECV_DATA);

    mWORK[0].W_FUNCTION[97].PROC = W_GM_COMMAND_INFO_RECV;
    mWORK[0].mWorkerFunctionSize[97] = sizeof(W_GM_COMMAND_INFO_RECV_DATA);

    mWORK[0].W_FUNCTION[98].PROC = W_RETURN_TO_ZONE037_RECV;
    mWORK[0].mWorkerFunctionSize[98] = sizeof(W_RETURN_TO_ZONE037_RECV_DATA);

    /*mWORK[0].W_FUNCTION[99].PROC = W_XIGNCODE_RECV;
    mWORK[0].mWorkerFunctionSize[99] = 1;*/

    mWORK[0].W_FUNCTION[100].PROC = W_194_TYPE_BATTLE_INFO_RECV;
    mWORK[0].mWorkerFunctionSize[100] = sizeof(W_194_TYPE_BATTLE_INFO_RECV_DATA);

    mWORK[0].W_FUNCTION[101].PROC = W_194_TYPE_BATTLE_COUNTDOWN_RECV;
    mWORK[0].mWorkerFunctionSize[101] = sizeof(W_194_TYPE_BATTLE_COUNTDOWN_RECV_DATA);

    mWORK[0].W_FUNCTION[102].PROC = W_ANIMAL_STATE_RECV;
    mWORK[0].mWorkerFunctionSize[102] = sizeof(W_ANIMAL_STATE_RECV_DATA);

    mWORK[0].W_FUNCTION[103].PROC = W_267_TYPE_BATTLE_INFO_RECV;
    mWORK[0].mWorkerFunctionSize[103] = sizeof(W_267_TYPE_BATTLE_INFO_RECV_DATA);

    mWORK[0].W_FUNCTION[104].PROC = W_241_TYPE_BATTLE_INFO_RECV;
    mWORK[0].mWorkerFunctionSize[104] = sizeof(W_241_TYPE_BATTLE_INFO_RECV_DATA);

    mWORK[0].W_FUNCTION[105].PROC = W_MAKE_BIRD_RECV;
    mWORK[0].mWorkerFunctionSize[105] = sizeof(W_MAKE_BIRD_RECV_DATA);

    mWORK[0].W_FUNCTION[106].PROC = W_DESTROY_ITEM_RECV;
    mWORK[0].mWorkerFunctionSize[106] = sizeof(W_DESTROY_ITEM_RECV_DATA);

    mWORK[0].W_FUNCTION[107].PROC = W_270_TYPE_BATTLE_INFO;
    mWORK[0].mWorkerFunctionSize[107] = sizeof(W_270_TYPE_BATTLE_INFO_DATA);

    mWORK[0].W_FUNCTION[108].PROC = W_COSTUME_STATE_RECV;
    mWORK[0].mWorkerFunctionSize[108] = sizeof(W_COSTUME_STATE_RECV_DATA);

    mWORK[0].W_FUNCTION[109].PROC = W_GET_CASH_ITEM_INFO_RECV;
    mWORK[0].mWorkerFunctionSize[109] = sizeof(W_GET_CASH_ITEM_INFO_RECV_DATA);

    mWORK[0].W_FUNCTION[110].PROC = W_UPDATE_CASH_ITEM_INFO;
    mWORK[0].mWorkerFunctionSize[110] = sizeof(W_UPDATE_CASH_ITEM_INFO_DATA);

    mWORK[0].W_FUNCTION[111].PROC = W_GET_ZONE_CONNECT_USER_RECV;
    mWORK[0].mWorkerFunctionSize[111] = 9;

    mWORK[0].W_FUNCTION[112].PROC = W_SKY_UP_ITEM_RECV;
    mWORK[0].mWorkerFunctionSize[112] = sizeof(W_SKY_UP_ITEM_RECV_DATA);

    mWORK[0].W_FUNCTION[113].PROC = W_CONTINUE_SKILL_STAT_RECV;
    mWORK[0].mWorkerFunctionSize[113] = sizeof(W_CONTINUE_SKILL_STAT_RECV_DATA);

    mWORK[0].W_FUNCTION[114].PROC = W_CONTINUE_SKILL_USE_RECV;
    mWORK[0].mWorkerFunctionSize[114] = sizeof(W_CONTINUE_SKILL_USE_RECV_DATA);

    mWORK[0].W_FUNCTION[115].PROC = W_DICE_BATTLE_RECV;
    mWORK[0].mWorkerFunctionSize[115] = sizeof(W_DICE_BATTLE_RECV_DATA);

    mWORK[0].W_FUNCTION[116].PROC = W_297_TYPE_REMAIN_INFO;
    mWORK[0].mWorkerFunctionSize[116] = sizeof(W_297_TYPE_REMAIN_INFO_DATA);

    mWORK[0].W_FUNCTION[117].PROC = W_SOCKET_SYSTEM_RECV;
    mWORK[0].mWorkerFunctionSize[117] = sizeof(W_SOCKET_SYSTEM_RECV_DATA);

    mWORK[0].W_FUNCTION[118].PROC = W_297_TYPE_REMAIN_MONSTER_INFO;
    mWORK[0].mWorkerFunctionSize[118] = sizeof(W_297_TYPE_REMAIN_MONSTER_INFO_DATA);

    mWORK[0].W_FUNCTION[119].PROC = W_MULTI_ITEM_CREATE_RECV;
    mWORK[0].mWorkerFunctionSize[119] = sizeof(W_MULTI_ITEM_CREATE_RECV_DATA);

    mWORK[0].W_FUNCTION[120].PROC = W_SET_HOTKEY_INVENTORY_RECV;
    mWORK[0].mWorkerFunctionSize[120] = sizeof(W_SET_HOTKEY_INVENTORY_RECV_DATA);

    mWORK[0].W_FUNCTION[121].PROC = W_CANCEL_HOISUNDO_OK_RECV;
    mWORK[0].mWorkerFunctionSize[121] = sizeof(W_CANCEL_HOISUNDO_OK_RECV_DATA);

    mWORK[0].W_FUNCTION[122].PROC = W_PCROOM_PET_RECV;
    mWORK[0].mWorkerFunctionSize[122] = sizeof(W_PCROOM_PET_RECV_DATA);

    mWORK[0].W_FUNCTION[123].PROC = W_AUTO_CONFIG_RECV;
    mWORK[0].mWorkerFunctionSize[123] = sizeof(W_AUTO_CONFIG_RECV_DATA);

    mWORK[0].W_FUNCTION[124].PROC = W_SMELT_ITEM_RECV;
    mWORK[0].mWorkerFunctionSize[124] = sizeof(W_SMELT_ITEM_RECV_DATA);

    mWORK[0].W_FUNCTION[125].PROC = W_88_TYPE_INFO;
    mWORK[0].mWorkerFunctionSize[125] = 9;

    mWORK[0].W_FUNCTION[126].PROC = W_SAMGUNDO_CENTER_INFO;
    mWORK[0].mWorkerFunctionSize[126] = sizeof(W_SAMGUNDO_CENTER_INFO_DATA);

    mWORK[0].W_FUNCTION[127].PROC = W_FISHING_STATE_RECV;
    mWORK[0].mWorkerFunctionSize[127] = sizeof(W_FISHING_STATE_RECV_DATA);

    mWORK[0].W_FUNCTION[128].PROC = W_FISHING_RESULT_RECV;
    mWORK[0].mWorkerFunctionSize[128] = sizeof(W_FISHING_RESULT_RECV_DATA);

    mWORK[0].W_FUNCTION[129].PROC = W_FISHING_REWARD_RECV;
    mWORK[0].mWorkerFunctionSize[129] = sizeof(W_FISHING_REWARD_RECV_DATA);

    mWORK[0].W_FUNCTION[130].PROC = W_TRAP_POSITION_RECV;
    mWORK[0].mWorkerFunctionSize[130] = sizeof(W_TRAP_POSITION_RECV_DATA);

    mWORK[0].W_FUNCTION[131].PROC = W_FOUR_GUILD_CHALLENGE_RECV;
    mWORK[0].mWorkerFunctionSize[131] = sizeof(W_FOUR_GUILD_CHALLENGE_RECV_DATA);

    mWORK[0].W_FUNCTION[132].PROC = W_DECIDE_CHALLENGE_FOURGUILD_RECV;
    mWORK[0].mWorkerFunctionSize[132] = sizeof(W_DECIDE_CHALLENGE_FOURGUILD_RECV_DATA);

    mWORK[0].W_FUNCTION[133].PROC = W_FOUR_GUILD_REMAIN_INFO;
    mWORK[0].mWorkerFunctionSize[133] = sizeof(W_FOUR_GUILD_REMAIN_INFO_DATA);

    mWORK[0].W_FUNCTION[134].PROC = W_DEPUTY_PSHOP_ACTION_RECV;
    mWORK[0].mWorkerFunctionSize[134] = sizeof(W_DEPUTY_PSHOP_ACTION_RECV_DATA);

    mWORK[0].W_FUNCTION[135].PROC = W_GET_DEPUTY_PSHOP_RECV;
    mWORK[0].mWorkerFunctionSize[135] = sizeof(W_GET_DEPUTY_PSHOP_RECV_DATA);

    mWORK[0].W_FUNCTION[136].PROC = W_SET_DEPUTY_PSHOP_RECV;
    mWORK[0].mWorkerFunctionSize[136] = sizeof(W_SET_DEPUTY_PSHOP_RECV_DATA);

    mWORK[0].W_FUNCTION[137].PROC = W_SET_DEPUTY_PSHOP_MONEY_RECV;
    mWORK[0].mWorkerFunctionSize[137] = sizeof(W_SET_DEPUTY_PSHOP_MONEY_RECV_DATA);

    mWORK[0].W_FUNCTION[138].PROC = W_ITEM_TO_BAG_RECV;
    mWORK[0].mWorkerFunctionSize[138] = sizeof(W_ITEM_TO_BAG_RECV_DATA);

    mWORK[0].W_FUNCTION[139].PROC = W_FACTION_NOTICE_RECV;
    mWORK[0].mWorkerFunctionSize[139] = sizeof(W_FACTION_NOTICE_RECV_DATA);

    /*mWORK[0].W_FUNCTION[140].PROC = W_FACTION_NOTICE_RECV;
    mWORK[0].mWorkerFunctionSize[140] = 79;*/

    mWORK[0].W_FUNCTION[141].PROC = W_BUY_CAPSULE_ITEM_RECV;
    mWORK[0].mWorkerFunctionSize[141] = sizeof(W_BUY_CAPSULE_ITEM_RECV_DATA);

    /*mWORK[0].W_FUNCTION[142].PROC = W_FACTION_NOTICE_RECV; // GOLDEN_MOON_RECV
    mWORK[0].mWorkerFunctionSize[142] = sizeof(W_FACTION_NOTICE_RECV_DATA);*/

    mWORK[0].W_FUNCTION[148].PROC = W_DEMAND_HERO_RANK_CURRENT;
    mWORK[0].mWorkerFunctionSize[148] = sizeof(W_DEMAND_HERO_RANK_CURRENT_DATA);

    mWORK[0].W_FUNCTION[149].PROC = W_GET_HERO_RANK_REWARD;
    mWORK[0].mWorkerFunctionSize[149] = sizeof(W_GET_HERO_RANK_REWARD_DATA);

    mWORK[0].W_FUNCTION[150].PROC = W_DEMAND_HERO_RANK_OLD;
    mWORK[0].mWorkerFunctionSize[150] = sizeof(W_DEMAND_HERO_RANK_OLD_DATA);

    mWORK[0].W_FUNCTION[151].PROC = W_TOWER_UPGRADE_RECV;
    mWORK[0].mWorkerFunctionSize[151] = sizeof(W_TOWER_UPGRADE_RECV_DATA);

    mWORK[0].W_FUNCTION[152].PROC = W_TOWER_INFO_RECV;
    mWORK[0].mWorkerFunctionSize[152] = sizeof(W_TOWER_INFO_RECV_DATA);

    mWORK[0].W_FUNCTION[153].PROC = W_TOWER_REPAIR_RECV;
    mWORK[0].mWorkerFunctionSize[153] = 14;

    mWORK[0].W_FUNCTION[157].PROC = W_319_BATTLE_TYPE_INFO_RECV;
    mWORK[0].mWorkerFunctionSize[157] = sizeof(W_319_BATTLE_TYPE_INFO_RECV_DATA);

    mWORK[0].W_FUNCTION[163].PROC = W_DAILY_MISSION_RECV;
    mWORK[0].mWorkerFunctionSize[163] = sizeof(W_DAILY_MISSION_RECV_DATA);//25;

    mWORK[0].W_FUNCTION[164].PROC = W_CLOAK_UPGRADE_RECV;
    mWORK[0].mWorkerFunctionSize[164] = sizeof(W_CLOAK_UPGRADE_RECV_DATA);

    mWORK[0].W_FUNCTION[165].PROC = W_BOOZE_DRINK_RECV;
    mWORK[0].mWorkerFunctionSize[165] = sizeof(W_BOOZE_DRINK_RECV_DATA);

    /*mWORK[0].W_FUNCTION[171].PROC = W_LEGENDARY_UPGRADE_RECV;
    mWORK[0].mWorkerFunctionSize[171] = 37;*/

    mWORK[0].W_FUNCTION[172].PROC = W_IMPROVE_LEGENDARY_RECV;
    mWORK[0].mWorkerFunctionSize[172] = sizeof(W_IMPROVE_LEGENDARY_RECV_DATA);

    mWORK[0].W_FUNCTION[177].PROC = W_COSTUME_HIDE_RECV;
    mWORK[0].mWorkerFunctionSize[177] = sizeof(W_COSTUME_HIDE_RECV_DATA);

    mWORK[0].W_FUNCTION[178].PROC = W_DEMAND_BLOOD_SHOP_RECV;
    mWORK[0].mWorkerFunctionSize[178] = sizeof(W_DEMAND_BLOOD_SHOP_RECV_DATA);

    mWORK[0].W_FUNCTION[179].PROC = W_BUY_BLOOD_SHOP_RECV;
    mWORK[0].mWorkerFunctionSize[179] = sizeof(W_BUY_BLOOD_SHOP_RECV_DATA);

   /* mWORK[0].W_FUNCTION[180].PROC = W_ENGRAVE_ITEM_RECV;
    mWORK[0].mWorkerFunctionSize[180] = 21;*/

    mWORK[0].W_FUNCTION[181].PROC = W_PARTY_INFO_RECV;
    mWORK[0].mWorkerFunctionSize[181] = sizeof(W_PARTY_INFO_RECV_DATA);

    return 1;
}

void WORK::W_REGISTER_AVATAR_RECV()
{
    W_REGISTER_AVATAR_RECV_DATA* r = (W_REGISTER_AVATAR_RECV_DATA*)&mNETWORK.mBuffer[0];

    CopyMemory(&mMYINFO.mAvatarInfo, &r->tAvatarInfo, sizeof(AVATAR_INFO));
    CopyMemory(&mMYINFO.mAvatarEffectValue, &r->tEffectValue, (MAX_AVATAR_EFFECT_SORT_NUM * 8));

    for (int i = 0; i < mPLAY.MAX_AVATAR_OBJECT; i++)
        mPLAY.mAVATAR_OBJECT[i].Free();
    for (int i = 0; i < mPLAY.MAX_NPC_OBJECT; i++)
        mPLAY.mNPC_OBJECT[i].Free();
    for (int i = 0; i < mPLAY.MAX_MONSTER_OBJECT; i++)
        mPLAY.mMONSTER_OBJECT[i].Free();
    for (int i = 0; i < mPLAY.MAX_ITEM_OBJECT; i++)
        mPLAY.mITEM_OBJECT[i].Free();
    for (int i = 0; i < mPLAY.MAX_EFFECT_OBJECT; i++)
        mPLAY.mEFFECT_OBJECT[i].Free();
    for (int i = 0; i < mPLAY.MAX_PROXY_OBJECT; i++)
        mPLAY.mPROXY_OBJECT[i].Free();

    mMAIN.mMainMode = 6;
    mMAIN.mSubMode = 0;
    mMAIN.mTicks = 0;
    if (mMYINFO.mAvatarInfo.aTitle >= 1)
    {
        if (mMYINFO.mAvatarInfo.aTitle >= 100)
        {
            if (mMYINFO.mAvatarInfo.aTitle >= 200)
            {
                if (mMYINFO.mAvatarInfo.aTitle >= 300)
                {
                    if (mMYINFO.mAvatarInfo.aTitle >= 400)
                        mMYINFO.iTribeCallType = 5;
                    else
                        mMYINFO.iTribeCallType = 4;
                }
                else
                {
                    mMYINFO.iTribeCallType = 3;
                }
            }
            else
            {
                mMYINFO.iTribeCallType = 2;
            }
        }
        else
        {
            mMYINFO.iTribeCallType = 1;
        }
    }
    else
    {
        mMYINFO.iTribeCallType = 0;
    }
    mMYINFO.mMixSkillWaitingTime[0] = 0;
    mMYINFO.mMixSkillWaitingTime[1] = 0;
    mMYINFO.mBottleIndex = mMYINFO.mAvatarInfo.aWineDrinkIndex;
    if (mMYINFO.mMoveZoneSort == 5)
    {
        if ((mMYINFO.mNextZoneNumber == 84
            || mMYINFO.uLoginPremium != 2 && mMYINFO.mAvatarInfo.aPremiumService <= 0 && mMYINFO.uLoginPremium != 3)
            && !mMYINFO.mNetworkLock)
        {
            mPLAY.PROCESS_DATA_207_SEND(mMYINFO.mMoveZoneValue);
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
        }
    }
    else if (mMYINFO.mMoveZoneSort == 8)
    {
        if (!mMYINFO.mNetworkLock)
        {
            mTRANSFER.T_USE_INVENTORY_ITEM_SEND( mMYINFO.mUseInventoryPage, mMYINFO.mUseInventoryIndex, 8 );
            mMYINFO.mNetworkLock = 1;
            mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
        }
    }
    else if (mMYINFO.mMoveZoneSort == 9 && !mMYINFO.mNetworkLock)
    {
        mTRANSFER.T_USE_INVENTORY_ITEM_SEND( mMYINFO.mUseInventoryPage, mMYINFO.mUseInventoryIndex, 9 );
        mMYINFO.mNetworkLock = 1;
        mMYINFO.mSendItemPacketPostTime = mAPP->hPresentElapsedSeconds;
    }
    mMYINFO.mWarningDisplayState = 1;
}

void WORK::W_BROADCAST_WORLD_INFO()
{
    W_BROADCAST_WORLD_INFO_DATA* r = (W_BROADCAST_WORLD_INFO_DATA*)&mNETWORK.mBuffer[0];

    CopyMemory(&mPLAY.mWorldInfo, &r->mWorldInfo, sizeof(WORLD_INFO));
    CopyMemory(&mPLAY.mTribeInfo, &r->mTribeInfo, sizeof(TRIBE_INFO));
}

void WORK::W_AVATAR_EFFECT_VALUE_INFO()
{
    int v0; 
    int v1;
    int i;
    int tAvatarObjectIndex;
    W_AVATAR_EFFECT_VALUE_INFO_DATA* r = (W_AVATAR_EFFECT_VALUE_INFO_DATA*)&mNETWORK.mBuffer[0];

    tAvatarObjectIndex = -1;
    for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT; ++i)
    {
        if (mPLAY.mAVATAR_OBJECT[i].mCheckValidState && mPLAY.mAVATAR_OBJECT[i].mIndex == r->tUserIndex && mPLAY.mAVATAR_OBJECT[i].mUniqueNumber == r->tUniqueNumber)
        {
            tAvatarObjectIndex = i;
            break;
        }
    }
    if (tAvatarObjectIndex != -1)
    {
        if (tAvatarObjectIndex)
        {
            for (i = 0; i < MAX_AVATAR_EFFECT_SORT_NUM; ++i)
            {
                v1 = r->mEffectValueState[i];
                if (v1 == 1)
                {
                    mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[i] = r->mEffectValue[i][0];
                    switch (i)
                    {
                    case 15:
                        GSOUND::Play(&mGDATA.mSOUND_5[351], 0, 100);
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDamageUpForGarudaEffect = 1;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDamageUpForGarudaUpdateTime = 0.0;
                        break;
                    case 16:
                        GSOUND::Play(&mGDATA.mSOUND_5[352], 0, 100);
                        break;
                    case 17:
                        GSOUND::Play(&mGDATA.mSOUND_5[392], 0, 100);
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mAtkRateBookForEffect = 1;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mAtkRateBookForEffectUpdateTime = 0.0;
                        break;
                    case 18:
                        GSOUND::Play(&mGDATA.mSOUND_5[393], 0, 100);
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDodgeBookForEffect = 1;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDodgeBookForEffectUpdateTime = 0.0;
                        break;
                    case 9:
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[29] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[30] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[31] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[32] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[33] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[34] = 0;
                        break;
                    case 29:
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[9] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[30] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[31] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[32] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[33] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[34] = 0;
                        break;
                    case 30:
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[9] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[29] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[31] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[32] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[33] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[34] = 0;
                        break;
                    case 31:
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[9] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[29] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[30] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[32] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[33] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[34] = 0;
                        break;
                    case 32:
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[9] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[29] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[30] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[31] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[33] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[34] = 0;
                        break;
                    case 33:
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[9] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[29] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[30] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[31] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[32] = 0;
                        break;
                    case 34:
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[9] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[29] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[30] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[31] = 0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[32] = 0;
                        break;
                    }
                }
                else if (v1 == 2)
                {
                    mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[i] = 0;
                }
            }
        }
        else
        {
            for (i = 0; i < MAX_AVATAR_EFFECT_SORT_NUM; ++i)
            {
                v0 = r->mEffectValueState[i];
                if (v0 == 1)
                {
                    mMYINFO.mAvatarEffectValue[i][0] = r->mEffectValue[i][0];
                    mMYINFO.mAvatarEffectValue[i][1] = r->mEffectValue[i][1];
                    mMYINFO.mElementValue[i] = mAPP[0].hPresentElapsedSeconds;
                    mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[i] = r->mEffectValue[i][0];
                    switch (i)
                    {
                    case 15:
                        GSOUND::Play(&mGDATA.mSOUND_5[351], 0, 100);
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDamageUpForGarudaEffect = 1;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDamageUpForGarudaUpdateTime = 0.0;
                        break;
                    case 16:
                        GSOUND::Play(&mGDATA.mSOUND_5[352], 0, 100);
                        break;
                    case 17:
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mAtkRateBookForEffect = 1;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mAtkRateBookForEffectUpdateTime = 0.0;
                        GSOUND::Play(&mGDATA.mSOUND_5[392], 0, 100);
                        break;
                    case 18:
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDodgeBookForEffect = 1;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDodgeBookForEffectUpdateTime = 0.0;
                        GSOUND::Play(&mGDATA.mSOUND_5[393], 0, 100);
                        break;
                    case 9:
                        mMYINFO.mAvatarEffectValue[29][0] = 0;
                        mMYINFO.mElementValue[29] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[29] = 0;
                        mMYINFO.mAvatarEffectValue[30][0] = 0;
                        mMYINFO.mElementValue[30] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[30] = 0;
                        mMYINFO.mAvatarEffectValue[31][0] = 0;
                        mMYINFO.mElementValue[31] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[31] = 0;
                        mMYINFO.mAvatarEffectValue[32][0] = 0;
                        mMYINFO.mElementValue[32] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[32] = 0;
                        mMYINFO.mAvatarEffectValue[33][0] = 0;
                        mMYINFO.mElementValue[33] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[33] = 0;
                        mMYINFO.mAvatarEffectValue[34][0] = 0;
                        mMYINFO.mElementValue[34] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[34] = 0;
                        break;
                    case 29:
                        mMYINFO.mAvatarEffectValue[9][0] = 0;
                        mMYINFO.mElementValue[9] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[9] = 0;
                        mMYINFO.mAvatarEffectValue[30][0] = 0;
                        mMYINFO.mElementValue[30] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[30] = 0;
                        mMYINFO.mAvatarEffectValue[31][0] = 0;
                        mMYINFO.mElementValue[31] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[31] = 0;
                        mMYINFO.mAvatarEffectValue[32][0] = 0;
                        mMYINFO.mElementValue[32] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[32] = 0;
                        mMYINFO.mAvatarEffectValue[33][0] = 0;
                        mMYINFO.mElementValue[33] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[33] = 0;
                        mMYINFO.mAvatarEffectValue[34][0] = 0;
                        mMYINFO.mElementValue[34] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[34] = 0;
                        break;
                    case 30:
                        mMYINFO.mAvatarEffectValue[9][0] = 0;
                        mMYINFO.mElementValue[9] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[9] = 0;
                        mMYINFO.mAvatarEffectValue[29][0] = 0;
                        mMYINFO.mElementValue[29] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[29] = 0;
                        mMYINFO.mAvatarEffectValue[31][0] = 0;
                        mMYINFO.mElementValue[31] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[31] = 0;
                        mMYINFO.mAvatarEffectValue[32][0] = 0;
                        mMYINFO.mElementValue[32] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[32] = 0;
                        mMYINFO.mAvatarEffectValue[33][0] = 0;
                        mMYINFO.mElementValue[33] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[33] = 0;
                        mMYINFO.mAvatarEffectValue[34][0] = 0;
                        mMYINFO.mElementValue[34] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[34] = 0;
                        break;
                    case 31:
                        mMYINFO.mAvatarEffectValue[9][0] = 0;
                        mMYINFO.mElementValue[9] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[9] = 0;
                        mMYINFO.mAvatarEffectValue[29][0] = 0;
                        mMYINFO.mElementValue[29] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[29] = 0;
                        mMYINFO.mAvatarEffectValue[30][0] = 0;
                        mMYINFO.mElementValue[30] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[30] = 0;
                        mMYINFO.mAvatarEffectValue[32][0] = 0;
                        mMYINFO.mElementValue[32] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[32] = 0;
                        mMYINFO.mAvatarEffectValue[33][0] = 0;
                        mMYINFO.mElementValue[33] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[33] = 0;
                        mMYINFO.mAvatarEffectValue[34][0] = 0;
                        mMYINFO.mElementValue[34] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[34] = 0;
                        break;
                    case 32:
                        mMYINFO.mAvatarEffectValue[9][0] = 0;
                        mMYINFO.mElementValue[9] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[9] = 0;
                        mMYINFO.mAvatarEffectValue[29][0] = 0;
                        mMYINFO.mElementValue[29] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[29] = 0;
                        mMYINFO.mAvatarEffectValue[30][0] = 0;
                        mMYINFO.mElementValue[30] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[30] = 0;
                        mMYINFO.mAvatarEffectValue[31][0] = 0;
                        mMYINFO.mElementValue[31] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[31] = 0;
                        mMYINFO.mAvatarEffectValue[33][0] = 0;
                        mMYINFO.mElementValue[33] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[33] = 0;
                        mMYINFO.mAvatarEffectValue[34][0] = 0;
                        mMYINFO.mElementValue[34] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[34] = 0;
                        break;
                    case 33:
                        mMYINFO.mAvatarEffectValue[9][0] = 0;
                        mMYINFO.mElementValue[9] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[9] = 0;
                        mMYINFO.mAvatarEffectValue[29][0] = 0;
                        mMYINFO.mElementValue[29] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[29] = 0;
                        mMYINFO.mAvatarEffectValue[30][0] = 0;
                        mMYINFO.mElementValue[30] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[30] = 0;
                        mMYINFO.mAvatarEffectValue[31][0] = 0;
                        mMYINFO.mElementValue[31] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[31] = 0;
                        mMYINFO.mAvatarEffectValue[32][0] = 0;
                        mMYINFO.mElementValue[32] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[32] = 0;
                        mMYINFO.mAvatarEffectValue[34][0] = 0;
                        mMYINFO.mElementValue[34] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[34] = 0;
                        break;
                    case 34:
                        mMYINFO.mAvatarEffectValue[9][0] = 0;
                        mMYINFO.mElementValue[9] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[9] = 0;
                        mMYINFO.mAvatarEffectValue[29][0] = 0;
                        mMYINFO.mElementValue[29] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[29] = 0;
                        mMYINFO.mAvatarEffectValue[30][0] = 0;
                        mMYINFO.mElementValue[30] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[30] = 0;
                        mMYINFO.mAvatarEffectValue[31][0] = 0;
                        mMYINFO.mElementValue[31] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[31] = 0;
                        mMYINFO.mAvatarEffectValue[32][0] = 0;
                        mMYINFO.mElementValue[32] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[32] = 0;
                        mMYINFO.mAvatarEffectValue[33][0] = 0;
                        mMYINFO.mElementValue[33] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[33] = 0;
                        break;
                    case 35:
                        mMYINFO.mAvatarEffectValue[35][0] = 0;
                        mMYINFO.mElementValue[35] = 0.0;
                        mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[35] = 0;
                        break;
                    }
                }
                else if (v0 == 2)
                {
                    mMYINFO.mAvatarEffectValue[i][0] = 0;
                    mMYINFO.mAvatarEffectValue[i][1] = 0;
                    mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.aEffectValueForView[i] = 0;
                }
            }
        }
    }
}

void WORK::W_AVATAR_CHANGE_INFO_1()
{
    SKILL_INFO* tSKILL_INFO;
    int index01;
    int tUserIndex = -1;
    W_AVATAR_CHANGE_INFO_1_DATA* r = (W_AVATAR_CHANGE_INFO_1_DATA*)&mNETWORK.mBuffer[0];

    for (index01 = 0; index01 < mPLAY.MAX_AVATAR_OBJECT; index01++)
    {
        if (!mPLAY.mAVATAR_OBJECT[index01].mCheckValidState)
        {
            continue;
        }
        if (mPLAY.mAVATAR_OBJECT[index01].mIndex != r->tServerIndex)
        {
            continue;
        }
        if (mPLAY.mAVATAR_OBJECT[index01].mUniqueNumber != r->tUniqueNumber)
        {
            continue;
        }
        tUserIndex = index01;
        break;
    }

    if (tUserIndex == -1)
    {
        return;
    }
    switch (r->tSort)
    {
    case 1:
        if (tUserIndex)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLevel1 += r->tValue1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mLevelUpEffectState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mLevelUpEffectStateUpdateTime = 0.0;
            GSOUND::Play(&mGDATA.mSOUND_5[27], mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
        }
        else
        {
            for (index01 = mMYINFO.mAvatarInfo.aLevel1 + 1; index01 <= r->tValue1 + mMYINFO.mAvatarInfo.aLevel1; index01++)
            {
                if (index01 - 1 < 99)
                {
                    mMYINFO.mAvatarInfo.aStateBonusPoint += 5;
                }
                else if (index01 - 1 < 112)
                {
                    mMYINFO.mAvatarInfo.aStateBonusPoint += 15;
                }
                else
                {
                    mMYINFO.mAvatarInfo.aStateBonusPoint += 30;
                }
                mMYINFO.mAvatarInfo.aSkillPoint += mLEVEL.ReturnLevelFactor3(index01);
            }
            mMYINFO.mAvatarInfo.aLevel1 += r->tValue1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLevel1 += r->tValue1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aManaValue = mFACTOR.GetMaxMana();
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
            mPLAY.mAVATAR_OBJECT[tUserIndex].mLevelUpEffectState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mLevelUpEffectStateUpdateTime = 0.0f;
            GSOUND::Play(&mGDATA.mSOUND_5[27], 0, 100);
            mSTATUSUI.Set();
            mMYINFO.mHelpConditionEffectIndex = mHELP.ReturnHelpConditionEffectForLevelUp(mMYINFO.mAvatarInfo.aPreviousTribe, mMYINFO.mAvatarInfo.aLevel1);
            if (mMYINFO.mHelpConditionEffectIndex <= 0)
            {
                mMYINFO.mCheckHelpConditionEffect = 0;
            }
            else
            {
                mMYINFO.mCheckHelpConditionEffect = 1;
                GSOUND::Play(&mGDATA.mSOUND_5[207], 0, 100);
            }
            mMYINFO.mCheckQuestCall = 0;
            mMYINFO.mQuestCallPostTime = mAPP[0].hPresentElapsedSeconds - 590.0;
        }
        return;

    case 2:
        if (tUserIndex)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[8] = 0;
        }
        else
        {
            mMYINFO.mAvatarEffectValue[8][0] = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aEffectValueForView[8] = 0;
        }
        return;

    case 3:
        if (tUserIndex)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[9] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[29] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[30] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[31] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[32] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[33] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[34] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldStateUpdateTime = 0.0f;
        }
        else
        {
            mMYINFO.mAvatarEffectValue[9][0] = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aEffectValueForView[9] = 0;
            mMYINFO.mAvatarEffectValue[29][0] = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aEffectValueForView[29] = 0;
            mMYINFO.mAvatarEffectValue[30][0] = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aEffectValueForView[30] = 0;
            mMYINFO.mAvatarEffectValue[31][0] = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aEffectValueForView[31] = 0;
            mMYINFO.mAvatarEffectValue[32][0] = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aEffectValueForView[32] = 0;
            mMYINFO.mAvatarEffectValue[33][0] = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aEffectValueForView[33] = 0;
            mMYINFO.mAvatarEffectValue[34][0] = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aEffectValueForView[34] = 0;
            mPLAY.mAVATAR_OBJECT[0].mDestroyHeavenShieldState = 1;
            mPLAY.mAVATAR_OBJECT[0].mDestroyHeavenShieldStateUpdateTime = 0.0f;
        }
        return;

    case 4:
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue -= r->tValue1;
        if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue < 1)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue = 0;
        }
        mPLAY.mAVATAR_OBJECT[tUserIndex].mReflectDamageEffectState = 1;
        mPLAY.mAVATAR_OBJECT[tUserIndex].mReflectDamageEffectStateUpdateTime = 0.0;
        return;

    case 5:
        if (tUserIndex)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[9] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[9] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[9] = 0;
            }
        }
        else
        {
            mMYINFO.mAvatarEffectValue[9][0] -= r->tValue1;
            if (mMYINFO.mAvatarEffectValue[9][0] < 1)
            {
                mMYINFO.mAvatarEffectValue[9][0] = 0;
            }
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[9] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[9] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[9] = 0;
            }
        }
        return;

    case 6:
        if (tUserIndex)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[9] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[9] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[9] = 0;
            }
        }
        else
        {
            mMYINFO.mAvatarEffectValue[9][0] -= r->tValue1;
            if (mMYINFO.mAvatarEffectValue[9][0] < 1)
            {
                mMYINFO.mAvatarEffectValue[9][0] = 0;
            }
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[9] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[9] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[9] = 0;
            }
        }
        return;

    case 7:
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aDuelState[0] = r->tValue1;
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aDuelState[1] = r->tValue2;
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aDuelState[2] = r->tValue3;
        return;

    case 8:
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue += r->tValue1;
        mPLAY.mAVATAR_OBJECT[tUserIndex].mHealOtherPlayerSkillEffectState = 1;
        mPLAY.mAVATAR_OBJECT[tUserIndex].mHealOtherPlayerSkillEffectUpdateTime = 0.0;
        return;

    case 9:
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aManaValue += r->tValue1;
        mPLAY.mAVATAR_OBJECT[tUserIndex].mHealManaOtherPlayerSkillEffectState = 1;
        mPLAY.mAVATAR_OBJECT[tUserIndex].mHealManaOtherPlayerSkillEffectUpdateTime = 0.0;
        return;

    case 10:
        mPLAY.mAVATAR_OBJECT[tUserIndex].mPetGrowEffectState = 1;
        mPLAY.mAVATAR_OBJECT[tUserIndex].mPetGrowEffectStateUpdateTime = 0.0;
        return;

    case 11:
        if (tUserIndex)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aRebirth = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLevel2 = r->tValue1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mLevelUpEffectState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mLevelUpEffectStateUpdateTime = 0.0;
            GSOUND::Play(&mGDATA.mSOUND_5[27], mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
        }
        else
        {
            mMYINFO.mAvatarInfo.aRebirth = 0;
            mMYINFO.mAvatarInfo.aSkillPoint = r->tValue2;
            mMYINFO.mAvatarInfo.aGeneralExperience2 = 0;
            mMYINFO.mAvatarInfo.aLevel2 = r->tValue1;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aRebirth = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aLevel2 = r->tValue1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aManaValue = mFACTOR.GetMaxMana();
            mPLAY.mAVATAR_OBJECT[tUserIndex].mLevelUpEffectState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mLevelUpEffectStateUpdateTime = 0.0;
            GSOUND::Play(&mGDATA.mSOUND_5[27], 0, 100);
            if (mMYINFO.mPresentZoneNumber == 85)
            {
                if (mMYINFO.mAvatarInfo.aLevel2 > 11)
                {
                    mPLAY.ReturnToTown(0);
                }
            }
            else if (mMYINFO.mPresentZoneNumber == 196 && mMYINFO.mAvatarInfo.aLevel2 > 0)
            {
                mPLAY.ReturnToTown(0);
            }
        }
        return;

    case 12:
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAnimalNumber = r->tValue1;
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction.aFrame = 0.0f;
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAnimalAbsorbState = 0;
        if (!tUserIndex)
        {
            mMYINFO.mAvatarInfo.aAbsorbState = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue > mFACTOR.GetMaxLife())
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue = mFACTOR.GetMaxLife();
            }
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aManaValue > mFACTOR.GetMaxMana())
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aManaValue = mFACTOR.GetMaxMana();
            }
        }
        return;

    case 13:
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAnimalNumber = 0;
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction.aFrame = 0.0f;
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAnimalAbsorbState = 0;
        if (!tUserIndex)
        {
            mMYINFO.mAvatarInfo.aAbsorbState = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue > mFACTOR.GetMaxLife())
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue = mFACTOR.GetMaxLife();
            }
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aManaValue > mFACTOR.GetMaxMana())
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aManaValue = mFACTOR.GetMaxMana();
            }
        }
        return;

    case 14:
        if (tUserIndex)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aKillOtherTribe = r->tValue1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aRebirth = r->tValue2;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mRebirthEffectState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mRebirthEffectStateUpdateTime = 0.0;
            GSOUND::Play(&mGDATA.mSOUND_5[361], mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
        }
        else
        {
            mMYINFO.mAvatarInfo.aGeneralExperience2 = 0;
            mMYINFO.mAvatarInfo.aKillOtherTribe = r->tValue1;
            mMYINFO.mAvatarInfo.aRebirth = r->tValue2;
            mMYINFO.mAvatarInfo.aLifeOrDeath = r->tValue3;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe = r->tValue1;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aRebirth = r->tValue2;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aManaValue = mFACTOR.GetMaxMana();
            mPLAY.mAVATAR_OBJECT[tUserIndex].mRebirthEffectState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mRebirthEffectStateUpdateTime = 0.0f;
            GSOUND::Play(&mGDATA.mSOUND_5[361], 0, 100);
        }
        return;

    case 16:
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aFashionNumber = r->tValue1;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > mFACTOR.GetMaxLife())
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mFACTOR.GetMaxLife();
        }
        mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue > mFACTOR.GetMaxMana())
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = mFACTOR.GetMaxMana();
        }
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction.aFrame = 0.0f;
        return;

    case 17:
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aFashionNumber = 0;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > mFACTOR.GetMaxLife())
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mFACTOR.GetMaxLife();
        }
        mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue > mFACTOR.GetMaxMana())
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = mFACTOR.GetMaxMana();
        }
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction.aFrame = 0.0f;
        return;

    case 18:
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aTitle = r->tValue1;
        return;

    case 22:
        if (!tUserIndex)
        {
            switch (r->tValue1)
            {
            case 0:
                mMYINFO.mAvatarEffectValue[8][0] = 0;
                break;
            case 1:
                mMYINFO.mAvatarEffectValue[4][0] = 0;
                mMYINFO.mAvatarEffectValue[6][0] = 0;
                break;
            case 2:
                mMYINFO.mAvatarEffectValue[1][0] = 0;
                break;
            case 3:
                mMYINFO.mAvatarEffectValue[0][0] = 0;
                break;
            case 4:
                mMYINFO.mAvatarEffectValue[3][0] = 0;
                mMYINFO.mAvatarEffectValue[7][0] = 0;
                break;
            case 5:
                mMYINFO.mAvatarEffectValue[9][0] = 0;
                mMYINFO.mAvatarEffectValue[29][0] = 0;
                mMYINFO.mAvatarEffectValue[30][0] = 0;
                mMYINFO.mAvatarEffectValue[31][0] = 0;
                mMYINFO.mAvatarEffectValue[32][0] = 0;
                mMYINFO.mAvatarEffectValue[33][0] = 0;
                mMYINFO.mAvatarEffectValue[34][0] = 0;
                break;
            case 6:
                mMYINFO.mAvatarEffectValue[10][0] = 0;
                break;
            case 7:
                mMYINFO.mAvatarEffectValue[11][0] = 0;
                break;
            case 8:
                mMYINFO.mAvatarEffectValue[12][0] = 0;
                break;
            case 9:
                mMYINFO.mAvatarEffectValue[13][0] = 0;
                break;
            case 10:
                mMYINFO.mAvatarEffectValue[14][0] = 0;
                break;
            default:
                return;
            }
        }
        switch (r->tValue1)
        {
        case 0:
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[8] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldStateUpdateTime = 0.0;
            break;
        case 1:
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[4] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[6] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldStateUpdateTime = 0.0;
            break;
        case 2:
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[1] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldStateUpdateTime = 0.0;
            break;
        case 3:
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[0] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldStateUpdateTime = 0.0;
            break;
        case 4:
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[3] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[7] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldStateUpdateTime = 0.0;
            break;
        case 5:
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[9] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[29] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[30] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[31] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[32] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[33] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[34] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldStateUpdateTime = 0.0;
            break;
        case 6:
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[10] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldStateUpdateTime = 0.0;
            break;
        case 7:
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[11] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldStateUpdateTime = 0.0;
            break;
        case 8:
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[12] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldStateUpdateTime = 0.0;
            break;
        case 9:
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[13] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldStateUpdateTime = 0.0;
            break;
        case 10:
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[14] = 0;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDestroyHeavenShieldStateUpdateTime = 0.0;
            break;
        default:
            return;
        }
        return;

    case 23:
        if (!tUserIndex)
        {
            mMYINFO.mAvatarInfo.aLogoutInfo[5] = 0;
        }
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aManaValue = 0;
        return;

    case 24:
        if (!tUserIndex)
        {
            mMYINFO.mAvatarInfo.aLogoutInfo[4] = r->tValue1;
        }
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue = r->tValue1;
        return;

    case 25:
        if (!tUserIndex)
        {
            mMYINFO.mAvatarInfo.aLogoutInfo[5] = r->tValue1;
        }
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aManaValue = r->tValue1;
        return;

    case 26:
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAnimalAbsorbState = r->tValue1;
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction.aFrame = 0.0;
        if (!tUserIndex)
        {
            mMYINFO.mAvatarInfo.aAbsorbState = r->tValue1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue > mFACTOR.GetMaxLife())
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue = mFACTOR.GetMaxLife();
            }
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aManaValue > mFACTOR.GetMaxMana())
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aManaValue = mFACTOR.GetMaxMana();
            }
        }
        return;

    case 27:
        if (tUserIndex)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aRebirth = r->tValue1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mRebirthEffectState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mRebirthEffectStateUpdateTime = 0.0;
            GSOUND::Play(&mGDATA.mSOUND_5[361], mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction.aLocation, mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation);
        }
        else
        {
            mMYINFO.mAvatarInfo.aRebirth = r->tValue1;
            mMYINFO.mAvatarInfo.aLifeOrDeath = r->tValue2;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aRebirth = r->tValue1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aLifeValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aManaValue = mFACTOR.GetMaxMana();
            mPLAY.mAVATAR_OBJECT[tUserIndex].mRebirthEffectState = 1;
            mPLAY.mAVATAR_OBJECT[tUserIndex].mRebirthEffectStateUpdateTime = 0.0;
            GSOUND::Play(&mGDATA.mSOUND_5[361], 0, 100);
        }
        return;

    case 28:
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.mPartFrame = r->tValue1;
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction.aFrame = 0.0;
        return;

    case 29:
        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.mSpecialSkillState = r->tValue1;
        return;

    case 31:
        if (tUserIndex)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[29] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[29] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[29] = 0;
            }
        }
        else
        {
            mMYINFO.mAvatarEffectValue[29][0] -= r->tValue1;
            if (mMYINFO.mAvatarEffectValue[29][0] < 1)
            {
                mMYINFO.mAvatarEffectValue[29][0] = 0;
            }
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[29] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[29] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[29] = 0;
            }
        }
        return;

    case 32:
        if (tUserIndex)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[30] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[30] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[30] = 0;
            }
        }
        else
        {
            mMYINFO.mAvatarEffectValue[30][0] -= r->tValue1;
            if (mMYINFO.mAvatarEffectValue[30][0] < 1)
            {
                mMYINFO.mAvatarEffectValue[30][0] = 0;
            }
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[30] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[30] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[30] = 0;
            }
        }
        return;

    case 33:
        if (tUserIndex)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[31] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[31] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[31] = 0;
            }
        }
        else
        {
            mMYINFO.mAvatarEffectValue[31][0] -= r->tValue1;
            if (mMYINFO.mAvatarEffectValue[31][0] < 1)
            {
                mMYINFO.mAvatarEffectValue[31][0] = 0;
            }
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[31] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[31] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[31] = 0;
            }
        }
        return;

    case 34:
        if (tUserIndex)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[32] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[32] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[32] = 0;
            }
        }
        else
        {
            mMYINFO.mAvatarEffectValue[32][0] -= r->tValue1;
            if (mMYINFO.mAvatarEffectValue[32][0] < 1)
            {
                mMYINFO.mAvatarEffectValue[32][0] = 0;
            }
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[32] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[32] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[32] = 0;
            }
        }
        return;

    case 35:
        if (tUserIndex)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[33] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[33] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[33] = 0;
            }
        }
        else
        {
            mMYINFO.mAvatarEffectValue[33][0] -= r->tValue1;
            if (mMYINFO.mAvatarEffectValue[33][0] < 1)
            {
                mMYINFO.mAvatarEffectValue[33][0] = 0;
            }
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[33] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[33] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[33] = 0;
            }
        }
        return;

    case 36:
        if (tUserIndex)
        {
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[34] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[34] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[34] = 0;
            }
        }
        else
        {
            mMYINFO.mAvatarEffectValue[34][0] -= r->tValue1;
            if (mMYINFO.mAvatarEffectValue[34][0] < 1)
            {
                mMYINFO.mAvatarEffectValue[34][0] = 0;
            }
            mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[34] -= r->tValue1;
            if (mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[34] < 1)
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aEffectValueForView[34] = 0;
            }
        }
        return;

    default:
        return;
    }
}

void WORK::W_AVATAR_ACTION_RECV()
{
    int tUserIndex;
    int i, j, k;
    int v0;
    ACTION_INFO tOldAction;

    W_AVATAR_ACTION_RECV_DATA* r = (W_AVATAR_ACTION_RECV_DATA*)&mNETWORK.mBuffer[0];

    tUserIndex = -1;
    for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT; ++i)
    {
        if (mPLAY.mAVATAR_OBJECT[i].mCheckValidState && mPLAY.mAVATAR_OBJECT[i].mIndex == r->tUserIndex && mPLAY.mAVATAR_OBJECT[i].mUniqueNumber == r->tUniqueNumber)
        {
            tUserIndex = i;
            break;
        }
    }
    if (tUserIndex == -1)
    {
        for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT && mPLAY.mAVATAR_OBJECT[i].mCheckValidState; ++i)
            ;
        if (i != mPLAY.MAX_AVATAR_OBJECT)
        {
            mPLAY.mAVATAR_OBJECT[i].mCheckValidState = 1;
            mPLAY.mAVATAR_OBJECT[i].mIndex = r->tUserIndex;
            mPLAY.mAVATAR_OBJECT[i].mUniqueNumber = r->tUniqueNumber;
            mPLAY.mAVATAR_OBJECT[i].mLastActionUpdateTime = mAPP[0].hPresentElapsedSeconds;
            memcpy(&mPLAY.mAVATAR_OBJECT[i].mDATA, &r->mDATA, sizeof(OBJECT_FOR_AVATAR));
            mPLAY.mAVATAR_OBJECT[i].InitForCreate( i);
            mPLAY.mAVATAR_OBJECT[i].InitForAction( i);
            if (!i)
            {
                mMYINFO.InitForEnterZone();
                mPLAY.InitForEnterZone();
                mMAIN.mSubMode = 3;
                mMAIN.mTicks = 0;
            }
        }
    }
    else
    {
        if (!tUserIndex && !mCInnerAuto.bIsAction && mMYINFO.mAvatarInfo.aAutoHuntState)
        {
            mCInnerAuto.bIsAction = 1;
            mCInnerAuto.dActionTick = GetTickCount();
        }
        //
       /* if (r->mDATA.aAction.aSort != 2 && !tUserIndex && r->mDATA.aAction.aSkillNumber > 0)
        {
            mMYINFO.CheckAttackSpeed(r->mDATA.aAction.aSkillNumber, mFACTOR.GetAttackSpeed(r->mDATA.aEffectValueForView, r->mDATA.aEquipForView), -1);
        }*/
        //
        mPLAY.mAVATAR_OBJECT[tUserIndex].mLastActionUpdateTime = mAPP[0].hPresentElapsedSeconds;
        memcpy(&tOldAction, &mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction, sizeof(ACTION_INFO));
        memcpy(&mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA, &r->mDATA, sizeof(OBJECT_FOR_AVATAR));
        memcpy(&mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction, &tOldAction, sizeof(ACTION_INFO));
        if (r->tCheckChangeActionState == 1)
        {
            v0 = mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction.aSort;
            if (v0 == 11)
            {
                if (r->mDATA.aAction.aSort != 1 && r->mDATA.aAction.aSort != 12)
                    return;
            }
            else if (v0 == 12 && r->mDATA.aAction.aSort)
            {
                return;
            }
            memcpy(&mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction, &r->mDATA.aAction, sizeof(ACTION_INFO));
            if (r->mDATA.aAction.aSort == 2)
            {
                if (tUserIndex)
                {
                    if (r->mDATA.aAction.aType == tOldAction.aType && r->mDATA.aAction.aSort == tOldAction.aSort)
                    {
                        mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aAction.aFrame = tOldAction.aFrame;
                    }
                }
                else
                {
                    memcpy(&mPLAY.mAVATAR_OBJECT[0].mDATA.aAction, &tOldAction, sizeof(ACTION_INFO));
                }
            }
            mPLAY.mAVATAR_OBJECT[tUserIndex].InitForAction( tUserIndex);
            if ((r->mDATA.aAction.aSkillNumber < 139 || r->mDATA.aAction.aSkillNumber > 145) && (r->mDATA.aAction.aSkillNumber < 147 || r->mDATA.aAction.aSkillNumber > 149))
            {
                if (r->mDATA.aAction.aSkillNumber == 146)
                {
                    mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aSecretSkillCooldown = 60;
                    if (!tUserIndex)
                        mMYINFO.mAvatarInfo.aSecretSkillCooldown = 60;
                }
                else if (r->mDATA.aAction.aSkillNumber == 150)
                {
                    mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aSecretSkillCooldown = 30;
                    if (!tUserIndex)
                        mMYINFO.mAvatarInfo.aSecretSkillCooldown = 30;
                }
            }
            else
            {
                mPLAY.mAVATAR_OBJECT[tUserIndex].mDATA.aSecretSkillCooldown = 90;
                if (!tUserIndex)
                    mMYINFO.mAvatarInfo.aSecretSkillCooldown = 90;
            }
        }
        else if (r->tCheckChangeActionState != 2 && r->tCheckChangeActionState == 3 && !tUserIndex)
        {
            mMYINFO.mCheckSendActionPacket = 0;
        }
    }
}

void WORK::W_MONSTER_ACTION_RECV()
{
    int v7;
    int index01;
    MONSTER_INFO* tMonster;
    float v0, v1;
    ACTION_INFO v9;

    W_MONSTER_ACTION_RECV_DATA* r = (W_MONSTER_ACTION_RECV_DATA*)&mNETWORK.mBuffer[0];

    v7 = -1;
    for (index01 = 0; index01 < mPLAY.MAX_MONSTER_OBJECT; ++index01)
    {
        if (mPLAY.mMONSTER_OBJECT[index01].mCheckValidState && mPLAY.mMONSTER_OBJECT[index01].mServerIndex == r->tServerIndex && mPLAY.mMONSTER_OBJECT[index01].mUniqueNumber == r->tUniqueNumber)
        {
            v7 = index01;
            break;
        }
    }
    if (v7 == -1)
    {
        for (index01 = 0; index01 < mPLAY.MAX_MONSTER_OBJECT && mPLAY.mMONSTER_OBJECT[index01].mCheckValidState; ++index01)
            ;
        if (index01 != mPLAY.MAX_MONSTER_OBJECT)
        {
            tMonster = mMONSTER.Search(r->mDATA.mIndex);
            if (tMonster)
            {
                mPLAY.mMONSTER_OBJECT[index01].mCheckValidState = 1;
                mPLAY.mMONSTER_OBJECT[index01].mServerIndex = r->tServerIndex;
                mPLAY.mMONSTER_OBJECT[index01].mUniqueNumber = r->tUniqueNumber;
                mPLAY.mMONSTER_OBJECT[index01].mMonsterUpdateTime = mAPP[0].hPresentElapsedSeconds;
                memcpy(&mPLAY.mMONSTER_OBJECT[index01].mMONSTER, &r->mDATA, sizeof(OBJECT_FOR_MONSTER));
                mPLAY.mMONSTER_OBJECT[index01].mMONSTER_INFO = tMonster;
                v1 = (float)(tMonster->mSize[2] * tMonster->mSize[2] + tMonster->mSize[0] * tMonster->mSize[0]);
                v0 = sqrt(v1);
                mPLAY.mMONSTER_OBJECT[index01].mAttackRadius = v0 * 0.5f;
                mPLAY.mMONSTER_OBJECT[index01].InitForCreate( index01);
                mPLAY.mMONSTER_OBJECT[index01].InitForAction( index01);
            }
        }
    }
    else
    {
        mPLAY.mMONSTER_OBJECT[v7].mMonsterUpdateTime = mAPP[0].hPresentElapsedSeconds;
        memcpy(&v9, &mPLAY.mMONSTER_OBJECT[v7].mMONSTER.mAction, sizeof(ACTION_INFO));
        memcpy(&mPLAY.mMONSTER_OBJECT[v7].mMONSTER, &r->mDATA, sizeof(OBJECT_FOR_MONSTER));
        memcpy(&mPLAY.mMONSTER_OBJECT[v7].mMONSTER.mAction, &v9, sizeof(ACTION_INFO));
        if (r->tCheckChangeActionState == 1)
        {
            memcpy(&mPLAY.mMONSTER_OBJECT[v7].mMONSTER.mAction, &r->mDATA.mAction, sizeof(ACTION_INFO));
            mPLAY.mMONSTER_OBJECT[v7].InitForAction( v7);
        }
    }
}

void WORK::W_ITEM_ACTION_RECV()
{
    int v5;
    int i;
    ITEM_INFO* v1;


    W_ITEM_ACTION_RECV_DATA* r = (W_ITEM_ACTION_RECV_DATA*)&mNETWORK.mBuffer[0];
    v5 = -1;
    for (i = 0; i < mPLAY.MAX_ITEM_OBJECT; ++i)
    {
        if (mPLAY.mITEM_OBJECT[i].mCheckValidState && mPLAY.mITEM_OBJECT[i].mServerIndex == r->tServerIndex && mPLAY.mITEM_OBJECT[i].mUniqueNumber == r->tUniqueNumber)
        {
            v5 = i;
            break;
        }
    }
    if (v5 == -1)
    {
        for (i = 0; i < mPLAY.MAX_ITEM_OBJECT && mPLAY.mITEM_OBJECT[i].mCheckValidState; ++i)
            ;
        if (i != mPLAY.MAX_ITEM_OBJECT && r->tCheckChangeActionState != 3)
        {
            v1 = mITEM.Search(r->mDATA.iIndex);
            if (v1)
            {
                mPLAY.mITEM_OBJECT[i].mCheckValidState = 1;
                mPLAY.mITEM_OBJECT[i].mServerIndex = r->tServerIndex;
                mPLAY.mITEM_OBJECT[i].mUniqueNumber = r->tUniqueNumber;
                mPLAY.mITEM_OBJECT[i].mItemUpdateTime = mAPP[0].hPresentElapsedSeconds;
                memcpy(&mPLAY.mITEM_OBJECT[i].mDATA, &r->mDATA, sizeof(OBJECT_FOR_ITEM));
                mPLAY.mITEM_OBJECT[i].mITEM_INFO = v1;
                mPLAY.mITEM_OBJECT[i].InitForCreate( i);
            }
        }
    }
    else if (r->tCheckChangeActionState == 3)
    {
        mPLAY.mITEM_OBJECT[v5].Free();
    }
    else
    {
        mPLAY.mITEM_OBJECT[v5].mItemUpdateTime = mAPP[0].hPresentElapsedSeconds;
        memcpy(&mPLAY.mITEM_OBJECT[v5].mDATA, &r->mDATA, sizeof(OBJECT_FOR_ITEM));
    }
}

void WORK::W_GENERAL_NOTICE_RECV()
{
    W_GENERAL_NOTICE_RECV_DATA* r = (W_GENERAL_NOTICE_RECV_DATA*)&mNETWORK.mBuffer[0];

    mBOARDUI.Set(0, 0, r->tContent, "");
    mBASICUI.Insert1(r->tContent, mFONTCOLOR.mData[44]);
}

void WORK::W_PROCESS_ATTACK_RECV()
{
    W_PROCESS_ATTACK_RECV_DATA* r = (W_PROCESS_ATTACK_RECV_DATA*)&mNETWORK.mBuffer[0];

    mPLAY.ProcessForAttackResult(&r->tAttackInfo);
}

void WORK::W_AVATAR_CHANGE_INFO_2_RECV()
{
    char Buffer[1000];
    W_AVATAR_CHANGE_INFO_2_RECV_DATA* r = (W_AVATAR_CHANGE_INFO_2_RECV_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tSort)
    {
    case 1:
        mBASICUI.Insert1(mMESSAGE.Return(219), mFONTCOLOR.mData[44]);
        break;
    case 2:
        mMYINFO.mAvatarInfo.aStateBonusPoint = r->tValue;
        break;
    case 3:
        mMYINFO.mAvatarInfo.aKillOtherTribe = r->tValue;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe = r->tValue;
        break;
    case 4:
        mMYINFO.mAvatarInfo.aDoubleKillNumTime = r->tValue;
        break;
    case 5:
        mMYINFO.mAvatarInfo.aDoubleKillExpTime = r->tValue;
        break;
    case 6:
        mMYINFO.mAvatarInfo.aTeacherPoint = r->tValue;
        break;
    case 7:
        mMYINFO.mAvatarInfo.aGeneralExperience1 = r->tValue;
        break;
    case 8:
        mMYINFO.mAvatarInfo.aProtectForDeath = r->tValue;
        mBASICUI.Insert1(mMESSAGE.Return(691), mFONTCOLOR.mData[44]);
        break;
    case 9:
        mMYINFO.mAvatarInfo.aVisibleState = r->tValue;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aVisibleState = r->tValue;
        break;
    case 10:
        mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = r->tValue;
        break;
    case 11:
        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = r->tValue;
        break;
    case 12:
        mMYINFO.mAvatarInfo.aEquip[8][1] = r->tValue;
        break;
    case 13:
        mMYINFO.mAvatarInfo.aGeneralExperience1 = r->tValue;
        break;
    case 14:
        mMYINFO.mAvatarInfo.aEquip[8][2] = r->tValue;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aEquipForView[8][1] = r->tValue;
        break;
    case 15:
        mMYINFO.mAvatarInfo.aProtectForDestroy = r->tValue;
        GSOUND::Play(&mGDATA.mSOUND_5[189], 0, 100);
        mBASICUI.Insert1(mMESSAGE.Return(654), mFONTCOLOR.mData[44]);
        break;
    case 16:
        ++mMYINFO.mAvatarInfo.aPlayTime1;
        mMYINFO.mAvatarInfo.aPlayTime2 = r->tValue;
        ++mMYINFO.mAvatarInfo.aCapsuleOnlineTime;
        break;
    case 17:
        mMYINFO.mAvatarInfo.aDoubleExpTime2 = r->tValue;
        break;
    case 18:
        mMYINFO.mAvatarInfo.aZone101TypeTime = r->tValue;
        if (!r->tValue)
            mPLAY.ReturnToTown(0);
        break;
    case 19:
        mMYINFO.mAvatarInfo.aMoney = r->tValue;
        break;
    case 20:
        mMYINFO.mAvatarInfo.aDoubleExpTime1 = r->tValue;
        break;
    case 21:
        mMYINFO.mAvatarInfo.aZone125TypeTime = r->tValue;
        if (!r->tValue)
            mPLAY.ReturnToTown(0);
        break;
    case 22:
        mMYINFO.mAvatarInfo.aZone126TypeTime = r->tValue;
        if (!r->tValue && mMYINFO.mAvatarInfo.aPremiumService <= 0)
            mPLAY.ReturnToTown(0);
        break;
    case 23:
    case 45:
        mMYINFO.mAvatarInfo.aMoney += r->tValue;
        sprintf(Buffer, "(%d)%s", r->tValue, mMESSAGE.Return(634));
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        break;
    case 24:
        mMYINFO.mAvatarInfo.aGeneralExperience2 = r->tValue;
        break;
    case 25:
        mMYINFO.mAvatarInfo.aMoney += r->tValue;
        sprintf(Buffer, "(%d)%s", r->tValue, mMESSAGE.Return(891));
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        break;
    case 26:
        mMYINFO.mAvatarInfo.aAnimalTime = r->tValue;
        if (!r->tValue && mPLAY.mAVATAR_OBJECT[0].mDATA.aAnimalNumber)
            mANIMALUI.Down(0);
        break;
    case 27:
        mMYINFO.mAvatarInfo.aLuckyDrop = r->tValue;
        sprintf(Buffer, "%s", mMESSAGE.Return(988));
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        break;
    case 28:
        mMYINFO.mAvatarInfo.aLuckyCombine = r->tValue;
        sprintf(Buffer, "%s", mMESSAGE.Return(988));
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        break;
    case 29:
        mMYINFO.mAvatarInfo.aLuckyUpgrade = r->tValue;
        sprintf(Buffer, "%s", mMESSAGE.Return(989));
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        break;
    case 30:
        mMYINFO.mAvatarInfo.aExtinctionScroll = r->tValue;
        break;
    case 31:
        mMYINFO.mAvatarInfo.aCPProtectionCharm = r->tValue;
        GSOUND::Play(&mGDATA.mSOUND_5[189], 0, 100);
        mBASICUI.Insert1(mMESSAGE.Return(1185), mFONTCOLOR.mData[44]);
        break;
    case 32:
        mMYINFO.mAvatarInfo.iSilverOrnamentRemainsTime = r->tValue;
        if (!r->tValue)
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > mFACTOR.GetMaxLife())
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue > mFACTOR.GetMaxMana())
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = mFACTOR.GetMaxMana();
        }
        break;
    case 33:
        mMYINFO.mAvatarInfo.aIslandOfBloodTime = r->tValue;
        if (!r->tValue)
            mPLAY.ReturnToTown(0);
        break;
    case 34:
        mMYINFO.mAvatarInfo.aIslandOfSoul1Time = r->tValue;
        if (!r->tValue)
            mPLAY.ReturnToTown(0);
        break;
    case 35:
        mMYINFO.mAvatarInfo.aIslandOfSoul2Time = r->tValue;
        if (!r->tValue)
            mPLAY.ReturnToTown(0);
        break;
    case 36:
        mMYINFO.mAvatarInfo.aIslandOfSoul3Time = r->tValue;
        if (!r->tValue)
            mPLAY.ReturnToTown(0);
        break;
    case 37:
        mMYINFO.mAvatarInfo.aIslandOfSoul4Time = r->tValue;
        if (!r->tValue)
            mPLAY.ReturnToTown(0);
        break;
    case 38:
        mMYINFO.mAvatarInfo.aIslandOfSoul5Time = r->tValue;
        if (!r->tValue)
            mPLAY.ReturnToTown(0);
        break;
    case 39:
        mMYINFO.mAvatarInfo.aIslandOfSoul6Time = r->tValue;
        if (!r->tValue)
            mPLAY.ReturnToTown(0);
        break;
    case 40:
        mMYINFO.mAvatarInfo.iGoldOrnamentRemainsTime = r->tValue;
        if (!r->tValue)
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > mFACTOR.GetMaxLife())
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue > mFACTOR.GetMaxMana())
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = mFACTOR.GetMaxMana();
        }
        break;
    case 41:
        mMYINFO.mAvatarInfo.aPCCafeOnlineTimeToMerit = r->tValue;
        break;
    case 42:
        mMYINFO.mAvatarInfo.aDoubleBuffTime = r->tValue;
        break;
    case 43:
        mMYINFO.mAvatarInfo.aExpPill = r->tValue;
        break;
    case 44:
        mMYINFO.mAvatarInfo.aPat_Exp_x2_Time = r->tValue;
        break;
    case 46:
        mMYINFO.mAvatarInfo.aDamageBoostScroll = r->tValue;
        break;
    case 47:
        mMYINFO.mAvatarInfo.aHealthBoostScroll = r->tValue;
        //mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
        //if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > mFACTOR.GetMaxLife())
        //    mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mFACTOR.GetMaxLife();
        break;
    case 48:
        mMYINFO.mAvatarInfo.aCriticalBoostScroll = r->tValue;
        break;
    case 49:
        mMYINFO.mMaWhangGungTime = r->tValue;
        sprintf(Buffer, "%s (%d)%s", mZONENAME.Return(84), mMYINFO.mMaWhangGungTime, mMESSAGE.Return(1479));
        mBOARDUI.Set(1, 0, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        if (r->tValue <= 0)
            mPLAY.ReturnToTown(0);
        break;
    case 50:
        sprintf(Buffer, "(mosterKill: %d)", r->tValue);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        break;
    case 54:
        mMYINFO.mAvatarInfo.aTimeEffectTime = r->tValue;
        if (mMYINFO.uUserSort > 0)
        {
            sprintf(Buffer, "TimeEffectTime:%d", mMYINFO.mAvatarInfo.aTimeEffectTime);
            mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        }
        break;
    case 55:
        if (r->tValue == -1)
        {
            switch (mMYINFO.mAvatarInfo.aTimeEffect2)
            {
            case 0:
                mBASICUI.Insert1(mMESSAGE.Return(1888), mFONTCOLOR.mData[44]);
                break;
            case 1:
                mBASICUI.Insert1(mMESSAGE.Return(1707), mFONTCOLOR.mData[44]);
                break;
            case 2:
                mBASICUI.Insert1(mMESSAGE.Return(1708), mFONTCOLOR.mData[44]);
                break;
            case 3:
                mBASICUI.Insert1(mMESSAGE.Return(1709), mFONTCOLOR.mData[44]);
                break;
            case 4:
                mBASICUI.Insert1(mMESSAGE.Return(1710), mFONTCOLOR.mData[44]);
                break;
            case 5:
                mBASICUI.Insert1(mMESSAGE.Return(2228), mFONTCOLOR.mData[44]);
                break;
            default:
                return;
            }
        }
        else
        {
            mMYINFO.mAvatarInfo.aTimeEffect = r->tValue;
            mBASICUI.Insert1(mMESSAGE.Return(1706), mFONTCOLOR.mData[44]);
        }
        break;
    case 56:
        mMYINFO.mGeneralExperienceUpRatio = r->tValue;
        break;
    case 57:
        mMYINFO.mItemDropUpRatio = r->tValue;
        break;
    case 58:
        mMYINFO.mKillOtherTribeAddValue = r->tValue;
        break;
    case 59:
        mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildBuff = r->tValue > 0;
        break;
    case 60:
        mMYINFO.mAvatarInfo.aCostume[r->tValue / 100000000 + 9] = r->tValue % 100000000;
        break;
    case 61:
        mMYINFO.mAvatarInfo.aAutoHunt7Day = r->tValue;
        if (mMYINFO.mAvatarInfo.aAutoHuntState == 1 && !mMYINFO.mAvatarInfo.aAutoHunt7Day)
            mPLAY.ReturnToTownOffAuto(0);
        break;
    case 62:
        mMYINFO.mAvatarInfo.aAutoHunt5Hour = r->tValue;
        if (!r->tValue)
            mPLAY.ReturnToTownOffAuto(0);
        break;
    case 63:
        mMYINFO.mAvatarInfo.aPreventRefineBreak = r->tValue;
        mBASICUI.Insert1(mMESSAGE.Return(1931), mFONTCOLOR.mData[44]);
        break;
    case 64:
        mMYINFO.mAvatarInfo.aIvyHallTimeR12 = r->tValue;
        if (r->tValue <= 0)
            mPLAY.ReturnToTown(0);
        break;
    case 65:
        mMYINFO.mAvatarInfo.aCriticalBoostScroll = r->tValue;
        if (r->tValue <= 0)
            mPLAY.ReturnToTown(0);
        break;
    case 66:
        mMYINFO.mAvatarInfo.aRankPoints = r->tValue;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aRankPoint = r->tValue;
        break;
    case 67:
        break;
    case 68:
        if (r->tValue)
        {
            mMYINFO.mAvatarInfo.aRankAbility = r->tValue;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
            mBASICUI.Insert1(mMESSAGE.Return(2086), mFONTCOLOR.mData[44]);
        }
        else
        {
            mMYINFO.mAvatarInfo.aRankPoints = 0;
            mMYINFO.mAvatarInfo.aRankAbility = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aRankPoint = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
        }
        break;
    case 69:
        mMYINFO.mAvatarInfo.aFactionNoticeScroll = r->tValue;
        break;
    case 70:
        mMYINFO.mAvatarInfo.aAutoHunt7Day = r->tValue;
        if (mMYINFO.mAvatarInfo.aAutoHuntState == 1 && !mMYINFO.mAvatarInfo.aAutoHunt7Day)
            mPLAY.ReturnToTownOffAuto(0);
        break;
    case 71:
        if (mMYINFO.mAvatarInfo.aAnimalIndex - 10 >= 0 && mMYINFO.mAvatarInfo.aAnimalIndex - 10 < 10)
        {
            mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex - 10] = r->tValue;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > mFACTOR.GetMaxLife())
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue > mFACTOR.GetMaxMana())
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = mFACTOR.GetMaxMana();
        }
        break;
    case 72:
        mMYINFO.mAvatarInfo.aProxyShopTime = r->tValue;
        break;
    case 73:
        mMYINFO.mAvatarInfo.aAutoBuffScroll = r->tValue;
        break;
    case 74:
        mMYINFO.mAvatarInfo.aSearchAndBuyDate = r->tValue;
        break;
    case 75:
        mMYINFO.mAvatarInfo.aDoubleMountExpTime = r->tValue;
        break;
    case 76:
        break;
    case 77:
        mMYINFO.mAvatarInfo.aVigilanteScroll = r->tValue;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > mFACTOR.GetMaxLife())
            mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mFACTOR.GetMaxLife();
        break;
    case 78:
        mMYINFO.mAvatarInfo.aMountAbsorbTime = r->tValue;
        break;
    case 79:
        mMYINFO.mAvatarInfo.aAbsorbState = r->tValue;
        if (r->tValue)
        {
            mBASICUI.Insert1(mMESSAGE.Return(2153), mFONTCOLOR.mData[44]);
        }
        else
        {
            mBASICUI.Insert1(mMESSAGE.Return(2152), mFONTCOLOR.mData[44]);
        }
        break;

    case 80:
        mMYINFO.mAvatarInfo.aFuryCount = r->tValue;
        break;

    case 81:
        mMYINFO.mAvatarInfo.aFuryState = r->tValue;
        if (r->tValue == 1)
        {
            mBASICUI.Insert1(mMESSAGE.Return(2265), mFONTCOLOR.mData[44]);
        }
        break;
    case 82:
        mMYINFO.mAvatarInfo.aFuryEffectDuration = r->tValue;
        mPLAY.mAVATAR_OBJECT[0].mFuryEffectDuration = r->tValue;// Buffer src'den client'e veri yolluyor
        break;
    case 83:
        mMYINFO.mAvatarInfo.aDoubleRageGain = r->tValue;
        break;
    case 84:
        mMYINFO.mAvatarInfo.aRageBurstPill = r->tValue;
        break;
    case 85:
    case 86:
        break;
    case 87:
        mMYINFO.mAvatarInfo.aWarriorScroll = r->tValue;
        break;
    case 88:
        mMYINFO.mAvatarInfo.aExpandInventoryDate = r->tValue;
        break;
    case 89:
        mMYINFO.mAvatarInfo.aExpandStoreDate = r->tValue;
        break;
    case 90:
        mMYINFO.mAvatarInfo.aAutoHunt7Day = r->tValue;
        break;
    case 91:
        mMYINFO.mAvatarInfo.aHeroPill = r->tValue;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > mFACTOR.GetMaxLife())
            mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mFACTOR.GetMaxLife();
        break;
    case 93:
        mMYINFO.mPvPDamageUpRatio = r->tValue;
        break;
    case 94:
        mMYINFO.mPvMDamageUpRatio = r->tValue;
        break;
    case 95:
        mMYINFO.mMaxPotionEventNum = r->tValue;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
        mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
        break;
    case 97:
        mPLAY.ReturnToTown(0);
        mBASICUI.Insert1(mMESSAGE.Return(237), mFONTCOLOR.mData[44]);
        break;
    case 98:
        mMYINFO.mClientTickNew = r->tValue;
        if (r->tValue > 0)
        {
            mMYINFO.mServerMon = mMYINFO.mClientTickNew / 10000000 + 1;
            mMYINFO.mServerDay = mMYINFO.mClientTickNew % 10000000 / 100000;
            mMYINFO.mServerHour = mMYINFO.mClientTickNew % 100000 / 1000;
            mMYINFO.mServerMin = mMYINFO.mClientTickNew % 1000 / 10;
            switch (mMYINFO.mClientTickNew % 10)
            {
            case 0:
                strcpy(mMYINFO.mServerWDay, "Sunday");
                break;
            case 1:
                strcpy(mMYINFO.mServerWDay, "Monday");
                break;
            case 2:
                strcpy(mMYINFO.mServerWDay, "Tuesday");
                break;
            case 3:
                strcpy(mMYINFO.mServerWDay, "Wednesday");
                break;
            case 4:
                strcpy(mMYINFO.mServerWDay, "Thursday");
                break;
            case 5:
                strcpy(mMYINFO.mServerWDay, "Friday");
                break;
            case 6:
                strcpy(mMYINFO.mServerWDay, "Saturday");
                break;
            default:
                strcpy(mMYINFO.mServerWDay, "Unknown");
                break;
            }
        }
        break;
    case 99:
        mMYINFO.mAvatarInfo.aWingProtectionScroll = r->tValue;
        GSOUND::Play(&mGDATA.mSOUND_5[189], 0, 100);
        mBASICUI.Insert1(mMESSAGE.Return(2321), mFONTCOLOR.mData[44]);
        break;
    case 100:
        mMYINFO.mPvPDamageUpTribe = r->tValue;
        break;
    case 101:
        mMYINFO.mPvMDamageUpTribe = r->tValue;
        break;
    case 102:
        mMYINFO.mMaxPotionEventTribe = r->tValue;
        break;
    case 104:
        mMYINFO.mAvatarInfo.aPreventImproveDown = r->tValue;
        GSOUND::Play(&mGDATA.mSOUND_5[189], 0, 100);
        mBASICUI.Insert1(mMESSAGE.Return(2354), mFONTCOLOR.mData[44]);
        break;
    case 105:
        mMYINFO.mAvatarInfo.aHeavenlyOrderCharm = r->tValue;
        break;
    case 106:
        mMYINFO.mAvatarInfo.aTheFortressTime = r->tValue;
        if (mMYINFO.mPresentZoneNumber == 310 && mMYINFO.mAvatarInfo.aTribe != mPLAY.mWorldInfo.mZone038WinTribe && !mMYINFO.mAvatarInfo.aTheFortressTime)
        {
            mPLAY.ReturnToTown(0);
        }
        break;
    case 107:
        mMYINFO.mAvatarInfo.aBeginnerPackageIcon = r->tValue;
        if (mBONUSUI.mActive || mMYINFO.mAvatarInfo.aBeginnerPackageIcon != 1)
            mBONUSUI.Off();
        else
            mBONUSUI.Set();
        break;
    case 108:
        mMYINFO.mAvatarInfo.aLimitedDungeonTicket = r->tValue;
        if (r->tValue <= 0)
            mPLAY.ReturnToTown(0);
        break;
    case 109:
        if (mMYINFO.mAvatarInfo.aNewSkillsState < 1 && r->tValue > 0)
        {
            mBASICUI.Insert1(mMESSAGE.Return(2295), mFONTCOLOR.mData[44]);
        }
        mMYINFO.mAvatarInfo.aNewSkillsState = r->tValue;
        break;
    case 110:
        if (r->tValue)
        {
            switch (r->tValue)
            {
            case 1:
                mMYINFO.mMixSkillWaitingTime[1] = 0;
                break;
            case 2:
                mMYINFO.mMixSkillWaitingTime[0] = 15;
                break;
            case 3:
                mMYINFO.mMixSkillWaitingTime[1] = 15;
                break;
            }
        }
        else
        {
            mMYINFO.mMixSkillWaitingTime[0] = 0;
        }
        break;
    case 111:
        mMYINFO.mAvatarInfo.aSecretSkillCooldown = r->tValue;
        break;
    case 112:
        mMYINFO.mAvatarInfo.aActiveBoozeTime = r->tValue;
        if (r->tValue < 1)
        {
            if (mMYINFO.mAvatarInfo.aWineBottle[mMYINFO.mAvatarInfo.aWineDrinkIndex] == 878)
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            if (mMYINFO.mAvatarInfo.aWineBottle1Quantity[mMYINFO.mAvatarInfo.aWineDrinkIndex] < 1)
                mMYINFO.mAvatarInfo.aWineBottle[mMYINFO.mAvatarInfo.aWineDrinkIndex] = 0;
        }
        break;
    case 113:
        mMYINFO.mAvatarInfo.aLimitedDungeonTicket = r->tValue;
        if (r->tValue <= 0)
            mPLAY.ReturnToTown(0);
        break;
    case 114:
        mMYINFO.mAvatarInfo.aKillOtherTribe += r->tValue;
        sprintf(Buffer, mMESSAGE.Return(1845), r->tValue);
        mBASICUI.Insert1(Buffer, 1);
        break;
    case 115:
        mMYINFO.mAvatarInfo.aCapsuleMallPoints = r->tValue;
        GSOUND::Play(&mGDATA.mSOUND_5[189], 0, 100);
        mBASICUI.Insert1(mMESSAGE.Return(2528), mFONTCOLOR.mData[44]);
        break;
    case 116:
        mMYINFO.mAvatarInfo.aPremiumService = r->tValue;
        break;
    case 117:
        /* mMYINFO.mAvatarInfo.aUltimateRebirthHall = r->tValue;
         if (r->tValue <= 0)
             mPLAY.ReturnToTown(0);*/
        break;
    case 118:
        mMYINFO.mAvatarInfo.aLoginEventClaimState = r->tValue;
        // mPLAY.LoginRewardClaim();
        break;
    case 119:
        mMYINFO.mAvatarInfo.aLoginGameWebMallPoints = r->tValue;
        // mPLAY.LoginRewardClaim();
        break;
    case 120:
        mMYINFO.mAvatarInfo.aUnsealCharm = r->tValue;
        GSOUND::Play(&mGDATA.mSOUND_5[189], 0, 100);
        mBASICUI.Insert1(mMESSAGE.Return(2654), mFONTCOLOR.mData[44]);
        break;
    case 121:
        mMYINFO.mAvatarInfo.aPK = r->tValue;
        mBASICUI.Insert1(mMESSAGE.Return(2684), mFONTCOLOR.mData[44]);
        break;
    case 122:
        mMYINFO.unk_CD8C[0] = r->tValue;
        break;
    case 123:
        mMYINFO.unk_CD8C[1] = r->tValue;
        break;
    case 124:
        mMYINFO.unk_CD8C[2] = r->tValue;
        break;
    case 125:
        mMYINFO.unk_CD8C[3] = r->tValue;
        break;
    case 126:
    case 133:
        sprintf(Buffer, "%s %s", mMESSAGE.Return(r->tValue + 2685), mMESSAGE.Return(2667));
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        break;
    case 127:
        mMYINFO.mAvatarInfo.aHeavenlyWarTicket = r->tValue;
        sprintf(Buffer, mMESSAGE.Return(2995), mITEM.Search(1833)->iName);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        break;
    case 128:
        mMYINFO.mAvatarInfo.aTevushiRoad = r->tValue;
        break;
    case 147:
        mMYINFO.mAvatarInfo.aCitadelTicket = r->tValue;
        sprintf(Buffer, mMESSAGE.Return(2995), mITEM.Search(1894)->iName);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        break;

    case 170:
        mMYINFO.mAvatarInfo.aEnchantTalisman = r->tValue;
        return;
    case 171:
        mMYINFO.mAvatarInfo.aEnchantTalismanSP = r->tValue;
        return;
    case 172:
        mMYINFO.mAvatarInfo.aWingEnchantTalisman = r->tValue;
        return;

    default:
        return;
    }
}

void WORK::W_PROCESS_DATA_RECV()
{
    W_PROCESS_DATA_RECV_DATA* r = (W_PROCESS_DATA_RECV_DATA*)&mNETWORK.mBuffer[0];

    mPLAY.ProcessForData(r->tResult, r->tSort, r->tData);
}

void WORK::W_USE_INVENTORY_ITEM_RECV()
{
    ITEM_INFO* tITEM_INFO;
    SKILL_INFO* tSKILL_INFO;
    int tMsg = 0;
    int index01;
    int index02;
    int index03;
    int index04;
    int tEquipIndex;
    int tEquip[4];
    int tEquipSocket[5];
    char mBuffer[1000];

    W_USE_INVENTORY_ITEM_RECV_DATA* r = (W_USE_INVENTORY_ITEM_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mNetworkLock = FALSE;
    tITEM_INFO = mITEM.Search(mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0]);
    if (!tITEM_INFO)
    {
        return;
    }

    switch ( tITEM_INFO->iSort )
    {
    case 5:
        if (!r->tResult)
        {
            tSKILL_INFO = mSKILL.Search(tITEM_INFO->iGainSkillNumber);
            if (!tSKILL_INFO)
            {
                return;
            }
            switch (tSKILL_INFO->sType)
            {
            case 1:
                for (index01 = 0; index01 < 10 && mMYINFO.mAvatarInfo.aSkill[index01][0] >= 1; index01++)
                {
                    ;
                }
                if (index01 == 10)
                {
                    return;
                }
                break;

            case 2:
                for (index01 = 20; index01 < 30 && mMYINFO.mAvatarInfo.aSkill[index01][0] >= 1; index01++)
                {
                    ;
                }
                if (index01 == 30)
                {
                    return;
                }
                switch (tSKILL_INFO->sAttackType)
                {
                case 2:
                    GSOUND::Play(&mGDATA.mSOUND_5[282], 0, 100);
                    break;
                case 3:
                    GSOUND::Play(&mGDATA.mSOUND_5[283], 0, 100);
                    break;
                case 4:
                    GSOUND::Play(&mGDATA.mSOUND_5[284], 0, 100);
                    break;
                case 5:
                    GSOUND::Play(&mGDATA.mSOUND_5[285], 0, 100);
                    break;
                default:
                    break;
                }
                break;

            case 3:
                for (index01 = 10; index01 < 20 && mMYINFO.mAvatarInfo.aSkill[index01][0] >= 1; index01++)
                {
                    ;
                }
                if (index01 == 20)
                {
                    for (index01 = 30; index01 < 40 && mMYINFO.mAvatarInfo.aSkill[index01][0] >= 1; index01++)
                    {
                        ;
                    }
                    if (index01 == 40)
                    {
                        return;
                    }
                    break;
                }
                break;

            case 4:
                for (index01 = 10; index01 < 20 && mMYINFO.mAvatarInfo.aSkill[index01][0] >= 1; index01++)
                {
                    ;
                }
                if (index01 == 20)
                {
                    for (index01 = 30; index01 < 40 && mMYINFO.mAvatarInfo.aSkill[index01][0] >= 1; index01++)
                    {
                        ;
                    }
                    if (index01 == 40)
                    {
                        return;
                    }
                    break;
                }
                break;

            default:
                return;
            }
            GSOUND::Play(&mGDATA.mSOUND_5[281], 0, 100);
            mMYINFO.mAvatarInfo.aSkillPoint -= tSKILL_INFO->sLearnSkillPoint;
            mMYINFO.mAvatarInfo.aSkill[index01][0] = tSKILL_INFO->sIndex;
            mMYINFO.mAvatarInfo.aSkill[index01][1] = tSKILL_INFO->sLearnSkillPoint;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
            tMsg = 425;
            mBASICUI.Insert1(mMESSAGE.Return(tMsg), mFONTCOLOR.mData[44]);
            if (index01 < 10)
                mSKILLUI.Set(0);
            else if (index01 < 20)
                mSKILLUI.Set(1);
            else if (index01 < 30)
                mSKILLUI.Set(2);
        }
        return;

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
        if (!r->tResult)
        {
            tEquipIndex = tITEM_INFO->iEquipInfo[1] - 2;
            if (tEquipIndex >= 0 && tEquipIndex <= 12)
            {
                tEquip[0] = mMYINFO.mAvatarInfo.aEquip[tEquipIndex][0];
                tEquip[1] = mMYINFO.mAvatarInfo.aEquip[tEquipIndex][1];
                tEquip[2] = mMYINFO.mAvatarInfo.aEquip[tEquipIndex][2];
                tEquip[3] = mMYINFO.mAvatarInfo.aEquip[tEquipIndex][3];
                tEquipSocket[0] = mMYINFO.mAvatarInfo.aEquipSocket[tEquipIndex][0];
                tEquipSocket[1] = mMYINFO.mAvatarInfo.aEquipSocket[tEquipIndex][1];
                tEquipSocket[2] = mMYINFO.mAvatarInfo.aEquipSocket[tEquipIndex][2];
                tEquipSocket[3] = mMYINFO.mAvatarInfo.aEquipSocket[tEquipIndex][3];
                tEquipSocket[4] = mMYINFO.mAvatarInfo.aEquipSocket[tEquipIndex][4];
                mMYINFO.mAvatarInfo.aEquip[tEquipIndex][0] = mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0];
                mMYINFO.mAvatarInfo.aEquip[tEquipIndex][1] = mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3];
                mMYINFO.mAvatarInfo.aEquip[tEquipIndex][2] = mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4];
                mMYINFO.mAvatarInfo.aEquip[tEquipIndex][3] = mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5];
                mMYINFO.mAvatarInfo.aEquipSocket[tEquipIndex][0] = mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][0];
                mMYINFO.mAvatarInfo.aEquipSocket[tEquipIndex][1] = mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][1];
                mMYINFO.mAvatarInfo.aEquipSocket[tEquipIndex][2] = mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][2];
                mMYINFO.mAvatarInfo.aEquipSocket[tEquipIndex][3] = mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][3];
                mMYINFO.mAvatarInfo.aEquipSocket[tEquipIndex][4] = mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][4];
                mPLAY.mAVATAR_OBJECT[0].mDATA.aEquipForView[tEquipIndex][0] = mMYINFO.mAvatarInfo.aEquip[tEquipIndex][0];
                mPLAY.mAVATAR_OBJECT[0].mDATA.aEquipForView[tEquipIndex][1] = mMYINFO.mAvatarInfo.aEquip[tEquipIndex][2];
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = tEquip[0];
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = tEquip[1];
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = tEquip[2];
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = tEquip[3];
                mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][0] = tEquipSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][1] = tEquipSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][2] = tEquipSocket[2];
                mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][3] = tEquipSocket[3];
                mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][4] = tEquipSocket[4];
                mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aType = 2 * mFACTOR.GetWeaponClass3();
                mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aSort = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aFrame = 0.0;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > mFACTOR.GetMaxLife())
                    mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mFACTOR.GetMaxLife();
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
                if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue > mFACTOR.GetMaxMana())
                    mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = mFACTOR.GetMaxMana();
            }
        }
        return;

    case 23:
    case 24:
        if (!r->tResult)
        {
            tEquipIndex = tITEM_INFO->iSort - 23;
            mMYINFO.mAvatarInfo.aCombineSkills[tEquipIndex][r->tValue] = tITEM_INFO->iIndex;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
            GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
            sprintf(mBuffer, mMESSAGE.Return(2999), tITEM_INFO->iName);
            mSPECIALSKILL.Set(tEquipIndex);
        }
        return;

    case 26:
        if (!r->tResult)
        {
            mMYINFO.mAvatarInfo.aWineBottle[r->tValue] = tITEM_INFO->iIndex;
            mMYINFO.mAvatarInfo.aWineBottle1Quantity[r->tValue] = 30;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
            GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
            mBOOZEUI.Set();
        }
        return;

    case 35:
    case 36:
        if (!r->tResult)
        {
            mMYINFO.mAvatarInfo.aCostume[r->tValue] = tITEM_INFO->iIndex;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
            mMYINFO.mAvatarInfo.aLegendaryCostume[r->tValue] = mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4];
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > mFACTOR.GetMaxLife())
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue > mFACTOR.GetMaxMana())
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = mFACTOR.GetMaxMana();
            GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
            mBASICUI.Insert1(mMESSAGE.Return(1517), 15);
        }
        return;

    default:
        switch (tITEM_INFO->iIndex)
        {
        case 552:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 506:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aEatLifePotion;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 507:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aEatManaPotion;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 508:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aEatAgilityPotion;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 509:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aEatStrengthPotion;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 512:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 530:
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
            break;

        case 537:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 539:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleExpTime2 += 180;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 800:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 553:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aCriticalBoostScroll += 180;
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 554:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aMaxStrElixirEatState = 1;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 555:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aMaxHPElixirEatState = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 556:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aMaxAgiElixirEatState = 1;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 557:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aMaxMPElixirEatState = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 558:
            switch (r->tResult)
            {
            case 0:
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                tMsg = 2025;
                break;
            case 1:
            case 3:
                tMsg = 223;
                break;
            case 2:
                tMsg = 1716;
                break;
            case 4:
                tMsg = 1715;
                break;
            case 5:
                tMsg = 2026;
                break;
            default:
                return;
            }
            return;

        case 566:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aFactionNoticeScroll += 5;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 567:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mMYINFO.mAvatarInfo.aProxyShopTime = r->tValue;
                break;
            }
            return;

        case 574:
        case 610:
        case 686:
        case 687:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                switch (tITEM_INFO->iIndex)
                {
                case 574:
                case 2314:
                    tMsg = 1865;
                    break;
                case 1217:
                    tMsg = 1871;
                    break;
                case 610:
                case 686:
                case 687:
                    tMsg = 1871;
                    break;
                default:
                    return;
                }
            }
            return;

        case 577:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aIvyHallTimeR12 += 30;
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 578:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aEatElementAtkDefPotion += 1000;
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 579:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aEatElementAtkDefPotion += 1;
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 580:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 581:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 582:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 583:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 584:
            if (!r->tResult)
			{
				mMYINFO.mAvatarInfo.aLuckyUpgrade --;
				GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 585:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 586:// Cape Box
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 587:// Vip Box
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 590:
            if (r->tResult)
            {
                tMsg = 2023;
                break;
            }
            else
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 591:
            if (!r->tResult)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                tMsg = 902;
                break;
            }
            return;

        case 592:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mMYINFO.mAvatarInfo.aProxyShopTime = r->tValue;
                break;
            }
            return;
        case 593:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aPreventRefineBreak;
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 601:// War Box
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 717://New Box Sistem Skill
            if (!r->tResult)
            {
				mMYINFO.mAvatarInfo.aWingProtectionScroll -= 10;
				GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 714://New Box Sistem Wings
			if (!r->tResult)
			{
				mMYINFO.mAvatarInfo.aDailyOnlineTime -= 60;
				GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
				break;
			}
            return;
		case 885:
			if (!r->tResult)
			{
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
				break;
			}
			return;
		case 883:
			if (!r->tResult)
			{
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
				break;
			}
			return;
		case 1157:
			if (!r->tResult)
			{
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
				mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
				break;
			}
			return;
        case 750:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aCapsuleOnlineTime -= 1000;
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 751:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aCapsuleMallPoints -= 2000;
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 752:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aHealthBoostScroll -= 100;
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 753:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 754:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1249:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1070:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 18010:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 18011:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 18012:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 18013:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 18014:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 18015:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1144:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 6271:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 2159:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 2298:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 716:// sag click
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 829:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 602:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 611:
            switch (r->tResult)
            {
            case 0:
                if (mMYINFO.mAvatarInfo.aAnimalIndex < 0 || mMYINFO.mAvatarInfo.aAnimalIndex < 10)
                {
                    tMsg = 2186;
                    break;
                }
                mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex - 10] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            case 1:
                tMsg = 2555;
                break;
            case 2:
                tMsg = 2164;
                break;
            default:
                return;
            }
            return;

        case 613:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 620:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aRageBurstPill;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            else
            {
                tMsg = 3000;
                break;
            }
            return;

        case 626:
        case 627:
        case 628:
            if (!r->tResult)
            {
                switch (tITEM_INFO->iIndex)
                {
                case 626:
                    mMYINFO.mAvatarInfo.aHeroPill += 180;
                    break;
                case 627:
                    mMYINFO.mAvatarInfo.aHeroPill += 90;
                    break;
                case 628:
                    mMYINFO.mAvatarInfo.aHeroPill += 30;
                    break;
                }
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                break;
            }
            else
            {
                tMsg = 3000;
                break;
            }
            return;

        case 629:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleRageGain += 30;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
               
            }
            else
            {
                tMsg = 3000;
                break;
            }
            return;

        case 632:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 635:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 636:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aEatLifePotion += 10;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            else
            {
                tMsg = 3000;
                break;
            }
            return;

        case 637:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aEatManaPotion += 10;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            else
            {
                tMsg = 3000;
                break;
            }
            return;

        case 638:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aEatStrengthPotion += 10;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            else
            {
                tMsg = 3000;
                break;
            }
            return;

        case 639:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aEatAgilityPotion += 10;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            else
            {
                tMsg = 3000;
                break;
            }
            return;

        case 640:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aEatElementAtkDefPotion += 10000;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            else
            {
                tMsg = 3000;
                break;
            }
            return;

        case 641:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aEatElementAtkDefPotion += 10;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            else
            {
                tMsg = 3000;
                break;
            }
            return;

        case 649:
        case 650:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 651:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aEatStrengthPotion = 200;
                mMYINFO.mAvatarInfo.aEatAgilityPotion = 200;
                mMYINFO.mAvatarInfo.aEatManaPotion = 200;
                mMYINFO.mAvatarInfo.aEatLifePotion = 200;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 652:
            switch (r->tResult)
            {
            case 0:
                if (mMYINFO.mAvatarInfo.aAnimalIndex >= 0 && mMYINFO.mAvatarInfo.aAnimalIndex >= 10)
                {
                    mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex - 10] = r->tValue;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                    break;
                }
                tMsg = 2186;
                break;
            case 1:
                tMsg = 2555;
                break;
            case 2:
                tMsg = 2164;
                break;
            default:
                return;
            }
            return;

        case 664:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 665:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mTOWERBUILDUI.Off();
                break;
            }
            return;

        case 691:
        case 692:
        case 693:
        case 694:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aKillOtherTribe += 5 * (tITEM_INFO->iIndex - 690);
                mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe = mMYINFO.mAvatarInfo.aKillOtherTribe;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 707:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aDiamondPill;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 712:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aTheFortressTime += 10;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 713:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aTheFortressTime += 30;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1075:
        case 1076:
        case 1077:
        case 1078:
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
            break;

        case 1092:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aEatStrengthPotion;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1093:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aEatAgilityPotion;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1095:
        case 1124:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aZone126TypeTime += 180;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1097:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aZone101TypeTime += 120;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1098:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aZone101TypeTime += 60;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1102:
            if (r->tResult)
            {
                tMsg - 650;
                break;
            }
            else
            {
                mMYINFO.mAvatarInfo.aExpandInventoryDate = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1103:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aProtectForDestroy;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1104:
            if (!r->tResult)
            {
                for (index01 = 0; index01 < 40; index01++)
                {
                    if (mMYINFO.mAvatarInfo.aSkill[index01][0] >= 1
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 139
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 140
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 141
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 142
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 143
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 144
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 145
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 146
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 147
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 148
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 149
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 150)
                    {
                        mMYINFO.mAvatarInfo.aSkillPoint = mMYINFO.mAvatarInfo.aSkillPoint + mMYINFO.mAvatarInfo.aSkill[index01][1] - 1;
                        mMYINFO.mAvatarInfo.aSkill[index01][1] = 1;
                    }
                }
                for (index01 = 0; index01 < 3; index01++)
                {
                    for (index02 = 0; index02 < 14; index02++)
                    {
                        if (mMYINFO.mAvatarInfo.aHotKey[index01][index02][2] == 1
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 139
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 140
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 141
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 142
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 143
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 144
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 145
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 146
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 147
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 148
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 149
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 150)
                        {
                            mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] = 0;
                            mMYINFO.mAvatarInfo.aHotKey[index01][index02][1] = 0;
                            mMYINFO.mAvatarInfo.aHotKey[index01][index02][2] = 0;
                        }
                    }
                }
                for (index01 = 0; index01 < 8; index01++)
                {
                    mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[index01][0] = 0;
                    mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[index01][1] = 0;
                }
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mMYINFO.mHotKeyIndex = -1;
                break;
            }
            return;

        case 1108:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aProtectForDeath += 20;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1109:
            if (!r->tResult)
            {
                if (--mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] < 1)
                {
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                }
                break;
            }
            return;

        case 1118:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleKillNumTime += 30;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1119:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleKillExpTime += 30;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1120:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleKillExpTime += 30;
                mMYINFO.mAvatarInfo.aDoubleKillNumTime += 30;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1121:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleExpTime1 += 60;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1122:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleExpTime1 += 120;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1123:
        case 1234:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleExpTime1 += 180;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1125:
            if (r->tResult)
            {
                tMsg = 3000;
                break;
            }
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 100000004;
            break;
            
        case 1130:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aExpandStoreDate = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1132:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleBuffTime += 60;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1134:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aDex + mMYINFO.mAvatarInfo.aInt + mMYINFO.mAvatarInfo.aStr + mMYINFO.mAvatarInfo.aVit - 4;
                mMYINFO.mAvatarInfo.aVit = 1;
                mMYINFO.mAvatarInfo.aStr = 1;
                mMYINFO.mAvatarInfo.aInt = 1;
                mMYINFO.mAvatarInfo.aDex = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mSTATUSUI.Set();
                break;
            }
            return;
        case 1135:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aDex + mMYINFO.mAvatarInfo.aInt + mMYINFO.mAvatarInfo.aStr + mMYINFO.mAvatarInfo.aVit - 4;
                mMYINFO.mAvatarInfo.aVit = 1;
                mMYINFO.mAvatarInfo.aStr = 1;
                mMYINFO.mAvatarInfo.aInt = 1;
                mMYINFO.mAvatarInfo.aDex = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mSTATUSUI.Set();
                break;
            }
            return;
        case 1136:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aDex + mMYINFO.mAvatarInfo.aInt + mMYINFO.mAvatarInfo.aStr + mMYINFO.mAvatarInfo.aVit - 4;
                mMYINFO.mAvatarInfo.aVit = 1;
                mMYINFO.mAvatarInfo.aStr = 1;
                mMYINFO.mAvatarInfo.aInt = 1;
                mMYINFO.mAvatarInfo.aDex = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mSTATUSUI.Set();
                break;
            }
            return;
        case 1137:
            if (!r->tResult)
            {
                switch (r->tValue)
                {
                case 1:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aStr - 1;
                    mMYINFO.mAvatarInfo.aStr = 1;
                    break;
                case 2:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aDex - 1;
                    mMYINFO.mAvatarInfo.aDex = 1;
                    break;
                case 3:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aVit - 1;
                    mMYINFO.mAvatarInfo.aVit = 1;
                    break;
                case 4:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aInt - 1;
                    mMYINFO.mAvatarInfo.aInt = 1;
                    break;
                default:
                    break;
                }
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mSTATUSUI.Set();
                break;
            }
            return;
        case 1138:
            if (!r->tResult)
            {
                switch (r->tValue)
                {
                case 1:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aStr - 1;
                    mMYINFO.mAvatarInfo.aStr = 1;
                    break;
                case 2:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aDex - 1;
                    mMYINFO.mAvatarInfo.aDex = 1;
                    break;
                case 3:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aVit - 1;
                    mMYINFO.mAvatarInfo.aVit = 1;
                    break;
                case 4:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aInt - 1;
                    mMYINFO.mAvatarInfo.aInt = 1;
                    break;
                default:
                    break;
                }
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mSTATUSUI.Set();
                break;
            }
            return;
        case 1139:
            if (!r->tResult)
            {
                switch (r->tValue)
                {
                case 1:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aStr - 1;
                    mMYINFO.mAvatarInfo.aStr = 1;
                    break;
                case 2:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aDex - 1;
                    mMYINFO.mAvatarInfo.aDex = 1;
                    break;
                case 3:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aVit - 1;
                    mMYINFO.mAvatarInfo.aVit = 1;
                    break;
                case 4:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aInt - 1;
                    mMYINFO.mAvatarInfo.aInt = 1;
                    break;
                default:
                    break;
                }
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mSTATUSUI.Set();
                break;
            }
            return;

        case 1140:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aExpandStoreDate = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1141:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aExpandInventoryDate = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
           
        case 1142:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aDex + mMYINFO.mAvatarInfo.aInt + mMYINFO.mAvatarInfo.aStr + mMYINFO.mAvatarInfo.aVit - 4;
                mMYINFO.mAvatarInfo.aVit = 1;
                mMYINFO.mAvatarInfo.aStr = 1;
                mMYINFO.mAvatarInfo.aInt = 1;
                mMYINFO.mAvatarInfo.aDex = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mSTATUSUI.Set();
                break;
            }
            return;
        case 1143:
            if (!r->tResult)
            {
                switch (r->tValue)
                {
                case 1:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aStr - 1;
                    mMYINFO.mAvatarInfo.aStr = 1;
                    break;
                case 2:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aDex - 1;
                    mMYINFO.mAvatarInfo.aDex = 1;
                    break;
                case 3:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aVit - 1;
                    mMYINFO.mAvatarInfo.aVit = 1;
                    break;
                case 4:
                    mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aInt - 1;
                    mMYINFO.mAvatarInfo.aInt = 1;
                    break;
                default:
                    break;
                }
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mSTATUSUI.Set();
                break;
            }
            return;

        case 1145:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aAnimalTime = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1146:
        case 1231:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aLuckyCombine += 3;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1147:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aLuckyCombine += 2;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1148:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aLuckyCombine;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1149:
        case 1232:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aLuckyUpgrade += 3;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1150:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aLuckyUpgrade += 2;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1151:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aLuckyUpgrade;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1152:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aLuckyDrop += 180;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1233:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aLuckyDrop += 180;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1153:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aLuckyDrop += 120;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1154:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aLuckyDrop += 60;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1155:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aExtinctionScroll += 50;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1166:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aCPProtectionCharm;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1167:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.iGoldOrnamentRemainsTime += 240;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > mFACTOR.GetMaxLife())
                    mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mFACTOR.GetMaxLife();
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
                if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue > mFACTOR.GetMaxMana())
                    mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = mFACTOR.GetMaxMana();
                break;
            }
            return;

        case 1168:
        case 1169:
        case 1170:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aSearchAndBuyDate = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1171:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aGender = r->tValue % 10 - 1;
                mMYINFO.mAvatarInfo.aHeadType = r->tValue % 100 / 10 - 1;
                mMYINFO.mAvatarInfo.aFaceType = r->tValue % 1000 / 100 - 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aGender = r->tValue % 10 - 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aHeadType = r->tValue % 100 / 10 - 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aFaceType = r->tValue % 1000 / 100 - 1;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1173:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aLuckyDrop += 180;
                mMYINFO.mAvatarInfo.aLuckyCombine += 3;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1174:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aLuckyUpgrade += 3;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1175:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aLuckyCombine += 3;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1176:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aLuckyUpgrade;
                mMYINFO.mAvatarInfo.aLuckyDrop += 60;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1177:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aProtectForDeath;
                mMYINFO.mAvatarInfo.aExtinctionScroll += 50;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1180:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aDoubleIslandOfBloodTimeUse;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1181:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aSoulBoost;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1182:
            if (!r->tResult)
            {
                --mMYINFO.mAvatarInfo.aEatAgilityPotion;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 1093;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1183:
            if (!r->tResult)
            {
                --mMYINFO.mAvatarInfo.aEatStrengthPotion;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 1092;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1185:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aProtectForDestroy += 5;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1186:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleKillExpTime += 50;
                mMYINFO.mAvatarInfo.aDoubleKillNumTime += 50;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1187:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aZone126TypeTime += 900;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1188:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aCPProtectionCharm += 3;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1189:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aFactionReturnScroll;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1190:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aPat_Exp_x2_Time += 180;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1191:
        case 1192:
        case 1193:
        case 1194:
        case 1195:
        case 1196:
        case 1197:
        case 1198:
        case 1199:
            if (!r->tResult)
            {
                switch (tITEM_INFO->iIndex)
                {
                case 1191:
                    mMYINFO.mAvatarInfo.aDamageBoostScroll += 180;
                    break;
                case 1192:
                    mMYINFO.mAvatarInfo.aDamageBoostScroll += 90;
                    break;
                case 1193:
                    mMYINFO.mAvatarInfo.aDamageBoostScroll += 30;
                    break;
                //case 1194:
                //    mMYINFO.mAvatarInfo.aHealthBoostScroll += 180;
                //    break;
                //case 1195:
                //    mMYINFO.mAvatarInfo.aHealthBoostScroll += 90;
                //    break;
                //case 1196:
                //    mMYINFO.mAvatarInfo.aHealthBoostScroll += 30;
                //    break;
                case 1197:
                    mMYINFO.mAvatarInfo.aCriticalBoostScroll += 180;
                    break;
                case 1198:
                    mMYINFO.mAvatarInfo.aCriticalBoostScroll += 90;
                    break;
                case 1199:
                    mMYINFO.mAvatarInfo.aCriticalBoostScroll += 30;
                    break;
                }
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                break;
            }
            return;

        case 1200:
        case 1494:
            if (r->tResult == 3)
            {
                tMsg = 117;
                break;
            }
            if (!r->tResult)
            {
                if (mMYINFO.mAvatarInfo.aTitle % 100 == 13 || mMYINFO.mAvatarInfo.aTitle % 100 == 14)
                {
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 891;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                }
                else
                {
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                }
                mMYINFO.mAvatarInfo.aKillOtherTribe = r->tValue;
                mMYINFO.mAvatarInfo.aTitle = 0;
                mMYINFO.iTribeCallType = 0;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
                mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe = r->tValue;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aTitle = 0;
                break;
            }
            return;

        case 1201:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aAutoBuffScroll = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1211:
            switch (r->tResult)
            {
            case 0:
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            case 1:
            case 3:
                tMsg = 223;
                break;
            case 2:
                tMsg = 1716;
                break;
            case 4:
                tMsg = 1715;
                break;
            default:
                return;
            }
            return;

        case 1214:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aHeadType = r->tValue % 100 / 10 - 1;
                mMYINFO.mAvatarInfo.aFaceType = r->tValue % 1000 / 100 - 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aHeadType = r->tValue % 100 / 10 - 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aFaceType = r->tValue % 1000 / 100 - 1;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1215:
        case 1216:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aAutoBuffScroll = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1217:
            if (!r->tResult)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                switch (tITEM_INFO->iIndex)
                {
                case 574:
                case 2314:
                    tMsg = 1865;
                    break;
                case 1217:
                case 610:
                case 686:
                case 687:
                    tMsg = 1871;
                    break;
                default:
                    return;
                }
            }
            return;

        case 1218:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aPreventRefineBreak;
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1219:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aIvyHallFishing += 360;
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1221:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleMountExpTime += 180;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1222:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                GSOUND::Play(&mGDATA.mSOUND_5[341], 0, 100);
                break;
            }
            return;

        case 1224:
            if (!r->tResult)
            {
                if (--mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] < 1)
                {
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                }
                GSOUND::Play(&mGDATA.mSOUND_5[341], 0, 100);
                break;
            }
            return;

        case 1225:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1226:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1227:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aWarriorScroll += r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1237:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aWingProtectionScroll;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1240:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1242:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aIvyHallTimeR12 += 30;
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

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
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aAnimal[r->tValue] = tITEM_INFO->iIndex;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1358:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aProtectForDestroy += 5;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1359:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleExpTime2 += 1800;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1367:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1370:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.iSilverOrnamentRemainsTime += 180;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > mFACTOR.GetMaxLife())
                    mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mFACTOR.GetMaxLife();
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
                if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue > mFACTOR.GetMaxMana())
                    mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = mFACTOR.GetMaxMana();
                break;
            }
            return;

        case 1371:
            if (!r->tResult)
            {
                if (mMYINFO.mAvatarInfo.aDoubleIslandOfBloodTimeUse >= 1)
                {
                    mMYINFO.mAvatarInfo.aIslandOfBloodTime += 60;
                    mMYINFO.mAvatarInfo.aDoubleIslandOfBloodTimeUse--;
                    mBASICUI.Insert1(mMESSAGE.Return(1294), mFONTCOLOR.mData[44]);
                }
                else
                {
                    mMYINFO.mAvatarInfo.aIslandOfBloodTime += 30;
                }
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1372:
            if (!r->tResult)
            {
                if (mMYINFO.mAvatarInfo.aSoulBoost >= 1)
                {
                    mMYINFO.mAvatarInfo.aIslandOfSoul1Time += 60;
                    --mMYINFO.mAvatarInfo.aSoulBoost;
                    mBASICUI.Insert1(mMESSAGE.Return(1295), mFONTCOLOR.mData[44]);
                }
                else
                {
                    mMYINFO.mAvatarInfo.aIslandOfSoul1Time += 30;
                }
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1373:
            if (!r->tResult)
            {
                if (mMYINFO.mAvatarInfo.aSoulBoost >= 1)
                {
                    mMYINFO.mAvatarInfo.aIslandOfSoul2Time += 60;
                    --mMYINFO.mAvatarInfo.aSoulBoost;
                    mBASICUI.Insert1(mMESSAGE.Return(1295), mFONTCOLOR.mData[44]);
                }
                else
                {
                    mMYINFO.mAvatarInfo.aIslandOfSoul2Time += 30;
                }
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1374:
            if (!r->tResult)
            {
                if (mMYINFO.mAvatarInfo.aSoulBoost >= 1)
                {
                    mMYINFO.mAvatarInfo.aIslandOfSoul3Time += 60;
                    --mMYINFO.mAvatarInfo.aSoulBoost;
                    mBASICUI.Insert1(mMESSAGE.Return(1295), mFONTCOLOR.mData[44]);
                }
                else
                {
                    mMYINFO.mAvatarInfo.aIslandOfSoul3Time += 30;
                }
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1375:
            if (!r->tResult)
            {
                if (mMYINFO.mAvatarInfo.aSoulBoost >= 1)
                {
                    mMYINFO.mAvatarInfo.aIslandOfSoul4Time += 60;
                    --mMYINFO.mAvatarInfo.aSoulBoost;
                    mBASICUI.Insert1(mMESSAGE.Return(1295), mFONTCOLOR.mData[44]);
                }
                else
                {
                    mMYINFO.mAvatarInfo.aIslandOfSoul4Time += 30;
                }
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1376:
            if (!r->tResult)
            {
                if (mMYINFO.mAvatarInfo.aSoulBoost >= 1)
                {
                    mMYINFO.mAvatarInfo.aIslandOfSoul5Time += 60;
                    --mMYINFO.mAvatarInfo.aSoulBoost;
                    mBASICUI.Insert1(mMESSAGE.Return(1295), mFONTCOLOR.mData[44]);
                }
                else
                {
                    mMYINFO.mAvatarInfo.aIslandOfSoul5Time += 30;
                }
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1377:
            if (!r->tResult)
            {
                if (mMYINFO.mAvatarInfo.aSoulBoost >= 1)
                {
                    mMYINFO.mAvatarInfo.aIslandOfSoul6Time += 60;
                    --mMYINFO.mAvatarInfo.aSoulBoost;
                    mBASICUI.Insert1(mMESSAGE.Return(1295), mFONTCOLOR.mData[44]);
                }
                else
                {
                    mMYINFO.mAvatarInfo.aIslandOfSoul6Time += 30;
                }
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1378:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1379:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1419:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleExpTime1 += 60;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1420:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleExpTime1 += 120;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1421:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleExpTime2 += 180;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1434:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aLifeOrDeath;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1436:
        case 1458:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aExpPill += 180;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1438:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aExpPill += 108;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1439:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aExpPill += 36;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1444:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aKillOtherTribe += 500;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe += 500;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1445:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 100000011;
                break;
            }
            return;
        case 1446:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 100000012;
                break;
            }
            return;
        case 1447:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aKillOtherTribe += 1000;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe += 1000;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1448:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aKillOtherTribe += 500;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe += 500;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1449:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aKillOtherTribe += 100;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe += 100;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1453:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aAnimalTime = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1454:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleKillNumTime += 30;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1455:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aProtectForDestroy;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1456:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleKillExpTime += 30;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1459:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aDex + mMYINFO.mAvatarInfo.aInt + mMYINFO.mAvatarInfo.aStr + mMYINFO.mAvatarInfo.aVit - 4;
                mMYINFO.mAvatarInfo.aVit = 1;
                mMYINFO.mAvatarInfo.aStr = 1;
                mMYINFO.mAvatarInfo.aInt = 1;
                mMYINFO.mAvatarInfo.aDex = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mSTATUSUI.Set();
                break;
            }
            return;
        case 1477:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1489:
        case 1490:
        case 1491:
        case 1492:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1499:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aKillOtherTribe += 5000;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe += 5000;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1850:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aPK = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 2138:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aPremiumService = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 2292:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aPremiumService = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 2169:
        case 2171:
        case 2249:
        case 2252:
        case 2295:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }

        case 2193:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aUpgradeValue = r->tValue;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aHalo = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                break;
            }
            return;

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
            if (!(r->tResult / 10000000))
            {
                index01 = r->tResult % 10000000 / 100000;
                mMYINFO.mAvatarInfo.aAnimal[index01] = r->tResult % 100000;
                mUTIL.SetEliteAnimalAbility(index01, 1, r->tValue);
                mUTIL.SetEliteAnimalAbility(index01, 2, r->tValue);
                mUTIL.SetEliteAnimalAbility(index01, 3, r->tValue);
                mUTIL.SetEliteAnimalAbility(index01, 4, r->tValue);
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1066:
            if (!r->tResult)
            {
                for (index01 = 0; index01 < 3; index01++)
                {
                    for (index02 = 0; index02 < 14; index02++)
                    {
                        if (mMYINFO.mAvatarInfo.aHotKey[index01][index02][2] == 1
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] == mMYINFO.mAvatarInfo.aSkill[r->tValue][0])
                        {
                            mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] = 0;
                            mMYINFO.mAvatarInfo.aHotKey[index01][index02][1] = 0;
                            mMYINFO.mAvatarInfo.aHotKey[index01][index02][2] = 0;
                        }
                    }
                }
                for (index01 = 0; index01 < 8; index01++)
                {
                    if (mMYINFO.mAvatarInfo.aSkill[r->tValue][0] == mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[index01][0])
                    {
                        mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[index01][0] = 0;
                        mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[index01][1] = 0;
                    }
                }
                for (index01 = 0; index01 < 2; index01++)
                {
                    for (index02 = 0; index02 < 2; ++index02)
                    {
                        mMYINFO.mAvatarInfo.aAutoSkillAttack[index01][index02] = 0;
                    }
                }
                for (index01 = 0; index01 < 8; index01++)
                {
                    for (index02 = 0; index02 < 2; ++index02)
                    {
                        mMYINFO.mAvatarInfo.aAutoHuntData[index01][index02] = 0;
                    }
                }
                mMYINFO.mAvatarInfo.aSkillPoint += mMYINFO.mAvatarInfo.aSkill[r->tValue][1];
                mMYINFO.mAvatarInfo.aSkill[r->tValue][0] = 0;
                mMYINFO.mAvatarInfo.aSkill[r->tValue][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mMYINFO.mHotKeyIndex = -1;
                break;
            }
            return;

        case 801:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aEatLifePotion;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 802:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aEatManaPotion;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 803:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aEatStrengthPotion;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 804:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aEatAgilityPotion;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 805:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aEatElementAtkDefPotion += 1000;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 806:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aEatElementAtkDefPotion;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

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
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 864:
        case 889:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }

        case 867:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aUpgradeValue = r->tValue;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aHalo = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1017:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aEatLifePotion;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1018:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aEatManaPotion;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1026:
            if (!r->tResult)
            {
                if (--mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] < 1)
                {
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                }
                break;
            }
            return;

        case 1027:
            if (!r->tResult)
            {
                for (index01 = 0; index01 < 40; index01++)
                {
                    if (mMYINFO.mAvatarInfo.aSkill[index01][0] >= 1
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 139
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 140
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 141
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 142
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 143
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 144
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 145
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 146
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 147
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 148
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 149
                        && mMYINFO.mAvatarInfo.aSkill[index01][0] != 150)
                    {
                        mMYINFO.mAvatarInfo.aSkillPoint += mMYINFO.mAvatarInfo.aSkill[index01][1];
                        mMYINFO.mAvatarInfo.aSkill[index01][0] = 0;
                        mMYINFO.mAvatarInfo.aSkill[index01][1] = 0;
                    }
                }
                for (index01 = 0; index01 < 3; index01++)
                {
                    for (index02 = 0; index02 < 14; ++index02)
                    {
                        if (mMYINFO.mAvatarInfo.aHotKey[index01][index02][2] == 1
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 139
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 140
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 141
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 142
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 143
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 144
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 145
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 146
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 147
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 148
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 149
                            && mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] != 150)
                        {
                            mMYINFO.mAvatarInfo.aHotKey[index01][index02][0] = 0;
                            mMYINFO.mAvatarInfo.aHotKey[index01][index02][1] = 0;
                            mMYINFO.mAvatarInfo.aHotKey[index01][index02][2] = 0;
                        }
                    }
                }
                for (index01 = 0; index01 < 8; index01++)
                {
                    mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[index01][0] = 0;
                    mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots[index01][1] = 0;
                }
                for (index01 = 0; index01 < 2; index01++)
                {
                    for (index02 = 0; index02 < 2; ++index02)
                        mMYINFO.mAvatarInfo.aAutoSkillAttack[index01][index02] = 0;
                }
                for (index01 = 0; index01 < 8; index01++)
                {
                    for (index02 = 0; index02 < 2; index02++)
                    {
                        mMYINFO.mAvatarInfo.aAutoHuntData[index01][index02] = 0;
                    }
                }
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mMYINFO.mHotKeyIndex = -1;
                break;
            }
            return;
        case 1028:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint + mMYINFO.mAvatarInfo.aDex + mMYINFO.mAvatarInfo.aInt + mMYINFO.mAvatarInfo.aStr + mMYINFO.mAvatarInfo.aVit - 4;
                mMYINFO.mAvatarInfo.aVit = 1;
                mMYINFO.mAvatarInfo.aStr = 1;
                mMYINFO.mAvatarInfo.aInt = 1;
                mMYINFO.mAvatarInfo.aDex = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                mSTATUSUI.Set();
                break;
            }
            return;

        case 1035:
            if (r->tResult)
            {
                tMsg = 612;
                break;
            }
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 100000001;
            break;

        case 1036:
            if (r->tResult)
            {
                tMsg = 612;
                break;
            }
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 100000002;
            break;

        case 1037:
            if (r->tResult)
            {
                tMsg = 612;
                break;
            }
            else
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 100000003;
                break;
            }
            return;

        case 1041:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aDoubleExpTime2 += 180;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;

        case 1043:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1045:
            if (r->tResult)
            {
                tMsg = 487;
                break;
            }
            else
            {
                mMYINFO.mAvatarInfo.aMoney = r->tValue;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1047:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aZone101TypeTime += 180;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1048:
            if (!r->tResult)
            {
                ++mMYINFO.mAvatarInfo.aNineTowerKeyNum;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;
        case 1049:
            if (!r->tResult)
            {
                mMYINFO.mAvatarInfo.aZone125TypeTime += 180;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
                break;
            }
            return;


        default:
            return;
        }
        GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
        if (tMsg == 0)
        {
            sprintf(mBuffer, mMESSAGE.Return(2999), tITEM_INFO->iName);
            mBASICUI.Insert1(mBuffer, mFONTCOLOR.mData[44]);
        }
        else
        {
            mBASICUI.Insert1(mMESSAGE.Return(tMsg), mFONTCOLOR.mData[44]);
        }
        return;
    }
}

void WORK::W_DEMAND_ZONE_SERVER_INFO_2_RESULT()
{
    int tResult;

    W_DEMAND_ZONE_SERVER_INFO_2_RESULT_DATA* r = (W_DEMAND_ZONE_SERVER_INFO_2_RESULT_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tSort)
    {
    case 0:
        mNETWORK.CONNECT_2(mMAIN.mWorldIP[mMAIN.mWorldIndex], r->tPort, &tResult);
        switch (tResult)
        {
        case 0:
            mMAIN.mMainMode = 5;
            mMAIN.mSubMode = 0;
            mMAIN.mTicks = 0;
            break;
        case 1:
            mMBOXUI.Set(2, mMESSAGE.Return(102), "");
            break;
        case 2:
            mMBOXUI.Set(2, mMESSAGE.Return(103), "");
            break;
        case 3:
            mBASICUI.Insert1(mMESSAGE.Return(104), mFONTCOLOR.mData[44]);
            if (!mTRANSFER.T_FAIL_MOVE_ZONE_2_SEND())
            {
                mMBOXUI.Set(2, mMESSAGE.Return(20), "");
                return;
            }
            mMYINFO.mMoveZoneState = 0;
            break;
        case 4:
            mBASICUI.Insert1(mMESSAGE.Return(105), mFONTCOLOR.mData[44]);
            if (!mTRANSFER.T_FAIL_MOVE_ZONE_2_SEND())
            {
                mMBOXUI.Set(2, mMESSAGE.Return(20), "");
                return;
            }
            mMYINFO.mMoveZoneState = 0;
            break;
        case 5:
            mBASICUI.Insert1(mMESSAGE.Return(106), mFONTCOLOR.mData[44]);
            if (!mTRANSFER.T_FAIL_MOVE_ZONE_2_SEND())
            {
                mMBOXUI.Set(2, mMESSAGE.Return(20), "");
                return;
            }
            mMYINFO.mMoveZoneState = 0;
            break;
        case 6:
            mMBOXUI.Set(2, mMESSAGE.Return(107), "");
            break;
        case 7:
            mMBOXUI.Set(2, mMESSAGE.Return(108), "");
            break;
        default:
            return;
        }
        break;
    case 1:
        mBASICUI.Insert1(mMESSAGE.Return(100), mFONTCOLOR.mData[44]);
        mMYINFO.mMoveZoneState = 0;
        break;
    case 2:
        mBASICUI.Insert1(mMESSAGE.Return(1221), mFONTCOLOR.mData[44]);
        mMYINFO.mMoveZoneState = 0;
        break;
    case 3:
        mBASICUI.Insert1(mMESSAGE.Return(1347), mFONTCOLOR.mData[44]);
        mMYINFO.mMoveZoneState = 0;
        break;
    case 4:
        mBASICUI.Insert1(mMESSAGE.Return(1928), mFONTCOLOR.mData[44]);
        mMYINFO.mMoveZoneState = 0;
        break;
    case 5:
        mBASICUI.Insert1(mMESSAGE.Return(1554), mFONTCOLOR.mData[44]);
        mMYINFO.mMoveZoneState = 0;
        break;
    case 6:
        mBASICUI.Insert1(mMESSAGE.Return(1951), mFONTCOLOR.mData[44]);
        mMYINFO.mMoveZoneState = 0;
        break;
    case 7:
        mBASICUI.Insert1(mMESSAGE.Return(2293), mFONTCOLOR.mData[44]);
        mMYINFO.mMoveZoneState = 0;
        break;
    case 8:
        mBASICUI.Insert1(mMESSAGE.Return(1213), mFONTCOLOR.mData[44]);
        mMYINFO.mMoveZoneState = 0;
        break;
    case 9:
        mBASICUI.Insert1(mMESSAGE.Return(2308), mFONTCOLOR.mData[44]);
        mMYINFO.mMoveZoneState = 0;
        break;
    case 10:
        mBASICUI.Insert1(mMESSAGE.Return(2689), mFONTCOLOR.mData[44]);
        mMYINFO.mMoveZoneState = 0;
        break;
    case 11:
        mBASICUI.Insert1("[SYSTEM] Can only enter Fishing Grounds every monday.", 15);
        mMYINFO.mMoveZoneState = 0;
        break;
    default:
        return;
    }
}

void WORK::W_USE_HOTKEY_ITEM_RECV()
{
    W_USE_HOTKEY_ITEM_RECV_DATA* r = (W_USE_HOTKEY_ITEM_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (!r->tSort)
    {
        mMYINFO.mNetworkLock = 0;
        GSOUND::Play(&mGDATA.mSOUND_5[28], 0, 100);
        if (--mMYINFO.mAvatarInfo.aHotKey[r->tPage][r->tIndex][1] < 1)
        {
            mMYINFO.mAvatarInfo.aHotKey[r->tPage][r->tIndex][0] = 0;
            mMYINFO.mAvatarInfo.aHotKey[r->tPage][r->tIndex][1] = 0;
            mMYINFO.mAvatarInfo.aHotKey[r->tPage][r->tIndex][2] = 0;
        }
    }
    else
    {
        mMYINFO.mNetworkLock = 0;
    }
}

void WORK::W_IMPROVE_ITEM_RECV()
{
    ITEM_INFO* t;

    W_IMPROVE_ITEM_RECV_DATA* r = (W_IMPROVE_ITEM_RECV_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tResult)
    {
    case 0: // Success
        mMYINFO.mNetworkLock = 0;
        mNPCUI.mInv[0].iImproveState = r->tValue;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = mNPCUI.mInv[0].iQuantity;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mBASICUI.Insert1(mMESSAGE.Return(222), 15);
        t = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (t)
        {
            if (mNPCUI.mInv[1].iIndex == 1422 || mNPCUI.mInv[1].iIndex == 825 || mNPCUI.mInv[1].iIndex == 826 || mNPCUI.mInv[1].iIndex == 619)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[375], 0, 100);
            }
            else
            {
                switch (t->iSort)
                {
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                    if (mUTIL.ReturnISValue(mNPCUI.mInv[0].iImproveState) >= 40)
                        GSOUND::Play(&mGDATA.mSOUND_5[379], 0, 100);
                    else
                        GSOUND::Play(&mGDATA.mSOUND_5[84], 0, 100);
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
                    if (mUTIL.ReturnISValue(mNPCUI.mInv[0].iImproveState) >= 40)
                        GSOUND::Play(&mGDATA.mSOUND_5[376], 0, 100);
                    else
                        GSOUND::Play(&mGDATA.mSOUND_5[81], 0, 100);
                    break;
                default:
                    break;
                }
            }
            if (t->iSort == 6)
                mMYINFO.mAvatarInfo.aKillOtherTribe -= r->tCost;
            else
                mMYINFO.mAvatarInfo.aMoney -= r->tCost;
        }
        return;

    case 1: // Fail
        mMYINFO.mNetworkLock = 0;
        mNPCUI.mInv[0].iImproveState = r->tValue;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = mNPCUI.mInv[0].iQuantity;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mBASICUI.Insert1(mMESSAGE.Return(223), 15);
        t = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (t)
        {
            switch (t->iSort)
            {
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                if (mUTIL.ReturnISValue(mNPCUI.mInv[0].iImproveState) >= 40)
                    GSOUND::Play(&mGDATA.mSOUND_5[380], 0, 100);
                else
                    GSOUND::Play(&mGDATA.mSOUND_5[85], 0, 100);
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
                if (mUTIL.ReturnISValue(mNPCUI.mInv[0].iImproveState) >= 40)
                    GSOUND::Play(&mGDATA.mSOUND_5[377], 0, 100);
                else
                    GSOUND::Play(&mGDATA.mSOUND_5[82], 0, 100);
                break;
            default:
                break;
            }
            if (t->iSort == 6)
                mMYINFO.mAvatarInfo.aKillOtherTribe -= r->tCost;
            else
                mMYINFO.mAvatarInfo.aMoney -= r->tCost;
        }
        return;

    case 2: // Destroyed
        mMYINFO.mNetworkLock = 0;
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mBASICUI.Insert1(mMESSAGE.Return(224), 15);
        t = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (t)
        {
            switch (t->iSort)
            {
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[86], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[83], 0, 100);
                break;
            default:
                break;
            }
            if (t->iSort == 6)
                mMYINFO.mAvatarInfo.aKillOtherTribe -= r->tCost;
            else
                mMYINFO.mAvatarInfo.aMoney -= r->tCost;
        }
        return;

    case 3: // Item has been Sealed
        mMYINFO.mNetworkLock = 0;
        mNPCUI.mInv[0].iImproveState = r->tValue;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = mNPCUI.mInv[0].iQuantity;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mBASICUI.Insert1(mMESSAGE.Return(1401), 15);
        t = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (t)
        {
            switch (t->iSort)
            {
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[381], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[378], 0, 100);
                break;
            default:
                break;
            }
            if (t->iSort == 6)
                mMYINFO.mAvatarInfo.aKillOtherTribe -= r->tCost;
            else
                mMYINFO.mAvatarInfo.aMoney -= r->tCost;
        }
        return;
    }
}

void WORK::W_ADD_ITEM_RECV()
{
    ITEM_INFO* t;
    W_ADD_ITEM_RECV_DATA* r = (W_ADD_ITEM_RECV_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tSort)
    {
    case 0:
        mMYINFO.mNetworkLock = 0;
        t = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (t)
        {
            switch (t->iSort)
            {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[309], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[308], 0, 100);
                break;
            default:
                break;
            }
            mMYINFO.mAvatarInfo.aMoney -= r->tCost;
            mNPCUI.mInv[0].iImproveState = mUTIL.ChangeIUValue(mNPCUI.mInv[0].iImproveState, 1);
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] += mNPCUI.mInv[0].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(222), mFONTCOLOR.mData[44]);
        }
        break;
    case 1:
        mMYINFO.mNetworkLock = 0;
        t = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (t)
        {
            switch (t->iSort)
            {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[311], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[310], 0, 100);
                break;
            default:
                break;
            }
            mMYINFO.mAvatarInfo.aMoney -= r->tCost;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] += mNPCUI.mInv[0].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][0] = mNPCUI.mInv[1].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][1] = mNPCUI.mInv[1].iX;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][2] = mNPCUI.mInv[1].iY;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][3] += mNPCUI.mInv[1].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][4] = mNPCUI.mInv[1].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][5] = mNPCUI.mInv[1].iSerialNumber;
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][0] = mNPCUI.mInv[1].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][1] = mNPCUI.mInv[1].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][2] = mNPCUI.mInv[1].iSocket[2];
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(223), mFONTCOLOR.mData[44]);
        }
        break;
    case 2:
        mMYINFO.mNetworkLock = 0;
        t = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (t)
        {
            switch (t->iSort)
            {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[311], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[310], 0, 100);
                break;
            default:
                break;
            }
            mMYINFO.mAvatarInfo.aMoney -= r->tCost;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] += mNPCUI.mInv[0].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(224), mFONTCOLOR.mData[44]);
        }
        break;
    case 3:
        mMYINFO.mNetworkLock = 0;
        t = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (t)
        {
            switch (t->iSort)
            {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[311], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[310], 0, 100);
                break;
            default:
                break;
            }
            mMYINFO.mAvatarInfo.aMoney -= r->tCost;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] += mNPCUI.mInv[0].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(223), mFONTCOLOR.mData[44]);
        }
        break;
    default:
        return;
    }
}

void WORK::W_EXCHANGE_ITEM_RECV()
{
    ITEM_INFO* t;
    W_EXCHANGE_ITEM_RECV_DATA* r = (W_EXCHANGE_ITEM_RECV_DATA*)&mNETWORK.mBuffer[0];


    if (r->tResult == 0)
    {
        mMYINFO.mNetworkLock = 0;
        t = mITEM.Search(r->tValue[0]);
        if (t)
        {
            switch (t->iSort)
            {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[313], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[312], 0, 100);
                break;
            default:
                break;
            }
            mMYINFO.mAvatarInfo.aMoney -= r->tCost;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mNPCUI.mPage[0] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(716), mFONTCOLOR.mData[44]);
        }
    }
    else if (r->tResult == 1)
    {
        mMYINFO.mNetworkLock = 0;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] += mNPCUI.mInv[0].iQuantity;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
        mNPCUI.mPage[0] = -1;
        mBASICUI.Insert1(mMESSAGE.Return(715), mFONTCOLOR.mData[44]);
    }
    else if (r->tResult == 10)
    {
        mMYINFO.mNetworkLock = 0;
        t = mITEM.Search(r->tValue[0]);
        if (t)
        {
            switch (t->iSort)
            {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[313], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[312], 0, 100);
                break;
            default:
                break;
            }
            mMYINFO.mAvatarInfo.aMoney -= r->tCost;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(2697), mFONTCOLOR.mData[44]);
        }
    }
}

void WORK::W_HIGH_ITEM_RECV()
{
    ITEM_INFO* t;

    W_HIGH_ITEM_RECV_DATA* r = (W_HIGH_ITEM_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (r->tSort == 0)
    {
        mMYINFO.mNetworkLock = 0;
        t = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (t)
        {
            switch (t->iSort)
            {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[303], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[302], 0, 100);
                break;
            default:
                break;
            }
            mMYINFO.mAvatarInfo.aMoney -= r->tCost;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(222), mFONTCOLOR.mData[44]);
        }
    }
    else if (r->tSort == 1)
    {
        mMYINFO.mNetworkLock = 0;
        t = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (t)
        {
            switch (t->iSort)
            {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[305], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[304], 0, 100);
                break;
            default:
                break;
            }
            mMYINFO.mAvatarInfo.aMoney -= r->tCost;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] += mNPCUI.mInv[0].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(223), mFONTCOLOR.mData[44]);
        }
    }
    else if (r->tSort == 2)
    {
        mMYINFO.mNetworkLock = 0;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] += mNPCUI.mInv[0].iQuantity;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][0] = mNPCUI.mInv[1].iIndex;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][1] = mNPCUI.mInv[1].iX;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][2] = mNPCUI.mInv[1].iY;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][3] += mNPCUI.mInv[1].iQuantity;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][4] = mNPCUI.mInv[1].iImproveState;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][5] = mNPCUI.mInv[1].iSerialNumber;
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][0] = mNPCUI.mInv[1].iSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][1] = mNPCUI.mInv[1].iSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][2] = mNPCUI.mInv[1].iSocket[2];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mBASICUI.Insert1(mMESSAGE.Return(726), mFONTCOLOR.mData[44]);
    }
}
void WORK::W_LOW_ITEM_RECV()
{
    ITEM_INFO* t;
    W_LOW_ITEM_RECV_DATA* r = (W_LOW_ITEM_RECV_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tSort)
    {
    case 0:
        mMYINFO.mNetworkLock = 0;
        t = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (t)
        {
            switch (t->iSort)
            {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[307], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[306], 0, 100);
                break;
            default:
                break;
            }
            mMYINFO.mAvatarInfo.aMoney -= r->tCost;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(222), mFONTCOLOR.mData[44]);
        }
        return;

    case 1:
        mMYINFO.mNetworkLock = 0;
        t = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (t)
        {
            switch (t->iSort)
            {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[305], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[304], 0, 100);
                break;
            default:
                break;
            }
            mMYINFO.mAvatarInfo.aMoney -= r->tCost;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] += mNPCUI.mInv[0].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(223), mFONTCOLOR.mData[44]);
        }
        return;

    case 2:
        mMYINFO.mNetworkLock = 0;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] += mNPCUI.mInv[0].iQuantity;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][0] = mNPCUI.mInv[1].iIndex;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][1] = mNPCUI.mInv[1].iX;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][2] = mNPCUI.mInv[1].iY;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][3] += mNPCUI.mInv[1].iQuantity;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][4] = mNPCUI.mInv[1].iImproveState;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][5] = mNPCUI.mInv[1].iSerialNumber;
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][0] = mNPCUI.mInv[1].iSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][1] = mNPCUI.mInv[1].iSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][2] = mNPCUI.mInv[1].iSocket[2];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mBASICUI.Insert1(mMESSAGE.Return(727), mFONTCOLOR.mData[44]);
        return;
    }
}

void WORK::W_MAKE_ITEM_RECV()
{
    W_MAKE_ITEM_RECV_DATA* r = (W_MAKE_ITEM_RECV_DATA*)&mNETWORK.mBuffer[0];
    int index01;

    switch (r->tSort)
    {
    case 0: // General Craft Tailor/Black Smith CP/Silver
        mMYINFO.mNetworkLock = 0;
        GSOUND::Play(&mGDATA.mSOUND_5[303], 0, 100);
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mNPCUI.mPage[2] = -1;
        mNPCUI.mPage[3] = -1;
        mBASICUI.Insert1(mMESSAGE.Return(730), mFONTCOLOR.mData[44]);
        return;

    case 1:
        mMYINFO.mNetworkLock = 0;
        GSOUND::Play(&mGDATA.mSOUND_5[303], 0, 100);
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mNPCUI.mPage[2] = -1;
        mNPCUI.mPage[3] = -1;
        mMYINFO.mAvatarInfo.aKillOtherTribe -= 50;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe -= 50;
        mBASICUI.Insert1(mMESSAGE.Return(730), mFONTCOLOR.mData[44]);
        return;

    case 2:
        mMYINFO.mNetworkLock = 0;
        GSOUND::Play(&mGDATA.mSOUND_5[303], 0, 100);
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mNPCUI.mPage[2] = -1;
        mNPCUI.mPage[3] = -1;
        mMYINFO.mAvatarInfo.aKillOtherTribe -= 1000;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe -= 1000;
        mBASICUI.Insert1(mMESSAGE.Return(730), mFONTCOLOR.mData[44]);
        return;

    case 3:
        mMYINFO.mNetworkLock = 0;
        GSOUND::Play(&mGDATA.mSOUND_5[303], 0, 100);
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mNPCUI.mPage[2] = -1;
        mNPCUI.mPage[3] = -1;
        mMYINFO.mAvatarInfo.aKillOtherTribe -= 2000;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe -= 2000;
        mBASICUI.Insert1(mMESSAGE.Return(730), mFONTCOLOR.mData[44]);
        return;

    case 4:
        mMYINFO.mNetworkLock = 0;
        GSOUND::Play(&mGDATA.mSOUND_5[303], 0, 100);
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mNPCUI.mPage[2] = -1;
        mNPCUI.mPage[3] = -1;
        mMYINFO.mAvatarInfo.aKillOtherTribe -= 3000;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe -= 3000;
        mBASICUI.Insert1(mMESSAGE.Return(730), mFONTCOLOR.mData[44]);
        return;

    case 5:
        mMYINFO.mNetworkLock = 0;
        GSOUND::Play(&mGDATA.mSOUND_5[303], 0, 100);
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mNPCUI.mPage[2] = -1;
        mNPCUI.mPage[3] = -1;
        mMYINFO.mAvatarInfo.aKillOtherTribe -= 5000;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe -= 5000;
        mBASICUI.Insert1(mMESSAGE.Return(730), mFONTCOLOR.mData[44]);
        return;

    case 6:
        mMYINFO.mNetworkLock = 0;
        GSOUND::Play(&mGDATA.mSOUND_5[303], 0, 100);
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mNPCUI.mPage[2] = -1;
        mNPCUI.mPage[3] = -1;
        mMYINFO.mAvatarInfo.aKillOtherTribe -= 10000;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe -= 10000;
        mBASICUI.Insert1(mMESSAGE.Return(730), mFONTCOLOR.mData[44]);
        return;

    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
        mMYINFO.mNetworkLock = 0;
        GSOUND::Play(&mGDATA.mSOUND_5[303], 0, 100);
        switch (r->tSort)
        {
        case 6:
			mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
			mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
			mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
			mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
			mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
			mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
			break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
            for (index01 = 0; index01 < 4; index01++)
            {
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[index01]][mNPCUI.mIndex[index01]][0] = 0;
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[index01]][mNPCUI.mIndex[index01]][1] = 0;
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[index01]][mNPCUI.mIndex[index01]][2] = 0;
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[index01]][mNPCUI.mIndex[index01]][3] = 0;
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[index01]][mNPCUI.mIndex[index01]][4] = 0;
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[index01]][mNPCUI.mIndex[index01]][5] = 0;
            }
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[3]][mNPCUI.mIndex[3]][0] = mNPCUI.mInv[3].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[3]][mNPCUI.mIndex[3]][1] = mNPCUI.mInv[3].iX;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[3]][mNPCUI.mIndex[3]][2] = mNPCUI.mInv[3].iY;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[3]][mNPCUI.mIndex[3]][3] = mNPCUI.mInv[3].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[3]][mNPCUI.mIndex[3]][4] = mNPCUI.mInv[3].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[3]][mNPCUI.mIndex[3]][5] = mNPCUI.mInv[3].iSerialNumber;
            break;
        }
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mNPCUI.mPage[2] = -1;
        mNPCUI.mPage[3] = -1;
        switch (r->tSort)
        {
        case 4: mMYINFO.mAvatarInfo.aKillOtherTribe -= 100; break;
        case 6: mMYINFO.mAvatarInfo.aKillOtherTribe -= 250; break;
        case 7: mMYINFO.mAvatarInfo.aKillOtherTribe -= 500; break;
        case 8: mMYINFO.mAvatarInfo.aKillOtherTribe -= 1000; break;
        case 9: mMYINFO.mAvatarInfo.aKillOtherTribe -= 2000; break;
        case 10: mMYINFO.mAvatarInfo.aKillOtherTribe -= 3000; break;
        case 11: mMYINFO.mAvatarInfo.aKillOtherTribe -= 4000; break;
        case 12: mMYINFO.mAvatarInfo.aKillOtherTribe -= 5000; break;
        case 13: mMYINFO.mAvatarInfo.aKillOtherTribe -= 10000; break;
        }
        mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe = mMYINFO.mAvatarInfo.aKillOtherTribe;
        mBASICUI.Insert1(mMESSAGE.Return(2838), mFONTCOLOR.mData[44]);
        return;
    }
}

void WORK::W_MAKE_SKILL_RECV()
{
    W_MAKE_SKILL_RECV_DATA* r = (W_MAKE_SKILL_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (!r->tResult)
    {
        mMYINFO.mNetworkLock = 0;
        GSOUND::Play(&mGDATA.mSOUND_5[305], 0, 100);
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mNPCUI.mPage[2] = -1;
        mNPCUI.mPage[3] = -1;
        mBASICUI.Insert1(mMESSAGE.Return(731), mFONTCOLOR.mData[44]);
    }
}

void WORK::W_START_PSHOP_RECV()
{
    W_START_PSHOP_RECV_DATA* r = (W_START_PSHOP_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mNetworkLock = 0;
    switch (r->tSort)
    {
    case 0:
        mPLAY.mAVATAR_OBJECT[0].mDATA.aPShopState = 1;
        strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aPShopName, r->tPShopInfo.mName);
        memcpy(&mPSHOPUI.mPShopInfo, &r->tPShopInfo, sizeof(PSHOP_INFO));
        mINVENUI.Off();
        if (mEDITBOX.mDataIndex == 14)
        {
            mEDITBOX.Set(0);
        }
        mPSHOPUI.mPShopSort = 2;
        break;
    case 100:
        memcpy(&mPSHOPUI.mPShopInfo, &r->tPShopInfo, sizeof(PSHOP_INFO));
        mPSHOPUI.Set();
        mINVENUI.Off();
        mBASICUI.Insert1(mMESSAGE.Return(2031), mFONTCOLOR.mData[44]);
        break;
    case 101:
        mBASICUI.Insert1(mMESSAGE.Return(2035), mFONTCOLOR.mData[44]);
        break;
    case 102:
        mBASICUI.Insert1(mMESSAGE.Return(2034), mFONTCOLOR.mData[44]);
        break;
    case 103:
        mBASICUI.Insert1(mMESSAGE.Return(2032), mFONTCOLOR.mData[44]);
        break;
    case 104:
        mBASICUI.Insert1(mMESSAGE.Return(2015), mFONTCOLOR.mData[44]);
        break;
    case 105:
        mBASICUI.Insert1(mMESSAGE.Return(2033), mFONTCOLOR.mData[44]);
        break;
    default:
        return;
    }
}

void WORK::W_END_PSHOP_RECV()
{
    W_END_PSHOP_RECV_DATA* r = (W_END_PSHOP_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (r->tResult == 1)
    {
        mPLAY.mAVATAR_OBJECT[0].mDATA.aPShopState = 0;
        if (mPSHOPUI.mActive)
        {
            mPSHOPUI.mPShopSort = 1;
            mEDITBOX.Set(14);
            mINVENUI.Set();
        }
    }
    else if (r->tResult == 2)
    {
        mPSHOPUI.Set();
        mBASICUI.Insert1(mMESSAGE.Return(2110), mFONTCOLOR.mData[44]);
        mPSHOPUI.Off(3, mPLAY.mAVATAR_OBJECT[0].mDATA.aName, -1);
    }
}

void WORK::W_DEMAND_PSHOP_RECV()
{
    W_DEMAND_PSHOP_RECV_DATA* r = (W_DEMAND_PSHOP_RECV_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tResult)
    {
    case 0:
    case 3:
        memcpy(&mPSHOPUI.mPShopInfo, &r->tPShopInfo, sizeof(PSHOP_INFO));
        break;
    case 1:
        mBASICUI.Insert1(mMESSAGE.Return(583), mFONTCOLOR.mData[44]);
        break;
    case 2:
        mBASICUI.Insert1(mMESSAGE.Return(584), mFONTCOLOR.mData[44]);
        break;
    default:
        return;
    }
}

void WORK::W_BUY_PSHOP_RECV()
{
    W_BUY_PSHOP_RECV_DATA* r = (W_BUY_PSHOP_RECV_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tResult)
    {
    case 0:
        mMYINFO.mNetworkLock = 0;
        if (!mNPCUI.mActive || mNPCUI.mWorkId != 33)
        {
            mCHOICEUI.InitForPick();
        }
        mMYINFO.mAvatarInfo.aMoney -= r->tCost;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue[0];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = r->tValue[1];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = r->tValue[2];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = r->tValue[3];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = r->tValue[4];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = r->tValue[5];
        mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][0] = r->tSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][1] = r->tSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][2] = r->tSocket[2];
        mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][3] = r->tSocket[3];
        mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][4] = r->tSocket[4];
        mBASICUI.Insert1(mMESSAGE.Return(594), mFONTCOLOR.mData[44]);
        if (mNPCUI.mActive)
        {
            if (mNPCUI.mWorkId == 33)
            {
                mNPCUI.mItemSearchInfo[3] = 1;
                mNPCUI.mItemSearchInfo[4] = 0;
                mNPCUI.mItemSearchInfo[5] = -1;
                mNPCUI.mItemSearchInfo[6] = 0;
                mTRANSFER.T_PSHOP_ITEM_INFO_SEND(mNPCUI.mItemSearchInfo[1], mNPCUI.mItemSearchInfo[2]);
            }
        }
        break;
    case 1:
        mMYINFO.mNetworkLock = 0;
        if (!mNPCUI.mActive || mNPCUI.mWorkId != 33)
        {
            mCHOICEUI.InitForPick();
        }
        mBASICUI.Insert1(mMESSAGE.Return(583), mFONTCOLOR.mData[44]);
        if (mNPCUI.mActive && mNPCUI.mWorkId == 33)
        {
            mNPCUI.mItemSearchInfo[3] = 1;
            mNPCUI.mItemSearchInfo[4] = 0;
            mNPCUI.mItemSearchInfo[5] = -1;
            mNPCUI.mItemSearchInfo[6] = 0;
            mTRANSFER.T_PSHOP_ITEM_INFO_SEND(mNPCUI.mItemSearchInfo[1], mNPCUI.mItemSearchInfo[2]);
        }
        break;

    case 2:
        mMYINFO.mNetworkLock = 0;
        if (!mNPCUI.mActive || mNPCUI.mWorkId != 33)
        {
            mCHOICEUI.InitForPick();
        }
        mBASICUI.Insert1(mMESSAGE.Return(584), mFONTCOLOR.mData[44]);
        if (mNPCUI.mActive && mNPCUI.mWorkId == 33)
        {
            mNPCUI.mItemSearchInfo[3] = 1;
            mNPCUI.mItemSearchInfo[4] = 0;
            mNPCUI.mItemSearchInfo[5] = -1;
            mNPCUI.mItemSearchInfo[6] = 0;
            mTRANSFER.T_PSHOP_ITEM_INFO_SEND(mNPCUI.mItemSearchInfo[1], mNPCUI.mItemSearchInfo[2]);
        }
        break;
    case 3:
        mMYINFO.mNetworkLock = 0;
        if (!mNPCUI.mActive || mNPCUI.mWorkId != 33)
        {
            mCHOICEUI.InitForPick();
        }
        mBASICUI.Insert1(mMESSAGE.Return(595), mFONTCOLOR.mData[44]);
        if (mNPCUI.mActive && mNPCUI.mWorkId == 33)
        {
            mNPCUI.mItemSearchInfo[3] = 1;
            mNPCUI.mItemSearchInfo[4] = 0;
            mNPCUI.mItemSearchInfo[5] = -1;
            mNPCUI.mItemSearchInfo[6] = 0;
            mTRANSFER.T_PSHOP_ITEM_INFO_SEND(mNPCUI.mItemSearchInfo[1], mNPCUI.mItemSearchInfo[2]);
        }
        break;
    case 4:
        mMYINFO.mNetworkLock = 0;
        if (!mNPCUI.mActive || mNPCUI.mWorkId != 33)
        {
            mCHOICEUI.InitForPick();
        }
        mBASICUI.Insert1(mMESSAGE.Return(596), mFONTCOLOR.mData[44]);
        if (mNPCUI.mActive && mNPCUI.mWorkId == 33)
        {
            mNPCUI.mItemSearchInfo[3] = 1;
            mNPCUI.mItemSearchInfo[4] = 0;
            mNPCUI.mItemSearchInfo[5] = -1;
            mNPCUI.mItemSearchInfo[6] = 0;
            mTRANSFER.T_PSHOP_ITEM_INFO_SEND(mNPCUI.mItemSearchInfo[1], mNPCUI.mItemSearchInfo[2]);
        }
        break;
    case 5:
        mMYINFO.mNetworkLock = 0;
        if (!mNPCUI.mActive || mNPCUI.mWorkId != 33)
        {
            mCHOICEUI.InitForPick();
        }
        mBASICUI.Insert1(mMESSAGE.Return(597), mFONTCOLOR.mData[44]);
        if (mNPCUI.mActive && mNPCUI.mWorkId == 33)
        {
            mNPCUI.mItemSearchInfo[3] = 1;
            mNPCUI.mItemSearchInfo[4] = 0;
            mNPCUI.mItemSearchInfo[5] = -1;
            mNPCUI.mItemSearchInfo[6] = 0;
            mTRANSFER.T_PSHOP_ITEM_INFO_SEND(mNPCUI.mItemSearchInfo[1], mNPCUI.mItemSearchInfo[2]);
        }
        break;
    case 6:
        mMYINFO.mAvatarInfo.aMoney += r->tCost;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
        mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][0] = 0;
        mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][1] = 0;
        mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][2] = 0;
        mBASICUI.Insert1(mMESSAGE.Return(593), mFONTCOLOR.mData[44]);
        break;
    case 7:
        mMYINFO.mNetworkLock = 0;
        if (!mNPCUI.mActive || mNPCUI.mWorkId != 33)
        {
            mCHOICEUI.InitForPick();
        }
        mBASICUI.Insert1(mMESSAGE.Return(732), mFONTCOLOR.mData[44]);
        if (mNPCUI.mActive && mNPCUI.mWorkId == 33)
        {
            mNPCUI.mItemSearchInfo[3] = 1;
            mNPCUI.mItemSearchInfo[4] = 0;
            mNPCUI.mItemSearchInfo[5] = -1;
            mNPCUI.mItemSearchInfo[6] = 0;
            mTRANSFER.T_PSHOP_ITEM_INFO_SEND(mNPCUI.mItemSearchInfo[1], mNPCUI.mItemSearchInfo[2]);
        }
        break;
    case 8:
        mMYINFO.mNetworkLock = 0;
        if (!mNPCUI.mActive || mNPCUI.mWorkId != 33)
        {
            mCHOICEUI.InitForPick();
        }
        mBASICUI.Insert1(mMESSAGE.Return(2237), mFONTCOLOR.mData[44]);
        if (mNPCUI.mActive && mNPCUI.mWorkId == 33)
        {
            mNPCUI.mItemSearchInfo[3] = 1;
            mNPCUI.mItemSearchInfo[4] = 0;
            mNPCUI.mItemSearchInfo[5] = -1;
            mNPCUI.mItemSearchInfo[6] = 0;
            mTRANSFER.T_PSHOP_ITEM_INFO_SEND(mNPCUI.mItemSearchInfo[1], mNPCUI.mItemSearchInfo[2]);
        }
        mPSHOPUI.Set();
        break;

    default:
        return;
    }
}

void WORK::W_CHANGE_TO_TRIBE4_RECV()
{
    W_CHANGE_TO_TRIBE4_RECV_DATA* r = (W_CHANGE_TO_TRIBE4_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mNetworkLock = 0;
    if (r->tResult == 0)
    {
        mMYINFO.mNetworkLock = 0;
        if (mMYINFO.mAvatarInfo.aTribe == 3)
        {
            --mMYINFO.mAvatarInfo.aFactionReturnScroll;
            mMYINFO.mAvatarInfo.aTribe = mMYINFO.mAvatarInfo.aPreviousTribe;
            mMYINFO.mAvatarInfo.aQuestInfo[0] = 0;
            mMYINFO.mAvatarInfo.aQuestInfo[1] = 0;
            mMYINFO.mAvatarInfo.aQuestInfo[2] = 0;
            mMYINFO.mAvatarInfo.aQuestInfo[3] = 0;
            mMYINFO.mAvatarInfo.aQuestInfo[4] = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aTribe = mMYINFO.mAvatarInfo.aPreviousTribe;
            mBASICUI.Insert1(mMESSAGE.Return(1443), mFONTCOLOR.mData[44]);
        }
        else
        {
            mMYINFO.mAvatarInfo.aTribe = 3;
            mMYINFO.mAvatarInfo.aQuestInfo[0] = 0;
            mMYINFO.mAvatarInfo.aQuestInfo[1] = 0;
            mMYINFO.mAvatarInfo.aQuestInfo[2] = 0;
            mMYINFO.mAvatarInfo.aQuestInfo[3] = 0;
            mMYINFO.mAvatarInfo.aQuestInfo[4] = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aTribe = 3;
            mBASICUI.Insert1(mMESSAGE.Return(260), mFONTCOLOR.mData[44]);
        }
        mPLAY.ReturnToTown(0);
    }
    else if (r->tResult == 1)
    {
        mBASICUI.Insert1(mMESSAGE.Return(966), mFONTCOLOR.mData[44]);
    }
}

void WORK::W_GENERAL_CHAT_RECV()
{
    int i;
    char mBuffer[1000];

    W_GENERAL_CHAT_RECV_DATA* r = (W_GENERAL_CHAT_RECV_DATA*)&mNETWORK.mBuffer[0];

    sprintf(mBuffer, "[%s] %s", r->tAvatarName, r->tContent);
    if (mBASICUI.mChatDisplay[0] == 1)
    {
        mBASICUI.Insert2(mBuffer, mFONTCOLOR.mData[45], r->tAvatarName);
    }
    for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT; ++i)
    {
        if (mPLAY.mAVATAR_OBJECT[i].mCheckValidState && !strcmp(mPLAY.mAVATAR_OBJECT[i].mDATA.aName, r->tAvatarName))
        {
            mPLAY.mAVATAR_OBJECT[i].mGeneralChatState = 1;
            mPLAY.mAVATAR_OBJECT[i].mGeneralChatSendTime = mAPP[0].hPresentElapsedSeconds;
            strcpy(mPLAY.mAVATAR_OBJECT[i].mGeneralChatContent, r->tContent);
            return;
        }
    }
}

void WORK::W_SECRET_CHAT_RECV()
{
    char Buffer[1000];
    W_SECRET_CHAT_RECV_DATA* r = (W_SECRET_CHAT_RECV_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tResult)
    {
    case 0:
        sprintf(Buffer, "[%s]%s", r->tAvatarName, mMESSAGE.Return(299));
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        sprintf(Buffer, "%s %s", mMESSAGE.Return(302), r->tContent);
        mBASICUI.Insert2(Buffer, mFONTCOLOR.mData[46], r->tAvatarName);
        break;
    case 1:
        sprintf(Buffer, "[%s]%s", r->tAvatarName, mMESSAGE.Return(300));
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        break;
    case 2:
        sprintf(Buffer, "[%s]%s", r->tAvatarName, mMESSAGE.Return(301));
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        break;
    case 3:
        if (r->tSpecialSort >= 1 || mGAMEOPTION.tAcceptWhisper)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[190], 0, 100);
            sprintf(Buffer, "%s [%s] %s", mMESSAGE.Return(302), r->tAvatarName, r->tContent);
            mBASICUI.Insert2(Buffer, mFONTCOLOR.mData[46], r->tAvatarName);
        }
        else
        {
            mBASICUI.Insert1(mMESSAGE.Return(370), mFONTCOLOR.mData[44]);
        }
        break;
    default:
        return;
    }
}

void WORK::W_GENERAL_SHOUT_RECV()
{
    char Buffer[1000];
    W_GENERAL_SHOUT_RECV_DATA* r = (W_GENERAL_SHOUT_RECV_DATA*)&mNETWORK.mBuffer[0];

    sprintf(Buffer, "%s [%s] %s", mMESSAGE.Return(114), r->tAvatarName, r->tContent);
    if (mBASICUI.mChatDisplay[4] == 1)
    {
        mBASICUI.Insert2(Buffer, mFONTCOLOR.mData[47], r->tAvatarName);
    }
}
void WORK::W_GET_CASH_SIZE_RECV()
{
    W_GET_CASH_SIZE_RECV_DATA* r = (W_GET_CASH_SIZE_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (r->tSort == 1)
    {
        mNPCUI.LButtonup021(2, r->tCash);
    }
}

void WORK::W_BUY_CASH_ITEM_RECV()
{
    W_BUY_CASH_ITEM_RECV_DATA* r = (W_BUY_CASH_ITEM_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mNetworkLock = 0;
    switch (r->tResult)
    {
    case 0:
        mMYINFO.mAvatarInfo.aCapsuleMallPoints += 2 * ((mNPCUI.mCashItemAmount - r->tCashSize) / 10);
        mNPCUI.mCashItemAmount = r->tCashSize;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue[0];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = r->tValue[1];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = r->tValue[2];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = r->tValue[3];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = r->tValue[4];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = r->tValue[5];
        mBASICUI.Insert1(mMESSAGE.Return(681), mFONTCOLOR.mData[44]);
        break;
    case 1:
        mBASICUI.Insert1(mMESSAGE.Return(682), mFONTCOLOR.mData[44]);
        break;
    case 2:
    case 4:
        mBASICUI.Insert1(mMESSAGE.Return(683), mFONTCOLOR.mData[44]);
        break;
    case 3:
        mNPCUI.Off();
        mBASICUI.Insert1(mMESSAGE.Return(683), mFONTCOLOR.mData[44]);
        mNPCUI.mPossibleGetCashInfo = 1;
        mNPCUI.mPossibleBuyCashItem = 0;
        break;
    case 5:
        mBASICUI.Insert1(mMESSAGE.Return(2241), mFONTCOLOR.mData[44]);
        break;
    case 6:
        mBASICUI.Insert1(mMESSAGE.Return(2242), mFONTCOLOR.mData[44]);
        break;
    case 7:
        mBASICUI.Insert1(mMESSAGE.Return(2267), mFONTCOLOR.mData[44]);
        break;
    default:
        return;
    }
}

void WORK::W_DUEL_ASK_RECV()
{
    char Buffer[1000]; 

    W_DUEL_ASK_RECV_DATA* r = (W_DUEL_ASK_RECV_DATA*)&mNETWORK.mBuffer[0];
    if (mGAMEOPTION.tAcceptPVP)
    {
        if (r->tSort == 1)
        {
            sprintf(Buffer, "[%s]%s", r->tAvatarName, mMESSAGE.Return(305));
        }
        else
        {
            sprintf(Buffer, "[%s]%s", r->tAvatarName, mMESSAGE.Return(426));
        }
        mCBOXUI.Set(8, Buffer, mMESSAGE.Return(306));
    }
    else
    {
        mTRANSFER.T_DUEL_ANSWER_SEND(2);
        mBASICUI.Insert1(mMESSAGE.Return(304), mFONTCOLOR.mData[44]);
    }
}

void WORK::W_DUEL_CANCEL_RECV()
{
    if (mCBOXUI.mActive && mCBOXUI.mSort == 8)
    {
        mCBOXUI.Off();
    }
    mBASICUI.Insert1(mMESSAGE.Return(307), mFONTCOLOR.mData[44]);
}

void WORK::W_DUEL_ANSWER_RECV()
{
    W_DUEL_ANSWER_RECV_DATA* r = (W_DUEL_ANSWER_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (mMBOXUI.mActive && mMBOXUI.mSort == 4)
    {
        mMBOXUI.Off();
    }
    switch (r->tAnswer)
    {
    case 0:
        mBASICUI.Insert1(mMESSAGE.Return(308), mFONTCOLOR.mData[44]);
        mTRANSFER.T_DUEL_START_SEND();
        break;
    case 1:
        mBASICUI.Insert1(mMESSAGE.Return(309), mFONTCOLOR.mData[44]);
        break;
    case 2:
        mBASICUI.Insert1(mMESSAGE.Return(310), mFONTCOLOR.mData[44]);
        break;
    case 3:
        mBASICUI.Insert1(mMESSAGE.Return(311), mFONTCOLOR.mData[44]);
        break;
    case 4:
        mBASICUI.Insert1(mMESSAGE.Return(312), mFONTCOLOR.mData[44]);
        break;
    case 5:
        mBASICUI.Insert1(mMESSAGE.Return(313), mFONTCOLOR.mData[44]);
        break;
    default:
        return;
    }
}

void WORK::W_DUEL_START_RECV()
{
    char Buffer[1000];
    W_DUEL_START_RECV_DATA* r = (W_DUEL_START_RECV_DATA*)&mNETWORK.mBuffer[0];

    GSOUND::Play(&mGDATA.mSOUND_5[79], 0, 100);
    mMYINFO.mSelectObjSort = 0;
    mPLAY.mAVATAR_OBJECT[0].mDATA.aDuelState[0] = r->tDuelState[0];
    mPLAY.mAVATAR_OBJECT[0].mDATA.aDuelState[1] = r->tDuelState[1];
    mPLAY.mAVATAR_OBJECT[0].mDATA.aDuelState[2] = r->tDuelState[2];
    mMYINFO.mEatDrugStateForAuto = r->tIsPotionUsable;
    sprintf(Buffer, "%s [%d]%s", mMESSAGE.Return(314), r->tRemainTime, mMESSAGE.Return(315));
    mBASICUI.Insert1(Buffer, 1);
}

void WORK::W_DUEL_TIME_INFO_RECV()
{
    char Buffer[1000];
    W_DUEL_TIME_INFO_RECV_DATA* r = (W_DUEL_TIME_INFO_RECV_DATA*)&mNETWORK.mBuffer[0];

    sprintf(Buffer, "%s [%d]%s", mMESSAGE.Return(314), r->tRemainTime, mMESSAGE.Return(316));
    mBASICUI.Insert1(Buffer, 1);
}

void WORK::W_DUEL_END_RECV()
{
    W_DUEL_END_RECV_DATA* r = (W_DUEL_END_RECV_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tResult)
    {
    case 0:
        mBASICUI.Insert1(mMESSAGE.Return(317), mFONTCOLOR.mData[44]);
        break;
    case 1:
    case 2:
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aDuelState[2] == r->tResult)
        {
            mBASICUI.Insert1(mMESSAGE.Return(318), mFONTCOLOR.mData[44]);
        }
        else
        {
            mBASICUI.Insert1(mMESSAGE.Return(319), mFONTCOLOR.mData[44]);
        }
        break;
    case 3:
        mBASICUI.Insert1(mMESSAGE.Return(320), mFONTCOLOR.mData[44]);
        break;
    default:
        break;
    }
    mMYINFO.mSelectObjSort = 0;
    mPLAY.mAVATAR_OBJECT[0].mDATA.aDuelState[0] = 0;
    mPLAY.mAVATAR_OBJECT[0].mDATA.aDuelState[1] = 0;
    mPLAY.mAVATAR_OBJECT[0].mDATA.aDuelState[2] = 0;
    mMYINFO.mEatDrugStateForAuto = 1;
}

void WORK::W_TRADE_ASK_RECV()
{
    char Buffer[1000];

    W_TRADE_ASK_RECV_DATA* r = (W_TRADE_ASK_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (mGAMEOPTION.tAcceptTrade)
    {
        strcpy(mTRADEUI.mAvatarName, r->tAvatarName);
        mTRADEUI.mLevel = r->tLevel;
        sprintf(Buffer, "[%s]%s", r->tAvatarName, mMESSAGE.Return(325));
        mCBOXUI.Set(9, Buffer, mMESSAGE.Return(326));
    }
    else
    {
        mTRANSFER.T_TRADE_ANSWER_SEND(2);
        mBASICUI.Insert1(mMESSAGE.Return(324), mFONTCOLOR.mData[44]);
    }
}

void WORK::W_TRADE_CANCEL_RECV()
{
    if (mCBOXUI.mActive && mCBOXUI.mSort == 9)
    {
        mCBOXUI.Off();
    }
    mBASICUI.Insert1(mMESSAGE.Return(327), mFONTCOLOR.mData[44]);
}
void WORK::W_TRADE_ANSWER_RECV()
{
    W_TRADE_ANSWER_RECV_DATA* r = (W_TRADE_ANSWER_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (mMBOXUI.mActive && mMBOXUI.mSort == 5)
    {
        mMBOXUI.Off();
    }
    switch (r->tResult)
    {
    case 0:
        mBASICUI.Insert1(mMESSAGE.Return(328), mFONTCOLOR.mData[44]);
        strcpy(mTRADEUI.mAvatarName, mAVATARUI.mAvatarName);
        mTRADEUI.mLevel = mAVATARUI.mLevel2 + mAVATARUI.mLevel1;
        mTRANSFER.T_TRADE_START_SEND();
        break;
    case 1:
        mBASICUI.Insert1(mMESSAGE.Return(329), mFONTCOLOR.mData[44]);
        break;
    case 2:
        mBASICUI.Insert1(mMESSAGE.Return(330), mFONTCOLOR.mData[44]);
        break;
    case 3:
        mBASICUI.Insert1(mMESSAGE.Return(331), mFONTCOLOR.mData[44]);
        break;
    case 4:
        mBASICUI.Insert1(mMESSAGE.Return(332), mFONTCOLOR.mData[44]);
        break;
    case 5:
        mBASICUI.Insert1(mMESSAGE.Return(333), mFONTCOLOR.mData[44]);
        break;
    case 6:
        mBASICUI.Insert1(mMESSAGE.Return(2237), mFONTCOLOR.mData[44]);
        break;
    default:
        return;
    }
}

void WORK::W_TRADE_START_RECV()
{
    W_TRADE_START_RECV_DATA* r = (W_TRADE_START_RECV_DATA*)&mNETWORK.mBuffer[0];

    mTRADEUI.Set(r->tTradeMoney, r->tTrade, r->tTradeSocket, r->tTradeMoney2);
    mBASICUI.Insert1(mMESSAGE.Return(334), mFONTCOLOR.mData[44]);
}

void WORK::W_TRADE_STATE_RECV()
{
    int i;
    W_TRADE_STATE_RECV_DATA* r = (W_TRADE_STATE_RECV_DATA*)&mNETWORK.mBuffer[0];

    mTRADEUI.mTradeMoney = r->tTradeMoney;
    memcpy(&mTRADEUI.mTradeItem, &r->tTrade, 128);
    for (i = 0; i < 8; ++i)
    {
        mTRADEUI.mTradeSocket[i][0] = r->tTradeSocket[i][0];
        mTRADEUI.mTradeSocket[i][1] = r->tTradeSocket[i][1];
        mTRADEUI.mTradeSocket[i][2] = r->tTradeSocket[i][2];
        mTRADEUI.mTradeSocket[i][3] = r->tTradeSocket[i][3];
        mTRADEUI.mTradeSocket[i][4] = r->tTradeSocket[i][4];
    }
    mTRADEUI.mTradeMoney2 = r->tTradeMoney2;
}

void WORK::W_TRADE_MENU_RECV()
{
    W_TRADE_MENU_RECV_DATA* r = (W_TRADE_MENU_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (r->tCheckMe == 0)
    {
        ++mTRADEUI.mOwnTradeState;
    }
    else if (r->tCheckMe == 1)
    {
        ++mTRADEUI.mOtherTradeState;
    }
    else if (r->tCheckMe == 2)
    {
        mBASICUI.Insert1(mMESSAGE.Return(2237), mFONTCOLOR.mData[44]);
    }
}
void WORK::W_TRADE_END_RECV()
{
    int i;
    W_TRADE_END_RECV_DATA* r = (W_TRADE_END_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (r->tResult == 0)
    {
        mMYINFO.mAvatarInfo.aTradeMoney = mTRADEUI.mTradeMoney;
        mMYINFO.mAvatarInfo.aTradeMoney2 = mTRADEUI.mTradeMoney2;
        for (i = 0; i < 8; ++i)
        {
            mMYINFO.mAvatarInfo.aTrade[i][0] = mTRADEUI.mTradeItem[i][0];
            mMYINFO.mAvatarInfo.aTrade[i][1] = mTRADEUI.mTradeItem[i][1];
            mMYINFO.mAvatarInfo.aTrade[i][2] = mTRADEUI.mTradeItem[i][2];
            mMYINFO.mAvatarInfo.aTrade[i][3] = mTRADEUI.mTradeItem[i][3];
            mMYINFO.mAvatarInfo.aTradeSocket[i][0] = mTRADEUI.mTradeSocket[i][0];
            mMYINFO.mAvatarInfo.aTradeSocket[i][1] = mTRADEUI.mTradeSocket[i][1];
            mMYINFO.mAvatarInfo.aTradeSocket[i][2] = mTRADEUI.mTradeSocket[i][2];
            mMYINFO.mAvatarInfo.aTradeSocket[i][3] = mTRADEUI.mTradeSocket[i][3];
            mMYINFO.mAvatarInfo.aTradeSocket[i][4] = mTRADEUI.mTradeSocket[i][4];
        }
        mINVENUI.mInvenSort = 3;
        mTRADEUI.Off(0);
        mBASICUI.Insert1(mMESSAGE.Return(335), mFONTCOLOR.mData[44]);
    }
    else if (r->tResult == 1)
    {
        mINVENUI.Off();
        mTRADEUI.Off(0);
        mBASICUI.Insert1(mMESSAGE.Return(327), mFONTCOLOR.mData[44]);
    }
}

void WORK::W_FRIEND_ASK_RECV()
{
    char Buffer[1000];
    W_FRIEND_ASK_RECV_DATA* r = (W_FRIEND_ASK_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (mGAMEOPTION.tAcceptFriend)
    {
        sprintf(Buffer, "[%s]%s", r->tAvatarName, mMESSAGE.Return(499));
        mCBOXUI.Set(19, Buffer, mMESSAGE.Return(500));
    }
    else
    {
        mTRANSFER.T_FRIEND_ANSWER_SEND(2);
        mBASICUI.Insert1(mMESSAGE.Return(498), mFONTCOLOR.mData[44]);
    }
}

void WORK::W_FRIEND_CANCEL_RECV()
{
    if (mCBOXUI.mActive && mCBOXUI.mSort == 19)
    {
        mCBOXUI.Off();
    }
    mBASICUI.Insert1(mMESSAGE.Return(501), mFONTCOLOR.mData[44]);
}
void WORK::W_FRIEND_ANSWER_RECV()
{
    int i;
    W_FRIEND_ANSWER_RECV_DATA* r = (W_FRIEND_ANSWER_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (mMBOXUI.mActive && mMBOXUI.mSort == 6)
    {
        mMBOXUI.Off();
    }
    switch (r->tResult)
    {
    case 0:
        mBASICUI.Insert1(mMESSAGE.Return(492), mFONTCOLOR.mData[44]);
        for (i = 0; i < 10 && strcmp(mMYINFO.mAvatarInfo.aFriend[i], ""); ++i)
        {
            ;
        }
        if (i != 10)
        {
            mTRANSFER.T_FRIEND_MAKE_SEND(i);
        }
        break;
    case 1:
        mBASICUI.Insert1(mMESSAGE.Return(493), mFONTCOLOR.mData[44]);
        break;
    case 2:
        mBASICUI.Insert1(mMESSAGE.Return(494), mFONTCOLOR.mData[44]);
        break;
    case 3:
        mBASICUI.Insert1(mMESSAGE.Return(495), mFONTCOLOR.mData[44]);
        break;
    case 4:
        mBASICUI.Insert1(mMESSAGE.Return(496), mFONTCOLOR.mData[44]);
        break;
    case 5:
        mBASICUI.Insert1(mMESSAGE.Return(497), mFONTCOLOR.mData[44]);
        break;
    default:
        return;
    }
}
void WORK::W_FRIEND_MAKE_RECV()
{
    W_FRIEND_MAKE_RECV_DATA* r = (W_FRIEND_MAKE_RECV_DATA*)&mNETWORK.mBuffer[0];

    strcpy(mMYINFO.mAvatarInfo.aFriend[r->tIndex], r->tAvatarName);
    mFRIENDUI.Set();
}
void WORK::W_FRIEND_FIND_RECV()
{
    int i;
    W_FRIEND_FIND_RECV_DATA* r = (W_FRIEND_FIND_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (mFRIENDUI.mActive)
    {
        mFRIENDUI.mZoneNumber[r->tIndex] = r->tZoneNumber;
        for (i = r->tIndex + 1; i < 10; ++i)
        {
            if (strcmp(mMYINFO.mAvatarInfo.aFriend[i], ""))
            {
                mTRANSFER.T_FRIEND_FIND_SEND(i);
                return;
            }
        }
    }
}
void WORK::W_FRIEND_DELETE_RECV()
{
    W_FRIEND_DELETE_RECV_DATA* r = (W_FRIEND_DELETE_RECV_DATA*)&mNETWORK.mBuffer[0];

    strcpy(mMYINFO.mAvatarInfo.aFriend[r->tIndex], "");
}
void WORK::W_TEACHER_ASK_RECV()
{
    char Buffer[1000]; 
    W_TEACHER_ASK_RECV_DATA* r = (W_TEACHER_ASK_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (mGAMEOPTION.tAcceptMentor)
    {
        sprintf(Buffer, "[%s]%s", r->tAvatarName, mMESSAGE.Return(508));
        mCBOXUI.Set(20, Buffer, mMESSAGE.Return(509));
    }
    else
    {
        mTRANSFER.T_TEACHER_ANSWER_SEND(2);
        mBASICUI.Insert1(mMESSAGE.Return(507), mFONTCOLOR.mData[44]);
    }
}

void WORK::W_TEACHER_CANCEL_RECV()
{
    if (mCBOXUI.mActive && mCBOXUI.mSort == 20)
    {
        mCBOXUI.Off();
    }
    mBASICUI.Insert1(mMESSAGE.Return(510), mFONTCOLOR.mData[44]);
}

void WORK::W_TEACHER_ANSWER_RECV()
{
    W_TEACHER_ANSWER_RECV_DATA* r = (W_TEACHER_ANSWER_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (mMBOXUI.mActive && mMBOXUI.mSort == 9)
    {
        mMBOXUI.Off();
    }
    switch (r->tResult)
    {
    case 0:
        mBASICUI.Insert1(mMESSAGE.Return(511), mFONTCOLOR.mData[44]);
        mTRANSFER.T_TEACHER_START_SEND();
        break;
    case 1:
        mBASICUI.Insert1(mMESSAGE.Return(512), mFONTCOLOR.mData[44]);
        break;
    case 2:
        mBASICUI.Insert1(mMESSAGE.Return(513), mFONTCOLOR.mData[44]);
        break;
    case 3:
        mBASICUI.Insert1(mMESSAGE.Return(514), mFONTCOLOR.mData[44]);
        break;
    case 4:
        mBASICUI.Insert1(mMESSAGE.Return(515), mFONTCOLOR.mData[44]);
        break;
    case 5:
        mBASICUI.Insert1(mMESSAGE.Return(516), mFONTCOLOR.mData[44]);
        break;
    case 6:
        mBASICUI.Insert1(mMESSAGE.Return(517), mFONTCOLOR.mData[44]);
        break;
    case 7:
        mBASICUI.Insert1(mMESSAGE.Return(518), mFONTCOLOR.mData[44]);
        break;
    default:
        return;
    }
}

void WORK::W_TEACHER_START_RECV()
{
    W_TEACHER_START_RECV_DATA* r = (W_TEACHER_START_RECV_DATA*)&mNETWORK.mBuffer[0];
    if (r->tSort == 1)
    {
        strcpy(mMYINFO.mAvatarInfo.aStudent, r->tAvatarName);
        mMYINFO.mTeacherStudentState = 1;
    }
    else if (r->tSort == 2)
    {
        strcpy(mMYINFO.mAvatarInfo.aTeacher, r->tAvatarName);
        mMYINFO.mTeacherStudentState = 1;
    }
}

void WORK::W_TEACHER_END_RECV()
{
    strcpy(mMYINFO.mAvatarInfo.aTeacher, "");
    strcpy(mMYINFO.mAvatarInfo.aStudent, "");
    mMYINFO.mTeacherStudentState = 0;
    mBASICUI.Insert1(mMESSAGE.Return(534), mFONTCOLOR.mData[44]);
}

void WORK::W_TEACHER_STATE_RECV()
{
    W_TEACHER_STATE_RECV_DATA* r = (W_TEACHER_STATE_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (!r->tResult)
    {
        mMYINFO.mTeacherStudentState = 1;
    }
    else if(r->tResult == 1)
    {
        mMYINFO.mTeacherStudentState = 2;
    }
}

void WORK::W_PARTY_ASK_RECV()
{
    char mBuffer[1000]; 
    int sX;
    int sY;
    W_PARTY_ASK_RECV_DATA* r = (W_PARTY_ASK_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (mGAMEOPTION.tAcceptParty)
    {
        sprintf(mBuffer, "[%s]%s", r->tAvatarName, mMESSAGE.Return(337));
        mCBOXUI.Set(10, mBuffer, mMESSAGE.Return(338));
        if ((mMYINFO.mAvatarInfo.aAutoHunt7Day > 0 || mMYINFO.mAvatarInfo.aAutoHunt5Hour > 0) && mMYINFO.mAvatarInfo.aAutoHuntState == 1)
        {
            sX = mMYINFO.mScreenXSize / 2 - GIMAGE2D::GetXSize(&mGDATA.mUI_MAIN[7]) / 2;
            sY = mMYINFO.mScreenYSize / 2;
            mCBOXUI.mIsClick[0] = 1;
            mCBOXUI.LBUTTONUP(sX + 170, sY - GIMAGE2D::GetYSize(&mGDATA.mUI_MAIN[7]) / 2 + 95);
        }
    }
    else
    {
        mTRANSFER.T_PARTY_ANSWER_SEND(2);
        mBASICUI.Insert1(mMESSAGE.Return(336), mFONTCOLOR.mData[44]);
    }
}

void WORK::W_PARTY_CANCEL_RECV()
{
    if (mCBOXUI.mActive && mCBOXUI.mSort == 10)
    {
        mCBOXUI.Off();
    }
    mBASICUI.Insert1(mMESSAGE.Return(339), mFONTCOLOR.mData[44]);
}

void WORK::W_PARTY_ANSWER_RECV()
{
    W_PARTY_ANSWER_RECV_DATA* r = (W_PARTY_ANSWER_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (mMBOXUI.mActive && mMBOXUI.mSort == 7)
    {
        mMBOXUI.Off();
    }
    switch (r->tResult)
    {
    case 0:
        if (!strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
        {
            mTRANSFER.T_PARTY_MAKE_SEND();
        }
        else
        {
            mTRANSFER.T_PARTY_JOIN_SEND();
        }
        mBASICUI.Insert1(mMESSAGE.Return(340), mFONTCOLOR.mData[44]);
        break;
    case 1:
        mBASICUI.Insert1(mMESSAGE.Return(341), mFONTCOLOR.mData[44]);
        break;
    case 2:
        mBASICUI.Insert1(mMESSAGE.Return(342), mFONTCOLOR.mData[44]);
        break;
    case 3:
        mBASICUI.Insert1(mMESSAGE.Return(343), mFONTCOLOR.mData[44]);
        break;
    case 4:
        mBASICUI.Insert1(mMESSAGE.Return(344), mFONTCOLOR.mData[44]);
        break;
    case 5:
        mBASICUI.Insert1(mMESSAGE.Return(345), mFONTCOLOR.mData[44]);
        break;
    default:
        return;
    }
}

void WORK::W_PARTY_MAKE_RECV()
{
    // Legacy 2.0 Code
    strcpy(mMYINFO.mAvatarInfo.aPartyName, mMYINFO.mAvatarInfo.aName);
    strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aPartyName, mMYINFO.mAvatarInfo.aName);
    strcpy(mMYINFO.mPartyInfo[0], mMYINFO.mAvatarInfo.aName);
    strcpy(mMYINFO.mPartyInfo[1], "");
    strcpy(mMYINFO.mPartyInfo[2], "");
    strcpy(mMYINFO.mPartyInfo[3], "");
    strcpy(mMYINFO.mPartyInfo[4], "");
    mBASICUI.Insert1(mMESSAGE.Return(349), mFONTCOLOR.mData[44]);
    mTRANSFER.T_PARTY_JOIN_SEND();
}

void WORK::W_PARTY_JOIN_RECV()
{
    // Legacy 2.0 Code
    int i;
    char mBuffer[1000];
    W_PARTY_JOIN_RECV_DATA* r = (W_PARTY_JOIN_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (strcmp(mMYINFO.mAvatarInfo.aPartyName, "") != 0)
    {
        for (i = 0; i < 5; i++)
        {
            if (strcmp(mMYINFO.mPartyInfo[i], ""))
            {
                continue;
            }
            break;
        }
        if (i != 5)
        {
            strcpy(mMYINFO.mPartyInfo[i], r->tAvatarName);
            sprintf(mBuffer, "%s [%s]%s", mMESSAGE.Return(350), r->tAvatarName, mMESSAGE.Return(351));
            mBASICUI.Insert1(mBuffer, mFONTCOLOR.mData[44]);
        }
    }
}

void WORK::W_PARTY_CHAT_RECV()
{
    char Buffer[1000]; 
    W_PARTY_CHAT_RECV_DATA* r = (W_PARTY_CHAT_RECV_DATA*)&mNETWORK.mBuffer[0];

    sprintf(Buffer, "%s [%s] %s", mMESSAGE.Return(350), r->tAvatarName, r->tContent);
    if (mBASICUI.mChatDisplay[1] == 1)
    {
        mBASICUI.Insert2(Buffer, mFONTCOLOR.mData[48], r->tAvatarName);
    }
}

void WORK::W_PARTY_LEAVE_RECV()
{
    // Legacy 2.0 Code
    char mBuffer[1000];
    int i, j;
    W_PARTY_LEAVE_RECV_DATA* r = (W_PARTY_LEAVE_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
    {
        if (!strcmp(mMYINFO.mAvatarInfo.aName, r->tAvatarName))
        {
            strcpy(mMYINFO.mAvatarInfo.aPartyName, "");
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aPartyName, "");
        }
        for (i = 0; i < 5; i++)
        {
            if(strcmp(mMYINFO.mPartyInfo[i], r->tAvatarName))
            {
                continue;
            }
            break;
        }
        if (i != 5)
        {
            strcpy(mMYINFO.mPartyInfo[i], "");
            sprintf(mBuffer, "%s [%s]%s", mMESSAGE.Return(350), r->tAvatarName, mMESSAGE.Return(352));
            mBASICUI.Insert1(mBuffer, mFONTCOLOR.mData[44]);
            for (j = i + 1; j < 5; j++)
            {
                strcpy(mMYINFO.mPartyInfo[j - 1], mMYINFO.mPartyInfo[j]);
                strcpy(mMYINFO.mPartyInfo[j], "");
            }
        }
    }
}

void WORK::W_PARTY_EXILE_RECV()
{
    // Legacy 2.0 Code
    char mBuffer[1000];
    int i, j;
    W_PARTY_EXILE_RECV_DATA* r = (W_PARTY_EXILE_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
    {
        if (!strcmp(mMYINFO.mAvatarInfo.aName, r->tAvatarName))
        {
            strcpy(mMYINFO.mAvatarInfo.aPartyName, "");
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aPartyName, "");
        }
        for (i = 0; i < 5; i++)
        {
            if (strcmp(mMYINFO.mPartyInfo[i], r->tAvatarName))
            {
                continue;
            }
            break;
        }
        if (i != 5)
        {
            strcpy(mMYINFO.mPartyInfo[i], "");
            sprintf(mBuffer, "%s [%s]%s", mMESSAGE.Return(350), r->tAvatarName, mMESSAGE.Return(352));
            mBASICUI.Insert1(mBuffer, mFONTCOLOR.mData[44]);
            for (j = i + 1; j < 5; j++)
            {
                strcpy(mMYINFO.mPartyInfo[j - 1], mMYINFO.mPartyInfo[j]);
                strcpy(mMYINFO.mPartyInfo[j], "");
            }
        }
    }
}

void WORK::W_PARTY_INFO_RECV()
{
    int i;
    char mBuffer[1000];
    W_PARTY_INFO_RECV_DATA* r = (W_PARTY_INFO_RECV_DATA*)&mNETWORK.mBuffer[0];

    for (i = 0; i < 5; i++)
    {
        if (strcmp(r->tAvatarName[i], mMYINFO.mAvatarInfo.aName))
        {
            continue;
        }
        break;
    }
    if (i < 5)
    {
        if (!strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
        {
            strcpy(mMYINFO.mAvatarInfo.aPartyName, r->tAvatarName[0]);
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aPartyName, r->tAvatarName[0]);
            sprintf(mBuffer, "%s [%s]%s", mMESSAGE.Return(350), mMYINFO.mAvatarInfo.aName, mMESSAGE.Return(351));
            mBASICUI.Insert1(mBuffer, mFONTCOLOR.mData[44]);
        }
        strcpy(mMYINFO.mPartyInfo[0], r->tAvatarName[0]);
        strcpy(mMYINFO.mPartyInfo[1], r->tAvatarName[1]);
        strcpy(mMYINFO.mPartyInfo[2], r->tAvatarName[2]);
        strcpy(mMYINFO.mPartyInfo[3], r->tAvatarName[3]);
        strcpy(mMYINFO.mPartyInfo[4], r->tAvatarName[4]);
    }
    else
    {
        ZeroMemory(&mMYINFO.mAvatarInfo.aPartyName, MAX_AVATAR_NAME_LENGTH);
        ZeroMemory(&mPLAY.mAVATAR_OBJECT[0].mDATA.aPartyName, MAX_AVATAR_NAME_LENGTH);
        ZeroMemory(&mMYINFO.mPartyInfo, MAX_AVATAR_NAME_LENGTH * 5);
        sprintf(mBuffer, "%s [%s]%s", mMESSAGE.Return(350), mMYINFO.mAvatarInfo.aName, mMESSAGE.Return(353));
        mBASICUI.Insert1(mBuffer, mFONTCOLOR.mData[44]);
    }
}

void WORK::W_PARTY_BREAK_RECV()
{
    // Legacy 2.0 Code
    int i;
    char mBuffer[1000];
    W_PARTY_BREAK_RECV_DATA* r = (W_PARTY_BREAK_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (strcmp(mMYINFO.mAvatarInfo.aPartyName, ""))
    {
        if (!strcmp(r->tAvatarName, ""))
        {
            strcpy(mMYINFO.mAvatarInfo.aPartyName, "");
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aPartyName, "");
            sprintf(mBuffer, "%s %s", mMESSAGE.Return(350), mMESSAGE.Return(354));
            mBASICUI.Insert1(mBuffer, mFONTCOLOR.mData[44]);
        }
        else
        {
            strcpy(mMYINFO.mAvatarInfo.aPartyName, r->tAvatarName);
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aPartyName, r->tAvatarName);
            sprintf(mBuffer, "%s %s", mMESSAGE.Return(350), mMESSAGE.Return(700));
            mBASICUI.Insert1(mBuffer, mFONTCOLOR.mData[44]);
            for (i = 1; i < 5; ++i)
            {
                strcpy(mMYINFO.mPartyInfo[i - 1], mMYINFO.mPartyInfo[i]);
                strcpy(mMYINFO.mPartyInfo[i], "");
            }
        }
    }
}

void WORK::W_GUILD_ASK_RECV()
{
    char Buffer[1000]; 
    W_GUILD_ASK_RECV_DATA* r = (W_GUILD_ASK_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (mGAMEOPTION.tAcceptGuild)
    {
        sprintf(Buffer, "[%s]%s", r->tAvatarName, mMESSAGE.Return(408));
        mCBOXUI.Set(14, Buffer, mMESSAGE.Return(409));
    }
    else
    {
        mTRANSFER.T_GUILD_ANSWER_SEND(2);
        mBASICUI.Insert1(mMESSAGE.Return(407), mFONTCOLOR.mData[44]);
    }
}

void WORK::W_GUILD_CANCEL_RECV()
{
    if (mCBOXUI.mActive && mCBOXUI.mSort == 14)
    {
        mCBOXUI.Off();
    }
    mBASICUI.Insert1(mMESSAGE.Return(410), mFONTCOLOR.mData[44]);
}

void WORK::W_GUILD_ANSWER_RECV()
{
    W_GUILD_ANSWER_RECV_DATA* r = (W_GUILD_ANSWER_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (mMBOXUI.mActive && mMBOXUI.mSort == 8)
    {
        mMBOXUI.Off();
    }
    switch (r->tResult)
    {
    case 0:
        mBASICUI.Insert1(mMESSAGE.Return(399), mFONTCOLOR.mData[44]);
        mPLAY.DemandGuildEnter();
        break;
    case 1:
        mBASICUI.Insert1(mMESSAGE.Return(400), mFONTCOLOR.mData[44]);
        break;
    case 2:
        mBASICUI.Insert1(mMESSAGE.Return(401), mFONTCOLOR.mData[44]);
        break;
    case 3:
        mBASICUI.Insert1(mMESSAGE.Return(402), mFONTCOLOR.mData[44]);
        break;
    case 4:
        mBASICUI.Insert1(mMESSAGE.Return(403), mFONTCOLOR.mData[44]);
        break;
    case 5:
        mBASICUI.Insert1(mMESSAGE.Return(404), mFONTCOLOR.mData[44]);
        break;
    default:
        return;
    }
}

void WORK::W_GUILD_WORK_RECV()
{
    int index01;
    W_GUILD_WORK_RECV_DATA* r = (W_GUILD_WORK_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mNetworkLock = 0;
    switch (r->tSort)
    {
    case 1:
        switch (r->tResult)
        {
        case 0:
            strcpy(mMYINFO.mAvatarInfo.aGuildName, r->tGuildInfo.gName);
            mMYINFO.mAvatarInfo.aGuildRole = 0;
            strcpy(mMYINFO.mAvatarInfo.aCallName, "");
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildName, r->tGuildInfo.gName);
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildRole = 0;
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aCallName, "");
            mBASICUI.Insert1(mMESSAGE.Return(392), mFONTCOLOR.mData[44]);
            mGUILDUI.SetWithGuildInfo();
            return;

        case 1:
            mBASICUI.Insert1(mMESSAGE.Return(393), mFONTCOLOR.mData[44]);
            return;

        case 2:
            mBASICUI.Insert1(mMESSAGE.Return(394), mFONTCOLOR.mData[44]);
            return;

        default:
            return;
        }
        return;

    case 2:
        switch (r->tResult)
        {
        case 0:
            switch (mMYINFO.mDemandGuildInfoSort)
            {
            case 1:
                memcpy(&mGUILDUI.mGuildInfo, &r->tGuildInfo, sizeof(GUILD_INFO));
                mGUILDUI.Set();
                break;

            case 2:
                memcpy(&mGUILDUI.mGuildInfo, &r->tGuildInfo, sizeof(GUILD_INFO));
                mGUILDUI.CalculatePresentMemberNum();
                if (mGUILDUI.mGuildFreeSlot >= 10 * mGUILDUI.mGuildInfo.gGrade)
                {
                    switch (mGUILDUI.mGuildInfo.gGrade)
                    {
                    case 1:
                        if (mMYINFO.mAvatarInfo.aLevel1 < 50)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(570), mFONTCOLOR.mData[44]);
                            return;
                        }
                        if (mMYINFO.mAvatarInfo.aMoney < 50000000)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(571), mFONTCOLOR.mData[44]);
                            return;
                        }
                        mPLAY.DemandGuildExpand();
                        break;

                    case 2:
                        if (mMYINFO.mAvatarInfo.aLevel1 < 70)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(573), mFONTCOLOR.mData[44]);
                            return;
                        }
                        if (mMYINFO.mAvatarInfo.aMoney < 50000000)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(572), mFONTCOLOR.mData[44]);
                            return;
                        }
                        mPLAY.DemandGuildExpand();
                        break;

                    case 3:
                        if (mMYINFO.mAvatarInfo.aLevel1 < 90)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(575), mFONTCOLOR.mData[44]);
                            return;
                        }
                        if (mMYINFO.mAvatarInfo.aMoney < 50000000)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(574), mFONTCOLOR.mData[44]);
                            return;
                        }
                        mPLAY.DemandGuildExpand();
                        break;

                    case 4:
                        if (mMYINFO.mAvatarInfo.aLevel1 < 113)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(577), mFONTCOLOR.mData[44]);
                            return;
                        }
                        if (mMYINFO.mAvatarInfo.aMoney < 50000000)
                        {
                            mBASICUI.Insert1(mMESSAGE.Return(576), mFONTCOLOR.mData[44]);
                            return;
                        }
                        mPLAY.DemandGuildExpand();
                        break;

                    default:
                        mBASICUI.Insert1(mMESSAGE.Return(569), mFONTCOLOR.mData[44]);
                        return;
                    }
                }
                break;

            case 3:
                memcpy(&mGUILDUI.mGuildInfo, &r->tGuildInfo, sizeof(GUILD_INFO));
                break;

            default:
                return;
            }
            return;

        case 1:
            mBASICUI.Insert1(mMESSAGE.Return(391), mFONTCOLOR.mData[44]);
            return;

        default:
            return;
        }
        return;

    case 3:
        switch (r->tResult)
        {
        case 0:
            mBASICUI.Insert1(mMESSAGE.Return(412), mFONTCOLOR.mData[44]);
            break;
        case 1:
            mBASICUI.Insert1(mMESSAGE.Return(413), mFONTCOLOR.mData[44]);
            break;
        case 2:
            mBASICUI.Insert1(mMESSAGE.Return(414), mFONTCOLOR.mData[44]);
            break;
        case 3:
            mBASICUI.Insert1(mMESSAGE.Return(2044), mFONTCOLOR.mData[44]);
            break;
        default:
            return;
        }
        return;

    case 4:
        switch (r->tResult)
        {
        case 0:
            strcpy(mMYINFO.mAvatarInfo.aGuildName, "");
            mMYINFO.mAvatarInfo.aGuildRole = 0;
            strcpy(mMYINFO.mAvatarInfo.aCallName, "");
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildName, "");
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildRole = 0;
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aCallName, "");
            mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildBuff = 0;
            mMYINFO.mAvatarInfo.aMaxMPElixirEatState = 0;
            mMYINFO.mAvatarInfo.aMaxHPElixirEatState = 0;
            mMYINFO.mAvatarInfo.aMaxStrElixirEatState = 0;
            mMYINFO.mAvatarInfo.aMaxAgiElixirEatState = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
            mPLAY.DeleteFourGuildCostume();
            mBASICUI.Insert1(mMESSAGE.Return(478), mFONTCOLOR.mData[44]);
            break;

        case 1:
            mBASICUI.Insert1(mMESSAGE.Return(479), mFONTCOLOR.mData[44]);
            break;

        case 2:
            mBASICUI.Insert1(mMESSAGE.Return(2046), mFONTCOLOR.mData[44]);
            break;

        default:
            break;
        }
        return;

    case 5:
        switch (r->tResult)
        {
        case 0:
            strcpy(mGUILDUI.mGuildInfo.gNotice[0], mGUILDUI.mGuildNotice[0]);
            strcpy(mGUILDUI.mGuildInfo.gNotice[1], mGUILDUI.mGuildNotice[1]);
            strcpy(mGUILDUI.mGuildInfo.gNotice[2], mGUILDUI.mGuildNotice[2]);
            strcpy(mGUILDUI.mGuildInfo.gNotice[3], mGUILDUI.mGuildNotice[3]);
            mBASICUI.Insert1(mMESSAGE.Return(544), mFONTCOLOR.mData[44]);
            break;

        case 1:
            mBASICUI.Insert1(mMESSAGE.Return(545), mFONTCOLOR.mData[44]);
            break;

        default:
            break;
        }
        return;

    case 6:
        switch (r->tResult)
        {
        case 0:
            strcpy(mMYINFO.mAvatarInfo.aGuildName, "");
            mMYINFO.mAvatarInfo.aGuildRole = 0;
            strcpy(mMYINFO.mAvatarInfo.aCallName, "");
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildName, "");
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildRole = 0;
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aCallName, "");
            mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildBuff = 0;
            mMYINFO.mAvatarInfo.aMaxMPElixirEatState = 0;
            mMYINFO.mAvatarInfo.aMaxHPElixirEatState = 0;
            mMYINFO.mAvatarInfo.aMaxStrElixirEatState = 0;
            mMYINFO.mAvatarInfo.aMaxAgiElixirEatState = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
            mPLAY.DeleteFourGuildCostume();
            mBASICUI.Insert1(mMESSAGE.Return(470), mFONTCOLOR.mData[44]);
            break;

        case 1:
            mBASICUI.Insert1(mMESSAGE.Return(4741), mFONTCOLOR.mData[44]);
            break;

        case 2:
            mBASICUI.Insert1(mMESSAGE.Return(468), mFONTCOLOR.mData[44]);
            break;

        case 3:
            mBASICUI.Insert1(mMESSAGE.Return(2047), mFONTCOLOR.mData[44]);
            break;

        default:
            break;
        }
        return;

    case 7:
        switch (r->tResult)
        {
        case 0:
            mBASICUI.Insert1(mMESSAGE.Return(578), mFONTCOLOR.mData[44]);
            mGUILDUI.SetWithGuildInfo();
            break;

        case 1:
            mBASICUI.Insert1(mMESSAGE.Return(579), mFONTCOLOR.mData[44]);
            break;

        default:
            break;
        }
        return;

    case 8:
        switch (r->tResult)
        {
        case 0:
            if (!strcmp(mGUILDUI.mGuildInfo.gSubMaster01, mGUILDUI.mSelectAvatarName))
            {
                strcpy(mGUILDUI.mGuildInfo.gSubMaster01, "");
            }
            if (!strcmp(mGUILDUI.mGuildInfo.gSubMaster02, mGUILDUI.mSelectAvatarName))
            {
                strcpy(mGUILDUI.mGuildInfo.gSubMaster02, "");
            }
            strcpy(&mGUILDUI.mGuildInfo.gMemberName[10 * mGUILDUI.mGuildPage][13 * mGUILDUI.mSelectIndex], "");
            mGUILDUI.mGuildInfo.gMemberRole[10 * mGUILDUI.mGuildPage + mGUILDUI.mSelectIndex] = 0;
            strcpy(&mGUILDUI.mGuildInfo.gMemberCall[10 * mGUILDUI.mGuildPage][5 * mGUILDUI.mSelectIndex], "");
            mGUILDUI.CalculatePresentMemberNum();
            mBASICUI.Insert1(mMESSAGE.Return(475), mFONTCOLOR.mData[44]);
            break;

        case 1:
            mBASICUI.Insert1(mMESSAGE.Return(476), mFONTCOLOR.mData[44]);
            break;

        default:
            break;
        }
        return;

    case 9:
        switch (r->tResult)
        {
        case 0:
            if (mGUILDUI.mAppointSort == 1)
            {
                mGUILDUI.mGuildInfo.gMemberRole[10 * mGUILDUI.mGuildPage + mGUILDUI.mSelectIndex] = 1;
                mBASICUI.Insert1(mMESSAGE.Return(550), mFONTCOLOR.mData[44]);
            }
            else if (mGUILDUI.mAppointSort == 2)
            {
                mGUILDUI.mGuildInfo.gMemberRole[10 * mGUILDUI.mGuildPage + mGUILDUI.mSelectIndex] = 2;
                mBASICUI.Insert1(mMESSAGE.Return(551), mFONTCOLOR.mData[44]);
            }
            break;

        case 1:
            if (mGUILDUI.mAppointSort == 1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(552), mFONTCOLOR.mData[44]);
            }
            else if (mGUILDUI.mAppointSort == 2)
            {
                mBASICUI.Insert1(mMESSAGE.Return(553), mFONTCOLOR.mData[44]);
            }
            break;

        default:
            break;
        }
        return;

    case 10:
        switch (r->tResult)
        {
        case 0:
            strcpy( &mGUILDUI.mGuildInfo.gMemberCall[10 * mGUILDUI.mGuildPage][5 * mGUILDUI.mSelectIndex], mGUILDUI.mCallName);
            if (!strcmp(mGUILDUI.mCallName, ""))
            {
                mBASICUI.Insert1(mMESSAGE.Return(558), mFONTCOLOR.mData[44]);
            }
            else
            {
                mBASICUI.Insert1(mMESSAGE.Return(557), mFONTCOLOR.mData[44]);
            }
            break;

        case 1:
            if (!strcmp(mGUILDUI.mCallName, ""))
            {
                mBASICUI.Insert1(mMESSAGE.Return(560), mFONTCOLOR.mData[44]);
            }
            else
            {
                mBASICUI.Insert1(mMESSAGE.Return(559), mFONTCOLOR.mData[44]);
            }
            break;

        default:
            break;
        }
        return;

    case 12:
        if (!r->tResult)
        {
            mMYINFO.mAvatarInfo.aGuildMarkEffect = 1;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildMarkEffect = 1;
        }
        return;

    case 13:
        if (!r->tResult)
        {
            mMYINFO.mAvatarInfo.aGuildMarkEffect = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildMarkEffect = 0;
        }
        return;

    case 14:
        switch (r->tResult)
        {
        case 1:
        case 5:
            mBASICUI.Insert1(mMESSAGE.Return(223), mFONTCOLOR.mData[44]);
            break;
        case 2:
            mBASICUI.Insert1(mMESSAGE.Return(1717), mFONTCOLOR.mData[44]);
            break;
        case 4:
            mBASICUI.Insert1(mMESSAGE.Return(1718), mFONTCOLOR.mData[44]);
            break;
        default:
            return;
        }
        return;

    case 17:
        switch (r->tResult)
        {
        case 0:
            strcpy(mGUILDUI.mGuildInfo.gMaster01, mGUILDUI.mSelectAvatarName);
            if (!strcmp(mGUILDUI.mGuildInfo.gSubMaster01, mGUILDUI.mSelectAvatarName))
            {
                strcpy(mGUILDUI.mGuildInfo.gSubMaster01, "");
            }
            if (!strcmp(mGUILDUI.mGuildInfo.gSubMaster02, mGUILDUI.mSelectAvatarName))
            {
                strcpy(mGUILDUI.mGuildInfo.gSubMaster02, "");
            }
            mGUILDUI.mGuildInfo.gMemberRole[10 * mGUILDUI.mGuildPage + mGUILDUI.mSelectIndex] = 0;
            strcpy(&mGUILDUI.mGuildInfo.gMemberCall[10 * mGUILDUI.mGuildPage][5 * mGUILDUI.mSelectIndex], "");
            for (index01 = 0; index01 < 50 && strcmp(mGUILDUI.mGuildInfo.gMemberName[index01], mMYINFO.mAvatarInfo.aName); index01++)
            {
                ;
            }
            mGUILDUI.mGuildInfo.gMemberRole[index01] = 2;
            mMYINFO.mAvatarInfo.aGuildRole = 2;
            mBASICUI.Insert1(mMESSAGE.Return(2108), mFONTCOLOR.mData[44]);
            break;

        case 1:
            mBASICUI.Insert1(mMESSAGE.Return(2127), mFONTCOLOR.mData[44]);
            break;

        case 2:
            mBASICUI.Insert1(mMESSAGE.Return(2109), mFONTCOLOR.mData[44]);
            break;

        default:
            break;
        }
        return;

    default:
        return;
    }
}

void WORK::W_GUILD_NOTICE_RECV()
{
    char Buffer[1000]; 
    W_GUILD_NOTICE_RECV_DATA* r = (W_GUILD_NOTICE_RECV_DATA*)&mNETWORK.mBuffer[0];

    sprintf(Buffer, "%s [%s] %s", mMESSAGE.Return(543), r->tAvatarName, r->tContent);
    mBASICUI.Insert2(Buffer, mFONTCOLOR.mData[49], r->tAvatarName);
}

void WORK::W_GUILD_CHAT_RECV()
{
    char Buffer[1000]; 
    W_GUILD_CHAT_RECV_DATA* r = (W_GUILD_CHAT_RECV_DATA*)&mNETWORK.mBuffer[0];

    sprintf(Buffer, "%s [%s] %s", mMESSAGE.Return(416), r->tAvatarName, r->tContent);
    if (mBASICUI.mChatDisplay[2] == 1)
    {
        mBASICUI.Insert2(Buffer, mFONTCOLOR.mData[49], r->tAvatarName);
    }
}

void WORK::W_GUILD_FIND_RECV()
{
    W_GUILD_FIND_RECV_DATA* r = (W_GUILD_FIND_RECV_DATA*)&mNETWORK.mBuffer[0];

    mGUILDUI.mGuildOnlineState[mGUILDUI.mFindIndex] = r->tResult;
    mGUILDUI.ProcessMemberConnectInfo();
}

void WORK::W_GUILD_LOGIN_INFO_RECV()
{
    char Buffer[1000];
    W_GUILD_LOGIN_INFO_RECV_DATA* r = (W_GUILD_LOGIN_INFO_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (strcmp(mMYINFO.mAvatarInfo.aName, r->tAvatarName))
    {
        sprintf(Buffer, "%s [%s]%s", mMESSAGE.Return(416), r->tAvatarName, mMESSAGE.Return(417));
        mBASICUI.Insert2(Buffer, mFONTCOLOR.mData[49], r->tAvatarName);
    }
}

void WORK::W_TRIBE_WORK_RECV()
{
    char* tstr;
    int tCost;
    int tValue, tValue2, tValue3;
    int tConstellationSort;
    W_TRIBE_WORK_RECV_DATA* r = (W_TRIBE_WORK_RECV_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tSort)
    {
    case 1:
        mMYINFO.mNetworkLock = 0;
        if (!r->tResult)
        {
            mMYINFO.mAvatarInfo.aStateBonusPoint = mMYINFO.mAvatarInfo.aStateBonusPoint+ mMYINFO.mAvatarInfo.aDex + mMYINFO.mAvatarInfo.aInt + mMYINFO.mAvatarInfo.aStr + mMYINFO.mAvatarInfo.aVit - 4;
            mMYINFO.mAvatarInfo.aVit = 1;
            mMYINFO.mAvatarInfo.aStr = 1;
            mMYINFO.mAvatarInfo.aInt = 1;
            mMYINFO.mAvatarInfo.aDex = 1;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = 1;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = 0;
            tstr = mMESSAGE.Return(601);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            mSTATUSUI.Set();
        }
        break;

    case 2:
        mMYINFO.mNetworkLock = 0;
        switch (r->tResult)
        {
        case 0:
            tstr = mMESSAGE.Return(775);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            break;
        case 1:
            tstr = mMESSAGE.Return(776);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            break;
        case 2:
            tstr = mMESSAGE.Return(778);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            break;
        case 3:
            tstr = mMESSAGE.Return(779);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            break;
        default:
            return;
        }
        break;

    case 3:
        mMYINFO.mNetworkLock = 0;
        if (!r->tResult)
        {
            tstr = mMESSAGE.Return(777);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        }
        break;

    case 4:
        mMYINFO.mNetworkLock = 0;
        if (r->tResult)
        {
            if (r->tResult == 1)
            {
                tstr = mMESSAGE.Return(784);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            }
        }
        else
        {
            mMYINFO.mAvatarInfo.aKillOtherTribe -= 500;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe -= 500;
            tstr = mMESSAGE.Return(783);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        }
        break;

    case 5:
        mMYINFO.mNetworkLock = 0;
        break;

    case 6:
        mMYINFO.mNetworkLock = 0;
        if (!r->tResult)
        {
            switch (mMYINFO.mAvatarInfo.aTitle % 100)
            {
            case 0:
                tCost = 800;
                goto LABEL_33;
            case 1:
                tCost = 1700;
                goto LABEL_33;
            case 2:
                tCost = 2500;
                goto LABEL_33;
            case 3:
                tCost = 3400;
                goto LABEL_33;
            case 4:
                tCost = 4200;
                goto LABEL_33;
            case 5:
                tCost = 5100;
                goto LABEL_33;
            case 6:
                tCost = 5900;
                goto LABEL_33;
            case 7:
                tCost = 6800;
                goto LABEL_33;
            case 8:
                tCost = 7600;
                goto LABEL_33;
            case 9:
                tCost = 8500;
                goto LABEL_33;
            case 10:
                tCost = 9300;
                goto LABEL_33;
            case 11:
                tCost = 10000;
            LABEL_33:
                memcpy(&tValue, &r->tData[0], 4);
                mMYINFO.mAvatarInfo.aKillOtherTribe -= tCost;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe -= tCost;
                if (mMYINFO.mAvatarInfo.aTitle || tValue <= 1)
                    ++mMYINFO.mAvatarInfo.aTitle;
                else
                    mMYINFO.mAvatarInfo.aTitle = 100 * (tValue - 1) + 1;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aTitle = mMYINFO.mAvatarInfo.aTitle;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
                tstr = mMESSAGE.Return(939);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                break;
            default:
                return;
            }
        }
        break;

    case 7:
        mMYINFO.mNetworkLock = 0;
        if (r->tResult)
        {
            if (r->tResult == 1)
            {
                mMYINFO.mAvatarInfo.aKillOtherTribe -= 100;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe -= 100;
                mMYINFO.mAvatarInfo.aMoney -= 1000000;
                tstr = mMESSAGE.Return(1144);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                GSOUND::Play(&mGDATA.mSOUND_5[348], 0, 100);
            }
            else if (r->tResult == 2)
            {
                mMYINFO.mAvatarInfo.aKillOtherTribe -= 100;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe -= 100;
                mMYINFO.mAvatarInfo.aMoney -= 1000000;
                --mMYINFO.mAvatarInfo.aUpgradeValue;
                --mPLAY.mAVATAR_OBJECT[0].mDATA.aHalo;
                tstr = mMESSAGE.Return(1144);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                tstr = mMESSAGE.Return(1145);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
                GSOUND::Play(&mGDATA.mSOUND_5[349], 0, 100);
            }
        }
        else
        {
            mMYINFO.mAvatarInfo.aKillOtherTribe -= 100;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe -= 100;
            mMYINFO.mAvatarInfo.aMoney -= 1000000;
            ++mMYINFO.mAvatarInfo.aUpgradeValue;
            ++mPLAY.mAVATAR_OBJECT[0].mDATA.aHalo;
            tstr = mMESSAGE.Return(1143);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            GSOUND::Play(&mGDATA.mSOUND_5[347], 0, 100);
        }
        break;

    case 8:
        mMYINFO.mNetworkLock = 0;
        if (r->tResult)
        {
            if (r->tResult == 2)
            {
                tstr = mMESSAGE.Return(117);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            }
        }
        else
        {
            mMYINFO.mAvatarInfo.aBeginnerPackageIcon = 0;
        }
        break;

    case 9:
        mMYINFO.mNetworkLock = 0;
        if (!r->tResult)
        {
            mMYINFO.mAvatarInfo.iUseOrnament = 1;
            tValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = tValue;
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > tValue)
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = tValue;
            }
            tValue = mFACTOR.GetMaxMana();
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = tValue;
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue > tValue)
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = tValue;
            }
        }
        break;

    case 10:
        mMYINFO.mNetworkLock = 0;
        if (!r->tResult)
        {
            mMYINFO.mAvatarInfo.iUseOrnament = 0;
            tValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = tValue;
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > tValue)
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = tValue;
            }
            tValue = mFACTOR.GetMaxMana();
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = tValue;
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue > tValue)
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = tValue;
            }
        }
        break;

    case 11:
        mMYINFO.mNetworkLock = 0;
        break;
    case 12:
        mMYINFO.mNetworkLock = 0;
        switch (r->tResult)
        {
        case 0:
            memcpy(&tValue, &r->tData[0], 4);
            --mMYINFO.mAvatarInfo.aRegistrationTicket;
            mMYINFO.mAvatarInfo.aRegistration = tValue;
            tstr = mMESSAGE.Return(1341);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            break;
        case 1:
            tstr = mMESSAGE.Return(1342);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            break;
        case 2:
            tstr = mMESSAGE.Return(1343);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            break;
        case 3:
            tstr = mMESSAGE.Return(1344);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            break;
        case 4:
            tstr = mMESSAGE.Return(1336);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            break;
        default:
            return;
        }
        break;

    case 13:
        mMYINFO.mNetworkLock = 0;
        if (r->tResult)
        {
            if (r->tResult == 1)
            {
                tstr = mMESSAGE.Return(1340);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            }
        }
        else
        {
            mMYINFO.mAvatarInfo.aRegistration = 0;
            tstr = mMESSAGE.Return(1339);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        }
        break;

    case 14:
        mMYINFO.mNetworkLock = 0;
        if (r->tResult)
        {
            if (r->tResult == 1)
            {
                tstr = mMESSAGE.Return(1494);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            }
            else if (r->tResult == 2)
            {
                tstr = mMESSAGE.Return(1495);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            }
        }
        else
        {
            tstr = mMESSAGE.Return(1493);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        }
        break;

    case 15:
        mMYINFO.mNetworkLock = 0;
        switch (r->tResult)
        {
        case 0:
            tstr = mMESSAGE.Return(1768);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            if (mMYINFO.mAvatarInfo.aLevel1 < 100 || mMYINFO.mAvatarInfo.aLevel1 > 112)
            {
                if (mMYINFO.mAvatarInfo.aLevel1 < 113
                    || mMYINFO.mAvatarInfo.aLevel1 > 145
                    || mMYINFO.mAvatarInfo.aLevel2)
                {
                    if (mMYINFO.mAvatarInfo.aLevel2 > 0)
                        mMYINFO.mAvatarInfo.aKillOtherTribe -= 100;
                }
                else
                {
                    mMYINFO.mAvatarInfo.aKillOtherTribe -= 50;
                }
            }
            else
            {
                mMYINFO.mAvatarInfo.aKillOtherTribe -= 20;
            }
            break;
        case 1:
            tstr = mMESSAGE.Return(1342);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            break;
        case 2:
            tstr = mMESSAGE.Return(1803);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            break;
        case 3:
            tstr = mMESSAGE.Return(1868);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            break;
        default:
            return;
        }
        break;

    case 16:
        mMYINFO.mNetworkLock = 0;
        if (r->tResult)
        {
            if (r->tResult == 1)
            {
                tstr = mMESSAGE.Return(784);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            }
        }
        else
        {
            --mMYINFO.mAvatarInfo.aKillOtherTribe;
            --mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe;
            tstr = mMESSAGE.Return(783);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        }
        break;


    case 17:
        mMYINFO.mNetworkLock = 0;
        if (r->tResult)
        {
            if (r->tResult == 1)
            {
                tstr = mMESSAGE.Return(784);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            }
        }
        else
        {
            mMYINFO.mAvatarInfo.aKillOtherTribe -= 10;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe -= 10;
            tstr = mMESSAGE.Return(783);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        }
        break;

    case 18:
        mMYINFO.mNetworkLock = 0;
        if (r->tResult)
        {
            if (r->tResult == 1)
            {
                tstr = mMESSAGE.Return(784);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            }
        }
        else
        {
            mMYINFO.mAvatarInfo.aMoney -= 500000000;
            tstr = mMESSAGE.Return(783);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        }
        break;

    #ifdef CONSTELLATION
    case 21:
        if (!r->tResult)
        {
            mMYINFO.mNetworkLock = 0;
            CopyMemory(&tConstellationSort, &r->tData[0], 4);
            mMYINFO.mAvatarInfo.aKillOtherTribe -= 5000 * (mMYINFO.mAvatarInfo.aConstellation[tConstellationSort] + 1);
            mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe -= 5000 * (mMYINFO.mAvatarInfo.aConstellation[tConstellationSort] + 1);
            mMYINFO.mAvatarInfo.aConstellation[tConstellationSort] += 1;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = GmFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = GmFACTOR.GetMaxMana();
            mBASICUI.Insert1("[SYSTEM] Constellation Attempt Success!", 15);
        }
        return;
    #endif

    default:
        return;
    }
}

void WORK::W_TRIBE_NOTICE_RECV()
{
    char Buffer[1000];
    W_TRIBE_NOTICE_RECV_DATA* r = (W_TRIBE_NOTICE_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (r->tType == 1)
    {
        sprintf(Buffer, "[%s] %s", r->tAvatarName, r->tContent);
        mBOARDUI.Set(1, 0, Buffer, "");
        sprintf(Buffer, "%s [%s] %s", mMESSAGE.Return(840), r->tAvatarName, r->tContent);
        mBASICUI.Insert2(Buffer, 12, r->tAvatarName);
    }
    else if (r->tType == 2)
    {
        sprintf(Buffer, "%s [%s] %s", mMESSAGE.Return(841), r->tAvatarName, r->tContent);
        mBASICUI.Insert2(Buffer, 27, r->tAvatarName);
    }
}

void WORK::W_TRIBE_CHAT_RECV()
{
    char Buffer[1000]; 
    W_TRIBE_CHAT_RECV_DATA* r = (W_TRIBE_CHAT_RECV_DATA*)&mNETWORK.mBuffer[0];

    sprintf(Buffer, "%s [%s] %s", mMESSAGE.Return(113), r->tAvatarName, r->tContent);
    if (mBASICUI.mChatDisplay[3] == 1)
    {
        mBASICUI.Insert2(Buffer, mFONTCOLOR.mData[50], r->tAvatarName);
    }
}

void WORK::W_TRIBE_BANK_RECV()
{
    int i;
    W_TRIBE_BANK_RECV_DATA* r = (W_TRIBE_BANK_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (r->tSort == 1)
    {
        if (!r->tResult)
        {
            for (i = 0; i < 50; ++i)
            {
                mTRIBEBANKUI.mSilverValue[i] = r->tTribeBankInfo[i];
            }
        }
    }
    else if (r->tSort == 2)
    {
        mMYINFO.mNetworkLock = 0;
        if (!r->tResult)
        {
            mMYINFO.mAvatarInfo.aMoney = r->tMoney;
            mBASICUI.Insert1(mMESSAGE.Return(640), mFONTCOLOR.mData[44]);
        }
    }
}

void WORK::W_TRIBE_VOTE_RECV()
{
    W_TRIBE_VOTE_RECV_DATA* r = (W_TRIBE_VOTE_RECV_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tSort)
    {
    case 1:
        if (!r->tResult)
        {
            mBASICUI.Insert1(mMESSAGE.Return(758), mFONTCOLOR.mData[44]);
        }
        break;
    case 2:
        if (!r->tResult)
        {
            mBASICUI.Insert1(mMESSAGE.Return(759), mFONTCOLOR.mData[44]);
        }
        break;
    case 3:
        if (r->tResult)
        {
            if (r->tResult == 1)
            {
                mBASICUI.Insert1(mMESSAGE.Return(761), mFONTCOLOR.mData[44]);
            }
        }
        else
        {
            mBASICUI.Insert1(mMESSAGE.Return(760), mFONTCOLOR.mData[44]);
        }
        break;
    }
}

void WORK::W_TRIBE_ALLIANCE_RECV()
{
    char Buffer[1000];
    W_TRIBE_ALLIANCE_RECV_DATA* r = (W_TRIBE_ALLIANCE_RECV_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tSort)
    {
    case 1:
        mBASICUI.Insert1(mMESSAGE.Return(372), mFONTCOLOR.mData[44]);
        break;
    case 2:
        sprintf(Buffer, "[%d]%s", r->tValue, mMESSAGE.Return(373));
        mBASICUI.Insert1(Buffer, 3);
        break;
    case 3:
        mBASICUI.Insert1(mMESSAGE.Return(374), mFONTCOLOR.mData[44]);
        break;
    case 4:
        sprintf(Buffer, "[%d]%s", r->tValue, mMESSAGE.Return(375));
        mBASICUI.Insert1(Buffer, 2);
        break;
    case 5:
        mBASICUI.Insert1(mMESSAGE.Return(376), mFONTCOLOR.mData[44]);
        break;
    default:
        return;
    }
}
void WORK::W_BROADCAST_INFO_RECV()
{
    int tIndex;
    int tValue;
    int tValue2;
    int tValue3;
    int tZoneNumber;
    char* tstr;
    char* tstr2;
    char* tstr3;
    char* tstr4;
    char* tstr5;
    char Buffer[1000];
    char tempbuffer[1000];
    int tTribe;
    int tAllyTribe;
    int tAllyTribe2;
    char tAvatarName[13];
    int tShieldTribe;
    int tShieldIndex;
    int tAllianceIndex;
    int tPossibleAllianceDate01;
    int tPossibleAllianceDate02;
    int i, j, k;
    int tTribeForTribeVote;
    int tIndexForTribeVote;
    int tLevelForTribeVote;
    int tKillOtherTribeForTribeVote;
    int tPointForTribeVote;
    int tTribeForTribeRole;
    int tIndexForTribeRole;
    int tLabyIndex1;
    int tLabyIndex2;
    char tGuildName[13];
    char tGuildName2[13];
    char tCallName[5];
    char tOldGuildMaster[13];
    MONSTER_INFO* tMONSTER;
    ITEM_INFO* tITEM;
    int v661[4];
    int v651[4];
    W_BROADCAST_INFO_RECV_DATA* r = (W_BROADCAST_INFO_RECV_DATA*)&mNETWORK.mBuffer[0];

    v661[0] = 138;
    v661[1] = 139;
    v661[2] = 165;
    v661[3] = 166;
    v651[0] = 5;
    v651[1] = 10;
    v651[2] = 15;
    v651[3] = 123;

    switch (r->tSort)
    {
    case 1:
        memcpy(&tIndex, &r->tData[0], 4);
        memcpy(&tValue, &r->tData[4], 4);
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(1, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[226], 0, 100);
            tstr = mMESSAGE.Return(231);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s [%d]%s", tstr2, tValue, tstr);
            mBASICUI.Insert1(Buffer, 1);
        }
        return;

    case 2:
        memcpy(&tIndex, &r->tData[0], 4);
        mPLAY.mWorldInfo.mZone049TypeState[tIndex] = 1;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(1, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[259], 0, 100);
            tstr = mMESSAGE.Return(232);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            if (mGAMEOPTION.tAcceptWar == 1)
            {
                mMYINFO.mLevelBattleZoneNumberForMove = tZoneNumber;
                tstr = mMESSAGE.Return(242);
                tstr2 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s%s", tstr2, tstr);
                mCBOXUI.Set( 4, Buffer, "");
            }
        }
        return;

    case 3:
        memcpy(&tIndex, &r->tData[0], 4);
        mPLAY.mWorldInfo.mZone049TypeState[tIndex] = 2;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(1, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[259], 0, 100);
            tstr = mMESSAGE.Return(233);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1( Buffer, 1);
        }
        return;

    case 4:
        memcpy(&tIndex, &r->tData[0], 4);
        memcpy(&tValue, &r->tData[4], 4);
        mPLAY.mWorldInfo.mZone049TypeState[tIndex] = 3;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(1, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[227], 0, 100);
            tstr = mMESSAGE.Return(234);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1( Buffer, 1);
            mMYINFO.mCheckLevelBattle49TypeOpenEffect = 1;
            mMYINFO.mLevelBattle49TypeOpenEffectImageIndex = 0;
            GSOUND::Play(&mGDATA.mSOUND_5[210], 0, 100);
            mMYINFO.mCheckLevelBattleOpenGateEffect = 1;
            mMYINFO.mLevelBattleOpenGateEffectFrame = 0.0;
            mMYINFO.mLevelBattle49TypeRemainTime = tValue / 2;
            tstr = mMESSAGE.Return(843);
            sprintf(Buffer, "[%d]%s", mMYINFO.mLevelBattle49TypeRemainTime, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mMYINFO.mCheckLevelBattle49TypeInfo = 1;
            mMYINFO.mLevelBattle49TypeInfo[0] = 0;
            mMYINFO.mLevelBattle49TypeInfo[1] = 0;
            mMYINFO.mLevelBattle49TypeInfo[2] = 0;
            mMYINFO.mLevelBattle49TypeInfo[3] = 0;
        }
        return;

    case 5:
        memcpy(&tIndex, &r->tData[0], 4);
        mPLAY.mWorldInfo.mZone049TypeState[tIndex] = 5;
        mPLAY.mWorldInfo.mZone049TypeStateTime[tIndex] = mUTIL.ReturnBattleTimeInfo();
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(1, tIndex);
        mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber);
        return;
    case 6:
        memcpy(&tIndex, &r->tData[0], 4);
        mPLAY.mWorldInfo.mZone049TypeState[tIndex] = 5;
        mPLAY.mWorldInfo.mZone049TypeStateTime[tIndex] = mUTIL.ReturnBattleTimeInfo();
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(1, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(860);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1( Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 7:
        memcpy(&tIndex, r->tData, 4);
        memcpy(&tTribe, &r->tData[4], 4);
        mPLAY.mWorldInfo.mZone049TypeState[tIndex] = 4;
        mPLAY.mWorldInfo.mZone049TypeStateTime[tIndex] = mUTIL.ReturnBattleTimeInfo();
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(1, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[228], 0, 100);
            tAllyTribe = mPLAY.ReturnAlliance(tTribe);
            if (tAllyTribe != -1)
            {
                tstr = mMESSAGE.Return(236);
                tstr2 = mPLAY.ReturnTribeName(tAllyTribe);
                tstr3 = mPLAY.ReturnTribeName(tTribe);
                tstr4 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s [%s],[%s] %s", tstr4, tstr3, tstr2, tstr);
                mBASICUI.Insert1( Buffer, 1);
            }
        }
        return;

    case 8:
        memcpy(&tIndex, &r->tData[0], 4);
        mPLAY.mWorldInfo.mZone049TypeState[tIndex] = 5;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(1, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(237);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 9:
        memcpy(&tIndex, &r->tData[0], 4);
        mPLAY.mWorldInfo.mZone049TypeState[tIndex] = 0;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(1, tIndex);
        mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber);
        return;

    case 10:
        memcpy(&tIndex, &r->tData[0], 4);
        memcpy(&tValue, &r->tData[4], 4);
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(2, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[226], 0, 100);
            tstr = mMESSAGE.Return(231);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s [%d]%s", tstr2, tValue, tstr);
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 11:
        memcpy(&tIndex, &r->tData[0], 4);
        mPLAY.mWorldInfo.mZone051TypeState[tIndex] = 1;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(2, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[259], 0, 100);
            tstr = mMESSAGE.Return(232);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            if (mGAMEOPTION.tAcceptWar == 1)
            {
                mMYINFO.mLevelBattleZoneNumberForMove = tZoneNumber;
                tstr = mMESSAGE.Return(242);
                tstr2 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s%s", tstr2, tstr);
                mCBOXUI.Set(4, Buffer, "");
            }
        }
        return;

    case 12:
        memcpy(&tIndex, r->tData, 4);
        mPLAY.mWorldInfo.mZone051TypeState[tIndex] = 2;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(2, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[259], 0, 100);
            tstr = mMESSAGE.Return(233);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 13:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone051TypeState[tIndex] = 3;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(2, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[227], 0, 100);
            tstr = mMESSAGE.Return(234);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mMYINFO.mCheckLevelBattle51TypeOpenEffect = 1;
            mMYINFO.mLevelBattle51TypeOpenEffectImageIndex = 0;
            GSOUND::Play(&mGDATA.mSOUND_5[210], 0, 100);
            mMYINFO.mCheckLevelBattleOpenGateEffect = 1;
            mMYINFO.mLevelBattleOpenGateEffectFrame = 0.0;
        }
        return;
    case 14:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone051TypeState[tIndex] = 5;
        mPLAY.mWorldInfo.mZone051TypeStateTime[tIndex] = mUTIL.ReturnBattleTimeInfo();
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(2, tIndex);
        mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber);
        return;
    case 15:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone051TypeState[tIndex] = 5;
        mPLAY.mWorldInfo.mZone051TypeStateTime[tIndex] = mUTIL.ReturnBattleTimeInfo();
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(2, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(235);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 16:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tTribe, &r->tData[4], sizeof(tTribe));
        mPLAY.mWorldInfo.mZone051TypeState[tIndex] = 4;
        mPLAY.mWorldInfo.mZone051TypeStateTime[tIndex] = mUTIL.ReturnBattleTimeInfo();
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(2, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[228], 0, 100);
            tAllyTribe = mPLAY.ReturnAlliance(tTribe);
            if (tAllyTribe == -1)
            {
                tstr = mMESSAGE.Return(236);
                tstr2 = mPLAY.ReturnTribeName(tTribe);
                tstr3 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s [%s] %s", tstr3, tstr2, tstr);
            }
            else
            {
                tstr = mMESSAGE.Return(236);
                tstr2 = mPLAY.ReturnTribeName(tAllyTribe);
                tstr3 = mPLAY.ReturnTribeName(tTribe);
                tstr4 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s [%s],[%s] %s", tstr4, tstr3, tstr2, tstr);
            }
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 17:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone051TypeState[tIndex] = 5;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(2, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(237); 
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 18:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone051TypeState[tIndex] = 0;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(2, tIndex);
        mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber);
        return;
    case 19:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(3, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[226], 0, 100);
            tstr = mMESSAGE.Return(231);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s [%d]%s", tstr2, tValue, tstr);
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 20:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone053TypeState[tIndex] = 1;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(3, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[259], 0, 100);
            tstr = mMESSAGE.Return(232);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            if (mGAMEOPTION.tAcceptWar == 1)
            {
                mMYINFO.mLevelBattleZoneNumberForMove = tZoneNumber;
                tstr = mMESSAGE.Return(242);
                tstr2 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s%s", tstr2, tstr);
                mCBOXUI.Set(4, Buffer, "");
            }
        }
        return;
    case 21:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone053TypeState[tIndex] = 2;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(3, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[259], 0, 100);
            tstr = mMESSAGE.Return(233);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 22:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone053TypeState[tIndex] = 3;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(3, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[227], 0, 100);
            tstr = mMESSAGE.Return(234);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mMYINFO.mCheckLevelBattle53TypeOpenEffect = 1;
            mMYINFO.mLevelBattle53TypeOpenEffectImageIndex = 0;
            GSOUND::Play(&mGDATA.mSOUND_5[210], 0, 100);
            mMYINFO.mCheckLevelBattleOpenGateEffect = 1;
            mMYINFO.mLevelBattleOpenGateEffectFrame = 0.0;
        }
        return;
    case 23:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone053TypeState[tIndex] = 5;
        mPLAY.mWorldInfo.mZone053TypeStateTime[tIndex] = mUTIL.ReturnBattleTimeInfo();
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(3, tIndex);
        mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber);
        return;
    case 24:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone053TypeState[tIndex] = 5;
        mPLAY.mWorldInfo.mZone053TypeStateTime[tIndex] = mUTIL.ReturnBattleTimeInfo();
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(3, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(235);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 25:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tTribe, &r->tData[4], sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[8], 13);
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(3, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[259], 0, 100);
            switch (tTribe)
            {
            case 0:
                tstr = mMESSAGE.Return(243);
                tstr2 = mMESSAGE.Return(75);
                tstr3 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s [%s] [%s] %s", tstr3, tstr2, tAvatarName, tstr);
                break;
            case 1:
                tstr = mMESSAGE.Return(243);
                tstr2 = mMESSAGE.Return(76);
                tstr3 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s [%s] [%s] %s", tstr3, tstr2, tAvatarName, tstr);
                break;
            case 2:
                tstr = mMESSAGE.Return(243);
                tstr2 = mMESSAGE.Return(77);
                tstr3 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s [%s] [%s] %s", tstr3, tstr2, tAvatarName, tstr);
                break;
            case 3:
                tstr = mMESSAGE.Return(243);
                tstr2 = mMESSAGE.Return(78);
                tstr3 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s [%s] [%s] %s", tstr3, tstr2, tAvatarName, tstr);
                break;
            default:
                break;
            }
            mBASICUI.Insert1(Buffer, 1);
            mMYINFO.mCheckLevelBattle53TypeEffect1 = 1;
            mMYINFO.mLevelBattle53TypeEffectFrame1 = 0.0;
        }
        return;
    case 26:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(3, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[259], 0, 100);
            tstr = mMESSAGE.Return(244);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
        }
        return;

    case 27:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(3, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[259], 0, 100);
            tstr = mMESSAGE.Return(245);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s [%d]%s", tstr2, tValue, tstr);
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 28:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tTribe, &r->tData[4], sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[8], 13);
        mPLAY.mWorldInfo.mZone053TypeState[tIndex] = 4;
        mPLAY.mWorldInfo.mZone053TypeStateTime[tIndex] = mUTIL.ReturnBattleTimeInfo();
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(3, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[228], 0, 100);
            tAllyTribe = mPLAY.ReturnAlliance(tTribe);
            if (tAllyTribe == -1)
            {
                tstr = mMESSAGE.Return(246);
                tstr2 = mPLAY.ReturnTribeName(tTribe);
                tstr3 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s [%s-%s] %s", tstr3, tstr2, tAvatarName, tstr);
            }
            else
            {
                tstr = mMESSAGE.Return(246);
                tstr2 = mPLAY.ReturnTribeName(tAllyTribe);
                tstr3 = mPLAY.ReturnTribeName(tTribe);
                tstr4 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s [%s-%s],[%s] %s", tstr4, tstr3, tAvatarName, tstr2, tstr);
            }
            mBASICUI.Insert1(Buffer, 1);
            mMYINFO.mCheckLevelBattle53TypeEffect2 = 1;
            mMYINFO.mLevelBattle53TypeEffectFrame2 = 0.0;
        }
        return;
    case 29:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone053TypeState[tIndex] = 5;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(3, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(237);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 30:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone053TypeState[tIndex] = 0;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(3, tIndex);
        mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber);
        return;
    case 31:
        memcpy(&tShieldTribe, r->tData, sizeof(tShieldTribe));
        memcpy(&tShieldIndex, &r->tData[4], sizeof(tShieldIndex));
        mPLAY.mWorldInfo.mTribeGuardState[tShieldTribe][tShieldIndex] = 0;
        strcpy(Buffer, "");
        switch (tShieldTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(75);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(76);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(77);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(78);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        switch (tShieldIndex)
        {
        case 0:
            tstr = mMESSAGE.Return(251);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(252);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(253);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(254);
            sprintf(tempbuffer, "%s", tstr);
            break;
        default:
            strcat(Buffer, tempbuffer);
            mBOARDUI.Set(3, 4, Buffer, "");
            return;
        }
        strcat(Buffer, tempbuffer);
        mBOARDUI.Set(3, 4, Buffer, "");
        return;

    case 32:
        memcpy(&tShieldTribe, r->tData, sizeof(tShieldTribe));
        memcpy(&tShieldIndex, &r->tData[4], sizeof(tShieldIndex));
        mPLAY.mWorldInfo.mTribeGuardState[tShieldTribe][tShieldIndex] = 1;
        strcpy(Buffer, "");
        switch (tShieldTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(75);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(76);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(77);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(78);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        switch (tShieldIndex)
        {
        case 0:
            tstr = mMESSAGE.Return(255);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(256);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(257);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(258);
            sprintf(tempbuffer, "%s", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        mBOARDUI.Set(3, 4, Buffer, "");
        return;
    case 33:
        memcpy(&tValue, r->tData, sizeof(tValue));
        tstr = mMESSAGE.Return(271);
        sprintf(Buffer, "[%d]%s", tValue, tstr);
        mBOARDUI.Set(2, 1, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 34:
        tstr = mMESSAGE.Return(272);
        sprintf(Buffer, "%s", tstr);
        mBOARDUI.Set(2, 2, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 35:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[4], 13);
        switch (tTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(273);
            tstr2 = mMESSAGE.Return(75);
            sprintf(Buffer, "[%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(273);
            tstr2 = mMESSAGE.Return(76);
            sprintf(Buffer, "[%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(273);
            tstr2 = mMESSAGE.Return(77);
            sprintf(Buffer, "[%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(273);
            tstr2 = mMESSAGE.Return(78);
            sprintf(Buffer, "[%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        default:
            break;
        }
        mBOARDUI.Set(2, 4, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        if (mMYINFO.mPresentZoneNumber == 38)
        {
            mMYINFO.mCheckZone038Effect1 = 1;
            mMYINFO.mZone038EffectFrame1 = 0.0;
        }
        return;

    case 36:
        tstr = mMESSAGE.Return(274);
        sprintf(Buffer, "%s", tstr);
        mBOARDUI.Set(2, 4, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 37:
        memcpy(&tValue, r->tData, sizeof(tValue));
        tstr = mMESSAGE.Return(275);
        sprintf(Buffer, "[%d]%s", tValue, tstr);
        mBOARDUI.Set(2, 4, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 38:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[4], 13);
        mPLAY.mWorldInfo.mZone038WinTribe = tTribe;
        mPLAY.mWorldInfo.mZone038WinDate = mUTIL.ReturnBattleTimeInfo();
        switch (tTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(276);
            tstr2 = mMESSAGE.Return(75);
            sprintf(Buffer, "[%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(276);
            tstr2 = mMESSAGE.Return(76);
            sprintf(Buffer, "[%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(276);
            tstr2 = mMESSAGE.Return(77);
            sprintf(Buffer, "[%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(276);
            tstr2 = mMESSAGE.Return(78);
            sprintf(Buffer, "[%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        default:
            break;
        }
        mBOARDUI.Set(2, 3, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
       /* if (mMYINFO.mPresentZoneNumber <= 74)
        {
            if (mMYINFO.mPresentZoneNumber != 74)
            {
                if (mMYINFO.mPresentZoneNumber == 38)
                {
                    mMYINFO.mCheckZone038Effect2 = 1;
                    mMYINFO.mZone038EffectFrame2 = 0.0;
                    return;
                }
                if (mMYINFO.mPresentZoneNumber != 39)
                    return;
            }
            goto LABEL_122;
        }
        if (mMYINFO.mPresentZoneNumber < 144)
            return;
        if (mMYINFO.mPresentZoneNumber <= 145)
        {
        LABEL_122:
            mPLAY.ReturnToTown(0);
            return;
        }
        if (mMYINFO.mPresentZoneNumber == 310
            && mMYINFO.mAvatarInfo.aTribe != mPLAY.mWorldInfo.mZone038WinTribe
            && !mMYINFO.mAvatarInfo.aTheFortressTime)
        {
            mPLAY.ReturnToTown(0);
        }*/
        return;

    case 39:
        memcpy(&tValue, &r->tData[0], 4);
        sprintf(Buffer, "[%d]%s", tValue, mMESSAGE.Return(277));
        mBOARDUI.Set(3, 1, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        mMYINFO.mAvatarInfo.aRankAbility = 0;
        mMYINFO.mAvatarInfo.aRankPoints = 0;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aRankPoint = 0;
        return;

    case 40:
        mPLAY.mWorldInfo.mTribeSymbolBattle = 1;
        mPLAY.mWorldInfo.mTribe1Symbol = 0;
        mPLAY.mWorldInfo.mTribe2Symbol = 1;
        mPLAY.mWorldInfo.mTribe3Symbol = 2;
        mPLAY.mWorldInfo.mTribe4Symbol = 3;
        sprintf(Buffer, "%s", mMESSAGE.Return(278));
        mBOARDUI.Set(3, 2, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        switch (mMYINFO.mPresentZoneNumber)
        {
        case 50:
        case 52:
        case 85:
        case 99:
        case 100:
        case 170:
        case 196:
            mPLAY.ReturnToTown(0);
            break;
        default:
            break;
        }
        mMYINFO.mAvatarInfo.aRankAbility = 0;
        mMYINFO.mAvatarInfo.aRankPoints = 0;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aRankPoint = 0;
        return;

    case 41:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tTribe, &r->tData[4], sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[8], 13);
        strcpy(Buffer, "");
        switch (tIndex)
        {
        case 0:
            tstr = mMESSAGE.Return(279);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(280);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(281);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(282);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 4:
            tstr = mMESSAGE.Return(283);
            sprintf(tempbuffer, "%s", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        switch (tTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(284);
            tstr2 = mMESSAGE.Return(75);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(284);
            tstr2 = mMESSAGE.Return(76);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(284);
            tstr2 = mMESSAGE.Return(77);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(284);
            tstr2 = mMESSAGE.Return(78);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        mBOARDUI.Set(3, 3, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;

    case 42:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        switch (tIndex)
        {
        case 0:
            mPLAY.mWorldInfo.mTribe1Symbol = tValue;
            break;
        case 1:
            mPLAY.mWorldInfo.mTribe2Symbol = tValue;
            break;
        case 2:
            mPLAY.mWorldInfo.mTribe3Symbol = tValue;
            break;
        case 3:
            mPLAY.mWorldInfo.mTribe4Symbol = tValue;
            break;
        case 4:
            mPLAY.mWorldInfo.mMonsterSymbol = tValue;
            mPLAY.mWorldInfo.mMonsterSymbolDate = mUTIL.ReturnBattleTimeInfo();
            break;
        default:
            break;
        }
        strcpy(Buffer, "");
        switch (tIndex)
        {
        case 0:
            tstr = mMESSAGE.Return(279);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(280);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(281);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(282);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 4:
            tstr = mMESSAGE.Return(283);
            sprintf(tempbuffer, "%s", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        switch (tValue)
        {
        case 0:
            tstr = mMESSAGE.Return(285);
            tstr2 = mMESSAGE.Return(75);
            sprintf(tempbuffer, " [%s] %s", tstr2, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(285);
            tstr2 = mMESSAGE.Return(76);
            sprintf(tempbuffer, " [%s] %s", tstr2, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(285);
            tstr2 = mMESSAGE.Return(77);
            sprintf(tempbuffer, " [%s] %s", tstr2, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(285);
            tstr2 = mMESSAGE.Return(78);
            sprintf(tempbuffer, " [%s] %s", tstr2, tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        mBOARDUI.Set(3, 4, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;

    case 43:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        switch (tIndex)
        {
        case 0:
            tstr = mMESSAGE.Return(286);
            tstr2 = mMESSAGE.Return(279);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(286);
            tstr2 = mMESSAGE.Return(280);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(286);
            tstr2 = mMESSAGE.Return(281);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(286);
            tstr2 = mMESSAGE.Return(282);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            break;
        case 4:
            tstr = mMESSAGE.Return(286);
            tstr2 = mMESSAGE.Return(283);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            break;
        default:
            break;
        }
        mBOARDUI.Set(3, 5, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;

    case 44:
        memcpy(&tValue, r->tData, sizeof(tValue));
        tstr = mMESSAGE.Return(287);
        sprintf(Buffer, "[%d]%s", tValue, tstr);
        mBOARDUI.Set(3, 6, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;

    case 45:
        mPLAY.mWorldInfo.mTribeSymbolBattle = 0;
        mPLAY.mWorldInfo.mTribeMasterCallAbility[0] = 0;
        mPLAY.mWorldInfo.mTribeMasterCallAbility[1] = 0;
        mPLAY.mWorldInfo.mTribeMasterCallAbility[2] = 0;
        mPLAY.mWorldInfo.mTribeMasterCallAbility[3] = 0;
        tstr = mMESSAGE.Return(288);
        sprintf(Buffer, "%s", tstr);
        mBOARDUI.Set(3, 7, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;

    case 46:
        memcpy(&tAllyTribe, r->tData, sizeof(tAllyTribe));
        memcpy(&tAllyTribe2, &r->tData[4], sizeof(tAllyTribe2));
        if ((mPLAY.mWorldInfo.mAllianceState[0][0] == -1) && (mPLAY.mWorldInfo.mAllianceState[0][1] == -1))
        {
            tAllianceIndex = 0;
        }
        else
        {
            tAllianceIndex = 1;
        }
        mPLAY.mWorldInfo.mPossibleAllianceInfo[tAllyTribe][0] = 0;
        mPLAY.mWorldInfo.mPossibleAllianceInfo[tAllyTribe][1] = 0;
        mPLAY.mWorldInfo.mPossibleAllianceInfo[tAllyTribe2][0] = 0;
        mPLAY.mWorldInfo.mPossibleAllianceInfo[tAllyTribe2][1] = 0;
        mPLAY.mWorldInfo.mAllianceState[tAllianceIndex][0] = tAllyTribe;
        mPLAY.mWorldInfo.mAllianceState[tAllianceIndex][1] = tAllyTribe2;
        strcpy(Buffer, "");
        switch (tAllyTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(377);
            tstr2 = mMESSAGE.Return(75);
            sprintf(tempbuffer, "[%s]%s", tstr2, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(377);
            tstr2 = mMESSAGE.Return(76);
            sprintf(tempbuffer, "[%s]%s", tstr2, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(377);
            tstr2 = mMESSAGE.Return(77);
            sprintf(tempbuffer, "[%s]%s", tstr2, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(377);
            tstr2 = mMESSAGE.Return(78);
            sprintf(tempbuffer, "[%s]%s", tstr2, tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        switch (tAllyTribe2)
        {
        case 0:
            tstr = mMESSAGE.Return(378);
            tstr2 = mMESSAGE.Return(75);
            sprintf(tempbuffer, " [%s]%s", tstr2, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(378);
            tstr2 = mMESSAGE.Return(76);
            sprintf(tempbuffer, " [%s]%s", tstr2, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(378);
            tstr2 = mMESSAGE.Return(77);
            sprintf(tempbuffer, " [%s]%s", tstr2, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(378);
            tstr2 = mMESSAGE.Return(78);
            sprintf(tempbuffer, " [%s]%s", tstr2, tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        mBOARDUI.Set(10, 1, Buffer, "");
        if (mMYINFO.mPresentZoneNumber == 37)
        {
            mMYINFO.mCheckZone037Effect1 = 1;
            mMYINFO.mZone037EffectFrame1 = 0.0;
        }
        return;

    case 47:
        memcpy(&tAllyTribe, r->tData, sizeof(tAllyTribe));
        memcpy(&tAllyTribe2, &r->tData[4], sizeof(tAllyTribe2));
        memcpy(&tPossibleAllianceDate01, &r->tData[8], sizeof(tPossibleAllianceDate01));
        memcpy(&tPossibleAllianceDate02, &r->tData[12], sizeof(tPossibleAllianceDate02));
        if (((mPLAY.mWorldInfo.mAllianceState[0][0] == tAllyTribe) && (mPLAY.mWorldInfo.mAllianceState[0][1] == tAllyTribe2)) || ((mPLAY.mWorldInfo.mAllianceState[0][1] == tAllyTribe) && (mPLAY.mWorldInfo.mAllianceState[0][0] == tAllyTribe2)))
        {
            tAllianceIndex = 0;
        }
        else
        {
            tAllianceIndex = 1;
        }
        mPLAY.mWorldInfo.mPossibleAllianceInfo[tAllyTribe][0] = tPossibleAllianceDate01;
        mPLAY.mWorldInfo.mPossibleAllianceInfo[tAllyTribe][1] = 1;
        mPLAY.mWorldInfo.mPossibleAllianceInfo[tAllyTribe2][0] = tPossibleAllianceDate02;
        mPLAY.mWorldInfo.mPossibleAllianceInfo[tAllyTribe2][1] = 1;
        mPLAY.mWorldInfo.mAllianceState[tAllianceIndex][0] = -1;
        mPLAY.mWorldInfo.mAllianceState[tAllianceIndex][1] = -1;
        strcpy(Buffer, "");
        switch (tAllyTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(377);
            tstr2 = mMESSAGE.Return(75);
            sprintf(tempbuffer, "[%s]%s", tstr2, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(377);
            tstr2 = mMESSAGE.Return(76);
            sprintf(tempbuffer, "[%s]%s", tstr2, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(377);
            tstr2 = mMESSAGE.Return(77);
            sprintf(tempbuffer, "[%s]%s", tstr2, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(377);
            tstr2 = mMESSAGE.Return(78);
            sprintf(tempbuffer, "[%s]%s", tstr2, tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        switch (tAllyTribe2)
        {
        case 0:
            tstr = mMESSAGE.Return(379);
            tstr2 = mMESSAGE.Return(75);
            sprintf(tempbuffer, " [%s]%s", tstr2, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(379);
            tstr2 = mMESSAGE.Return(76);
            sprintf(tempbuffer, " [%s]%s", tstr2, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(379);
            tstr2 = mMESSAGE.Return(77);
            sprintf(tempbuffer, " [%s]%s", tstr2, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(379);
            tstr2 = mMESSAGE.Return(78);
            sprintf(tempbuffer, " [%s]%s", tstr2, tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        mBOARDUI.Set(10, 2, Buffer, "");
        if (mMYINFO.mPresentZoneNumber == 37)
        {
            mMYINFO.mCheckZone037Effect2 = 1;
            mMYINFO.mZone037EffectFrame2 = 0.0;
        }
        return;

    case 48:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tTribe, &r->tData[4], sizeof(tTribe));
        memcpy(tAvatarName, &r->tData[8], 13);
        strcpy(Buffer, "");
        switch (tIndex)
        {
        case 0:
            tstr = mMESSAGE.Return(380);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(381);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(382);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(383);
            sprintf(tempbuffer, "%s", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        switch (tTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(284);
            tstr2 = mMESSAGE.Return(75);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(284);
            tstr2 = mMESSAGE.Return(76);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(284);
            tstr2 = mMESSAGE.Return(77);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(284);
            tstr2 = mMESSAGE.Return(78);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        mBOARDUI.Set(10, 3, Buffer, "");
        return;

    case 49:
        memcpy(&tAllyTribe, r->tData, sizeof(tAllyTribe));
        memcpy(&tAllyTribe2, &r->tData[4], sizeof(tAllyTribe2));
        memcpy(&tPossibleAllianceDate01, &r->tData[8], sizeof(tPossibleAllianceDate01));
        memcpy(&tPossibleAllianceDate02, &r->tData[12], sizeof(tPossibleAllianceDate02));
        memcpy(&tIndex, &r->tData[16], sizeof(tIndex));
        memcpy(&tTribe, &r->tData[20], sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[24], 13);
        if (((mPLAY.mWorldInfo.mAllianceState[0][0] == tAllyTribe) && (mPLAY.mWorldInfo.mAllianceState[0][1] == tAllyTribe2)) || ((mPLAY.mWorldInfo.mAllianceState[0][1] == tAllyTribe) && (mPLAY.mWorldInfo.mAllianceState[0][0] == tAllyTribe2)))
        {
            tAllianceIndex = 0;
        }
        else
        {
            tAllianceIndex = 1;
        }
        mPLAY.mWorldInfo.mPossibleAllianceInfo[tAllyTribe][0] = tPossibleAllianceDate01;
        mPLAY.mWorldInfo.mPossibleAllianceInfo[tAllyTribe][1] = 1;
        mPLAY.mWorldInfo.mPossibleAllianceInfo[tAllyTribe2][0] = tPossibleAllianceDate02;
        mPLAY.mWorldInfo.mPossibleAllianceInfo[tAllyTribe2][1] = 1;
        mPLAY.mWorldInfo.mAllianceState[tAllianceIndex][0] = -1;
        mPLAY.mWorldInfo.mAllianceState[tAllianceIndex][1] = -1;
        strcpy(Buffer, "");
        switch (tIndex)
        {
        case 0:
            tstr = mMESSAGE.Return(380);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(381);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(382);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(383);
            sprintf(tempbuffer, "%s", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        switch (tTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(285);
            tstr2 = mMESSAGE.Return(75);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(285);
            tstr2 = mMESSAGE.Return(76);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(285);
            tstr2 = mMESSAGE.Return(77);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(285);
            tstr2 = mMESSAGE.Return(78);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        mBOARDUI.Set(10, 4, Buffer, "");
        return;

    case 50:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        switch (tIndex)
        {
        case 0:
            tstr = mMESSAGE.Return(286);
            tstr2 = mMESSAGE.Return(380);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(286);
            tstr2 = mMESSAGE.Return(381);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(286);
            tstr2 = mMESSAGE.Return(382);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(286);
            tstr2 = mMESSAGE.Return(383);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            break;
        default:
            break;
        }
        mBOARDUI.Set(10, 5, Buffer, "");
        return;

    case 51:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[4], 13);
        strcpy(Buffer, "");
        switch (tTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(75);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(76);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(77);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(78);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        tstr = mMESSAGE.Return(259);
        sprintf(tempbuffer, " [%s]%s", tAvatarName, tstr);
        strcat(Buffer, tempbuffer);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;

    case 52:
        mPLAY.mWorldInfo.mTribeVoteState[0] = 1;
        mPLAY.mWorldInfo.mTribeVoteState[1] = 1;
        mPLAY.mWorldInfo.mTribeVoteState[2] = 1;
        mPLAY.mWorldInfo.mTribeVoteState[3] = 1;
        for (i = 0; i < 4; ++i)
        {
            for (j = 0; j < 10; ++j)
            {
                strcpy(mPLAY.mTribeInfo.mTribeVoteName[i][j], "");
                mPLAY.mTribeInfo.mTribeVoteLevel[i][j] = 0;
                mPLAY.mTribeInfo.mTribeVoteKillOtherTribe[i][j] = 0;
                mPLAY.mTribeInfo.mTribeVotePoint[i][j] = 0;
            }
        }
        tstr = mMESSAGE.Return(762);
        strcpy(Buffer, tstr);
        mBOARDUI.Set(11, 1, Buffer, "");
        return;

    case 53:
        mPLAY.mWorldInfo.mTribeVoteState[0] = 2;
        mPLAY.mWorldInfo.mTribeVoteState[1] = 2;
        mPLAY.mWorldInfo.mTribeVoteState[2] = 2;
        mPLAY.mWorldInfo.mTribeVoteState[3] = 2;
        tstr = mMESSAGE.Return(763);
        strcpy(Buffer, tstr);
        mBOARDUI.Set(11, 2, Buffer, "");
        return;
    case 54:
        mPLAY.mWorldInfo.mTribeVoteState[0] = 3;
        mPLAY.mWorldInfo.mTribeVoteState[1] = 3;
        mPLAY.mWorldInfo.mTribeVoteState[2] = 3;
        mPLAY.mWorldInfo.mTribeVoteState[3] = 3;
        tstr = mMESSAGE.Return(764);
        strcpy(Buffer, tstr);
        mBOARDUI.Set(11, 3, Buffer, "");
        return;
    case 55:
        mPLAY.mWorldInfo.mTribeVoteState[0] = 4;
        mPLAY.mWorldInfo.mTribeVoteState[1] = 4;
        mPLAY.mWorldInfo.mTribeVoteState[2] = 4;
        mPLAY.mWorldInfo.mTribeVoteState[3] = 4;
        for (i = 0; i < 4; ++i)
        {
            tIndex = -1;
            for (j = 0; j < 10; ++j)
            {
                if (strcmp(mPLAY.mTribeInfo.mTribeVoteName[i][j], "") && mPLAY.mTribeInfo.mTribeVotePoint[i][j] >= 1)
                {
                    if (tIndex == -1)
                    {
                        tIndex = j;
                    }
                    else if (mPLAY.mTribeInfo.mTribeVotePoint[i][j] > mPLAY.mTribeInfo.mTribeVotePoint[i][tIndex])
                    {
                        tIndex = j;
                    }
                }
            }
            if (tIndex == -1)
                strcpy(mPLAY.mTribeInfo.mTribeMaster[i], "");
            else
                strcpy(mPLAY.mTribeInfo.mTribeMaster[i], mPLAY.mTribeInfo.mTribeVoteName[i][tIndex]);
            for (j = 0; j < 12; ++j)
                strcpy(mPLAY.mTribeInfo.mTribeSubMaster[i][j], "");
        }
        tstr = mMESSAGE.Return(765);
        strcpy(Buffer, tstr);
        mBOARDUI.Set(11, 4, Buffer, "");
        return;

    case 56:
        mPLAY.mWorldInfo.mTribeVoteState[0] = 0;
        mPLAY.mWorldInfo.mTribeVoteState[1] = 0;
        mPLAY.mWorldInfo.mTribeVoteState[2] = 0;
        mPLAY.mWorldInfo.mTribeVoteState[3] = 0;
        return;
    case 57:
        memcpy(&tTribeForTribeVote, r->tData, sizeof(tTribeForTribeVote));
        memcpy(&tIndexForTribeVote, &r->tData[4], sizeof(tIndexForTribeVote));
        memcpy(&tAvatarName, &r->tData[8], 13);
        memcpy(&tLevelForTribeVote, &r->tData[21], sizeof(tLevelForTribeVote));
        memcpy(&tKillOtherTribeForTribeVote, &r->tData[25], sizeof(tKillOtherTribeForTribeVote));
        strcpy(Buffer, "");
        switch (tTribeForTribeVote)
        {
        case 0:
            tstr = mMESSAGE.Return(75);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(76);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(77);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(78);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        tstr = mMESSAGE.Return(766);
        sprintf(tempbuffer, " [%s]%s", tAvatarName, tstr);
        strcat(Buffer, tempbuffer);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        strcpy(mPLAY.mTribeInfo.mTribeVoteName[tTribeForTribeVote][tIndexForTribeVote], tAvatarName);
        mPLAY.mTribeInfo.mTribeVoteLevel[tTribeForTribeVote][tIndexForTribeVote] = tLevelForTribeVote;
        mPLAY.mTribeInfo.mTribeVoteKillOtherTribe[tTribeForTribeVote][tIndexForTribeVote] = tKillOtherTribeForTribeVote;
        mPLAY.mTribeInfo.mTribeVotePoint[tTribeForTribeVote][tIndexForTribeVote] = 0;
        return;

    case 58:
        memcpy(&tTribeForTribeVote, r->tData, sizeof(tTribeForTribeVote));
        memcpy(&tIndexForTribeVote, &r->tData[4], sizeof(tIndexForTribeVote));
        strcpy(Buffer, "");
        switch (tTribeForTribeVote)
        {
        case 0:
            tstr = mMESSAGE.Return(75);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(76);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(77);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(78);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        tstr = mMESSAGE.Return(767);
        sprintf(tempbuffer, " [%s]%s", mPLAY.mTribeInfo.mTribeVoteName[tTribeForTribeVote][tIndexForTribeVote], tstr);
        strcat(Buffer, tempbuffer);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        strcpy(mPLAY.mTribeInfo.mTribeVoteName[tTribeForTribeVote][tIndexForTribeVote], "");
        mPLAY.mTribeInfo.mTribeVoteLevel[tTribeForTribeVote][tIndexForTribeVote] = 0;
        mPLAY.mTribeInfo.mTribeVoteKillOtherTribe[tTribeForTribeVote][tIndexForTribeVote] = 0;
        mPLAY.mTribeInfo.mTribeVotePoint[tTribeForTribeVote][tIndexForTribeVote] = 0;
        return;
    case 59:
        memcpy(&tTribeForTribeVote, r->tData, sizeof(tTribeForTribeVote));
        memcpy(&tIndexForTribeVote, &r->tData[4], sizeof(tIndexForTribeVote));
        memcpy(&tPointForTribeVote, &r->tData[8], sizeof(tPointForTribeVote));
        mPLAY.mTribeInfo.mTribeVotePoint[tTribeForTribeVote][tIndexForTribeVote] += tPointForTribeVote;
        return;
    case 60:
        memcpy(&tTribeForTribeRole, r->tData, sizeof(tTribeForTribeRole));
        memcpy(&tIndexForTribeRole, &r->tData[4], sizeof(tIndexForTribeRole));
        memcpy(&tAvatarName, &r->tData[8], 13);
        strcpy(Buffer, "");
        switch (tTribeForTribeRole)
        {
        case 0:
            tstr = mMESSAGE.Return(75);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(76);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(77);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(78);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        tstr = mMESSAGE.Return(773);
        sprintf(tempbuffer, " [%s]%s", tAvatarName, tstr);
        strcat(Buffer, tempbuffer);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        strcpy(mPLAY.mTribeInfo.mTribeSubMaster[tTribeForTribeRole][tIndexForTribeRole], tAvatarName);
        return;

    case 61:
        memcpy(&tTribeForTribeRole, r->tData, sizeof(tTribeForTribeRole));
        memcpy(&tIndexForTribeRole, &r->tData[4], sizeof(tIndexForTribeRole));
        memcpy(&tAvatarName, &r->tData[8], 13);
        strcpy(Buffer, "");
        switch (tTribeForTribeRole)
        {
        case 0:
            tstr = mMESSAGE.Return(75);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(76);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(77);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(78);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        tstr = mMESSAGE.Return(774);
        sprintf(tempbuffer, " [%s]%s", tAvatarName, tstr);
        strcat(Buffer, tempbuffer);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        strcpy(mPLAY.mTribeInfo.mTribeSubMaster[tTribeForTribeRole][tIndexForTribeRole], "");
        return;

    case 62:
        memcpy(&tZoneNumber, r->tData, sizeof(tZoneNumber));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        if (mMYINFO.mAvatarInfo.aTribe == tZoneNumber)
        {
            tstr = mMESSAGE.Return(812);
            sprintf(Buffer, "%s(%d)", tstr, tValue);
            mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        }
        return;

    case 63:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        memcpy(&tValue, &r->tData[8], sizeof(tValue));
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (mZONEMAININFO.CheckZone175TypeZoneNumber1(tZoneNumber) && mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] <= 0)
        {
            tstr = mMESSAGE.Return(231);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s [%d]%s", tstr2, tValue, tstr);
            mBOARDUI.Set(5, 1, Buffer, "");
            mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        }
        return;

    case 64:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 1;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (mZONEMAININFO.CheckZone175TypeZoneNumber1(tZoneNumber))
        {
            tstr = mMESSAGE.Return(232);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBOARDUI.Set(5, 2, Buffer, "");
            mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        }
        return;
    case 65:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 2;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (mZONEMAININFO.CheckZone175TypeZoneNumber1(tZoneNumber))
        {
            tstr = mMESSAGE.Return(233);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBOARDUI.Set(5, 3, Buffer, "");
            mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        }
        return;
    case 66:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 3;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[323], 0, 100);
            mMYINFO.mCheckZone175TypeGateEffect1[0] = 1;
            mMYINFO.mCheckZone175TypeGateEffect1[1] = 1;
        }
        return;
    case 67:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 4;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[323], 0, 100);
            mMYINFO.mCheckZone175TypeGateEffect2[0] = 1;
            mMYINFO.mCheckZone175TypeGateEffect2[1] = 1;
        }
        return;
    case 68:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 5;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[329], 0, 100);
        }
        return;
    case 69:
    case 76:
    case 83:
    case 90:
    case 97:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 23;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        mZONEMAININFO.CheckZone175TypeZoneNumber1(tZoneNumber);
        return;
    case 70:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 23;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(235);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 71:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 6;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[328], 0, 100);
        }
        return;

    case 72:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 23;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(237);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 73:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 7;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[324], 0, 100);
            mMYINFO.mCheckZone175TypeGateEffect1[2] = 1;
            mMYINFO.mCheckZone175TypeGateEffect1[3] = 1;
        }
        return;
    case 74:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 8;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[324], 0, 100);
            mMYINFO.mCheckZone175TypeGateEffect2[2] = 1;
            mMYINFO.mCheckZone175TypeGateEffect2[3] = 1;
        }
        return;
    case 75:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 9;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[330], 0, 100);
        }
        return;
    case 77:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 23;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(235);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 78:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 10;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[328], 0, 100);
        }
        return;
    case 79:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 23;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(237);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 80:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 11;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[325], 0, 100);
            mMYINFO.mCheckZone175TypeGateEffect1[4] = 1;
            mMYINFO.mCheckZone175TypeGateEffect1[5] = 1;
        }
        return;
    case 81:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 12;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[325], 0, 100);
            mMYINFO.mCheckZone175TypeGateEffect2[4] = 1;
            mMYINFO.mCheckZone175TypeGateEffect2[5] = 1;
        }
        return;
    case 82:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 13;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[331], 0, 100);
        }
        return;
    case 84:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 23;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(235);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 85:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 14;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[328], 0, 100);
        }
        return;
    case 86:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 23;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(237);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 87:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 15;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[326], 0, 100);
            mMYINFO.mCheckZone175TypeGateEffect1[6] = 1;
            mMYINFO.mCheckZone175TypeGateEffect1[7] = 1;
        }
        return;
    case 88:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 16;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[326], 0, 100);
            mMYINFO.mCheckZone175TypeGateEffect2[6] = 1;
            mMYINFO.mCheckZone175TypeGateEffect2[7] = 1;
        }
        return;
    case 89:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 17;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[332], 0, 100);
        }
        return;
    case 91:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 23;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(235);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 92:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 18;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[328], 0, 100);
        }
        return;
    case 93:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 23;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(237);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 94:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 19;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[327], 0, 100);
            mMYINFO.mCheckZone175TypeGateEffect1[8] = 1;
            mMYINFO.mCheckZone175TypeGateEffect1[9] = 1;
        }
        return;
    case 95:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 20;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[327], 0, 100);
            mMYINFO.mCheckZone175TypeGateEffect2[8] = 1;
            mMYINFO.mCheckZone175TypeGateEffect2[9] = 1;
        }
        return;
    case 96:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 21;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[333], 0, 100);
        }
        return;
    case 98:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 23;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(235);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 99:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 22;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[328], 0, 100);
        }
        return;
    case 100:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 23;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(237);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown(0);
        }
        return;
    case 101:
        memcpy(&tAvatarName, r->tData, 13);
        memcpy(&tGuildName, &r->tData[13], 13);
        tstr = mMESSAGE.Return(396);
        tstr2 = mMESSAGE.Return(395);
        sprintf(Buffer, "[%s]%s [%s]%s", tAvatarName, tstr2, tGuildName, tstr);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;

    case 102:
        memcpy(&tAvatarName, r->tData, 13);
        memcpy(&tGuildName, &r->tData[13], 13);
        memcpy(&tValue, &r->tData[26], sizeof(tValue));
        memcpy(&tValue2, &r->tData[30], sizeof(tValue2));
        if (!strcmp(mMYINFO.mAvatarInfo.aName, tAvatarName))
        {
            strcpy(mMYINFO.mAvatarInfo.aGuildName, tGuildName);
            mMYINFO.mAvatarInfo.aGuildRole = 2;
            strcpy(mMYINFO.mAvatarInfo.aCallName, "");
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildName, tGuildName);
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildRole = 2;
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aCallName, "");
            mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort = tValue;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildBuff = tValue2;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
        }
        tstr = mMESSAGE.Return(415);
        tstr2 = mMESSAGE.Return(395);
        sprintf(Buffer, "[%s]%s [%s]%s", tAvatarName, tstr2, tGuildName, tstr);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 103:
        memcpy(&tAvatarName, r->tData, 13);
        memcpy(&tGuildName, &r->tData[13], 13);
        tstr = mMESSAGE.Return(482);
        tstr2 = mMESSAGE.Return(395);
        sprintf(Buffer, "[%s]%s [%s]%s", tAvatarName, tstr2, tGuildName, tstr);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 104:
        memcpy(&tGuildName, r->tData, 13);
        tstr = mMESSAGE.Return(563);
        sprintf(Buffer, "[%s]%s", tGuildName, tstr);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 105:
        memcpy(&tGuildName, r->tData, 13);
        tstr = mMESSAGE.Return(480);
        sprintf(Buffer, "[%s]%s", tGuildName, tstr);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 106:
        memcpy(&tGuildName, r->tData, 13);
        tstr = mMESSAGE.Return(564);
        sprintf(Buffer, "[%s]%s", tGuildName, tstr);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 107:
        memcpy(&tAvatarName, r->tData, 13);
        memcpy(&tGuildName, &r->tData[13], 13);
        if (!strcmp(mMYINFO.mAvatarInfo.aName, tAvatarName))
        {
            strcpy(mMYINFO.mAvatarInfo.aGuildName, "");
            mMYINFO.mAvatarInfo.aGuildRole = 0;
            strcpy(mMYINFO.mAvatarInfo.aCallName, "");
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildName, "");
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildRole = 0;
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aCallName, "");
            mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildBuff = 0;
        }
        tstr = mMESSAGE.Return(481);
        tstr2 = mMESSAGE.Return(395);
        sprintf(Buffer, "[%s]%s [%s]%s", tAvatarName, tstr2, tGuildName, tstr);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 108:
        memcpy(&tAvatarName, r->tData, 13);
        memcpy(&tGuildName, &r->tData[13], 13);
        memcpy(&tValue, &r->tData[26], sizeof(tValue));
        if (!strcmp(mMYINFO.mAvatarInfo.aName, tAvatarName))
        {
            mMYINFO.mAvatarInfo.aGuildRole = tValue;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildRole = tValue;
        }
        if (tValue == 1)
            tstr = mMESSAGE.Return(554);
        else
            tstr = mMESSAGE.Return(555);
        tstr2 = mMESSAGE.Return(395);
        sprintf(Buffer, "[%s]%s [%s]%s", tAvatarName, tstr2, tGuildName, tstr);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 109:
        memcpy(&tAvatarName, r->tData, 13);
        memcpy(&tGuildName, &r->tData[13], 13);
        memcpy(&tCallName, &r->tData[26], 5);
        if (!strcmp(mMYINFO.mAvatarInfo.aName, tAvatarName))
        {
            strcpy(mMYINFO.mAvatarInfo.aCallName, tCallName);
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aCallName, tCallName);
        }
        if (!strcmp(tCallName, ""))
            tstr = mMESSAGE.Return(562);
        else
            tstr = mMESSAGE.Return(561);
        tstr2 = mMESSAGE.Return(395);
        sprintf(Buffer, "[%s]%s [%s]%s", tAvatarName, tstr2, tGuildName, tstr);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;

    case 110:
        memcpy(&tLabyIndex1, r->tData, sizeof(tLabyIndex1));
        memcpy(&tLabyIndex2, &r->tData[4], sizeof(tLabyIndex2));
        mPLAY.mWorldInfo.mZone175TypeState[tLabyIndex1][tLabyIndex2] = 0;
        tZoneNumber = mZONEMAININFO.ReturnZone175TypeZoneNumber(tLabyIndex1, tLabyIndex2);
        mZONEMAININFO.CheckZone175TypeZoneNumber1(tZoneNumber);
        return;

    case 111:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[4], 13);
        switch (tTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(1672);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(1673);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(1674);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(1675);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        default:
            break;
        }
        tstr = mMESSAGE.Return(1671);
        sprintf(Buffer, "%s %s %s", tempbuffer, tAvatarName, tstr);
        mBOARDUI.Set(0, 0, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;

    case 112:
        memcpy(&tGuildName, r->tData, 13);
        memcpy(&tValue, &r->tData[13], sizeof(tValue));
        mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort = tValue;
        tstr = mMESSAGE.Return(tValue + 1719);
        mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        return;

    case 113:
        memcpy(&tGuildName, r->tData, 13);
        memcpy(&tValue, &r->tData[13], sizeof(tValue));
        if (!strcmp(mMYINFO.mAvatarInfo.aGuildName, tGuildName))
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildBuff = 1;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aBuffSort = tValue;
        }
        return;

    case 114:
        memcpy(&tAvatarName, &r->tData[0], MAX_AVATAR_NAME_LENGTH);
        memcpy(&tGuildName, &r->tData[MAX_AVATAR_NAME_LENGTH], MAX_AVATAR_NAME_LENGTH);
        memcpy(&tOldGuildMaster, &r->tData[MAX_AVATAR_NAME_LENGTH + MAX_AVATAR_NAME_LENGTH], MAX_AVATAR_NAME_LENGTH);
        if (!strcmp(mMYINFO.mAvatarInfo.aName, tAvatarName))
        {
            mMYINFO.mAvatarInfo.aGuildRole = 0;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildRole = 0;
            strcpy(mMYINFO.mAvatarInfo.aCallName, "");
            strcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aCallName, "");
            //mMYINFO.mAvatarInfo.aDoubleKillNumTime2 = 0;
        }
        if (!strcmp(mMYINFO.mAvatarInfo.aName, tOldGuildMaster))
        {
            mMYINFO.mAvatarInfo.aGuildRole = 2;
            mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildRole = 2;
        }
        return;

    case 115:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[4], 13);
        switch (tTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(1672);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(1673);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(1674);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(1675);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        default:
            break;
        }
        tstr = mMESSAGE.Return(2322);
        sprintf(Buffer, "%s %s %s", tempbuffer, tAvatarName, tstr);
        mBOARDUI.Set(0, 0, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;

    case 201:
        memcpy(&tValue, r->tData, sizeof(tValue));
        tZoneNumber = 194;
        GSOUND::Play(&mGDATA.mSOUND_5[334], 0, 100);
        tstr = mMESSAGE.Return(231);
        tstr2 = mZONENAME.Return(tZoneNumber);
        sprintf(Buffer, "%s [%d]%s", tstr2, tValue, tstr);
        mBASICUI.Insert1(Buffer, 1);
        return;
    case 202:
        mPLAY.mWorldInfo.mZone194State = 1;
        GSOUND::Play(&mGDATA.mSOUND_5[335], 0, 100);
        tstr = mMESSAGE.Return(232);
        tstr2 = mZONENAME.Return(194);
        sprintf(Buffer, "%s %s", tstr2, tstr);
        mBASICUI.Insert1(Buffer, 1);
        return;
    case 203:
        mPLAY.mWorldInfo.mZone194State = 2;
        GSOUND::Play(&mGDATA.mSOUND_5[336], 0, 100);
        tstr = mMESSAGE.Return(233);
        tstr2 = mZONENAME.Return(194);
        sprintf(Buffer, "%s %s", tstr2, tstr);
        mBASICUI.Insert1(Buffer, 1);
        return;
    case 204:
        mPLAY.mWorldInfo.mZone194State = 3;
        tZoneNumber = 194;
        if (mMYINFO.mPresentZoneNumber == 194)
        {
            tstr = mMESSAGE.Return(234);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            GSOUND::Play(&mGDATA.mSOUND_5[338], 0, 100);
            mMYINFO.mCheckZone194BattleOpenGateEffect = 1;
            mMYINFO.mZone194BattleOpenGateEffectFrame = 0.0;
            mMYINFO.mZone194BattleRemainTime = 600;
            tstr = mMESSAGE.Return(843);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s [%d]%s", tstr2, mMYINFO.mZone194BattleRemainTime, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mMYINFO.mZone194BattleInfo[0] = 0;
            mMYINFO.mZone194BattleInfo[1] = 0;
            mMYINFO.mZone194BattleInfo[2] = 0;
            mMYINFO.mZone194BattleInfo[3] = 0;
        }
        return;
    case 205:
        mPLAY.mWorldInfo.mZone194State = 5;
        tZoneNumber = 194;
        return;

    case 206:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        mPLAY.mWorldInfo.mZone194State = 4;
        tZoneNumber = 194;
        GSOUND::Play(&mGDATA.mSOUND_5[339], 0, 100);
        if (tTribe == -1)
        {
            tstr = mMESSAGE.Return(845);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
        }
        else
        {
            tAllyTribe = mPLAY.ReturnAlliance( tTribe);
            if (tAllyTribe == -1)
            {
                tstr = mMESSAGE.Return(236);
                tstr2 = mPLAY.ReturnTribeName(tTribe);
                tstr3 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s [%s] %s", tstr3, tstr2, tstr);
            }
            else
            {
                tstr = mMESSAGE.Return(236);
                tstr2 = mPLAY.ReturnTribeName(tAllyTribe);
                tstr3 = mPLAY.ReturnTribeName(tTribe);
                tstr4 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s [%s],[%s] %s", tstr4, tstr3, tstr2, tstr);
            }
        }
        mBASICUI.Insert1(Buffer, 1);
        /*if (tZoneNumber == mMYINFO.mPresentZoneNumber && mMYINFO.mAvatarInfo.aTribe != tTribe && mMYINFO.mAvatarInfo.aTribe != tAllyTribe && mMYINFO.mAvatarInfo.aVisibleState)
        {
            mPLAY.ReturnToTownFromZone194();
        }*/
        return;

    case 207:
        mPLAY.mWorldInfo.mZone194State = 5;
        tZoneNumber = 194;
        if (mMYINFO.mPresentZoneNumber == 194)
        {
            tstr = mMESSAGE.Return(237);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            if (mMYINFO.mAvatarInfo.aVisibleState)
            {
                mPLAY.ReturnToTownFromZone194();
            }
        }
        return;

    case 208:
        mPLAY.mWorldInfo.mZone194State = 0;
        tZoneNumber = 194;
        return;

    case 301:
        memcpy(&tValue, r->tData, sizeof(tValue));
        memcpy(&tValue2, &r->tData[4], sizeof(tValue2));
        switch (tValue)
        {
        case 21:
            mPLAY.mWorldInfo.mTribeGeneralExperienceUpRatioInfo[0] = (float)tValue2 * 0.1000000014901161;
            break;
        case 22:
            mPLAY.mWorldInfo.mTribeGeneralExperienceUpRatioInfo[1] = (float)tValue2 * 0.1000000014901161;
            break;
        case 23:
            mPLAY.mWorldInfo.mTribeGeneralExperienceUpRatioInfo[2] = (float)tValue2 * 0.1000000014901161;
            break;
        case 24:
            mPLAY.mWorldInfo.mTribeGeneralExperienceUpRatioInfo[3] = (float)tValue2 * 0.1000000014901161;
            break;
        case 31:
            mPLAY.mWorldInfo.mTribeItemDropUpRatioInfo[0] = (float)tValue2 * 0.1000000014901161;
            break;
        case 32:
            mPLAY.mWorldInfo.mTribeItemDropUpRatioInfo[1] = (float)tValue2 * 0.1000000014901161;
            break;
        case 33:
            mPLAY.mWorldInfo.mTribeItemDropUpRatioInfo[2] = (float)tValue2 * 0.1000000014901161;
            break;
        case 34:
            mPLAY.mWorldInfo.mTribeItemDropUpRatioInfo[3] = (float)tValue2 * 0.1000000014901161;
            break;
        case 41:
            mPLAY.mWorldInfo.mTribeItemDropUpRatioForMyoungInfo[0] = (float)tValue2 * 0.1000000014901161;
            break;
        case 42:
            mPLAY.mWorldInfo.mTribeItemDropUpRatioForMyoungInfo[1] = (float)tValue2 * 0.1000000014901161;
            break;
        case 43:
            mPLAY.mWorldInfo.mTribeItemDropUpRatioForMyoungInfo[2] = (float)tValue2 * 0.1000000014901161;
            break;
        case 44:
            mPLAY.mWorldInfo.mTribeItemDropUpRatioForMyoungInfo[3] = (float)tValue2 * 0.1000000014901161;
            break;
        case 51:
            mPLAY.mWorldInfo.mTribeKillOtherTribeAddValueInfo[0] = tValue2;
            break;
        case 52:
            mPLAY.mWorldInfo.mTribeKillOtherTribeAddValueInfo[1] = tValue2;
            break;
        case 53:
            mPLAY.mWorldInfo.mTribeKillOtherTribeAddValueInfo[2] = tValue2;
            break;
        case 54:
            mPLAY.mWorldInfo.mTribeKillOtherTribeAddValueInfo[3] = tValue2;
            break;
        default:
            return;
        }
        return;
    case 302:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        mPLAY.mWorldInfo.mTribeMasterCallAbility[tTribe] = tValue;
        strcpy(Buffer, "");
        switch (tTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(75);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(76);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(77);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(78);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        switch (tValue)
        {
        case 0:
            tstr = mMESSAGE.Return(934);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(930);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(931);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(932);
            sprintf(tempbuffer, "%s", tstr);
            break;
        case 4:
            tstr = mMESSAGE.Return(933);
            sprintf(tempbuffer, "%s", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;

    case 401:
        tstr = mMESSAGE.Return(1139);
        sprintf(Buffer, "%s", tstr);
        mBOARDUI.Set(2, 2, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 402:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        tZoneNumber = mZONEMAININFO.Return267TypeZoneNumber(tIndex);
        if (mZONEMAININFO.Check267TypeZoneNumber1(tZoneNumber))
        {
        LABEL_515:
            GSOUND::Play(&mGDATA.mSOUND_5[226], 0, 100);
            tstr = mMESSAGE.Return(231);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s [%d]%s", tstr2, tValue, tstr);
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 403:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone267TypeState[tIndex] = 1;
        tZoneNumber = mZONEMAININFO.Return267TypeZoneNumber(tIndex);
        if (mZONEMAININFO.Check267TypeZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[259], 0, 100);
            tstr = mMESSAGE.Return(232);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            if (mGAMEOPTION.tAcceptWar == 1)
            {
                mMYINFO.mLevelBattleZoneNumberForMove = tZoneNumber;
                tstr = mMESSAGE.Return(242);
                tstr2 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s%s", tstr2, tstr);
                mCBOXUI.Set(4, Buffer, "");
            }
        }
        return;
    case 404:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone267TypeState[tIndex] = 2;
        tZoneNumber = mZONEMAININFO.Return267TypeZoneNumber(tIndex);
        if (mZONEMAININFO.Check267TypeZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[259], 0, 100);
            tstr = mMESSAGE.Return(233);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 405:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        mPLAY.mWorldInfo.mZone267TypeState[tIndex] = 3;
        tZoneNumber = mZONEMAININFO.Return267TypeZoneNumber(tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[227], 0, 100);
            tstr = mMESSAGE.Return(234);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mMYINFO.mCheck267TypeOpenGateEffect = 1;
            mMYINFO.m267TypeOpenGateEffectFrame = 0.0;
            mMYINFO.m267TypeRemainTime = tValue / 2;
            tstr = mMESSAGE.Return(843);
            sprintf(Buffer, "[%d]%s", mMYINFO.m267TypeRemainTime, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mMYINFO.mCheck267TypeInfo = 1;
            mMYINFO.m267TypeInfo[0] = 0;
            mMYINFO.m267TypeInfo[1] = 0;
            mMYINFO.m267TypeInfo[2] = 0;
            mMYINFO.m267TypeInfo[3] = 0;
        }
        return;
    case 406:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone267TypeState[tIndex] = 5;
        tZoneNumber = mZONEMAININFO.Return267TypeZoneNumber(tIndex);
        mZONEMAININFO.Check267TypeZoneNumber1(tZoneNumber);
        return;
    case 407:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone267TypeState[tIndex] = 5;
        tZoneNumber = mZONEMAININFO.Return267TypeZoneNumber(tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(860);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown( 0);
        }
        return;
    case 408:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tTribe, &r->tData[4], sizeof(tTribe));
        mPLAY.mWorldInfo.mZone267TypeState[tIndex] = 4;
        tZoneNumber = mZONEMAININFO.Return267TypeZoneNumber(tIndex);
        if (mZONEMAININFO.Check267TypeZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[228], 0, 100);
            tAllyTribe = mPLAY.ReturnAlliance( tTribe);
            if (tAllyTribe == -1)
            {
                tstr = mMESSAGE.Return(236);
                tstr2 = mPLAY.ReturnTribeName(tTribe);
                tstr3 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s [%s] %s", tstr3, tstr2, tstr);
            }
            else
            {
                tstr = mMESSAGE.Return(236);
                tstr2 = mPLAY.ReturnTribeName(tAllyTribe);
                tstr3 = mPLAY.ReturnTribeName(tTribe);
                tstr4 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s [%s],[%s] %s", tstr4, tstr3, tstr2, tstr);
            }
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 409:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone267TypeState[tIndex] = 5;
        tZoneNumber = mZONEMAININFO.Return267TypeZoneNumber(tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(237);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown( 0);
        }
        return;

    case 410:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone267TypeState[tIndex] = 0;
        tZoneNumber = mZONEMAININFO.Return267TypeZoneNumber(tIndex);
        mZONEMAININFO.Check267TypeZoneNumber1(tZoneNumber);
        return;

    case 411:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tAvatarName, &r->tData[4], MAX_AVATAR_NAME_LENGTH);
        mPLAY.mWorldInfo.mLifeOrDeathState[tIndex] = 1;
        GSOUND::Play(&mGDATA.mSOUND_5[362], 0, 100);
        tZoneNumber = mZONEMAININFO.Return241TypeZoneNumber(tIndex);
        tstr = mMESSAGE.Return(1244);
        tstr2 = mZONENAME.Return(tZoneNumber);
        sprintf(Buffer, "%s [%s] %s", tstr2, tAvatarName, tstr);
        mBASICUI.Insert1(Buffer, 1);
        return;

    case 412:
    case 413:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tAvatarName, &r->tData[4], 13);
        mPLAY.mWorldInfo.mLifeOrDeathState[tIndex] = 2;
        GSOUND::Play(&mGDATA.mSOUND_5[364], 0, 100);
        tZoneNumber = mZONEMAININFO.Return241TypeZoneNumber(tIndex);
        tstr = mMESSAGE.Return(1245); 
        tstr2 = mZONENAME.Return(tZoneNumber);
        sprintf(Buffer, "%s [%s] %s", tstr2, tAvatarName, tstr);
        mBASICUI.Insert1(Buffer, 1);
        return;

    case 414:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tAvatarName, &r->tData[4], 13);
        mPLAY.mWorldInfo.mLifeOrDeathState[tIndex] = 2;
        GSOUND::Play(&mGDATA.mSOUND_5[363], 0, 100);
        tZoneNumber = mZONEMAININFO.Return241TypeZoneNumber(tIndex);
        tstr = mMESSAGE.Return(1246); 
        tstr2 = mZONENAME.Return(tZoneNumber);
        sprintf(Buffer, "%s [%s] %s", tstr2, tAvatarName, tstr);
        mBASICUI.Insert1(Buffer, 1);
        return;

    case 415:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mLifeOrDeathState[tIndex] = 0;
        tZoneNumber = mZONEMAININFO.Return241TypeZoneNumber(tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(237);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown( 0);
        }
        return;

    case 416:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone270TypeState[tIndex] = 1;
        return;
    case 417:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone270TypeState[tIndex] = 0;
        return;
    case 418:
        memcpy(&tValue, r->tData, sizeof(tValue));
        if (tValue <= 0)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[373], 0, 100);
            tstr = mMESSAGE.Return(1403);
            sprintf(Buffer, "%s", tstr);
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[372], 0, 100);
            tstr = mMESSAGE.Return(1402);
            sprintf(Buffer, "[%d]%s", tValue, tstr);
        }
        mBASICUI.Insert1(Buffer, 1);
        return;

    case 419:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[4], 13);
        strcpy(Buffer, "");
        switch (tTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(75);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(76);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(77);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(78);
            sprintf(tempbuffer, "[%s]", tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        tstr = mMESSAGE.Return(1444);
        sprintf(tempbuffer, " [%s]%s", tAvatarName, tstr);
        strcat(Buffer, tempbuffer);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 420:
        memcpy(&tValue, r->tData, sizeof(tValue));
        tstr = mMESSAGE.Return(1475);
        sprintf(Buffer, "[%d]%s", tValue, tstr);
        mBOARDUI.Set(3, 1, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 421:
        mPLAY.mWorldInfo.mFortressOfLostSoulState = 1;
        tstr = mMESSAGE.Return(1476);
        sprintf(Buffer, "%s", tstr);
        mBOARDUI.Set(3, 2, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        if (mMYINFO.mPresentZoneNumber == 291)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[387], 0, 100);
            mMYINFO.mCheckZone291Effect = 1;
            mMYINFO.mZone291EffectFrame = 0.0;
            tstr = mMESSAGE.Return(1477);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        }
        return;

    case 422:
        mPLAY.mWorldInfo.mFortressOfLostSoulState = 0;
        strcpy(mPLAY.mWorldInfo.mHoldingGuild, mPLAY.mWorldInfo.mChallangeGuild);
        strcpy(mPLAY.mWorldInfo.mChallangeGuild, "");
        tstr = mMESSAGE.Return(1478);
        sprintf(Buffer, "[%s] %s", mPLAY.mWorldInfo.mHoldingGuild, tstr);
        mBOARDUI.Set(3, 4, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        if (mMYINFO.mPresentZoneNumber == 291 && strcmp(mPLAY.mWorldInfo.mHoldingGuild, mMYINFO.mAvatarInfo.aGuildName))
        {
            mPLAY.ReturnToTown( 0);
        }
        return;

    case 423:
        memcpy(&tValue, r->tData, sizeof(tValue));
        if (mMYINFO.mPresentZoneNumber == 291)
        {
            tstr = mMESSAGE.Return(1479);
            sprintf(Buffer, "[%d]%s", tValue, tstr);
            mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        }
        return;
    case 424:
        mPLAY.mWorldInfo.mFortressOfLostSoulState = 0;
        strcpy(mPLAY.mWorldInfo.mChallangeGuild, "");
        tstr = mMESSAGE.Return(1480);
        sprintf(Buffer, "[%s] %s", mPLAY.mWorldInfo.mHoldingGuild, tstr);
        mBOARDUI.Set(3, 4, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        if (mMYINFO.mPresentZoneNumber == 291 && strcmp(mPLAY.mWorldInfo.mHoldingGuild, mMYINFO.mAvatarInfo.aGuildName))
        {
            mPLAY.ReturnToTown( 0);
        }
        return;

    case 425:
        memcpy(&tValue, r->tData, sizeof(tValue));
        if (!strcmp(mPLAY.mWorldInfo.mHoldingGuild, mMYINFO.mAvatarInfo.aGuildName))
        {
            tstr = mMESSAGE.Return(1498);
            sprintf(Buffer, "[%d]%s", tValue, tstr);
            mBOARDUI.Set(3, 1, Buffer, "");
            mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        }
        return;
    case 426:
        if (!strcmp(mPLAY.mWorldInfo.mHoldingGuild, mMYINFO.mAvatarInfo.aGuildName))
        {
            tstr = mMESSAGE.Return(1499);
            sprintf(Buffer, "%s", tstr);
            mBOARDUI.Set(3, 2, Buffer, "");
            mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
            if (mMYINFO.mPresentZoneNumber == 291)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[389], 0, 100);
                tstr = mMESSAGE.Return(1477);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            }
        }
        return;

    case 427:
        if (!strcmp(mPLAY.mWorldInfo.mHoldingGuild, mMYINFO.mAvatarInfo.aGuildName))
        {
            tstr = mMESSAGE.Return(1500);
            sprintf(Buffer, "[%s] %s", mPLAY.mWorldInfo.mHoldingGuild, tstr);
            mBOARDUI.Set(3, 4, Buffer, "");
            mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        }
        return;
    case 428:
        if (!strcmp(mPLAY.mWorldInfo.mHoldingGuild, mMYINFO.mAvatarInfo.aGuildName))
        {
            tstr = mMESSAGE.Return(1501);
            sprintf(Buffer, "[%s] %s", mPLAY.mWorldInfo.mHoldingGuild, tstr);
            mBOARDUI.Set(3, 4, Buffer, "");
            mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        }
        return;
    case 429:
        memcpy(&tValue, r->tData, sizeof(tValue));
        if (mMYINFO.mPresentZoneNumber == 291)
        {
            tstr = mMESSAGE.Return(1479);
            sprintf(Buffer, "[%d]%s", tValue, tstr);
            mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        }
        return;

    case 600:
        memcpy(&tValue, r->tData, sizeof(tValue));
        memcpy(&tValue2, &r->tData[4], sizeof(tValue2));
        memcpy(&tValue3, &r->tData[8], sizeof(tValue3));
        memcpy(&tAvatarName, &r->tData[12], 13);
        if (tValue3 < 100 || tValue3 > 112)
        {
            if (tValue3 < 113 || tValue3 > 145)
            {
                if (tValue3 >= 146 && tValue3 <= 157)
                    strcpy(mPLAY.mTribeInfo.mValleyOfDeceasedRegistrationGod[tValue][tValue2], tAvatarName);
            }
            else
            {
                strcpy(mPLAY.mTribeInfo.mValleyOfDeceasedRegistrationMaster[tValue][tValue2], tAvatarName);
            }
        }
        else
        {
            strcpy(mPLAY.mTribeInfo.mValleyOfDeceasedRegistrationLevel[tValue][tValue2], tAvatarName);
        }
        return;

    case 601:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mValleyOfDeacesedState[tIndex] = 0;
        mPLAY.mWorldInfo.mValleyOfDeacesedStartState[tIndex] = 1;
        GSOUND::Play(&mGDATA.mSOUND_5[259], 0, 100);
        if (tIndex)
        {
            if (tIndex == 1)
            {
                if (mMYINFO.mAvatarInfo.aLevel1 < 113 || mMYINFO.mAvatarInfo.aLevel1 > 145 || mMYINFO.mAvatarInfo.aLevel2)
                {
                    return;
                }
            }
            else if (tIndex != 2 || mMYINFO.mAvatarInfo.aLevel2 <= 0)
            {
                return;
            }
        }
        else if (mMYINFO.mAvatarInfo.aLevel1 < 100 || mMYINFO.mAvatarInfo.aLevel1 > 112)
        {
            return;
        }
        mMYINFO.mHoisundoZoneNumberForMove = (tIndex + 297);
        tstr = mMESSAGE.Return(232);
        tstr2 = mZONENAME.Return(mMYINFO.mHoisundoZoneNumberForMove);
        sprintf(Buffer, "%s %s", tstr2, tstr);
        mBASICUI.Insert1(Buffer, 1);
        if (mGAMEOPTION.tAcceptWar == 1 && !mZONEMAININFO.CheckPossibleEnterHoisundoName(mMYINFO.mHoisundoZoneNumberForMove))
        {
            tstr = mMESSAGE.Return(1757);
            sprintf(Buffer, "%s", tstr);
            mCBOXUI.Set(47, Buffer, "");
        }
        return;
    case 602:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        mPLAY.mWorldInfo.mValleyOfDeacesedState[tIndex] = 1;
        mPLAY.mWorldInfo.mValleyOfDeacesedStartState[tIndex] = 0;
        if (tIndex)
        {
            if (tIndex == 1)
            {
                if (mMYINFO.mAvatarInfo.aLevel1 < 113 || mMYINFO.mAvatarInfo.aLevel1 > 145 || mMYINFO.mAvatarInfo.aLevel2)
                {
                    return;
                }
            }
            else if (tIndex != 2 || mMYINFO.mAvatarInfo.aLevel2 <= 0)
            {
                return;
            }
        }
        else if (mMYINFO.mAvatarInfo.aLevel1 < 100 || mMYINFO.mAvatarInfo.aLevel1 > 112)
        {
            return;
        }
        tstr = mMESSAGE.Return(1838);
        sprintf(Buffer, "%s", tstr);
        mBASICUI.Insert1(Buffer, 1);
        if (mMYINFO.mPresentZoneNumber == tIndex + 297)
        {
            tstr = mMESSAGE.Return(1839);
            sprintf(Buffer, "[%d]%s", tValue, tstr);
            mBASICUI.Insert1(Buffer, 1);
        }
        return;

    case 603:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mValleyOfDeacesedState[tIndex] = 2;
        if (mMYINFO.mPresentZoneNumber == tIndex + 297)
        {
            tstr = mMESSAGE.Return(1764);
            sprintf(Buffer, "%s", tstr);
            mBASICUI.Insert1(Buffer, 1);
            GSOUND::Play(&mGDATA.mSOUND_5[323], 0, 100);
            mMYINFO.mCheckZone297TypeGateEffect1[0] = 1;
            mMYINFO.mCheckZone297TypeGateEffect1[1] = 1;
            mMYINFO.mCheckZone297TypeGateEffect1[2] = 1;
            mMYINFO.mCheckZone297TypeGateEffect1[3] = 1;
            mMYINFO.mCheck297TypeInfo = 1;
            mMYINFO.mZone297TypeMonsterInfo[0] = 0;
            mMYINFO.mZone297TypeMonsterInfo[1] = 0;
            mMYINFO.mZone297TypeMonsterInfo[2] = 0;
            mMYINFO.mZone297TypeMonsterInfo[3] = 0;
        }
        return;

    case 604:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mValleyOfDeacesedState[tIndex] = 5;
        mPLAY.ClearHoisundoName(tIndex);
        if (mMYINFO.mPresentZoneNumber == tIndex + 297)
        {
            mMYINFO.mCheckZone297TypeGateEffect1[0] = 0;
            mMYINFO.mCheckZone297TypeGateEffect1[1] = 0;
            mMYINFO.mCheckZone297TypeGateEffect1[2] = 0;
            mMYINFO.mCheckZone297TypeGateEffect1[3] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[0] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[1] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[2] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[3] = 0;
        }
        return;

    case 605:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mValleyOfDeacesedState[tIndex] = 5;
        mPLAY.ClearHoisundoName( tIndex);
        if (mMYINFO.mPresentZoneNumber == tIndex + 297)
        {
            tstr = mMESSAGE.Return(235);
            sprintf(Buffer, "%s", tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown( 0);
            mMYINFO.mCheckZone297TypeGateEffect1[0] = 0;
            mMYINFO.mCheckZone297TypeGateEffect1[1] = 0;
            mMYINFO.mCheckZone297TypeGateEffect1[2] = 0;
            mMYINFO.mCheckZone297TypeGateEffect1[3] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[0] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[1] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[2] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[3] = 0;
        }
        return;
    case 606:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tTribe, &r->tData[4], sizeof(tTribe));
        mPLAY.mWorldInfo.mValleyOfDeacesedState[tIndex] = 3;
        if (mMYINFO.mPresentZoneNumber == tIndex + 297)
        {
            switch (tTribe)
            {
            case 0:
                tstr = mMESSAGE.Return(1758);
                sprintf(Buffer, "%s", tstr);
                goto LABEL_604;
            case 1:
                tstr = mMESSAGE.Return(1759);
                sprintf(Buffer, "%s", tstr);
                goto LABEL_604;
            case 2:
                tstr = mMESSAGE.Return(1760);
                sprintf(Buffer, "%s", tstr);
                goto LABEL_604;
            case 3:
                tstr = mMESSAGE.Return(1761);
                sprintf(Buffer, "%s", tstr);
            LABEL_604:
                mBASICUI.Insert1(Buffer, 1);
                if (mMYINFO.mAvatarInfo.aTribe == tTribe)
                    mMYINFO.mCheckZone297TypeGateEffect2[tTribe] = 1;
                else
                    mPLAY.ReturnToTown( 0);
                mMYINFO.mZone297TypeMonsterInfo[0] = 0;
                mMYINFO.mZone297TypeMonsterInfo[1] = 0;
                mMYINFO.mZone297TypeMonsterInfo[2] = 0;
                mMYINFO.mZone297TypeMonsterInfo[3] = 0;
                break;
            default:
                return;
            }
        }
        return;

    case 607:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mValleyOfDeacesedState[tIndex] = 4;
        if (mMYINFO.mPresentZoneNumber == tIndex + 297)
        {
            mMYINFO.mCheck297TypeInfo = 0;
        }
        return;
    case 608:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mValleyOfDeacesedState[tIndex] = 5;
        mPLAY.ClearHoisundoName( tIndex);
        if (mMYINFO.mPresentZoneNumber == tIndex + 297)
        {
            tstr = mMESSAGE.Return(1844);
            sprintf(Buffer, "%s", sprintf);
            mBASICUI.Insert1(Buffer, 1);
            tValue = mPLAY.ReturnHoisundoReward(tIndex);
            tstr2 = mMESSAGE.Return(1845);
            sprintf(Buffer, tstr2, tValue);
            mBASICUI.Insert1(Buffer, 1);
            mMYINFO.mCheckZone297TypeGateEffect1[0] = 0;
            mMYINFO.mCheckZone297TypeGateEffect1[1] = 0;
            mMYINFO.mCheckZone297TypeGateEffect1[2] = 0;
            mMYINFO.mCheckZone297TypeGateEffect1[3] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[0] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[1] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[2] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[3] = 0;
            mPLAY.ReturnToTown( 0);
        }
        return;

    case 609:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mValleyOfDeacesedState[tIndex] = 0;
        if (tIndex)
        {
            if (tIndex == 1)
            {
                if (mMYINFO.mAvatarInfo.aLevel1 >= 113 && mMYINFO.mAvatarInfo.aLevel1 <= 145 && !mMYINFO.mAvatarInfo.aLevel2)
                {
                    tstr = mMESSAGE.Return(1846);
                    sprintf(Buffer, "%s", tstr);
                    mBASICUI.Insert1(Buffer, 1);
                    mBOARDUI.Set(0, 0, Buffer, "");
                }
            }
            else
            {
                if (tIndex != 2)
                {
                    return;
                }
                if (mMYINFO.mAvatarInfo.aLevel2 > 0)
                {
                    tstr = mMESSAGE.Return(1847);
                    sprintf(Buffer, "%s", tstr);
                    mBASICUI.Insert1(Buffer, 1);
                    mBOARDUI.Set(0, 0, Buffer, "");
                }
            }
        }
        else if (mMYINFO.mAvatarInfo.aLevel1 >= 100 && mMYINFO.mAvatarInfo.aLevel1 <= 112)
        {
            tstr = mMESSAGE.Return(1762);
            sprintf(Buffer, "%s", tstr);
            mBASICUI.Insert1(Buffer, 1);
            mBOARDUI.Set(0, 0, Buffer, "");
        }
        if (mMYINFO.mPresentZoneNumber == tIndex + 297)
        {
            mMYINFO.mCheckZone297TypeGateEffect1[0] = 0;
            mMYINFO.mCheckZone297TypeGateEffect1[1] = 0;
            mMYINFO.mCheckZone297TypeGateEffect1[2] = 0;
            mMYINFO.mCheckZone297TypeGateEffect1[3] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[0] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[1] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[2] = 0;
            mMYINFO.mCheckZone297TypeGateEffect2[3] = 0;
            mPLAY.ReturnToTown( 0);
        }
        return;

    case 610:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        if (tIndex)
        {
            if (tIndex == 1)
            {
                if (mMYINFO.mAvatarInfo.aLevel1 >= 113 && mMYINFO.mAvatarInfo.aLevel1 <= 145 && !mMYINFO.mAvatarInfo.aLevel2)
                {
                    tstr = mMESSAGE.Return(1843);
                    sprintf(Buffer, tstr, tValue);
                    mBASICUI.Insert1(Buffer, 1);
                    return;
                }
            }
            else if (tIndex == 2 && mMYINFO.mAvatarInfo.aLevel2 > 0)
            {
                tstr = mMESSAGE.Return(1843);
                sprintf(Buffer, tstr, tValue);
                mBASICUI.Insert1(Buffer, 1);
                return;
            }
        }
        else if (mMYINFO.mAvatarInfo.aLevel1 >= 100 && mMYINFO.mAvatarInfo.aLevel1 <= 112)
        {
            tstr = mMESSAGE.Return(1843);
            sprintf(Buffer, tstr, tValue);
            mBASICUI.Insert1(Buffer, 1);
            return;
        }
        return;

    case 611:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        if (mMYINFO.mAvatarInfo.aTribe == tTribe)
        {
            tstr = mMESSAGE.Return(1859);
            sprintf(Buffer, "%d %s", tValue, tstr);
            mBOARDUI.Set(0, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 612:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        if (mMYINFO.mAvatarInfo.aTribe == tTribe)
        {
            tstr = mMESSAGE.Return(1860);
            sprintf(Buffer, tstr);
            mBOARDUI.Set(0, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 613:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        if (mMYINFO.mAvatarInfo.aTribe == tTribe)
        {
            tstr = mMESSAGE.Return(1862);
            sprintf(Buffer, tstr);
            mBOARDUI.Set(0, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 614:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        if (mMYINFO.mAvatarInfo.aTribe == tTribe)
        {
            tstr = mMESSAGE.Return(1861);
            sprintf(Buffer, tstr);
            mBOARDUI.Set(0, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 615:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        if (mMYINFO.mAvatarInfo.aTribe == tTribe)
        {
            tstr = mMESSAGE.Return(1944);
            sprintf(Buffer, "%d %s", tValue, tstr);
            mBOARDUI.Set(0, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 620:
        memcpy(&tValue, r->tData, sizeof(tValue));
        tstr = mMESSAGE.Return(1937);
        sprintf(Buffer, "%d%s", tValue, tstr);
        mBASICUI.Insert1(Buffer, 1);
        return;
    case 621:
        tstr = mMESSAGE.Return(1938);
        mBASICUI.Insert1(tstr, 1);
        return;
    case 622:
        tstr = mMESSAGE.Return(1936);
        mBASICUI.Insert1(tstr, 1);
        mMYINFO.mZone88OpenGateState[0] = 0;
        mMYINFO.mZone88OpenGateState[1] = 0;
        mMYINFO.mZone88OpenGateState[2] = 0;
        mMYINFO.mZone88OpenGateState[3] = 0;
        GWORLD::Load(&mGDATA.mZONE, 6);
        return;

    case 624:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        tstr = mMESSAGE.Return(1929);
        tstr2 = mMESSAGE.Return(tTribe + 75);
        sprintf(Buffer, "%s%s", tstr2, tstr);
        mBASICUI.Insert1(Buffer, 1);
        mPLAY.mWorldInfo.mValleyOfTearsState = tTribe;
        return;
    case 625:
        memcpy(&tValue, r->tData, sizeof(tValue));
        tstr = mMESSAGE.Return(1935);
        sprintf(Buffer, "%d%s", tValue, tstr);
        mBASICUI.Insert1(Buffer, 1);
        return;
    case 626:
        mPLAY.mWorldInfo.mValleyOfTearsState = -1;
        if (mMYINFO.mPresentZoneNumber == 88)
        {
            tstr = mMESSAGE.Return(235);
            mBASICUI.Insert1(tstr, 1);
            mPLAY.ReturnToTown( 0);
        }
        return;
    case 628:
        memcpy(&tZoneNumber, &r->tData[4], sizeof(tZoneNumber));
        memcpy(&tTribe, &r->tData[8], sizeof(tTribe));
        tstr = mMESSAGE.Return(tTribe + 2019);
        tstr2 = mZONENAME.Return(tZoneNumber);
        sprintf(Buffer, "%s%s", tstr2, tstr);
        mBOARDUI.Set(2, 1, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 629:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tAvatarName, &r->tData[4], 13);
        if (tIndex >= 0 && tIndex <= 3)
        {
            strcpy(mPLAY.mWorldInfo.mBigFourGuildForChallenge[tIndex], tAvatarName);
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(1986);
                sprintf(Buffer, "%s%s", tAvatarName, tstr);
                mBASICUI.Insert1(Buffer, 1);
            }
        }
        return;
    case 630:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 1;
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(1984);
                sprintf(Buffer, "%d%s", tValue, tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
            }
            if (mMYINFO.mPresentZoneNumber == v661[tIndex])
            {
                mPLAY.ReturnToTown( 0);
            }
        }
        return;
    case 631:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 2;
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(1985);
                sprintf(Buffer, "%s", tstr);
                mBASICUI.Insert1(Buffer, 1);
                tstr = mMESSAGE.Return(1988);
                sprintf(Buffer, "%d%s", tValue, tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
                tstr = mMESSAGE.Return(2037);
                sprintf(Buffer, "%s%s", mPLAY.mWorldInfo.mBigForGuildName[tIndex][3], tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
            }
        }
        return;
    case 632:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 2;
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(1988);
                sprintf(Buffer, "%d%s", tValue, tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
                tstr = mMESSAGE.Return(2037);
                sprintf(Buffer, "%s%s", mPLAY.mWorldInfo.mBigForGuildName[tIndex][3], tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
            }
        }
        return;
    case 633:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 3;
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(1987);
                sprintf(Buffer, "%s", tstr);
                mBASICUI.Insert1(Buffer, 1);
            }
        }
        return;
    case 634:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 4;
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(1989);
                sprintf(Buffer, "%s", tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
                if (mMYINFO.mPresentZoneNumber == v661[tIndex])
                {
                    mMYINFO.mCheckFourGuildTypeGateEffect1 = 1;
                }
            }
        }
        return;

    case 635:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tGuildName, &r->tData[4], 13);
        memcpy(&tGuildName2, &r->tData[17], 13);
        if (tIndex >= 0 && tIndex <= 3)
        {
            strcpy(mPLAY.mWorldInfo.mBigForGuildName[tIndex][3], tGuildName);
            strcpy(mPLAY.mWorldInfo.mBigFourGuildForChallenge[tIndex], tGuildName2);
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 5;
            if (!strcmp(tGuildName2, mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildName))
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxManaValue = mFACTOR.GetMaxMana();
                mMYINFO.mAvatarInfo.aMaxMPElixirEatState = 0;
                mMYINFO.mAvatarInfo.aMaxAgiElixirEatState = 0;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mMYINFO.mAvatarInfo.aMaxHPElixirEatState = 0;
                mMYINFO.mAvatarInfo.aMaxStrElixirEatState = 0;
            }
        }
        return;

    case 636:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 5;
        }
        return;
    case 637:
    case 638:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 6;
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(1990);
                sprintf(Buffer, "%d%s", tValue, tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
                tstr = mMESSAGE.Return(2036);
                sprintf(Buffer, "%s%s", mPLAY.mWorldInfo.mBigForGuildName[tIndex][2], tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
            }
            if (mMYINFO.mPresentZoneNumber == v661[tIndex] && !strcmp(mPLAY.mWorldInfo.mBigFourGuildForChallenge[tIndex], mMYINFO.mAvatarInfo.aGuildName))
            {
                mPLAY.ReturnToTown( 0);
            }
        }
        return;
    case 639:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 7;
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(1991);
                sprintf(Buffer, "%s", tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
                if (mMYINFO.mPresentZoneNumber == v661[tIndex])
                {
                    mMYINFO.mCheckFourGuildTypeGateEffect2 = 1;
                }
            }
        }
        return;
    case 640:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tGuildName, &r->tData[4], 13);
        memcpy(&tGuildName2, &r->tData[17], 13);
        if (tIndex >= 0 && tIndex <= 3)
        {
            strcpy(mPLAY.mWorldInfo.mBigForGuildName[tIndex][2], tGuildName);
            strcpy(mPLAY.mWorldInfo.mBigForGuildName[tIndex][3], tGuildName2);
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 8;
            if (!strcmp(tGuildName2, mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildName))
            {
                mMYINFO.mAvatarInfo.aMaxAgiElixirEatState = 0;
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mMYINFO.mAvatarInfo.aMaxHPElixirEatState = 0;
                mMYINFO.mAvatarInfo.aMaxStrElixirEatState = 0;
            }
        }
        return;
    case 641:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 8;
        }
        return;
    case 642:
    case 643:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 9;
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(1992);
                sprintf(Buffer, "%d%s", tValue, tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
                tstr = mMESSAGE.Return(2036);
                sprintf(Buffer, "%s%s", mPLAY.mWorldInfo.mBigForGuildName[tIndex][1], tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
            }
            if (mMYINFO.mPresentZoneNumber == v661[tIndex] && !strcmp(mPLAY.mWorldInfo.mBigForGuildName[tIndex][3], mMYINFO.mAvatarInfo.aGuildName))
            {
                mPLAY.ReturnToTown( 0);
            }
        }
        return;
    case 644:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 10;
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(1993);
                sprintf(Buffer, "%s", tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
                if (mMYINFO.mPresentZoneNumber == v661[tIndex])
                {
                    mMYINFO.mCheckFourGuildTypeGateEffect3 = 1;
                }
            }
        }
        return;

    case 645:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tGuildName, &r->tData[4], 13);
        memcpy(tGuildName2, &r->tData[17], 13);
        if (tIndex >= 0 && tIndex <= 3)
        {
            strcpy(mPLAY.mWorldInfo.mBigForGuildName[tIndex][1], tGuildName);
            strcpy(mPLAY.mWorldInfo.mBigForGuildName[tIndex][2], tGuildName2);
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 11;
            if (!strcmp(tGuildName2, mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildName))
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
                mMYINFO.mAvatarInfo.aMaxHPElixirEatState = 0;
                mMYINFO.mAvatarInfo.aMaxStrElixirEatState = 0;
            }
        }
        return;
    case 646:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 11;
        }
        return;

    case 647:
    case 648:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 12;
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(1994);
                sprintf(Buffer, "%d%s", tValue, tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
                tstr = mMESSAGE.Return(2036);
                sprintf(Buffer, "%s%s", mPLAY.mWorldInfo.mBigForGuildName[tIndex], tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
            }
            if (mMYINFO.mPresentZoneNumber == v661[tIndex] && !strcmp(mPLAY.mWorldInfo.mBigForGuildName[tIndex][2], mMYINFO.mAvatarInfo.aGuildName))
            {
                mPLAY.ReturnToTown( 0);
            }
        }
        return;
    case 649:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 13;
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(1995);
                sprintf(Buffer, "%s", tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
                if (mMYINFO.mPresentZoneNumber == v661[tIndex])
                {
                    mMYINFO.mCheckFourGuildTypeGateEffect4 = 1;
                }
            }
        }
        return;
    case 650:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tGuildName, &r->tData[4], 13);
        memcpy(tGuildName2, &r->tData[17], 13);
        if (tIndex >= 0 && tIndex <= 3)
        {
            strcpy(mPLAY.mWorldInfo.mBigForGuildName[tIndex][0], tGuildName);
            strcpy(mPLAY.mWorldInfo.mBigForGuildName[tIndex][1], tGuildName2);
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 14;
            if (!strcmp(tGuildName2, mPLAY.mAVATAR_OBJECT[0].mDATA.aGuildName))
            {
                mMYINFO.mAvatarInfo.aMaxStrElixirEatState = 0;
               // mPLAY.DeleteFourGuildCostume();
            }
        }
        return;
    case 651:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 14;
        }
        return;
    case 652:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            if (mMYINFO.mPresentZoneNumber == v661[tIndex])
            {
                GWORLD::Load(&mGDATA.mZONE, 1);
                mMYINFO.mZoneFourGuildTypeGateFrame1 = 0.0;
                mMYINFO.mZoneFourGuildTypeGateFrame2 = 0.0;
                mMYINFO.mZoneFourGuildTypeGateFrame3 = 0.0;
                mMYINFO.mZoneFourGuildTypeGateFrame4 = 0.0;
                mPLAY.ReturnToTown( 0);
            }
            mPLAY.mWorldInfo.mBigFourGuildState[tIndex] = 0;
            strcpy(mPLAY.mWorldInfo.mBigFourGuildForChallenge[tIndex], "");
        }
        return;
    case 659:
        memcpy(&tValue, r->tData, sizeof(tValue));
        mPLAY.mWorldInfo.mZone200TypeState = 1;
        tstr = mMESSAGE.Return(1939); 
        sprintf(Buffer, "%d%s", tValue, tstr);
        mBASICUI.Insert1(Buffer, 1);
        return;
    case 660:
        mPLAY.mWorldInfo.mZone200TypeState = 2;
        tstr = mMESSAGE.Return(1940); 
        sprintf(Buffer, "%s", tstr);
        mBASICUI.Insert1(Buffer, 1);
        if (mMYINFO.mAvatarInfo.aLevel2 == 12 && mGAMEOPTION.tAcceptWar == 1)
        {
            tstr = mMESSAGE.Return(2061);
            tstr2 = mMESSAGE.Return(2060);
            mCBOXUI.Set(53, tstr2, tstr);  
        }
        return;
    case 661:
        memcpy(&tValue, r->tData, sizeof(tValue));
        mPLAY.mWorldInfo.mZone200TypeState = 2;
        tstr = mMESSAGE.Return(1941); 
        sprintf(Buffer, tstr, tValue);
        mBASICUI.Insert1(Buffer, 1);
        return;
    case 662:
        memcpy(&tValue, r->tData, sizeof(tValue));
        mPLAY.mWorldInfo.mZone200TypeState = 3;
        tstr = mMESSAGE.Return(1942);
        sprintf(Buffer, "%s", tstr);
        mBASICUI.Insert1(Buffer, 1);
        return;
    case 663:
        mPLAY.mWorldInfo.mZone200TypeState = 4;
        if (mMYINFO.mPresentZoneNumber == 200)
        {
            tstr = mMESSAGE.Return(1764);
            sprintf(Buffer, "%s", tstr);
            mBASICUI.Insert1(Buffer, 1);
            mMYINFO.mCheckZone200TypeGateEffect1[0] = 1;
            mMYINFO.mCheckZone200TypeGateEffect1[1] = 1;
            mMYINFO.mCheckZone200TypeGateEffect1[2] = 1;
            mMYINFO.mCheckZone200TypeGateEffect1[3] = 1;
            mMYINFO.mCheck200TypeInfo = 1;
            mMYINFO.mZone200TypeMonsterInfo[0] = 0;
            mMYINFO.mZone200TypeMonsterInfo[1] = 0;
            mMYINFO.mZone200TypeMonsterInfo[2] = 0;
            mMYINFO.mZone200TypeMonsterInfo[3] = 0;
        }
        return;
    case 664:
        mPLAY.mWorldInfo.mZone200TypeState = 7;
        if (mMYINFO.mPresentZoneNumber == 200)
        {
            mMYINFO.mCheckZone200TypeGateEffect1[0] = 0;
            mMYINFO.mCheckZone200TypeGateEffect1[1] = 0;
            mMYINFO.mCheckZone200TypeGateEffect1[2] = 0;
            mMYINFO.mCheckZone200TypeGateEffect1[3] = 0;
            mMYINFO.mCheckZone200TypeGateEffect2[0] = 0;
            mMYINFO.mCheckZone200TypeGateEffect2[1] = 0;
            mMYINFO.mCheckZone200TypeGateEffect2[2] = 0;
            mMYINFO.mCheckZone200TypeGateEffect2[3] = 0;
        }
        return;
    case 665:
        mPLAY.mWorldInfo.mZone200TypeState = 7;
        if (mMYINFO.mPresentZoneNumber == 200)
        {
            mMYINFO.mCheckZone200TypeGateEffect1[0] = 0;
            mMYINFO.mCheckZone200TypeGateEffect1[1] = 0;
            mMYINFO.mCheckZone200TypeGateEffect1[2] = 0;
            mMYINFO.mCheckZone200TypeGateEffect1[3] = 0;
            mMYINFO.mCheckZone200TypeGateEffect2[0] = 0;
            mMYINFO.mCheckZone200TypeGateEffect2[1] = 0;
            mMYINFO.mCheckZone200TypeGateEffect2[2] = 0;
            mMYINFO.mCheckZone200TypeGateEffect2[3] = 0;
            mPLAY.ReturnToTown( 0);
        }
        return;
    case 666:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        mPLAY.mWorldInfo.mZone200TypeState = 5;
        if (mMYINFO.mPresentZoneNumber == 200)
        {
            switch (tTribe) 
            {
            case 0:
                tstr = mMESSAGE.Return(1758);
                sprintf(Buffer, "%s", tstr);
                goto LABEL_821;
            case 1:
                tstr = mMESSAGE.Return(1759);
                sprintf(Buffer, "%s", tstr);
                goto LABEL_821;
            case 2:
                tstr = mMESSAGE.Return(1760);
                sprintf(Buffer, "%s", tstr);
                goto LABEL_821;
            case 3:
                tstr = mMESSAGE.Return(1761);
                sprintf(Buffer, "%s", tstr);
            LABEL_821:
                mBASICUI.Insert1(Buffer, 1);
                if (mMYINFO.mAvatarInfo.aTribe == tTribe)
                    mMYINFO.mCheckZone200TypeGateEffect2[tTribe] = 1;
                else
                    mPLAY.ReturnToTown( 0);
                mMYINFO.mZone200TypeMonsterInfo[0] = 0;
                mMYINFO.mZone200TypeMonsterInfo[1] = 0;
                mMYINFO.mZone200TypeMonsterInfo[2] = 0;
                mMYINFO.mZone200TypeMonsterInfo[3] = 0;
                break;
            default:
                return;
            }
        }
        return;
    case 667:
        mPLAY.mWorldInfo.mZone200TypeState = 6;
        if (mMYINFO.mPresentZoneNumber == 200)
        {
            mMYINFO.mCheck200TypeInfo = 0;
        }
        return;
    case 668:
        mPLAY.mWorldInfo.mZone200TypeState = 7;
        if (mMYINFO.mPresentZoneNumber == 200)
        {
            tstr = mMESSAGE.Return(1844);
            sprintf(Buffer, "%s", tstr);
            mBASICUI.Insert1(Buffer, 1);
            tstr = mMESSAGE.Return(1845);
            sprintf(Buffer, tstr, 100);
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 669:
        mPLAY.mWorldInfo.mZone200TypeState = 0;
        if (mMYINFO.mPresentZoneNumber == 200)
        {
            mMYINFO.mCheckZone200TypeGateEffect1[0] = 0;
            mMYINFO.mCheckZone200TypeGateEffect1[1] = 0;
            mMYINFO.mCheckZone200TypeGateEffect1[2] = 0;
            mMYINFO.mCheckZone200TypeGateEffect1[3] = 0;
            mMYINFO.mCheckZone200TypeGateEffect2[0] = 0;
            mMYINFO.mCheckZone200TypeGateEffect2[1] = 0;
            mMYINFO.mCheckZone200TypeGateEffect2[2] = 0;
            mMYINFO.mCheckZone200TypeGateEffect2[3] = 0;
            mPLAY.ReturnToTown( 0);
        }
        return;
    case 671:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[4], 13);
        tstr = mMESSAGE.Return(2084);
        tstr2 = mMESSAGE.Return(tTribe + 75);
        sprintf(Buffer, "%s %s %s", tstr2, tAvatarName, tstr);
        mBOARDUI.Set(2, 1, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 672:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[4], 13);
        tstr = mMESSAGE.Return(2208);
        tstr2 = mMESSAGE.Return(tTribe + 75);
        sprintf(Buffer, "[(%s)] %s %s", tstr2, tAvatarName, tstr);
        mBOARDUI.Set(2, 1, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 673:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        memcpy(&tAvatarName, &r->tData[8], 13);
        switch (tValue)
        {
        case 21:
            tstr = mMESSAGE.Return(2210);
            tstr2 = mMESSAGE.Return(tTribe + 75);
            sprintf(Buffer, "[(%s)] %s %s", tstr2, tAvatarName, tstr);
            break;
        case 22:
            tstr = mMESSAGE.Return(2211);
            tstr2 = mMESSAGE.Return(tTribe + 75);
            sprintf(Buffer, "[(%s)] %s %s", tstr2, tAvatarName, tstr);
            break;
        case 23:
            tstr = mMESSAGE.Return(2216);
            tstr2 = mMESSAGE.Return(tTribe + 75);
            sprintf(Buffer, "[(%s)] %s %s", tstr2, tAvatarName, tstr);
            break;
        case 24:
            tstr = mMESSAGE.Return(2217);
            tstr2 = mMESSAGE.Return(tTribe + 75);
            sprintf(Buffer, "[(%s)] %s %s", tstr2, tAvatarName, tstr);
            break;
        case 25:
            tstr = mMESSAGE.Return(2218);
            tstr2 = mMESSAGE.Return(tTribe + 75);
            sprintf(Buffer, "[(%s)] %s %s", tstr2, tAvatarName, tstr);
            break;
        default:
            break;
        }
        mBOARDUI.Set(2, 1, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 674:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[4], 13);
        tstr = mMESSAGE.Return(2219);
        tstr2 = mMESSAGE.Return(tTribe + 75);
        sprintf(Buffer, "[(%s)] %s %s", tstr2, tAvatarName, tstr);
        mBOARDUI.Set(2, 1, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 675:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[4], 13);
        tstr = mMESSAGE.Return(2220);
        tstr2 = mMESSAGE.Return(tTribe + 75);
        sprintf(Buffer, "[(%s)] %s %s", tstr2, tAvatarName, tstr);
        mBOARDUI.Set(2, 1, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 676:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        memcpy(&tAvatarName, &r->tData[8], 13);
        if (tValue == 4)
        {
            tstr = mMESSAGE.Return(2221);
            tstr2 = mMESSAGE.Return(tTribe + 75);
            sprintf(Buffer, "[(%s)] %s %s", tstr2, tAvatarName, tstr);
        }
        else if (tValue == 5)
        {
            tstr = mMESSAGE.Return(2222);
            tstr2 = mMESSAGE.Return(tTribe + 75);
            sprintf(Buffer, "[(%s)] %s %s", tstr2, tAvatarName, tstr);
        }
        mBOARDUI.Set(2, 1, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 677:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[4], 13);
        tstr = mMESSAGE.Return(2230);
        tstr2 = mMESSAGE.Return(tTribe + 75);
        sprintf(Buffer, "[(%s)] %s %s", tstr2, tAvatarName, tstr);
        mBOARDUI.Set(2, 1, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 700:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 0;
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(2064);
                sprintf(Buffer, "%d%s", tValue, tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
            }
        }
        return;

    case 701:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 1;
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(2065);
                sprintf(Buffer, "%s", tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
            }
        }
        return;
    case 702:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 2;
            if (mMYINFO.mAvatarInfo.aTribe == tIndex)
            {
                tstr = mMESSAGE.Return(2071);
                sprintf(Buffer, "%s", tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
            }
        }
        return;
    case 703:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 3;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                mMYINFO.mCheckZone5TypeGateEffect2[0] = 1;
                mMYINFO.mCheckZone5TypeGateEffect2[1] = 1;
            }
        }
        return;
    case 704:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 4;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                mMYINFO.mCheckZone5TypeGateEffect1[0] = 1;
                mMYINFO.mCheckZone5TypeGateEffect1[1] = 1;
            }
        }
        return;
    case 705:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 5;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                tstr = mMESSAGE.Return(2134);
                sprintf(Buffer, tstr);
                tstr = mMESSAGE.Return(2146);
                mBOARDUI.Set(12, 0, Buffer, tstr);
                mBASICUI.Insert1(Buffer, 1);
                tstr = mMESSAGE.Return(2146);
                mBASICUI.Insert1(tstr, 1);
            }
        }
        return;
    case 706:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 30;
        }
        return;
    case 707:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 26;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                tstr = mMESSAGE.Return(2076);
                sprintf(Buffer, "%d%s", tValue, tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
            }
        }
        return;
    case 708:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 6;
        }
        return;
    case 709:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 7;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                tstr = mMESSAGE.Return(2075);
                sprintf(Buffer, "%d%s", 1, tstr);
                tstr = mMESSAGE.Return(2139);
                mBOARDUI.Set(12, 0, Buffer, tstr);
            }
        }
        return;
    case 710:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 8;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                mMYINFO.mCheckZone5TypeGateEffect2[2] = 1;
                mMYINFO.mCheckZone5TypeGateEffect2[3] = 1;
            }
        }
        return;
    case 711:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 9;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                mMYINFO.mCheckZone5TypeGateEffect1[2] = 1;
                mMYINFO.mCheckZone5TypeGateEffect1[3] = 1;
            }
        }
        return;
    case 712:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 11;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                tstr = mMESSAGE.Return(2135);
                sprintf(Buffer, tstr);
                tstr = mMESSAGE.Return(2147);
                mBOARDUI.Set(12, 0, Buffer, tstr);
                mBASICUI.Insert1(Buffer, 1);
                tstr = mMESSAGE.Return(2147);
                mBASICUI.Insert1(tstr, 1);
            }
        }
        return;
    case 713:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 12;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                tstr = mMESSAGE.Return(2075);
                sprintf(Buffer, "%d%s", 2, tstr);
                tstr = mMESSAGE.Return(2140);
                mBOARDUI.Set(12, 0, Buffer, tstr);
            }
        }
        return;
    case 714:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 13;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                mMYINFO.mCheckZone5TypeGateEffect2[4] = 1;
                mMYINFO.mCheckZone5TypeGateEffect2[5] = 1;
            }
        }
        return;
    case 715:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 14;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                mMYINFO.mCheckZone5TypeGateEffect1[4] = 1;
                mMYINFO.mCheckZone5TypeGateEffect1[5] = 1;
            }
        }
        return;
    case 716:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 15;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                tstr = mMESSAGE.Return(2136);
                sprintf(Buffer, tstr);
                tstr = mMESSAGE.Return(2148);
                mBOARDUI.Set(12, 0, Buffer, tstr);
                mBASICUI.Insert1(Buffer, 1);
                tstr = mMESSAGE.Return(2148);
                mBASICUI.Insert1(tstr, 1);
            }
        }
        return;
    case 717:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 16;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                tstr = mMESSAGE.Return(2075);
                sprintf(Buffer, "%d%s", 3, tstr);
                tstr = mMESSAGE.Return(2141);
                mBOARDUI.Set(12, 0, Buffer, tstr);
            }
        }
        return;
    case 718:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 17;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                mMYINFO.mCheckZone5TypeGateEffect2[6] = 1;
                mMYINFO.mCheckZone5TypeGateEffect2[7] = 1;
            }
        }
        return;
    case 719:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 18;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                mMYINFO.mCheckZone5TypeGateEffect1[6] = 1;
                mMYINFO.mCheckZone5TypeGateEffect1[7] = 1;
            }
        }
        return;
    case 720:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 19;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                tstr = mMESSAGE.Return(2137);
                sprintf(Buffer, tstr);
                tstr = mMESSAGE.Return(2149);
                mBOARDUI.Set(12, 0, Buffer, tstr);
                mBASICUI.Insert1(Buffer, 1);
                tstr = mMESSAGE.Return(2149);
                mBASICUI.Insert1(tstr, 1);
            }
        }
        return;
    case 721:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 20;
        }
        return;
    case 722:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 19;
        }
        return;
    case 723:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 21;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                tstr = mMESSAGE.Return(2075);
                sprintf(Buffer, "%d%s", 4, tstr);
                tstr = mMESSAGE.Return(2142);
                mBOARDUI.Set(12, 0, Buffer, tstr);
            }
        }
        return;
    case 724:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 22;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                mMYINFO.mCheckZone5TypeGateEffect2[8] = 1;
                mMYINFO.mCheckZone5TypeGateEffect2[9] = 1;
            }
        }
        return;
    case 725:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 23;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                mMYINFO.mCheckZone5TypeGateEffect1[8] = 1;
                mMYINFO.mCheckZone5TypeGateEffect1[9] = 1;
            }
        }
        return;
    case 726:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 24;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                tstr = mMESSAGE.Return(2138);
                sprintf(Buffer, tstr);
                tstr = mMESSAGE.Return(2150);
                mBOARDUI.Set(12, 0, Buffer, tstr);
                mBASICUI.Insert1(Buffer, 1);
                tstr = mMESSAGE.Return(2150);
                mBASICUI.Insert1(tstr, 1);
            }
        }
        return;
    case 727:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 25;
        return;
    case 728:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 30;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                tstr = mMESSAGE.Return(2075);
                sprintf(Buffer, "%d%s", 5, tstr);
                tstr = mMESSAGE.Return(2143);
                mBOARDUI.Set(12, 0, Buffer, tstr);
            }
        }
        return;
    case 729:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        if (tIndex >= 0 && tIndex <= 3)
        {
            mPLAY.mWorldInfo.mFullmoonGroundsState[tIndex] = 0;
            if (mMYINFO.mPresentZoneNumber == v651[tIndex])
            {
                mPLAY.ReturnToTown( 0);
            }
        }
        return;
    case 740:
        memcpy(&tValue, r->tData, sizeof(tValue));
        mPLAY.mWorldInfo.mGoldenMoonTempleState = 0;
        if (mMYINFO.mAvatarInfo.aLevel2 == 12)
        {
            tstr = mMESSAGE.Return(2192);
            sprintf(Buffer, "%d%s", tValue, tstr);
            mBOARDUI.Set(1, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 741:
        mPLAY.mWorldInfo.mGoldenMoonTempleState = 1;
        if (mMYINFO.mAvatarInfo.aLevel2 == 12)
        {
            tstr = mMESSAGE.Return(2193);
            sprintf(Buffer, "%s", tstr);
            mBOARDUI.Set(1, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 742:
        mPLAY.mWorldInfo.mGoldenMoonTempleState = 2;
        if (mMYINFO.mAvatarInfo.aLevel2 == 12)
        {
            tstr = mMESSAGE.Return(2194);
            sprintf(Buffer, "%s", tstr);
            mBOARDUI.Set(1, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 743:
        memcpy(&tValue, r->tData, sizeof(tValue));
        mPLAY.mWorldInfo.mGoldenMoonTempleState = 3;
        if (mMYINFO.mPresentZoneNumber == 54)
        {
            tstr = mMESSAGE.Return(2074);
            sprintf(Buffer, "%d%s", tValue, tstr);
            mBOARDUI.Set(1, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 744:
        mPLAY.mWorldInfo.mGoldenMoonTempleState = 6;
        return;

    case 745:
        memcpy(&tValue, r->tData, sizeof(tValue));
        memcpy(&tValue2, &r->tData[4], sizeof(tValue2));
        memcpy(&tValue3, &r->tData[8], sizeof(tValue3));
        mPLAY.mWorldInfo.mGoldenMoonTempleState = 6;
        if (mMYINFO.mPresentZoneNumber == 54)
        {
            if (tValue >= 0)
            {
                tstr = mMESSAGE.Return(2197);
                tstr2 = mMESSAGE.Return(tValue + 75);
                sprintf(Buffer, "%s%s", tstr2, tstr);
                mBOARDUI.Set(1, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
            }
            if (tValue2 >= 0)
            {
                tstr = mMESSAGE.Return(2197);
                tstr2 = mMESSAGE.Return(tValue2 + 75);
                sprintf(Buffer, "%s%s", tstr2, tstr);
                mBOARDUI.Set(0, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, 1);
            }
            tstr = mMESSAGE.Return(2201);
            sprintf(Buffer, "%d%s", tValue3, tstr);
            mBOARDUI.Set(3, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 746:
        memcpy(&tValue, r->tData, sizeof(tValue));
        mPLAY.mWorldInfo.mGoldenMoonTempleState = 5;
        if (mMYINFO.mPresentZoneNumber == 54)
        {
            tstr = mMESSAGE.Return(2074);
            sprintf(Buffer, "%d%s", tValue, tstr);
            mBOARDUI.Set(1, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 1);
            mMYINFO.mCheckZone54TypeGateEffect[0] = 1;
            mMYINFO.mCheckZone54TypeGateEffect[1] = 1;
            mMYINFO.mCheckZone54TypeGateEffect[2] = 1;
            mMYINFO.mCheckZone54TypeGateEffect[3] = 1;
        }
        return;
    case 747:
        mPLAY.mWorldInfo.mGoldenMoonTempleState = 7;
        if (mMYINFO.mPresentZoneNumber == 54)
        {
            tstr = mMESSAGE.Return(1702);
            sprintf(Buffer, "%s", tstr);
            mBOARDUI.Set(1, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown( 0);
        }
        return;
    case 748:
        memcpy(&tValue, r->tData, sizeof(tValue));
        mPLAY.mWorldInfo.mGoldenMoonTempleState = 6;
        if (mMYINFO.mPresentZoneNumber == 54 && tValue >= 0)
        {
            tstr = mMESSAGE.Return(2202);
            tstr2 = mMESSAGE.Return(tValue + 75);
            sprintf(Buffer, "%s%s", tstr2, tstr);
            mBOARDUI.Set(1, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 749:
        mPLAY.mWorldInfo.mGoldenMoonTempleState = 0;
        if (mMYINFO.mPresentZoneNumber == 54)
            mPLAY.ReturnToTown( 0);
        return;
    case 751:
        memcpy(&tTribe, &r->tData[4], sizeof(tTribe));
        memcpy(&tZoneNumber, &r->tData[8], sizeof(tZoneNumber));
        memcpy(mPLAY.mWorldInfo.mProvingGroundsPoint, &r->tData[12], 16);
        memcpy(mPLAY.mWorldInfo.mProvingGroundsState, &r->tData[28], 36);
        tstr = mZONENAME.Return(tZoneNumber);
        tstr2 = mMESSAGE.Return(tTribe + 1672);
        tstr3 = mMESSAGE.Return(2199);
        sprintf(Buffer, tstr3, tstr2, tstr);
        mBOARDUI.Set(2, 1, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 752:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        if (tIndex >= 0 && tIndex < 12)
            mTOWERBUILDUI.mTower[tIndex] = tValue;
        if (mTOWERBUILDUI.mTower[tIndex] / 100 == 9 || mTOWERBUILDUI.mTower[tIndex] / 100 == 1)
        {
            int v607 = 0;
            switch (tIndex)
            {
            case 0:
                v607 = 2;
                break;
            case 1:
                v607 = 3;
                break;
            case 2:
                v607 = 4;
                break;
            case 3:
                v607 = 7;
                break;
            case 4:
                v607 = 8;
                break;
            case 5:
                v607 = 9;
                break;
            case 6:
                v607 = 12;
                break;
            case 7:
                v607 = 13;
                break;
            case 8:
                v607 = 14;
                break;
            case 9:
                v607 = 141;
                break;
            case 10:
                v607 = 142;
                break;
            case 11:
                v607 = 143;
                break;
            default:
                break;
            }
            if (mTOWERBUILDUI.mTower[tIndex] / 100 == 9)
            {
                tstr = mMESSAGE.Return(2301);
                tstr2 = mMESSAGE.Return(mTOWERBUILDUI.mTower[tIndex] % 100 + 2249);
                tstr3 = mZONENAME.Return(v607);
                sprintf(Buffer, "%s %s %s", tstr3, tstr2, tstr);
                mBOARDUI.Set(0, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
            }
            else
            {
                tstr = mMESSAGE.Return(2300);
                tstr2 = mMESSAGE.Return(mTOWERBUILDUI.mTower[tIndex] % 100 + 2249);
                tstr3 = mZONENAME.Return(v607);
                sprintf(Buffer, "%s %s %s", tstr3, tstr2, tstr);
                mBOARDUI.Set(0, 0, Buffer, "");
                mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
            }
        }
        return;
    case 753:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        mTOWERBUILDUI.mTowerState[tIndex] = tValue;
        return;
    case 754:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tTribe, &r->tData[4], sizeof(tTribe));
        memcpy(&tZoneNumber, &r->tData[8], sizeof(tZoneNumber));
        memcpy(&tAvatarName, &r->tData[12], 13);
        strcpy(Buffer, "");
        if (tIndex)
        {
            if (tIndex == 1)
            {
                tstr = mMESSAGE.Return(2251);
                tstr2 = mZONENAME.Return(tZoneNumber);
                sprintf(tempbuffer, "%s %s", tstr2, tstr);
            }
            else if (tIndex == 2)
            {
                tstr = mMESSAGE.Return(2252);
                tstr2 = mZONENAME.Return(tZoneNumber);
                sprintf(tempbuffer, "%s %s", tstr2, tstr);
            }
        }
        else
        {
            tstr = mMESSAGE.Return(2250);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(tempbuffer, "%s %s", tstr2, tstr);
        }
        strcat(Buffer, tempbuffer);
        switch (tTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(284);
            tstr2 = mMESSAGE.Return(75);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(284);
            tstr2 = mMESSAGE.Return(76);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(284);
            tstr2 = mMESSAGE.Return(77);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(284);
            tstr2 = mMESSAGE.Return(78);
            sprintf(tempbuffer, " [%s] [%s] %s", tstr2, tAvatarName, tstr);
            break;
        default:
            break;
        }
        strcat(Buffer, tempbuffer);
        mBOARDUI.Set(0, 0, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 755:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(4, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[226], 0, 100);
            tstr = mMESSAGE.Return(231);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s [%d]%s", tstr2, tValue, tstr);
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 756:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone319TypeState[tIndex] = 1;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(4, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[259], 0, 100);
            tstr = mMESSAGE.Return(232);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            if (mGAMEOPTION.tAcceptWar == 1)
            {
                mMYINFO.mLevelBattleZoneNumberForMove = tZoneNumber;
                tstr = mMESSAGE.Return(242);
                tstr2 = mZONENAME.Return(tZoneNumber);
                sprintf(Buffer, "%s%s", tstr2, tstr);
                mCBOXUI.Set(4, Buffer, "");
            }
        }
        return;
    case 757:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone319TypeState[tIndex] = 2;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(4, tIndex);
        if (mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber))
        {
            GSOUND::Play(&mGDATA.mSOUND_5[259], 0, 100);
            tstr = mMESSAGE.Return(233);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
        }
        return;
    case 758:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        memcpy(&tValue, &r->tData[4], sizeof(tValue));
        mPLAY.mWorldInfo.mZone319TypeState[tIndex] = 3;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(4, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            GSOUND::Play(&mGDATA.mSOUND_5[227], 0, 100);
            tstr = mMESSAGE.Return(234);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mMYINFO.mCheckLevelBattle319TypeOpenEffect = 1;
            mMYINFO.mLevelBattle319TypeOpenEffectImageIndex = 0;
            mMYINFO.mCheckLevelBattleOpenGateEffect = 1;
            mMYINFO.mLevelBattleOpenGateEffectFrame = 0.0;
            GSOUND::Play(&mGDATA.mSOUND_5[210], 0, 100);
            mMYINFO.mLevelBattle319TypeRemainTime = tValue / 2;
            tstr = mMESSAGE.Return(843);
            sprintf(Buffer, "[%d]%s", mMYINFO.mLevelBattle319TypeRemainTime, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mMYINFO.mCheckLevelBattle319TypeInfo = 1;
            mMYINFO.mLevelBattle319TypeInfo[0] = 0;
            mMYINFO.mLevelBattle319TypeInfo[1] = 0;
            mMYINFO.mLevelBattle319TypeInfo[2] = 0;
            mMYINFO.mLevelBattle319TypeInfo[3] = 0;
        }
        return;
    case 759:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone319TypeState[tIndex] = 5;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(4, tIndex);
        mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber);
        return;
    case 760:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone319TypeState[tIndex] = 5;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(4, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(860);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown( 0);
        }
        return;

    case 761:
        return;

    case 762:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone319TypeState[tIndex] = 5;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(4, tIndex);
        if (tZoneNumber == mMYINFO.mPresentZoneNumber)
        {
            tstr = mMESSAGE.Return(237);
            tstr2 = mZONENAME.Return(tZoneNumber);
            sprintf(Buffer, "%s %s", tstr2, tstr);
            mBASICUI.Insert1(Buffer, 1);
            mPLAY.ReturnToTown( 0);
        }
        return;
    case 763:
        memcpy(&tIndex, r->tData, sizeof(tIndex));
        mPLAY.mWorldInfo.mZone319TypeState[tIndex] = 0;
        tZoneNumber = mZONEMAININFO.ReturnLevelBattlerZoneNumber1(4, tIndex);
        mZONEMAININFO.CheckLevelBattleZoneNumber1(tZoneNumber);
        return;
    case 771:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tZoneNumber, &r->tData[4], sizeof(tZoneNumber));
        memcpy(&tAvatarName, &r->tData[8], 13);
        switch (tTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(2430);
            tstr2 = mZONENAME.Return(tZoneNumber);
            tstr3 = mMESSAGE.Return(75);
            sprintf(Buffer, "[%s] [%s]  %s %s", tstr3, tAvatarName, tstr2, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(2430);
            tstr2 = mZONENAME.Return(tZoneNumber);
            tstr3 = mMESSAGE.Return(76);
            sprintf(Buffer, "[%s] [%s]  %s %s", tstr3, tAvatarName, tstr2, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(2430);
            tstr2 = mZONENAME.Return(tZoneNumber);
            tstr3 = mMESSAGE.Return(77);
            sprintf(Buffer, "[%s] [%s]  %s %s", tstr3, tAvatarName, tstr2, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(2430);
            tstr2 = mZONENAME.Return(tZoneNumber);
            tstr3 = mMESSAGE.Return(78);
            sprintf(Buffer, "[%s] [%s]  %s %s", tstr3, tAvatarName, tstr2, tstr);
            break;
        default:
            break;
        }
        mBOARDUI.Set(2, 4, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        switch (mMYINFO.mPresentZoneNumber)
        {
        case 85:
        case 99:
        case 100:
        case 196:
            mMYINFO.mCheckZone196Effect1 = 1;
            mMYINFO.mZone196EffectFrame1 = 0.0;
            break;
        default:
            return;
        }
        return;

    case 772:
        memcpy(&tZoneNumber, r->tData, sizeof(tZoneNumber));
        tstr = mMESSAGE.Return(2431);
        tstr2 = mZONENAME.Return(tZoneNumber);
        sprintf(Buffer, "%s %s", tstr2, tstr);
        mBOARDUI.Set(2, 4, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 773:
        memcpy(&tValue, r->tData, sizeof(tValue));
        memcpy(&tZoneNumber, &r->tData[4], sizeof(tZoneNumber));
        tstr = mMESSAGE.Return(79);
        tstr2 = mMESSAGE.Return(2432);
        tstr3 = mZONENAME.Return(tZoneNumber);
        sprintf(Buffer, "%s %s %d%s", tstr3, tstr2, tValue, tstr);
        mBOARDUI.Set(2, 4, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 774:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&tZoneNumber, &r->tData[4], sizeof(tZoneNumber));
        memcpy(&tAvatarName, &r->tData[8], 13);
        switch (tTribe)
        {
        case 0:
            tstr = mMESSAGE.Return(2433);
            tstr2 = mZONENAME.Return(tZoneNumber);
            tstr3 = mMESSAGE.Return(75);
            sprintf(Buffer, "[%s] [%s] %s %s", tstr3, tAvatarName, tstr2, tstr);
            break;
        case 1:
            tstr = mMESSAGE.Return(2433);
            tstr2 = mZONENAME.Return(tZoneNumber);
            tstr3 = mMESSAGE.Return(76);
            sprintf(Buffer, "[%s] [%s] %s %s", tstr3, tAvatarName, tstr2, tstr);
            break;
        case 2:
            tstr = mMESSAGE.Return(2433);
            tstr2 = mZONENAME.Return(tZoneNumber);
            tstr3 = mMESSAGE.Return(77);
            sprintf(Buffer, "[%s] [%s] %s %s", tstr3, tAvatarName, tstr2, tstr);
            break;
        case 3:
            tstr = mMESSAGE.Return(2433);
            tstr2 = mZONENAME.Return(tZoneNumber);
            tstr3 = mMESSAGE.Return(78);
            sprintf(Buffer, "[%s] [%s] %s %s", tstr3, tAvatarName, tstr2, tstr);
            break;
        default:
            break;
        }
        mBOARDUI.Set(2, 3, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        switch (mMYINFO.mPresentZoneNumber)
        {
        case 85:
        case 99:
        case 100:
        case 196:
            mMYINFO.mCheckZone196Effect2 = 1;
            mMYINFO.mZone196EffectFrame2 = 0.0;
            break;
        default:
            return;
        }
        return;

    case 780:
        memcpy(&tValue, r->tData, sizeof(tValue));
        memcpy(&j, &r->tData[4], sizeof(j));
        mPLAY.mWorldInfo.mRainWaterHeavenState2 = j;
        GWORLD::Load(&mGDATA.mZONE, 1);
        tstr = mMESSAGE.Return(2439);
        sprintf(Buffer, "%d %s", tValue, tstr);
        mBOARDUI.Set(2, 4, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        tstr = mMESSAGE.Return(2440);
        mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        return;
    case 781:
        memcpy(&j, r->tData, sizeof(j));
        mPLAY.mWorldInfo.mRainWaterHeavenState2 = j;
        GWORLD::Load(&mGDATA.mZONE, 2);
        mPLAY.mWorldInfo.mRainWaterHeavenState1 = -1;
        tstr = mMESSAGE.Return(2441);
        mBOARDUI.Set(2, 4, tstr, "");
        tstr = mMESSAGE.Return(2441);
        mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        return;
    case 782:
        memcpy(&tTribe, r->tData, sizeof(tTribe));
        memcpy(&j, &r->tData[4], sizeof(j));
        mPLAY.mWorldInfo.mRainWaterHeavenState1 = tTribe;
        mPLAY.mWorldInfo.mRainWaterHeavenState2 = j;
        if (tTribe == -1)
        {
            tstr = mMESSAGE.Return(2447);
            sprintf(Buffer, "%s", tstr);
        }
        else
        {
            tstr = mMESSAGE.Return(2442);
            tstr2 = mMESSAGE.Return(mPLAY.mWorldInfo.mRainWaterHeavenState1 + 2685);
            sprintf(Buffer, "[ %s ] %s", tstr2, tstr);
        }
        mBOARDUI.Set(2, 4, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        if (mMYINFO.mPresentZoneNumber == 324)
        {
            if (mMYINFO.mAvatarInfo.aTribe == mPLAY.mWorldInfo.mRainWaterHeavenState1 || mMYINFO.mAvatarInfo.aTribe == mPLAY.ReturnAlliance(mPLAY.mWorldInfo.mRainWaterHeavenState1))
            {
                tstr = mMESSAGE.Return(2446);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            }
            else
            {
                tstr = mMESSAGE.Return(2446);
                mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
            }
        }
        return;
    case 784:
        memcpy(&j, r->tData, sizeof(j));
        mPLAY.mWorldInfo.mRainWaterHeavenState2 = j;
        tstr = mMESSAGE.Return(2445);
        mBOARDUI.Set(2, 4, tstr, "");
        tstr = mMESSAGE.Return(2445);
        mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        if (mMYINFO.mPresentZoneNumber == 324)
        {
            tstr = mMESSAGE.Return(2446);
            mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        }
        return;
    case 785:
        memcpy(&j, r->tData, sizeof(j));
        mPLAY.mWorldInfo.mRainWaterHeavenState2 = j;
        if (mMYINFO.mPresentZoneNumber == 324)
        {
            mPLAY.ReturnToTown(0);
            GWORLD::Load(&mGDATA.mZONE, 1);
        }
        return;
    case 786:
        memcpy(&j, &r->tData[4], sizeof(j));
        mPLAY.mWorldInfo.mRainWaterHeavenState1 = -1;
        mPLAY.mWorldInfo.mRainWaterHeavenState2 = j;
        return;
    case 788:
        memcpy(&tZoneNumber, r->tData, sizeof(tZoneNumber));
        tstr = mMESSAGE.Return(2462);
        tstr2 = mZONENAME.Return(tZoneNumber);
        sprintf(Buffer, "%s %s", tstr2, tstr);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 789:
        memcpy(&tZoneNumber, r->tData, sizeof(tZoneNumber));
        tstr = mMESSAGE.Return(2502);
        tstr2 = mZONENAME.Return(tZoneNumber);
        sprintf(Buffer, "%s %s", tstr2, tstr);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 790:
        memcpy(&tZoneNumber, r->tData, sizeof(tZoneNumber));
        tstr = mMESSAGE.Return(2463);
        tstr2 = mZONENAME.Return(tZoneNumber);
        sprintf(Buffer, "%s %s", tstr2, tstr);
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;
    case 791:
        memcpy(&tZoneNumber, r->tData, sizeof(tZoneNumber));
        memcpy(&tTribe, &r->tData[4], sizeof(tTribe));
        memcpy(&tAvatarName, &r->tData[8], 13);
        tstr = mMESSAGE.Return(2461);
        tstr2 = mMESSAGE.Return(2460);
        tstr3 = mMESSAGE.Return(tTribe + 75);
        tstr4 = mMESSAGE.Return(2459);
        tstr5 = mZONENAME.Return(tZoneNumber);
        sprintf(Buffer, "%s %s %s %s %s %s", tstr5, tstr4, tstr3, tstr2, tAvatarName, tstr);
        mBOARDUI.Set(2, 1, Buffer, "");
        mBASICUI.Insert1(Buffer, mFONTCOLOR.mData[44]);
        return;

    case 901: // LOD Broadcast
        CopyMemory(&tZoneNumber, r->tData, 4);
        CopyMemory(&tAvatarName, &r->tData[4], MAX_AVATAR_NAME_LENGTH);
        CopyMemory(&tValue, &r->tData[17], 4);
        tITEM = mITEM.Search(tValue);
        if (tITEM)
        {
            sprintf(Buffer, "[%s] %s gained %s", mZONENAME.Return(tZoneNumber), tAvatarName, tITEM->iName);
            mBOARDUI.Set(0, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 15);
        }
        return;

    case 902: // Rebirth 12
        CopyMemory(&tAvatarName, r->tData, MAX_AVATAR_NAME_LENGTH);
        CopyMemory(&tTribe, &r->tData[MAX_AVATAR_NAME_LENGTH], 4);
        sprintf(Buffer, "[%s] %s has reached Rebirth 12!", mPLAY.ReturnTribeName(tTribe), tAvatarName);
        mBOARDUI.Set(0, 0, Buffer, "");
        mBASICUI.Insert1(Buffer, 15);
        return;

    case 903: // Wing Broadcast
        CopyMemory(&tTribe, &r->tData[0], 4);
        CopyMemory(&tAvatarName, &r->tData[4], MAX_AVATAR_NAME_LENGTH);
        CopyMemory(&tValue, &r->tData[4 + MAX_AVATAR_NAME_LENGTH], 4);
        tITEM = mITEM.Search(tValue);
        if (tITEM)
        {
            sprintf(Buffer, "[%s] %s has crafted %s", mPLAY.ReturnTribeName(tTribe), tAvatarName, tITEM->iName);
            mBOARDUI.Set(0, 0, Buffer, "");
            mBASICUI.Insert1(Buffer, 15);
        }
        return;

	case 904: // Rebirth 6
		CopyMemory(&tAvatarName, r->tData, MAX_AVATAR_NAME_LENGTH);
		CopyMemory(&tTribe, &r->tData[MAX_AVATAR_NAME_LENGTH], 4);
		sprintf(Buffer, "[%s] %s has reached Rebirth 6!", mPLAY.ReturnTribeName(tTribe), tAvatarName);
		mBOARDUI.Set(0, 0, Buffer, "");
		mBASICUI.Insert1(Buffer, 15);
		return;
   
    default:
        return;


    }
}


void WORK::W_049_TYPE_BATTLE_INFO_RECV()
{
    char Buffer[1000]; 
    W_049_TYPE_BATTLE_INFO_RECV_DATA* r = (W_049_TYPE_BATTLE_INFO_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mLevelBattle49TypeRemainTime = r->tRemainTime / 2;
    sprintf(Buffer, "[%d]%s", mMYINFO.mLevelBattle49TypeRemainTime, mMESSAGE.Return(843));
    mBASICUI.Insert1(Buffer, 1);
    mMYINFO.mLevelBattle49TypeInfo[0] = r->tTribeUserNum[0];
    mMYINFO.mLevelBattle49TypeInfo[1] = r->tTribeUserNum[1];
    mMYINFO.mLevelBattle49TypeInfo[2] = r->tTribeUserNum[2];
    mMYINFO.mLevelBattle49TypeInfo[3] = r->tTribeUserNum[3];
}
void WORK::W_051_TYPE_BATTLE_INFO_RECV()
{
    char Destination[1000]; 
    char Source[1000]; 
    char* str;
    W_051_TYPE_BATTLE_INFO_RECV_DATA* r = (W_051_TYPE_BATTLE_INFO_RECV_DATA*)&mNETWORK.mBuffer[0];

    strcpy(Destination, "");
    if (r->tExistStone[0] == 1)
    {
        str = mMESSAGE.Return(240);
    }
    else
    {
        str = mMESSAGE.Return(241);
    }
    sprintf(Source, "[%s] %s ", mMESSAGE.Return(75), str);
    strcat(Destination, Source);

    if (r->tExistStone[1] == 1)
    {
        str = mMESSAGE.Return(240);
    }
    else
    {
        str = mMESSAGE.Return(241);
    }
    sprintf(Source, "[%s] %s ", mMESSAGE.Return(76), str);
    strcat(Destination, Source);

    if (r->tExistStone[2] == 1)
    {
        str = mMESSAGE.Return(240);
    }
    else
    {
        str = mMESSAGE.Return(241);
    }
    sprintf(Source, "[%s] %s ", mMESSAGE.Return(77), str);
    strcat(Destination, Source);

    if (mMYINFO.mPresentZoneNumber > 153)
    {
        if (r->tExistStone[3] == 1)
        {
            str = mMESSAGE.Return(240);
        }
        else
        {
            str = mMESSAGE.Return(241);
        }
        sprintf(Source, "[%s] %s", mMESSAGE.Return(78), str);
        strcat(Destination, Source);
    }
    mBASICUI.Insert1(Destination, 1);
    if (!r->tExistStone[mMYINFO.mAvatarInfo.aTribe])
    {
        mPLAY.ReturnToTown(0);
    }
}

void WORK::W_GM_COMMAND_INFO_RECV()
{
    int tValue;
    W_GM_COMMAND_INFO_RECV_DATA* r = (W_GM_COMMAND_INFO_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (r->tSort == 1)
    {
        memcpy(&tValue, &r->tData[0], 4);
        mBASICUI.Insert1(mZONENAME.Return(tValue), mFONTCOLOR.mData[44]);
    }
    else if (r->tSort == 2)
    {
        memcpy(mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation, &r->tData[0], 12);
    }
}

void WORK::W_RETURN_TO_ZONE037_RECV()
{
    mPLAY.ReturnToZone037();
}

void WORK::W_194_TYPE_BATTLE_INFO_RECV()
{
    char Buffer[1000];
    W_194_TYPE_BATTLE_INFO_RECV_DATA* r = (W_194_TYPE_BATTLE_INFO_RECV_DATA*)&mNETWORK.mBuffer[0];

    --mMYINFO.mZone194BattleRemainTime;
    sprintf(Buffer, "%s [%d]%s", mZONENAME.Return(194), mMYINFO.mZone194BattleRemainTime, mMESSAGE.Return(843));
    mBASICUI.Insert1(Buffer, 1);
    mMYINFO.mZone194BattleInfo[0] = r->tTribeUserNum[0];
    mMYINFO.mZone194BattleInfo[1] = r->tTribeUserNum[1];
    mMYINFO.mZone194BattleInfo[2] = r->tTribeUserNum[2];
    mMYINFO.mZone194BattleInfo[3] = r->tTribeUserNum[3];
}

void WORK::W_194_TYPE_BATTLE_COUNTDOWN_RECV()
{
    char Buffer[1000]; 
    W_194_TYPE_BATTLE_COUNTDOWN_RECV_DATA* r = (W_194_TYPE_BATTLE_COUNTDOWN_RECV_DATA*)&mNETWORK.mBuffer[0];

    sprintf(Buffer, "%s [%d]%s", mZONENAME.Return(194), r->tRemainTime, mMESSAGE.Return(857));
    mBASICUI.Insert1(Buffer, 3);
}

void WORK::W_ANIMAL_STATE_RECV()
{
    int tFeed = 0;
    int tExp = 0;
    int tNewExpFeed = 0;
    W_ANIMAL_STATE_RECV_DATA* r = (W_ANIMAL_STATE_RECV_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tSort)
    {
    case 1:
        mMYINFO.mAvatarInfo.aAnimalIndex = r->tValue;
        return;
    case 2:
        mMYINFO.mAvatarInfo.aAnimalIndex = -1;
        return;
    case 3:
        mMYINFO.mAvatarInfo.aAnimalIndex += 10;
        return;
    case 4:
        mMYINFO.mAvatarInfo.aAnimalIndex -= 10;
        return;
    case 5:
        mMYINFO.mAvatarInfo.aAnimal[mMYINFO.mAvatarInfo.aAnimalIndex] = 0;
        mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex] = 0;
        mMYINFO.mAvatarInfo.aAnimalAbilityStats[mMYINFO.mAvatarInfo.aAnimalIndex] = 0;
        mMYINFO.mAvatarInfo.aAnimalIndex = -1;
        //mMYINFO.mAvatarInfo.aMoney -= 100000000;
        mBASICUI.Insert1(mMESSAGE.Return(1511), mFONTCOLOR.mData[44]);
        return;

    case 6:
        if (r->tValue)
        {
            mUTIL.ReturnMountExp(mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex - 10], &tFeed, &tExp);
            mUTIL.SetMountExp(tFeed, 0, &tNewExpFeed);
            mMYINFO.mAvatarInfo.aAnimalExpActivity[mMYINFO.mAvatarInfo.aAnimalIndex - 10] = tNewExpFeed;
            mMYINFO.mAvatarInfo.aAnimalAbilityStats[mMYINFO.mAvatarInfo.aAnimalIndex - 10] = r->tValue;
        }
        else
        {
            mBASICUI.Insert1(mMESSAGE.Return(2166), 15);
        }
        return;
    
    default:
        return;
    }
}

void WORK::W_267_TYPE_BATTLE_INFO_RECV()
{
    char Buffer[1000]; 
    W_267_TYPE_BATTLE_INFO_RECV_DATA* r = (W_267_TYPE_BATTLE_INFO_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.m267TypeRemainTime = r->tRemainTime / 2;
    sprintf(Buffer, "[%d]%s", mMYINFO.m267TypeRemainTime, mMESSAGE.Return(843));
    mBASICUI.Insert1(Buffer, 1);
    mMYINFO.m267TypeInfo[0] = r->tTribeUserNum[0];
    mMYINFO.m267TypeInfo[1] = r->tTribeUserNum[1];
    mMYINFO.m267TypeInfo[2] = r->tTribeUserNum[2];
    mMYINFO.m267TypeInfo[3] = r->tTribeUserNum[3];
}

void WORK::W_241_TYPE_BATTLE_INFO_RECV()
{
    char Buffer[1000]; 
    W_241_TYPE_BATTLE_INFO_RECV_DATA* r = (W_241_TYPE_BATTLE_INFO_RECV_DATA*)&mNETWORK.mBuffer[0];

    sprintf(Buffer, "[%d]%s", r->tRemainTime / 2, mMESSAGE.Return(843));
    mBASICUI.Insert1(Buffer, 1);
}

void WORK::W_MAKE_BIRD_RECV()
{
    W_MAKE_BIRD_RECV_DATA* r = (W_MAKE_BIRD_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (!r->tResult)
    {
        mMYINFO.mNetworkLock = 0;
        GSOUND::Play(&mGDATA.mSOUND_5[303], 0, 100);
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        mNPCUI.mPage[2] = -1;
        mNPCUI.mPage[3] = -1;
        mBASICUI.Insert1(mMESSAGE.Return(1304), mFONTCOLOR.mData[44]);
    }
}

void WORK::W_DESTROY_ITEM_RECV()
{
    W_DESTROY_ITEM_RECV_DATA* r = (W_DESTROY_ITEM_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (r->tResult == 0)
    {
        mMYINFO.mNetworkLock = 0;
        GSOUND::Play(&mGDATA.mSOUND_5[368], 0, 100);
        mMYINFO.mAvatarInfo.aMoney += r->tMoney;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
        mNPCUI.mPage[0] = -1;
        mBASICUI.Insert1(mMESSAGE.Return(1305), mFONTCOLOR.mData[44]);
    }
    else if (r->tResult == 1)
    { 
        mBASICUI.Insert1(mMESSAGE.Return(1912), mFONTCOLOR.mData[44]);
    }
}

void WORK::W_270_TYPE_BATTLE_INFO()
{
    char Buffer[1000];
    W_270_TYPE_BATTLE_INFO_DATA* r = (W_270_TYPE_BATTLE_INFO_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tSort)
    {
    case 1:
        sprintf(Buffer, "[%d]%s", r->tValue, mMESSAGE.Return(1351));
        mBASICUI.Insert1(Buffer, 2);
        GSOUND::Play(&mGDATA.mSOUND_5[372], 0, 100);
        break;

    case 2:
        if (r->tValue <= 0)
        {
            mNETWORK.CLOSE();
            mMAIN.mMainMode = 2;
            mMAIN.mSubMode = 0;
            mMAIN.mTicks = 0;
        }
        else
        {
            sprintf(Buffer, "[%d]%s", r->tValue, mMESSAGE.Return(1350));
            mBASICUI.Insert1(Buffer, 2);
            GSOUND::Play(&mGDATA.mSOUND_5[372], 0, 100);
        }
        break;

    case 3:
        sprintf(Buffer, "[%d]%s", r->tValue, mMESSAGE.Return(1394));
        mBASICUI.Insert1(Buffer, 2);
        break;
    }
}

void WORK::W_COSTUME_STATE_RECV()
{
    int i;
    W_COSTUME_STATE_RECV_DATA* r = (W_COSTUME_STATE_RECV_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tSort)
    {
    case 1:
        if (!r->tResult)
        {
            mMYINFO.mAvatarInfo.aCostumeIndex = r->CostumeIndex;
        }
        break;
    case 2:
        if (!r->tResult)
        {
            mMYINFO.mAvatarInfo.aCostumeIndex = -1;
        }
        break;
    case 3:
        if (!r->tResult)
        {
            mMYINFO.mAvatarInfo.aCostumeIndex += 10;
        }
        break;
    case 4:
        if (!r->tResult)
        {
            mMYINFO.mAvatarInfo.aCostumeIndex -= 10;
        }
        break;
    case 5:
        if (r->tResult)
        {
            if (r->tResult == 1)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mBASICUI.Insert1(mMESSAGE.Return(1518), mFONTCOLOR.mData[44]);
            }
            else if (r->tResult == 2)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
                mBASICUI.Insert1(mMESSAGE.Return(117), mFONTCOLOR.mData[44]);
            }
        }
        else
        {
            mMYINFO.mAvatarInfo.aCostume[r->CostumeIndex] = 0;
            mMYINFO.mAvatarInfo.aTimedCostumeInventory[r->CostumeIndex] = 0;
            mMYINFO.mAvatarInfo.aLegendaryCostume[r->CostumeIndex] = 0;
            mMYINFO.mAvatarInfo.aCostumeIndex = -1;
            for (i = r->CostumeIndex; i < 9; ++i)
            {
                mMYINFO.mAvatarInfo.aCostume[i] = mMYINFO.mAvatarInfo.aCostume[i + 1];
                mMYINFO.mAvatarInfo.aTimedCostumeInventory[i] = mMYINFO.mAvatarInfo.aTimedCostumeInventory[i + 1];
                mMYINFO.mAvatarInfo.aLegendaryCostume[i] = mMYINFO.mAvatarInfo.aLegendaryCostume[i + 1];
            }
            mMYINFO.mAvatarInfo.aCostume[9] = 0;
            mMYINFO.mAvatarInfo.aTimedCostumeInventory[9] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tItemIndex;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = r->tInvenIndex % 8;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = r->tInvenIndex / 8;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
            mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
            GSOUND::Play(&mGDATA.mSOUND_5[296], 0, 100);
            mBASICUI.Insert1(mMESSAGE.Return(1519), mFONTCOLOR.mData[44]);
        }
        break;
    default:
        return;
    }
}

void WORK::W_GET_CASH_ITEM_INFO_RECV()
{
    int index01;
    int index02;
    W_GET_CASH_ITEM_INFO_RECV_DATA* r = (W_GET_CASH_ITEM_INFO_RECV_DATA*)&mNETWORK.mBuffer[0];

    memcpy(&mNPCUI.mCashShopVersion, &r->tCashItemInfoVersion, 4);
    memcpy(&mNPCUI.mCashShopInfo, &r->tCashItemInfo, 4 * (4 * 14 * 10 * 4));

    if (r->tResult)
    {
        mNPCUI.mPossibleGetCashInfo = TRUE;
    }
    else
    {
        for (index01 = 0; index01 < 4; index01++)
        {
            mNPCUI.mCashShopItem[index01] = 1;
            for (index02 = 0; index02 < 10; index02++)
            {
                if (mNPCUI.mCashShopInfo[index01][index02][0][0] > 0)
                {
                    mNPCUI.mCashShopItem[index01] = index02 + 1;
                }
            }
        }
        mNPCUI.mPossibleBuyCashItem = TRUE;
    }
}

void WORK::W_UPDATE_CASH_ITEM_INFO()
{
    mNPCUI.mPossibleGetCashInfo = 1;
    mNPCUI.mPossibleBuyCashItem = 0;
    if (mNPCUI.mActive == 1 && mNPCUI.mWorkId == 21)
    {
        mTRANSFER.T_GET_CASH_ITEM_INFO_SEND();
        mNPCUI.mPossibleGetCashInfo = 0;
        mNPCUI.Off();
    }
}

void WORK::W_GET_ZONE_CONNECT_USER_RECV()
{
    int v0; 
    char* v1;
    float v2;

    v1 = mNETWORK.mBuffer;
    v0 = 0;
    v2 = 0.0;
    memcpy(&v0, &mNETWORK.mBuffer[1], sizeof(v0));
    memcpy(&v2, &mNETWORK.mBuffer[5], sizeof(v2));
    if (v0 >= 1 && v0 <= 351)
    {
        mPLAY.mZonePlayerCount[v0] = v2;
    }
}

void WORK::W_SKY_UP_ITEM_RECV()
{
    W_SKY_UP_ITEM_RECV_DATA* r = (W_SKY_UP_ITEM_RECV_DATA*)&mNETWORK.mBuffer[0];
    ITEM_INFO* t;

    if (r->tResult)
    {
        if (r->tResult == 1)
        {
            mMYINFO.mNetworkLock = 0;
            t = mITEM.Search(mNPCUI.mInv[0].iIndex);
            if (t)
            {
                switch (t->iSort)
                {
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                    GSOUND::Play(&mGDATA.mSOUND_5[305], 0, 100);
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
                    GSOUND::Play(&mGDATA.mSOUND_5[304], 0, 100);
                    break;
                default:
                    break;
                }
                mMYINFO.mAvatarInfo.aMoney -= r->tCost;
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
                mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
                mNPCUI.mPage[0] = -1;
                mNPCUI.mPage[1] = -1;
                mBASICUI.Insert1(mMESSAGE.Return(1645), mFONTCOLOR.mData[44]);
            }
        }
        else if (r->tResult == 2)
        {
            mMYINFO.mNetworkLock = 0;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] += mNPCUI.mInv[0].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][0] = mNPCUI.mInv[1].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][1] = mNPCUI.mInv[1].iX;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][2] = mNPCUI.mInv[1].iY;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][3] += mNPCUI.mInv[1].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][4] = mNPCUI.mInv[1].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][5] = mNPCUI.mInv[1].iSerialNumber;
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][0] = mNPCUI.mInv[1].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][1] = mNPCUI.mInv[1].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][2] = mNPCUI.mInv[1].iSocket[2];
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(1645), mFONTCOLOR.mData[44]);
        }
    }
    else
    {
        mMYINFO.mNetworkLock = 0;
        t = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (t)
        {
            switch (t->iSort)
            {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[303], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[302], 0, 100);
                break;
            default:
                break;
            }
            mMYINFO.mAvatarInfo.aMoney -= r->tCost;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][0] = 0;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][1] = 0;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][2] = 0;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][3] = 0;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][4] = 0;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][5] = 0;
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][0] = 0;
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][1] = 0;
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[1]][mNPCUI.mIndex[1]][2] = 0;
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(222), mFONTCOLOR.mData[44]);
        }
    }
}

void WORK::W_CONTINUE_SKILL_STAT_RECV()
{
    ;
}

void WORK::W_CONTINUE_SKILL_USE_RECV()
{
    W_CONTINUE_SKILL_USE_RECV_DATA* r = (W_CONTINUE_SKILL_USE_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (!r->tResult)
    {
        mPLAY.mAVATAR_OBJECT[0].mDATA.aManaValue = 0;
        mMYINFO.bIsUseContinueSkill = 1;
    }
}
void WORK::W_DICE_BATTLE_RECV()
{
    W_DICE_BATTLE_RECV_DATA* r = (W_DICE_BATTLE_RECV_DATA*)&mNETWORK.mBuffer[0];

    mNPCUI.mGambleInfo[6] = r->tResult1;
    mNPCUI.mGambleInfo[7] = r->tResult2;
    mNPCUI.mGambleInfo[8] = r->tResult3;
    mNPCUI.mGambleInfo[0] = 4;
    mNPCUI.mGambleInfo[9] = timeGetTime();
    if (mNPCUI.mGambleInfo[6] == -1)
    {
        GSOUND::Play(&mGDATA.mSOUND_5[150], 0, 100);
    }
    else if (mNPCUI.mGambleInfo[6] == 1)
    {
        GSOUND::Play(&mGDATA.mSOUND_5[151], 0, 100);
    }
}

void WORK::W_297_TYPE_REMAIN_INFO()
{
    char Buffer[1000]; 
    W_297_TYPE_REMAIN_INFO_DATA* r = (W_297_TYPE_REMAIN_INFO_DATA*)&mNETWORK.mBuffer[0];

    if (r->tSort == 1)
    {
        if (r->tResult1 <= 1)
        {
            sprintf(Buffer, "[%d]%s", r->tResult2, mMESSAGE.Return(316));
        }
        else
        {
            sprintf(Buffer, "[%d]%s", r->tResult2, mMESSAGE.Return(1479));
        }
        mBASICUI.Insert1(Buffer, 1);
    }
    else if (r->tResult2 > 0)
    {
        sprintf(Buffer, "[%d]%s", r->tResult2, mMESSAGE.Return(1839));
        mBASICUI.Insert1(Buffer, 1);
    }
}

void WORK::W_SOCKET_SYSTEM_RECV()
{
    char* tstr;
    int s1, s2, s3, s4, s5, tSocketNum;
    int tCost;
    W_SOCKET_SYSTEM_RECV_DATA* r = (W_SOCKET_SYSTEM_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mNetworkLock = 0;
    switch (r->tSort)
    {
    case 0: // SOCKET_ITEM
        mMYINFO.mAvatarInfo.aMoney -= 100000000;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = mNPCUI.mInv[0].iQuantity;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tSocket[2];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        tstr = mMESSAGE.Return(r->tResult + 1771);
        mBASICUI.Insert1(tstr, 15);
        return;

    case 1: // SOCKET_REMOVE
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = mNPCUI.mInv[0].iQuantity;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tSocket[2];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        tstr = mMESSAGE.Return(1779);
        mBASICUI.Insert1(tstr, 15);
        return;

    case 2: // GEM_ADD
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = mNPCUI.mInv[0].iQuantity;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tSocket[2];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        tstr = mMESSAGE.Return(1781);
        mBASICUI.Insert1(tstr, 15);
        return;

    case 3: // GEM_REMOVE
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = mNPCUI.mInv[0].iQuantity;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tSocket[2];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        tstr = mMESSAGE.Return(1784);
        mBASICUI.Insert1(tstr, 15);
        return;
    }
}

void WORK::W_297_TYPE_REMAIN_MONSTER_INFO()
{
    W_297_TYPE_REMAIN_MONSTER_INFO_DATA* r = (W_297_TYPE_REMAIN_MONSTER_INFO_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mZone297TypeMonsterInfo[0] = r->tTribeUserNum[0];
    mMYINFO.mZone297TypeMonsterInfo[1] = r->tTribeUserNum[1];
    mMYINFO.mZone297TypeMonsterInfo[2] = r->tTribeUserNum[2];
    mMYINFO.mZone297TypeMonsterInfo[3] = r->tTribeUserNum[3];
}

void WORK::W_MULTI_ITEM_CREATE_RECV()
{
    int v18[8];
    int v25[8];
    int v12, v13;
    int i, j, k;
    char* tstr;
    int tstrlen;
    int tRealPage;
    int tRealIndex;
    int tRealSlot;
    ITEM_INFO* tITEM;
    W_MULTI_ITEM_CREATE_RECV_DATA* r = (W_MULTI_ITEM_CREATE_RECV_DATA*)&mNETWORK.mBuffer[0];

    v18[0] = 1;
    v18[1] = 10;
    v18[2] = 100;
    v18[3] = 1000;
    v18[4] = 10000;
    v18[5] = 100000;
    v18[6] = 1000000;
    v18[7] = 10000000;
    v25[0] = 1;
    v25[1] = 100;
    v25[2] = 10000;
    v25[3] = 1000000;
    v25[4] = 1;
    v25[5] = 100;
    v25[6] = 10000;
    v25[7] = 1000000;

    v12 = r->tResult / 1000;
    v13 = r->tResult % 1000;

    mMYINFO.mNetworkLock = 0;
    switch(v12)
    {
    default:
        tstr = mMESSAGE.Return(1849);
        mBASICUI.Insert1(tstr, mFONTCOLOR.mData[44]);
        for (i = 0; i < v13; i++)
        {
            tRealPage = r->iPage % (10 * v18[i]) / v18[i];
            if (i >= 4)
            {
                if (i < 8)
                {
                    tRealIndex = r->iInvenSlot2 % (100 * v25[i]) / v25[i];
                    tRealSlot = r->iInvenIndex2 % (100 * v25[i]) / v25[i];
                }
            }
            else
            {
                tRealIndex = r->iInvenSlot % (100 * v25[i]) / v25[i];
                tRealSlot = r->iInvenIndex % (100 * v25[i]) / v25[i];
            }
            tITEM = mITEM.Search(r->tValue[i]);
            if (tITEM)
            {
                mMYINFO.mAvatarInfo.aInventory[tRealPage][tRealIndex][0] = r->tValue[i];
                mMYINFO.mAvatarInfo.aInventory[tRealPage][tRealIndex][1] = tRealSlot % 8;
                mMYINFO.mAvatarInfo.aInventory[tRealPage][tRealIndex][2] = tRealSlot / 8;
                if (tITEM->iSort == 2)
                {
                    if (tITEM->iIndex == 1109 || tITEM->iIndex == 1224)
                        mMYINFO.mAvatarInfo.aInventory[tRealPage][tRealIndex][3] = 12;
                    else
                        mMYINFO.mAvatarInfo.aInventory[tRealPage][tRealIndex][3] = 999;
                }
                else
                {
                    mMYINFO.mAvatarInfo.aInventory[tRealPage][tRealIndex][3] = 0;
                }
                switch (tITEM->iSort)
                {
                case 3:
                    mMYINFO.mAvatarInfo.aInventory[tRealPage][tRealIndex][4] = 0;
                    break;
                case 28:
                    mMYINFO.mAvatarInfo.aInventory[tRealPage][tRealIndex][4] = 0;
                    break;
                case 31:
                case 32:
                    mMYINFO.mAvatarInfo.aInventory[tRealPage][tRealIndex][4] = 0;
                    break;
                default:
                    mMYINFO.mAvatarInfo.aInventory[tRealPage][tRealIndex][4] = mUTIL.SetISIURFValue(r->tImproveValue, 12, 0);
                    break;
                
                }
                mMYINFO.mAvatarInfo.aInventory[tRealPage][tRealIndex][5] = 0;
            }
        }
        return;
    }
}

void WORK::W_PCROOM_PET_RECV()
{
    W_PCROOM_PET_RECV_DATA* r = (W_PCROOM_PET_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (r->tResult == 1)
    {
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tItemIndex;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = r->tCoord % 8;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = r->tCoord / 8;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = r->tImproveValue;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
        mBASICUI.Insert1(mMESSAGE.Return(1911), mFONTCOLOR.mData[44]);
    }
    else if (r->tResult == 2)
    {
        mBASICUI.Insert1(mMESSAGE.Return(117), mFONTCOLOR.mData[44]);
    }
}

void WORK::W_SET_HOTKEY_INVENTORY_RECV()
{
    W_SET_HOTKEY_INVENTORY_RECV_DATA* r = (W_SET_HOTKEY_INVENTORY_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mAvatarInfo.aHotKey[r->tPage2][r->tIndex2][0] = r->tItem;
    mMYINFO.mAvatarInfo.aHotKey[r->tPage2][r->tIndex2][1] = r->tQuantity;
    mMYINFO.mAvatarInfo.aHotKey[r->tPage2][r->tIndex2][2] = r->tType;
    mMYINFO.mAvatarInfo.aInventory[r->tPage1][r->tIndex1][0] = 0;
    mMYINFO.mAvatarInfo.aInventory[r->tPage1][r->tIndex1][1] = 0;
    mMYINFO.mAvatarInfo.aInventory[r->tPage1][r->tIndex1][2] = 0;
    mMYINFO.mAvatarInfo.aInventory[r->tPage1][r->tIndex1][3] = 0;
    mMYINFO.mAvatarInfo.aInventory[r->tPage1][r->tIndex1][4] = 0;
    mMYINFO.mAvatarInfo.aInventory[r->tPage1][r->tIndex1][5] = 0;
}

void WORK::W_CANCEL_HOISUNDO_OK_RECV()
{
    int i; 
    int j; 
    W_CANCEL_HOISUNDO_OK_RECV_DATA* r = (W_CANCEL_HOISUNDO_OK_RECV_DATA*)&mNETWORK.mBuffer[0];

    i = 0;
    j = 0;
    switch (r->tSort)
    {
    case 297:
        for (i = 0; i < 3; ++i)
        {
            for (j = 0; j < 5; ++j)
            {
                if (!strcmp(mPLAY.mTribeInfo.mValleyOfDeceasedRegistrationLevel[i][j], r->tAvatarName) && i == r->tIndex)
                    strcpy(mPLAY.mTribeInfo.mValleyOfDeceasedRegistrationLevel[i][j], "");
            }
        }
        break;
    case 298:
        for (i = 0; i < 4; ++i)
        {
            for (j = 0; j < 5; ++j)
            {
                if (!strcmp(mPLAY.mTribeInfo.mValleyOfDeceasedRegistrationMaster[i][j], r->tAvatarName) && i == r->tIndex)
                    strcpy(mPLAY.mTribeInfo.mValleyOfDeceasedRegistrationMaster[i][j], "");
            }
        }
        break;
    case 299:
        for (i = 0; i < 4; ++i)
        {
            for (j = 0; j < 5; ++j)
            {
                if (!strcmp(mPLAY.mTribeInfo.mValleyOfDeceasedRegistrationGod[i][j], r->tAvatarName) && i == r->tIndex)
                    strcpy(mPLAY.mTribeInfo.mValleyOfDeceasedRegistrationGod[i][j], "");
            }
        }
        break;
    default:
        return;
    }
    if (!strcmp(mMYINFO.mAvatarInfo.aName, r->tAvatarName))
    {
        mBASICUI.Insert1(mMESSAGE.Return(1906), mFONTCOLOR.mData[44]);
    }
}

void WORK::W_AUTO_CONFIG_RECV()
{
    int i;
    int v3;
    W_AUTO_CONFIG_RECV_DATA* r = (W_AUTO_CONFIG_RECV_DATA*)&mNETWORK.mBuffer[0];

    v3 = -1;
    for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT; ++i)
    {
        if (mPLAY.mAVATAR_OBJECT[i].mCheckValidState && mPLAY.mAVATAR_OBJECT[i].mIndex == r->tIndex && mPLAY.mAVATAR_OBJECT[i].mUniqueNumber == r->tUniqueNumber)
        {
            v3 = i;
            break;
        }
    }
    if (v3 != -1)
    {
        mPLAY.mAVATAR_OBJECT[v3].mDATA.aAutoHuntState = r->tAutoState;
    }
}

void WORK::W_SMELT_ITEM_RECV()
{
    ITEM_INFO* tITEM;
    W_SMELT_ITEM_RECV_DATA* r = (W_SMELT_ITEM_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (r->tResult == 0)
    {
        mMYINFO.mNetworkLock = 0;
        tITEM = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (tITEM)
        {
            switch (tITEM->iSort)
            {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[84], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[81], 0, 100);
                break;
            default:
                break;
            }
            mMYINFO.mAvatarInfo.aKillOtherTribe -= r->tCost;
            mNPCUI.mInv[0].iImproveState = mUTIL.ChangeRefineValue(mNPCUI.mInv[0].iImproveState, r->tImprove);
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] += mNPCUI.mInv[0].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(222), mFONTCOLOR.mData[44]);
        }
    }
    else if (r->tResult == 1)
    {
        mMYINFO.mNetworkLock = 0;
        tITEM = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (tITEM)
        {
            switch (tITEM->iSort)
            {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[85], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[82], 0, 100);
                break;
            default:
                break;
            }
            mMYINFO.mAvatarInfo.aKillOtherTribe -= r->tCost;
            if (mUTIL.ReturnRFValue(mNPCUI.mInv[0].iImproveState) > 0)
            {
                mNPCUI.mInv[0].iImproveState = mUTIL.ChangeRefineValue(mNPCUI.mInv[0].iImproveState, r->tImprove);
            }
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] += mNPCUI.mInv[0].iQuantity;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(223), mFONTCOLOR.mData[44]);
        }
    }
    else if (r->tResult == 2)
    {
        mMYINFO.mNetworkLock = 0;
        tITEM = mITEM.Search(mNPCUI.mInv[0].iIndex);
        if (tITEM)
        {
            switch (tITEM->iSort)
            {
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                GSOUND::Play(&mGDATA.mSOUND_5[86], 0, 100);
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
                GSOUND::Play(&mGDATA.mSOUND_5[83], 0, 100);
                break;
            default:
                break;
            }
            mMYINFO.mAvatarInfo.aKillOtherTribe -= r->tCost;
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(224), mFONTCOLOR.mData[44]);
        }
    }
}

void WORK::W_88_TYPE_INFO()
{

}

void WORK::W_SAMGUNDO_CENTER_INFO()
{
    char Buffer[100]; 
    W_SAMGUNDO_CENTER_INFO_DATA* r = (W_SAMGUNDO_CENTER_INFO_DATA*)&mNETWORK.mBuffer[0];


    memset(Buffer, 0, 100);
    if (r->tSort == 1)
    {
        mMYINFO.mZone88TypeCenterEffect[0] = 1;
        mMYINFO.mZone88TypeCenterFrame[0] = 0.0;
        sprintf(Buffer, "%s[%s]%s", mMESSAGE.Return(r->tTribe + 75), r->tAvatarName, mMESSAGE.Return(243));
        mBASICUI.Insert1(Buffer, 1);
        mBOARDUI.Set(0, 0, Buffer, "");
        sprintf(Buffer, "[5]%s", mMESSAGE.Return(245));
        mBASICUI.Insert1(Buffer, 1);
    }
    else if (r->tSort == 2)
    {
        sprintf(Buffer, "%s[%s]%s", mMESSAGE.Return(r->tTribe + 75), r->tAvatarName, mMESSAGE.Return(244));
        mBASICUI.Insert1(Buffer, 1);
        mBOARDUI.Set(0, 0, Buffer, "");
    }
}

void WORK::W_FISHING_STATE_RECV()
{
    int i;
    int tAvatarIndex;
    W_FISHING_STATE_RECV_DATA* r = (W_FISHING_STATE_RECV_DATA*)&mNETWORK.mBuffer[0];

    tAvatarIndex = -1;
    for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT; ++i)
    {
        if (mPLAY.mAVATAR_OBJECT[i].mCheckValidState && mPLAY.mAVATAR_OBJECT[i].mIndex == r->tUserIndex && mPLAY.mAVATAR_OBJECT[i].mUniqueNumber == r->tUniqueNumber)
        {
            tAvatarIndex = i;
            break;
        }
    }
    if (tAvatarIndex != -1)
    {
        if (r->tSort == 1)
        {
            if (tAvatarIndex)
            {
                mPLAY.mAVATAR_OBJECT[tAvatarIndex].mDATA.mFishingState = r->tFishingState;
                mPLAY.mAVATAR_OBJECT[tAvatarIndex].mDATA.mFishingStep = r->tFishingStep;
            }
            else
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingState = r->tFishingState;
                mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingStep = r->tFishingStep;
                mBASICUI.Insert1(mMESSAGE.Return(2012), mFONTCOLOR.mData[44]);
                mMYINFO.A091();
            }
        }
        else if (r->tSort == 2)
        {
            if (tAvatarIndex)
            {
                mPLAY.mAVATAR_OBJECT[tAvatarIndex].mDATA.mFishingState = r->tFishingState;
                mPLAY.mAVATAR_OBJECT[tAvatarIndex].mDATA.mFishingStep = r->tFishingStep;
            }
            else
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingState = r->tFishingState;
                mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingStep = r->tFishingStep;
                mBASICUI.Insert1(mMESSAGE.Return(2013), mFONTCOLOR.mData[44]);
            }
        }
    }
}

void WORK::W_FISHING_RESULT_RECV()
{
    int i; 
    int tAvatarObjectIndex;
    W_FISHING_RESULT_RECV_DATA* r = (W_FISHING_RESULT_RECV_DATA*)&mNETWORK.mBuffer[0];

    tAvatarObjectIndex = -1;
    for (i = 0; i < mPLAY.MAX_AVATAR_OBJECT; ++i)
    {
        if (mPLAY.mAVATAR_OBJECT[i].mCheckValidState && mPLAY.mAVATAR_OBJECT[i].mIndex == r->tUserIndex && mPLAY.mAVATAR_OBJECT[i].mUniqueNumber == r->tUniqueNumber)
        {
            tAvatarObjectIndex = i;
            break;
        }
    }
    if (tAvatarObjectIndex != -1)
    {
        switch (r->tSort)
        {
        case 1:
            mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.mFishingState = r->tFishingState;
            mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.mFishingStep = r->tFishingStep;
            break;
        case 2:
            mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.mFishingState = r->tFishingState;
            mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.mFishingStep = r->tFishingStep;
            break;
        case 3:
            mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.mFishingState = r->tFishingState;
            mPLAY.mAVATAR_OBJECT[tAvatarObjectIndex].mDATA.mFishingStep = r->tFishingStep;
            break;
        case 4:
            if (!tAvatarObjectIndex)
            {
                mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingState = 0;
                mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingStep = 0;
                mBASICUI.Insert1(mMESSAGE.Return(117), mFONTCOLOR.mData[44]);
                mPLAY.ReturnToTown(0);
            }
            break;
        default:
            return;
        }
    }
}

void WORK::W_FISHING_REWARD_RECV()
{
    W_FISHING_REWARD_RECV_DATA* r = (W_FISHING_REWARD_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (r->tResult == 1)
    {
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tItemIndex;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = r->tCoord % 8;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = r->tCoord / 8;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
        mBASICUI.Insert1(mMESSAGE.Return(1977), mFONTCOLOR.mData[44]);
    }
    else if (r->tResult == 2)
    {
        mBASICUI.Insert1(mMESSAGE.Return(117), mFONTCOLOR.mData[44]);
        mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingState = 0;
        mPLAY.mAVATAR_OBJECT[0].mDATA.mFishingStep = 0;
        mPLAY.ReturnToTown(0);
    }
}

void WORK::W_TRAP_POSITION_RECV()
{
    W_TRAP_POSITION_RECV_DATA* r = (W_TRAP_POSITION_RECV_DATA*)&mNETWORK.mBuffer[0];

    memcpy(mMYINFO.mTrapPosition, &r->mTrapPosition, 60);
}

void WORK::W_FOUR_GUILD_CHALLENGE_RECV()
{
    W_FOUR_GUILD_CHALLENGE_RECV_DATA* r = (W_FOUR_GUILD_CHALLENGE_RECV_DATA*)&mNETWORK.mBuffer[0];
    int i; 

    for (i = 0; i < 7; ++i)
    {
        mGUILD_RANKING_UI.SetChallengeGuildName(i, &r->tGuildName[mMYINFO.mAvatarInfo.aTribe][13 * i]);
    }
}

void WORK::W_DECIDE_CHALLENGE_FOURGUILD_RECV()
{
    float tCoord[3]; 
    W_DECIDE_CHALLENGE_FOURGUILD_RECV_DATA* r = (W_DECIDE_CHALLENGE_FOURGUILD_RECV_DATA*)&mNETWORK.mBuffer[0];

    tCoord[0] = -14.0;
    tCoord[1] = 0.0;
    tCoord[2] = -4242.0;

    if (r->tZoneIndex >= 0 && r->tZoneIndex <= 3 && !r->tResult)
    {
        mNPCUI.FourGuildMoveZone(r->tZoneIndex, tCoord);
    }
}

void WORK::W_FOUR_GUILD_REMAIN_INFO()
{
    char Buffer[100]; 
    W_FOUR_GUILD_REMAIN_INFO_DATA* r = (W_FOUR_GUILD_REMAIN_INFO_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tSort)
    {
    case 0:
        sprintf(Buffer, "[%d]%s", r->tResult, mMESSAGE.Return(1479));
        mBASICUI.Insert1(Buffer, 1);
        return;
    case 1:
        sprintf(Buffer, "[%d]%s", r->tResult, mMESSAGE.Return(843));
        mBASICUI.Insert1(Buffer, 1);
        return;
    case 2:
        switch (r->tResult)
        {
        case 0:
            sprintf(Buffer, mMESSAGE.Return(1996));
            mBOARDUI.Set(1, 0, Buffer, "");
            break;
        case 1:
            sprintf(Buffer, mMESSAGE.Return(1997));
            mBOARDUI.Set(1, 0, Buffer, "");
            break;
        case 2:
            sprintf(Buffer, mMESSAGE.Return(1998));
            mBOARDUI.Set(1, 0, Buffer, "");
            break;
        case 3:
            sprintf(Buffer, mMESSAGE.Return(1999));
            mBOARDUI.Set(1, 0, Buffer, "");
            break;
        case 4:
            sprintf(Buffer, mMESSAGE.Return(2000));
            mBOARDUI.Set(1, 0, Buffer, "");
            break;
        case 5:
            sprintf(Buffer, mMESSAGE.Return(2001));
            mBOARDUI.Set(1, 0, Buffer, "");
            break;
        case 6:
            sprintf(Buffer, mMESSAGE.Return(2002));
            mBOARDUI.Set(1, 0, Buffer, "");
            break;
        case 7:
            sprintf(Buffer, mMESSAGE.Return(2003));
            mBOARDUI.Set(1, 0, Buffer, "");
            break;
        default:
            break;
        }
        mBASICUI.Insert1(Buffer, 1);
        return;
    }
}

void WORK::W_DEPUTY_PSHOP_ACTION_RECV()
{
    int i; 
    int v4; 
    W_DEPUTY_PSHOP_ACTION_RECV_DATA* r = (W_DEPUTY_PSHOP_ACTION_RECV_DATA*)&mNETWORK.mBuffer[0];

    v4 = -1;
    for (i = 0; i < mPLAY.MAX_PROXY_OBJECT; ++i)
    {
        if (mPLAY.mPROXY_OBJECT[i].mCheckValidState && mPLAY.mPROXY_OBJECT[i].mIndex == r->tUserIndex && mPLAY.mPROXY_OBJECT[i].mUniqueNumber == r->tUniqueNumber)
        {
            v4 = i;
            break;
        }
    }
    if (v4 == -1)
    {
        for (i = 0; i < mPLAY.MAX_PROXY_OBJECT && mPLAY.mPROXY_OBJECT[i].mCheckValidState; ++i)
            ;
        if (i != mPLAY.MAX_PROXY_OBJECT && r->tSort == 2)
        {
            mPLAY.mPROXY_OBJECT[i].mCheckValidState = 1;
            mPLAY.mPROXY_OBJECT[i].mIndex = r->tUserIndex;
            mPLAY.mPROXY_OBJECT[i].mUniqueNumber = r->tUniqueNumber;
            mPLAY.mPROXY_OBJECT[i].mProxyUpdateTime = mAPP[0].hPresentElapsedSeconds;
            memcpy(&mPLAY.mPROXY_OBJECT[i].mDATA, &r->mDATA, sizeof(OBJECT_FOR_DEPUTYSHOP));
        }
    }
    else if (r->tSort == 2)
    {
        mPLAY.mPROXY_OBJECT[v4].mProxyUpdateTime = mAPP[0].hPresentElapsedSeconds;
        memcpy(&mPLAY.mPROXY_OBJECT[v4].mDATA, &r->mDATA, sizeof(OBJECT_FOR_DEPUTYSHOP));
    }
    else if (r->tSort == 3)
    {
        mPLAY.mPROXY_OBJECT[v4].Free();
        if (mMYINFO.mSelectObjSort == 7 && mMYINFO.mSelectObjIndex == v4)
        {
            mMYINFO.mSelectObjSort = 0;
        }
    }
}

void WORK::W_GET_DEPUTY_PSHOP_RECV()
{
    char mBuffer[200]; 
    int i, j;
    W_GET_DEPUTY_PSHOP_RECV_DATA* r = (W_GET_DEPUTY_PSHOP_RECV_DATA*)&mNETWORK.mBuffer[0];

    memset(mBuffer, 0, sizeof(mBuffer));
    switch (r->tSort)
    {
    case 0:
        sprintf(mPSHOPUI.mPShopInfo.mName, "%s%s", r->tProxyInfo.mAvatarName, mMESSAGE.Return(2053));
        mPSHOPUI.mPShopInfo.mUniqueNumber = 0;
        mPSHOPUI.mMoney = r->tProxyInfo.mMoney;
        mPSHOPUI.mMoney2 = r->tProxyInfo.mMoney2;
        for (i = 0; i < 5; ++i)
        {
            for (j = 0; j < 5; ++j)
            {
                mPSHOPUI.mPShopInfo.mItemInfo[i][j][0] = r->tProxyInfo.mItemInfo[i][j][0];
                mPSHOPUI.mPShopInfo.mItemInfo[i][j][1] = r->tProxyInfo.mItemInfo[i][j][1];
                mPSHOPUI.mPShopInfo.mItemInfo[i][j][2] = r->tProxyInfo.mItemInfo[i][j][2];
                mPSHOPUI.mPShopInfo.mItemInfo[i][j][3] = r->tProxyInfo.mItemInfo[i][j][3];
                mPSHOPUI.mPShopInfo.mItemInfo[i][j][4] = r->tProxyInfo.mItemInfo[i][j][4];
                mPSHOPUI.mPShopInfo.mItemInfo[i][j][5] = -1;
                mPSHOPUI.mPShopInfo.mItemInfo[i][j][6] = -1;
                mPSHOPUI.mPShopInfo.mItemInfo[i][j][7] = -1;
                mPSHOPUI.mPShopInfo.mItemInfo[i][j][8] = -1;
                mPSHOPUI.mPShopInfo.mItemSocket[i][j][0] = r->tProxyInfo.mItemSocket[i][j][0];
                mPSHOPUI.mPShopInfo.mItemSocket[i][j][1] = r->tProxyInfo.mItemSocket[i][j][1];
                mPSHOPUI.mPShopInfo.mItemSocket[i][j][2] = r->tProxyInfo.mItemSocket[i][j][2];
                mPSHOPUI.mPShopInfo.mItemSocket[i][j][3] = r->tProxyInfo.mItemSocket[i][j][3];
                mPSHOPUI.mPShopInfo.mItemSocket[i][j][4] = r->tProxyInfo.mItemSocket[i][j][4];
            }
        }
        mPSHOPUI.mActive = 1;
        mPSHOPUI.mDisplaySort = 1;
        mINVENUI.Set();
        switch (r->tDefaultSort)
        {
        case 1:
            mEDITBOX.Set(14);
            SetWindowTextA(mEDITBOX.mDATA[13], "");
            mPSHOPUI.mPShopSort = 5;
            mPSHOPUI.mMenuSort = 2;
            break;
        case 2:
            mPSHOPUI.mPShopSort = 6;
            break;
        case 3:
            mPSHOPUI.mPShopSort = 7;
            break;
        }
        break;

    case 1:
        mCBOXUI.Set(54, mBuffer, mMESSAGE.Return(2088));
        break;

    case 100:
    case 102:
    case 103:
        mBASICUI.Insert1(mMESSAGE.Return(2032), mFONTCOLOR.mData[44]);
        break;

    case 101:
        mBASICUI.Insert1(mMESSAGE.Return(2054), mFONTCOLOR.mData[44]);
        break;

    default:
        switch (r->tDefaultSort)
        {
        case 1:
            mEDITBOX.Set(14);
            SetWindowTextA(mEDITBOX.mDATA[13], "");
            mPSHOPUI.mPShopSort = 5;
            mPSHOPUI.mMenuSort = 2;
            break;
        case 2:
            mPSHOPUI.mPShopSort = 6;
            break;
        case 3:
            mPSHOPUI.mPShopSort = 7;
            break;
        }
        break;
    }
}

void WORK::W_SET_DEPUTY_PSHOP_RECV()
{
    int i, j, k;
    W_SET_DEPUTY_PSHOP_RECV_DATA* r = (W_SET_DEPUTY_PSHOP_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mNetworkLock = 0;
    if (r->tSort > 100)
    {
        if (r->tSort <= 1000)
        {
            if (r->tSort == 1000)
            {
            LABEL_8:
                sprintf(mPSHOPUI.mPShopInfo.mName, "%s%s", r->tProxyInfo.mAvatarName, mMESSAGE.Return(2053));
                for (i = 0; i < 5; ++i)
                {
                    for (j = 0; j < 5; ++j)
                    {
                        mPSHOPUI.mPShopInfo.mItemInfo[i][j][0] = r->tProxyInfo.mItemInfo[i][j][0];
                        mPSHOPUI.mPShopInfo.mItemInfo[i][j][1] = r->tProxyInfo.mItemInfo[i][j][1];
                        mPSHOPUI.mPShopInfo.mItemInfo[i][j][2] = r->tProxyInfo.mItemInfo[i][j][2];
                        mPSHOPUI.mPShopInfo.mItemInfo[i][j][3] = r->tProxyInfo.mItemInfo[i][j][3];
                        mPSHOPUI.mPShopInfo.mItemInfo[i][j][4] = r->tProxyInfo.mItemInfo[i][j][4];
                        mPSHOPUI.mPShopInfo.mItemInfo[i][j][5] = -1;
                        mPSHOPUI.mPShopInfo.mItemInfo[i][j][6] = -1;
                        mPSHOPUI.mPShopInfo.mItemInfo[i][j][7] = -1;
                        mPSHOPUI.mPShopInfo.mItemInfo[i][j][8] = -1;
                        mPSHOPUI.mPShopInfo.mItemSocket[i][j][0] = r->tProxyInfo.mItemSocket[i][j][0];
                        mPSHOPUI.mPShopInfo.mItemSocket[i][j][1] = r->tProxyInfo.mItemSocket[i][j][1];
                        mPSHOPUI.mPShopInfo.mItemSocket[i][j][2] = r->tProxyInfo.mItemSocket[i][j][2];
                        mPSHOPUI.mPShopInfo.mItemSocket[i][j][3] = r->tProxyInfo.mItemSocket[i][j][3];
                        mPSHOPUI.mPShopInfo.mItemSocket[i][j][4] = r->tProxyInfo.mItemSocket[i][j][4];
                    }
                }
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue[0];
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = r->tValue[1];
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = r->tValue[2];
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = r->tValue[3];
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = r->tValue[4];
                mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = r->tValue[5];
                mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][0] = r->tValue[6];
                mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][1] = r->tValue[7];
                mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][2] = r->tValue[8];
                mMYINFO.mAvatarInfo.aMoney -= r->tValue[9];
                mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][3] = r->tValue[10];
                mMYINFO.mAvatarInfo.aInventorySocket[r->tPage][r->tIndex][4] = r->tValue[11];
                mCHOICEUI.InitForPick();
                if (mNPCUI.mActive && mNPCUI.mWorkId == 33 && r->tSort == 1000)
                {
                    mNPCUI.mItemSearchInfo[3] = 1;
                    mNPCUI.mItemSearchInfo[4] = 0;
                    mNPCUI.mItemSearchInfo[5] = -1;
                    mNPCUI.mItemSearchInfo[6] = 0;
                    mTRANSFER.T_PSHOP_ITEM_INFO_SEND(mNPCUI.mItemSearchInfo[1], mNPCUI.mItemSearchInfo[2]);
                }
                if (r->tSort == 1000)
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2112), mFONTCOLOR.mData[44]);
                }
                else
                {
                    mBASICUI.Insert1(mMESSAGE.Return(2113), mFONTCOLOR.mData[44]);
                }
            }
            else
            {
                switch (r->tSort)
                {
                case 101:
                    mPSHOPUI.Set();
                    mINVENUI.Off();
                    mCHOICEUI.InitForDown();
                    mBASICUI.Insert1(mMESSAGE.Return(2055), mFONTCOLOR.mData[44]);
                    break;
                case 102:
                    mPSHOPUI.Set();
                    mINVENUI.Off();
                    mCHOICEUI.InitForDown();
                    mBASICUI.Insert1(mMESSAGE.Return(2056), mFONTCOLOR.mData[44]);
                    break;
                case 103:
                    mPSHOPUI.Set();
                    mINVENUI.Off();
                    mCHOICEUI.InitForDown();
                    mBASICUI.Insert1(mMESSAGE.Return(2057), mFONTCOLOR.mData[44]);
                    break;
                case 104:
                    mPSHOPUI.Set();
                    mINVENUI.Off();
                    mCHOICEUI.InitForDown();
                    mBASICUI.Insert1(mMESSAGE.Return(2058), mFONTCOLOR.mData[44]);
                    break;
                case 105:
                    mPSHOPUI.Set();
                    mINVENUI.Off();
                    mCHOICEUI.InitForDown();
                    mBASICUI.Insert1(mMESSAGE.Return(2237), mFONTCOLOR.mData[44]);
                    break;
                default:
                    return;
                }
            }
        }
    }
    else if (r->tSort == 100)
    {
        mPSHOPUI.Set();
        mINVENUI.Off();
        mCHOICEUI.InitForDown();
        mBASICUI.Insert1(mMESSAGE.Return(2054), mFONTCOLOR.mData[44]);
    }
    else
    {
        switch (r->tSort)
        {
        case 0:
            goto LABEL_8;
        case 1:
        case 2:
        case 3:
        case 4:
            mPSHOPUI.Set();
            mINVENUI.Off();
            mCHOICEUI.InitForDown();
            mBASICUI.Insert1(mMESSAGE.Return(2032), mFONTCOLOR.mData[44]);
            break;
        case 5:
            mPSHOPUI.Set();
            mINVENUI.Off();
            mCHOICEUI.InitForDown();
            mBASICUI.Insert1(mMESSAGE.Return(2066), mFONTCOLOR.mData[44]);
            break;
        default:
            return;
        }
    }
}

void WORK::W_SET_DEPUTY_PSHOP_MONEY_RECV()
{
    W_SET_DEPUTY_PSHOP_MONEY_RECV_DATA* r = (W_SET_DEPUTY_PSHOP_MONEY_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mNetworkLock = 0;
    switch (r->tSort)
    {
    case 0:
        mPSHOPUI.mMoney = 0;
        mPSHOPUI.mMoney2 = 0;
        mMYINFO.mAvatarInfo.aMoney += r->tMoney;
        mMYINFO.mAvatarInfo.aMoney2 += r->tMoney2;
        mBASICUI.Insert1(mMESSAGE.Return(2051), mFONTCOLOR.mData[44]);
        break;
    case 1:
        mBASICUI.Insert1(mMESSAGE.Return(101), mFONTCOLOR.mData[44]);
        break;
    case 2:
        mBASICUI.Insert1(mMESSAGE.Return(2050), mFONTCOLOR.mData[44]);
        break;
    case 3:
        mBASICUI.Insert1(mMESSAGE.Return(2032), mFONTCOLOR.mData[44]);
        break;
    case 4:
        mBASICUI.Insert1(mMESSAGE.Return(2052), mFONTCOLOR.mData[44]);
        break;
    default:
        return;
    }
}

void WORK::W_ITEM_TO_BAG_RECV()
{
    W_ITEM_TO_BAG_RECV_DATA* r = (W_ITEM_TO_BAG_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (!r->tResult)
    {
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tIndex;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = r->tCoord % 8;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = r->tCoord / 8;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
    }
}

void WORK::W_FACTION_NOTICE_RECV()
{
    char Buffer[1000];
    W_FACTION_NOTICE_RECV_DATA* r = (W_FACTION_NOTICE_RECV_DATA*)&mNETWORK.mBuffer[0];

    sprintf(Buffer, "[%s] %s", r->tAvatarName, r->tContent);
    mBASICUI.Insert2(Buffer, 24, r->tAvatarName);
}
void WORK::W_BUY_CAPSULE_ITEM_RECV()
{
    W_BUY_CAPSULE_ITEM_RECV_DATA* r = (W_BUY_CAPSULE_ITEM_RECV_DATA*)&mNETWORK.mBuffer[0];
    int tPage, tIndex, tX, tY;

    mMYINFO.mNetworkLock = 0;

    switch (mCAPSULEUI.mBuySort)
    {
    case 1: mMYINFO.mAvatarInfo.aCapsuleMallPoints -= 2000; break;
    case 2: mMYINFO.mAvatarInfo.aCapsuleOnlineTime -= 4000; break;
    }

    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tItemIndex;
    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = r->tX;
    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = r->tY;
    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
    mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
    mBASICUI.Insert1(mMESSAGE.Return(681), 15);
    mCAPSULEUI.DrawString(mMESSAGE.Return(681));

    if (mCAPSULEUI.mBuyNum != mCAPSULEUI.mBuyQuantity)
    {
        mINVENUI.PutInventory1(-1, -1, 1103, 0, &tPage, &tIndex, &tX, &tY, -1);
        if (tPage == -1)
        {
            mCAPSULEUI.mBuyNum = 0;
            mBASICUI.Insert1(mMESSAGE.Return(117), mFONTCOLOR.mData[44]);
            mCAPSULEUI.DrawString(mMESSAGE.Return(117));
            return;
        }
        mMYINFO.mNetworkLock = 1;
        mTRANSFER.T_BUY_CAPSULE_SEND(mCAPSULEUI.mBuySort, tPage, tIndex, tX, tY);
        mCAPSULEUI.mBuyNum++;
    }
    else
    {
        mCAPSULEUI.mBuyNum = 0;
    }
}
void WORK::W_DEMAND_HERO_RANK_CURRENT()
{
    W_DEMAND_HERO_RANK_CURRENT_DATA* r = (W_DEMAND_HERO_RANK_CURRENT_DATA*)&mNETWORK.mBuffer[0];

    if (!r->tResult)
    {
        memcpy(&mPLAY.tCurrentHeroRankNames, &r->mDATA, sizeof(HERO_RANKING_INFO));
    }
}
void WORK::W_GET_HERO_RANK_REWARD()
{
    W_GET_HERO_RANK_REWARD_DATA* r = (W_GET_HERO_RANK_REWARD_DATA*)&mNETWORK.mBuffer[0];

    switch (r->tResult)
    {
    case 0:
        mMYINFO.mAvatarInfo.aKillOtherTribe += r->tValue;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aKillOtherTribe += r->tValue;
        mBASICUI.Insert1(mMESSAGE.Return(2170), 15);
        break;
    case 1:
        mBASICUI.Insert1(mMESSAGE.Return(2169), mFONTCOLOR.mData[44]);
        break;
    case 2:
        mBASICUI.Insert1(mMESSAGE.Return(117), mFONTCOLOR.mData[44]);
        break;
    case 3:
        mBASICUI.Insert1(mMESSAGE.Return(2249), mFONTCOLOR.mData[44]);
        break;
    default:
        return;
    }
}
void WORK::W_DEMAND_HERO_RANK_OLD()
{
    W_DEMAND_HERO_RANK_OLD_DATA* r = (W_DEMAND_HERO_RANK_OLD_DATA*)&mNETWORK.mBuffer[0];

    if (!r->tResult)
    {
        memcpy(&mPLAY.tOldHeroRankNames, &r->mDATA, sizeof(HERO_RANKING_INFO));
    }
}
void WORK::W_TOWER_UPGRADE_RECV()
{
    W_TOWER_UPGRADE_RECV_DATA* r = (W_TOWER_UPGRADE_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (!r->tResult)
    {
        mMYINFO.mNetworkLock = 0;
        mMYINFO.mAvatarInfo.aMoney -= 500000000;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = 0;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = 0;
        mBASICUI.Insert1(mMESSAGE.Return(2259), mFONTCOLOR.mData[44]);
        return;
    }
}
void WORK::W_TOWER_INFO_RECV()
{
    W_TOWER_INFO_RECV_DATA* r = (W_TOWER_INFO_RECV_DATA*)&mNETWORK.mBuffer[0];

    memcpy(&mTOWERBUILDUI.mTower, &r->tTower, 96);
}
void WORK::W_TOWER_REPAIR_RECV()
{
    
}
void WORK::W_319_BATTLE_TYPE_INFO_RECV()
{
    char Buffer[1000]; 
    W_319_BATTLE_TYPE_INFO_RECV_DATA* r = (W_319_BATTLE_TYPE_INFO_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mLevelBattle319TypeRemainTime = r->tRemainTime / 2;
    sprintf(Buffer, "[%d]%s", mMYINFO.mLevelBattle319TypeRemainTime, mMESSAGE.Return(843));
    mBASICUI.Insert1(Buffer, 1);
    if (mMYINFO.mLevelBattle319TypeRemainTime <= 30)
    {
        if (mMYINFO.mLevelBattle319TypeRemainTime)
        {
            mBOARDUI.Set(2, 1, Buffer, "");
        }
    }
}
void WORK::W_DAILY_MISSION_RECV()
{
    int i;
    W_DAILY_MISSION_RECV_DATA* r = (W_DAILY_MISSION_RECV_DATA*)&mNETWORK.mBuffer[0];

    if (r->tResult == 1)
    {
        if (r->tSort)
        {
            if (r->tSort == 1)
            {
                mMYINFO.mAvatarInfo.aDailyWarCount = r->tWarCount;
                mMYINFO.mAvatarInfo.aDailyPVPCount = r->tPVPCount;
                mMYINFO.mAvatarInfo.aDailyPVMKillCount = r->tPVMCount;
                mMYINFO.mAvatarInfo.aDailyOnlineTime = r->tOnlineTime;
                mBASICUI.Insert1(mMESSAGE.Return(2373), mFONTCOLOR.mData[44]);
            }
        }
        else
        {
            mMYINFO.mAvatarInfo.aDailyWarCount = r->tWarCount;
            mMYINFO.mAvatarInfo.aDailyPVPCount = r->tPVPCount;
            mMYINFO.mAvatarInfo.aDailyPVMKillCount = r->tPVMCount;
            mMYINFO.mAvatarInfo.aDailyOnlineTime = r->tOnlineTime;
            mNPCUI.mWorkId = 62;
            for (i = 0; i < 100; ++i)
            {
                mNPCUI.mIsClick[i] = 0;
            }
        }
    }
    else if (r->tResult == 2)
    {
        switch (r->tSort)
        {
        case 0:
            mMYINFO.mAvatarInfo.aDailyWarCount = r->tWarCount;
            mMYINFO.mAvatarInfo.aDailyPVPCount = r->tPVPCount;
            mMYINFO.mAvatarInfo.aDailyPVMKillCount = r->tPVMCount;
            mMYINFO.mAvatarInfo.aDailyOnlineTime = r->tOnlineTime;
            mNPCUI.Off();
            mBASICUI.Insert1(mMESSAGE.Return(2377), mFONTCOLOR.mData[44]);
            break;
        case 1:
        case 2:
            mBASICUI.Insert1(mMESSAGE.Return(223), mFONTCOLOR.mData[44]);
            break;
        case 3:
            mBASICUI.Insert1(mMESSAGE.Return(117), mFONTCOLOR.mData[44]);
            break;
        default:
            return;
        }
    }
}

void WORK::W_CLOAK_UPGRADE_RECV()
{
    W_CLOAK_UPGRADE_RECV_DATA* r = (W_CLOAK_UPGRADE_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mNetworkLock = 0;
    mMYINFO.mAvatarInfo.aMoney -= 10000000;
    if (mITEM.Search(mNPCUI.mInv[0].iIndex))
    {
        if (r->tResult)
        {
            if (r->tResult == 1)
            {
                GSOUND::Play(&mGDATA.mSOUND_5[305], 0, 100);
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] += mNPCUI.mInv[0].iQuantity;
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
                mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
                mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
                mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
                mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
                mNPCUI.mPage[0] = -1;
                mNPCUI.mPage[1] = -1;
                mBASICUI.Insert1(mMESSAGE.Return(2389), mFONTCOLOR.mData[44]);
            }
        }
        else
        {
            GSOUND::Play(&mGDATA.mSOUND_5[303], 0, 100);
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = r->tValue[0];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = r->tValue[1];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = r->tValue[2];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] = r->tValue[3];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = r->tValue[4];
            mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = r->tValue[5];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
            mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
            mNPCUI.mPage[0] = -1;
            mNPCUI.mPage[1] = -1;
            mBASICUI.Insert1(mMESSAGE.Return(2388), mFONTCOLOR.mData[44]);
        }
    }
}

void WORK::W_BOOZE_DRINK_RECV()
{
    W_BOOZE_DRINK_RECV_DATA* r = (W_BOOZE_DRINK_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mNetworkLock = 0;

    switch (r->tResult)
    {
    case 0:
        mMYINFO.mAvatarInfo.aWineDrinkIndex = r->tWineIndex;
        mMYINFO.mAvatarInfo.aWineBottle1Quantity[mMYINFO.mAvatarInfo.aWineDrinkIndex] -= 1;
        mMYINFO.mAvatarInfo.aActiveBoozeTime = 60;
        mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mFACTOR.GetMaxLife();
        mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
        if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue)
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue;
        }
        break;

    default:
        break;
    }
    /*if (r->tSort)
    {
        if (r->tSort == 1 && !r->tResult)
        {
            mMYINFO.mAvatarInfo.aWineBottle1Quantity[r->tWineIndex] = 10;
            mMYINFO.mAvatarInfo.aKillOtherTribe -= 10;
        }
    }
    else if (!r->tResult)
    {
        if (mMYINFO.mAvatarInfo.aWineDrinkIndex != r->tWineIndex && mMYINFO.mAvatarInfo.aActiveBoozeTime >= 0)
        {
            if (mMYINFO.mAvatarInfo.aWineBottle[mMYINFO.mAvatarInfo.aWineDrinkIndex] == 878)
                mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            if (mMYINFO.mAvatarInfo.aWineBottle1Quantity[mMYINFO.mAvatarInfo.aWineDrinkIndex] < 1)
                mMYINFO.mAvatarInfo.aWineBottle[mMYINFO.mAvatarInfo.aWineDrinkIndex] = 0;
        }
        mMYINFO.mAvatarInfo.aWineDrinkIndex = r->tWineIndex;
        --mMYINFO.mAvatarInfo.aWineBottle1Quantity[r->tWineIndex];
        mMYINFO.mAvatarInfo.aActiveBoozeTime = 60;
        if (mMYINFO.mAvatarInfo.aWineBottle[mMYINFO.mAvatarInfo.aWineDrinkIndex] == 878)
        {
            mPLAY.mAVATAR_OBJECT[0].mDATA.aMaxLifeValue = mFACTOR.GetMaxLife();
            if (mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue > mFACTOR.GetMaxLife())
                mPLAY.mAVATAR_OBJECT[0].mDATA.aLifeValue = mFACTOR.GetMaxLife();
        }
    }*/
}

void WORK::W_IMPROVE_LEGENDARY_RECV()
{
    W_IMPROVE_LEGENDARY_RECV_DATA* r = (W_IMPROVE_LEGENDARY_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mNetworkLock = 0;
    switch (r->tSort)
    {
    case 0: // Gear Improve
        if (r->tResult == 0)
        {
            mBASICUI.Insert1(mMESSAGE.Return(222), 15);
        }
        else if (r->tResult == 1)
        {
            mBASICUI.Insert1(mMESSAGE.Return(223), 15);
        }
        mNPCUI.mInv[0].iImproveState = r->tImproveState;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iIndex;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iX;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iY;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][3] += mNPCUI.mInv[0].iQuantity;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][4] = mNPCUI.mInv[0].iImproveState;
        mMYINFO.mAvatarInfo.aInventory[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][5] = mNPCUI.mInv[0].iSerialNumber;
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][0] = mNPCUI.mInv[0].iSocket[0];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][1] = mNPCUI.mInv[0].iSocket[1];
        mMYINFO.mAvatarInfo.aInventorySocket[mNPCUI.mPage[0]][mNPCUI.mIndex[0]][2] = mNPCUI.mInv[0].iSocket[2];
        mNPCUI.mPage[0] = -1;
        mNPCUI.mPage[1] = -1;
        return;
    }
}

void WORK::W_COSTUME_HIDE_RECV()
{
    W_COSTUME_HIDE_RECV_DATA* r = (W_COSTUME_HIDE_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mNetworkLock = 0;
    mPLAY.mAVATAR_OBJECT[0].mDATA.aCostumeHide = r->tResult;
}

void WORK::W_DEMAND_BLOOD_SHOP_RECV()
{
    W_DEMAND_BLOOD_SHOP_RECV_DATA* r = (W_DEMAND_BLOOD_SHOP_RECV_DATA*)&mNETWORK.mBuffer[0];

    memcpy(&mNPCUI.mBloodStoreInfo, &r->mBloodStoreInfo, 600);
    mNPCUI.mBloodStoreMaxPage = r->mBloodStorePages / 10;
    mMYINFO.mNetworkLock = 0;
}

void WORK::W_BUY_BLOOD_SHOP_RECV()
{
    W_BUY_BLOOD_SHOP_RECV_DATA* r = (W_BUY_BLOOD_SHOP_RECV_DATA*)&mNETWORK.mBuffer[0];

    mMYINFO.mNetworkLock = 0;
    if (!r->tResult)
    {
        mMYINFO.mAvatarInfo.aPK = r->tPKPoints;
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][0] = r->tValue[0];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][1] = r->tValue[1];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][2] = r->tValue[2];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][3] = r->tValue[3];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][4] = r->tValue[4];
        mMYINFO.mAvatarInfo.aInventory[r->tPage][r->tIndex][5] = r->tValue[5];
        mBASICUI.Insert1(mMESSAGE.Return(681), mFONTCOLOR.mData[44]);
    }
}