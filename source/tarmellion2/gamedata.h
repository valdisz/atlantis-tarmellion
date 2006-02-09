// START A3HEADER
//
// This source file is part of the Atlantis PBM game program.
// Copyright (C) 1995-1999 Geoff Dunbar
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program, in the file license.txt. If not, write
// to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
// Boston, MA 02111-1307, USA.
//
// See the Atlantis Project web page for details:
// http://www.prankster.com/project
//
// END A3HEADER
//
#ifndef RULES_H
#define RULES_H

//
// The items
//
enum {
         I_LIGHTCROSSBOW,
	 I_ENCHANTEDLIGHTCROSSBOW,
	 I_CROSSBOW,
	 I_HEAVYCROSSBOW,
	 I_SHORTBOW,
	 I_ENCHANTEDSHORTBOW,
	 I_BOW,
	 I_LONGBOW,
	 I_SPEAR,
	 I_ENRUNEDSPEAR,
	 I_ENCHANTEDSPEAR,
	 I_BATTLESPEAR,
	 I_WARSPEAR,
	 I_FIRESPEAR,
	 I_ICESPEAR,
	 I_PIKE,
	 I_ENCHANTEDPIKE,
	 I_HALBERD,
	 I_BARDICHE,
	 I_LANCE,
	 I_ENCHANTEDLANCE,
	 I_BATTLELANCE,
	 I_WARLANCE,
	 I_QUARTERSTAFF,
	 I_ENCHANTEDQUARTERSTAFF,
	 I_BATTLESTAFF,
	 I_WARSTAFF,
	 I_MAGESTAFF,
	 I_CLUB,
	 I_ENCHANTEDCLUB,
	 I_MACE,
	 I_ENCHANTEDMACE,
	 I_BATTLEMACE,
	 I_WARMACE,
	 I_MORNINGSTAR,
	 I_ENCHANTEDMORNINGSTAR,
	 I_TRISTAR,
	 I_EVENINGSTAR,
	 I_BATTLEHAMMER,
	 I_ENCHANTEDBATTLEHAMMER,
	 I_SKULLCRUSHER,
	 I_WARHAMMER,
	 I_BATTLEAXE,
	 I_ENRUNEDBATTLEAXE,
	 I_ENCHANTEDBATTLEAXE,
	 I_CLEAVER,
	 I_WARAXE,
	 I_SWIFTAXE,
	 I_IRONDAGGER,
	 I_ENCHANTEDDAGGER,
	 I_PARRYINGDAGGER,
	 I_ENCHANTEDPARRYINGDAGGER,
	 I_MITHRILDAGGER;
	 I_ADMANTIUMDAGGER,
	 I_SABRE,
	 I_ENCHANTEDSABRE,
	 I_EPEE,
	 I_FOIL,
	 I_IRONSWORD,
	 I_ENCHANTEDSWORD,
	 I_IRONBROADSWORD,
	 I_ENCHANTEDBROADSWORD,
	 I_IRONLONGSWORD,
	 I_ENCHANTEDLONGSWORD,
	 I_MITHRILSWORD,
	 I_MITHRILBROADSWORD,
	 I_MITHRILLONGSWORD,
	 I_ADMANTIUMSWORD,
	 I_ADMANTIUMBROADSWORD,
	 I_ADMANTIUMLONGSWORD,
	 I_FLAMINGSWORD,
	 I_ICESWORD,
	 I_SOULEATER,
	 I_BLOODSWORD,
	 I_RUNESWORD,
	 //armor
	 I_SHIELD,
	 I_CLOTHARMOR,
	 I_ENCHANTEDCLOTHARMOR,
	 I_LEATHERARMOR,
	 I_ENCHANTEDLEATHERARMOR,
	 I_BARBARIANPLATE,
	 I_IRONCHAINARMOR,			//254
	 I_ENCHANTEDCHAINARMOR,			//267
	 I_IRONSCALEARMOR,			//255
	 I_ENCHANTEDSCALEARMOR,			//268
	 I_IRONPLATEARMOR,			//256
	 I_ENCHANTEDPLATEARMOR,			//269
	 I_MITHRILCHAINARMOR,			//257
	 I_MITHRILSCALEARMOR,			//258
	 I_MITHRILPLATEARMOR,			//259
	 I_ADMANTIUMCHAINARMOR,			//260
	 I_ADMANTIUMSCALEARMOR,			//261
	 I_ADMANTIUMPLATEARMOR,			//262
	 I_DRAGONSCALESARMOR,			//263
	 I_CLOAKOFBLOOD,
	 I_CLOAKOFINVULNERABILITY,		//264
	 I_AMULETOFINVULNERABILITY,
	 //magic staves
	 I_STAFFOFACIDSHOWER,
	 I_STAFFOFPOWER,
	 I_STAFFOFFLAME,
	 I_STAFFOFCOLDNESS,
	 I_STAFFOFFIRE,
	 I_STAFFOFICE,
	 I_STAFFOFMINDPOWER,
	 //observation boosters
	 I_AMULETOFROCSIGHT,
	 I_GLASSESOFTRUESEEING,
	 I_AMULERTOFTRUESEEING,
	 //stealthboosters,
	 I_INVISIBILITYPASTE,
	 I_CROWNOFINVISIBILITY,
	 I_RINGOFINVISIBILITY,
	 //transport items
	 I_AMULETOFBEARSTRENGTH,
	 I_FEATHERCHARM,
	 I_WATERMASK,
	 I_BOOTSOFLEVITATION,
	 I_MAGICCARPET,
	 I_PORTAL,
	 //shield items
	 I_CORONETOFPROTECTION,
	 I_AMULETOFPROTECTION,
	 I_SHIELDSTONE,
	 I_RINGOFWARDING,
	 //skill boost rings
	 I_IRINGOFSEAMANSHIP,
	 I_IRINGOFINCREDIBLECOMBATPROWESS,
	 I_IRINGOFHORSEMANSHIP,
	 I_IRINGOFAIMING,
	 I_IRINGOFARCHERY,
	 //skill boost amulets
	 I_AMULETOFHAUTECUISINE,
	 I_AMULETOFARCHITECTURE,
	 I_AMULETOFDOCKYARDS,
	 I_AMULETOFCARPENTRY,
	 I_AMULETOFSMITHCRAFT,
	 //skill boost charms
	 I_HEALINGCHARM,
	 I_FUNNYCHARM,
	 I_VEGETABLECHARM,
	 I_BEASTCHARM,
	 I_FISHCHARM,
	 I_WILDERNESSCHARM,
	 I_HERBALCHARM,
	 I_ORECHARM,
	 I_WOODENCHARM,
	 I_ROCKCHARM,
	 I_PETCHARM,
	 //tamed monsters
	 I_WARG,					//106
	 I_WARHORSE,				//107
	 I_WARLIZARD,				//108
	 I_HARPY,				//109
	 I_GIANTCENTIPEDE,			//110
	 I_CHIMERA,				//111
	 I_WARMAMMOTH,	
	 I_WALKINGFORTRESS,
	 I_FIRELIZARD,				//113
	 //tamed animals
	 I_HUNTINGDOG,				//114
	 I_CHARGER,				//115
	 I_BATTLELIZARD,				//116
	 I_UNICORN,				//117
	 I_DRAKE,				//118
	 I_GRIFFON,				//119
	 I_WARELEPHANT,		
	 I_BEHEMOTH;
	 I_FIREDRAKE,				//121
	 //mounts
	 I_PONY,					//93
	 I_GIANTWOLF,				//94
	 I_GIANTSPIDER,				//95
	 I_HORSE,				//96
	 I_CAMEL,				//97
	 I_GIANTLIZARD,				//98
	 I_OXCART,
	 I_CARRIAGE,
	 I_LIZARDCART,
	 I_LIZARDCARRIAGE,
	 I_GIANTEAGLE,				//99
	 I_GIANTBAT,				//100
	 I_ELEPHANT,				//101
	 I_MAMMOTH,				//102
	 I_GIANTMOLE,				//103
	 I_WINGEDHORSE,				//104
	 I_FLYINGLIZARD,				//105
	 //farming
	 I_GRAIN,				//59
	 I_MUSHROOM,				//60
	 I_GRAPES,				//61
	 I_COTTON,				//62
	 I_TRUFFLES,				//63
	 I_GARMENT,
	 I_TOBACCO,				//64
	 I_DYEPLANT,				//65
	 I_CIGAR,
	 I_DYE,
	 //ranching
	 I_PIG,
	 I_SHEEP,				//66
	 I_WOOLINGER,				//67
	 I_WOOL,
	 I_MEAT,
	 I_HIDE,
	 I_CLOTHES,
	 I_LIVESTOCK,				//68
	 I_LIZARD,				//69
	 I_POINTYEAREDSHEEP,			//70
	 I_CASHMERE,
	 I_SPIDER,				//71
	 I_POISON,
	 //fishing
	 I_FISH,					//72
	 I_MUSSELS,				//73
	 I_PEARL,
	 I_WHALE,				//74
	 I_OIL,
	 //metalcraft
	 I_IRON,					//75
	 I_CHAIN,
	 I_ROUGHGEM,
	 I_GEM,
	 I_MITHRIL,				//77
	 I_MIRROR,
	 I_ADMANTIUM,				//78
	 I_GOLD,					//79
	 I_RING,
	 I_NECKLACE,
	 I_JEWELRY,
	 I_ORNAMENT,
	 //woodcraft
	 I_WOOD,					//80
	 I_FURNITURE,
	 I_IRONWOOD,	
	 I_STRONGBOX,
	 I_YEW,		
	 I_IDOL,
	 //stonecraft
	 I_STONE,				//83
	 I_STATUE,
	 I_ROOTSTONE,
	 I_FIGURINE,
	 I_CORESTONE,
	 I_TALISMAN,
	 //hunting
	 I_GAME,					//86
	 I_FURREDANIMAL,
	 I_FUR,
	 I_MARSHGAS,
	 I_FURCOAT,
	 I_PELTANIMAL,
	 I_PELT,
	 I_PELTCOAT,
	 //herblore
	 I_HERB,					//90
	 I_PERFUME,
	 I_FUNGUS,	
	 I_HEALINGDRAFT,
	 I_MEDICINEPLANT,
	 I_MEDICINE,
	 I_HEALINGPOTION,
	 //cooking
	 I_RATION,				//124
	 I_BEER,					//127
	 I_FOOD,					//125
	 I_WINE,					//128
	 I_DELICATESSEN,				//126
	 I_PARFAIT,				//130
	 //toolmaking
	 I_SPINNINGWHEEL,			//159
	 I_BARREL,				//160
	 I_PRESS,				//167
	 I_BAG,					//173
	 I_CUTLERY,				//174
	 I_SAW,					//175
	 I_CHISEL,				//176
	 I_LOOM,					//168
	 I_NET,					//171
	 I_LASSO,				//172
	 I_JAVELIN,
	 I_ENCHANTEDJAVELIN,
	 I_PICK,
	 I_ENCHANTEDPICK,
	 I_KNIFE,
	 I_ENCHANTEDKNIFE,
	 I_AXE,
	 I_ENCHANTEDAXE,
	 I_HAMMER,
	 I_ENCHANTEDHAMMER,
	 I_WAGON,				//161
	 I_LIZARDWAGON,				//164
	 I_HARP,					//169
	 I_GLIDER,				//170
	 //sonstiges
	 I_SILVER,	
	 //monster
	 //illusions
	 I_IDRAGON,				//280
	 I_IWOLF,				//281
	 I_IEAGLE,				//282
	 I_ISKELETON,				//283
	 I_IUNDEAD,				//284
	 I_ILICH,				//285
	 I_IIMP,					//286
	 I_IDEMON,				//287
	 I_IBALROG,
	 I_ISTEELDRAGON,
	 I_ICOPPERDRAGON,				//291
	 I_IBRONZEDRAGON,				//292
	 I_ISILVERDRAGON,				//293
	 I_IGOLDENDRAGON,				//294
	 I_IGREENDRAGON,				//316
	 I_IBROWNDRAGON,				//317
	 I_IBLUEDRAGON,				//318
	 I_IREDDRAGON,				//319
	 I_IWHITEDRAGON,				//320
	 I_IBLACKDRAGON,				//321
	 //summoned monsters
	 I_SKELETON,
	 I_UNDEAD,
	 I_LICH
	 I_IMP,					//331
	 I_DEMON,				//346
	 I_BALROG,				//347
	 I_EAGLE, 			//289
	 I_WOLF,	
	 I_ICEWOLF,				//301
	 I_STEELDRAGON,				//290
	 I_GREENDRAGON,				//316
	 I_COPPERDRAGON,				//291
	 I_WHITEDRAGON,				//320
	 I_BRONZEDRAGON,				//292
	 I_BROWNDRAGON,				//317
	 I_SILVERDRAGON,				//293
	 I_BLUEDRAGON,				//318
	 I_GOLDENDRAGON,				//294
	 I_REDDRAGON,				//319
	 I_BLACKDRAGON,				//321
	 //very small monsters for trade structures
	 I_RAT,					//512
	 I_ANIMATEDTREE,				//513
	 I_WILLOWWISP,				//514
	 I_CARNIVOROUSPLANT,			//515
	 I_KILLERLION,				//516
	 I_LONELYCROW,				//517
	 I_POISONSNAKE,				//518
	 I_WILDBOAR,				//519
	 I_LONELYWOLF,				//520
	 I_LONELYFANGEDLIZARD,			//521
	 I_LONELYPOISONSPIDER,			//522
	 I_LONELYCRAWLER,			//523
	 I_ZOMBIE,				//511
	 I_THIEF,
	 I_ROBBER,				//525
	 I_HIGHWAYMAN,
	 I_LONELYEVILWARRIOR,			//524
	 //small animal monsters
	 //.............wolf summonable
	 I_CROW,					//296
	 I_MOUNTAINLION,				//297
	 I_GIANTRAT,				//298
	 I_SNAKE,				//299
	 I_LION,					//300
	 //............ice wolf summonable
	 I_POISONSPIDER,				//302
	 I_FANGEDLIZARD,				//303
	 I_CRAWLER,				//304
	 //medium animal monsters
	 I_LIVINGTREE,				//305
	 I_GRIZZLYBEAR,				//306
	 I_ROC,					//307
	 I_SWAMPCREATURE,			//308
	 I_TIGER,				//309
	 I_GIANTSCORPION,			//310
	 I_POLARBEAR,				//311
	 I_GIANTSQUID,				//312
	 I_BUGBEAR,				//313
	 I_MAULER,				//314
	 I_TUNNELWORM,				//315
	 //special animal monsters
	 //................evil dragons summonable
	 I_BOGTHING,				//322
	 I_HYDRA,				//323
	 I_SPHINX,				//324
	 I_KRAKEN,				//325
	 I_ILLYRTHID,				//326
	 //small humanoid monsters
	 I_GOBLIN,				//329
	 //.........skeleton summonable
	 //.........imp summonable
	 I_PIRATE,				//332
	 I_MERFOLK,				//333
	 I_MUTANT,				//334
	 I_CENTAUR,				//335
	 I_KOBOLD,				//336
	 I_WILDMAN,				//337
	 I_SANDLING,				//338
	 //medium humanoid monsters
	 I_DARKELVENWARRIOR,				//339
	 I_EVILWARRIOR,				//340
	 I_OGRE,					//341
	 I_YETI,					//342
	 I_TROLL,				//343
	 I_ETTIN,				//344
	 //.........undead summonable
	 //.........demon summonable
	 //special humanoid monsters
	 //.........balrog summonable
	 //.........lich summonable
	 I_STORMGIANT,				//349
	 I_CLOUDGIANT,				//350
	 I_EVILSORCERER,				//351
	 I_EVILMAGICIAN,				//352
	 I_DARKPRIEST,				//353
	 I_COLOSSUS,
	 //monster spoils
	 I_RATTAIL,				//368
	 I_DRAGONSCALE,				//354
	 I_DRAGONBLOOD,				//355
	 I_SWAMPCRYSTAL,				//356
	 I_HYDRABLOOD,				//357
	 I_TOME,					//358
	 I_RUBY,					//359
	 I_KRAKENEYE,				//360
	 I_ILLYRTHIDBRAIN,			//361
	 I_BEARCLAW,				//362
	 I_ROCFEATHER,				//363
	 I_SLIME,				//364
	 I_SQUIDBEAK,				//365
	 I_ACID,					//366
	 I_EGG,					//367
	 //general races
	 I_HERO,
	 I_MAN,
	 I_BONDSMAN,
	 I_BONDSMANLEADER,
	 //races to prevent crashes of the engine
	 I_LDRAGONLORD,
	 I_DRAGONLORD,
	 I_HDRAGONLORD,
	 I_LLIZARDMAN,
	 I_LIZARDMAN,
	 I_HLIZARDMAN,
	 //races for tarmellion isles
	 I_HUMANLEADER,
	 I_HUMAN,
	 I_BARBARIANLEADER,
	 I_BARBARIAN,
	 I_BUCCANEERLEADER,
	 I_BUCCANEER,
	 I_ELF,
	 I_HALFELF,
	 I_DWARF,
	 I_HIGHLANDER,
	 I_GNOME,
	 I_LOWLANDER,
	 NITEMS
};

