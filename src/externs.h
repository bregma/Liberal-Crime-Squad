#ifndef EXTERNS_H_INCLUDED
#define EXTERNS_H_INCLUDED

#include <includes.h>

extern string savefile_name;

extern char artdir[MAX_PATH_SIZE];

extern CursesMoviest movie;
extern unsigned char newstops[6][80][5][4];

extern MusicClass music;

extern vector<configSiteMap *> sitemaps; // stores site map info read in from config file

extern bool multipleCityMode;
extern int oldMapMode;
extern unsigned long seed[RNG_SIZE];
extern Alignment law[LAWNUM];

extern Alignment house[HOUSENUM];
extern Alignment senate[SENATENUM];
extern Alignment court[COURTNUM];
extern char courtname[COURTNUM][POLITICIAN_NAMELEN];

extern Alignment exec[EXECNUM];
extern short execterm;
extern char execname[EXECNUM][POLITICIAN_NAMELEN];
extern short presparty;
extern char oldPresidentName[POLITICIAN_NAMELEN];

extern int stat_recruits;
extern int stat_kidnappings;
extern int stat_dead;
extern int stat_kills;
extern int stat_funds;
extern int stat_spent;
extern int stat_buys;
extern int stat_burns;

extern int ustat_recruits;
extern int ustat_kidnappings;
extern int ustat_dead;
extern int ustat_kills;
extern int ustat_funds;
extern int ustat_spent;
extern int ustat_buys;
extern int ustat_burns;

extern int locx;
extern int locy;
extern int locz;

extern short sitetype;
extern short sitealienate;
extern short sitealarm;
extern short sitealarmtimer;
extern short postalarmtimer;
extern short siteonfire;
extern int sitecrime;
extern short cursite;
extern bool mapshowing;

extern bool encounterwarnings;

extern char foughtthisround;

extern short interface_pgup;
extern short interface_pgdn;

extern bool autosave;

#ifdef _WIN32
extern bool fixcleartype;
#endif

extern int day;

extern short attitude[VIEWNUM];

extern short public_interest[VIEWNUM];
extern short background_liberal_influence[VIEWNUM];

extern char endgamestate;
extern char ccsexposure;

extern char ccs_kills;
extern int ccs_siege_kills;
extern int ccs_boss_kills;

extern class Ledger ledger;

extern char loaded;

extern short mode;
extern short wincondition;
extern short fieldskillrate;

extern bool notermlimit;
extern bool nocourtpurge;
extern bool stalinmode;

extern short offended_corps;
extern short offended_cia;
extern short offended_amradio;
extern short offended_cablenews;
extern short offended_firemen;
extern int police_heat;
extern unsigned long attorneyseed[RNG_SIZE];
extern int selectedsiege;
extern char lcityname[CITY_NAMELEN];
extern char newscherrybusted;

extern int month;
extern int year;
extern int amendnum;

extern bool termlimits;
extern bool deagle;
extern bool m249;

extern UniqueCreatures uniqueCreatures;

extern short party_status;

extern vector<datest *> date;
extern vector<recruitst *> recruit;

extern vector<Location *> location;

extern vector<newsstoryst *> newsstory;
extern newsstoryst *sitestory;

extern vector<Item *> groundloot;
extern long curcreatureid;
extern chaseseqst chaseseq;

extern char slogan[SLOGAN_LEN];

extern vector<Creature *> pool;

extern vector<squadst *> squad;
extern squadst *activesquad;
extern long cursquadid;

extern char disbanding;
extern int disbandtime;
extern char cantseereason;

extern short activesortingchoice[SORTINGCHOICENUM];

extern vector<ClipType *> cliptype;
extern vector<WeaponType *> weapontype;
extern vector<ArmorType *> armortype;
extern vector<LootType *> loottype;
extern vector<AugmentType *> augmenttype;

extern vector<VehicleType *> vehicletype;
extern vector<Vehicle *> vehicle;
extern char showcarprefs;

extern siteblockst levelmap[MAPX][MAPY][MAPZ];
extern Creature encounter[ENCMAX];
extern highscorest score[SCORENUM];
extern int yourscore;

#endif // EXTERNS_H_INCLUDED
