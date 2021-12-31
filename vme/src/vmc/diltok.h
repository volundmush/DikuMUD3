/*
 $Author: All $
 $RCSfile: diltok.h,v $
 $Date: 2005/06/28 20:17:48 $
 $Revision: 2.7 $
 */

#ifndef _MUD_DILTOK_H
#define _MUD_DILTOK_H

struct symbols
{
    const 	char *nam;
    int val;
} dilsym[] = {

    /* DIL Symbol Code */
    {"dilbegin",DILSC_BEG},
    {"var",DILSC_VAR},
    {"code",DILSC_COD},
    {"external",DILSC_EXT},
    {"dilend",DILSC_END},
    {"external",DILSC_EXT},
    {"recall", DILSC_REC},
    {"aware", DILSC_AWA},
    {"unique", DILSC_UNIQUE},
    {"fnpri", DILSC_PRIORITY},

    /* DIL Symbol Expr (functions) */

    {"spellindex", DILSE_SPLX},
    {"spellinfo", DILSE_SPLI},
    {"moneystring", DILSE_MONS},
    {"pathto", DILSE_PATH},
    {"can_carry", DILSE_CARY},
    {"islight", DILSE_ISLT},
    {"getcolor", DILSE_GETCLR},
    {"addcolor", DILSE_ADDCLR},
    {"delcolor", DILSE_DELCLR},
    {"changecolor", DILSE_CHGCLR},
    {"replace",DILSE_REPLACE},
    {"getcmd",DILSE_GETCMD},
    {"left",DILSE_LEFT},
    {"tolower",DILSE_TOLOWER},
    {"toupper",DILSE_TOUPPER},
    {"right",DILSE_RIGHT},
    {"mid",DILSE_MID},
    {"fits", DILSE_FIT},
    {"restore", DILSE_RESTA},
    {"openroll", DILSE_OPRO},
    {"equipment", DILSE_EQPM},
    {"meleeattack", DILSE_MEL},
    {"meleedamage", DILSE_MELDAM},
    {"cast_spell", DILSE_CST},
    {"interrupt",DILSE_INTR},
    {"clear",DILSI_CLI},
    {"and",DILSE_LAND},
    {"or",DILSE_LOR},
    {"not", DILSE_NOT},
    {"atoi",DILSE_ATOI},
    {"isplayer",DILSE_ISPLAYER},
    {"itoa",DILSE_ITOA},
    {"rnd",DILSE_RND},
    {"dildestroy",DILSE_DLD},
    {"dilfind",DILSE_DLF},
    {"dilcall",DILSE_CALL},
    {"findunit",DILSE_FNDU},
    {"findsymbolic",DILSE_FNDS},
    {"findroom",DILSE_FNDR},
    {"findzone",DILSE_FNDZ},
    {"findrndunit",DILSE_FNDRU},
    {"load",DILSE_LOAD},
    {"clone",DILSE_CLONE},
    {"isset",DILSE_ISS},
    {"isaff", DILSE_ISA},
    {"in",DILSE_IN},
    {"getword",DILSE_GETW},
    {"getwords",DILSE_GETWS},
    {"split", DILSE_SPLIT},
    {"strdir", DILSE_SDIR},
    {"unitdir", DILSE_UDIR},
    {"ghead", DILSE_GHEAD},
    {"pc_head", DILSE_PHEAD},
    {"global_head", DILSE_GHEAD},
    {"obj_head", DILSE_OHEAD},
    {"npc_head", DILSE_NHEAD},
    {"room_head", DILSE_RHEAD},
    {"zhead", DILSE_ZHEAD},
    {"zone_head", DILSE_ZHEAD},
    {"command_head", DILSE_CHEAD},
    {"chead", DILSE_CHEAD},
    {"length",DILSE_LEN},
    {"command",DILSE_CMDS},
    {"skip", DILSE_SKIP},
    {"null",DILSE_NULL},
    {"self",DILSE_SELF},
    {"activator",DILSE_ACTI},
    {"medium",DILSE_MEDI},
    {"target",DILSE_TARG},
    {"power",DILSE_POWE},
    {"argument",DILSE_ARGM},
    {"cmdstr",DILSE_CMST},
    {"excmdstr",DILSE_EXCMST},
    {"excmdstr_case",DILSE_EXCMSTC},
    {"gamestate",DILSI_GMSTATE},
    {"heartbeat",DILSE_HRT},
    {"mudday",DILSE_TDA},
    {"mudhour",DILSE_THO},
    {"mudmonth",DILSE_TMD},
    {"mudyear",DILSE_TYE},
    {"realtime",DILSE_RTI},
    {"weapon_info",DILSE_WEPINFO},
    {"weather",DILSE_WEAT},
    {"attack_spell", DILSE_ATSP},
    {"textformat", DILSE_TXF},
    {"asctime", DILSE_AST},
    {"paycheck", DILSE_PCK},
    {"savestr", DILSE_SVSTR},
    {"loadstr", DILSE_LDSTR},
    {"flog", DILSE_FLOG},
    {"insert", DILSI_INSLST},
    {"remove", DILSI_REMLST},
    {"send_pre", DILSE_SENDPRE},
    {"strcmp", DILSE_STRCMP},
    {"strncmp", DILSE_STRNCMP},
    {"sact",DILSE_SACT}, // MS2020
    {"getinteger",DILSE_GINT}, // MS2020
    {"shell",DILSE_SHELL},
    
    /* DIL Symbol Inst (procedures) */

    {"follow",DILSI_FOLO},
    {"logcrime",DILSI_LCRI},

    {"sendtext",DILSI_SETE},
    {"beginedit",DILSI_EDIT},
    {"killedit",DILSI_KEDIT},
    {"store",DILSI_STORA},
    {"delstr",DILSE_DELSTR},
    {"delunit", DILSE_DELUNIT},
    {"set_fighting",DILSI_SETF},
    {"stop_fighting",DILSI_STOPF},
    {"change_speed",DILSI_CHAS},
//   {"walkto",DILSI_WLK},
    {"set_weight_base",DILSI_SET_W_BASE},
    {"set_weight",DILSI_SET_W},
    {"dispatch", DILSI_DISPATCH},
    {"setbright",DILSI_SBT},
    {"dilcopy",DILSI_DLC},
    {"pagestring",DILSI_PGSTR},
    {"return",DILSI_RTS},
    {"log", DILSI_LOG},
    {"sendtoall",DILSI_SNTA},
    {"sendtoalldil",DILSI_SNTADIL},
    {"position_update",DILSI_PUP},
    {"wait",DILSI_WIT},
    {"while",DILSI_WHI},
    {"on",DILSI_ON},
    {"if",DILSI_IF},
    {"else",DILSI_ELS},
    {"act",DILSI_ACT},
    {"goto",DILSI_GOT},
    {"block",DILSI_BLK},
    {"priority",DILSI_PRI},
    {"nopriority",DILSI_NPR},
    {"quit",DILSI_QUIT},
    {"link",DILSI_LNK},
    {"experience", DILSI_EXP},
    {"set",DILSI_SET},
    {"unset",DILSI_UST},
    {"addstring",DILSI_ADL},
    {"substring",DILSI_SUL},
    {"addextra",DILSI_ADE},
    {"subextra",DILSI_SUE},
    {"destroy",DILSI_DST},
    {"send_done",DILSI_SNDDONE},
    {"exec",DILSI_EXE},
    {"send",DILSI_SND},
    {"sendto",DILSI_SNT},
    {"secure",DILSI_SEC},
    {"unsecure",DILSI_USE},
//   {"on_activation",DILSI_OAC},
//   {"on_dildestroy",DILSI_ODD},
    {"subaff", DILSI_SUA},
    {"addaff", DILSI_ADA},
    {"addequip", DILSI_EQP},
    {"unequip", DILSI_UEQ},
//   {"for", DILSI_FOR},
    {"foreach", DILSI_FOE},
    {"break", DILSI_BRK},
    {"delete_player", DILSI_DELPC},
    {"set_password", DILSI_SETPWD},
    {"check_password", DILSE_CKPWD},
    {"reboot", DILSI_REBOOT},
    {"continue", DILSI_CNT},
    {"acc_modify",DILSI_AMOD},
    {"reset_level",DILSI_RSLV},
    {"reset_vlevel",DILSI_RSVLV},
    {"reset_race",DILSI_RSRCE},

    /* DIL Symbol Field */
    {"info", DILSF_INFO},

    {"lifespan", DILSF_LSA},

    {"acc_balance", DILSF_ABAL},
    {"acc_total",   DILSF_ATOT},
    {"loglevel", DILSF_LOGLVL},
    {"speed", DILSF_SPD},
    {"loadcount", DILSF_LCN},
    {"master", DILSF_MAS},
    {"follower", DILSF_FOL},
    {"zoneidx",DILSF_ZOI},
    {"nameidx",DILSF_NMI},
    {"symname", DILSF_SYMNAME},
    {"editing",DILSF_EDT},
    {"switched",DILSF_SWT},
    {"idx",DILSF_IDX},
    {"key",DILSF_KEY},
    {"offensive",DILSF_OFFEN},
    {"defensive",DILSF_DEFEN},
    {"type",DILSF_TYP},
    {"next",DILSF_NXT},
    {"names",DILSF_NMS},
    {"name",DILSF_NAM},
    {"outside_descr",DILSF_ODES},
    {"inside_descr",DILSF_IDES},
    {"descr",DILSF_DES},
    {"vals",DILSF_VALS},
    {"title",DILSF_TIT},
    {"extra",DILSF_EXT},
    {"outside",DILSF_OUT},
    {"inside",DILSF_INS},
    {"gnext",DILSF_GNX},
    {"gprevious",DILSF_GPR},
    {"light",DILSF_LGT},
    {"bright",DILSF_BGT},
    {"minv",DILSF_MIV},
    {"illum",DILSF_ILL},
    {"flags",DILSF_FL},
    {"manipulate",DILSF_MAN},
    {"openflags",DILSF_OFL},
    {"opendiff", DILSF_OPENDIFF},
    {"max_hp",DILSF_MHP},
    {"max_mana",DILSF_MMA},
    {"max_endurance",DILSF_MED},
    {"hp",DILSF_CHP},
    {"baseweight",DILSF_BWT},
    {"weight",DILSF_WGT},
    {"capacity",DILSF_CAP},
    {"alignment",DILSF_ALG},
    {"spells",DILSF_SPL},
    {"spell_levels",DILSF_SPL_L},
    {"spell_costs",DILSF_SPL_C},
    {"hasfunc",DILSF_FUN},
    {"zone",DILSF_ZON},

    {"visible",DILSE_VISI},
    {"opponent",DILSE_OPPO},
    {"getopponent",DILSE_GOPP},
    {"opponentcount",DILSF_OPPCT},

    {"getfollower",DILSE_GFOL},
    {"followercount",DILSF_FOLCT},

    {"purse",DILSE_PURS},
    {"transfermoney",DILSE_TRMO},

    {"objecttype",DILSF_OTY},
    {"value",DILSF_VAL},
    {"objectflags",DILSF_EFL},
    {"cost",DILSF_CST},
    {"rent",DILSF_RNT},
    {"equip",DILSF_EQP},

    {"exit_names",DILSF_ONM},
    {"exit_info",DILSF_XNF},
    {"exit_key",DILSF_EXITKEY},
    {"exit_to",DILSF_TOR},
    {"exit_diff", DILSF_EXITDIFF},
    {"roomflags",DILSF_RFL},
    {"movement",DILSF_MOV},
    {"mapx",DILSF_MAPX},
    {"mapy",DILSF_MAPY},

    {"sex",DILSF_SEX},
    {"race",DILSF_RCE},
    {"abilities",DILSF_ABL},
    {"ability_levels",DILSF_ABL_L},
    {"ability_costs",DILSF_ABL_C},
    {"exp",DILSF_EXP},
    {"exptol",DILSF_EXPTOL},
    {"level",DILSF_LVL},
    {"profession",DILSF_PROF},
    {"vlevel",DILSF_VLVL},
    {"height",DILSF_HGT},
    {"position",DILSF_POS},
    {"attack_type",DILSF_ATY},
    {"natural_armour",DILSF_NARM},
    {"mana",DILSF_MNA},
    {"endurance",DILSF_END},
    {"charflags",DILSF_AFF},
    {"dex_red",DILSF_DRE},
    {"fighting",DILSF_FGT},
    {"weapons",DILSF_WPN},
    {"weapon_levels",DILSF_WPN_L},
    {"weapon_costs",DILSF_WPN_C},

    {"defaultpos",DILSF_DEF},
    {"npcflags",DILSF_ACT},

    {"birth", DILSF_BIR},
    {"playtime",DILSF_PTI},
    {"crimes",DILSF_CRM},
    {"full",DILSF_FLL},
    {"thirst",DILSF_THR},
    {"drunk",DILSF_DRK},
    {"skill_points",DILSF_SPT},
    {"ability_points",DILSF_APT},
    {"guild",DILSF_GLD},
    {"prompt",DILSF_PROMPT},
    {"quests",DILSF_QST},
    {"skills",DILSF_SKL},
    {"skill_levels",DILSF_SKL_L},
    {"skill_costs",DILSF_SKL_C},

    {"pcflags",DILSF_PCF},
    {"hometown",DILSF_HOME},
    {"lastroom",DILSF_LASTROOM},
    /*Zone Ptr Fields*/
    {"rooms", DILSF_ROOMS},
    {"objs", DILSF_OBJS},
    {"npcs", DILSF_NPCS},
    {"roomcount", DILSF_NROOMS},
    {"objcount", DILSF_NOBJS},
    {"npccount", DILSF_NNPCS},
    {"resetmode", DILSF_RSTMD},
    {"resettime", DILSF_RSTTM},
    {"access", DILSF_ACCESS},
    {"loadlevel", DILSF_LDLVL},
    {"fname", DILSF_FNAME},
    {"notes", DILSF_NOTES},
    {"help", DILSF_HELP},
    {"creators", DILSF_CREATORS},
    {"payonly", DILSF_PAYONLY},
    {"skill_name", DILSE_SKITXT},
    {"weapon_name", DILSE_WPNTXT},

    /* DIL Symbol Type */
    {"unitptr",DILST_UP},
    {"integer",DILST_INT},
    {"extraptr",DILST_EDP},
    {"string",DILST_SP},
    {"stringlist",DILST_SLP},
    {"intlist",DILST_ILP},
    {"zoneptr", DILST_ZP},
    {"cmdptr", DILST_CP},
    {0,0}
};

#endif /* _MUD_DILTOK_H */