//
// Types of men.
//
enum {
        //general races
	MAN_NONE,				//0
	MAN_HERO,
	MAN_MAN,				//2
	//races to prevent crashes of the engine
	MAN_LDRAGONLORD,
	MAN_DRAGONLORD,
	MAN_HDRAGONLORD,
	MAN_LLIZARDMAN,
	MAN_LIZARDMAN,
	MAN_HLIZARDMAN,
	//races for tarmellion isles
	MAN_HUMANLEADER,
	MAN_HUMAN,
	MAN_BARBARIANLEADER,
	MAN_BARBARIAN,
	MAN_BUCCANEERLEADER,
	MAN_BUCCANEER,
	MAN_ELF,
	MAN_HALFELF,
	MAN_DWARF,
	MAN_HIGHLANDER,
	MAN_GNOME,
	MAN_LOWLANDER,
	NUMMAN
};

//
// Types of monsters
//
enum {
       MONSTER_NONE,					//0
       //produced monsters
       MONSTER_WARG,					//1
       MONSTER_WARHORSE,					//2
       MONSTER_WARLIZARD,					//3
       MONSTER_HARPY,					//4
       MONSTER_GIANTCENTIPEDE,					//5
       MONSTER_CHIMERA,					//6
       MONSTER_WARMAMMOTH,					//7
       MONSTER_WALKINGFORTRESS,
       MONSTER_FIRELIZARD,					//8
       MONSTER_HUNTINGDOG,					//9
       MONSTER_CHARGER,					//10
       MONSTER_BATTLELIZARD,					//11
       MONSTER_UNICORN,					//12
       MONSTER_DRAKE,					//13
       MONSTER_GRIFFON,					//14
       MONSTER_WARELEPHANT,					//15
       MONSTER_BEHEMOTH,
       MONSTER_FIREDRAKE,					//16
       //illusions
       MONSTER_ILLUSION,				//17
       //summoned monsters
       MONSTER_SKELETON,
       MONSTER_UNDEAD,
       MONSTER_LICH,
       MONSTER_IMP,
       MONSTER_DEMON,
       MONSTER_BALROG,
       MONSTER_EAGLE,				//18
       MONSTER_WOLF,
       MONSTER_ICEWOLF,
       MONSTER_STEELDRAGON,				//19
       MONSTER_GREENDRAGON,				//62
       MONSTER_COPPERDRAGON,				//20
       MONSTER_WHITEDRAGON,				//66
       MONSTER_BRONZEDRAGON,				//21
       MONSTER_BROWNDRAGON,				//63
       MONSTER_SILVERDRAGON,				//22
       MONSTER_BLUEDRAGON,				//64
       MONSTER_GOLDENDRAGON,				//23
       MONSTER_REDDRAGON,				//65
       MONSTER_BLACKDRAGON,				//67
       //very small monster for trade structures
       MONSTER_RAT,					//25
       MONSTER_ANIMATEDTREE,				//27
       MONSTER_WILLOWWISP,				//28
       MONSTER_CARNIVOROUSPLANT,			//29
       MONSTER_KILLERLION,				//30
       MONSTER_LONELYCROW,					//31
       MONSTER_POISONSNAKE,				//32
       MONSTER_WILDBOAR,				//33
       MONSTER_LONELYWOLF,					//34
       MONSTER_LONELYFANGEDLIZARD,				//35
       MONSTER_LONELYPOISONSPIDER,				//36
       MONSTER_LONELYCRAWLER,				//37
       MONSTER_ZOMBIE,				//24
       MONSTER_THIEF,				//26
       MONSTER_ROBBER,				//40
       MONSTER_HIGHWAYMAN,				//39
       MONSTER_LONELYEVILWARRIOR,				//38
       //small animal monsters 
       MONSTER_CROW,				//42
       MONSTER_MOUNTAINLION,			//43
       MONSTER_GIANTRAT,				//44
       MONSTER_SNAKE,				//45
       MONSTER_LION,				//46
       MONSTER_POISONSPIDER,			//48
       MONSTER_FANGEDLIZARD,			//49
       MONSTER_CRAWLER,				//50
       //medium animal monsters
       MONSTER_LIVINGTREE,				//51
       MONSTER_GRIZZLYBEAR,				//52
       MONSTER_ROC,					//53
       MONSTER_SWAMPCREATURE,			//54
       MONSTER_TIGER,				//55
       MONSTER_GIANTSCORPION,			//56
       MONSTER_POLARBEAR,				//57
       MONSTER_GIANTSQUID,				//58
       MONSTER_BUGBEAR,				//59
       MONSTER_MAULER,				//60
       MONSTER_TUNNELWORM,				//61
       //special animal monsters
       MONSTER_BOGTHING,				//68
       MONSTER_HYDRA,				//69
       MONSTER_SPHINX,				//70
       MONSTER_KRAKEN,				//71
       MONSTER_ILLYRTHID,				//72
       //small humanoid monsters
       MONSTER_GOBLIN,				//73
       MONSTER_PIRATE,				//76
       MONSTER_MERFOLK,				//77
       MONSTER_MUTANT,				//78
       MONSTER_CENTAUR,				//79
       MONSTER_KOBOLD,				//80
       MONSTER_WILDMAN,				//81
       MONSTER_SANDLING,				//82
       //medium humanoid monsters
       MONSTER_DARKELVENWARRIOR,				//83
       MONSTER_EVILWARRIOR,				//84
       MONSTER_OGRE,				//85
       MONSTER_YETI,				//86
       MONSTER_TROLL,				//87
       MONSTER_ETTIN,				//88
       //special humanoid monsters
       MONSTER_STORMGIANT,				//93
       MONSTER_CLOUDGIANT,				//94
       MONSTER_EVILSORCERER,			//95
       MONSTER_EVILMAGICIAN,			//96
       MONSTER_DARKPRIEST,				//97
       MONSTER_COLOSSUS,
       NUMMONSTERS
};

//
// Types of weapons
//
enum {
	WEAPON_NONE,				//
	WEAPON_RUNESWORD,			//
	WEAPON_BLOODSWORD,			//
	WEAPON_SOULEATER,
	WEAPON_ICESWORD,
	WEAPON_FLAMINGSWORD,			//
	WEAPON_LONGBOW,				//
	WEAPON_HEAVYCROSSBOW,			//
	WEAPON_CROSSBOW,			//
	WEAPON_BOW,				//
	WEAPON_ENCHANTEDSHORTBOW,		//
	WEAPON_ENCHANTEDLIGHTCROSSBOW,		//
	WEAPON_SHORTBOW,			//
	WEAPON_LIGHTCROSSBOW,			//
	WEAPON_ENCHANTEDJAVELIN,		//
	WEAPON_JAVELIN,				//
	WEAPON_MAGESTAFF,			//
	WEAPON_SWIFTAXE,			//
	WEAPON_ICESPEAR,			//
	WEAPON_FIRESPEAR,			//
	WEAPON_ADLONGSWORD,			//
	WEAPON_FOIL,				//
	WEAPON_WARHAMMER,			//
	WEAPON_WARMACE,				//
	WEAPON_ADBROADSWORD,			//
	WEAPON_BARDICHE,			//
	WEAPON_WARAXE,				//
	WEAPON_ADSWORD,				//
	WEAPON_WARLANCE,			//
	WEAPON_WARSPEAR,			//
	WEAPON_WARSTAFF,			//
	WEAPON_EVENINGSTAR,			//
	WEAPON_MILONGSWORD,			//
	WEAPON_EPEE,				//
	WEAPON_SKULLCRUSHER,			//
	WEAPON_MIBROADSWORD,			//
	WEAPON_BATTLEMACE,			//
	WEAPON_ENCHANTEDLONGSWORD,		//
	WEAPON_CLEAVER,				//
	WEAPON_HALBERD,				//
	WEAPON_ADDAGGER,			//
	WEAPON_ENCHANTEDSABRE,			//
	WEAPON_MISWORD,				//
	WEAPON_ENCHANTEDBATTLEHAMMER,		//
	WEAPON_ENCHANTEDBROADSWORD,		//
	WEAPON_ENCHANTEDMACE,			//
	WEAPON_BATTLELANCE,			//
	WEAPON_BATTLESPEAR,			//
	WEAPON_TRISTAR,				//
	WEAPON_ENCHANTEDBATTLEAXE,		//
	WEAPON_ENCHANTEDPIKE,			//
	WEAPON_BATTLESTAFF,			//
	WEAPON_ENCHANTEDSWORD,			//
	WEAPON_ENCHANTEDLANCE,			//
	WEAPON_ENCHANTEDSPEAR,			//
	WEAPON_ENCHANTEDMORNINGSTAR,		//
	WEAPON_ENCHANTEDQUARTERSTAFF,		//
	WEAPON_MIDAGGER,			//
	WEAPON_ENCHANTEDDAGGER,			//
	WEAPON_ENCHANTEDKNIFE,			//
	WEAPON_LONGSWORD,			//
	WEAPON_ENCHANTEDCLUB,			//
	WEAPON_ENCHANTEDHAMMER,			//
	WEAPON_ENCHANTEDAXE,			//
	WEAPON_ENCHANTEDPICK,			//
	WEAPON_ENCHANTEDPARRYINGDAGGER,		//
	WEAPON_SABRE,				//
	WEAPON_BATTLEHAMMER,			//
	WEAPON_BROADSWORD,			//
	WEAPON_MACE,				//
	WEAPON_ENRUNEDAXE,			//
	WEAPON_BATTLEAXE,			//
	WEAPON_PIKE,				//
	WEAPON_SWORD,				//
	WEAPON_LANCE,				//
	WEAPON_ENRUNEDSPEAR,			//
	WEAPON_SPEAR,				//
	WEAPON_MORNINGSTAR,			//
	WEAPON_QUARTERSTAFF,			//
	WEAPON_HAMMER,				//
	WEAPON_AXE,				//
	WEAPON_PICK,				//
	WEAPON_DAGGER,				//
	WEAPON_CLUB,				//
	WEAPON_PDAGGER,				//
	WEAPON_KNIFE,				//
	WEAPON_LASSO,				//
	WEAPON_NET,				//
	NUMWEAPONS
};

//
// Types of armor
//
enum {
	ARMOR_NONE,				//
	ARMOR_CLOAKOFI,				//
	ARMOR_DRAGONSCALESARMOR,		//
	ARMOR_CLOAKOFBLOOD,			//
	ARMOR_ADMANTIUMPLATEARMOR,		//
	ARMOR_ADMANTIUMSCALEARMOR,		//
	ARMOR_ADMANTIUMCHAINARMOR,		//
	ARMOR_MITHRILPLATEARMOR,		//
	ARMOR_MITHRILSCALEARMOR,		//
	ARMOR_MITHRILCHAINARMOR,		//
	ARMOR_ENCHANTEDPLATEARMOR,		//
	ARMOR_ENCHANTEDSCALEARMOR,		//
	ARMOR_ENCHANTEDCHAINARMOR,		//
	ARMOR_STEELPLATEARMOR,			//
	ARMOR_STEELSCALEARMOR,			//
	ARMOR_STEELCHAINARMOR,			//
	ARMOR_IRONPLATEARMOR,			//
	ARMOR_IRONSCALEARMOR,			//
	ARMOR_IRONCHAINARMOR,			//
	ARMOR_BPLATE,				//
	ARMOR_ENCHANTEDLEATHERARMOR,		//
	ARMOR_ENCHANTEDCLOTHARMOR,		//
	ARMOR_LEATHERARMOR,			//
	ARMOR_CLOTHARMOR,			//
	ARMOR_SHIELD,				//
	NUMARMORS
};

//
// Types of mounts
//
enum {
	MOUNT_NONE,				//
	MOUNT_MAMM,				//
	MOUNT_ELEP,				//
	MOUNT_MOLE,				//
	MOUNT_WING,				//
	MOUNT_MFLI,				//
	MOUNT_BATTLELIZARD,
	MOUNT_CHARGER,
	MOUNT_WARLIZARD,
	MOUNT_WARHORSE,
	MOUNT_MEAG,				//
	MOUNT_MBAT,				//
	MOUNT_HUNTINGDOG,
	MOUNT_WARDOG,
	MOUNT_CAME,				//
	MOUNT_MLIZ,				//
	MOUNT_HORS,				//
	MOUNT_MWOL,				//
	MOUNT_MSPI,				//
	MOUNT_PONY,				//
	NUMMOUNTS
};

//
// Other battle items
//
enum {
	BATTLE_NONE,				//
	BATTLE_RUNESWORD,			//
	BATTLE_STAFFOFL,			//
	BATTLE_STAFFOFM,			//
	BATTLE_STAFFOFI,			//
	BATTLE_STAFFOFF,			//
	BATTLE_SOULEATER,			//
	BATTLE_ICESWORD,			//
	BATTLE_FLAMINGSWORD,			//
	BATTLE_MAGESTAFF,			//
	BATTLE_AOFI,				//
	BATTLE_CORONETOFP,			//
	BATTLE_AMULETOFP,			//
	BATTLE_STAFFOFPOWER,			//
	BATTLE_STAFFOFFLAME,			//
	BATTLE_STAFFOFCOLDNESS,			//
	BATTLE_STAFFOFACIDSHOWER,		//
	BATTLE_SHIELDSTONE,			//
	NUMBATTLEITEMS
};

//
// Types of skills.
//
enum {
	S_FARMING,				//20
	S_RANCHING,				//21
	S_METALCRAFT,				//0
	S_WOODCRAFT,				//1
	S_STONECRAFT,				//2
	S_HUNTING,				//3
	S_FISHING,				//4
	S_HERBLORE,				//5
	S_ANIMALTRAINING,			//25
	S_ENTERTAINMENT,			//10
	S_COOKING,				//28
	S_TOOLMAKING,				//7
	S_SHIPBUILDING,				//9
	S_BUILDING,				//8
	S_SMITHING,				//6
	S_WEAPONCRAFT,				//22
	S_ARMORCRAFT,				//23
	S_ANIMALTAMING,				//26
	S_MONSTERTAMING,			//27
	S_HEALING,				//18
	S_COMBAT,				//12
	S_RIDING,				//13
	S_CROSSBOW,				//14
	S_ARCHERY,				//15
	S_TACTICS,				//11
	S_SAILING,				//19
	S_SCOUTING,
	S_STEALTH,				//16
	S_OBSERVATION,				//17
	S_MANIPULATE,				//29
	S_FORCE,				//30
	S_PATTERN,				//31
	S_SPIRIT,				//32
	S_FIRE,					//33
	S_ICE,					//34
	S_MIND,					//35
	S_EARTHQUAKE,				//36
	S_FORCE_SHIELD,				//37
	S_ENERGY_SHIELD,			//38
	S_WEATHER_SHIELD,			//39
	S_SPIRIT_SHIELD,			//40
	S_MAGICAL_HEALING,			//41
	S_GATE_LORE,				//42
	S_FARSIGHT,				//43
	S_TELEPORTATION,			//44
	S_PORTAL_LORE,				//45
	S_MIND_READING,				//46
	S_WEATHER_LORE,				//47
	S_SUMMON_WIND,				//48
	S_SUMMON_STORM,				//49
	S_SUMMON_TORNADO,			//50
	S_CALL_LIGHTNING,			//51
	S_CLEAR_SKIES,				//52
	S_EARTH_LORE,				//53
	S_WOLF_LORE,				//54
	S_BIRD_LORE,				//55
	S_DRAGON_LORE,				//56
	S_WYRM_LORE,				//57
	S_SUMMON_DRAGON,			//58
	S_SUMMON_WYRM,				//59
	S_NECROMANCY,				//60
	S_SUMMON_SKELETONS,			//61
	S_RAISE_UNDEAD,				//62
	S_SUMMON_LICH,				//63
	S_CREATE_AURA_OF_FEAR,			//64
	S_SUMMON_BLACK_WIND,			//65
	S_ENERGY_BLAST,				//66
	S_BANISH_UNDEAD,			//67
	S_DEMON_LORE,				//68
	S_SUMMON_IMPS,				//69
	S_SUMMON_DEMON,				//70
	S_SUMMON_BALROG,			//71
	S_BANISH_DEMONS,			//72
	S_ILLUSION,				//73
	S_PHANTASMAL_ENTERTAINMENT,		//74
	S_CREATE_PHANTASMAL_BEASTS,		//75
	S_CREATE_PHANTASMAL_UNDEAD,		//76
	S_CREATE_PHANTASMAL_DEMONS,		//77
	S_INVISIBILITY,				//78
	S_TRUE_SEEING,				//79
	S_DISPEL_ILLUSIONS,			//80
	S_ARTIFACT_LORE,			//81
	S_CREATE_RING_OF_INVISIBILITY,		//82
	S_CREATE_CLOAK_OF_INVULNERABILITY,	//83
	S_CREATE_STAFF_OF_FIRE,			//84
	S_CREATE_STAFF_OF_LIGHTNING,		//85
	S_CREATE_AMULET_OF_TRUE_SEEING,		//86
	S_CREATE_AMULET_OF_PROTECTION,		//87
	S_CREATE_RUNESWORD,			//88
	S_CREATE_FLAMING_SWORD,			//89
	S_CREATE_SHIELDSTONE,			//90
	S_CREATE_MAGIC_CARPET,			//91
	S_ENGRAVE_RUNES_OF_WARDING,		//92
	S_CONSTRUCT_GATE,			//93
	S_ENCHANT_WEAPONS,			//94
	S_ENCHANT_ARMOR,			//95
	S_CONSTRUCT_PORTAL,			//96
	S_CREATE_FOOD,				//97
	S_CREATE_ICE_SWORD,
	S_CREATE_SOUL_EATER,
	S_CREATE_STAFF_OF_ICE,
	S_CREATE_STAFF_OF_MIND,
	S_CREATE_CORONET_OF_PROTECTION,
	S_ENCHANT_RINGS,
	S_ENCHANT_AMULETS,
	S_CREATE_CHARMS,
	NSKILLS
};

//
// Types of objects.
//
enum {
	O_DUMMY,				//0
	O_ROWINGBOAT,				//1
	O_LONGBOAT,				//2
	O_PINK,  				//3
	O_GALLEON,				//4
	O_WARGALLEY,				//5
	O_WARGALLEON,				//6
	O_AIRSHIP,				//7
	O_HERMITSHUT,				//8
	O_TOWER,				//9
	O_GRANDTOWER,				//10
	O_STOCKADE,				//11
	O_GRANDSTOCKADE,			//12
	O_FORT,					//13
	O_GRANDFORT,				//14
	O_CASTLE,				//15
	O_GRANDCASTLE,				//16
	O_CITADEL,				//17
	O_GRANDCITADEL,				//18
	O_FORTRESS,				//19
	O_GRANDFORTRESS,			//20
	O_MAGICALTOWER,				//21
	O_MAGICALCASTLE,			//22
	O_MAGICALFORTRESS,			//23
	O_PALACE,				//24
	O_CPALACE,				//25
	O_CLOUDPALACE,				//26
	O_HTOWER,				//27
	O_HPTOWER,				//28
	O_NGUILD,				//29
	O_AGUILD,				//30
	O_GDCLIFFS,				//31
	O_EDCLIFFS,				//32
	O_SHAFT,				//33
	O_GREENLAIR,				//34
	O_BROWNLAIR,				//35
	O_BLUELAIR,				//36
	O_REDLAIR,				//37
	O_WHITELAIR,				//38
	O_BLACKLAIR,				//39
	O_RUIN,					//40
	O_CAVE,					//41
	O_DEMONPIT,				//42
	O_CRYPT,				//43
	O_ISLE,					//44
	O_DERELICT,				//45
	O_PEATBOG,				//46
	O_WHIRL,				//47
	O_MAGETOWER,				//48
	O_DARKTOWER,				//49
	O_GIANTCASTLE,				//50
	O_ILAIR,				//51
	O_ICECAVE,				//52
	O_THICKET,				//53
	O_PYRAMID,				//54
	O_BKEEP,				//55
	O_ATEMPLE,				//56
	O_TEMPLE,				//57
	O_HUT,					//58
	O_HOUSE,				//59
	O_AQUEDUCT,				//60
	O_INN,					//61
	O_FAIR,					//62
	O_FARM,					//63
	O_MILL,					//64
	O_MUSHROOMFARM,				//65
	O_IRRIGATION,				//66
	O_VINEYARD,				//67
	O_WINEPRESS,				//68
	O_COTTONPLANTATION,			//69
	O_COTTONCOLLECTORS,			//70
	O_TRUFFLESPLANTATION,			//71
	O_BOARPEN,				//72
	O_TOBACCOPLANTATION,			//73
	O_HORTICULTURE,				//74
	O_SHEEPFARM,				//75
	O_SHEEPDIP,				//76
	O_WOOLINGERFARM,			//77
	O_WOOLINGERDIP,				//78
	O_RANCH,				//79
	O_SLAUGHTERHOUSE,			//80
	O_LIZARDRANCH,				//81
	O_LIZARDSLAUGHTERHOUSE,			//82
	O_SHEPHERDHUT,				//83
	O_MENAGERIE,				//84
	O_FISHINGFLEET,				//85
	O_JETTY,				//86
	O_ARTIFICIALREEF,			//87
	O_DIVINGFLOATS,				//88
	O_WHALINGFLEET,				//89
	O_MINE,					//90
	O_FURNACE,				//91
	O_GEMMINE,				//92
	O_GEMAPPRAISER,				//93
	O_MITHRILMINE,				//94
	O_PROSPECTORSHUT,			//95
	O_ADMANTIUMMINE,			//96
	O_GOLDMINE,				//97
	O_TREENURSERY,				//98
	O_TIMBERYARD,				//99
	O_TREETENDERSHUT,			//100
	O_SAWINGMILL,				//101
	O_YEWGROVE,				//102
	O_QUARRY,				//103
	O_STONECUTTERSHUT,			//104
	O_ROOTSTONEQUARRY,			//105
	O_STONEMASONSHUT,			//106
	O_CORESTONEQUARRY,			//107
	O_HUNTINGHUT,				//108
	O_HUNTINGSTAND,				//109
	O_TRAPPINGHUT,				//110
	O_CAGETRAP,				//111
	O_WALKWAY,				//112
	O_GASTANK,				//113
	O_TRAPPINGLODGE,			//114
	O_HERBGARDEN,				//115
	O_HERBALISTSTORE,			//116
	O_FUNGUSGARDEN,				//117
	O_DRYINGSHED,				//118
	O_DRUIDCIRCLE,				//119
	O_PONYSTABLE,				//120
	O_WOLFPEN,				//121
	O_SPIDERSTABLE,				//122
	O_STABLE,				//123
	O_CAMELSTABLE,				//124
	O_LIZARDSTABLE,				//125
	O_EYRIE,				//126
	O_BATCAVE,				//127
	O_ELEPHANTSTABLE,			//128
	O_MAMMOTHSTABLE,			//129
	O_MOLEBURROW,				//130
	O_WINGEDHORSESTABLE,			//131
	O_FLYINGLIZARDSTABLE,			//132
	O_WARGPIT,				//133
	O_TOURNAMENTCOURSE,			//134
	O_TRAININGPIT,				//135
	O_HARPYNEST,				//136
	O_BREEDINGPIT,				//137
	O_CHIMERAROOST,				//138
	O_MAMMOTHWARSCHOOL,			//139
	O_VOLCANICPOOL,				//140
	O_KENNEL,				//141
	O_TOURNAMENTPARCOURS,			//142
	O_TRAININGPEN,				//143
	O_VIRGINARY,				//144
	O_DRAKENSTEIN,				//145
	O_GRIFFONSTABLE,			//146
	O_ELEPHANTWARSCHOOL,			//147
	O_FIREDRAKECLIFF,			//148
	O_TAVERN,				//149
	O_JOINER,				//150
	O_SMITHY,				//151
	O_WEAPONFORGE,				//152
	O_ARMORFORGE,				//153
	O_TEAMTRAINER,				//154
	O_APOTHECARY,				//155
	O_PELTMONGER,				//156
	O_SCULPTOR,				//157
	O_JEWELER,				//158
	O_FISHERY,				//159
	O_FARMHOUSE,				//160
	O_RANCHHOUSE,				//161
	O_CHANDLER,				//162
	O_RUNEMASTER,				//163
	O_ROADN,				//164
	O_ROADNW,				//165
	O_ROADNE,				//166
	O_ROADSW,				//167
	O_ROADSE,				//168
	O_ROADS,				//169
	O_RAFT,
	O_TEPUKE,
	O_SLOOP,
	O_CUTTER,
	O_SCHOONER,
	O_SNOW,
	O_JUNK,
	O_DHOW,
	O_BRIG,
	O_TARTAN,
	O_CARAVEL,
	O_CARRACK,
	O_GALLEY,
	O_COG,
	O_FLOATINGFORTRESS,
	O_GHOSTSHIP,
	O_BALLOON,
	O_SIGNPOST,
	O_ELEFANTWARSCHOOL,
	O_BEHEMOTHWARSCHOOL,
	NOBJECTS
};

//
// Types of terrain
//
/* ARegion Types */
enum {
	R_OCEAN,				//0
	R_PLAIN,				//1
	R_FOREST,				//2
	R_MOUNTAIN,				//3
	R_SWAMP,				//4
	R_JUNGLE,				//5
	R_DESERT,				//6
	R_TUNDRA,				//7
	R_CAVERN,				//8
	R_UFOREST,				//9
	R_TUNNELS,				//10
	R_NEXUS,				//11
	R_VOLCANO,				//12
	R_LAKE,					//13
	R_ISLAND_PLAIN,				//14
	R_ISLAND_SWAMP,				//15
	R_ISLAND_MOUNTAIN,			//16
	R_T_OCEAN1,				//17
	R_T_PLAIN1,				//18
	R_T_PLAIN2,				//19
	R_T_PLAIN3,				//20
	R_T_LAKE1,				//21
	R_T_LAKE2,				//22
	R_T_LAKE3,				//23
	R_T_FOREST1,				//24
	R_T_FOREST2,				//25
	R_T_FOREST3,				//26
	R_T_MYSTFOREST1,			//27
	R_T_MOUNTAIN1,				//28
	R_T_MOUNTAIN2,				//29
	R_T_MOUNTAIN3,				//30
	R_T_HILL1,				//31
	R_T_HILL2,				//32
	R_T_HILL3,				//33
	R_T_SWAMP1,				//34
	R_T_SWAMP2,				//35
	R_T_SWAMP3,				//36
	R_T_JUNGLE1,				//37
	R_T_JUNGLE2,				//38
	R_T_JUNGLE3,				//39
	R_T_DESERT1,				//40
	R_T_DESERT2,				//41
	R_T_DESERT3,				//42
	R_T_VOLCANO1,				//43
	R_T_TUNDRA1,				//44
	R_T_TUNDRA2,				//45
	R_T_TUNDRA3,				//46
	R_T_CAVERN1,				//47
	R_T_CAVERN2,				//48
	R_T_CAVERN3,				//49
	R_T_UNDERFOREST1,			//50
	R_T_UNDERFOREST2,			//51
	R_T_UNDERFOREST3,			//52
	R_T_TUNNELS1,				//53
	R_T_TUNNELS2,				//54
	R_T_TUNNELS3,				//55
	R_T_GROTTO1,				//56
	R_T_PLAIN4,				//57
	R_T_PLAIN5,				//58
	R_T_PLAIN6,				//59
	R_T_LAKE4,				//60
	R_T_LAKE5,				//61
	R_T_LAKE6,				//62
	R_T_FOREST4,				//63
	R_T_FOREST5,				//64
	R_T_FOREST6,				//65
	R_T_MYSTFOREST2,			//66
	R_T_MOUNTAIN4,				//67
	R_T_MOUNTAIN5,				//68
	R_T_MOUNTAIN6,				//69
	R_T_HILL4,				//70
	R_T_HILL5,				//71
	R_T_HILL6,				//72
	R_T_SWAMP4,				//73
	R_T_SWAMP5,				//74
	R_T_SWAMP6,				//75
	R_T_JUNGLE4,				//76
	R_T_JUNGLE5,				//77
	R_T_JUNGLE6,				//78
	R_T_DESERT4,				//79
	R_T_DESERT5,				//80
	R_T_DESERT6,				//81
	R_T_VOLCANO2,				//82
	R_T_TUNDRA4,				//83
	R_T_TUNDRA5,				//84
	R_T_TUNDRA6,				//85
	R_T_CAVERN4,				//86
	R_T_CAVERN5,				//87
	R_T_CAVERN6,				//88
	R_T_DEEPFOREST1,			//89
	R_T_DEEPFOREST2,			//90
	R_T_DEEPFOREST3,			//91
	R_T_TUNNELS4,				//92
	R_T_TUNNELS5,				//93
	R_T_TUNNELS6,				//94
	R_T_GROTTO2,				//95
	R_CE_OCEAN,				//96
	R_CE_OCEAN1,				//97
	R_CE_GDPLAIN,				//98
	R_CE_GDPLAIN1,				//99
	R_CE_EVPLAIN,				//100
	R_CE_EVPLAIN1,				//101
	R_CE_GDGRASSLAND,			//102
	R_CE_GDGRASSLAND1,			//103
	R_CE_EVGRASSLAND,			//104
	R_CE_EVGRASSLAND1,			//105
	R_CE_GDLAKE,				//106
	R_CE_NELAKE,				//107
	R_CE_EVLAKE,				//108
	R_CE_GDFOREST,				//109
	R_CE_GDFOREST1,				//110
	R_CE_EVFOREST,				//111
	R_CE_EVFOREST1,				//112
	R_CE_MYSTFOREST,			//113
	R_CE_MYSTFOREST1,			//114
	R_CE_GDMOUNTAIN,			//115
	R_CE_GDMOUNTAIN1,			//116
	R_CE_EVMOUNTAIN,			//117
	R_CE_EVMOUNTAIN1,			//118
	R_CE_GDHILL,				//119
	R_CE_GDHILL1,				//120
	R_CE_EVHILL,				//121
	R_CE_EVHILL1,				//122
	R_CE_GDSWAMP,				//123
	R_CE_GDSWAMP1,				//124
	R_CE_EVSWAMP,				//125
	R_CE_EVSWAMP1,				//126
	R_CE_GDJUNGLE,				//127
	R_CE_GDJUNGLE1,				//128
	R_CE_EVJUNGLE,				//129
	R_CE_EVJUNGLE1,				//130
	R_CE_GDDESERT,				//131
	R_CE_GDDESERT1,				//132
	R_CE_EVDESERT,				//133
	R_CE_EVDESERT1,				//134
	R_CE_WASTELAND,				//135
	R_CE_WASTELAND1,			//136
	R_CE_GDTUNDRA,				//137
	R_CE_GDTUNDRA1,				//138
	R_CE_EVTUNDRA,				//139
	R_CE_EVTUNDRA1,				//140
	R_CE_GDCAVERN,				//141
	R_CE_GDCAVERN1,				//142
	R_CE_EVCAVERN,				//143
	R_CE_EVCAVERN1,				//144
	R_CE_GDUFOREST,				//145
	R_CE_GDUFOREST1,			//146
	R_CE_EVUFOREST,				//147
	R_CE_EVUFOREST1,			//148
	R_CE_TUNNELS,				//149
	R_CE_TUNNELS1,				//150
	R_CE_GDULAKE,				//151
	R_CE_NEULAKE,				//152
	R_CE_EVULAKE,				//153
	R_CE_GDDCAVERN,				//154
	R_CE_GDDCAVERN1,			//155
	R_CE_EVDCAVERN,				//156
	R_CE_EVDCAVERN1,			//157
	R_CE_GDDFOREST,				//158
	R_CE_GDDFOREST1,			//159
	R_CE_EVDFOREST,				//160
	R_CE_EVDFOREST1,			//161
	R_CE_DTUNNELS,				//162
	R_CE_DTUNNELS1,				//163
	R_T_MINES1,				//164
	R_T_MINES2,				//165
	R_T_MINES3,				//166
	R_T_MINES4,				//167
	R_T_MINES5,				//168
	R_T_MINES6,				//169
	R_T_CHAMBER1,				//170
	R_T_CHAMBER2,				//171
	R_T_CHAMBER3,				//172
	R_T_CHAMBER4,				//173
	R_T_CHAMBER5,				//174
	R_T_CHAMBER6,				//175
	R_CE_ICE,				//176
	R_CE_GLACIER,				//177
	R_CE_CRYSTALCAVERN,			//178
	R_CE_BLUECAVERN,			//179
	R_CE_REDCAVERN,				//180
	R_CE_YELLOWCAVERN,			//181
	R_CE_ORANGECAVERN,			//182
	R_CE_GREENCAVERN,			//183
	R_CE_VIOLETCAVERN,			//184
	R_CE_BLACKCAVERN,			//185
	R_CE_WHITECAVERN,			//186
	R_CE_GRANITE,				//187
	R_CE_BASALT,				//188
	R_CE_NPLAIN,				//188
	R_CE_NFOREST,				//189
	R_CE_NMOUNTAIN,				//190
	R_CE_NHILLS,				//191
	R_CE_NGRASSLAND,			//192
	R_COASTAL,
	R_NUM
};

//
// Types of special attacks
//
enum {
	SPECIAL_NONE_DUMMY,			//
	SPECIAL_FIREBALL,			//
	SPECIAL_ICECONE,			//
	SPECIAL_MINDSTRIKE,			//
	SPECIAL_HELLFIRE,			//
	SPECIAL_CAUSEFEAR,			//
	SPECIAL_LSTRIKE,			//
	SPECIAL_MINDBLAST,			//
	SPECIAL_EARTHQUAKE,			//
	SPECIAL_TRAMPLING,			//
	SPECIAL_FORCE_SHIELD,			//
	SPECIAL_ENERGY_SHIELD,			//
	SPECIAL_WEATHER_SHIELD,			//
	SPECIAL_SPIRIT_SHIELD,			//
	SPECIAL_DISPEL_ILLUSIONS,		//
	SPECIAL_SUMMON_STORM,			//
	SPECIAL_TORNADO,			//
	SPECIAL_BLACK_WIND,			//
	SPECIAL_ENERGY_BLAST,			//
	SPECIAL_BANISH_UNDEAD,			//
	SPECIAL_BANISH_DEMONS,			//
	SPECIAL_FIREBREATH,			//
	SPECIAL_POISONBREATH,			//
	SPECIAL_ICEBREATH,			//
	SPECIAL_CAMEL_FEAR,			//
	SPECIAL_INVULNERABILITY,		//
	SPECIAL_MAGESTAFF,			//
	SPECIAL_RAINBOW,			//
	SPECIAL_ACIDSHOWER,			//
	NUMSPECIALS
};

// Types of effects
enum {
	EFFECT_DAZZLE,				//
	EFFECT_FEAR,				//
	EFFECT_STORM,				//
	NUMEFFECTS
};

// Types of ranges
enum {
	RANGE_TELEPORT,				//
	RANGE_PORTAL_LORE,			//
	RANGE_FARSIGHT,				//
	RANGE_WEATHER_LORE,			//
	RANGE_CLEAR_SKIES,			//
	NUMRANGES
};

//tarmellion summoning
enum {
  SUMMON_BALROG,				//
  SUMMON_DEMON,					//
  SUMMON_IMP,					//
  SUMMON_LICH,					//
  SUMMON_UNDEAD,				//
  SUMMON_SKELETON,				//
  SUMMON_WOLF,					//
  SUMMON_BIRD,					//
  SUMMON_DRAGON,				//
};

#endif
