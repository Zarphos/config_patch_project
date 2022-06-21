class CfgMagazines
{
	class Default
	{
		scope=0;
		value=2;
		type=0;
		simulation="ProxyMagazines";
		model="";
		picture="";
		ammo="";
		count=1;
		displayName="";
		displayNameShort="";
		nameSound="";
		weight=0;
		maxLeadSpeed=50;
		initSpeed=100;
		reloadAction="";
		useAction=0;
		useActionTitle="";
		modelSpecial="";
		class InventoryPlacements
		{
		};
		class Library
		{
			libTextDesc="";
		};
		descriptionShort="";
		maxThrowHoldTime=2;
		minThrowIntensityCoef=0.30000001;
		maxThrowIntensityCoef=1.4;
		quickReload=0;
	};
	class FakeMagazine: Default
	{
		scope=1;
		ammo="FakeAmmo";
	};
	class FakeWeapon: FakeMagazine
	{
	};
	class CA_Magazine: Default
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		value=1;
		displayName="";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="";
		modelSpecial="";
		useAction=0;
		useActionTitle="";
		reloadAction="";
		ammo="";
		count=30;
		type=256;
		initSpeed=900;
		selectionFireAnim="zasleh";
		nameSound="magazine";
		maxLeadSpeed=25;
		weaponpoolavailable=1;
		mass=8;
	};
	class VehicleMagazine: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		type=0;
		reloadAction="";
		maxLeadSpeed=100;
		weaponPoolAvailable=0;
	};
	class CA_LauncherMagazine: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		model="";
		value=5;
		type="2*		256";
		allowedSlots[]={901};
		count=1;
		initSpeed=5;
		picture="";
		nameSound="handgrenade";
	};
	class 30Rnd_556x45_Stanag: CA_Magazine
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag0";
		ammo="B_556x45_Ball";
		count=30;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag1";
		modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_556x45_stanag_30rnd.p3d";
		modelSpecialIsProxy=1;
		initSpeed=909;
	};
	class 30Rnd_556x45_Stanag_green: 30Rnd_556x45_Stanag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_green_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_green0";
		ammo="B_556x45_Ball_Tracer_Green";
		initSpeed=869;
	};
	class 30Rnd_556x45_Stanag_red: 30Rnd_556x45_Stanag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_red_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_red0";
		ammo="B_556x45_Ball_Tracer_Red";
		initSpeed=869;
	};
	class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Tracer_Red_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Red0";
		ammo="B_556x45_Ball_Tracer_Red";
		tracersEvery=1;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
		initSpeed=869;
	};
	class 30Rnd_556x45_Stanag_Tracer_Green: 30Rnd_556x45_Stanag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Tracer_Green_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Green0";
		ammo="B_556x45_Ball_Tracer_Green";
		tracersEvery=1;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Green1";
		displaynameshort="$STR_A3_tracer_dns";
		initSpeed=869;
	};
	class 30Rnd_556x45_Stanag_Tracer_Yellow: 30Rnd_556x45_Stanag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Tracer_Yellow_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Yellow0";
		ammo="B_556x45_Ball_Tracer_Yellow";
		tracersEvery=1;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Yellow1";
		displaynameshort="$STR_A3_tracer_dns";
		initSpeed=889;
	};
	class 30Rnd_556x45_Stanag_Sand: 30Rnd_556x45_Stanag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand0";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\weapons_f_exp\rifles\spar_01\data\arifle_spar_01_snd_f_01_co.paa"
		};
	};
	class 30Rnd_556x45_Stanag_Sand_green: 30Rnd_556x45_Stanag_Sand
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_green_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_green0";
		ammo="B_556x45_Ball_Tracer_Green";
	};
	class 30Rnd_556x45_Stanag_Sand_red: 30Rnd_556x45_Stanag_Sand
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_red_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_red0";
		ammo="B_556x45_Ball_Tracer_Red";
	};
	class 30Rnd_556x45_Stanag_Sand_Tracer_Red: 30Rnd_556x45_Stanag_Sand
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_Tracer_Red_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_Tracer_Red0";
		ammo="B_556x45_Ball_Tracer_Red";
		tracersEvery=1;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 30Rnd_556x45_Stanag_Sand_Tracer_Green: 30Rnd_556x45_Stanag_Sand_Tracer_Red
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_Tracer_Green_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_Tracer_Green0";
		ammo="B_556x45_Ball_Tracer_Green";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Green1";
	};
	class 30Rnd_556x45_Stanag_Sand_Tracer_Yellow: 30Rnd_556x45_Stanag_Sand_Tracer_Red
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_556x45_Stanag_Sand_Tracer_Yellow_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Sand_Tracer_Yellow0";
		ammo="B_556x45_Ball_Tracer_Yellow";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Yellow1";
	};
	class 20Rnd_556x45_UW_mag: 30Rnd_556x45_Stanag
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_20Rnd_556x45_UW_mag0";
		descriptionShort="$STR_A3_CfgMagazines_20Rnd_556x45_UW_mag1";
		displaynameshort="$STR_A3_CfgMagazines_20Rnd_556x45_UW_mag_dns";
		picture="\A3\weapons_f\data\ui\m_20stanag_CA.paa";
		ammo="B_556x45_dual";
		count=20;
		mass=6;
		tracersEvery=0;
		lastRoundsTracer=0;
		initSpeed=267;
	};
	class 30Rnd_65x39_caseless_mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_mag0";
		picture="\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
		modelSpecial="a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"
		};
		ammo="B_65x39_Caseless";
		count=30;
		mass=10;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_65x39_mag1";
		tracersEvery=0;
		lastRoundsTracer=0;
		initSpeed=774;
	};
	class 30Rnd_65x39_caseless_khaki_mag: 30Rnd_65x39_caseless_mag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_khaki_mag0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"
		};
	};
	class 30Rnd_65x39_caseless_black_mag: 30Rnd_65x39_caseless_mag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_black_mag0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class 30Rnd_65x39_caseless_green: 30Rnd_65x39_caseless_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Caseless_green";
		picture="\A3\weapons_f\data\ui\m_20stanag_CA.paa";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_green0";
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_green1";
		tracersEvery=0;
		lastRoundsTracer=0;
		initSpeed=788;
	};
	class 30Rnd_65x39_caseless_mag_Tracer: 30Rnd_65x39_caseless_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		lastRoundsTracer=30;
		picture="\A3\weapons_f\data\ui\m_30stanag_caseless_red_CA.paa";
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_mag_Tracer0";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_65x39_mag_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 30Rnd_65x39_caseless_khaki_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_Tracer_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_khaki_mag_Tracer0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"
		};
	};
	class 30Rnd_65x39_caseless_black_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_Tracer_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_black_mag_Tracer0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
	};
	class 30Rnd_65x39_caseless_green_mag_Tracer: 30Rnd_65x39_caseless_green
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		lastRoundsTracer=30;
		picture="\A3\weapons_f\data\ui\m_20stanag_green_ca.paa";
		displayName="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_green_mag_Tracer0";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_65x39_caseless_green_mag_Tracer1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 20Rnd_762x51_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_20Rnd_762x45_Mag0";
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_20Rnd_762x51_Mag_ca.paa";
		count=20;
		ammo="B_762x51_Ball";
		mass=12;
		descriptionShort="$STR_A3_CfgMagazines_20Rnd_762x45_Mag1";
		modelSpecial="a3\Weapons_F_Mark\MagazineProxies\mag_762x51_mk14_20rnd";
		modelSpecialIsProxy=1;
		initSpeed=827;
	};
	class 7Rnd_408_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CFGMAGAZINES_7RND_408_MAG0";
		picture="\A3\weapons_f\data\UI\m_M24_CA.paa";
		count=7;
		ammo="B_408_Ball";
		descriptionShort="$STR_A3_CFGMAGAZINES_7RND_408_MAG1";
		mass=14;
		initSpeed=867;
	};
	class 5Rnd_127x108_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_5Rnd_127x108_Mag0";
		picture="\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		count=5;
		ammo="B_127x108_Ball";
		initSpeed=820;
		descriptionShort="$STR_A3_CfgMagazines_5Rnd_127x108_Mag1";
		mass=16;
	};
	class 100Rnd_65x39_caseless_mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_100Rnd_65x39_caseless_mag0";
		picture="\A3\Weapons_F\Data\UI\M_100Rnd_65x39_CA.paa";
		count=100;
		type="2*		256";
		ammo="B_65x39_Caseless";
		nameSound="mgun";
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_65x39_Belt1";
		mass=25;
		modelSpecial="a3\Weapons_F\MagazineProxies\mag_65x39c_mx_100rnd.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_lmg_co.paa"
		};
		tracersEvery=5;
		lastRoundsTracer=3;
		initSpeed=774;
	};
	class 100Rnd_65x39_caseless_khaki_mag: 100Rnd_65x39_caseless_mag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_65x39_caseless_khaki_mag0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"
		};
	};
	class 100Rnd_65x39_caseless_black_mag: 100Rnd_65x39_caseless_mag
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_65x39_caseless_black_mag0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"
		};
	};
	class 100Rnd_65x39_caseless_mag_Tracer: 100Rnd_65x39_caseless_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_65x39_caseless_mag_Tracer0";
		picture="\A3\Weapons_F\Data\UI\M_100Rnd_65x39_red_CA.paa";
		tracersEvery=1;
		lastRoundsTracer=100;
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_65x39_Belt_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
		modelSpecial="a3\Weapons_F\MagazineProxies\mag_65x39c_mx_100rnd.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_lmg_co.paa"
		};
	};
	class 100Rnd_65x39_caseless_khaki_mag_tracer: 100Rnd_65x39_caseless_mag_Tracer
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_tracer_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_65x39_caseless_khaki_mag_tracer0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"
		};
	};
	class 100Rnd_65x39_caseless_black_mag_tracer: 100Rnd_65x39_caseless_mag_Tracer
	{
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_tracer_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_65x39_caseless_black_mag_tracer0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"
		};
	};
	class 200Rnd_65x39_cased_Box: 100Rnd_65x39_caseless_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_Box0";
		picture="\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
		count=200;
		ammo="B_65x39_Caseless_yellow";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_65x39_Box1";
		mass=50;
		ACE_isBelt=1;
		tracersEvery=5;
		lastRoundsTracer=3;
		initSpeed=743;
	};
	class 200Rnd_65x39_cased_Box_Tracer: 200Rnd_65x39_cased_Box
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_200RND_65X39_BELT_TRACER_YELLOW0";
		picture="\A3\Weapons_F\Data\UI\m_200rnd_65x39_yellow_ca.paa";
		descriptionShort="$STR_A3_CFGMAGAZINES_200RND_65X39_BELT_TRACER_YELLOW1";
		displaynameshort="$STR_A3_tracer_dns";
		lastRoundsTracer=200;
		tracersEvery=1;
	};
	class 200Rnd_65x39_cased_Box_Red: 100Rnd_65x39_caseless_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_cased_Box_Red0";
		picture="\A3\Weapons_F\Data\UI\M_200Rnd_65x39_CA.paa";
		count=200;
		initSpeed=920;
		ammo="B_65x39_Caseless";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_65x39_Box1";
		mass=50;
	};
	class 200Rnd_65x39_cased_Box_Tracer_Red: 200Rnd_65x39_cased_Box
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_cased_Box_Tracer_Red0";
		picture="\A3\Weapons_F\Data\UI\m_200rnd_65x39_red_ca.paa";
		descriptionShort="$STR_A3_CFGMAGAZINES_200RND_65X39_BELT_TRACER_RED1";
		displaynameshort="$STR_A3_tracer_dns";
		ammo="B_65x39_Caseless";
		lastRoundsTracer=200;
		tracersEvery=1;
	};
	class 30Rnd_9x21_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Mag0";
		picture="\A3\Weapons_F\Data\UI\M_30Rnd_45ACP_CA.paa";
		ammo="B_9x21_Ball";
		count=30;
		mass=10;
		tracersEvery=0;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_9x21_Mag1";
		lastRoundsTracer=0;
		initSpeed=430;
	};
	class 30Rnd_9x21_Red_Mag: 30Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Red_Mag0";
		ammo="B_9x21_Ball_Tracer_Red";
		lastRoundsTracer=4;
	};
	class 30Rnd_9x21_Yellow_Mag: 30Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Yellow_Mag0";
		ammo="B_9x21_Ball_Tracer_Yellow";
		lastRoundsTracer=4;
	};
	class 30Rnd_9x21_Green_Mag: 30Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Green_Mag0";
		ammo="B_9x21_Ball_Tracer_Green";
		lastRoundsTracer=4;
		initSpeed=402;
	};
	class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\A3\weapons_f\data\ui\M_16Rnd_9x21_CA.paa";
		type=16;
		descriptionShort="$STR_A3_CfgMagazines_16Rnd_9x21_Mag1";
		mass=6;
		displayname="$STR_ace_smallarms_17Rnd_9x19_Name";
		count=17;
		initSpeed=430;
	};
	class 30Rnd_9x21_Mag_SMG_02: 30Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
		descriptionShort="$STR_A3_CFGMAGAZINES_30RND_9X21_MAG2";
		initSpeed=430;
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Red: 30Rnd_9x21_Mag_SMG_02
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Red_Mag0";
		ammo="B_9x21_Ball_Tracer_Red";
		lastRoundsTracer=4;
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow: 30Rnd_9x21_Mag_SMG_02
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Yellow_Mag0";
		ammo="B_9x21_Ball_Tracer_Yellow";
		lastRoundsTracer=4;
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green: 30Rnd_9x21_Mag_SMG_02
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_9x21_Green_Mag0";
		ammo="B_9x21_Ball_Tracer_Green";
		lastRoundsTracer=4;
		initSpeed=402;
	};
	class 16Rnd_9x21_red_Mag: 16Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_16Rnd_9x21_red_Mag0";
		ammo="B_9x21_Ball_Tracer_Red";
		lastRoundsTracer=4;
	};
	class 16Rnd_9x21_green_Mag: 16Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_16Rnd_9x21_green_Mag0";
		ammo="B_9x21_Ball_Tracer_Green";
		lastRoundsTracer=4;
	};
	class 16Rnd_9x21_yellow_Mag: 16Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_16Rnd_9x21_yellow_Mag0";
		ammo="B_9x21_Ball_Tracer_Yellow";
		lastRoundsTracer=4;
	};
	class RPG32_F: CA_LauncherMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_LAW0";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_rpg32_rocket_ca.paa";
		initSpeed=140;
		descriptionShort="$STR_A3_CfgMagazines_LAW1";
		displaynameshort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		ammo="R_PG32V_F";
		type="2*		256";
		mass=60;
	};
	class RPG32_HE_F: RPG32_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_RPG32_AA_F0";
		displayNameShort="$STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells_dns";
		descriptionShort="$STR_A3_CfgMagazines_LAW2";
		model="\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
		picture="\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";
		ammo="R_TBG32V_F";
		mass=40;
	};
	class NLAW_F: CA_LauncherMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_NLAW0";
		descriptionShort="$STR_A3_CfgMagazines_NLAW1";
		displaynameshort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		type="3 * 		256";
		picture="\A3\weapons_f\launchers\nlaw\data\UI\gear_nlaw_rocket_ca.paa";
		modelSpecial="\A3\weapons_f\launchers\nlaw\nlaw_loaded_F";
		model="\A3\weapons_f\launchers\nlaw\nlaw_proxy";
		initSpeed=40;
		maxLeadSpeed=27.7778;
		mass=80;
		ammo="ACE_NLAW";
	};
	class 1Rnd_HE_Grenade_shell: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		type=16;
		displayName="$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell0";
		displayNameShort="$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell_dns";
		picture="\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		ammo="G_40mm_HE";
		initSpeed=80;
		count=1;
		nameSound="";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_HE_Grenade_shell1";
		mass=4;
		modelSpecial="\a3\Weapons_F\MagazineProxies\mag_40x36_HE_1rnd.p3d";
		modelSpecialIsProxy=1;
		deleteIfEmpty=0;
	};
	class 3Rnd_HE_Grenade_shell: 1Rnd_HE_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_HE_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_HE_Grenade_shell1";
		mass=12;
	};
	class 1Rnd_Smoke_Grenade_shell: 1Rnd_HE_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1Rnd_Smoke_Grenade_shell0";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		ammo="G_40mm_Smoke";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_Smoke_Grenade_shell1";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShell_dns";
	};
	class 3Rnd_Smoke_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_Smoke_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_Smoke_Grenade_shell1";
		mass=12;
	};
	class 1Rnd_SmokeRed_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1Rnd_SmokeRed_Grenade_shell0";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
		ammo="G_40mm_SmokeRed";
		displayNameShort="$STR_A3_CFGMAGAZINES_SMOKESHELLRED_DNS";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_SmokeRed_Grenade_shell1";
	};
	class 3Rnd_SmokeRed_Grenade_shell: 1Rnd_SmokeRed_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_SmokeRed_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_SmokeRed_Grenade_shell1";
		mass=12;
	};
	class 1Rnd_SmokeGreen_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1Rnd_SmokeGreen_Grenade_shell0";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
		ammo="G_40mm_SmokeGreen";
		displayNameShort="$STR_A3_CFGMAGAZINES_SMOKESHELLGREEN_DNS";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_SmokeGreen_Grenade_shell1";
	};
	class 3Rnd_SmokeGreen_Grenade_shell: 1Rnd_SmokeGreen_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_SmokeGreen_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_SmokeGreen_Grenade_shell1";
		mass=12;
	};
	class 1Rnd_SmokeYellow_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1Rnd_SmokeYellow_Grenade_shell0";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
		ammo="G_40mm_SmokeYellow";
		displayNameShort="$STR_A3_CFGMAGAZINES_SMOKESHELLYELLOW_DNS";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_SmokeYellow_Grenade_shell1";
	};
	class 3Rnd_SmokeYellow_Grenade_shell: 1Rnd_SmokeYellow_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_SmokeYellow_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_SmokeYellow_Grenade_shell1";
		mass=12;
	};
	class 1Rnd_SmokePurple_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1Rnd_SmokePurple_Grenade_shell0";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
		ammo="G_40mm_SmokePurple";
		displayNameShort="$STR_A3_CFGMAGAZINES_SMOKESHELLPURPLE_DNS";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_SmokePurple_Grenade_shell1";
	};
	class 3Rnd_SmokePurple_Grenade_shell: 1Rnd_SmokePurple_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_SmokePurple_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_SmokePurple_Grenade_shell1";
		mass=12;
	};
	class 1Rnd_SmokeBlue_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1Rnd_SmokeBlue_Grenade_shell0";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
		ammo="G_40mm_SmokeBlue";
		displayNameShort="$STR_A3_CFGMAGAZINES_SMOKESHELLBLUE_DNS";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_SmokeBlue_Grenade_shell1";
	};
	class 3Rnd_SmokeBlue_Grenade_shell: 1Rnd_SmokeBlue_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_SmokeBlue_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_SmokeBlue_Grenade_shell1";
		mass=12;
	};
	class 1Rnd_SmokeOrange_Grenade_shell: 1Rnd_Smoke_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1Rnd_SmokeOrange_Grenade_shell0";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
		ammo="G_40mm_SmokeOrange";
		displayNameShort="$STR_A3_CFGMAGAZINES_1RND_SMOKEORANGE_GRENADE_SHELL_DNS";
		descriptionShort="$STR_A3_CfgMagazines_1Rnd_SmokeOrange_Grenade_shell1";
	};
	class 3Rnd_SmokeOrange_Grenade_shell: 1Rnd_SmokeOrange_Grenade_shell
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_CfgMagazines_3Rnd_SmokeOrange_Grenade_shell0";
		descriptionShort="$STR_A3_CfgMagazines_3Rnd_SmokeOrange_Grenade_shell1";
		mass=12;
	};
	class HandGrenade: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=10;
		scope=2;
		value=1;
		picture="\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		model="\A3\Weapons_f\ammo\Handgrenade";
		type=256;
		ammo="GrenadeHand";
		count=1;
		initSpeed=18;
		nameSound="handgrenade";
		maxLeadSpeed=6.9444399;
		descriptionShort="$STR_A3_CfgMagazines_HandGrenade1";
		displayName="$STR_ace_realisticnames_HandGrenade_Name";
		displayNameShort="M67";
	};
	class MiniGrenade: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=6;
		scope=2;
		value=1;
		model="\A3\Weapons_f\ammo\mini_frag";
		picture="\A3\Weapons_F\Data\UI\gear_M67_CA.paa";
		type=256;
		ammo="mini_Grenade";
		count=1;
		initSpeed=26;
		nameSound="handgrenade";
		maxLeadSpeed=6.9444399;
		descriptionShort="$STR_A3_CfgMagazines_MiniGrenade1";
		displayName="$STR_ace_realisticnames_MiniGrenade_Name";
		displayNameShort="V40";
	};
	class HandGrenade_Stone: HandGrenade
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		displayName="$STR_A3_CfgMagazines_HandGrenade_Stone0";
		value=0.1;
		ammo="GrenadeHand_stone";
		descriptionShort="$STR_A3_CfgMagazines_HandGrenade_Stone1";
		displayNameShort="$STR_A3_CfgMagazines_HandGrenade_Stone_dns";
	};
	class SmokeShell: HandGrenade
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_white_ca.paa";
		model="\A3\Weapons_f\ammo\smokegrenade_white";
		value=2;
		ammo="SmokeShell";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
		descriptionShort="$STR_A3_CfgMagazines_SmokeShell1";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShell_dns";
		mass=4;
		initSpeed=22;
		displayName="$STR_ace_realisticnames_SmokeShell_Name";
	};
	class SmokeShellRed: SmokeShell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShellRed_dns";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_red_ca.paa";
		model="\A3\Weapons_f\ammo\smokegrenade_red";
		ammo="SmokeShellRed";
		descriptionShort="$STR_A3_CfgMagazines_SmokeShellRed1";
		displayName="$STR_ace_realisticnames_SmokeShellRed_Name";
	};
	class SmokeShellGreen: SmokeShell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CFGMAGAZINES_SMOKESHELLGREEN_DNS";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_green_ca.paa";
		model="\A3\Weapons_f\ammo\smokegrenade_green";
		ammo="SmokeShellGreen";
		descriptionShort="$STR_A3_CfgMagazines_SmokeShellGreen1";
		displayName="$STR_ace_realisticnames_SmokeShellGreen_Name";
	};
	class SmokeShellYellow: SmokeShell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShellYellow_dns";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_yellow_ca.paa";
		model="\A3\Weapons_f\ammo\smokegrenade_yellow";
		ammo="SmokeShellYellow";
		descriptionShort="$STR_A3_CfgMagazines_SmokeShellYellow1";
		displayName="$STR_ace_realisticnames_SmokeShellYellow_Name";
	};
	class SmokeShellPurple: SmokeShell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShellPurple_dns";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_purple_ca.paa";
		model="\A3\Weapons_f\ammo\smokegrenade_purple";
		ammo="SmokeShellPurple";
		descriptionShort="$STR_A3_CfgMagazines_SmokeShellPurple1";
		displayName="$STR_ace_realisticnames_SmokeShellPurple_Name";
	};
	class SmokeShellBlue: SmokeShell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShellBlue_dns";
		ammo="SmokeShellBlue";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_blue_ca.paa";
		model="\A3\Weapons_f\ammo\smokegrenade_blue";
		descriptionShort="$STR_A3_CfgMagazines_SmokeShellBlue1";
		displayName="$STR_ace_realisticnames_SmokeShellBlue_Name";
	};
	class SmokeShellOrange: SmokeShell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShellOrange_dns";
		ammo="SmokeShellOrange";
		picture="\A3\Weapons_f\data\ui\gear_smokegrenade_orange_ca.paa";
		model="\A3\Weapons_f\ammo\smokegrenade_orange";
		descriptionShort="$STR_A3_CfgMagazines_SmokeShellOrange1";
		displayName="$STR_ace_realisticnames_SmokeShellOrange_Name";
	};
	class Chemlight_green: SmokeShell
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_CHEMLIGHT0";
		picture="\A3\Weapons_F\Data\UI\M_chemlight_green_CA.paa";
		model="\A3\Weapons_f\chemlight\chemlight_green";
		value=2;
		initSpeed=14;
		ammo="Chemlight_green";
		nameSoundWeapon="Chemlight";
		nameSound="Chemlight";
		descriptionShort="$STR_A3_CfgMagazines_Chemlight1";
		displayNameShort="$STR_A3_CFGMAGAZINES_CHEMLIGHT_DNS";
		mass=2;
		ACE_Attachable="Chemlight_green";
		ACE_Chemlight_Shield="ACE_Chemlight_Shield_Green";
	};
	class Chemlight_red: Chemlight_green
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_CHEMLIGHT_RED0";
		ammo="Chemlight_red";
		descriptionShort="$STR_A3_CfgMagazines_Chemlight_red1";
		model="\A3\Weapons_f\chemlight\chemlight_red";
		displayNameShort="$STR_A3_CFGMAGAZINES_CHEMLIGHTT_RED_DNS";
		picture="\A3\Weapons_F\Data\UI\M_chemlight_red_CA.paa";
		ACE_Attachable="Chemlight_red";
		ACE_Chemlight_Shield="ACE_Chemlight_Shield_Red";
	};
	class Chemlight_yellow: Chemlight_green
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_CHEMLIGHT_YELLOW0";
		ammo="Chemlight_yellow";
		descriptionShort="$STR_A3_CfgMagazines_Chemlight_yellow1";
		model="\A3\Weapons_f\chemlight\chemlight_yellow";
		displayNameShort="$STR_A3_CFGMAGAZINES_CHEMLIGHTT_YELLOW_DNS";
		picture="\A3\Weapons_F\Data\UI\M_chemlight_yellow_CA.paa";
		ACE_Attachable="Chemlight_yellow";
		ACE_Chemlight_Shield="ACE_Chemlight_Shield_Yellow";
	};
	class Chemlight_blue: Chemlight_green
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_CHEMLIGHT_BLUE0";
		ammo="Chemlight_blue";
		descriptionShort="$STR_A3_CfgMagazines_Chemlight_blue1";
		model="\A3\Weapons_f\chemlight\chemlight_blue";
		displayNameShort="$STR_A3_CFGMAGAZINES_CHEMLIGHTT_BLUE_DNS";
		picture="\A3\Weapons_F\Data\UI\M_chemlight_blue_CA.paa";
		ACE_Attachable="Chemlight_blue";
		ACE_Chemlight_Shield="ACE_Chemlight_Shield_Blue";
	};
	class 60Rnd_CMFlareMagazine: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		count=60;
		ammo="CMflareAmmo";
		initSpeed=30;
		displayName="$STR_ace_rearm_Mag_60Rnd_CMFlareMagazine";
	};
	class 120Rnd_CMFlareMagazine: 60Rnd_CMFlareMagazine
	{
		count=120;
	};
	class 240Rnd_CMFlareMagazine: 60Rnd_CMFlareMagazine
	{
		count=240;
	};
	class 60Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlareMagazine
	{
		ammo="CMflare_Chaff_Ammo";
	};
	class 120Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count=120;
	};
	class 240Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count=240;
	};
	class 192Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count=192;
	};
	class 168Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count=168;
	};
	class 300Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count=300;
	};
	class SmokeLauncherMag: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		ammo="SmokeLauncherAmmo";
		count=2;
		nameSound="smokeshell";
		initSpeed=14;
		displayName="$STR_ace_rearm_Mag_SmokeLauncherMag";
	};
	class SmokeLauncherMag_Single: SmokeLauncherMag
	{
		author="$STR_A3_Bohemia_Interactive";
		count=1;
	};
	class SmokeLauncherMag_boat: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		ammo="SmokeLauncherAmmo_boat";
		count=2;
		nameSound="smokeshell";
		initSpeed=14;
		displayName="$STR_ace_rearm_Mag_SmokeLauncherMag";
	};
	class 200Rnd_65x39_Belt: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		count=200;
		ammo="B_65x39_Caseless";
		maxLeadSpeed=36.111099;
		tracersEvery=5;
		nameSound="mgun";
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_Belt0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_65x39_Belt1";
		initSpeed=806;
	};
	class 200Rnd_65x39_Belt_Tracer_Red: 200Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Caseless";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Red0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 200Rnd_65x39_Belt_Tracer_Green: 200Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Case_green";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Green0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Green1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 200Rnd_65x39_Belt_Tracer_Yellow: 200Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Case_yellow";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Yellow0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_65x39_Belt_Tracer_Yellow1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 1000Rnd_65x39_Belt: 200Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=1000;
		displayName="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt0";
		descriptionShort="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt1";
	};
	class 1000Rnd_65x39_Belt_Tracer_Red: 1000Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		ammo="B_65x39_Caseless";
		displayName="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Red0";
		descriptionShort="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 1000Rnd_65x39_Belt_Green: 1000Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Case_green";
		displayNameMFDFormat="П";
	};
	class 1000Rnd_65x39_Belt_Tracer_Green: 1000Rnd_65x39_Belt_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Green0";
		descriptionShort="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Green1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 1000Rnd_65x39_Belt_Yellow: 1000Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Case_Yellow";
		displayNameMFDFormat="LMG";
	};
	class 1000Rnd_65x39_Belt_Tracer_Yellow: 1000Rnd_65x39_Belt_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Yellow0";
		descriptionShort="$STR_A3_CfgMagazines_1000Rnd_65x39_Belt_Tracer_Yellow1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 2000Rnd_65x39_Belt: 200Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2000;
		displayName="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt0";
		descriptionShort="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt1";
		displayNameMFDFormat="LMG";
	};
	class 2000Rnd_65x39_Belt_Tracer_Red: 2000Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		ammo="B_65x39_Minigun_Caseless_Red_splash";
		displayName="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Red0";
		descriptionShort="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Red1";
		displaynameshort="$STR_A3_tracer_dns";
		weight=30;
	};
	class 2000Rnd_65x39_Belt_Green: 2000Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Case_Green";
	};
	class 2000Rnd_65x39_Belt_Tracer_Green: 2000Rnd_65x39_Belt_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Green0";
		descriptionShort="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Green1";
		displaynameshort="$STR_A3_tracer_dns";
		weight=30;
	};
	class 2000Rnd_65x39_Belt_Tracer_Green_Splash: 2000Rnd_65x39_Belt_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Minigun_Caseless_Green_splash";
	};
	class 2000Rnd_65x39_Belt_Yellow: 2000Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Case_Yellow";
	};
	class 2000Rnd_65x39_Belt_Tracer_Yellow: 2000Rnd_65x39_Belt_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Yellow0";
		descriptionShort="$STR_A3_CfgMagazines_2000Rnd_65x39_Belt_Tracer_Yellow1";
		displaynameshort="$STR_A3_tracer_dns";
	};
	class 2000Rnd_65x39_Belt_Tracer_Yellow_Splash: 2000Rnd_65x39_Belt_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Minigun_Caseless_Yellow_splash";
	};
	class 5000Rnd_762x51_Belt: 2000Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Minigun_Tracer_Red_splash";
		displayName="$STR_A3_CfgMagazines_2000Rnd_762x45_Belt0";
		descriptionShort="$STR_A3_CfgMagazines_2000Rnd_762x45_Belt1";
		tracersEvery=1;
		count=5000;
		initSpeed=860;
		weight=128;
		displayNameShort="7.62mm";
	};
	class 5000Rnd_762x51_Yellow_Belt: 5000Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Minigun_Tracer_Yellow_splash";
		displayNameShort="7.62mm";
	};
	class 500Rnd_127x99_mag: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		count=500;
		ammo="B_127x99_Ball";
		initSpeed=910;
		maxLeadSpeed=36.111099;
		tracersEvery=4;
		nameSound="mgun";
		displayName="$STR_A3_CfgMagazines_500Rnd_127x99_mag0";
		descriptionShort="$STR_A3_CfgMagazines_500Rnd_127x99_mag1";
		muzzleImpulseFactor[]={0.050000001,0.050000001};
		displayNameShort="12.7mm";
	};
	class 500Rnd_127x99_mag_Tracer_Red: 500Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Red";
		displayName="$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Red0";
		descriptionShort="$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Red1";
		displayNameMFDFormat="HMG";
		displayNameShort="12.7mm";
	};
	class 500Rnd_127x99_mag_Tracer_Green: 500Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Green";
		displayName="$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Green0";
		descriptionShort="$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Green1";
		displayNameMFDFormat="П";
		displayNameShort="12.7mm";
	};
	class 500Rnd_127x99_mag_Tracer_Yellow: 500Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Yellow";
		displayName="$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Yellow0";
		descriptionShort="$STR_A3_CfgMagazines_500Rnd_127x99_mag_Tracer_Yellow1";
		displayNameMFDFormat="HMG";
		displayNameShort="12.7mm";
	};
	class 200Rnd_127x99_mag: 500Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		count=200;
		tracersEvery=3;
		displayName="$STR_A3_CfgMagazines_200Rnd_127x99_mag0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_127x99_mag1";
		displayNameShort="12.7mm";
	};
	class 200Rnd_127x99_mag_Tracer_Red: 200Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Red";
		displayName="$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Red0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Red1";
		displayNameMFDFormat="HMG";
		displayNameShort="12.7mm";
	};
	class 200Rnd_127x99_mag_Tracer_Green: 200Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Green";
		displayName="$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Green0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Green1";
		displayNameMFDFormat="П";
		displayNameShort="12.7mm";
	};
	class 200Rnd_127x99_mag_Tracer_Yellow: 200Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Yellow";
		displayName="$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Yellow0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_127x99_mag_Tracer_Yellow1";
		displayNameMFDFormat="HMG";
		displayNameShort="12.7mm";
	};
	class 100Rnd_127x99_mag: 500Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		count=100;
		displayName="$STR_A3_CfgMagazines_100Rnd_127x99_mag0";
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_127x99_mag1";
		displayNameShort="12.7mm";
	};
	class 100Rnd_127x99_mag_Tracer_Red: 100Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Red";
		displayName="$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Red0";
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Red1";
		displayNameShort="12.7mm";
	};
	class 100Rnd_127x99_mag_Tracer_Green: 100Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Green";
		displayName="$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Green0";
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Green1";
		displayNameShort="12.7mm";
	};
	class 100Rnd_127x99_mag_Tracer_Yellow: 100Rnd_127x99_mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_127x99_Ball_Tracer_Yellow";
		displayName="$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Yellow0";
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_127x99_mag_Tracer_Yellow1";
		displayNameShort="12.7mm";
	};
	class 450Rnd_127x108_Ball: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		count=450;
		ammo="B_127x108_Ball";
		initSpeed=845;
		maxLeadSpeed=36.111099;
		tracersEvery=4;
		nameSound="mgun";
		displayName="$STR_A3_CfgMagazines_450Rnd_127x108_Ball0";
		muzzleImpulseFactor[]={0.050000001,0.050000001};
		displayNameShort="12.7mm";
	};
	class 150Rnd_127x108_Ball: 450Rnd_127x108_Ball
	{
		author="$STR_A3_Bohemia_Interactive";
		count=150;
	};
	class 50Rnd_127x108_Ball: 450Rnd_127x108_Ball
	{
		author="$STR_A3_Bohemia_Interactive";
		count=50;
	};
	class 200Rnd_40mm_G_belt: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		ammo="G_40mm_HEDP";
		initSpeed=241;
		maxLeadSpeed=25;
		nameSound="";
		count=200;
		displayName="$STR_A3_CfgMagazines_200Rnd_40mm_G_belt0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_40mm_G_belt1";
		muzzleImpulseFactor[]={0.1,0.1};
		displayNameShort="40mm HE";
	};
	class 96Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=96;
		displayNameMFDFormat="GMG";
	};
	class 64Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=64;
	};
	class 32Rnd_40mm_G_belt: 200Rnd_40mm_G_belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=32;
	};
	class 200Rnd_20mm_G_belt: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		ammo="G_20mm_HE";
		initSpeed=400;
		maxLeadSpeed=25;
		nameSound="";
		count=200;
		displayName="$STR_A3_CfgMagazines_200Rnd_20mm_G_belt0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_20mm_G_belt1";
		muzzleImpulseFactor[]={0.1,0.1};
		displayNameShort="20mm HE";
	};
	class 40Rnd_20mm_G_belt: 200Rnd_20mm_G_belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=40;
		displayName="$STR_A3_CfgMagazines_40Rnd_20mm_G_belt0";
		descriptionShort="$STR_A3_CfgMagazines_40Rnd_20mm_G_belt1";
		displayNameShort="20mm HE";
	};
	class 24Rnd_PG_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		count=24;
		ammo="M_PG_AT";
		displayName="$STR_A3_CfgMagazines_24Rnd_PG_missiles0";
		descriptionShort="$STR_A3_cfgMagazine_DAGR_tooltip";
		initSpeed=0;
		maxLeadSpeed=41.666698;
		nameSound="missiles";
		displayNameShort="70mm HE";
	};
	class 12Rnd_PG_missiles: 24Rnd_PG_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		displayName="$STR_A3_CfgMagazines_12Rnd_PG_missiles0";
		weight=72;
		displayNameShort="70mm HE";
	};
	class 24Rnd_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		count=24;
		ammo="M_AT";
		displayName="$STR_A3_CfgMagazines_24Rnd_PuG_missiles0";
		descriptionShort="$STR_A3_cfgMagazine_DAR_tooltip";
		initSpeed=0;
		maxLeadSpeed=41.666698;
		nameSound="rockets";
		weight=144;
		displayNameShort="70mm HE";
	};
	class 12Rnd_missiles: 24Rnd_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
	};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		initSpeed=810;
		scope=2;
		displayName="$STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells0";
		displayNameMFDFormat="HE";
		ammo="Sh_155mm_AMOS";
		count=32;
		nameSound="heat";
		muzzleImpulseFactor[]={1.5,30};
		displayNameShort="155mm HE";
	};
	class 32Rnd_155mm_Mo_shells_O: 32Rnd_155mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="ОФ";
	};
	class 8Rnd_82mm_Mo_shells: 32Rnd_155mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_cfgmagazines_8rnd_82mm_mo_shells0";
		displayNameShort="$STR_A3_cfgmagazines_8rnd_82mm_mo_shells_dns";
		count=8;
		ammo="Sh_82mm_AMOS";
		muzzleImpulseFactor[]={0,0};
		initSpeed=200;
		ace_artillerytables_airFriction=-9.9999997e-005;
	};
	class 8Rnd_82mm_Mo_Flare_white: 8Rnd_82mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Flare_82mm_AMOS_White";
		displayName="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_Flare_white0";
		displayNameShort="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_Flare_white_dns";
	};
	class 8Rnd_82mm_Mo_Smoke_white: 8Rnd_82mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Smoke_82mm_AMOS_White";
		displayName="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_Smoke_white0";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShell_dns";
	};
	class 8Rnd_82mm_Mo_guided: 8Rnd_82mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Sh_82mm_AMOS_guided";
		displayName="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_guided0";
		displayNameShort="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_guided_dns";
	};
	class 8Rnd_82mm_Mo_LG: 8Rnd_82mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Sh_82mm_AMOS_LG";
		displayName="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_LG0";
		displayNameShort="$STR_A3_CfgMagazines_8Rnd_82mm_Mo_LG_dns";
	};
	class 6Rnd_155mm_Mo_smoke: 32Rnd_155mm_Mo_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=6;
		ammo="Smoke_120mm_AMOS_White";
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_smoke0";
		displayNameMFDFormat="SMOKE";
		displayNameShort="155mm Smoke";
	};
	class 6Rnd_155mm_Mo_smoke_O: 6Rnd_155mm_Mo_smoke
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="ДЫМ";
	};
	class 2Rnd_155mm_Mo_guided: 6Rnd_155mm_Mo_smoke
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2;
		ammo="Sh_155mm_AMOS_guided";
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_guided0";
		displayNameMFDFormat="GUIDED";
		displayNameShort="155mm Guided";
	};
	class 2Rnd_155mm_Mo_guided_O: 2Rnd_155mm_Mo_guided
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="КОФ";
	};
	class 4Rnd_155mm_Mo_guided: 2Rnd_155mm_Mo_guided
	{
		author="$STR_A3_Bohemia_Interactive";
		count=4;
	};
	class 4Rnd_155mm_Mo_guided_O: 2Rnd_155mm_Mo_guided
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="КОФ";
		count=4;
	};
	class 2Rnd_155mm_Mo_LG: 6Rnd_155mm_Mo_smoke
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2;
		ammo="Sh_155mm_AMOS_LG";
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameMFDFormat="LASER GUID";
		displayNameShort="155mm Laser Guided";
	};
	class 4Rnd_155mm_Mo_LG: 2Rnd_155mm_Mo_LG
	{
		author="$STR_A3_Bohemia_Interactive";
		count=4;
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameShort="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
	};
	class 4Rnd_155mm_Mo_LG_O: 2Rnd_155mm_Mo_LG
	{
		author="$STR_A3_Bohemia_Interactive";
		count=4;
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameShort="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameMFDFormat="ЛАЗ.НАВЕД.";
	};
	class 6Rnd_155mm_Mo_mine: 6Rnd_155mm_Mo_smoke
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Mine_155mm_AMOS_range";
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_mine0";
		displayNameMFDFormat="MINE";
		displayNameShort="155mm Mines";
	};
	class 6Rnd_155mm_Mo_mine_O: 6Rnd_155mm_Mo_mine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="МИНЫ";
	};
	class 6Rnd_155mm_Mo_AT_mine: 6Rnd_155mm_Mo_smoke
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="AT_Mine_155mm_AMOS_range";
		displayName="$STR_A3_at_mine_cluster_0";
		displayNameMFDFormat="AT MINE";
		displayNameShort="155mm AT Mines";
	};
	class 6Rnd_155mm_Mo_AT_mine_O: 6Rnd_155mm_Mo_AT_mine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="ПТ МИНЫ";
	};
	class 2Rnd_155mm_Mo_Cluster: 6Rnd_155mm_Mo_smoke
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2;
		ammo="Cluster_155mm_AMOS";
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_Cluster0";
		displayNameMFDFormat="CLUSTER";
		displayNameShort="155mm Cluster";
	};
	class 2Rnd_155mm_Mo_Cluster_O: 2Rnd_155mm_Mo_Cluster
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="КАССЕТНЫЙ";
	};
	class UGL_FlareWhite_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		type=16;
		displayName="$STR_A3_CfgMagazines_UGL_FlareWhite_F_test1";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareWhite_F_dns";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
		model="\A3\Weapons_F\Ammo\UGL_Flare";
		ammo="F_40mm_White";
		initSpeed=80;
		count=1;
		nameSound="";
		descriptionShort="$STR_A3_CfgMagazines_UGL_FlareWhite_F1";
		weaponPoolAvailable=1;
		mass=4;
	};
	class 3Rnd_UGL_FlareWhite_F: UGL_FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_A3_cfgmagazines_3rnd_ugl_flarewhite_f_test";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareWhite_F_dns";
		descriptionShort="$STR_a3_cfgmagazines_3rnd_ugl_flarewhite_f1";
		mass=12;
	};
	class UGL_FlareGreen_F: UGL_FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_UGL_FlareGreen_F0";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
		ammo="F_40mm_Green";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_Green_CA.paa";
		descriptionShort="$STR_A3_CfgMagazines_UGL_FlareGreen_F1";
	};
	class 3Rnd_UGL_FlareGreen_F: UGL_FlareGreen_F
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_a3_cfgmagazines_3rnd_ugl_flaregreen_f0";
		descriptionShort="$STR_a3_cfgmagazines_3rnd_ugl_flaregreen_f1";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
		mass=12;
	};
	class UGL_FlareRed_F: UGL_FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_UGL_FlareRed_F0";
		ammo="F_40mm_Red";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_Red_CA.paa";
		descriptionShort="$STR_A3_CfgMagazines_UGL_FlareRed_F1";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareRed_F_dns";
	};
	class 3Rnd_UGL_FlareRed_F: UGL_FlareRed_F
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_a3_cfgmagazines_3rnd_ugl_flarered_f0";
		descriptionShort="$STR_a3_cfgmagazines_3rnd_ugl_flarered_f1";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareRed_F_dns";
		mass=12;
	};
	class UGL_FlareYellow_F: UGL_FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_UGL_FlareYellow_F0";
		ammo="F_40mm_Yellow";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_yelow_CA.paa";
		descriptionShort="$STR_A3_CfgMagazines_UGL_FlareYellow_F1";
		displayNameShort="$STR_a3_cfgmagazines_ugl_flareyellow_f_dns";
	};
	class 3Rnd_UGL_FlareYellow_F: UGL_FlareYellow_F
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_a3_cfgmagazines_3rnd_ugl_flareyellow_f0";
		descriptionShort="$STR_a3_cfgmagazines_3rnd_ugl_flareyellow_f1";
		displayNameShort="$STR_a3_cfgmagazines_ugl_flareyellow_f_dns";
		mass=12;
	};
	class UGL_FlareCIR_F: UGL_FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_UGL_FlareCIR_F0";
		ammo="F_40mm_CIR";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_purple_CA.paa";
		descriptionShort="$STR_A3_CfgMagazines_UGL_FlareCIR_F1";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareCIR_F_dns";
	};
	class 3Rnd_UGL_FlareCIR_F: UGL_FlareCIR_F
	{
		author="$STR_A3_Bohemia_Interactive";
		count=3;
		displayName="$STR_a3_cfgmagazines_3rnd_ugl_flarecir_f0";
		descriptionShort="$STR_a3_cfgmagazines_3rnd_ugl_flarecir_f1";
		displayNameShort="$STR_a3_cfgmagazines_3rnd_ugl_flarecir_f_dns";
		mass=12;
	};
	class FlareWhite_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		type=16;
		displayName="$STR_A3_CfgMagazines_FlareWhite_F0";
		picture="\A3\Weapons_F\Data\UI\gear_flare_white_ca.paa";
		model="\A3\weapons_f\ammo\flare_white";
		ammo="F_20mm_White";
		initSpeed=80;
		count=1;
		nameSound="";
		descriptionShort="$STR_A3_CfgMagazines_FlareWhite_F1";
		displayNameShort="$STR_A3_CfgMagazines_FlareWhite_F_dns";
		weaponPoolAvailable=1;
		mass=4;
	};
	class FlareGreen_F: FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_FlareGreen_F0";
		ammo="F_20mm_Green";
		picture="\A3\Weapons_F\Data\UI\gear_flare_green_ca.paa";
		model="\A3\weapons_f\ammo\flare_green";
		descriptionShort="$STR_A3_CfgMagazines_FlareGreen_F1";
		displayNameShort="$STR_A3_CfgMagazines_FlareGreen_F_dns";
	};
	class FlareRed_F: FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_FlareRed_F0";
		ammo="F_20mm_Red";
		picture="\A3\Weapons_F\Data\UI\gear_flare_red_ca.paa";
		model="\A3\weapons_f\ammo\flare_red";
		descriptionShort="$STR_A3_CfgMagazines_FlareRed_F1";
		displayNameShort="$STR_A3_CfgMagazines_FlareRed_F_dns";
	};
	class FlareYellow_F: FlareWhite_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_FlareYellow_F0";
		ammo="F_20mm_Yellow";
		picture="\A3\Weapons_F\Data\UI\gear_flare_yellow_ca.paa";
		model="\A3\weapons_f\ammo\flare_yellow";
		descriptionShort="$STR_A3_CfgMagazines_FlareYellow_F1";
		displayNameShort="$STR_A3_CfgMagazines_FlareYellow_F_dns";
	};
	class Laserbatteries: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_Laserbatteries0";
		picture="\A3\Weapons_F\Data\UI\M_battery_CA.paa";
		ammo="Laserbeam";
		count=1;
		initSpeed=30;
		nameSound="laserdesignator";
		descriptionShort="$STR_A3_CfgMagazines_Laserbatteries1";
		mass=6;
	};
	class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_9x21_Mag_SMG_011";
		mass=10;
		ammo="B_45ACP_Ball";
		displayname="$STR_ace_smallarms_25Rnd_45_Name";
		displaynameshort=".45";
		picture="\A3\weapons_f\data\ui\M_30Rnd_9x21_CA.paa";
		count=25;
		tracersEvery=0;
		lastRoundsTracer=0;
		initSpeed=254;
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_45ACP_Mag_SMG_01
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_9x21_Mag_SMG_01_Tracer_Green1";
		displaynameshort="$STR_A3_tracer_dns";
		ammo="B_45ACP_Ball_Green";
		displayname="$STR_ace_smallarms_25Rnd_45_Tracer_Green_Name";
		initSpeed=254;
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red: 30Rnd_45ACP_Mag_SMG_01
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="$STR_A3_CFGMAGAZINES_30RND_9X21_MAG_SMG_01_TRACER_RED1";
		displayname="$STR_ace_smallarms_25Rnd_45_Tracer_Red_Name";
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow: 30Rnd_45ACP_Mag_SMG_01
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		lastRoundsTracer=30;
		descriptionShort="$STR_A3_CFGMAGAZINES_30RND_9X21_MAG_SMG_01_TRACER_YELLOW1";
		ammo="B_45ACP_Ball_Yellow";
		displayname="$STR_ace_smallarms_25Rnd_45_Tracer_Yellow_Name";
	};
	class 9Rnd_45ACP_Mag: 30Rnd_45ACP_Mag_SMG_01
	{
		author="$STR_A3_Bohemia_Interactive";
		descriptionShort="$STR_A3_Weapons_F_Beta_CfgMagazines_9Rnd_45ACP_Mag1";
		mass=6;
		lastRoundsTracer=0;
		ammo="B_45ACP_Ball_Green";
		displayname="$STR_ace_smallarms_8Rnd_45_Name";
		displaynameshort=".45";
		count=8;
		initSpeed=254;
	};
	class 150Rnd_762x51_Box: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_150Rnd_762x51_Box0";
		picture="\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_CA.paa";
		count=150;
		type="2*		256";
		ammo="B_762x51_Tracer_Green";
		nameSound="mgun";
		mass=50;
		descriptionShort="$STR_CBA_JAM_150rnd_762x51_box_description";
		ACE_isBelt=1;
		tracersEvery=5;
		lastRoundsTracer=3;
		initSpeed=833;
	};
	class 150Rnd_762x51_Box_Tracer: 150Rnd_762x51_Box
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer0";
		displayNameShort="Tracer";
		picture="\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_tracer_CA.paa";
		tracersEvery=1;
		descriptionShort="$STR_CBA_JAM_150rnd_762x51_box_tracer_description";
		initSpeed=833;
	};
	class 150Rnd_762x54_Box: 150Rnd_762x51_Box
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x54_Tracer_Green";
		descriptionShort="$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		initSpeed=778;
	};
	class 150Rnd_762x54_Box_Tracer: 150Rnd_762x54_Box
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer0";
		displayNameShort="Tracer";
		descriptionShort="$STR_A3_CfgMagazines_150Rnd_762x51_Box_Tracer1";
		picture="\A3\Weapons_F_Beta\Data\UI\m_150Rnd_762x51_tracer_CA.paa";
		tracersEvery=1;
	};
	class Titan_AA: CA_LauncherMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_Titan_AA0";
		displayNameShort="$STR_A3_CfgMagazines_Titan_AA_dns";
		ammo="M_Titan_AA";
		type="6 * 		256";
		picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_atl";
		initSpeed=18;
		maxLeadSpeed=277.77802;
		descriptionShort="$STR_A3_CfgMagazines_Titan_AA1";
		mass=100;
	};
	class Titan_AP: Titan_AA
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="M_Titan_AP";
		displayName="$STR_A3_CfgMagazines_Titan_AP0";
		displayNameShort="$STR_A3_CfgMagazines_Titan_AP_dns";
		descriptionShort="$STR_A3_CfgMagazines_Titan_AP1";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap";
		picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_ap_CA.paa";
		maxLeadSpeed=27.7778;
		mass=60;
	};
	class Titan_AT: Titan_AA
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_Titan_AT0";
		displayNameShort="$STR_A3_CfgMagazines_Titan_AT_dns";
		descriptionShort="$STR_A3_CfgMagazines_Titan_AT1";
		model="\A3\Weapons_F_beta\Launchers\titan\titan_missile_at";
		picture="\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_at_CA.paa";
		maxLeadSpeed=27.7778;
		mass=100;
		ammo="ACE_Javelin_FGM148";
	};
	class 300Rnd_20mm_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		ammo="B_20mm";
		count=300;
		initSpeed=1030;
		maxLeadSpeed=83.333298;
		tracersEvery=5;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.1,0.80000001};
		displayNameShort="20mm HE";
	};
	class 1000Rnd_20mm_shells: 300Rnd_20mm_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		count=1000;
		ammo="B_20mm_Tracer_Red";
		weight=126;
	};
	class 2000Rnd_20mm_shells: 300Rnd_20mm_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		count=2000;
	};
	class 300Rnd_25mm_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_300Rnd_25mm_shells0";
		ammo="B_25mm";
		count=300;
		initSpeed=1030;
		maxLeadSpeed=83.333298;
		tracersEvery=4;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.1,0.80000001};
	};
	class 1000Rnd_25mm_shells: 300Rnd_25mm_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_1000Rnd_25mm_shells0";
		count=1000;
	};
	class 250Rnd_30mm_HE_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_250Rnd_30mm_HE_shells0";
		ammo="B_30mm_HE";
		count=250;
		initSpeed=960;
		maxLeadSpeed=83.333298;
		nameSound="cannon";
		tracersEvery=1;
		weight=126;
		muzzleImpulseFactor[]={1,4};
		displayNameShort="30mm HE";
	};
	class 250Rnd_30mm_HE_shells_Tracer_Red: 250Rnd_30mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_250Rnd_30mm_HE_shells_Tracer_Red0";
		ammo="B_30mm_HE_Tracer_Red";
		tracersEvery=1;
		displayNameShort="$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells_dns";
	};
	class 250Rnd_30mm_HE_shells_Tracer_Green: 250Rnd_30mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CFGMAGAZINES_250RND_30MM_HE_SHELLS_TRACER_GREEN0";
		ammo="B_30mm_HE_Tracer_Green";
		tracersEvery=1;
	};
	class 250Rnd_30mm_APDS_shells: 250Rnd_30mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells0";
		ammo="B_30mm_AP";
		initSpeed=1120;
		muzzleImpulseFactor[]={0.5,2};
		displayNameShort="30mm APDS";
	};
	class 250Rnd_30mm_APDS_shells_Tracer_Red: 250Rnd_30mm_APDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells_Tracer_Red0";
		ammo="B_30mm_AP_Tracer_Red";
		tracersEvery=1;
	};
	class 250Rnd_30mm_APDS_shells_Tracer_Green: 250Rnd_30mm_APDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_250RND_30MM_APDS_SHELLS_TRACER_GREEN0";
		ammo="B_30mm_AP_Tracer_Green";
		tracersEvery=1;
	};
	class 250Rnd_30mm_APDS_shells_Tracer_Yellow: 250Rnd_30mm_APDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells_Tracer_Yellow0";
		ammo="B_30mm_AP_Tracer_Yellow";
		tracersEvery=1;
	};
	class 140Rnd_30mm_MP_shells: 250Rnd_30mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_140RND_30MM_MP_SHELLS_0";
		ammo="B_30mm_MP";
		initSpeed=1070;
		count=140;
		displayNameShort="30mm MP";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Red: 140Rnd_30mm_MP_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_140Rnd_30mm_MP_shells_Tracer_Red0";
		ammo="B_30mm_MP_Tracer_Red";
		count=140;
		displayNameMFDFormat="ОФ";
		displayNameShort="30mm MP-T";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Green: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_30mm_MP_Tracer_Green";
		displayNameShort="30mm MP-T";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Yellow: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_30mm_MP_Tracer_Yellow";
		displayNameMFDFormat="MP-T";
		displayNameShort="30mm MP-T";
	};
	class 60Rnd_30mm_APFSDS_shells: 250Rnd_30mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_30MM_APFSD";
		ammo="B_30mm_APFSDS";
		initSpeed=1430;
		count=60;
		muzzleImpulseFactor[]={0.5,2};
		displayNameShort="30mm AP";
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Red: 60Rnd_30mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_30MMAPDSFT";
		ammo="B_30mm_APFSDS_Tracer_Red";
		tracersEvery=1;
		displayNameShort="30mm AP-T";
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Green: 60Rnd_30mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_30MM_APFSD";
		displayNameMFDFormat="БР";
		ammo="B_30mm_APFSDS_Tracer_Green";
		tracersEvery=1;
		displayNameShort="30mm AP-T";
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Yellow: 60Rnd_30mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_30MMAPDSFT";
		ammo="B_30mm_APFSDS_Tracer_Yellow";
		tracersEvery=1;
		displayNameMFDFormat="APFSDS-T";
		displayNameShort="30mm AP-T";
	};
	class 60Rnd_40mm_GPR_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CFGMAGAZINES_40MMGPR";
		ammo="B_40mm_GPR";
		count=60;
		initSpeed=1035;
		maxLeadSpeed=83.333298;
		nameSound="cannon";
		tracersEvery=1;
		muzzleImpulseFactor[]={1,6};
		displayNameShort="40mm GPR";
	};
	class 60Rnd_40mm_GPR_Tracer_Red_shells: 60Rnd_40mm_GPR_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_40MMGPRT";
		ammo="B_40mm_GPR_Tracer_Red";
		displayNameMFDFormat="GPR-T";
		displayNameShort="40mm GPR-T";
	};
	class 60Rnd_40mm_GPR_Tracer_Green_shells: 60Rnd_40mm_GPR_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_40MMGPRT";
		ammo="B_40mm_GPR_Tracer_Green";
		displayNameShort="40mm GPR-T";
	};
	class 60Rnd_40mm_GPR_Tracer_Yellow_shells: 60Rnd_40mm_GPR_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_40MMGPRT";
		ammo="B_40mm_GPR_Tracer_Yellow";
		displayNameShort="40mm GPR-T";
	};
	class 40Rnd_40mm_APFSDS_shells: 60Rnd_40mm_GPR_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_40MM_APFSD";
		ammo="B_40mm_APFSDS";
		initSpeed=1600;
		count=40;
		muzzleImpulseFactor[]={0.5,2};
		displayNameShort="40mm AP";
	};
	class 40Rnd_40mm_APFSDS_Tracer_Red_shells: 40Rnd_40mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_40Rnd_40mm_APFSDS_Tracer_Red_shells0";
		ammo="B_40mm_APFSDS_Tracer_Red";
		count=40;
		displayNameMFDFormat="APFSDS-T";
		displayNameShort="40mm AP-T";
	};
	class 40Rnd_40mm_APFSDS_Tracer_Green_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_40mm_APFSDS_Tracer_Green";
		displayNameShort="40mm AP-T";
	};
	class 40Rnd_40mm_APFSDS_Tracer_Yellow_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_40mm_APFSDS_Tracer_Yellow";
		displayNameShort="40mm AP-T";
	};
	class 8Rnd_LG_scalpel: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_8Rnd_LG_scalpel0";
		displayNameShort="$STR_A3_CfgMagazines_8Rnd_LG_scalpel_dns";
		descriptionShort="$STR_A3_cfgMagazine_Scalpel_tooltip";
		ammo="M_Scalpel_AT";
		initSpeed=0;
		count=8;
		nameSound="missiles";
		weight=400;
	};
	class 6Rnd_LG_scalpel: 8Rnd_LG_scalpel
	{
		author="$STR_A3_Bohemia_Interactive";
		count=6;
	};
	class 2Rnd_LG_scalpel: 8Rnd_LG_scalpel
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2;
	};
	class 2Rnd_LG_scalpel_hidden: 2Rnd_LG_scalpel
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="M_Scalpel_AT_hidden";
	};
	class 14Rnd_80mm_rockets: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_14Rnd_80mm_rockets0";
		descriptionShort="$STR_A3_cfgMagazine_Skyfire_tooltip";
		ammo="R_80mm_HE";
		initSpeed=44;
		maxLeadSpeed=41.666698;
		count=14;
		nameSound="rockets";
		displayNameShort="70mm HE";
	};
	class 38Rnd_80mm_rockets: 14Rnd_80mm_rockets
	{
		author="$STR_A3_Bohemia_Interactive";
		count=38;
		weight=460;
	};
	class 12Rnd_230mm_rockets: 14Rnd_80mm_rockets
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="AG";
		ammo="R_230mm_HE";
		initSpeed=850;
		count=12;
		displayName="227mm HE Missile";
		displayNameShort="227mm HE";
	};
	class 12Rnd_230mm_rockets_cluster: 12Rnd_230mm_rockets
	{
		displayName="$STR_A3_CfgMagazines_12Rnd_230mm_rockets_cluster0";
		displayNameShort="Cluster";
		displayNameMFDFormat="CLUSTER";
		ammo="R_230mm_Cluster";
	};
	class 2Rnd_AAA_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_2Rnd_AAA_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_2Rnd_AAA_missiles_dns";
		descriptionShort="$STR_A3_cfgMagazine_ASRAAM_tooltip";
		ammo="M_Air_AA";
		count=2;
		initSpeed=0;
		maxLeadSpeed=694.44397;
		nameSound="missiles";
	};
	class 2Rnd_AAA_missiles_MI02: 2Rnd_AAA_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="M_Air_AA_MI02";
	};
	class 2Rnd_AAA_missiles_MI06: 2Rnd_AAA_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="M_Air_AA_MI06";
	};
	class 4Rnd_AAA_missiles: 2Rnd_AAA_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_4Rnd_AAA_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_4Rnd_AAA_missiles_dns";
		count=4;
		weight=360;
	};
	class 4Rnd_AAA_missiles_MI02: 4Rnd_AAA_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="M_Air_AA_MI02";
	};
	class 4Rnd_GAA_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_4Rnd_GAA_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_4Rnd_GAA_missiles_dns";
		descriptionShort="$STR_A3_cfgMagazine_Zephyr_tooltip";
		count=4;
		ammo="M_Zephyr";
		initSpeed=25;
		maxLeadSpeed=694.44397;
		nameSound="missiles";
	};
	class 4Rnd_Titan_long_missiles: 4Rnd_GAA_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="M_Titan_AA_long";
		displayName="$STR_A3_MISSILES_TITAN0";
		displayNameShort="$STR_A3_CfgMagazines_Titan_AA_dns";
		displayNameMFDFormat="MISSILE";
	};
	class 4Rnd_Titan_long_missiles_O: 4Rnd_Titan_long_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="З-В РАКЕТА";
	};
	class 5Rnd_GAT_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_MISSILES_TITAN0";
		displayNameShort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		count=5;
		ammo="M_Titan_AT_long";
		initSpeed=36;
		maxLeadSpeed=55.555599;
		nameSound="missiles";
	};
	class 2Rnd_GAT_missiles: 5Rnd_GAT_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2;
		displayNameMFDFormat="MISSILE";
	};
	class 2Rnd_GAT_missiles_O: 2Rnd_GAT_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameMFDFormat="Р";
	};
	class 30Rnd_120mm_HE_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells0";
		ammo="Sh_120mm_HE";
		count=30;
		initSpeed=1410;
		maxLeadSpeed=25;
		tracersEvery=0;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,6};
		displayNameShort="120mm HE";
	};
	class 30Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_120MMHE";
		displayNameMFDFormat="HE";
		ammo="Sh_120mm_HE_Tracer_Red";
		tracersEvery=1;
		displayNameShort="120mm HE-T";
	};
	class 30Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_120MMHE";
		ammo="Sh_120mm_HE_Tracer_Green";
		tracersEvery=1;
		displayNameShort="120mm HE-T";
	};
	class 30Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_120MMHE";
		displayNameMFDFormat="HE";
		ammo="Sh_120mm_HE_Tracer_Yellow";
		tracersEvery=1;
		displayNameShort="120mm HE-T";
	};
	class 16Rnd_120mm_HE_shells: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1410;
	};
	class 16Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1410;
	};
	class 16Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1410;
	};
	class 16Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1410;
	};
	class 14Rnd_120mm_HE_shells: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=14;
		initSpeed=1460;
	};
	class 14Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=14;
		initSpeed=1460;
	};
	class 14Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=14;
		initSpeed=1460;
	};
	class 14Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=14;
		initSpeed=1460;
	};
	class 12Rnd_120mm_HE_shells: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1410;
	};
	class 12Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1410;
	};
	class 12Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1410;
	};
	class 12Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1410;
	};
	class 8Rnd_120mm_HE_shells: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1410;
	};
	class 8Rnd_120mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1410;
	};
	class 8Rnd_120mm_HE_shells_Tracer_Green: 30Rnd_120mm_HE_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1410;
	};
	class 8Rnd_120mm_HE_shells_Tracer_Yellow: 30Rnd_120mm_HE_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1410;
	};
	class 30Rnd_120mm_APFSDS_shells: 30Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_120MMAPFSDS";
		ammo="Sh_120mm_APFSDS";
		initSpeed=1680;
		muzzleImpulseFactor[]={0.5,3};
		displayNameShort="120mm AP";
	};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_120MMAPFSDST";
		displayNameMFDFormat="APDS";
		ammo="Sh_120mm_APFSDS_Tracer_Red";
		tracersEvery=1;
		displayNameShort="120mm AP-T";
	};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_120MMAPFSDST";
		ammo="Sh_120mm_APFSDS_Tracer_Green";
		tracersEvery=1;
		displayNameShort="120mm AP-T";
	};
	class 30Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_120MMAPFSDST";
		displayNameMFDFormat="APDS";
		ammo="Sh_120mm_APFSDS_Tracer_Yellow";
		tracersEvery=1;
		displayNameShort="120mm AP-T";
	};
	class 32Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=32;
		initSpeed=1670;
	};
	class 32Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=32;
		initSpeed=1670;
	};
	class 32Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=32;
		initSpeed=1670;
	};
	class 32Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=32;
		initSpeed=1670;
	};
	class 28Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=28;
		initSpeed=1750;
	};
	class 28Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=28;
		initSpeed=1750;
	};
	class 28Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=28;
		initSpeed=1750;
	};
	class 28Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=28;
		initSpeed=1750;
	};
	class 24Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1670;
	};
	class 24Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1670;
	};
	class 24Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1670;
	};
	class 24Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1670;
	};
	class 20Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=20;
		initSpeed=1750;
	};
	class 20Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=20;
		initSpeed=1750;
	};
	class 20Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=20;
		initSpeed=1750;
	};
	class 20Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=20;
		initSpeed=1750;
	};
	class 12Rnd_120mm_APFSDS_shells: 30Rnd_120mm_APFSDS_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1670;
	};
	class 12Rnd_120mm_APFSDS_shells_Tracer_Red: 30Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1670;
	};
	class 12Rnd_120mm_APFSDS_shells_Tracer_Green: 30Rnd_120mm_APFSDS_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1670;
	};
	class 12Rnd_120mm_APFSDS_shells_Tracer_Yellow: 30Rnd_120mm_APFSDS_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1670;
	};
	class 20Rnd_120mm_HEAT_MP: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_120mm_HEAT_MP0";
		displayNameShort="$STR_A3_cfgmagazines_heat_mp_t0";
		ammo="Sh_120mm_HEAT_MP";
		initSpeed=1330;
		count=20;
		maxLeadSpeed=25;
		tracersEvery=0;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.5,3};
	};
	class 20Rnd_120mm_HEAT_MP_T_Red: 20Rnd_120mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_120mm_HEAT_MP0";
		displayNameShort="$STR_A3_cfgmagazines_heat_mp_t0";
		ammo="Sh_120mm_HEAT_MP_T_Red";
		tracersEvery=1;
		displayNameMFDFormat="HEAT";
	};
	class 20Rnd_120mm_HEAT_MP_T_Green: 20Rnd_120mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_120mm_HEAT_MP0";
		displayNameShort="$STR_A3_cfgmagazines_heat_mp_t0";
		ammo="Sh_120mm_HEAT_MP_T_Green";
		tracersEvery=1;
	};
	class 20Rnd_120mm_HEAT_MP_T_Yellow: 20Rnd_120mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_120mm_HEAT_MP0";
		displayNameShort="$STR_A3_cfgmagazines_heat_mp_t0";
		ammo="Sh_120mm_HEAT_MP_T_Yellow";
		tracersEvery=1;
		displayNameMFDFormat="HEAT";
	};
	class 12Rnd_120mm_HEAT_MP: 20Rnd_120mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1330;
	};
	class 12Rnd_120mm_HEAT_MP_T_Red: 20Rnd_120mm_HEAT_MP_T_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1330;
	};
	class 12Rnd_120mm_HEAT_MP_T_Green: 20Rnd_120mm_HEAT_MP_T_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1330;
	};
	class 12Rnd_120mm_HEAT_MP_T_Yellow: 20Rnd_120mm_HEAT_MP_T_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
		initSpeed=1330;
	};
	class 8Rnd_120mm_HEAT_MP: 20Rnd_120mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 8Rnd_120mm_HEAT_MP_T_Red: 20Rnd_120mm_HEAT_MP_T_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 8Rnd_120mm_HEAT_MP_T_Green: 20Rnd_120mm_HEAT_MP_T_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 8Rnd_120mm_HEAT_MP_T_Yellow: 20Rnd_120mm_HEAT_MP_T_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 12Rnd_125mm_HE: 16Rnd_120mm_HE_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HE0";
		ammo="Sh_125mm_HE";
		count=12;
		initSpeed=850;
		muzzleImpulseFactor[]={1,8};
		displayNameShort="125mm HE";
	};
	class 12Rnd_125mm_HE_T_Red: 16Rnd_120mm_HE_shells_Tracer_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HE_T0";
		ammo="Sh_125mm_HE_T_Red";
		count=12;
		initSpeed=850;
		muzzleImpulseFactor[]={1,8};
		displayNameShort="125mm HE-T";
	};
	class 12Rnd_125mm_HE_T_Green: 16Rnd_120mm_HE_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HE_T0";
		ammo="Sh_125mm_HE_T_Green";
		count=12;
		initSpeed=850;
		displayNameMFDFormat="О";
		muzzleImpulseFactor[]={1,8};
		displayNameShort="125mm HE-T";
	};
	class 12Rnd_125mm_HE_T_Yellow: 16Rnd_120mm_HE_shells_Tracer_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HE_T0";
		ammo="Sh_125mm_HE_T_Yellow";
		count=12;
		initSpeed=850;
		displayNameShort="125mm HE-T";
	};
	class 8Rnd_125mm_HE: 12Rnd_125mm_HE
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 8Rnd_125mm_HE_T_Red: 12Rnd_125mm_HE_T_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 8Rnd_125mm_HE_T_Green: 12Rnd_125mm_HE_T_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 8Rnd_125mm_HE_T_Yellow: 12Rnd_125mm_HE_T_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
		initSpeed=1330;
	};
	class 20Rnd_125mm_APFSDS: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_125mm_APFSDS0";
		displayNameShort="$STR_A3_cfgmagazines_apfsd_t0";
		ammo="Sh_125mm_APFSDS";
		initSpeed=1700;
		count=20;
		maxLeadSpeed=25;
		tracersEvery=0;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.5,4};
	};
	class 20Rnd_125mm_APFSDS_T_Red: 20Rnd_125mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_125mm_APFSDS0";
		ammo="Sh_125mm_APFSDS_T_Red";
		count=20;
		tracersEvery=1;
	};
	class 20Rnd_125mm_APFSDS_T_Green: 20Rnd_125mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_125mm_APFSDS0";
		displayNameMFDFormat="БР";
		ammo="Sh_125mm_APFSDS_T_Green";
		count=20;
		tracersEvery=1;
	};
	class 20Rnd_125mm_APFSDS_T_Yellow: 20Rnd_125mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_20Rnd_125mm_APFSDS0";
		ammo="Sh_125mm_APFSDS_T_Yellow";
		count=20;
		tracersEvery=1;
	};
	class 24Rnd_125mm_APFSDS: 20Rnd_125mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1700;
		displayNameShort="125mm AP";
	};
	class 24Rnd_125mm_APFSDS_T_Red: 20Rnd_125mm_APFSDS_T_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1700;
		displayNameShort="125mm AP-T";
	};
	class 24Rnd_125mm_APFSDS_T_Green: 20Rnd_125mm_APFSDS_T_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1700;
		displayNameShort="125mm AP-T";
	};
	class 24Rnd_125mm_APFSDS_T_Yellow: 20Rnd_125mm_APFSDS_T_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=24;
		initSpeed=1700;
		displayNameShort="125mm AP-T";
	};
	class 16Rnd_125mm_APFSDS: 20Rnd_125mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1700;
	};
	class 16Rnd_125mm_APFSDS_T_Red: 20Rnd_125mm_APFSDS_T_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1700;
	};
	class 16Rnd_125mm_APFSDS_T_Green: 20Rnd_125mm_APFSDS_T_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1700;
	};
	class 16Rnd_125mm_APFSDS_T_Yellow: 20Rnd_125mm_APFSDS_T_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		count=16;
		initSpeed=1700;
	};
	class 12Rnd_125mm_HEAT: 12Rnd_125mm_HE
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HEAT0";
		ammo="Sh_125mm_HEAT";
		initSpeed=915;
		muzzleImpulseFactor[]={0.5,3};
		displayNameShort="125mm MP";
	};
	class 12Rnd_125mm_HEAT_T_Red: 12Rnd_125mm_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HEAT_T0";
		ammo="Sh_125mm_HEAT_T_Red";
		tracersEvery=1;
		displayNameShort="125mm MP-T";
	};
	class 12Rnd_125mm_HEAT_T_Green: 12Rnd_125mm_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HEAT_T0";
		ammo="Sh_125mm_HEAT_T_Green";
		tracersEvery=1;
		displayNameMFDFormat="К";
		displayNameShort="125mm MP-T";
	};
	class 12Rnd_125mm_HEAT_T_Yellow: 12Rnd_125mm_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_12Rnd_125mm_HEAT_T0";
		ammo="Sh_125mm_HEAT_T_Yellow";
		tracersEvery=1;
		displayNameShort="125mm MP-T";
	};
	class 40Rnd_105mm_APFSDS: 24Rnd_125mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_40Rnd_105mm_APFSDS0";
		ammo="Sh_105mm_APFSDS";
		initSpeed=1505;
		count=40;
		muzzleImpulseFactor[]={0.5,3};
		displayNameShort="105mm AP";
	};
	class 40Rnd_105mm_APFSDS_T_Red: 40Rnd_105mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_40Rnd_105mm_APFSDS_T0";
		displayNameMFDFormat="APFSDS-T";
		ammo="Sh_105mm_APFSDS_T_Red";
		tracersEvery=1;
		displayNameShort="105mm AP-T";
	};
	class 40Rnd_105mm_APFSDS_T_Green: 40Rnd_105mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_40Rnd_105mm_APFSDS_T0";
		ammo="Sh_105mm_APFSDS_T_Green";
		tracersEvery=1;
		displayNameShort="105mm AP-T";
	};
	class 40Rnd_105mm_APFSDS_T_Yellow: 40Rnd_105mm_APFSDS
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_40Rnd_105mm_APFSDS_T0";
		ammo="Sh_105mm_APFSDS_T_Yellow";
		tracersEvery=1;
		displayNameShort="105mm AP-T";
	};
	class 20Rnd_105mm_HEAT_MP: 12Rnd_125mm_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_20RND_105MM_HEAT0";
		ammo="Sh_105mm_HEAT_MP";
		initSpeed=1330;
		count=20;
		muzzleImpulseFactor[]={0.5,3};
		displayNameShort="105mm MP";
	};
	class 20Rnd_105mm_HEAT_MP_T_Red: 20Rnd_105mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_12RND_105MM_HEAT_T0";
		displayNameMFDFormat="HEAT-MP-T";
		ammo="Sh_105mm_HEAT_MP_T_Red";
		tracersEvery=1;
		displayNameShort="105mm MP-T";
	};
	class 20Rnd_105mm_HEAT_MP_T_Green: 20Rnd_105mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_12RND_105MM_HEAT_T0";
		ammo="Sh_105mm_HEAT_MP_T_Green";
		tracersEvery=1;
		displayNameShort="105mm MP-T";
	};
	class 20Rnd_105mm_HEAT_MP_T_Yellow: 20Rnd_105mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CFGMAGAZINES_12RND_105MM_HEAT_T0";
		ammo="Sh_105mm_HEAT_MP_T_Yellow";
		tracersEvery=1;
		displayNameShort="105mm MP-T";
	};
	class 680Rnd_35mm_AA_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_680Rnd_35mm_AA_shells0";
		ammo="B_35mm_AA";
		count=680;
		initSpeed=1440;
		maxLeadSpeed=416.66699;
		tracersEvery=3;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,4};
		displayNameShort="35mm HEI";
	};
	class 680Rnd_35mm_AA_shells_Tracer_Red: 680Rnd_35mm_AA_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_35mm_AA_Tracer_Red";
		displayNameMFDFormat="AA SHELLS";
		displayNameShort="35mm HEI-T";
	};
	class 680Rnd_35mm_AA_shells_Tracer_Green: 680Rnd_35mm_AA_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_35mm_AA_Tracer_Green";
		displayNameMFDFormat="ОФЗТ";
		displayNameShort="35mm HEI-T";
	};
	class 680Rnd_35mm_AA_shells_Tracer_Yellow: 680Rnd_35mm_AA_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_35mm_AA_Tracer_Yellow";
		displayNameShort="35mm HEI-T";
	};
	class 6Rnd_AAT_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_6Rnd_AAT_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_6Rnd_AAT_missiles_dns";
		count=6;
		ammo="M_Air_AT";
		initSpeed=0;
		maxLeadSpeed=55.555599;
		nameSound="missiles";
	};
	class 4Rnd_AAT_missiles: 6Rnd_AAT_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		count=4;
	};
	class 1Rnd_GAA_missiles: 4Rnd_GAA_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="M_Titan_AA_static";
		count=1;
	};
	class 1Rnd_GAT_missiles: 5Rnd_GAT_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		count=1;
		ammo="ACE_Javelin_FGM148_static";
	};
	class 2Rnd_GBU12_LGB: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_cfgmagazines_gbu120";
		descriptionShort="$STR_A3_cfgMagazine_GBU12_tooltip";
		displayNameShort="$STR_A3_cfgmagazines_gbu12_dns";
		ammo="Bo_GBU12_LGB";
		initSpeed=0;
		maxLeadSpeed=25;
		count=2;
		nameSound="cannon";
	};
	class 2Rnd_GBU12_LGB_MI10: 2Rnd_GBU12_LGB
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Bo_GBU12_LGB_MI10";
	};
	class 2Rnd_Mk82: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		ammo="Bo_Mk82";
		displayName="$STR_A3_cfgmagazines_mk820";
		descriptionShort="$STR_A3_cfgMagazine_Mk82_tooltip";
		displayNameShort="$STR_A3_cfgmagazines_mk82_dns";
		initSpeed=0;
		maxLeadSpeed=25;
		count=2;
		nameSound="missiles";
	};
	class 2Rnd_Mk82_MI08: 2Rnd_Mk82
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Bo_Mk82_MI08";
	};
	class 11Rnd_45ACP_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		picture="\A3\weapons_f\data\UI\M_16Rnd_9x21_CA.paa";
		ammo="B_45ACP_Ball";
		descriptionShort="$STR_A3_CfgMagazines_11Rnd_45ACP_Mag1";
		mass=7;
		displayname="$STR_ace_smallarms_15Rnd_45_Name";
		count=15;
		initSpeed=254;
	};
	class 6Rnd_45ACP_Cylinder: 11Rnd_45ACP_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\A3\Weapons_F_EPA\Data\ui\M_6Rnd_revolver_CA.paa";
		displayName="$STR_A3_CfgMagazines_6Rnd_45ACP_Cylinder0";
		descriptionShort="$STR_A3_CfgMagazines_6Rnd_45ACP_Cylinder1";
		count=6;
		mass=4;
		initSpeed=254;
	};
	class 10Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\A3\Weapons_F_EPA\Data\ui\M_10Rnd_762x51_CA.paa";
		displayName="$STR_A3_CfgMagazines_10Rnd_762x51_Mag0";
		count=10;
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_762x51_Mag1";
		mass=8;
		initSpeed=833;
	};
	class 10Rnd_762x54_Mag: 10Rnd_762x51_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x54_Ball";
		initSpeed=836;
	};
	class 5Rnd_127x108_APDS_Mag: 5Rnd_127x108_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\A3\weapons_f\data\UI\M_5rnd_127x108_CA.paa";
		displayName="$STR_A3_CfgMagazines_5Rnd_127x108_APDS_Mag0";
		displayNameShort="$STR_A3_CfgMagazines_250Rnd_30mm_APDS_shells_dns";
		ammo="B_127x108_APDS";
		descriptionShort="$STR_A3_CfgMagazines_5Rnd_127x108_APDS_Mag1";
		initSpeed=820;
	};
	class B_IR_Grenade: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		value=1;
		displayName="$STR_A3_CfgMagazines_B_IR_Grenade0";
		picture="\A3\Weapons_F_EPB\Ammo\Data\UI\gear_B_IRstrobe_CA.paa";
		ammo="B_IRStrobe";
		count=1;
		initSpeed=18;
		nameSound="handgrenade";
		maxLeadSpeed=6.9444399;
		descriptionShort="$STR_A3_CfgMagazines_B_IR_Grenade1";
		displayNameShort="$STR_A3_CFGMAGAZINES_IR_GRENADE_DNS";
		ACE_Attachable="B_IRStrobe";
		model="\z\ace\addons\attach\data\ace_IRStrobe.p3d";
	};
	class O_IR_Grenade: B_IR_Grenade
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="O_IRStrobe";
		displayName="$STR_A3_CfgMagazines_O_IR_Grenade0";
		picture="\A3\Weapons_F_EPB\Ammo\Data\UI\gear_O_IRstrobe_CA.paa";
		descriptionShort="$STR_A3_CfgMagazines_O_IR_Grenade1";
		ACE_Attachable="O_IRStrobe";
		model="\z\ace\addons\attach\data\ace_IRStrobe.p3d";
	};
	class I_IR_Grenade: B_IR_Grenade
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="I_IRStrobe";
		displayName="$STR_A3_CfgMagazines_I_IR_Grenade0";
		picture="\A3\Weapons_F_EPB\Ammo\Data\UI\gear_I_IRstrobe_CA.paa";
		descriptionShort="$STR_A3_CfgMagazines_I_IR_Grenade1";
		ACE_Attachable="I_IRStrobe";
		model="\z\ace\addons\attach\data\ace_IRStrobe.p3d";
	};
	class 200Rnd_762x51_Belt: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		count=200;
		ammo="B_762x51_Ball";
		initSpeed=860;
		maxLeadSpeed=36.111099;
		tracersEvery=5;
		lastRoundsTracer=4;
		nameSound="mgun";
		displayName="$STR_A3_CfgMagazines_2000Rnd_762x45_Belt0";
		descriptionShort="$STR_A3_CfgMagazines_2000Rnd_762x45_Belt1";
		displayNameMFDFormat="COAX";
		displayNameShort="7.62mm";
	};
	class 200Rnd_762x51_Belt_Red: 200Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Red";
	};
	class 200Rnd_762x51_Belt_T_Red: 200Rnd_762x51_Belt_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayNameShort="7.62mm";
	};
	class 200Rnd_762x51_Belt_Green: 200Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Green";
		displayNameMFDFormat="П";
	};
	class 200Rnd_762x51_Belt_T_Green: 200Rnd_762x51_Belt_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayNameShort="7.62mm";
	};
	class 200Rnd_762x51_Belt_Yellow: 200Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Yellow";
	};
	class 200Rnd_762x51_Belt_T_Yellow: 200Rnd_762x51_Belt_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayNameShort="7.62mm";
	};
	class 1000Rnd_762x51_Belt: 200Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=1000;
	};
	class 1000Rnd_762x51_Belt_Red: 1000Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Red";
	};
	class 1000Rnd_762x51_Belt_T_Red: 1000Rnd_762x51_Belt_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayNameShort="7.62mm";
	};
	class 1000Rnd_762x51_Belt_Green: 1000Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Green";
		displayNameMFDFormat="П";
	};
	class 1000Rnd_762x51_Belt_T_Green: 1000Rnd_762x51_Belt_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayNameShort="7.62mm";
	};
	class 1000Rnd_762x51_Belt_Yellow: 1000Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Yellow";
		displayNameMFDFormat="LMG";
	};
	class 1000Rnd_762x51_Belt_T_Yellow: 1000Rnd_762x51_Belt_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayNameShort="7.62mm";
	};
	class 2000Rnd_762x51_Belt: 200Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=2000;
	};
	class 2000Rnd_762x51_Belt_Red: 2000Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Red";
	};
	class 2000Rnd_762x51_Belt_T_Red: 2000Rnd_762x51_Belt_Red
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayNameShort="7.62mm";
	};
	class 2000Rnd_762x51_Belt_Green: 2000Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Green";
		displayNameMFDFormat="П";
	};
	class 2000Rnd_762x51_Belt_T_Green: 2000Rnd_762x51_Belt_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayNameShort="7.62mm";
	};
	class 2000Rnd_762x51_Belt_Yellow: 2000Rnd_762x51_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_762x51_Tracer_Yellow";
		displayNameMFDFormat="LMG";
	};
	class 2000Rnd_762x51_Belt_T_Yellow: 2000Rnd_762x51_Belt_Yellow
	{
		author="$STR_A3_Bohemia_Interactive";
		tracersEvery=1;
		displayNameShort="7.62mm";
	};
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		initSpeed=1120;
		maxLeadSpeed=83.333298;
		nameSound="cannon";
		tracersEvery=1;
		muzzleImpulseFactor[]={-0.1,1};
		ammo="ACE_Gatling_30mm_Sub_CM51";
		displayName="$STR_ace_aircraft_GatlingDescriptionCM51";
		displayNameShort="$STR_ace_aircraft_GatlingDescriptionShortCM51";
		count=1170;
	};
	class 2Rnd_Missile_AA_04_F: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayNameShort="$STR_A3_CFGMAGAZINES_4RND_AAA_MISSILES_DNS";
		descriptionShort="$STR_A3_cfgMagazine_Falchion22_tooltip";
		ammo="Missile_AA_04_F";
		count=2;
		initSpeed=0;
		maxLeadSpeed=694.44397;
		nameSound="missiles";
		displayName="$STR_ace_rearm_Mag_2Rnd_Missile_AA_04_F";
	};
	class 6Rnd_Missile_AGM_02_F: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayNameShort="$STR_A3_CFGMAGAZINES_38RND_80MM_ROCKETS_DNS";
		descriptionShort="$STR_A3_cfgMagazine_Macer_tooltip";
		ammo="Missile_AGM_02_F";
		count=6;
		initSpeed=0;
		maxLeadSpeed=55.555599;
		nameSound="missiles";
		displayName="$STR_ace_rearm_Mag_6Rnd_Missile_AGM_02_F";
	};
	class 7Rnd_Rocket_04_HE_F: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		descriptionShort="$STR_A3_cfgMagazine_ShriekerHE_tooltip";
		ammo="Rocket_04_HE_F";
		count=7;
		initSpeed=44;
		maxLeadSpeed=41.666698;
		nameSound="rockets";
		displayNameShort="70mm HE";
		displayName="$STR_ace_rearm_Mag_7Rnd_Rocket_04_HE_F";
	};
	class 7Rnd_Rocket_04_AP_F: 7Rnd_Rocket_04_HE_F
	{
		author="$STR_A3_Bohemia_Interactive";
		descriptionShort="$STR_A3_cfgMagazine_ShriekerAP_tooltip";
		ammo="Rocket_04_AP_F";
		displayNameShort="70mm AP";
		displayName="$STR_ace_rearm_Mag_7Rnd_Rocket_04_AP_F";
	};
	class 4Rnd_Bomb_04_F: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayNameShort="$STR_A3_CFGVEHICLES_BOMB0";
		descriptionShort="$STR_A3_cfgMagazine_GBU12_tooltip";
		ammo="Bomb_04_F";
		count=4;
		initSpeed=0;
		maxLeadSpeed=25;
		nameSound="cannon";
		displayName="$STR_ace_rearm_Mag_4Rnd_Bomb_04_F";
	};
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="Cannon_30mm_HE_Plane_CAS_02_F";
		count=500;
		muzzleImpulseFactor[]={-0.025,0.25};
		displayNameShort="30mm HEI-T";
		displayName="$STR_ace_rearm_Mag_500Rnd_Cannon_30mm_Plane_CAS_02_F";
	};
	class 2Rnd_Missile_AA_03_F: 2Rnd_Missile_AA_04_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CFGMAGAZINES_4RND_AAA_MISSILES_DNS";
		descriptionShort="$STR_A3_cfgMagazine_Sahr3_tooltip";
		ammo="Missile_AA_03_F";
		count=2;
		displayName="$STR_ace_rearm_Mag_2Rnd_Missile_AA_03_F";
	};
	class 4Rnd_Missile_AGM_01_F: 6Rnd_Missile_AGM_02_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CFGMAGAZINES_38RND_80MM_ROCKETS_DNS";
		descriptionShort="$STR_A3_cfgMagazine_Sharur_tooltip";
		ammo="Missile_AGM_01_F";
		count=4;
		displayName="$STR_ace_rearm_Mag_4Rnd_Missile_AGM_01_F";
	};
	class 20Rnd_Rocket_03_HE_F: 7Rnd_Rocket_04_HE_F
	{
		author="$STR_A3_Bohemia_Interactive";
		descriptionShort="$STR_A3_cfgMagazine_TratnyrHE_tooltip";
		ammo="Rocket_03_HE_F";
		count=20;
		displayNameShort="80mm HE";
		displayName="$STR_ace_rearm_Mag_20Rnd_Rocket_03_HE_F";
	};
	class 20Rnd_Rocket_03_AP_F: 7Rnd_Rocket_04_AP_F
	{
		author="$STR_A3_Bohemia_Interactive";
		descriptionShort="$STR_A3_cfgMagazine_TratnyrAP_tooltip";
		ammo="Rocket_03_AP_F";
		count=20;
		displayNameShort="80mm AP";
		displayName="$STR_ace_rearm_Mag_20Rnd_Rocket_03_AP_F";
	};
	class 2Rnd_Bomb_03_F: 4Rnd_Bomb_04_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayNameShort="$STR_A3_CFGVEHICLES_BOMB0";
		descriptionShort="$STR_A3_cfgMagazine_LOM250_tooltip";
		ammo="Bomb_03_F";
		count=2;
		displayName="$STR_ace_rearm_Mag_2Rnd_Bomb_03_F";
	};
	class PylonRack_1Rnd_Missile_AA_04_F: 2Rnd_Missile_AA_04_F
	{
		count=1;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		hardpoints[]=
		{
			"B_MISSILE_PYLON"
		};
		pylonWeapon="Missile_AA_04_Plane_CAS_01_F";
		mass=125;
		displayName="AIM-9 Sidewinder";
	};
	class PylonMissile_1Rnd_Missile_AA_04_F: PylonRack_1Rnd_Missile_AA_04_F
	{
		hardpoints[]=
		{
			"B_AIM9"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass=85;
	};
	class PylonRack_1Rnd_AAA_missiles: 4Rnd_AAA_missiles
	{
		count=1;
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"B_ASRRAM_EJECTOR"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		pylonWeapon="missiles_ASRAAM";
		mass=128;
		displayName="AIM-132 ASRAAM";
	};
	class PylonMissile_1Rnd_AAA_missiles: PylonRack_1Rnd_AAA_missiles
	{
		hardpoints[]=
		{
			"B_ASRAAM"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass=88;
		class mfdElements
		{
			class Heli_Attack_01
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{-0.0049999999,-0.029999999},
										1
									},
									
									{
										{0.064999998,-0.029999999},
										1
									},
									
									{
										{0.064999998,0.15000001},
										1
									},
									
									{
										{-0.0049999999,0.15000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.055333301,0.00176638},
									1
								},
								
								{
									{0.031333301,0.0174929},
									1
								},
								
								{
									{0.0060000098,0.00176638},
									1
								},
								{},
								
								{
									{0.055333301,0.135442},
									1
								},
								
								{
									{0.055333301,0.00176638},
									1
								},
								
								{
									{0.055333301,-0.0060968702},
									1
								},
								
								{
									{0.052666701,-0.0126496},
									1
								},
								
								{
									{0.050000001,-0.017891699},
									1
								},
								
								{
									{0.0446667,-0.020512801},
									1
								},
								
								{
									{0.039333299,-0.0231339},
									1
								},
								
								{
									{0.035333298,-0.0244445},
									1
								},
								
								{
									{0.031333301,-0.025754999},
									1
								},
								
								{
									{0.029999999,-0.025754999},
									1
								},
								
								{
									{0.026000001,-0.0244445},
									1
								},
								
								{
									{0.022,-0.0231339},
									1
								},
								
								{
									{0.016666699,-0.020512801},
									1
								},
								
								{
									{0.0126667,-0.017891699},
									1
								},
								
								{
									{0.0086666597,-0.0126496},
									1
								},
								
								{
									{0.0073333401,-0.0060968702},
									1
								},
								
								{
									{0.0060000098,0.00176638},
									1
								},
								
								{
									{0.0060000098,0.135442},
									1
								},
								
								{
									{0.055333301,0.135442},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AA";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.029999999,0.050000001},
								1
							};
							right[]=
							{
								{0.059999999,0.050000001},
								1
							};
							down[]=
							{
								{0.029999999,0.075000003},
								1
							};
						};
						class Ammo
						{
							type="text";
							source="PylonAmmo";
							sourceIndex=1;
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								{0.029999999,0.090000004},
								1
							};
							right[]=
							{
								{0.07,0.090000004},
								1
							};
							down[]=
							{
								{0.029999999,0.125},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						color[]={0.99000001,0.94,0.58999997};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Ammo: Ammo
						{
						};
					};
					class Empty: Default
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Ammo: Ammo
						{
							source="static";
							text="-";
						};
					};
				};
			};
		};
	};
	class PylonRack_1Rnd_GAA_missiles: 4Rnd_GAA_missiles
	{
		count=1;
		hardpoints[]=
		{
			"B_ZEPHYR"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		pylonWeapon="missiles_Zephyr";
		mass=192;
		displayName="AIM-120A AMRAAM";
	};
	class PylonMissile_1Rnd_GAA_missiles: PylonRack_1Rnd_GAA_missiles
	{
		hardpoints[]=
		{
			"B_AMRAAM"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass=152;
	};
	class PylonRack_1Rnd_Missile_AGM_02_F: 6Rnd_Missile_AGM_02_F
	{
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
		count=1;
		hardpoints[]=
		{
			"B_MISSILE_PYLON"
		};
		pylonWeapon="Missile_AGM_02_Plane_CAS_01_F";
		mass=361;
		displayName="AGM-65 Maverick G";
	};
	class PylonRack_3Rnd_Missile_AGM_02_F: PylonRack_1Rnd_Missile_AGM_02_F
	{
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.p3d";
		count=3;
		mirrorMissilesIndexes[]={2,1,3};
		mass=1020;
		displayName="AGM-65 Maverick G 3x";
	};
	class PylonRack_1Rnd_LG_scalpel: 2Rnd_LG_scalpel
	{
		count=1;
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"SCALPEL_1RND_EJECTOR"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
		pylonWeapon="missiles_SCALPEL";
		mass=110;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.11},
										1
									},
									
									{
										{0.17,0.11},
										1
									},
									
									{
										{0.17,0.33000001},
										1
									},
									
									{
										{0.1,0.33000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_scalpel_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.14,0.27000001},
								1
							};
							right[]=
							{
								{0.18000001,0.27000001},
								1
							};
							down[]=
							{
								{0.14,0.301},
								1
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
		displayName="9K121 Vikhr";
	};
	class PylonMissile_1Rnd_LG_scalpel: PylonRack_1Rnd_LG_scalpel
	{
		hardpoints[]=
		{
			"SCALPEL_1RND",
			"UNI_SCALPEL"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass=49;
		class mfdElements
		{
			class Heli_Attack_01
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{-0.0049999999,-0.029999999},
										1
									},
									
									{
										{0.064999998,-0.029999999},
										1
									},
									
									{
										{0.064999998,0.15000001},
										1
									},
									
									{
										{-0.0049999999,0.15000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.055333301,0.00176638},
									1
								},
								
								{
									{0.031333301,0.0174929},
									1
								},
								
								{
									{0.0060000098,0.00176638},
									1
								},
								{},
								
								{
									{0.055333301,0.135442},
									1
								},
								
								{
									{0.055333301,0.00176638},
									1
								},
								
								{
									{0.055333301,-0.0060968702},
									1
								},
								
								{
									{0.052666701,-0.0126496},
									1
								},
								
								{
									{0.050000001,-0.017891699},
									1
								},
								
								{
									{0.0446667,-0.020512801},
									1
								},
								
								{
									{0.039333299,-0.0231339},
									1
								},
								
								{
									{0.035333298,-0.0244445},
									1
								},
								
								{
									{0.031333301,-0.025754999},
									1
								},
								
								{
									{0.029999999,-0.025754999},
									1
								},
								
								{
									{0.026000001,-0.0244445},
									1
								},
								
								{
									{0.022,-0.0231339},
									1
								},
								
								{
									{0.016666699,-0.020512801},
									1
								},
								
								{
									{0.0126667,-0.017891699},
									1
								},
								
								{
									{0.0086666597,-0.0126496},
									1
								},
								
								{
									{0.0073333401,-0.0060968702},
									1
								},
								
								{
									{0.0060000098,0.00176638},
									1
								},
								
								{
									{0.0060000098,0.135442},
									1
								},
								
								{
									{0.055333301,0.135442},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.029999999,0.050000001},
								1
							};
							right[]=
							{
								{0.059999999,0.050000001},
								1
							};
							down[]=
							{
								{0.029999999,0.075000003},
								1
							};
						};
						class Ammo
						{
							type="text";
							source="PylonAmmo";
							sourceIndex=1;
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								{0.029999999,0.090000004},
								1
							};
							right[]=
							{
								{0.07,0.090000004},
								1
							};
							down[]=
							{
								{0.029999999,0.125},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						color[]={0.99000001,0.94,0.58999997};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Ammo: Ammo
						{
						};
					};
					class Empty: Default
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Ammo: Ammo
						{
							source="static";
							text="-";
						};
					};
				};
			};
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.11},
										1
									},
									
									{
										{0.17,0.11},
										1
									},
									
									{
										{0.17,0.33000001},
										1
									},
									
									{
										{0.1,0.33000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_scalpel_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.14,0.27000001},
								1
							};
							right[]=
							{
								{0.18000001,0.27000001},
								1
							};
							down[]=
							{
								{0.14,0.301},
								1
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"R1",
									{0,-0.01125},
									1
								},
								
								{
									"R1",
									{0.0044999998,-0.0097425003},
									1
								},
								
								{
									"R1",
									{0.0077940002,-0.0056250002},
									1
								},
								
								{
									"R1",
									{0.0089999996,0},
									1
								},
								
								{
									"R1",
									{0.0077940002,0.0056250002},
									1
								},
								
								{
									"R1",
									{0.0044999998,0.0097425003},
									1
								},
								
								{
									"R1",
									{0,0.01125},
									1
								},
								
								{
									"R1",
									{-0.0044999998,0.0097425003},
									1
								},
								
								{
									"R1",
									{-0.0077940002,0.0056250002},
									1
								},
								
								{
									"R1",
									{-0.0089999996,0},
									1
								},
								
								{
									"R1",
									{-0.0077940002,-0.0056250002},
									1
								},
								
								{
									"R1",
									{-0.0044999998,-0.0097425003},
									1
								},
								
								{
									"R1",
									{0,-0.01125},
									1
								},
								{},
								
								{
									"R1",
									{0.00636396,-0.0079549504},
									1
								},
								
								{
									"R1",
									{0.0106066,-0.0132583},
									1
								},
								{},
								
								{
									"R1",
									{0.00636396,0.0079549504},
									1
								},
								
								{
									"R1",
									{0.0106066,0.0132583},
									1
								},
								{},
								
								{
									"R1",
									{-0.00636396,0.0079549504},
									1
								},
								
								{
									"R1",
									{-0.0106066,0.0132583},
									1
								},
								{},
								
								{
									"R1",
									{-0.00636396,-0.0079549504},
									1
								},
								
								{
									"R1",
									{-0.0106066,-0.0132582},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R1",
										{0.0089999996,4.9175303e-010},
										1
									},
									
									{
										"R1",
										{0.00636396,0.0079549504},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R1",
										{-7.8680501e-010,0.01125},
										1
									},
									
									{
										"R1",
										{-0.00636396,0.0079549504},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R1",
										{-0.0089999996,-1.3415501e-010},
										1
									},
									
									{
										"R1",
										{-0.00636396,-0.0079549504},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R1",
										{1.57361e-009,-0.01125},
										1
									},
									
									{
										"R1",
										{0.00636396,-0.0079549504},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class PylonRack_3Rnd_LG_scalpel: PylonRack_1Rnd_LG_scalpel
	{
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"UNI_SCALPEL"
		};
		count=3;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_LG_scalpel_F.p3d";
		mass=300;
		mirrorMissilesIndexes[]={2,1,3};
		class mfdElements: mfdElements
		{
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={-0,0.029999999};
					};
					class R2: Center
					{
						pos[]={-0.0125,-0.0099999998};
					};
					class R3: Center
					{
						pos[]={0.0125,-0.0099999998};
					};
					class R4: Center
					{
						pos[]={0.0125,-0.0099999998};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=3";
							class Shape
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"R1",
										{0,-0.01125},
										1
									},
									
									{
										"R1",
										{0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R1",
										{0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R1",
										{0.0089999996,0},
										1
									},
									
									{
										"R1",
										{0.0077940002,0.0056250002},
										1
									},
									
									{
										"R1",
										{0.0044999998,0.0097425003},
										1
									},
									
									{
										"R1",
										{0,0.01125},
										1
									},
									
									{
										"R1",
										{-0.0044999998,0.0097425003},
										1
									},
									
									{
										"R1",
										{-0.0077940002,0.0056250002},
										1
									},
									
									{
										"R1",
										{-0.0089999996,0},
										1
									},
									
									{
										"R1",
										{-0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R1",
										{-0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R1",
										{0,-0.01125},
										1
									},
									{},
									
									{
										"R1",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R1",
										{0.0106066,-0.0132583},
										1
									},
									{},
									
									{
										"R1",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R1",
										{0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R1",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R1",
										{-0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R1",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R1",
										{-0.0106066,-0.0132582},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"R2",
										{0,-0.01125},
										1
									},
									
									{
										"R2",
										{0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R2",
										{0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R2",
										{0.0089999996,0},
										1
									},
									
									{
										"R2",
										{0.0077940002,0.0056250002},
										1
									},
									
									{
										"R2",
										{0.0044999998,0.0097425003},
										1
									},
									
									{
										"R2",
										{0,0.01125},
										1
									},
									
									{
										"R2",
										{-0.0044999998,0.0097425003},
										1
									},
									
									{
										"R2",
										{-0.0077940002,0.0056250002},
										1
									},
									
									{
										"R2",
										{-0.0089999996,0},
										1
									},
									
									{
										"R2",
										{-0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R2",
										{-0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R2",
										{0,-0.01125},
										1
									},
									{},
									
									{
										"R2",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R2",
										{0.0106066,-0.0132583},
										1
									},
									{},
									
									{
										"R2",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R2",
										{0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R2",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R2",
										{-0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R2",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R2",
										{-0.0106066,-0.0132582},
										1
									},
									{}
								};
							};
						};
						class Missile3
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"R3",
										{0,-0.01125},
										1
									},
									
									{
										"R3",
										{0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R3",
										{0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R3",
										{0.0089999996,0},
										1
									},
									
									{
										"R3",
										{0.0077940002,0.0056250002},
										1
									},
									
									{
										"R3",
										{0.0044999998,0.0097425003},
										1
									},
									
									{
										"R3",
										{0,0.01125},
										1
									},
									
									{
										"R3",
										{-0.0044999998,0.0097425003},
										1
									},
									
									{
										"R3",
										{-0.0077940002,0.0056250002},
										1
									},
									
									{
										"R3",
										{-0.0089999996,0},
										1
									},
									
									{
										"R3",
										{-0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R3",
										{-0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R3",
										{0,-0.01125},
										1
									},
									{},
									
									{
										"R3",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R3",
										{0.0106066,-0.0132583},
										1
									},
									{},
									
									{
										"R3",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R3",
										{0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R3",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R3",
										{-0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R3",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R3",
										{-0.0106066,-0.0132582},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class PylonText1: PylonText1
						{
						};
						class Missile1: Missile1
						{
							condition="PylonAmmo>=3";
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{0.00636396,-0.0079549504},
											1
										},
										
										{
											"R1",
											{0.0089999996,4.9175303e-010},
											1
										},
										
										{
											"R1",
											{0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{0.00636396,0.0079549504},
											1
										},
										
										{
											"R1",
											{-7.8680501e-010,0.01125},
											1
										},
										
										{
											"R1",
											{-0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{-0.00636396,0.0079549504},
											1
										},
										
										{
											"R1",
											{-0.0089999996,-1.3415501e-010},
											1
										},
										
										{
											"R1",
											{-0.00636396,-0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{-0.00636396,-0.0079549504},
											1
										},
										
										{
											"R1",
											{1.57361e-009,-0.01125},
											1
										},
										
										{
											"R1",
											{0.00636396,-0.0079549504},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							condition="(PylonAmmo>=2)-(PylonAmmo>=3)";
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{0.00636396,-0.0079549504},
											1
										},
										
										{
											"R2",
											{0.0089999996,4.9175303e-010},
											1
										},
										
										{
											"R2",
											{0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{0.00636396,0.0079549504},
											1
										},
										
										{
											"R2",
											{-7.8680501e-010,0.01125},
											1
										},
										
										{
											"R2",
											{-0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{-0.00636396,0.0079549504},
											1
										},
										
										{
											"R2",
											{-0.0089999996,-1.3415501e-010},
											1
										},
										
										{
											"R2",
											{-0.00636396,-0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{-0.00636396,-0.0079549504},
											1
										},
										
										{
											"R2",
											{1.57361e-009,-0.01125},
											1
										},
										
										{
											"R2",
											{0.00636396,-0.0079549504},
											1
										}
									}
								};
							};
						};
						class Missile3: Missile3
						{
							condition="(PylonAmmo>=1)-(PylonAmmo>=2)";
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{0.00636396,-0.0079549504},
											1
										},
										
										{
											"R3",
											{0.0089999996,4.9175303e-010},
											1
										},
										
										{
											"R3",
											{0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{0.00636396,0.0079549504},
											1
										},
										
										{
											"R3",
											{-7.8680501e-010,0.01125},
											1
										},
										
										{
											"R3",
											{-0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{-0.00636396,0.0079549504},
											1
										},
										
										{
											"R3",
											{-0.0089999996,-1.3415501e-010},
											1
										},
										
										{
											"R3",
											{-0.00636396,-0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{-0.00636396,-0.0079549504},
											1
										},
										
										{
											"R3",
											{1.57361e-009,-0.01125},
											1
										},
										
										{
											"R3",
											{0.00636396,-0.0079549504},
											1
										}
									}
								};
							};
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=2";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile3: Missile3
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
		displayName="9K121 Vikhr 3x";
	};
	class PylonRack_4Rnd_LG_scalpel: PylonRack_1Rnd_LG_scalpel
	{
		count=4;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_4x_Missile_LG_scalpel_F.p3d";
		mass=370;
		mirrorMissilesIndexes[]={2,1,4,3};
		hardpoints[]=
		{
			"UNI_SCALPEL",
			"SCALPEL_4RND"
		};
		class mfdElements: mfdElements
		{
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={-0.0125,0.029999999};
					};
					class R2: Center
					{
						pos[]={0.0125,0.029999999};
					};
					class R3: Center
					{
						pos[]={-0.0125,-0.0099999998};
					};
					class R4: Center
					{
						pos[]={0.0125,-0.0099999998};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=4";
							class Shape
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"R1",
										{0,-0.01125},
										1
									},
									
									{
										"R1",
										{0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R1",
										{0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R1",
										{0.0089999996,0},
										1
									},
									
									{
										"R1",
										{0.0077940002,0.0056250002},
										1
									},
									
									{
										"R1",
										{0.0044999998,0.0097425003},
										1
									},
									
									{
										"R1",
										{0,0.01125},
										1
									},
									
									{
										"R1",
										{-0.0044999998,0.0097425003},
										1
									},
									
									{
										"R1",
										{-0.0077940002,0.0056250002},
										1
									},
									
									{
										"R1",
										{-0.0089999996,0},
										1
									},
									
									{
										"R1",
										{-0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R1",
										{-0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R1",
										{0,-0.01125},
										1
									},
									{},
									
									{
										"R1",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R1",
										{0.0106066,-0.0132583},
										1
									},
									{},
									
									{
										"R1",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R1",
										{0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R1",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R1",
										{-0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R1",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R1",
										{-0.0106066,-0.0132582},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=3";
							class Shape
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"R2",
										{0,-0.01125},
										1
									},
									
									{
										"R2",
										{0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R2",
										{0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R2",
										{0.0089999996,0},
										1
									},
									
									{
										"R2",
										{0.0077940002,0.0056250002},
										1
									},
									
									{
										"R2",
										{0.0044999998,0.0097425003},
										1
									},
									
									{
										"R2",
										{0,0.01125},
										1
									},
									
									{
										"R2",
										{-0.0044999998,0.0097425003},
										1
									},
									
									{
										"R2",
										{-0.0077940002,0.0056250002},
										1
									},
									
									{
										"R2",
										{-0.0089999996,0},
										1
									},
									
									{
										"R2",
										{-0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R2",
										{-0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R2",
										{0,-0.01125},
										1
									},
									{},
									
									{
										"R2",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R2",
										{0.0106066,-0.0132583},
										1
									},
									{},
									
									{
										"R2",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R2",
										{0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R2",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R2",
										{-0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R2",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R2",
										{-0.0106066,-0.0132582},
										1
									},
									{}
								};
							};
						};
						class Missile3
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"R3",
										{0,-0.01125},
										1
									},
									
									{
										"R3",
										{0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R3",
										{0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R3",
										{0.0089999996,0},
										1
									},
									
									{
										"R3",
										{0.0077940002,0.0056250002},
										1
									},
									
									{
										"R3",
										{0.0044999998,0.0097425003},
										1
									},
									
									{
										"R3",
										{0,0.01125},
										1
									},
									
									{
										"R3",
										{-0.0044999998,0.0097425003},
										1
									},
									
									{
										"R3",
										{-0.0077940002,0.0056250002},
										1
									},
									
									{
										"R3",
										{-0.0089999996,0},
										1
									},
									
									{
										"R3",
										{-0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R3",
										{-0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R3",
										{0,-0.01125},
										1
									},
									{},
									
									{
										"R3",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R3",
										{0.0106066,-0.0132583},
										1
									},
									{},
									
									{
										"R3",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R3",
										{0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R3",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R3",
										{-0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R3",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R3",
										{-0.0106066,-0.0132582},
										1
									},
									{}
								};
							};
						};
						class Missile4
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"R4",
										{0,-0.01125},
										1
									},
									
									{
										"R4",
										{0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R4",
										{0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R4",
										{0.0089999996,0},
										1
									},
									
									{
										"R4",
										{0.0077940002,0.0056250002},
										1
									},
									
									{
										"R4",
										{0.0044999998,0.0097425003},
										1
									},
									
									{
										"R4",
										{0,0.01125},
										1
									},
									
									{
										"R4",
										{-0.0044999998,0.0097425003},
										1
									},
									
									{
										"R4",
										{-0.0077940002,0.0056250002},
										1
									},
									
									{
										"R4",
										{-0.0089999996,0},
										1
									},
									
									{
										"R4",
										{-0.0077940002,-0.0056250002},
										1
									},
									
									{
										"R4",
										{-0.0044999998,-0.0097425003},
										1
									},
									
									{
										"R4",
										{0,-0.01125},
										1
									},
									{},
									
									{
										"R4",
										{0.00636396,-0.0079549504},
										1
									},
									
									{
										"R4",
										{0.0106066,-0.0132583},
										1
									},
									{},
									
									{
										"R4",
										{0.00636396,0.0079549504},
										1
									},
									
									{
										"R4",
										{0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R4",
										{-0.00636396,0.0079549504},
										1
									},
									
									{
										"R4",
										{-0.0106066,0.0132583},
										1
									},
									{},
									
									{
										"R4",
										{-0.00636396,-0.0079549504},
										1
									},
									
									{
										"R4",
										{-0.0106066,-0.0132582},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class PylonText1: PylonText1
						{
						};
						class Missile1: Missile1
						{
							condition="PylonAmmo>=4";
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{0.00636396,-0.0079549504},
											1
										},
										
										{
											"R1",
											{0.0089999996,4.9175303e-010},
											1
										},
										
										{
											"R1",
											{0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{0.00636396,0.0079549504},
											1
										},
										
										{
											"R1",
											{-7.8680501e-010,0.01125},
											1
										},
										
										{
											"R1",
											{-0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{-0.00636396,0.0079549504},
											1
										},
										
										{
											"R1",
											{-0.0089999996,-1.3415501e-010},
											1
										},
										
										{
											"R1",
											{-0.00636396,-0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R1",
											1,
											{0,0},
											1
										},
										
										{
											"R1",
											{-0.00636396,-0.0079549504},
											1
										},
										
										{
											"R1",
											{1.57361e-009,-0.01125},
											1
										},
										
										{
											"R1",
											{0.00636396,-0.0079549504},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							condition="(PylonAmmo>=3)-(PylonAmmo>=4)";
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{0.00636396,-0.0079549504},
											1
										},
										
										{
											"R2",
											{0.0089999996,4.9175303e-010},
											1
										},
										
										{
											"R2",
											{0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{0.00636396,0.0079549504},
											1
										},
										
										{
											"R2",
											{-7.8680501e-010,0.01125},
											1
										},
										
										{
											"R2",
											{-0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{-0.00636396,0.0079549504},
											1
										},
										
										{
											"R2",
											{-0.0089999996,-1.3415501e-010},
											1
										},
										
										{
											"R2",
											{-0.00636396,-0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R2",
											1,
											{0,0},
											1
										},
										
										{
											"R2",
											{-0.00636396,-0.0079549504},
											1
										},
										
										{
											"R2",
											{1.57361e-009,-0.01125},
											1
										},
										
										{
											"R2",
											{0.00636396,-0.0079549504},
											1
										}
									}
								};
							};
						};
						class Missile3: Missile3
						{
							condition="(PylonAmmo>=2)-(PylonAmmo>=3)";
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{0.00636396,-0.0079549504},
											1
										},
										
										{
											"R3",
											{0.0089999996,4.9175303e-010},
											1
										},
										
										{
											"R3",
											{0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{0.00636396,0.0079549504},
											1
										},
										
										{
											"R3",
											{-7.8680501e-010,0.01125},
											1
										},
										
										{
											"R3",
											{-0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{-0.00636396,0.0079549504},
											1
										},
										
										{
											"R3",
											{-0.0089999996,-1.3415501e-010},
											1
										},
										
										{
											"R3",
											{-0.00636396,-0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R3",
											1,
											{0,0},
											1
										},
										
										{
											"R3",
											{-0.00636396,-0.0079549504},
											1
										},
										
										{
											"R3",
											{1.57361e-009,-0.01125},
											1
										},
										
										{
											"R3",
											{0.00636396,-0.0079549504},
											1
										}
									}
								};
							};
						};
						class Missile4: Missile4
						{
							condition="(PylonAmmo>=1)-(PylonAmmo>=2)";
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"R4",
											1,
											{0,0},
											1
										},
										
										{
											"R4",
											{0.00636396,-0.0079549504},
											1
										},
										
										{
											"R4",
											{0.0089999996,4.9175303e-010},
											1
										},
										
										{
											"R4",
											{0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R4",
											1,
											{0,0},
											1
										},
										
										{
											"R4",
											{0.00636396,0.0079549504},
											1
										},
										
										{
											"R4",
											{-7.8680501e-010,0.01125},
											1
										},
										
										{
											"R4",
											{-0.00636396,0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R4",
											1,
											{0,0},
											1
										},
										
										{
											"R4",
											{-0.00636396,0.0079549504},
											1
										},
										
										{
											"R4",
											{-0.0089999996,-1.3415501e-010},
											1
										},
										
										{
											"R4",
											{-0.00636396,-0.0079549504},
											1
										}
									},
									
									{
										
										{
											"R4",
											1,
											{0,0},
											1
										},
										
										{
											"R4",
											{-0.00636396,-0.0079549504},
											1
										},
										
										{
											"R4",
											{1.57361e-009,-0.01125},
											1
										},
										
										{
											"R4",
											{0.00636396,-0.0079549504},
											1
										}
									}
								};
							};
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=3";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=2";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile3: Missile3
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile4: Missile4
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
		displayName="9K121 Vikhr 4x";
	};
	class PylonRack_7Rnd_Rocket_04_HE_F: 7Rnd_Rocket_04_HE_F
	{
		count=7;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_02_F.p3d";
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"B_SHIEKER"
		};
		pylonWeapon="Rocket_04_HE_Plane_CAS_01_F";
		mass=88.300003;
		displayName="Hydra 70 7x HE";
	};
	class PylonRack_7Rnd_Rocket_04_AP_F: 7Rnd_Rocket_04_AP_F
	{
		count=7;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_02_F.p3d";
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"B_SHIEKER"
		};
		pylonWeapon="Rocket_04_AP_Plane_CAS_01_F";
		mass=88.300003;
		displayName="Hydra 70 7x AP";
	};
	class PylonRack_12Rnd_PG_missiles: 24Rnd_PG_missiles
	{
		displayName="$STR_A3_missiles_DAGR0";
		count=12;
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"DAGR"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_DAGR_F.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		pylonWeapon="missiles_DAGR";
		mass=140;
		class mfdElements
		{
			class Heli_Attack_01
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{-0.0049999999,-0.029999999},
										1
									},
									
									{
										{0.064999998,-0.029999999},
										1
									},
									
									{
										{0.064999998,0.15000001},
										1
									},
									
									{
										{-0.0049999999,0.15000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{-0.0049999999,-0.029999999},
									1
								},
								
								{
									{0.064999998,-0.029999999},
									1
								},
								
								{
									{0.064999998,0.15000001},
									1
								},
								
								{
									{-0.0049999999,0.15000001},
									1
								},
								
								{
									{-0.0049999999,-0.029999999},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="RKT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.029999999,0.050000001},
								1
							};
							right[]=
							{
								{0.059999999,0.050000001},
								1
							};
							down[]=
							{
								{0.029999999,0.075000003},
								1
							};
						};
						class Ammo
						{
							type="text";
							source="PylonAmmo";
							sourceIndex=1;
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								{0.029999999,0.090000004},
								1
							};
							right[]=
							{
								{0.07,0.090000004},
								1
							};
							down[]=
							{
								{0.029999999,0.125},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						color[]={0.99000001,0.94,0.58999997};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Ammo: Ammo
						{
						};
					};
					class Empty: Default
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Ammo: Ammo
						{
							source="static";
							text="-";
						};
					};
				};
			};
		};
	};
	class PylonRack_12Rnd_missiles: 12Rnd_missiles
	{
		count=12;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_12x_Rocket_DAR_F.p3d";
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"DAR"
		};
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		pylonWeapon="missiles_DAR";
		mass=140;
		class mfdElements
		{
			class Heli_Attack_01
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{-0.0049999999,-0.029999999},
										1
									},
									
									{
										{0.064999998,-0.029999999},
										1
									},
									
									{
										{0.064999998,0.15000001},
										1
									},
									
									{
										{-0.0049999999,0.15000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{-0.0049999999,-0.029999999},
									1
								},
								
								{
									{0.064999998,-0.029999999},
									1
								},
								
								{
									{0.064999998,0.15000001},
									1
								},
								
								{
									{-0.0049999999,0.15000001},
									1
								},
								
								{
									{-0.0049999999,-0.029999999},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="RKT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.029999999,0.050000001},
								1
							};
							right[]=
							{
								{0.059999999,0.050000001},
								1
							};
							down[]=
							{
								{0.029999999,0.075000003},
								1
							};
						};
						class Ammo
						{
							type="text";
							source="PylonAmmo";
							sourceIndex=1;
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								{0.029999999,0.090000004},
								1
							};
							right[]=
							{
								{0.07,0.090000004},
								1
							};
							down[]=
							{
								{0.029999999,0.125},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						color[]={0.99000001,0.94,0.58999997};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Ammo: Ammo
						{
						};
					};
					class Empty: Default
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Ammo: Ammo
						{
							source="static";
							text="-";
						};
					};
				};
			};
		};
		displayName="Hydra 70 12x HE";
	};
	class PylonMissile_1Rnd_Bomb_04_F: 4Rnd_Bomb_04_F
	{
		displayName="$STR_A3_CFGMAGAZINES_GBU120";
		count=1;
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		hardpoints[]=
		{
			"B_BOMB_PYLON"
		};
		pylonWeapon="Bomb_04_Plane_CAS_01_F";
		mass=230;
		class mfdElements
		{
		};
	};
	class PylonMissile_1Rnd_Mk82_F: 2Rnd_Mk82
	{
		displayName="$STR_DN_MK82LAUNCHER";
		count=1;
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_02_F.p3d";
		hardpoints[]=
		{
			"B_BOMB_PYLON"
		};
		pylonWeapon="Mk82BombLauncher";
		mass=227;
	};
	class PylonWeapon_300Rnd_20mm_shells: 300Rnd_20mm_shells
	{
		displayName="$STR_A3_twin_cannon_20mm";
		descriptionShort="$STR_A3_cfgMagazine_PL20_tooltip";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Twin_Cannon_20mm.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"B_A143_BUZZARD_CENTER_PYLON",
			"20MM_TWIN_CANNON"
		};
		pylonWeapon="Twin_Cannon_20mm";
		mass=230;
	};
	class PylonWeapon_2000Rnd_65x39_belt: 2000Rnd_65x39_Belt_Tracer_Green_Splash
	{
		displayName="$STR_A3_LMG_Minigun0";
		descriptionShort="$STR_A3_cfgMagazine_65Minigun_tooltip";
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Minigun_Heli_Light_02.p3d";
		muzzlePos="machinegun_beg";
		muzzleEnd="machinegun_end";
		hardpoints[]=
		{
			"I_ORCA_RIGHT_PYLON"
		};
		pylonWeapon="LMG_Minigun_heli";
		mass=200;
	};
	class PylonRack_20Rnd_Rocket_03_HE_F: 20Rnd_Rocket_03_HE_F
	{
		count=20;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_01_F.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"O_MISSILE_PYLON"
		};
		pylonWeapon="Rocket_03_HE_Plane_CAS_02_F";
		mass=208;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.11},
										1
									},
									
									{
										{0.17,0.11},
										1
									},
									
									{
										{0.17,0.33000001},
										1
									},
									
									{
										{0.1,0.33000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_rocket_02_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.14,0.27000001},
								1
							};
							right[]=
							{
								{0.18000001,0.27000001},
								1
							};
							down[]=
							{
								{0.14,0.301},
								1
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=2;
							points[]=
							{
								
								{
									"R1",
									{0,-0.029999999},
									1
								},
								
								{
									"R1",
									{0.012,-0.025979999},
									1
								},
								
								{
									"R1",
									{0.020784,-0.015},
									1
								},
								
								{
									"R1",
									{0.024,0},
									1
								},
								
								{
									"R1",
									{0.020784,0.015},
									1
								},
								
								{
									"R1",
									{0.012,0.025979999},
									1
								},
								
								{
									"R1",
									{0,0.029999999},
									1
								},
								
								{
									"R1",
									{-0.012,0.025979999},
									1
								},
								
								{
									"R1",
									{-0.020784,0.015},
									1
								},
								
								{
									"R1",
									{-0.024,0},
									1
								},
								
								{
									"R1",
									{-0.020784,-0.015},
									1
								},
								
								{
									"R1",
									{-0.012,-0.025979999},
									1
								},
								
								{
									"R1",
									{0,-0.029999999},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="RKT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
						class PylonAmmo1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0,0},
								1
							};
							right[]=
							{
								{0.027000001,0},
								1
							};
							down[]=
							{
								{0,0.028000001},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonAmmo1: PylonAmmo1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.016970599,-0.0212132},
										1
									},
									
									{
										"R1",
										{0.024,1.31134e-009},
										1
									},
									
									{
										"R1",
										{0.016970599,0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.016970599,0.0212132},
										1
									},
									
									{
										"R1",
										{-2.0981501e-009,0.029999999},
										1
									},
									
									{
										"R1",
										{-0.016970599,0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.016970599,0.0212132},
										1
									},
									
									{
										"R1",
										{-0.024,-3.57746e-010},
										1
									},
									
									{
										"R1",
										{-0.016970599,-0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.016970599,-0.0212132},
										1
									},
									
									{
										"R1",
										{4.19629e-009,-0.029999999},
										1
									},
									
									{
										"R1",
										{0.016970599,-0.0212132},
										1
									}
								}
							};
						};
					};
				};
			};
		};
		displayName="S-8 20x HE";
	};
	class PylonRack_20Rnd_Rocket_03_AP_F: 20Rnd_Rocket_03_AP_F
	{
		count=20;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_01_F.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"O_MISSILE_PYLON"
		};
		pylonWeapon="Rocket_03_AP_Plane_CAS_02_F";
		mass=208;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.11},
										1
									},
									
									{
										{0.17,0.11},
										1
									},
									
									{
										{0.17,0.33000001},
										1
									},
									
									{
										{0.1,0.33000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_rocket_02_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.14,0.27000001},
								1
							};
							right[]=
							{
								{0.18000001,0.27000001},
								1
							};
							down[]=
							{
								{0.14,0.301},
								1
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=2;
							points[]=
							{
								
								{
									"R1",
									{0,-0.029999999},
									1
								},
								
								{
									"R1",
									{0.012,-0.025979999},
									1
								},
								
								{
									"R1",
									{0.020784,-0.015},
									1
								},
								
								{
									"R1",
									{0.024,0},
									1
								},
								
								{
									"R1",
									{0.020784,0.015},
									1
								},
								
								{
									"R1",
									{0.012,0.025979999},
									1
								},
								
								{
									"R1",
									{0,0.029999999},
									1
								},
								
								{
									"R1",
									{-0.012,0.025979999},
									1
								},
								
								{
									"R1",
									{-0.020784,0.015},
									1
								},
								
								{
									"R1",
									{-0.024,0},
									1
								},
								
								{
									"R1",
									{-0.020784,-0.015},
									1
								},
								
								{
									"R1",
									{-0.012,-0.025979999},
									1
								},
								
								{
									"R1",
									{0,-0.029999999},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="RKT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
						class PylonAmmo1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0,0},
								1
							};
							right[]=
							{
								{0.027000001,0},
								1
							};
							down[]=
							{
								{0,0.028000001},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonAmmo1: PylonAmmo1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.016970599,-0.0212132},
										1
									},
									
									{
										"R1",
										{0.024,1.31134e-009},
										1
									},
									
									{
										"R1",
										{0.016970599,0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.016970599,0.0212132},
										1
									},
									
									{
										"R1",
										{-2.0981501e-009,0.029999999},
										1
									},
									
									{
										"R1",
										{-0.016970599,0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.016970599,0.0212132},
										1
									},
									
									{
										"R1",
										{-0.024,-3.57746e-010},
										1
									},
									
									{
										"R1",
										{-0.016970599,-0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.016970599,-0.0212132},
										1
									},
									
									{
										"R1",
										{4.19629e-009,-0.029999999},
										1
									},
									
									{
										"R1",
										{0.016970599,-0.0212132},
										1
									}
								}
							};
						};
					};
				};
			};
		};
		displayName="S-8 20x AP";
	};
	class PylonRack_19Rnd_Rocket_Skyfire: 38Rnd_80mm_rockets
	{
		displayName="$STR_A3_PylonRack_19Rnd_Rocket_Skyfire0";
		count=19;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_Skyfire_F.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"O_MISSILE_PYLON",
			"O_SKYFIRE"
		};
		pylonWeapon="rockets_Skyfire";
		mass=208;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.11},
										1
									},
									
									{
										{0.17,0.11},
										1
									},
									
									{
										{0.17,0.33000001},
										1
									},
									
									{
										{0.1,0.33000001},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_rocket_01_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.14,0.27000001},
								1
							};
							right[]=
							{
								{0.18000001,0.27000001},
								1
							};
							down[]=
							{
								{0.14,0.301},
								1
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=2;
							points[]=
							{
								
								{
									"R1",
									{-0.013,-0.025},
									1
								},
								
								{
									"R1",
									{0.013,-0.025},
									1
								},
								
								{
									"R1",
									{0.024,-0},
									1
								},
								
								{
									"R1",
									{0.013,0.025},
									1
								},
								
								{
									"R1",
									{-0.013,0.025},
									1
								},
								
								{
									"R1",
									{-0.024,-0},
									1
								},
								
								{
									"R1",
									{-0.013,-0.025},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="RKT";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
						class PylonAmmo1
						{
							type="text";
							source="pylonammo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0,0},
								1
							};
							right[]=
							{
								{0.027000001,0},
								1
							};
							down[]=
							{
								{0,0.028000001},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonAmmo1: PylonAmmo1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.016970599,-0.0212132},
										1
									},
									
									{
										"R1",
										{0.024,1.31134e-009},
										1
									},
									
									{
										"R1",
										{0.016970599,0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.016970599,0.0212132},
										1
									},
									
									{
										"R1",
										{-2.0981501e-009,0.029999999},
										1
									},
									
									{
										"R1",
										{-0.016970599,0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.016970599,0.0212132},
										1
									},
									
									{
										"R1",
										{-0.024,-3.57746e-010},
										1
									},
									
									{
										"R1",
										{-0.016970599,-0.0212132},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.016970599,-0.0212132},
										1
									},
									
									{
										"R1",
										{4.19629e-009,-0.029999999},
										1
									},
									
									{
										"R1",
										{0.016970599,-0.0212132},
										1
									}
								}
							};
						};
					};
				};
			};
		};
	};
	class PylonRack_1Rnd_Missile_AA_03_F: 2Rnd_Missile_AA_03_F
	{
		count=1;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_03_F.p3d";
		hardpoints[]=
		{
			"O_MISSILE_PYLON"
		};
		pylonWeapon="Missile_AA_03_Plane_CAS_02_F";
		mass=125;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.13},
										1
									},
									
									{
										{0.17,0.13},
										1
									},
									
									{
										{0.17,0.31},
										1
									},
									
									{
										{0.1,0.31},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_aa_03_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"R1",
									{0,-0.01375},
									1
								},
								
								{
									"R1",
									{0.0055,-0.0119075},
									1
								},
								
								{
									"R1",
									{0.0095260004,-0.006875},
									1
								},
								
								{
									"R1",
									{0.011,0},
									1
								},
								
								{
									"R1",
									{0.0095260004,0.006875},
									1
								},
								
								{
									"R1",
									{0.0055,0.0119075},
									1
								},
								
								{
									"R1",
									{0,0.01375},
									1
								},
								
								{
									"R1",
									{-0.0055,0.0119075},
									1
								},
								
								{
									"R1",
									{-0.0095260004,0.006875},
									1
								},
								
								{
									"R1",
									{-0.011,0},
									1
								},
								
								{
									"R1",
									{-0.0095260004,-0.006875},
									1
								},
								
								{
									"R1",
									{-0.0055,-0.0119075},
									1
								},
								
								{
									"R1",
									{0,-0.01375},
									1
								},
								{},
								
								{
									"R1",
									{0.0077781701,-0.0097227199},
									1
								},
								
								{
									"R1",
									{0.0162635,-0.0203293},
									1
								},
								{},
								
								{
									"R1",
									{0.0077781701,0.0097227199},
									1
								},
								
								{
									"R1",
									{0.0162635,0.0203293},
									1
								},
								{},
								
								{
									"R1",
									{-0.0077781701,0.0097227199},
									1
								},
								
								{
									"R1",
									{-0.0162635,0.0203293},
									1
								},
								{},
								
								{
									"R1",
									{-0.0077781798,-0.0097227199},
									1
								},
								
								{
									"R1",
									{-0.0162635,-0.0203293},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AA";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0077781701,-0.0097227199},
										1
									},
									
									{
										"R1",
										{0.011,6.01032e-010},
										1
									},
									
									{
										"R1",
										{0.0077781701,0.0097227199},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0077781701,0.0097227199},
										1
									},
									
									{
										"R1",
										{-9.6165098e-010,0.01375},
										1
									},
									
									{
										"R1",
										{-0.0077781701,0.0097227199},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0077781701,0.0097227199},
										1
									},
									
									{
										"R1",
										{-0.011,-1.6396701e-010},
										1
									},
									
									{
										"R1",
										{-0.0077781798,-0.0097227199},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0077781798,-0.0097227199},
										1
									},
									
									{
										"R1",
										{1.9233e-009,-0.01375},
										1
									},
									
									{
										"R1",
										{0.0077781798,-0.0097227097},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
		displayName="Wympel R-73";
	};
	class PylonMissile_1Rnd_Missile_AA_03_F: PylonRack_1Rnd_Missile_AA_03_F
	{
		hardpoints[]=
		{
			"O_SAHR3"
		};
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
		mass=85;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.13},
										1
									},
									
									{
										{0.17,0.13},
										1
									},
									
									{
										{0.17,0.31},
										1
									},
									
									{
										{0.1,0.31},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_aa_03_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"R1",
									{0,-0.01375},
									1
								},
								
								{
									"R1",
									{0.0055,-0.0119075},
									1
								},
								
								{
									"R1",
									{0.0095260004,-0.006875},
									1
								},
								
								{
									"R1",
									{0.011,0},
									1
								},
								
								{
									"R1",
									{0.0095260004,0.006875},
									1
								},
								
								{
									"R1",
									{0.0055,0.0119075},
									1
								},
								
								{
									"R1",
									{0,0.01375},
									1
								},
								
								{
									"R1",
									{-0.0055,0.0119075},
									1
								},
								
								{
									"R1",
									{-0.0095260004,0.006875},
									1
								},
								
								{
									"R1",
									{-0.011,0},
									1
								},
								
								{
									"R1",
									{-0.0095260004,-0.006875},
									1
								},
								
								{
									"R1",
									{-0.0055,-0.0119075},
									1
								},
								
								{
									"R1",
									{0,-0.01375},
									1
								},
								{},
								
								{
									"R1",
									{0.0077781701,-0.0097227199},
									1
								},
								
								{
									"R1",
									{0.0162635,-0.0203293},
									1
								},
								{},
								
								{
									"R1",
									{0.0077781701,0.0097227199},
									1
								},
								
								{
									"R1",
									{0.0162635,0.0203293},
									1
								},
								{},
								
								{
									"R1",
									{-0.0077781701,0.0097227199},
									1
								},
								
								{
									"R1",
									{-0.0162635,0.0203293},
									1
								},
								{},
								
								{
									"R1",
									{-0.0077781798,-0.0097227199},
									1
								},
								
								{
									"R1",
									{-0.0162635,-0.0203293},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AA";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0077781701,-0.0097227199},
										1
									},
									
									{
										"R1",
										{0.011,6.01032e-010},
										1
									},
									
									{
										"R1",
										{0.0077781701,0.0097227199},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0077781701,0.0097227199},
										1
									},
									
									{
										"R1",
										{-9.6165098e-010,0.01375},
										1
									},
									
									{
										"R1",
										{-0.0077781701,0.0097227199},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0077781701,0.0097227199},
										1
									},
									
									{
										"R1",
										{-0.011,-1.6396701e-010},
										1
									},
									
									{
										"R1",
										{-0.0077781798,-0.0097227199},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0077781798,-0.0097227199},
										1
									},
									
									{
										"R1",
										{1.9233e-009,-0.01375},
										1
									},
									
									{
										"R1",
										{0.0077781798,-0.0097227097},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class PylonRack_1Rnd_Missile_AGM_01_F: 4Rnd_Missile_AGM_01_F
	{
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AGM_01_F.p3d";
		count=1;
		hardpoints[]=
		{
			"O_MISSILE_PYLON"
		};
		pylonWeapon="Missile_AGM_01_Plane_CAS_02_F";
		mass=361;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.11},
										1
									},
									
									{
										{0.17,0.11},
										1
									},
									
									{
										{0.17,0.31},
										1
									},
									
									{
										{0.1,0.31},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_agm_01_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"R1",
									{0,-0.018750001},
									1
								},
								
								{
									"R1",
									{0.0074999998,-0.016237499},
									1
								},
								
								{
									"R1",
									{0.01299,-0.0093750004},
									1
								},
								
								{
									"R1",
									{0.015,0},
									1
								},
								
								{
									"R1",
									{0.01299,0.0093750004},
									1
								},
								
								{
									"R1",
									{0.0074999998,0.016237499},
									1
								},
								
								{
									"R1",
									{0,0.018750001},
									1
								},
								
								{
									"R1",
									{-0.0074999998,0.016237499},
									1
								},
								
								{
									"R1",
									{-0.01299,0.0093750004},
									1
								},
								
								{
									"R1",
									{-0.015,0},
									1
								},
								
								{
									"R1",
									{-0.01299,-0.0093750004},
									1
								},
								
								{
									"R1",
									{-0.0074999998,-0.016237499},
									1
								},
								
								{
									"R1",
									{0,-0.018750001},
									1
								},
								{},
								
								{
									"R1",
									{0.0106066,-0.0132583},
									1
								},
								
								{
									"R1",
									{0.0176777,-0.0220971},
									1
								},
								{},
								
								{
									"R1",
									{0.0106066,0.0132583},
									1
								},
								
								{
									"R1",
									{0.0176777,0.0220971},
									1
								},
								{},
								
								{
									"R1",
									{-0.0106066,0.0132583},
									1
								},
								
								{
									"R1",
									{-0.0176777,0.0220971},
									1
								},
								{},
								
								{
									"R1",
									{-0.0106066,-0.0132582},
									1
								},
								
								{
									"R1",
									{-0.0176777,-0.0220971},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="AGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0106066,-0.0132583},
										1
									},
									
									{
										"R1",
										{0.015,8.1958901e-010},
										1
									},
									
									{
										"R1",
										{0.0106066,0.0132583},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0106066,0.0132583},
										1
									},
									
									{
										"R1",
										{-1.31134e-009,0.018750001},
										1
									},
									
									{
										"R1",
										{-0.0106066,0.0132583},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0106066,0.0132583},
										1
									},
									
									{
										"R1",
										{-0.015,-2.2359201e-010},
										1
									},
									
									{
										"R1",
										{-0.0106066,-0.0132582},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0106066,-0.0132582},
										1
									},
									
									{
										"R1",
										{2.6226801e-009,-0.018750001},
										1
									},
									
									{
										"R1",
										{0.0106066,-0.0132582},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
		displayName="Kh-25MTP";
	};
	class PylonMissile_1Rnd_Bomb_03_F: 2Rnd_Bomb_03_F
	{
		count=1;
		model="\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_03_F.p3d";
		hardpoints[]=
		{
			"O_BOMB_PYLON",
			"O_BOMB_PYLON_HELI"
		};
		pylonWeapon="Bomb_03_Plane_CAS_02_F";
		mass=250;
		class mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.17,0.1},
										1
									},
									
									{
										{0.17,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F\MFD\UI\icon_place_cas_02_bomb_03_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
					};
				};
			};
			class VTOL_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class R1: Center
					{
						pos[]={0,0.0125};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"R1",
									{0,-0.018750001},
									1
								},
								
								{
									"R1",
									{0.0074999998,-0.016237499},
									1
								},
								
								{
									"R1",
									{0.01299,-0.0093750004},
									1
								},
								
								{
									"R1",
									{0.015,0},
									1
								},
								
								{
									"R1",
									{0.01299,0.0093750004},
									1
								},
								
								{
									"R1",
									{0.0074999998,0.016237499},
									1
								},
								
								{
									"R1",
									{0,0.018750001},
									1
								},
								
								{
									"R1",
									{-0.0074999998,0.016237499},
									1
								},
								
								{
									"R1",
									{-0.01299,0.0093750004},
									1
								},
								
								{
									"R1",
									{-0.015,0},
									1
								},
								
								{
									"R1",
									{-0.01299,-0.0093750004},
									1
								},
								
								{
									"R1",
									{-0.0074999998,-0.016237499},
									1
								},
								
								{
									"R1",
									{0,-0.018750001},
									1
								},
								{},
								
								{
									"R1",
									{0.0106066,-0.0132583},
									1
								},
								
								{
									"R1",
									{0.0176777,-0.0220971},
									1
								},
								{},
								
								{
									"R1",
									{0.0106066,0.0132583},
									1
								},
								
								{
									"R1",
									{0.0176777,0.0220971},
									1
								},
								{},
								
								{
									"R1",
									{-0.0106066,0.0132583},
									1
								},
								
								{
									"R1",
									{-0.0176777,0.0220971},
									1
								},
								{},
								
								{
									"R1",
									{-0.0106066,-0.0132582},
									1
								},
								
								{
									"R1",
									{-0.0176777,-0.0220971},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="LGB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{0,-0.050999999},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.017999999,-0.050999999},
								1
							};
							down[]=
							{
								"Center",
								1,
								{0,-0.029999999},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0106066,-0.0132583},
										1
									},
									
									{
										"R1",
										{0.015,8.1958901e-010},
										1
									},
									
									{
										"R1",
										{0.0106066,0.0132583},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{0.0106066,0.0132583},
										1
									},
									
									{
										"R1",
										{-1.31134e-009,0.018750001},
										1
									},
									
									{
										"R1",
										{-0.0106066,0.0132583},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0106066,0.0132583},
										1
									},
									
									{
										"R1",
										{-0.015,-2.2359201e-010},
										1
									},
									
									{
										"R1",
										{-0.0106066,-0.0132582},
										1
									}
								},
								
								{
									
									{
										"R1",
										1,
										{0,0},
										1
									},
									
									{
										"R1",
										{-0.0106066,-0.0132582},
										1
									},
									
									{
										"R1",
										{2.6226801e-009,-0.018750001},
										1
									},
									
									{
										"R1",
										{0.0106066,-0.0132582},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
		displayName="FAB-250M-54";
	};
	class ATMine_Range_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		mass=80;
		descriptionUse="$STR_A3_cfgMagazines_ATMine_Range_Mag0";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AT_CA.paa";
		model="\A3\Weapons_f\Explosives\mine_at_i";
		useActionTitle="$STR_ACTION_PUTBOMB";
		type="2*		256";
		allowedSlots[]={901};
		value=5;
		ammo="ATMine_Range_Ammo";
		nameSoundWeapon="mine";
		nameSound="mine";
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		descriptionShort="$STR_A3_cfgMagazines_Mine1";
		weaponPoolAvailable=1;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
		displayName="$STR_ace_realisticnames_ATMine_Name";
		ace_explosives_Placeable=1;
		useAction=0;
		ace_explosives_SetupObject="ACE_Explosives_Place_ATMine";
		ace_explosives_DelayTime=2.5;
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"PressurePlate"
			};
			class PressurePlate
			{
				digDistance=0.059999999;
			};
		};
	};
	class APERSMine_Range_Mag: ATMine_Range_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=10;
		ammo="APERSMine_Range_Ammo";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AP_CA.paa";
		model="\A3\Weapons_F\explosives\mine_ap_i";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineRangeMagazine1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901,701};
		displayName="$STR_ace_realisticnames_APERSMine_Name";
		ace_explosives_SetupObject="ACE_Explosives_Place_APERSMine";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"PressurePlate"
			};
			class PressurePlate
			{
				digDistance=0.02;
			};
		};
	};
	class APERSBoundingMine_Range_Mag: ATMine_Range_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=20;
		ammo="APERSBoundingMine_Range_Ammo";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AP_bouncing_CA.paa";
		model="\A3\Weapons_F\explosives\mine_AP_bouncing_i";
		descriptionShort="$STR_A3_cfgMagazines_BouncingMineRangeMagazine1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_BouncingMineRangeMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901,701};
		displayName="$STR_ace_realisticnames_APERSBoundingMine_Name";
		ace_explosives_SetupObject="ACE_Explosives_Place_APERSBoundingMine";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"PressurePlate"
			};
			class PressurePlate
			{
				digDistance=0.079999998;
			};
		};
	};
	class SLAMDirectionalMine_Wire_Mag: ATMine_Range_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=20;
		ammo="SLAMDirectionalMine_Wire_Ammo";
		picture="\A3\Weapons_F\Data\UI\gear_mine_SLAM_directional_CA.paa";
		model="\A3\Weapons_F\Explosives\mine_SLAM_directional_i";
		descriptionShort="$STR_A3_cfgMagazines_DirectionalMineRangeMagazine1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_DirectionalMineRangeMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901,701};
		displayName="$STR_ace_realisticnames_SLAM_Name";
		ace_explosives_SetupObject="ACE_Explosives_Place_SLAM";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"IRSensor",
				"PressurePlate",
				"Timer",
				"Command",
				"MK16_Transmitter"
			};
			class PressurePlate
			{
				displayName="$STR_ace_explosives_SLAME_Magnetic";
				digDistance=0;
				ammo="ACE_SLAMDirectionalMine_Magnetic_Ammo";
				pitch=90;
			};
			class IRSensor
			{
				displayName="$STR_ace_explosives_SLAME_IRSensor";
			};
			class Timer
			{
				ammo="ACE_SLAMDirectionalMine_Timer_Ammo";
			};
			class Command
			{
				ammo="ACE_SLAMDirectionalMine_Command_Ammo";
				fuseTime=0.5;
			};
			class MK16_Transmitter: Command
			{
			};
		};
	};
	class APERSTripMine_Wire_Mag: ATMine_Range_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=20;
		ammo="APERSTripMine_Wire_Ammo";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AP_tripwire_CA.paa";
		model="\A3\Weapons_F\explosives\mine_AP_tripwire_i";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineWireMagazine1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_ClassicMineWireMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901,701};
		displayName="$STR_ace_realisticnames_APERSTripwireMine_Name";
		ace_explosives_SetupObject="ACE_Explosives_Place_APERSTripwireMine";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Tripwire"
			};
			class Tripwire
			{
			};
		};
	};
	class ClaymoreDirectionalMine_Remote_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		mass=20;
		ammo="ClaymoreDirectionalMine_Remote_Ammo";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AP_miniclaymore_CA.paa";
		model="\A3\Weapons_F\explosives\mine_AP_miniclaymore_i";
		nameSoundWeapon="mine";
		type="2*		256";
		value=5;
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		nameSound="mine";
		useActionTitle="$STR_ACTION_PUTBOMB";
		descriptionShort="$STR_A3_cfgMagazines_DirectionalMineRemoteMagazine1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_DirectionalMineRemoteMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901,701};
		displayName="$STR_ace_realisticnames_Claymore_Name";
		ace_explosives_Placeable=1;
		useAction=0;
		ace_explosives_SetupObject="ACE_Explosives_Place_Claymore";
		ace_explosives_DelayTime=1.5;
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Command",
				"MK16_Transmitter"
			};
			class Command
			{
				FuseTime=0.5;
			};
			class MK16_Transmitter: Command
			{
			};
		};
	};
	class SatchelCharge_Remote_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		picture="\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
		model="\A3\Weapons_F\Explosives\satchel_i";
		descriptionShort="$STR_A3_cfgMagazines_PipeBomb1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_PipeBomb_Library0";
		};
		descriptionUse="$STR_A3_use_charge";
		type="2*		256";
		allowedSlots[]={901};
		value=5;
		ammo="SatchelCharge_Remote_Ammo";
		mass=80;
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		weaponPoolAvailable=1;
		useActionTitle="$STR_ACTION_PUTBOMB";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
		displayName="$STR_ace_realisticnames_SatchelCharge_Name";
		ace_explosives_Placeable=1;
		useAction=0;
		ace_explosives_SetupObject="ACE_Explosives_Place_SatchelCharge";
		ace_explosives_DelayTime=1;
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Timer",
				"Command",
				"MK16_Transmitter",
				"DeadmanSwitch"
			};
			class Timer
			{
				FuseTime=0.5;
			};
			class Command
			{
				FuseTime=0.5;
			};
			class MK16_Transmitter: Command
			{
			};
			class DeadmanSwitch: Command
			{
			};
		};
	};
	class DemoCharge_Remote_Mag: SatchelCharge_Remote_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		mass=20;
		picture="\A3\Weapons_F\Data\UI\gear_c4_charge_small_CA.paa";
		ammo="DemoCharge_Remote_Ammo";
		descriptionShort="$STR_A3_cfgMagazines_DemoCharge1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_DemoCharge_Library0";
		};
		allowedSlots[]={901,701};
		displayName="$STR_ace_realisticnames_DemoCharge_Name";
		ace_explosives_SetupObject="ACE_Explosives_Place_DemoCharge";
		model="\A3\Weapons_F\explosives\c4_charge_small_d";
	};
	class IEDUrbanBig_Remote_Mag: DemoCharge_Remote_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=80;
		displayName="$STR_A3_CfgVehicles_IEDUrbanBig_F";
		picture="\A3\Weapons_F\Data\UI\gear_IED_large_urban_CA.paa";
		model="\A3\Weapons_F\Explosives\IED_urban_big";
		ammo="IEDUrbanBig_Remote_Ammo";
		allowedSlots[]={901};
		ace_explosives_SetupObject="ACE_Explosives_Place_IEDUrbanBig";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Command",
				"DeadmanSwitch",
				"Cellphone",
				"PressurePlate"
			};
			class Command
			{
				FuseTime=0.5;
				ammo="ACE_IEDUrbanBig_Command_Ammo";
			};
			class DeadmanSwitch: Command
			{
			};
			class Cellphone: Command
			{
			};
			class PressurePlate
			{
				displayName="$STR_ace_explosives_PressurePlate";
				digDistance=0;
				ammo="ACE_IEDUrbanBig_Range_Ammo";
				pitch=0;
			};
		};
	};
	class IEDLandBig_Remote_Mag: IEDUrbanBig_Remote_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgVehicles_IEDLandBig_F";
		model="\A3\Weapons_F\Explosives\IED_land_big";
		ammo="IEDLandBig_Remote_Ammo";
		ace_explosives_SetupObject="ACE_Explosives_Place_IEDLandBig";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AT_CA.paa";
		class ACE_Triggers: ACE_Triggers
		{
			class Command: Command
			{
				ammo="ACE_IEDLandBig_Command_Ammo";
			};
			class DeadmanSwitch: Command
			{
			};
			class Cellphone: Command
			{
			};
			class PressurePlate: PressurePlate
			{
				ammo="ACE_IEDLandBig_Range_Ammo";
			};
		};
	};
	class IEDUrbanSmall_Remote_Mag: DemoCharge_Remote_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=40;
		displayName="$STR_A3_CfgVehicles_IEDUrbanSmall_F";
		model="\A3\Weapons_F\Explosives\IED_urban_small";
		ammo="IEDUrbanSmall_Remote_Ammo";
		ace_explosives_SetupObject="ACE_Explosives_Place_IEDUrbanSmall";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AP_bouncing_CA.paa";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Command",
				"DeadmanSwitch",
				"Cellphone",
				"PressurePlate"
			};
			class Command
			{
				FuseTime=0.5;
				ammo="ACE_IEDUrbanSmall_Command_Ammo";
			};
			class DeadmanSwitch: Command
			{
			};
			class Cellphone: Command
			{
			};
			class PressurePlate
			{
				displayName="$STR_ace_explosives_PressurePlate";
				digDistance=0;
				ammo="ACE_IEDUrbanSmall_Range_Ammo";
				pitch=0;
			};
		};
	};
	class IEDLandSmall_Remote_Mag: IEDUrbanSmall_Remote_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgVehicles_IEDLandSmall_F";
		picture="\A3\Weapons_F\Data\UI\gear_IED_small_dugin_CA.paa";
		model="\A3\Weapons_F\Explosives\IED_land_small";
		ammo="IEDLandSmall_Remote_Ammo";
		ace_explosives_SetupObject="ACE_Explosives_Place_IEDLandSmall";
		class ACE_Triggers: ACE_Triggers
		{
			class Command: Command
			{
				ammo="ACE_IEDLandSmall_Command_Ammo";
			};
			class DeadmanSwitch: Command
			{
			};
			class Cellphone: Command
			{
			};
			class PressurePlate: PressurePlate
			{
				ammo="ACE_IEDLandSmall_Range_Ammo";
			};
		};
	};
	class 6Rnd_GreenSignal_F: 3Rnd_UGL_FlareGreen_F
	{
		count=6;
		displayName="$STR_A3_CfgMagazines_6Rnd_GreenSignal_F0";
		descriptionShort="$STR_A3_CfgMagazines_6Rnd_GreenSignal_F1";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareGreen_F_dns";
		mass=12;
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_GreenSignal_CA.paa";
		author="$STR_ace_common_ACETeam";
		ammo="F_40mm_Green";
		initSpeed=120;
	};
	class 6Rnd_RedSignal_F: 6Rnd_GreenSignal_F
	{
		displayName="$STR_A3_CfgMagazines_6Rnd_RedSignal_F0";
		descriptionShort="$STR_A3_CfgMagazines_6Rnd_RedSignal_F1";
		displayNameShort="$STR_A3_CfgMagazines_UGL_FlareRed_F_dns";
		picture="\A3\Weapons_F_Kart\Pistols\Pistol_Signal_F\Data\UI\M_6Rnd_RedSignal_CA.paa";
		author="$STR_ace_common_ACETeam";
		ammo="F_40mm_Red";
		initSpeed=120;
	};
	class 10Rnd_338_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_10Rnd_338_Mag0";
		picture="\A3\Weapons_F_Mark\Data\UI\M_338_CA.paa";
		count=10;
		ammo="B_338_Ball";
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_338_Mag1";
		mass=14;
		initSpeed=880;
	};
	class 130Rnd_338_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_130Rnd_338_Mag0";
		picture="\A3\Weapons_F_Mark\Data\UI\M_338_NM_CA.paa";
		count=130;
		ammo="B_338_NM_Ball";
		tracersEvery=5;
		lastRoundsTracer=5;
		descriptionShort="$STR_A3_CfgMagazines_130Rnd_338_Mag1";
		mass=60;
		ACE_isBelt=1;
		initSpeed=807;
	};
	class 10Rnd_127x54_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_10Rnd_127x54_Mag0";
		picture="\A3\Weapons_F_Mark\Data\UI\M_127x54_CA.paa";
		count=10;
		ammo="B_127x54_Ball";
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_127x54_Mag1";
		mass=12;
		initSpeed=300;
	};
	class 150Rnd_93x64_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_150Rnd_93x64_Mag0";
		picture="\A3\Weapons_F_Mark\Data\UI\M_93x64_CA.paa";
		count=150;
		ammo="B_93x64_Ball";
		tracersEvery=3;
		lastRoundsTracer=6;
		descriptionShort="$STR_A3_CfgMagazines_150Rnd_93x64_Mag1";
		mass=70;
		ACE_isBelt=1;
		initSpeed=768;
	};
	class 10Rnd_93x64_DMR_05_Mag: 150Rnd_93x64_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\A3\Weapons_F_Mark\Data\UI\M_93x64_DMR_05_CA.paa";
		count=10;
		displayName="$STR_A3_CfgMagazines_10Rnd_93x64_DMR_05_Mag0";
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_93x64_DMR_05_Mag1";
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=16;
		ACE_isBelt=0;
		initSpeed=780;
	};
	class 50Rnd_570x28_SMG_03: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		ammo="B_570x28_Ball";
		count=50;
		initSpeed=715;
		picture="\a3\weapons_f_mod\data\m_adr97mag_ca.paa";
		tracersEvery=0;
		mass=12;
		displayName="$STR_ace_realisticnames_P90_Mag_Name";
		descriptionShort="$STR_ace_realisticnames_P90_Mag_DescriptionShort";
	};
	class 10Rnd_9x21_Mag: 16Rnd_9x21_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_10Rnd_9x21_Mag0";
		count=10;
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_9x21_Mag1";
		mass=4;
		initSpeed=430;
	};
	class 30Rnd_580x42_Mag_F: CA_Magazine
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_30Rnd_580x42_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_30Rnd_580x42_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_580x42_Mag_F1";
		ammo="B_580x42_Ball_F";
		count=30;
		tracersEvery=0;
		lastRoundsTracer=4;
		mass=8;
		modelSpecial="a3\Weapons_F_exp\MagazineProxies\mag_58x42_CTAR_30rnd";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\CTAR\Data\CTAR_F_2_co.paa"
		};
		initSpeed=950;
	};
	class 30Rnd_580x42_Mag_Tracer_F: 30Rnd_580x42_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_30Rnd_580x42_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_580x42_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		tracersEvery=1;
		lastRoundsTracer=30;
	};
	class 100Rnd_580x42_Mag_F: 30Rnd_580x42_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_100Rnd_580x42_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_580x42_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_100Rnd_580x42_Mag_F1";
		count=100;
		mass=20;
		modelSpecial="a3\Weapons_F_exp\MagazineProxies\mag_58x42_CTAR_100rnd";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_co.paa"
		};
	};
	class 100Rnd_580x42_Mag_Tracer_F: 100Rnd_580x42_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_100Rnd_580x42_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_580x42_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		tracersEvery=1;
		lastRoundsTracer=100;
	};
	class 100Rnd_580x42_hex_Mag_F: 100Rnd_580x42_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_100Rnd_580x42_hex_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_580x42_hex_Mag_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_bhex_co.paa"
		};
	};
	class 100Rnd_580x42_hex_Mag_Tracer_F: 100Rnd_580x42_Mag_Tracer_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_100Rnd_580x42_hex_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_580x42_hex_Mag_Tracer_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_bhex_co.paa"
		};
	};
	class 100Rnd_580x42_ghex_Mag_F: 100Rnd_580x42_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_100Rnd_580x42_ghex_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_580x42_ghex_Mag_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_ghex_co.paa"
		};
	};
	class 100Rnd_580x42_ghex_Mag_Tracer_F: 100Rnd_580x42_Mag_Tracer_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_100Rnd_580x42_ghex_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_100Rnd_580x42_ghex_Mag_Tracer_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\CTARS\Data\CTARS_F_ghex_co.paa"
		};
	};
	class 20Rnd_650x39_Cased_Mag_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_20Rnd_650x39_Cased_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_20Rnd_650x39_Cased_Mag_F1";
		ammo="B_65x39_Case_green";
		count=20;
		picture="\A3\Weapons_F_Exp\Data\UI\icon_20Rnd_650x39_Cased_Mag_F_ca.paa";
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=7;
		initSpeed=806;
	};
	class 10Rnd_50BW_Mag_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_10Rnd_50BW_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_10Rnd_50BW_Mag_F1";
		ammo="B_50BW_Ball_F";
		count=10;
		picture="\A3\Weapons_F_Exp\Data\UI\icon_10Rnd_50BW_Mag_F_ca.paa";
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=12;
		initSpeed=549;
	};
	class 150Rnd_556x45_Drum_Mag_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Mag_F1";
		ammo="B_556x45_Ball_Tracer_Red";
		count=150;
		picture="\A3\Weapons_F_Exp\Data\UI\icon_150Rnd_556x45_Drum_Mag_F_ca.paa";
		modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_556x45_stanag_150rnd.p3d";
		modelSpecialIsProxy=1;
		tracersEvery=0;
		lastRoundsTracer=4;
		mass=30;
		reloadAction="GestureReloadSPAR_02";
		initSpeed=869;
	};
	class 150Rnd_556x45_Drum_Sand_Mag_F: 150Rnd_556x45_Drum_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Sand_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Sand_Mag_F0";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_snd_F_02_co.paa"
		};
	};
	class 150Rnd_556x45_Drum_Sand_Mag_Tracer_F: 150Rnd_556x45_Drum_Sand_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Sand_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Sand_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		tracersEvery=1;
		lastRoundsTracer=150;
	};
	class 150Rnd_556x45_Drum_Green_Mag_F: 150Rnd_556x45_Drum_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Green_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Green_Mag_F0";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_khk_F_02_co.paa"
		};
	};
	class 150Rnd_556x45_Drum_Green_Mag_Tracer_F: 150Rnd_556x45_Drum_Green_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_150Rnd_556x45_Drum_Green_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Green_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		tracersEvery=1;
		lastRoundsTracer=150;
	};
	class 150Rnd_556x45_Drum_Mag_Tracer_F: 150Rnd_556x45_Drum_Mag_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_150Rnd_556x45_Drum_Mag_Tracer_F_ca.paa";
		tracersEvery=1;
		lastRoundsTracer=150;
	};
	class 30Rnd_762x39_Mag_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_30Rnd_762x39_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_762x39_Mag_F1";
		ammo="B_762x39_Ball_F";
		count=30;
		picture="\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_F_ca.paa";
		modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_762x39_akm_30rnd.p3d";
		modelSpecialIsProxy=1;
		tracersEvery=0;
		lastRoundsTracer=4;
		mass=10;
		initSpeed=715;
	};
	class 30Rnd_762x39_Mag_Green_F: 30Rnd_762x39_Mag_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_762x39_Mag_Green_F0";
		ammo="B_762x39_Ball_Green_F";
	};
	class 30Rnd_762x39_Mag_Tracer_F: 30Rnd_762x39_Mag_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_762x39_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_Tracer_F_ca.paa";
		tracersEvery=1;
		lastRoundsTracer=30;
	};
	class 30Rnd_762x39_Mag_Tracer_Green_F: 30Rnd_762x39_Mag_Tracer_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_762x39_Mag_Tracer_Green_F0";
		ammo="B_762x39_Ball_Green_F";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_Tracer_Green_F_ca.paa";
	};
	class 30Rnd_762x39_AK12_Mag_F: 30Rnd_762x39_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_30Rnd_762x39_AK12_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_762x39_AK12_Mag_F0";
		modelSpecial="a3\Weapons_F_exp\MagazineProxies\mag_762x39_ak12_30rnd";
		ammo="B_762x39_Ball_Green_F";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Exp\rifles\ak12\data\ak12_ak12_2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat"
		};
	};
	class 30Rnd_762x39_AK12_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_F
	{
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_30Rnd_762x39_AK12_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_762x39_AK12_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		tracersEvery=1;
		lastRoundsTracer=30;
	};
	class 30Rnd_545x39_Mag_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_30Rnd_545x39_Mag_F0";
		descriptionShort="$STR_A3_CfgMagazines_30Rnd_545x39_Mag_F1";
		ammo="B_545x39_Ball_F";
		count=30;
		picture="\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_F_ca.paa";
		modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_545x39_ak74_30rnd.p3d";
		modelSpecialIsProxy=1;
		tracersEvery=0;
		lastRoundsTracer=4;
		mass=8;
		initSpeed=735;
	};
	class 30Rnd_545x39_Mag_Green_F: 30Rnd_545x39_Mag_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_545x39_Mag_Green_F0";
		ammo="B_545x39_Ball_Green_F";
	};
	class 30Rnd_545x39_Mag_Tracer_F: 30Rnd_545x39_Mag_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_545x39_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_F_ca.paa";
		tracersEvery=1;
		lastRoundsTracer=30;
	};
	class 30Rnd_545x39_Mag_Tracer_Green_F: 30Rnd_545x39_Mag_Tracer_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_30Rnd_545x39_Mag_Tracer_Green_F0";
		ammo="B_545x39_Ball_Green_F";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_Green_F_ca.paa";
	};
	class 200Rnd_556x45_Box_F: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_200Rnd_556x45_Box_F0";
		descriptionShort="$STR_A3_CfgMagazines_200Rnd_556x45_Box_F1";
		ammo="B_556x45_Ball_Tracer_Yellow";
		count=200;
		picture="\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_F_ca.paa";
		tracersEvery=4;
		lastRoundsTracer=4;
		mass=40;
		ACE_isBelt=1;
		initSpeed=889;
	};
	class 200Rnd_556x45_Box_Red_F: 200Rnd_556x45_Box_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_200Rnd_556x45_Box_Red_F0";
		ammo="B_556x45_Ball_Tracer_Red";
		initSpeed=869;
	};
	class 200Rnd_556x45_Box_Tracer_F: 200Rnd_556x45_Box_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_200Rnd_556x45_Box_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_F_ca.paa";
		tracersEvery=1;
		lastRoundsTracer=200;
	};
	class 200Rnd_556x45_Box_Tracer_Red_F: 200Rnd_556x45_Box_Tracer_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_200Rnd_556x45_Box_Tracer_Red_F0";
		ammo="B_556x45_Ball_Tracer_Red";
		picture="\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_Red_F_ca.paa";
	};
	class 500Rnd_65x39_Belt: 200Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		count=500;
		ammo="B_65x39_Caseless";
		tracersEvery=5;
		displayName="$STR_A3_CfgMagazines_500Rnd_65x39_Belt0";
		descriptionShort="$STR_A3_CfgMagazines_500Rnd_65x39_Belt1";
	};
	class 500Rnd_65x39_Belt_Tracer_Red_Splash: 500Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Minigun_Caseless_Red_splash";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_500Rnd_65x39_Belt_Tracer_Red0";
		displaynameShort="$STR_A3_TRACER_DNS";
	};
	class 500Rnd_65x39_Belt_Tracer_Green_Splash: 500Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Minigun_Caseless_Green_splash";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_500Rnd_65x39_Belt_Tracer_Green0";
		displaynameShort="$STR_A3_TRACER_DNS";
	};
	class 500Rnd_65x39_Belt_Tracer_Yellow_Splash: 500Rnd_65x39_Belt
	{
		author="$STR_A3_Bohemia_Interactive";
		ammo="B_65x39_Minigun_Caseless_Yellow_splash";
		tracersEvery=1;
		displayName="$STR_A3_CfgMagazines_500Rnd_65x39_Belt_Tracer_Yellow0";
		displaynameShort="$STR_A3_TRACER_DNS";
	};
	class RPG7_F: RPG32_F
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_RPG7_F0";
		displaynameShort="$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		descriptionShort="$STR_A3_CfgMagazines_RPG7_F1";
		model="\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7_item.p3d";
		modelSpecial="\a3\Weapons_F_Exp\MagazineProxies\mag_RPG7_PG7V_1rnd.p3d";
		modelSpecialIsProxy=1;
		picture="\A3\Weapons_F_Exp\Launchers\RPG7\Data\UI\icon_rocket_RPG7_CA.paa";
		initSpeed=134;
		ammo="R_PG7_F";
		type="2*		256";
		mass=40;
	};
	class 4Rnd_LG_Jian: 4Rnd_Missile_AGM_01_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_4Rnd_LG_Jian0";
		displayNameShort="$STR_A3_CFGMAGAZINES_8RND_LG_SCALPEL_DNS";
		ammo="M_Jian_AT";
		count=4;
		initSpeed=0;
	};
	class 4000Rnd_20mm_Tracer_Red_shells: 1000Rnd_20mm_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=4000;
		tracersEvery=1;
	};
	class 160Rnd_40mm_APFSDS_Tracer_Red_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=160;
	};
	class 240Rnd_40mm_GPR_Tracer_Red_shells: 60Rnd_40mm_GPR_Tracer_Red_shells
	{
		author="$STR_A3_Bohemia_Interactive";
		count=240;
	};
	class 100Rnd_105mm_HEAT_MP: 20Rnd_105mm_HEAT_MP
	{
		author="$STR_A3_Bohemia_Interactive";
		count=100;
	};
	class magazine_Missile_rim116_x21: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Rim116_x21_magazine_name";
		displayNameShort="$STR_A3_Rim116_x21_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_BIM9_tooltip";
		ammo="ammo_Missile_rim116";
		count=21;
		initSpeed=40;
		maxLeadSpeed=750;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			1300
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class magazine_Missile_rim162_x8: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Rim162_x8_magazine_name";
		displayNameShort="$STR_A3_Rim162_x8_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_AMRAAM_tooltip";
		count=8;
		ammo="ammo_Missile_rim162";
		initSpeed=60;
		maxLeadSpeed=900;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
	};
	class magazine_Cannon_Phalanx_x1550: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Phalanx_x1550_magazine_name";
		descriptionShort="$STR_A3_Phalanx_x1550_magazine_description";
		ammo="ammo_AAA_Gun35mm_AA";
		count=1550;
		initSpeed=1440;
		maxLeadSpeed=600;
		tracersEvery=3;
		nameSound="cannon";
	};
	class magazine_Fighter01_Gun20mm_AA_x450: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_20mm_x450_magazine_name";
		descriptionShort="$STR_A3_Gun_Fighter_20mm_x450_magazine_description";
		ammo="ammo_Fighter01_Gun20mm_AA";
		count=450;
		initSpeed=1036;
		maxLeadSpeed=300;
		tracersEvery=3;
		nameSound="cannon";
	};
	class magazine_Fighter04_Gun20mm_AA_x150: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_20mm_x150_magazine_name";
		descriptionShort="$STR_A3_Gun_Fighter_20mm_x150_magazine_description";
		ammo="ammo_Fighter04_Gun20mm_AA";
		count=150;
		initSpeed=1036;
		maxLeadSpeed=300;
		tracersEvery=3;
		nameSound="cannon";
	};
	class magazine_Fighter04_Gun20mm_AA_x250: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_20mm_x150_magazine_name";
		descriptionShort="$STR_A3_Gun_Fighter_20mm_x150_magazine_description";
		ammo="ammo_Fighter04_Gun20mm_AA";
		count=250;
		initSpeed=1036;
		maxLeadSpeed=300;
		tracersEvery=3;
		nameSound="cannon";
	};
	class magazine_Missile_AMRAAM_C_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AMRAAM_C_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AMRAAM_C_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_AMRAAM_tooltip";
		count=1;
		ammo="ammo_Missile_AMRAAM_C";
		initSpeed=0;
		maxLeadSpeed=800;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								
								{
									"Center",
									{0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0099999998,0},
									1
								},
								
								{
									"Center",
									{0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{0,0.0098290602},
									1
								},
								
								{
									"Center",
									{-0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{-0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0},
									1
								},
								
								{
									"Center",
									{-0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0139004},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0099999998,4.2964199e-010},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-8.7422802e-010,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0099999998,-1.1721001e-010},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{1.74846e-009,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_AMRAAM_D_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AMRAAM_D_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AMRAAM_D_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_AMRAAM_tooltip";
		count=1;
		ammo="ammo_Missile_AMRAAM_D";
		initSpeed=0;
		maxLeadSpeed=900;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								
								{
									"Center",
									{0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0099999998,0},
									1
								},
								
								{
									"Center",
									{0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{0,0.0098290602},
									1
								},
								
								{
									"Center",
									{-0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{-0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0},
									1
								},
								
								{
									"Center",
									{-0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0139004},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0099999998,4.2964199e-010},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-8.7422802e-010,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0099999998,-1.1721001e-010},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{1.74846e-009,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_BIM9X_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AA_9x_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AA_9x_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_BIM9_tooltip";
		ammo="ammo_Missile_BIM9X";
		count=1;
		initSpeed=0;
		maxLeadSpeed=700;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			1300
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="IR";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								
								{
									"Center",
									{0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0099999998,0},
									1
								},
								
								{
									"Center",
									{0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{0,0.0098290602},
									1
								},
								
								{
									"Center",
									{-0.0049999999,0.0085119698},
									1
								},
								
								{
									"Center",
									{-0.0086599998,0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0},
									1
								},
								
								{
									"Center",
									{-0.0086599998,-0.0049145301},
									1
								},
								
								{
									"Center",
									{-0.0049999999,-0.0085119698},
									1
								},
								
								{
									"Center",
									{0,-0.0098290602},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0139004},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,-0.0069501898},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0139004},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="IR";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0099999998,4.2964199e-010},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-8.7422802e-010,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0099999998,-1.1721001e-010},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{1.74846e-009,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_AGM_02_x1: VehicleMagazine
	{
		scope=2;
		displayNameShort="$STR_A3_Missile_AGM_65_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_Macer_tooltip";
		ammo="Missile_AGM_02_F";
		initSpeed=0;
		maxLeadSpeed=60;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
		displayName="AGM-65 Maverick G";
	};
	class magazine_Bomb_GBU12_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Bomb_GBU_12_x1_magazine_name";
		displayNameShort="$STR_A3_Bomb_GBU_12_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_GBU12_tooltip";
		ammo="Bomb_04_F";
		initSpeed=0;
		maxLeadSpeed=30;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="LGB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="LGB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_AMRAAM_C_x1: magazine_Missile_AMRAAM_C_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_C_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_10_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_C",
			"I_AMRAAM_C"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
	};
	class PylonRack_Missile_AMRAAM_C_x1: magazine_Missile_AMRAAM_C_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_C_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_10_Rail_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_C_RAIL",
			"I_AMRAAM_C_RAIL"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
	};
	class PylonRack_Missile_AMRAAM_C_x2: magazine_Missile_AMRAAM_C_x1
	{
		count=2;
		displayName="$STR_A3_Missile_AMRAAM_C_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_10_DualRail_x2_F";
		hardpoints[]=
		{
			"B_AMRAAM_C_DUAL_RAIL",
			"I_AMRAAM_C_DUAL_RAIL"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
	};
	class PylonMissile_Missile_AMRAAM_D_x1: magazine_Missile_AMRAAM_D_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_D_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_D"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
	};
	class PylonMissile_Missile_AMRAAM_D_INT_x1: magazine_Missile_AMRAAM_D_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_D_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_D_INT"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class PylonRack_Missile_AMRAAM_D_x1: magazine_Missile_AMRAAM_D_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AMRAAM_D_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_Rail_x1_F";
		hardpoints[]=
		{
			"B_AMRAAM_D_RAIL",
			"I_AMRAAM_D_RAIL"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
		ejectSpeed[]={1,0,0};
	};
	class PylonRack_Missile_AMRAAM_D_x2: magazine_Missile_AMRAAM_D_x1
	{
		count=2;
		displayName="$STR_A3_Missile_AMRAAM_D_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_06_DualRail_x2_F";
		hardpoints[]=
		{
			"B_AMRAAM_D_DUAL_RAIL",
			"I_AMRAAM_D_DUAL_RAIL"
		};
		pylonWeapon="weapon_AMRAAMLauncher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center",
										{0.0099999998,0},
										1
									},
									
									{
										"Center",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center",
										{0,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center2",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,0.0098290602},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ARH";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_BIM9X_x1: magazine_Missile_BIM9X_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_9x_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_x1_F";
		hardpoints[]=
		{
			"B_BIM9X",
			"I_BIM9X"
		};
		pylonWeapon="weapon_BIM9xLauncher";
		ejectSpeed[]={1,0,0};
	};
	class PylonRack_Missile_BIM9X_x1: magazine_Missile_BIM9X_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_9x_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_Rail_x1_F";
		hardpoints[]=
		{
			"B_BIM9X_RAIL",
			"I_BIM9X_RAIL"
		};
		pylonWeapon="weapon_BIM9xLauncher";
		ejectSpeed[]={1,0,0};
	};
	class PylonRack_Missile_BIM9X_x2: magazine_Missile_BIM9X_x1
	{
		count=2;
		displayName="$STR_A3_Missile_AA_9x_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_08_DualRail_x2_F";
		hardpoints[]=
		{
			"B_BIM9X_DUAL_RAIL",
			"I_BIM9X_DUAL_RAIL"
		};
		pylonWeapon="weapon_BIM9xLauncher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="IR";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center",
										{0.0099999998,0},
										1
									},
									
									{
										"Center",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center",
										{0,0.0098290602},
										1
									},
									
									{
										"Center",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center2",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,0.0098290602},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="IR";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_AGM_02_x1: magazine_Missile_AGM_02_x1
	{
		count=1;
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_x1_F";
		hardpoints[]=
		{
			"B_AGM65",
			"I_AGM65"
		};
		pylonWeapon="weapon_AGM_65Launcher";
		displayName="AGM-65 Maverick G";
	};
	class PylonMissile_Missile_AGM_02_x2: magazine_Missile_AGM_02_x1
	{
		count=2;
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_x2_F";
		hardpoints[]=
		{
			"B_AGM65_DUAL",
			"I_AGM65_DUAL"
		};
		pylonWeapon="weapon_AGM_65Launcher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
		displayName="AGM-65 Maverick G 2x";
	};
	class PylonRack_Missile_AGM_02_x1: magazine_Missile_AGM_02_x1
	{
		count=1;
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_Rail_x1_F";
		hardpoints[]=
		{
			"B_AGM65_RAIL",
			"I_AGM65_RAIL"
		};
		pylonWeapon="weapon_AGM_65Launcher";
		displayName="AGM-65 Maverick G";
	};
	class PylonRack_Missile_AGM_02_x2: magazine_Missile_AGM_02_x1
	{
		count=2;
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_02_DualRail_x2_F";
		hardpoints[]=
		{
			"B_AGM65_DUAL_RAIL",
			"I_AGM65_DUAL_RAIL"
		};
		pylonWeapon="weapon_AGM_65Launcher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="ATGM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
		displayName="AGM-65 Maverick G 2x";
	};
	class PylonMissile_Bomb_GBU12_x1: magazine_Bomb_GBU12_x1
	{
		count=1;
		displayName="$STR_A3_Bomb_GBU_12_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_x1_F";
		hardpoints[]=
		{
			"B_GBU12",
			"I_GBU12"
		};
		pylonWeapon="weapon_GBU12Launcher";
	};
	class PylonRack_Bomb_GBU12_x2: magazine_Bomb_GBU12_x1
	{
		count=2;
		displayName="$STR_A3_Bomb_GBU_12_x2_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_DualRail_x2_F";
		hardpoints[]=
		{
			"B_GBU12_DUAL_RAIL",
			"I_GBU12_DUAL_RAIL"
		};
		pylonWeapon="weapon_GBU12Launcher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="LGB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="LGB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class magazine_Fighter02_Gun30mm_AA_x180: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Gun_Fighter_30mm_x180_magazine_name";
		descriptionShort="$STR_A3_Gun_Fighter_30mm_x180_magazine_description";
		ammo="ammo_Fighter02_Gun30mm_AA";
		count=180;
		initSpeed=1036;
		maxLeadSpeed=300;
		tracersEvery=2;
		nameSound="cannon";
	};
	class magazine_Missile_AA_R73_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AA_R73_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AA_R73_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_R73_tooltip";
		ammo="ammo_Missile_AA_R73";
		count=1;
		initSpeed=0;
		maxLeadSpeed=700;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			1300
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,-0.025},
										1
									},
									
									{
										{0.16500001,-0.025},
										1
									},
									
									{
										{0.16500001,0.175},
										1
									},
									
									{
										{0.13500001,0.175},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.15307701,0.14503001},
									1
								},
								
								{
									{0.15653799,0.141716},
									1
								},
								
								{
									{0.15923101,0.141716},
									1
								},
								
								{
									{0.15923101,0.113314},
									1
								},
								
								{
									{0.155385,0.110473},
									1
								},
								
								{
									{0.155385,0.0560355},
									1
								},
								
								{
									{0.16,0.0560355},
									1
								},
								
								{
									{0.16,0.052721899},
									1
								},
								
								{
									{0.15653799,0.044674601},
									1
								},
								
								{
									{0.15615401,0.034733701},
									1
								},
								
								{
									{0.15576901,0.0228994},
									1
								},
								
								{
									{0.155385,0.0176923},
									1
								},
								
								{
									{0.154231,0.0134319},
									1
								},
								
								{
									{0.15307701,0.0110651},
									1
								},
								
								{
									{0.151923,0.0091716005},
									1
								},
								
								{
									{0.150769,0.0082248496},
									1
								},
								
								{
									{0.149615,0.0082248496},
									1
								},
								
								{
									{0.149231,0.0082248496},
									1
								},
								
								{
									{0.14769199,0.0082248496},
									1
								},
								
								{
									{0.146538,0.0091716005},
									1
								},
								
								{
									{0.145385,0.0110651},
									1
								},
								
								{
									{0.14461499,0.0134319},
									1
								},
								
								{
									{0.143462,0.0176923},
									1
								},
								
								{
									{0.142692,0.0228994},
									1
								},
								
								{
									{0.142692,0.034733701},
									1
								},
								
								{
									{0.142308,0.044674601},
									1
								},
								
								{
									{0.13846201,0.052721899},
									1
								},
								
								{
									{0.13846201,0.0560355},
									1
								},
								
								{
									{0.143462,0.0560355},
									1
								},
								
								{
									{0.143462,0.110473},
									1
								},
								
								{
									{0.139231,0.113314},
									1
								},
								
								{
									{0.139231,0.141716},
									1
								},
								
								{
									{0.142308,0.141716},
									1
								},
								
								{
									{0.145385,0.14503001},
									1
								},
								
								{
									{0.15307701,0.14503001},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="I";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.0099999998
								},
								1
							};
							right[]=
							{
								{0.17,0.0099999998},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.035
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.029999999
								},
								1
							};
							right[]=
							{
								{0.17,0.029999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.055
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_AA_R77_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AA_R77_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AA_R77_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_R77_tooltip";
		count=1;
		ammo="ammo_Missile_AA_R77";
		initSpeed=0;
		maxLeadSpeed=900;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,-0.025},
										1
									},
									
									{
										{0.16500001,-0.025},
										1
									},
									
									{
										{0.16500001,0.175},
										1
									},
									
									{
										{0.13500001,0.175},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.160769,0.106213},
									1
								},
								
								{
									{0.15615401,0.086331397},
									1
								},
								
								{
									{0.15615401,0.0243195},
									1
								},
								
								{
									{0.15923101,0.0243195},
									1
								},
								
								{
									{0.15923101,0.019112401},
									1
								},
								
								{
									{0.15653799,0.0153254},
									1
								},
								
								{
									{0.15346199,-0.0097633097},
									1
								},
								
								{
									{0.152308,-0.0121302},
									1
								},
								
								{
									{0.150769,-0.0135503},
									1
								},
								
								{
									{0.148846,-0.014497},
									1
								},
								
								{
									{0.14692301,-0.0135503},
									1
								},
								
								{
									{0.145,-0.0121302},
									1
								},
								
								{
									{0.14423101,-0.0097633097},
									1
								},
								
								{
									{0.14115401,0.0153254},
									1
								},
								
								{
									{0.13846201,0.019112401},
									1
								},
								
								{
									{0.13846201,0.0243195},
									1
								},
								
								{
									{0.14153799,0.0243195},
									1
								},
								
								{
									{0.14153799,0.086331397},
									1
								},
								
								{
									{0.136923,0.106213},
									1
								},
								
								{
									{0.136923,0.119941},
									1
								},
								
								{
									{0.143462,0.118047},
									1
								},
								
								{
									{0.143462,0.144556},
									1
								},
								
								{
									{0.143462,0.14787},
									1
								},
								
								{
									{0.14423101,0.149763},
									1
								},
								
								{
									{0.145769,0.151657},
									1
								},
								
								{
									{0.14730801,0.152604},
									1
								},
								
								{
									{0.148846,0.15355},
									1
								},
								
								{
									{0.148846,0.15355},
									1
								},
								
								{
									{0.15038501,0.152604},
									1
								},
								
								{
									{0.151923,0.151657},
									1
								},
								
								{
									{0.15307701,0.149763},
									1
								},
								
								{
									{0.154231,0.14787},
									1
								},
								
								{
									{0.154231,0.144556},
									1
								},
								
								{
									{0.154231,0.118047},
									1
								},
								
								{
									{0.160769,0.119941},
									1
								},
								
								{
									{0.160769,0.106213},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.029999999
								},
								1
							};
							right[]=
							{
								{0.168,0.029999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.055
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="D";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.050000001
								},
								1
							};
							right[]=
							{
								{0.168,0.050000001},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.075000003
								},
								1
							};
						};
						class PylonText3
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.07
								},
								1
							};
							right[]=
							{
								{0.168,0.07},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.094999999
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_AGM_KH25_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_AGM_KH25_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_AGM_KH25_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_Sharur_tooltip";
		ammo="Missile_AGM_01_F";
		initSpeed=0;
		maxLeadSpeed=60;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,-0.025},
										1
									},
									
									{
										{0.16500001,-0.025},
										1
									},
									
									{
										{0.16500001,0.175},
										1
									},
									
									{
										{0.13500001,0.175},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.160769,0.106213},
									1
								},
								
								{
									{0.15615401,0.086331397},
									1
								},
								
								{
									{0.15615401,0.0243195},
									1
								},
								
								{
									{0.15923101,0.0243195},
									1
								},
								
								{
									{0.15923101,0.019112401},
									1
								},
								
								{
									{0.15653799,0.0153254},
									1
								},
								
								{
									{0.15346199,-0.0097633097},
									1
								},
								
								{
									{0.152308,-0.0121302},
									1
								},
								
								{
									{0.150769,-0.0135503},
									1
								},
								
								{
									{0.148846,-0.014497},
									1
								},
								
								{
									{0.14692301,-0.0135503},
									1
								},
								
								{
									{0.145,-0.0121302},
									1
								},
								
								{
									{0.14423101,-0.0097633097},
									1
								},
								
								{
									{0.14115401,0.0153254},
									1
								},
								
								{
									{0.13846201,0.019112401},
									1
								},
								
								{
									{0.13846201,0.0243195},
									1
								},
								
								{
									{0.14153799,0.0243195},
									1
								},
								
								{
									{0.14153799,0.086331397},
									1
								},
								
								{
									{0.136923,0.106213},
									1
								},
								
								{
									{0.136923,0.119941},
									1
								},
								
								{
									{0.143462,0.118047},
									1
								},
								
								{
									{0.143462,0.144556},
									1
								},
								
								{
									{0.143462,0.14787},
									1
								},
								
								{
									{0.14423101,0.149763},
									1
								},
								
								{
									{0.145769,0.151657},
									1
								},
								
								{
									{0.14730801,0.152604},
									1
								},
								
								{
									{0.148846,0.15355},
									1
								},
								
								{
									{0.148846,0.15355},
									1
								},
								
								{
									{0.15038501,0.152604},
									1
								},
								
								{
									{0.151923,0.151657},
									1
								},
								
								{
									{0.15307701,0.149763},
									1
								},
								
								{
									{0.154231,0.14787},
									1
								},
								
								{
									{0.154231,0.144556},
									1
								},
								
								{
									{0.154231,0.118047},
									1
								},
								
								{
									{0.160769,0.119941},
									1
								},
								
								{
									{0.160769,0.106213},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="I";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.029999999
								},
								1
							};
							right[]=
							{
								{0.168,0.029999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.055
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.148",
									0.050000001
								},
								1
							};
							right[]=
							{
								{0.168,0.050000001},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.148",
									0.075000003
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
				};
			};
		};
	};
	class magazine_Bomb_KAB250_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Bomb_KAB_250_x1_magazine_name";
		displayNameShort="$STR_A3_Bomb_KAB_250_magazine_shortName";
		descriptionShort="$STR_A3_cfgMagazine_LOM250_tooltip";
		ammo="Bomb_03_F";
		initSpeed=0;
		maxLeadSpeed=30;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="";
		class mfdElements
		{
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,-0.025},
										1
									},
									
									{
										{0.16500001,-0.025},
										1
									},
									
									{
										{0.16500001,0.175},
										1
									},
									
									{
										{0.13500001,0.175},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.148846,-0.023017799},
									1
								},
								
								{
									{0.148462,-0.023017799},
									1
								},
								
								{
									{0.14692301,-0.022071},
									1
								},
								
								{
									{0.146538,-0.020650901},
									1
								},
								
								{
									{0.146538,-0.0135503},
									1
								},
								
								{
									{0.145,-0.0116568},
									1
								},
								
								{
									{0.14423101,-0.0097633097},
									1
								},
								
								{
									{0.14423101,-0.00692308},
									1
								},
								
								{
									{0.145,-0.00597633},
									1
								},
								
								{
									{0.146538,-0.00597633},
									1
								},
								
								{
									{0.14730801,-0.0045562098},
									1
								},
								
								{
									{0.146538,0.0053846198},
									1
								},
								
								{
									{0.142692,0.018639101},
									1
								},
								
								{
									{0.142692,0.022426},
									1
								},
								
								{
									{0.136154,0.031893499},
									1
								},
								
								{
									{0.136154,0.0389941},
									1
								},
								
								{
									{0.141923,0.038047299},
									1
								},
								
								{
									{0.142692,0.039467499},
									1
								},
								
								{
									{0.142692,0.057929002},
									1
								},
								
								{
									{0.14,0.074023701},
									1
								},
								
								{
									{0.14,0.119941},
									1
								},
								
								{
									{0.14153799,0.135089},
									1
								},
								
								{
									{0.131923,0.15497001},
									1
								},
								
								{
									{0.134615,0.16727801},
									1
								},
								
								{
									{0.148846,0.16727801},
									1
								},
								
								{
									{0.149615,0.16727801},
									1
								},
								
								{
									{0.163846,0.16727801},
									1
								},
								
								{
									{0.166538,0.15497001},
									1
								},
								
								{
									{0.156923,0.135089},
									1
								},
								
								{
									{0.158462,0.119941},
									1
								},
								
								{
									{0.158462,0.074023701},
									1
								},
								
								{
									{0.155385,0.057929002},
									1
								},
								
								{
									{0.155385,0.039467499},
									1
								},
								
								{
									{0.15653799,0.038047299},
									1
								},
								
								{
									{0.16230799,0.0389941},
									1
								},
								
								{
									{0.16230799,0.031893499},
									1
								},
								
								{
									{0.155385,0.022426},
									1
								},
								
								{
									{0.155385,0.018639101},
									1
								},
								
								{
									{0.151923,0.0053846198},
									1
								},
								
								{
									{0.150769,-0.0045562098},
									1
								},
								
								{
									{0.151923,-0.00597633},
									1
								},
								
								{
									{0.15307701,-0.00597633},
									1
								},
								
								{
									{0.154231,-0.00692308},
									1
								},
								
								{
									{0.154231,-0.0097633097},
									1
								},
								
								{
									{0.15346199,-0.0116568},
									1
								},
								
								{
									{0.151923,-0.0135503},
									1
								},
								
								{
									{0.151923,-0.020650901},
									1
								},
								
								{
									{0.151154,-0.022071},
									1
								},
								
								{
									{0.148846,-0.023017799},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="L";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.059999999
								},
								1
							};
							right[]=
							{
								{0.175,0.059999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.085000001
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="S";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.079999998
								},
								1
							};
							right[]=
							{
								{0.175,0.079999998},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.105
								},
								1
							};
						};
						class PylonText3
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.1
								},
								1
							};
							right[]=
							{
								{0.175,0.1},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.125
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_AA_R73_x1: magazine_Missile_AA_R73_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_R73_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_07_x1_F.p3d";
		hardpoints[]=
		{
			"O_R73"
		};
		pylonWeapon="weapon_R73Launcher";
		ejectSpeed[]={1,0,0};
	};
	class PylonMissile_Missile_AA_R77_x1: magazine_Missile_AA_R77_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_R77_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_05_x1_F.p3d";
		hardpoints[]=
		{
			"O_R77"
		};
		pylonWeapon="weapon_R77Launcher";
		ejectSpeed[]={1,0,0};
	};
	class PylonMissile_Missile_AA_R77_INT_x1: magazine_Missile_AA_R77_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AA_R77_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AA_05_x1_F.p3d";
		hardpoints[]=
		{
			"O_R77_INT"
		};
		pylonWeapon="weapon_R77Launcher";
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class PylonMissile_Missile_AGM_KH25_x1: magazine_Missile_AGM_KH25_x1
	{
		count=1;
		displayName="$STR_A3_Missile_AGM_KH25_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Missile_AGM_01_x1_F.p3d";
		hardpoints[]=
		{
			"O_KH25"
		};
		pylonWeapon="weapon_AGM_KH25Launcher";
	};
	class PylonMissile_Missile_AGM_KH25_INT_x1: PylonMissile_Missile_AGM_KH25_x1
	{
		hardpoints[]=
		{
			"O_KH25_INT"
		};
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class PylonMissile_Bomb_KAB250_x1: magazine_Bomb_KAB250_x1
	{
		count=1;
		displayName="$STR_A3_Bomb_KAB_250_x1_magazine_name";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_KAB250_03_x1_F.p3d";
		hardpoints[]=
		{
			"O_KAB250_BOMB"
		};
		pylonWeapon="weapon_KAB250Launcher";
	};
	class 1Rnd_Leaflets_West_F: 4Rnd_Bomb_04_F
	{
		ammo="Bo_Leaflets";
		count=1;
		leafletClass="West";
		displayName="$STR_A3_CfgMagazines_Leaflets_F0";
		displayNameShort="$STR_A3_CfgMagazines_Leaflets_F0";
	};
	class 1Rnd_Leaflets_East_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="East";
	};
	class 1Rnd_Leaflets_Guer_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Guer";
	};
	class 1Rnd_Leaflets_Civ_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Civ";
	};
	class 1Rnd_Leaflets_Custom_01_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_01";
	};
	class 1Rnd_Leaflets_Custom_02_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_02";
	};
	class 1Rnd_Leaflets_Custom_03_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_03";
	};
	class 1Rnd_Leaflets_Custom_04_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_04";
	};
	class 1Rnd_Leaflets_Custom_05_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_05";
	};
	class 1Rnd_Leaflets_Custom_06_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_06";
	};
	class 1Rnd_Leaflets_Custom_07_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_07";
	};
	class 1Rnd_Leaflets_Custom_08_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_08";
	};
	class 1Rnd_Leaflets_Custom_09_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_09";
	};
	class 1Rnd_Leaflets_Custom_10_F: 1Rnd_Leaflets_West_F
	{
		leafletClass="Custom_10";
	};
	class 4Rnd_BombCluster_01_F: 4Rnd_Bomb_04_F
	{
		ammo="BombCluster_01_Ammo_F";
		displayName="$STR_A3_CfgMagazines_4Rnd_BombCluster_01_F0";
		descriptionShort="$STR_A3_cfgMagazine_CBU85_tooltip";
		displayNameShort="Cluster Bomb";
	};
	class 4Rnd_BombCluster_02_F: 4Rnd_BombCluster_01_F
	{
		ammo="BombCluster_02_Ammo_F";
		displayName="$STR_A3_CfgMagazines_4Rnd_BombCluster_02_F0";
		descriptionShort="$STR_A3_cfgMagazine_RBK500F_tooltip";
	};
	class 4Rnd_BombCluster_03_F: 4Rnd_BombCluster_01_F
	{
		ammo="BombCluster_03_Ammo_F";
		displayName="$STR_A3_CfgMagazines_4Rnd_BombCluster_03_F0";
		descriptionShort="$STR_A3_cfgMagazine_BL778_tooltip";
	};
	class PylonRack_4Rnd_BombDemine_01_F: 4Rnd_Bomb_04_F
	{
		ammo="BombDemine_01_Ammo_F";
		displayName="$STR_A3_PylonRack_4Rnd_BombDemine_01_F0";
		displayNameShort="$STR_A3_PylonRack_4Rnd_BombDemine_01_F0";
		descriptionShort="$STR_A3_PylonRack_4Rnd_BombDemine_01_F1";
		model="\a3\Weapons_F_Orange\DynamicLoadout\PylonRack_4x_BombDemine_01_F.p3d";
		hardpoints[]=
		{
			"ANTIMINE_DRONE_PYLON"
		};
		pylonWeapon="BombDemine_01_F";
		mass=10;
		initSpeed=0.1;
	};
	class PylonRack_4Rnd_BombDemine_01_Dummy_F: PylonRack_4Rnd_BombDemine_01_F
	{
		ammo="BombDemine_01_DummyAmmo_F";
		displayName="$STR_A3_PylonRack_4Rnd_BombDemine_01_Dummy_F0";
		displayNameShort="$STR_A3_PylonRack_4Rnd_BombDemine_01_Dummy_Short_F0";
		descriptionShort="$STR_A3_PylonRack_4Rnd_BombDemine_01_Dummy_F1";
	};
	class PylonMissile_1Rnd_BombCluster_01_F: PylonMissile_1Rnd_Bomb_04_F
	{
		ammo="BombCluster_01_Ammo_F";
		displayName="$STR_A3_PylonMissile_1Rnd_BombCluster_01_F0";
		displayNameShort="$STR_A3_cfgmagazines_bombcluster_short_01_f0";
		descriptionShort="$STR_A3_cfgMagazine_CBU85_tooltip";
		model="\a3\Weapons_F_Orange\DynamicLoadout\PylonMissile_1x_BombCluster_01_F.p3d";
		hardpoints[]=
		{
			"B_BOMB_PYLON",
			"B_GBU12",
			"I_GBU12"
		};
		pylonWeapon="BombCluster_01_F";
		mass=340;
		class mfdElements: mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="CBU";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="CBU";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class PylonRack_2Rnd_BombCluster_01_F: PylonMissile_1Rnd_BombCluster_01_F
	{
		count=2;
		displayName="$STR_A3_PylonRack_2Rnd_BombCluster_01_F0";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_DualRail_x2_F";
		hardpoints[]=
		{
			"B_GBU12_DUAL_RAIL",
			"I_GBU12_DUAL_RAIL"
		};
		class mfdElements: mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="CBU";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{0,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{0,0.0147436},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0127679},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0073717898},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0127679},
										1
									},
									
									{
										"Center2",
										{0,-0.0147436},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.020850601},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.020850601},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="CBU";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{0.015,6.4446298e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.0147436},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0104253},
											1
										},
										
										{
											"Center2",
											{-0.015,-1.75816e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0104253},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.0147436},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0104253},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_1Rnd_BombCluster_02_F: PylonMissile_1Rnd_BombCluster_01_F
	{
		ammo="BombCluster_02_Ammo_F";
		hardpoints[]=
		{
			"O_BOMB_PYLON_HELI"
		};
		pylonWeapon="BombCluster_02_F";
		displayName="$STR_A3_PylonMissile_1Rnd_BombCluster_02_F0";
		descriptionShort="$STR_A3_cfgMagazine_RBK500F_tooltip";
		mass=470;
		model="\a3\Weapons_F_Orange\DynamicLoadout\PylonMissile_1x_BombCluster_02_F.p3d";
		class mfdElements: mfdElements
		{
			class Plane_CAS_02
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class BlackBackgroundGroup
					{
						color[]={0,0,0};
						alpha=1;
						class BlackBackground
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.1,0.13},
										1
									},
									
									{
										{0.17,0.13},
										1
									},
									
									{
										{0.17,0.31},
										1
									},
									
									{
										{0.1,0.31},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="(PylonAmmoRelative>0.01) - PylonSelected";
						color[]={1,1,1};
						alpha=0.2;
						class Shape
						{
							type="polygon";
							texture="a3\Weapons_F_Orange\MFD\UI\icon_place_cas_02_bombcluster_02_ca.paa";
							points[]=
							{
								
								{
									
									{
										{0.1,0.1},
										1
									},
									
									{
										{0.18000001,0.1},
										1
									},
									
									{
										{0.18000001,0.34},
										1
									},
									
									{
										{0.1,0.34},
										1
									}
								}
							};
						};
					};
					class Selected: Default
					{
						color[]={0,0.12,0};
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
					};
				};
			};
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,0.039999999},
										1
									},
									
									{
										{0.16500001,0.039999999},
										1
									},
									
									{
										{0.16500001,0.11},
										1
									},
									
									{
										{0.13500001,0.11},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.164,0.13538501},
									1
								},
								
								{
									{0.164,0.115692},
									1
								},
								
								{
									{0.16,0.110769},
									1
								},
								
								{
									{0.16,0.049230799},
									1
								},
								
								{
									{0.14,0.049230799},
									1
								},
								
								{
									{0.14,0.110769},
									1
								},
								
								{
									{0.13600001,0.115692},
									1
								},
								
								{
									{0.13600001,0.13538501},
									1
								},
								
								{
									{0.164,0.13538501},
									1
								},
								{},
								
								{
									{0.154,0.049230799},
									1
								},
								
								{
									{0.154,0.0418461},
									1
								},
								{},
								
								{
									{0.146,0.049230799},
									1
								},
								
								{
									{0.146,0.0418461},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.059999999
								},
								1
							};
							right[]=
							{
								{0.175,0.059999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.085000001
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="B";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.079999998
								},
								1
							};
							right[]=
							{
								{0.175,0.079999998},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.105
								},
								1
							};
						};
						class PylonText3
						{
							type="text";
							source="static";
							text="K";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.1
								},
								1
							};
							right[]=
							{
								{0.175,0.1},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.125
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
						class PylonText3: PylonText3
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_1Rnd_BombCluster_02_cap_F: PylonMissile_1Rnd_BombCluster_02_F
	{
		mass=500;
		ammo="BombCluster_02_cap_Ammo_F";
		hardpoints[]=
		{
			"O_BOMB_PYLON",
			"O_KAB250_BOMB"
		};
	};
	class PylonMissile_1Rnd_BombCluster_03_F: PylonMissile_1Rnd_BombCluster_01_F
	{
		displayName="$STR_A3_PylonMissile_1Rnd_BombCluster_03_F0";
		descriptionShort="$STR_A3_cfgMagazine_BL778_tooltip";
		ammo="BombCluster_03_Ammo_F";
		hardpoints[]=
		{
			"B_BOMB_PYLON",
			"B_GBU12",
			"I_GBU12"
		};
		pylonWeapon="BombCluster_03_F";
		mass=264;
	};
	class PylonRack_2Rnd_BombCluster_03_F: PylonMissile_1Rnd_BombCluster_03_F
	{
		count=2;
		displayName="$STR_A3_PylonRack_2Rnd_BombCluster_03_F0";
		model="\A3\Weapons_F_Jets\Ammo\PylonPod_Bomb_GBU12_04_DualRail_x2_F";
		hardpoints[]=
		{
			"B_GBU12_DUAL_RAIL",
			"I_GBU12_DUAL_RAIL"
		};
		class mfdElements: mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.018461499},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0092307702},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0092307702},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0159877},
										1
									},
									
									{
										"Center",
										{0,0.018461499},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0159877},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0092307702},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0092307702},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center",
										{0,-0.018461499},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0130543},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.0261086},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0130543},
										1
									},
									
									{
										"Center",
										{0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0130543},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0130543},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.0261086},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.018461499},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0092307702},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0092307702},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0159877},
										1
									},
									
									{
										"Center2",
										{0,0.018461499},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0159877},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0092307702},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0092307702},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center2",
										{0,-0.018461499},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0130543},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.0261086},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0130543},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0130543},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0130543},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.0261086},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="CBU";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0130543},
											1
										},
										
										{
											"Center",
											{0.015,8.0697898e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0130543},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.018461499},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0130543},
											1
										},
										
										{
											"Center",
											{-0.015,-2.2015199e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0130543},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.018461499},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0130543},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0130543},
											1
										},
										
										{
											"Center2",
											{0.015,8.0697898e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0130543},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.018461499},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0130543},
											1
										},
										
										{
											"Center2",
											{-0.015,-2.2015199e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0130543},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.018461499},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0130543},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
			class Plane_Fighter_04
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0,-0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center",
										{0,-0.018461499},
										1
									},
									
									{
										"Center",
										{0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center",
										{0.01299,-0.0092307702},
										1
									},
									
									{
										"Center",
										{0.015,0},
										1
									},
									
									{
										"Center",
										{0.01299,0.0092307702},
										1
									},
									
									{
										"Center",
										{0.0074999998,0.0159877},
										1
									},
									
									{
										"Center",
										{0,0.018461499},
										1
									},
									
									{
										"Center",
										{-0.0074999998,0.0159877},
										1
									},
									
									{
										"Center",
										{-0.01299,0.0092307702},
										1
									},
									
									{
										"Center",
										{-0.015,0},
										1
									},
									
									{
										"Center",
										{-0.01299,-0.0092307702},
										1
									},
									
									{
										"Center",
										{-0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center",
										{0,-0.018461499},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,-0.0130543},
										1
									},
									
									{
										"Center",
										{0.0212132,-0.0261086},
										1
									},
									{},
									
									{
										"Center",
										{0.0106066,0.0130543},
										1
									},
									
									{
										"Center",
										{0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,0.0130543},
										1
									},
									
									{
										"Center",
										{-0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center",
										{-0.0106066,-0.0130543},
										1
									},
									
									{
										"Center",
										{-0.0212132,-0.0261086},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.018461499},
										1
									},
									
									{
										"Center2",
										{0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center2",
										{0.01299,-0.0092307702},
										1
									},
									
									{
										"Center2",
										{0.015,0},
										1
									},
									
									{
										"Center2",
										{0.01299,0.0092307702},
										1
									},
									
									{
										"Center2",
										{0.0074999998,0.0159877},
										1
									},
									
									{
										"Center2",
										{0,0.018461499},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,0.0159877},
										1
									},
									
									{
										"Center2",
										{-0.01299,0.0092307702},
										1
									},
									
									{
										"Center2",
										{-0.015,0},
										1
									},
									
									{
										"Center2",
										{-0.01299,-0.0092307702},
										1
									},
									
									{
										"Center2",
										{-0.0074999998,-0.0159877},
										1
									},
									
									{
										"Center2",
										{0,-0.018461499},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,-0.0130543},
										1
									},
									
									{
										"Center2",
										{0.0212132,-0.0261086},
										1
									},
									{},
									
									{
										"Center2",
										{0.0106066,0.0130543},
										1
									},
									
									{
										"Center2",
										{0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,0.0130543},
										1
									},
									
									{
										"Center2",
										{-0.0212132,0.0261086},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0106066,-0.0130543},
										1
									},
									
									{
										"Center2",
										{-0.0212132,-0.0261086},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="CBU";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/2)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0130543},
											1
										},
										
										{
											"Center",
											{0.015,8.0697898e-010},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{0.0106066,0.0130543},
											1
										},
										
										{
											"Center",
											{-1.31134e-009,0.018461499},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,0.0130543},
											1
										},
										
										{
											"Center",
											{-0.015,-2.2015199e-010},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center",
											1,
											{0,0},
											1
										},
										
										{
											"Center",
											{-0.0106066,-0.0130543},
											1
										},
										
										{
											"Center",
											{2.6226801e-009,-0.018461499},
											1
										},
										
										{
											"Center",
											{0.0106066,-0.0130543},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0130543},
											1
										},
										
										{
											"Center2",
											{0.015,8.0697898e-010},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0106066,0.0130543},
											1
										},
										
										{
											"Center2",
											{-1.31134e-009,0.018461499},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,0.0130543},
											1
										},
										
										{
											"Center2",
											{-0.015,-2.2015199e-010},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0130543},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0106066,-0.0130543},
											1
										},
										
										{
											"Center2",
											{2.6226801e-009,-0.018461499},
											1
										},
										
										{
											"Center2",
											{0.0106066,-0.0130543},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmoRelative <= 1";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class Pylon_1Rnd_Leaflets_West_F: 1Rnd_Leaflets_West_F
	{
		model="a3\Weapons_F\empty.p3d";
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_West_F0";
		descriptionShort="$STR_A3_Pylon_1Rnd_Leaflets_West_F1";
		leafletClass="West";
		hardpoints[]=
		{
			"UNI_LEAFLETS_PYLON"
		};
		pylonWeapon="Bomb_Leaflets";
		mass=1;
	};
	class Pylon_1Rnd_Leaflets_East_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_East_F0";
		leafletClass="East";
	};
	class Pylon_1Rnd_Leaflets_Guer_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Guer_F0";
		leafletClass="Guer";
	};
	class Pylon_1Rnd_Leaflets_Civ_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Civ_F0";
		leafletClass="Civ";
	};
	class Pylon_1Rnd_Leaflets_Custom_01_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_01_F0";
		leafletClass="Custom 01";
	};
	class Pylon_1Rnd_Leaflets_Custom_02_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_02_F0";
		leafletClass="Custom 02";
	};
	class Pylon_1Rnd_Leaflets_Custom_03_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_03_F0";
		leafletClass="Custom 03";
	};
	class Pylon_1Rnd_Leaflets_Custom_04_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_04_F0";
		leafletClass="Custom 04";
	};
	class Pylon_1Rnd_Leaflets_Custom_05_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_05_F0";
		leafletClass="Custom 05";
	};
	class Pylon_1Rnd_Leaflets_Custom_06_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_06_F0";
		leafletClass="Custom 06";
	};
	class Pylon_1Rnd_Leaflets_Custom_07_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_07_F0";
		leafletClass="Custom 07";
	};
	class Pylon_1Rnd_Leaflets_Custom_08_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_08_F0";
		leafletClass="Custom 08";
	};
	class Pylon_1Rnd_Leaflets_Custom_09_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_09_F0";
		leafletClass="Custom 09";
	};
	class Pylon_1Rnd_Leaflets_Custom_10_F: Pylon_1Rnd_Leaflets_West_F
	{
		displayName="$STR_A3_Pylon_1Rnd_Leaflets_Custom_10_F0";
		leafletClass="Custom 10";
	};
	class APERSMineDispenser_Mag: SatchelCharge_Remote_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		mass=60;
		ammo="APERSMineDispenser_Ammo";
		picture="\A3\Weapons_F_Orange\Explosives\Data\UI\gear_APERSmineDispenser_CA.paa";
		model="\A3\Weapons_F_Orange\Explosives\APERSmineDispenser_i";
		displayName="$STR_A3_CfgMagazines_APERSMineDispenser_Mag0";
		displayNameShort="Mine Dispenser descr. short";
		class Library
		{
			libTextDesc="$STR_A3_CfgMagazines_APERSMineDispenser_Mag_Library0";
		};
		ace_explosives_SetupObject="ACE_Explosives_Place_APERSMineDispenser";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Timer",
				"Command",
				"MK16_Transmitter"
			};
			class Timer
			{
				FuseTime=0.5;
			};
			class Command
			{
				FuseTime=0.5;
			};
			class MK16_Transmitter: Command
			{
			};
		};
	};
	class TrainingMine_Mag: APERSMine_Range_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		mass=15;
		ammo="TrainingMine_Ammo";
		picture="\A3\Weapons_F_Orange\Explosives\Data\UI\gear_TrainingMine_CA.paa";
		model="\A3\Weapons_F_Orange\Explosives\TrainingMine_F";
		displayName="$STR_A3_CfgMagazines_TrainingMine_Mag0";
		displayNameShort="Dummy Mine descr. short";
		class Library
		{
			libTextDesc="$STR_A3_CfgMagazines_TrainingMine_Mag_Library0";
		};
		ace_explosives_SetupObject="ACE_Explosives_Place_TrainingMine";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"PressurePlate"
			};
			class PressurePlate
			{
				digDistance=0.02;
			};
		};
	};
	class 200Rnd_338_Mag: 130Rnd_338_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		displayNameMFDFormat="COAX";
		count=200;
		nameSound="mgun";
	};
	class 4Rnd_120mm_cannon_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_4Rnd_120mm_cannon_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_ATGM0";
		count=4;
		ammo="M_120mm_cannon_ATGM";
		initspeed=120;
		maxLeadSpeed=27.7778;
		nameSound="missiles";
		displayNameMFDFormat="MISL";
	};
	class 4Rnd_120mm_LG_cannon_missiles: 4Rnd_120mm_cannon_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_4Rnd_120mm_LG_cannon_missiles0";
		displayNameShort="$STR_A3_CfgMagazines_LG_ATGM0";
		ammo="M_120mm_cannon_ATGM_LG";
	};
	class 4Rnd_125mm_cannon_missiles: 4Rnd_120mm_cannon_missiles
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_4Rnd_125mm_cannon_missiles0";
		count=4;
		ammo="M_125mm_cannon_ATGM";
		displayNameMFDFormat="Р";
	};
	class 60Rnd_30mm_MP_shells_Tracer_Green: 140Rnd_30mm_MP_shells_Tracer_Green
	{
		author="$STR_A3_Bohemia_Interactive";
		count=60;
	};
	class Vorona_HEAT: CA_LauncherMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_Vorona_HEAT0";
		displayNameShort="$STR_A3_heat_0";
		descriptionShort="$STR_A3_CfgMagazines_Vorona_HEAT_descriptionshort0";
		type="6 * 		256";
		model="A3\Weapons_F_Tank\Launchers\Vorona\Vorona_tube_heat.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HEAT_F_ca.paa";
		mass=100;
		count=1;
		initSpeed=150;
		maxLeadSpeed=27.7778;
		ammo="ace_metis_HEAT";
	};
	class Vorona_HE: Vorona_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_Vorona_HE0";
		displayNameShort="$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		descriptionShort="$STR_A3_CfgMagazines_Vorona_HE_descriptionshort0";
		model="A3\Weapons_F_Tank\Launchers\Vorona\Vorona_tube_he.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HE_F_ca.paa";
		mass=100;
		initSpeed=150;
		maxLeadSpeed=27.7778;
		ammo="ace_metis_HE";
	};
	class SPG9_HEAT: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_SPG9_HEAT0";
		displayNameShort="$STR_A3_heat_0";
		ammo="M_SPG9_HEAT";
		type="6 * 		256";
		model="\a3\Weapons_F_Tank\Ammo\rocket_spg9_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HEAT_F_ca.paa";
		mass=10;
		count=1;
		initSpeed=435;
		descriptionShort="TODO";
		muzzleImpulseFactor[]={0,0};
	};
	class 12rnd_SPG9_HEAT: SPG9_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		count=12;
	};
	class SPG9_HE: SPG9_HEAT
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_SPG9_HE0";
		displayNameShort="$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		ammo="M_SPG9_HE";
		type="6 * 		256";
		model="\a3\Weapons_F_Tank\Ammo\rocket_spg9_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\Vorona\Data\UI\icon_rocket_vorona_HE_F_ca.paa";
		mass=10;
		count=1;
		initSpeed=435;
		descriptionShort="TODO";
	};
	class 8rnd_SPG9_HE: SPG9_HE
	{
		author="$STR_A3_Bohemia_Interactive";
		count=8;
	};
	class 4Rnd_70mm_SAAMI_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_4Rnd_70mm_SAAMI_missiles0";
		displayNameShort="$STR_A3_cfgmagazines_titan_aa_dns";
		count=4;
		ammo="M_70mm_SAAMI";
		initspeed=120;
		maxLeadSpeed=277.77802;
		nameSound="missiles";
	};
	class 2Rnd_127mm_Firefist_missiles: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_2Rnd_127mm_Firefist_missiles0";
		displayNameShort="$STR_A3_cfgmagazines_titan_at_dns";
		count=2;
		ammo="M_127mm_Firefist_AT";
		initspeed=19;
		maxLeadSpeed=55.555599;
		nameSound="missiles";
	};
	class MRAWS_HEAT_F: CA_LauncherMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_MRAWS_HEAT_F0";
		displaynameshort="$STR_A3_heat_0";
		descriptionShort="$STR_A3_CfgMagazines_MRAWS_HEAT_descriptionshort0";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT_F_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT_F_ca.paa";
		initSpeed=350;
		ammo="R_MRAAWS_HEAT_F";
		type="2*		256";
		mass=60;
	};
	class MRAWS_HE_F: MRAWS_HEAT_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_CfgMagazines_MRAWS_HE_F0";
		displayNameShort="$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		descriptionShort="$STR_A3_CfgMagazines_MRAWS_HE_descriptionshort0";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HE_F_ca.paa";
		initSpeed=350;
		ammo="R_MRAAWS_HE_F";
		mass=40;
	};
	class MRAWS_HEAT55_F: MRAWS_HEAT_F
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="MAAWS HEAT 55 Round";
		displayNameShort="$STR_A3_heat_0";
		descriptionShort="$STR_A3_CfgMagazines_MRAWS_HEAT_descriptionshort0";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT55_F_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT55_F_ca.paa";
		initSpeed=350;
		ammo="R_MRAAWS_HEAT55_F";
		mass=50;
	};
	class 60Rnd_20mm_HE_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		displayNameShort="$STR_A3_CfgMagazines_300Rnd_20mm_shells_dns";
		ammo="B_20mm";
		count=60;
		initSpeed=1044;
		maxLeadSpeed=30.555599;
		tracersEvery=5;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.1,0.80000001};
	};
	class 60Rnd_20mm_AP_shells: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_CfgMagazines_1000Rnd_20mm_shells0";
		displayNameShort="$STR_A3_cfgmagazines_titan_ap_dns";
		ammo="B_20mm_AP";
		count=60;
		initSpeed=1100;
		maxLeadSpeed=30.555599;
		tracersEvery=5;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.1,0.80000001};
	};
	class magazine_Missiles_Cruise_01_x18: VehicleMagazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="$STR_A3_Missile_Cruise_HE_x18_magazine_name";
		displayNameShort="$STR_A3_Missile_Cruise_HE_x18_magazine_shortName";
		descriptionShort="$STR_A3_Missile_Cruise_HE_x18_magazine_description";
		ammo="ammo_Missile_Cruise_01";
		initSpeed=12;
		maxLeadSpeed=1.38889;
		count=18;
		nameSound="missiles";
	};
	class magazine_Missiles_Cruise_01_Cluster_x18: magazine_Missiles_Cruise_01_x18
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Missile_Cruise_C_x18_magazine_name";
		displayNameShort="$STR_A3_Missile_Cruise_C_x18_magazine_shortName";
		descriptionShort="$STR_A3_Missile_Cruise_C_x18_magazine_description";
		ammo="ammo_Missile_Cruise_01_Cluster";
	};
	class magazine_ShipCannon_120mm_HE_shells_x32: 32Rnd_155mm_Mo_shells
	{
		displayName="$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells0";
		displayNameShort="$STR_A3_CfgMagazines_30Rnd_120mm_HE_shells_dns";
		ammo="ammo_ShipCannon_120mm_HE";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_smoke_shells_x6: 6Rnd_155mm_Mo_smoke
	{
		ammo="ammo_ShipCannon_120mm_smoke";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_HE_guided_shells_x2: 2Rnd_155mm_Mo_guided
	{
		ammo="ammo_ShipCannon_120mm_HE_guided";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_HE_LG_shells_x2: 2Rnd_155mm_Mo_LG
	{
		ammo="ammo_ShipCannon_120mm_HE_LG";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_mine_shells_x6: 6Rnd_155mm_Mo_mine
	{
		ammo="ammo_ShipCannon_120mm_mine";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_HE_cluster_shells_x2: 2Rnd_155mm_Mo_Cluster
	{
		ammo="ammo_ShipCannon_120mm_HE_cluster";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_ShipCannon_120mm_AT_mine_shells_x6: 6Rnd_155mm_Mo_AT_mine
	{
		ammo="ammo_ShipCannon_120mm_AT_mine";
		muzzleImpulseFactor[]={1e-006,1e-006};
	};
	class magazine_Missile_mim145_x4: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_mim145_x4_magazine_name";
		displayNameShort="$STR_A3_Missile_mim145_x4_magazine_shortName";
		descriptionShort="$STR_A3_Missile_mim145_x4_magazine_description";
		ammo="ammo_Missile_mim145";
		count=4;
		initSpeed=45;
		maxLeadSpeed=1800;
		sound[]=
		{
			"A3\Sounds_F\weapons\Rockets\titan_2",
			1.25893,
			1,
			1000
		};
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			0.50118703,
			1.3,
			400
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1,
			20
		};
		soundHit[]=
		{
			"",
			1.25893,
			1,
			1
		};
		nameSound="missiles";
	};
	class magazine_Missile_s750_x4: magazine_Missile_mim145_x4
	{
		displayName="$STR_A3_Missile_S750_x4_magazine_name";
		displayNameShort="$STR_A3_Missile_S750_x4_magazine_shortName";
		descriptionShort="$STR_A3_Missile_S750_x4_magazine_description";
		ammo="ammo_Missile_s750";
	};
	class magazine_Missile_HARM_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_HARM_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_HARM_x1_magazine_shortName";
		descriptionShort="$STR_A3_Missile_HARM_x1_magazine_description";
		count=1;
		ammo="ammo_Missile_HARM";
		initSpeed=0;
		maxLeadSpeed=60;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="HARM";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class magazine_Bomb_SDB_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Bomb_SDB_x1_magazine_name";
		descriptionShort="$STR_A3_Bomb_SDB_magazine_description";
		displayNameShort="$STR_A3_Bomb_SDB_magazine_shortName";
		ammo="ammo_Bomb_SDB";
		initSpeed=0;
		maxLeadSpeed=60;
		sound[]=
		{
			"",
			1,
			1
		};
		reloadSound[]=
		{
			"",
			0.00031622799,
			1
		};
		count=1;
		nameSound="";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{0,0.0147436},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0127679},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0073717898},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0127679},
									1
								},
								
								{
									"Center",
									{0,-0.0147436},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.020850601},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0104253},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.020850601},
									1
								},
								{}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="SDB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.02},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.02},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.064999998},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{0.015,6.4446298e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0147436},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0104253},
										1
									},
									
									{
										"Center",
										{-0.015,-1.75816e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0104253},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0147436},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0104253},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class Background: Background
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_HARM_x1: magazine_Missile_HARM_x1
	{
		count=1;
		model="\A3\Weapons_F_Sams\Ammo\PylonPod_Missile_AR_01_x1_F";
		hardpoints[]=
		{
			"B_HARM",
			"I_HARM"
		};
		pylonWeapon="weapon_HARMLauncher";
	};
	class PylonRack_Missile_HARM_x1: magazine_Missile_HARM_x1
	{
		count=1;
		model="\A3\Weapons_F_Sams\Ammo\PylonPod_Missile_AR_01_Rail_x1_F";
		hardpoints[]=
		{
			"B_HARM_RAIL",
			"I_HARM_RAIL"
		};
		pylonWeapon="weapon_HARMLauncher";
		ejectSpeed[]={1,0,0};
	};
	class PylonMissile_Missile_HARM_INT_x1: magazine_Missile_HARM_x1
	{
		count=1;
		model="\A3\Weapons_F_Sams\Ammo\PylonPod_Missile_AR_01_x1_F";
		hardpoints[]=
		{
			"B_HARM_INT",
			"I_HARM_INT"
		};
		pylonWeapon="weapon_HARMLauncher";
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class PylonRack_Bomb_SDB_x4: magazine_Bomb_SDB_x1
	{
		count=4;
		displayName="$STR_A3_Bomb_SDB_x4_magazine_name";
		model="\A3\Weapons_F_Sams\Ammo\PylonPod_Bomb_05_x4_F";
		hardpoints[]=
		{
			"B_SDB_QUAD_RAIL"
		};
		pylonWeapon="weapon_SDBLauncher";
		class mfdElements
		{
			class Plane_Fighter_01
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
					class Center1
					{
						type="fixed";
						pos[]={-0.02,0};
					};
					class Center2
					{
						type="fixed";
						pos[]={0.02,0};
					};
					class Center3
					{
						type="fixed";
						pos[]={-0.02,0.050000001};
					};
					class Center4
					{
						type="fixed";
						pos[]={0.02,0.050000001};
					};
				};
				class Draw
				{
					class Default
					{
						condition="PylonAmmoRelative>0";
						color[]={0,0.12,0};
						alpha=0.22;
						class Missile1
						{
							condition="PylonAmmo>=1";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center1",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center1",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center1",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center1",
										{0.0099999998,0},
										1
									},
									
									{
										"Center1",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center1",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center1",
										{0,0.0098290602},
										1
									},
									
									{
										"Center1",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center1",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center1",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center1",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center1",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center1",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center1",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center1",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center1",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center1",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center1",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center1",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center1",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center1",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class Missile2
						{
							condition="PylonAmmo>=2";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center2",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,0.0098290602},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center2",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center2",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center2",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center2",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center2",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class Missile3
						{
							condition="PylonAmmo>=3";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center3",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center3",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center3",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center3",
										{0.0099999998,0},
										1
									},
									
									{
										"Center3",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center3",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center3",
										{0,0.0098290602},
										1
									},
									
									{
										"Center3",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center3",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center3",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center3",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center3",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center3",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center3",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center3",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center3",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center3",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center3",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center3",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center3",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center3",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class Missile4
						{
							condition="PylonAmmo>=4";
							class Shape
							{
								type="line";
								width=4;
								points[]=
								{
									
									{
										"Center4",
										{0,-0.0098290602},
										1
									},
									
									{
										"Center4",
										{0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center4",
										{0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center4",
										{0.0099999998,0},
										1
									},
									
									{
										"Center4",
										{0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center4",
										{0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center4",
										{0,0.0098290602},
										1
									},
									
									{
										"Center4",
										{-0.0049999999,0.0085119698},
										1
									},
									
									{
										"Center4",
										{-0.0086599998,0.0049145301},
										1
									},
									
									{
										"Center4",
										{-0.0099999998,0},
										1
									},
									
									{
										"Center4",
										{-0.0086599998,-0.0049145301},
										1
									},
									
									{
										"Center4",
										{-0.0049999999,-0.0085119698},
										1
									},
									
									{
										"Center4",
										{0,-0.0098290602},
										1
									},
									{},
									
									{
										"Center4",
										{0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center4",
										{0.0141421,-0.0139004},
										1
									},
									{},
									
									{
										"Center4",
										{0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center4",
										{0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center4",
										{-0.0070710699,0.0069501898},
										1
									},
									
									{
										"Center4",
										{-0.0141421,0.0139004},
										1
									},
									{},
									
									{
										"Center4",
										{-0.0070710699,-0.0069501898},
										1
									},
									
									{
										"Center4",
										{-0.0141421,-0.0139004},
										1
									},
									{}
								};
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="SDB";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								"Center",
								1,
								{-0.0049999999,0.07},
								1
							};
							right[]=
							{
								"Center",
								1,
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"Center",
								1,
								{-0.0049999999,0.115},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmo/4)/2";
						alpha=1;
						class Missile1: Missile1
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center1",
											1,
											{0,0},
											1
										},
										
										{
											"Center1",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center1",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center1",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center1",
											1,
											{0,0},
											1
										},
										
										{
											"Center1",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center1",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center1",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center1",
											1,
											{0,0},
											1
										},
										
										{
											"Center1",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center1",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center1",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center1",
											1,
											{0,0},
											1
										},
										
										{
											"Center1",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center1",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center1",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class Missile2: Missile2
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center2",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center2",
											1,
											{0,0},
											1
										},
										
										{
											"Center2",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center2",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center2",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class Missile3: Missile3
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center3",
											1,
											{0,0},
											1
										},
										
										{
											"Center3",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center3",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center3",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center3",
											1,
											{0,0},
											1
										},
										
										{
											"Center3",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center3",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center3",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center3",
											1,
											{0,0},
											1
										},
										
										{
											"Center3",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center3",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center3",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center3",
											1,
											{0,0},
											1
										},
										
										{
											"Center3",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center3",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center3",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class Missile4: Missile4
						{
							class Shape: Shape
							{
							};
							class Background
							{
								type="polygon";
								points[]=
								{
									
									{
										
										{
											"Center4",
											1,
											{0,0},
											1
										},
										
										{
											"Center4",
											{0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center4",
											{0.0099999998,4.2964199e-010},
											1
										},
										
										{
											"Center4",
											{0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center4",
											1,
											{0,0},
											1
										},
										
										{
											"Center4",
											{0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center4",
											{-8.7422802e-010,0.0098290602},
											1
										},
										
										{
											"Center4",
											{-0.0070710699,0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center4",
											1,
											{0,0},
											1
										},
										
										{
											"Center4",
											{-0.0070710699,0.0069501898},
											1
										},
										
										{
											"Center4",
											{-0.0099999998,-1.1721001e-010},
											1
										},
										
										{
											"Center4",
											{-0.0070710699,-0.0069501898},
											1
										}
									},
									
									{
										
										{
											"Center4",
											1,
											{0,0},
											1
										},
										
										{
											"Center4",
											{-0.0070710699,-0.0069501898},
											1
										},
										
										{
											"Center4",
											{1.74846e-009,-0.0098290602},
											1
										},
										
										{
											"Center4",
											{0.0070710699,-0.0069501898},
											1
										}
									}
								};
							};
						};
						class PylonText1: PylonText1
						{
						};
					};
					class HalfEmpty: Selected
					{
						alpha=0.15000001;
						condition="PylonAmmo <= 3";
						color[]={1,0,0,1};
						class Missile1: Missile1
						{
							condition="PylonAmmo<=0";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile2: Missile2
						{
							condition="PylonAmmo<=1";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile3: Missile3
						{
							condition="PylonAmmo<=2";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
						class Missile4: Missile4
						{
							condition="PylonAmmo<=4";
							class Shape: Shape
							{
							};
							class Background: Background
							{
							};
						};
					};
					class Empty: HalfEmpty
					{
						condition="PylonAmmoRelative <= 0";
						class PylonText1: PylonText1
						{
						};
					};
				};
			};
		};
	};
	class magazine_Missile_KH58_x1: VehicleMagazine
	{
		scope=2;
		displayName="$STR_A3_Missile_KH58_x1_magazine_name";
		displayNameShort="$STR_A3_Missile_KH58_x1_magazine_shortName";
		descriptionShort="$STR_A3_Missile_KH58_x1_magazine_description";
		count=1;
		ammo="ammo_Missile_KH58";
		initSpeed=0;
		maxLeadSpeed=60;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			31.622801,
			1,
			1100
		};
		soundFly[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1.1,
			700
		};
		soundHit[]=
		{
			"A3\sounds_f\dummysound",
			15.848932,
			1,
			2000
		};
		reloadSound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			20
		};
		nameSound="missiles";
		class mfdElements
		{
			class Plane_Fighter_02
			{
				class Bones
				{
				};
				class Draw
				{
					class BackgroundGroup
					{
						color[]={0,0,0};
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.13500001,-0.025},
										1
									},
									
									{
										{0.16500001,-0.025},
										1
									},
									
									{
										{0.16500001,0.175},
										1
									},
									
									{
										{0.13500001,0.175},
										1
									}
								}
							};
						};
					};
					class Default
					{
						condition="PylonAmmoRelative>0+PylonSelected";
						color[]={0.94,0.82999998,0};
						alpha=0.22;
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.15307701,0.14503001},
									1
								},
								
								{
									{0.15653799,0.141716},
									1
								},
								
								{
									{0.15923101,0.141716},
									1
								},
								
								{
									{0.15923101,0.113314},
									1
								},
								
								{
									{0.155385,0.110473},
									1
								},
								
								{
									{0.155385,0.0560355},
									1
								},
								
								{
									{0.16,0.0560355},
									1
								},
								
								{
									{0.16,0.052721899},
									1
								},
								
								{
									{0.15653799,0.044674601},
									1
								},
								
								{
									{0.15615401,0.034733701},
									1
								},
								
								{
									{0.15576901,0.0228994},
									1
								},
								
								{
									{0.155385,0.0176923},
									1
								},
								
								{
									{0.154231,0.0134319},
									1
								},
								
								{
									{0.15307701,0.0110651},
									1
								},
								
								{
									{0.151923,0.0091716005},
									1
								},
								
								{
									{0.150769,0.0082248496},
									1
								},
								
								{
									{0.149615,0.0082248496},
									1
								},
								
								{
									{0.149231,0.0082248496},
									1
								},
								
								{
									{0.14769199,0.0082248496},
									1
								},
								
								{
									{0.146538,0.0091716005},
									1
								},
								
								{
									{0.145385,0.0110651},
									1
								},
								
								{
									{0.14461499,0.0134319},
									1
								},
								
								{
									{0.143462,0.0176923},
									1
								},
								
								{
									{0.142692,0.0228994},
									1
								},
								
								{
									{0.142692,0.034733701},
									1
								},
								
								{
									{0.142308,0.044674601},
									1
								},
								
								{
									{0.13846201,0.052721899},
									1
								},
								
								{
									{0.13846201,0.0560355},
									1
								},
								
								{
									{0.143462,0.0560355},
									1
								},
								
								{
									{0.143462,0.110473},
									1
								},
								
								{
									{0.139231,0.113314},
									1
								},
								
								{
									{0.139231,0.141716},
									1
								},
								
								{
									{0.142308,0.141716},
									1
								},
								
								{
									{0.145385,0.14503001},
									1
								},
								
								{
									{0.15307701,0.14503001},
									1
								}
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="A";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.0099999998
								},
								1
							};
							right[]=
							{
								{0.17,0.0099999998},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.035
								},
								1
							};
						};
						class PylonText2
						{
							type="text";
							source="static";
							text="R";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								
								{
									"0.00+0.15",
									0.029999999
								},
								1
							};
							right[]=
							{
								{0.17,0.029999999},
								1
							};
							down[]=
							{
								
								{
									"0.00+0.15",
									0.055
								},
								1
							};
						};
					};
					class Selected: Default
					{
						condition="(PylonSelected +  PylonAmmoRelative)/2";
						alpha=1;
						color[]={0,0.12,0};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
					class Empty: Selected
					{
						condition="PylonAmmoRelative <= 0";
						color[]={1,0,0,1};
						class Shape: Shape
						{
						};
						class PylonText1: PylonText1
						{
						};
						class PylonText2: PylonText2
						{
						};
					};
				};
			};
		};
	};
	class PylonMissile_Missile_KH58_x1: magazine_Missile_KH58_x1
	{
		count=1;
		model="\A3\Weapons_F_Sams\Ammo\PylonPod_Missile_AR_02_x1_F";
		hardpoints[]=
		{
			"O_KH58"
		};
		pylonWeapon="weapon_KH58Launcher";
	};
	class PylonMissile_Missile_KH58_INT_x1: magazine_Missile_KH58_x1
	{
		count=1;
		model="\A3\Weapons_F_Sams\Ammo\PylonPod_Missile_AR_02_x1_F";
		hardpoints[]=
		{
			"O_KH58_INT"
		};
		pylonWeapon="weapon_KH58Launcher";
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class 75Rnd_762x39_Mag_F: 30Rnd_762x39_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		DLC="Enoch";
		displayName="$STR_A3_C_CfgMagazines_75Rnd_762x39_Mag_F0";
		descriptionShort="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Mag_F1";
		count=75;
		mass=26;
		modelSpecial="a3\Weapons_F_Enoch\MagazineProxies\mag_762x39_akm_75rnd";
		reloadAction="GestureReloadAK12_Drum";
	};
	class 75Rnd_762x39_Mag_Tracer_F: 75Rnd_762x39_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_75Rnd_762x39_Mag_Tracer_F0";
		tracersEvery=1;
	};
	class 30Rnd_762x39_AK12_Mag_Green_F
	{
	};
	class 30Rnd_762x39_AK12_Mag_Tracer_Green_F
	{
	};
	class 30rnd_762x39_AK12_Lush_Mag_F: 30Rnd_762x39_AK12_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Lush_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_30rnd_762x39_AK12_Lush_Mag_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_Khaki_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_Khaki.rvmat"
		};
	};
	class 30rnd_762x39_AK12_Lush_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_Tracer_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Lush_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_30rnd_762x39_AK12_Lush_Mag_Tracer_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_Khaki_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_Khaki.rvmat"
		};
	};
	class 30rnd_762x39_AK12_Arid_Mag_F: 30Rnd_762x39_AK12_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Arid_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_30rnd_762x39_AK12_Arid_Mag_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_camo_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"
		};
	};
	class 30rnd_762x39_AK12_Arid_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_Tracer_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30rnd_762x39_AK12_Arid_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_30rnd_762x39_AK12_Arid_Mag_Tracer_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\ak12_ak12_2_camo_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_F_2_camo.rvmat"
		};
	};
	class 75rnd_762x39_AK12_Mag_F: 30Rnd_762x39_AK12_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		DLC="Enoch";
		displayName="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Mag_F0";
		descriptionShort="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Mag_F1";
		count=75;
		mass=26;
		modelSpecial="a3\Weapons_F_Enoch\MagazineProxies\mag_762x39_ak12_75rnd";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"
		};
		reloadAction="GestureReloadAK12_Drum";
	};
	class 75rnd_762x39_AK12_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Mag_Tracer_F0";
		displayNameShort="$STR_A3_TRACER_DNS";
		tracersEvery=1;
		lastRoundsTracer=30;
	};
	class 75rnd_762x39_AK12_Lush_Mag_F: 75rnd_762x39_AK12_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Lush_Mag_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"
		};
	};
	class 75rnd_762x39_AK12_Lush_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_Tracer_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Lush_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Lush_Mag_Tracer_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_Khaki_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_Khaki.rvmat"
		};
	};
	class 75rnd_762x39_AK12_Arid_Mag_F: 75rnd_762x39_AK12_Mag_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Arid_Mag_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"
		};
	};
	class 75rnd_762x39_AK12_Arid_Mag_Tracer_F: 75rnd_762x39_AK12_Mag_Tracer_F
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75rnd_762x39_AK12_Arid_Mag_Tracer_F_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_75rnd_762x39_AK12_Arid_Mag_Tracer_F0";
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AKU12_RPK12_parts_camo_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"a3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12_camo.rvmat"
		};
	};
	class 10Rnd_Mk14_762x51_Mag: 20Rnd_762x51_Mag
	{
		author="$STR_A3_Bohemia_Interactive";
		DLC="Enoch";
		displayName="$STR_A3_C_CfgMagazines_10Rnd_Mk14_762x51_Mag0";
		descriptionShort="$STR_A3_C_CfgMagazines_10Rnd_Mk14_762x51_Mag1";
		count=10;
		mass=6;
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_10Rnd_Mk14_762x51_Mag_ca.paa";
		modelSpecial="a3\Weapons_F_Enoch\MagazineProxies\mag_762x51_mk14_10rnd";
	};
	class 30Rnd_65x39_caseless_msbs_mag: 30Rnd_65x39_caseless_mag
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		DLC="Enoch";
		displayName="$STR_A3_C_CfgMagazines_30Rnd_65x39_caseless_msbs_mag0";
		modelSpecial="a3\Weapons_F_Enoch\MagazineProxies\mag_65x39c_msbs_30rnd.p3d";
		hiddenSelections[]={};
	};
	class 30Rnd_65x39_caseless_msbs_mag_Tracer: 30Rnd_65x39_caseless_msbs_mag
	{
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_msbs_mag_Tracer_CA.paa";
		author="$STR_A3_Bohemia_Interactive";
		DLC="Enoch";
		displayName="$STR_A3_C_CfgMagazines_30Rnd_65x39_caseless_msbs_mag_Tracer0";
		displayNameShort="$STR_A3_TRACER_DNS";
		tracersEvery=1;
	};
	class 2Rnd_12Gauge_Pellets: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		DLC="Enoch";
		scope=2;
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_CA.paa";
		ammo="B_12Gauge_Pellets_Submunition";
		initSpeed=380;
		count=2;
		mass=6;
		modelSpecialIsProxy=1;
		modelSpecial="a3\Weapons_F_Enoch\MagazineProxies\mag_12ga_hunter_2rnd";
		hiddenSelections[]=
		{
			"camo",
			"cap1"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\Weapons_F_Enoch\MagazineProxies\data\12GA_Pellets_CO.paa"
		};
		displayName="$STR_ace_ballistics_2Rnd_12Gauge_Pellets_No00_Buck_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No00_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No00_Buck_Description";
	};
	class 2Rnd_12Gauge_Slug: 2Rnd_12Gauge_Pellets
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug0";
		displayNameShort="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1";
		descriptionShort="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1";
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_2rnd_12gauge_slugs_CA.paa";
		ammo="B_12Gauge_Slug_NoCartridge";
		initSpeed=450;
		hiddenSelections[]=
		{
			"camo",
			"cap2"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\Weapons_F_Enoch\MagazineProxies\data\12GA_Slug_CO.paa"
		};
	};
	class 6Rnd_12Gauge_Pellets: 2Rnd_12Gauge_Pellets
	{
		author="$STR_A3_Bohemia_Interactive";
		count=6;
		mass=12;
		initSpeed=380;
		modelSpecial="a3\Weapons_F_Enoch\MagazineProxies\mag_12ga_hunter_2rnd";
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_6Rnd_12Gauge_Pellets_ca.paa";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		displayName="$STR_ace_ballistics_6Rnd_12Gauge_Pellets_No00_Buck_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No00_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No00_Buck_Description";
	};
	class 6Rnd_12Gauge_Slug: 2Rnd_12Gauge_Pellets
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_6Rnd_12Gauge_Slug0";
		displayNameShort="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1";
		descriptionShort="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1";
		picture="\a3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_6Rnd_12Gauge_Slug_ca.paa";
		ammo="B_12Gauge_Slug_NoCartridge";
		initSpeed=450;
		count=6;
		hiddenSelectionsTextures[]={};
	};
	class 15Rnd_12Gauge_Pellets: 6Rnd_12Gauge_Pellets
	{
		scope=1;
		count=15;
		initSpeed=380;
		ammo="B_12Gauge_HD_Pellets_Submunition";
		muzzleImpulseFactor[]={0.30000001,1};
		displayName="$STR_ace_ballistics_15Rnd_12Gauge_Pellets_No00_Buck_Name";
		displayNameShort="$STR_ace_ballistics_12Gauge_Pellets_No00_Buck_NameShort";
		descriptionShort="$STR_ace_ballistics_12Gauge_Pellets_No00_Buck_Description";
	};
	class 15Rnd_12Gauge_Slug: 15Rnd_12Gauge_Pellets
	{
		scope=1;
		displayName="$STR_A3_C_CfgMagazines_15Rnd_12Gauge_Slug0";
		displayNameShort="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1";
		descriptionShort="$STR_A3_C_CfgMagazines_2Rnd_12Gauge_Slug1";
		ammo="B_12Gauge_Slug_NoCartridge";
		initSpeed=450;
	};
	class O_R_IR_Grenade: O_IR_Grenade
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_O_R_IR_Grenade0";
		descriptionShort="$STR_A3_C_CfgMagazines_O_R_IR_Grenade1";
	};
	class I_E_IR_Grenade: I_IR_Grenade
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_C_CfgMagazines_I_E_IR_Grenade0";
		descriptionShort="$STR_A3_C_CfgMagazines_I_E_IR_Grenade1";
	};
	class ProbingWeapon_01_magazine: CA_Magazine
	{
		displayName="";
		ammo="ProbingBeam_01_F";
		count=50;
		initSpeed=130;
		muzzleImpulseFactor[]={0,0};
	};
	class ProbingWeapon_02_magazine: CA_Magazine
	{
		displayName="";
		ammo="ProbingBeam_02_F";
		count=999;
		initSpeed=130;
		muzzleImpulseFactor[]={0,0};
	};
	class Dummy_Magazine_Base: CA_Magazine
	{
		ammo="Default";
		scope=1;
		initSpeed=1;
		count=9999;
		mass=0;
		allowedSlots[]={801,701,901};
	};
	class ESD_01_DummyMagazine_base: Dummy_Magazine_Base
	{
		mass=0;
	};
	class ESD_01_DummyMagazine_1: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_2: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_3: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_4: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_5: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_6: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_7: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_8: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_9: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_10: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_11: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_12: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_13: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_14: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_15: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_16: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_17: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_18: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_19: ESD_01_DummyMagazine_base
	{
	};
	class ESD_01_DummyMagazine_20: ESD_01_DummyMagazine_base
	{
	};
	class OM_Magazine: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=1;
		scope=1;
	};
	class Antibiotic: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Antibiotic0";
		picture="\a3\Missions_F_Oldman\Props\data\Antibiotic_ca.paa";
		model="\A3\structures_f_epa\Items\medical\antibiotic_F";
	};
	class Antimalaricum: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Antimalaricum0";
		picture="\a3\Missions_F_Oldman\Props\data\Antimalaricum_ca.paa";
		model="\A3\Props_F_Oldman\Items\Antimalaricum_01_F";
	};
	class AntimalaricumVaccine: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=100;
		displayName="$STR_A3_Item_AntimalaricumVaccine0";
		picture="\a3\Missions_F_Oldman\Props\data\AntimalaricumVaccine_ca.paa";
		model="\a3\Missions_F_Oldman\Props\Box_UAV_06_vaccine_F";
	};
	class Bandage: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Bandage0";
		picture="\a3\Missions_F_Oldman\Props\data\Bandage_ca.paa";
		model="\A3\structures_f_epa\Items\medical\bandage_F";
	};
	class Files: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_Files0";
		picture="\a3\Missions_F_Oldman\Props\data\Files_ca.paa";
		model="\A3\structures_f\items\documents\File1_f";
	};
	class Files_diary: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Files_diary0";
	};
	class Files_researchNotes: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Files_researchNotes0";
	};
	class FileTopSecret: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_FileTopSecret0";
		picture="\a3\Missions_F_Oldman\Props\data\FileTopSecret_ca.paa";
		model="\A3\structures_f\items\documents\File2_f";
	};
	class FileNetworkStructure: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_NetworkStructure0";
		picture="\a3\Missions_F_Oldman\Props\data\FileNetworkStructure_ca.paa";
		model="\A3\structures_f\items\documents\File2_f";
	};
	class FilesSecret: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_SecretFiles0";
		picture="\a3\Missions_F_Oldman\Props\data\FilesSecret_ca.paa";
		model="\A3\Structures_F_EPC\Items\Documents\Document_01_F";
	};
	class DocumentsSecret: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_SecretDocuments0";
		picture="\a3\Missions_F_Oldman\Props\data\DocumentsSecret_ca.paa";
		model="\A3\structures_f\items\documents\File2_f";
	};
	class Wallet_ID: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Wallet_traitor0";
		picture="\a3\Missions_F_Oldman\Props\data\Wallet_ID_ca.paa";
		model="\a3\Missions_F_Oldman\Props\Wallet_01_CSAT_F.p3d";
	};
	class Keys: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Keys0";
		picture="\a3\Missions_F_Oldman\Props\data\Keys_ca.paa";
		model="\a3\Props_F_Oldman\Items\Key_01_F";
	};
	class Csat_Id_01: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\a3\Missions_F_Oldman\Props\data\Csat_Id_01_ca.paa";
		displayName="$STR_A3_Item_CSAToperatorAccesCard_010";
		scope=1;
		model="\a3\Missions_F_Oldman\Props\Military_ID_Card_01_CSAT_01_F.p3d";
	};
	class Csat_Id_02: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\a3\Missions_F_Oldman\Props\data\Csat_Id_02_ca.paa";
		displayName="$STR_A3_Item_CSAToperatorAccesCard_020";
		scope=1;
		model="\a3\Missions_F_Oldman\Props\Military_ID_Card_01_CSAT_02_F.p3d";
	};
	class Csat_Id_03: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\a3\Missions_F_Oldman\Props\data\Csat_Id_03_ca.paa";
		displayName="$STR_A3_Item_CSAToperatorAccesCard_030";
		scope=1;
		model="\a3\Missions_F_Oldman\Props\Military_ID_Card_01_CSAT_03_F.p3d";
	};
	class Csat_Id_04: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\a3\Missions_F_Oldman\Props\data\Csat_Id_04_ca.paa";
		displayName="$STR_A3_Item_CSAToperatorAccesCard_040";
		scope=1;
		model="\a3\Missions_F_Oldman\Props\Military_ID_Card_01_CSAT_04_F.p3d";
	};
	class Csat_Id_05: Files
	{
		author="$STR_A3_Bohemia_Interactive";
		picture="\a3\Missions_F_Oldman\Props\data\Csat_Id_05_ca.paa";
		displayName="$STR_A3_Item_CSAToperatorAccesCard_050";
		scope=1;
		model="\a3\Missions_F_Oldman\Props\Military_ID_Card_01_CSAT_05_F.p3d";
	};
	class Laptop_Unfolded: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=30;
		scope=1;
		displayName="$STR_A3_Item_Laptop_Unfolded0";
		picture="\a3\Missions_F_Oldman\Props\data\Laptop_Unfolded_ca.paa";
		model="\A3\Structures_F\Items\Electronics\Laptop_unfolded_F.p3d";
	};
	class Laptop_Closed: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=20;
		scope=1;
		displayName="$STR_A3_Item_Laptop_closed0";
		picture="\a3\Missions_F_Oldman\Props\data\Laptop_Closed_ca.paa";
		model="\A3\Structures_F\Items\Electronics\Laptop_F";
	};
	class SatPhone: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=50;
		scope=1;
		displayName="$STR_A3_Item_SatPhone0";
		picture="\a3\Missions_F_Oldman\Props\data\SatPhone_ca.paa";
		model="\A3\Structures_F\Items\Electronics\SatellitePhone_F";
	};
	class MobilePhone: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_MobilePhone0";
		picture="\a3\Missions_F_Oldman\Props\data\MobilePhone_ca.paa";
		model="\A3\structures_f\Items\electronics\mobilephone_old_F";
	};
	class SmartPhone: MobilePhone
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_SmartPhone0";
		picture="\a3\Missions_F_Oldman\Props\data\SmartPhone_ca.paa";
		model="\A3\structures_f\Items\electronics\mobilephone_smart_F";
	};
	class FlashDisk: MobilePhone
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_FlashDisk0";
		picture="\a3\Missions_F_Oldman\Props\data\FlashDisk_ca.paa";
		model="\A3\Props_F_Oldman\Items\USB_Dongle_01_F.p3d";
	};
	class ButaneCanister: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_Butane_canister0";
		picture="\a3\Missions_F_Oldman\Props\data\ButaneCanister_ca.paa";
		model="\A3\structures_F_EPA\Items\Tools\ButaneCanister_F";
	};
	class Money: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=5;
		scope=1;
		displayName="$STR_A3_Item_Money0";
		picture="\a3\Missions_F_Oldman\Props\data\Money_ca.paa";
		model="\A3\Structures_F\Items\Valuables\Money_F";
	};
	class Money_bunch: Money
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Money_bunch0";
		picture="\a3\Missions_F_Oldman\Props\data\Money_bunch_ca.paa";
		model="\A3\Props_F_Oldman\Items\MoneyBills_01_bunch_F";
	};
	class Money_roll: Money
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Money_roll0";
		picture="\a3\Missions_F_Oldman\Props\data\Money_roll_ca.paa";
		model="\A3\Props_F_Oldman\Items\MoneyBills_01_roll_F";
	};
	class Money_stack: Money
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Item_Money_stack0";
		picture="\a3\Missions_F_Oldman\Props\data\Money_stack_ca.paa";
		model="\A3\Props_F_Oldman\Items\MoneyBills_01_stack_F";
	};
	class Money_stack_quest: Money_stack
	{
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_Money_stack_quest0";
	};
	class Sleeping_bag_folded_01: OM_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		mass=110;
		scope=1;
		displayName="$STR_A3_Item_Sleeping_bag_folded_010";
		picture="\a3\Missions_F_Oldman\Props\data\Sleeping_bag_folded_01_ca.paa";
		model="\A3\Structures_F\Civ\Camping\Sleeping_bag_folded_F.p3d";
	};
	class Drone_Range_Mag: CA_Magazine
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		mass=80;
		displayName="$STR_A3_CfgMagazines_Mine0";
		descriptionUse="$STR_A3_cfgMagazines_ATMine_Range_Mag0";
		picture="\A3\Weapons_F\Data\UI\gear_mine_AT_CA.paa";
		model="\A3\Weapons_f\Explosives\mine_at_i";
		useAction=1;
		useActionTitle="$STR_ACTION_PUTBOMB";
		type="2*		256";
		allowedSlots[]={901};
		value=5;
		ammo="Drone_explosive_ammo";
		nameSoundWeapon="mine";
		nameSound="mine";
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		descriptionShort="$STR_A3_cfgMagazines_Mine1";
		weaponPoolAvailable=1;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
	};
	class Drone_Range_Mag_dummy: Drone_Range_Mag
	{
		ammo="Drone_explosive_ammo_dummy";
	};
	class rhs_mag_902a: SmokeLauncherMag
	{
		count=1;
		scope=1;
		displayName="$STR_RHS_MAG_902A";
		displayNameShort="$STR_RHS_MAG_SH_902A";
		ammo="rhs_ammo_902a";
	};
	class rhs_mag_3d17: SmokeLauncherMag
	{
		count=8;
		scope=1;
		initSpeed=50;
		ammo="rhs_ammo_3d17";
		displayName="$STR_RHS_MAG_3D17";
		displayNameShort="$STR_RHS_MAG_SH_3D17";
	};
	class rhs_mag_3d17_4: rhs_mag_3d17
	{
		count=4;
	};
	class rhs_mag_3d17_6: rhs_mag_3d17
	{
		count=6;
	};
	class rhs_mag_3d17_12: rhs_mag_3d17
	{
		ammo="rhs_ammo_3d17_902B";
		count=12;
	};
	class rhs_mag_smokegen: SmokeLauncherMag
	{
		scope=2;
		count=999;
		ammo="rhs_ammo_smokegen";
		displayName="$STR_RHSUSF_MAG_SMOKEGEN";
		displayNameShort="$STR_RHSUSF_MAG_SMOKEGEN";
	};
	class rhs_mag_dazzler: rhs_mag_smokegen
	{
		count=999;
		scope=1;
		ammo="rhs_ammo_dazzler";
	};
	class rhs_128Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count=128;
	};
	class rhs_60Rnd_CMFlare_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		ammo="rhs_CMflare_Ammo";
	};
	class rhs_ASO2_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		pylonweapon="rhs_weap_CMDispenser_ASO2";
		displayname="1x32 PPI-26 Flare/PPR-26 Chaff";
		hardpoints[]=
		{
			"RHS_cm_ASO2"
		};
		count=16;
	};
	class rhs_ASO2_CMFlare_Chaff_Magazine_x2: rhs_ASO2_CMFlare_Chaff_Magazine
	{
		displayname="2x32 PPI-26 Flare/PPR-26 Chaff";
		hardpoints[]=
		{
			"RHS_cm_ASO2_x2"
		};
		count=32;
	};
	class rhs_ASO2_CMFlare_Chaff_Magazine_x4: rhs_ASO2_CMFlare_Chaff_Magazine
	{
		displayname="4x32 PPI-26 Flare/PPR-26 Chaff";
		hardpoints[]=
		{
			"RHS_cm_ASO2_x4"
		};
		count=64;
	};
	class rhs_ASO2_CMFlare_Chaff_Magazine_x6: rhs_ASO2_CMFlare_Chaff_Magazine
	{
		displayname="6x32 PPI-26 Flare/PPR-26 Chaff";
		hardpoints[]=
		{
			"RHS_cm_ASO2_x6"
		};
		count=96;
	};
	class rhs_ASO2_CMFlare_Magazine: rhs_ASO2_CMFlare_Chaff_Magazine
	{
		displayname="1x32 PPI-26 Flare";
		count=32;
		ammo="rhs_CMflare_Ammo";
	};
	class rhs_ASO2_CMFlare_Magazine_x2: rhs_ASO2_CMFlare_Magazine
	{
		displayname="2x32 PPI-26 Flare";
		hardpoints[]=
		{
			"RHS_cm_ASO2_x2"
		};
		count=64;
	};
	class rhs_ASO2_CMFlare_Magazine_x4: rhs_ASO2_CMFlare_Magazine
	{
		displayname="4x32 PPI-26 Flare";
		hardpoints[]=
		{
			"RHS_cm_ASO2_x4"
		};
		count=128;
	};
	class rhs_ASO2_CMFlare_Magazine_x6: rhs_ASO2_CMFlare_Magazine
	{
		displayname="6x32 PPI-26 Flare";
		hardpoints[]=
		{
			"RHS_cm_ASO2_x6"
		};
		count=192;
	};
	class rhs_BVP3026_CMFlare_Chaff_Magazine: rhs_ASO2_CMFlare_Chaff_Magazine
	{
		pylonweapon="rhs_weap_CMDispenser_BVP3026";
		hardpoints[]=
		{
			"RHS_cm_BVP3026"
		};
		displayname="1x30 PPI-26 Flare/PPR-26 Chaff";
		count=15;
	};
	class rhs_BVP3026_CMFlare_Chaff_Magazine_x2: rhs_BVP3026_CMFlare_Chaff_Magazine
	{
		hardpoints[]=
		{
			"RHS_cm_BVP3026_x2"
		};
		displayname="2x30 PPI-26 Flare/PPR-26 Chaff";
		count=30;
	};
	class rhs_BVP3026_CMFlare_Magazine: rhs_BVP3026_CMFlare_Chaff_Magazine
	{
		displayname="1x30 PPI-26 Flare";
		count=30;
		ammo="rhs_CMflare_Ammo";
	};
	class rhs_BVP3026_CMFlare_Magazine_x2: rhs_BVP3026_CMFlare_Magazine
	{
		hardpoints[]=
		{
			"RHS_cm_BVP3026_x2"
		};
		displayname="2x30 PPI-26 Flare";
		count=60;
	};
	class rhs_UV26_CMFlare_Chaff_Magazine: rhs_ASO2_CMFlare_Chaff_Magazine
	{
		pylonweapon="rhs_weap_CMDispenser_UV26";
		hardpoints[]=
		{
			"RHS_cm_UV26"
		};
	};
	class rhs_UV26_CMFlare_Chaff_Magazine_x2: rhs_ASO2_CMFlare_Chaff_Magazine_x2
	{
		pylonweapon="rhs_weap_CMDispenser_UV26";
		hardpoints[]=
		{
			"RHS_cm_UV26_x2"
		};
	};
	class rhs_UV26_CMFlare_Chaff_Magazine_x4: rhs_ASO2_CMFlare_Chaff_Magazine_x4
	{
		pylonweapon="rhs_weap_CMDispenser_UV26";
		hardpoints[]=
		{
			"RHS_cm_UV26_x4"
		};
	};
	class rhs_UV26_CMFlare_Magazine: rhs_ASO2_CMFlare_Magazine
	{
		pylonweapon="rhs_weap_CMDispenser_UV26";
		hardpoints[]=
		{
			"RHS_cm_UV26"
		};
	};
	class rhs_UV26_CMFlare_Magazine_x2: rhs_ASO2_CMFlare_Magazine_x2
	{
		pylonweapon="rhs_weap_CMDispenser_UV26";
		hardpoints[]=
		{
			"RHS_cm_UV26_x2"
		};
	};
	class rhs_UV26_CMFlare_Magazine_x4: rhs_ASO2_CMFlare_Magazine_x4
	{
		pylonweapon="rhs_weap_CMDispenser_UV26";
		hardpoints[]=
		{
			"RHS_cm_UV26_x4"
		};
	};
	class rhs_mag_DIRCM_Vitebsk: CA_Magazine
	{
		count=120;
		ammo="RHS_Ammo_DIRCM_Vitebsk";
		initSpeed=30;
		weight=0;
	};
	class rhs_mag_DIRCM_Lipa: rhs_mag_DIRCM_Vitebsk
	{
		count=80;
	};
	class rhs_mag_aps_afganit: rhs_mag_smokegen
	{
		count=1;
		scope=1;
		ammo="rhs_ammo_dazzler";
	};
	class rhs_LaserMag: Laserbatteries
	{
		scope=1;
		ammo="rhs_laserbeam";
	};
	class rhs_LaserFCSMag: Laserbatteries
	{
		scope=1;
		ammo="rhs_laserbeam_FCS";
		count=99;
		initSpeed=600;
		maxLeadSpeed=150;
	};
	class rhs_mag_bm_base: VehicleMagazine
	{
		scope=2;
		reloadTime=12;
		magazineReloadTime=12;
		count=14;
		initSpeed=900;
		rhs_magazineIndex=1;
		maxLeadSpeed=80;
		muzzleImpulseFactor[]=
		{
			"14*0.2",
			14
		};
	};
	class rhs_mag_br412_14: rhs_mag_bm_base
	{
		displayName="$STR_RHS_MAG_BR412";
		displayNameShort="$STR_RHS_MAG_SH_BR412";
		ammo="rhs_ammo_br412";
		initSpeed=1450;
	};
	class rhs_mag_br412_17: rhs_mag_br412_14
	{
		count=17;
	};
	class rhs_mag_br540_10: rhs_mag_bm_base
	{
		displayName="BR-540 AP";
		displayNameShort="AP";
		ammo="rhs_ammo_br540";
		initSpeed=600;
		count=10;
	};
	class rhs_mag_br540_4: rhs_mag_bm_base
	{
		count=4;
	};
	class rhs_mag_br540: rhs_mag_br540_10
	{
		count=40;
	};
	class rhs_mag_bm25_14: rhs_mag_bm_base
	{
		displayName="$STR_RHS_MAG_3UBM11";
		displayNameShort="$STR_RHS_MAG_SH_3UBM11";
		ammo="rhs_ammo_bm25";
		initSpeed=1430;
	};
	class rhs_mag_bm8_14: rhs_mag_bm_base
	{
		displayName="$STR_RHS_MAG_3UBM6";
		displayNameShort="$STR_RHS_MAG_SH_3UBM6";
		ammo="rhs_ammo_bm8";
		initSpeed=1415;
	};
	class rhs_mag_bm4_15: rhs_mag_bm_base
	{
		displayName="$STR_RHS_MAG_3UBM4";
		displayNameShort="$STR_RHS_MAG_SH_3UBM4";
		ammo="rhs_ammo_bm4";
		count=15;
		initSpeed=1411;
	};
	class rhs_mag_bm23_15: rhs_mag_bm_base
	{
		displayName="$STR_RHS_MAG_3UBM13";
		displayNameShort="$STR_RHS_MAG_SH_3UBM13";
		ammo="rhs_ammo_bm23";
		initSpeed=1450;
		count=15;
	};
	class rhs_mag_3bm_base: rhs_mag_bm_base
	{
		reloadTime=6.5;
		magazineReloadTime=6.5;
		lastRoundsTracer=5;
		tracersEvery=1;
		count=10;
	};
	class rhs_mag_dummy: rhs_mag_3bm_base
	{
		ammo="rhs_ammo_3bm9";
	};
	class rhs_mag_3bm9_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM9";
		displayNameShort="$STR_RHS_MAG_SH_3BM9";
		ammo="rhs_ammo_3bm9";
		initSpeed=1800;
	};
	class rhs_mag_3bm9: rhs_mag_3bm9_10
	{
		count=40;
	};
	class rhs_mag_3bm12_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM12";
		displayNameShort="$STR_RHS_MAG_SH_3BM12";
		ammo="rhs_ammo_3bm12";
		initSpeed=1800;
	};
	class rhs_mag_3bm12: rhs_mag_3bm12_10
	{
		count=40;
	};
	class rhs_mag_3bm15_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM15";
		displayNameShort="$STR_RHS_MAG_SH_3BM15";
		ammo="rhs_ammo_3bm15";
		initSpeed=1785;
	};
	class rhs_mag_3bm15: rhs_mag_3bm15_10
	{
		count=40;
	};
	class rhs_mag_3bm17_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM17";
		displayNameShort="$STR_RHS_MAG_SH_3BM17";
		ammo="rhs_ammo_3bm17";
		initSpeed=1760;
	};
	class rhs_mag_3bm17_14: rhs_mag_3bm17_10
	{
		count=14;
	};
	class rhs_mag_3bm17: rhs_mag_3bm17_10
	{
		count=40;
	};
	class rhs_mag_3bm22_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM22";
		displayNameShort="$STR_RHS_MAG_SH_3BM22";
		ammo="rhs_ammo_3bm22";
		initSpeed=1760;
	};
	class rhs_mag_3bm22_14: rhs_mag_3bm22_10
	{
		count=14;
	};
	class rhs_mag_3bm22_7: rhs_mag_3bm22_10
	{
		count=7;
	};
	class rhs_mag_3bm22: rhs_mag_3bm22_10
	{
		count=40;
	};
	class rhs_mag_3bm26_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM26";
		displayNameShort="$STR_RHS_MAG_SH_3BM26";
		ammo="rhs_ammo_3bm26";
		initSpeed=1720;
	};
	class rhs_mag_3bm26_7: rhs_mag_3bm26_10
	{
		count=7;
	};
	class rhs_mag_3bm26: rhs_mag_3bm26_10
	{
		count=40;
	};
	class rhs_mag_3bm29_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM29";
		displayNameShort="$STR_RHS_MAG_SH_3BM29";
		ammo="rhs_ammo_3bm29";
		initSpeed=1660;
	};
	class rhs_mag_3bm29_7: rhs_mag_3bm29_10
	{
		count=7;
	};
	class rhs_mag_3bm29: rhs_mag_3bm29_10
	{
		count=40;
	};
	class rhs_mag_3bm32_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM32";
		displayNameShort="$STR_RHS_MAG_SH_3BM32";
		ammo="rhs_ammo_3bm32";
		initSpeed=1700;
	};
	class rhs_mag_3bm32_7: rhs_mag_3bm32_10
	{
		count=7;
	};
	class rhs_mag_3bm32: rhs_mag_3bm32_10
	{
		count=40;
	};
	class rhs_mag_3bm42_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM42";
		displayNameShort="$STR_RHS_MAG_SH_3BM42";
		ammo="rhs_ammo_3bm42";
		initSpeed=1700;
	};
	class rhs_mag_3bm42_7: rhs_mag_3bm42_10
	{
		count=7;
	};
	class rhs_mag_3bm42: rhs_mag_3bm42_10
	{
		count=40;
	};
	class rhs_mag_3bm42m_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM42M";
		displayNameShort="$STR_RHS_MAG_SH_3BM42M";
		ammo="rhs_ammo_3bm42m";
		initSpeed=1750;
	};
	class rhs_mag_3bm42m: rhs_mag_3bm42m_10
	{
		count=40;
	};
	class rhs_mag_3bm46_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM46";
		displayNameShort="$STR_RHS_MAG_SH_3BM46";
		ammo="rhs_ammo_3bm46";
		initSpeed=1700;
	};
	class rhs_mag_3bm46_8: rhs_mag_3bm46_10
	{
		count=8;
	};
	class rhs_mag_3bm46: rhs_mag_3bm46_10
	{
		count=40;
	};
	class rhs_mag_3bm59_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM59";
		displayNameShort="$STR_RHS_MAG_SH_3BM59";
		ammo="rhs_ammo_3bm59";
		initSpeed=1700;
	};
	class rhs_mag_3bm59: rhs_mag_3bm59_10
	{
		count=40;
	};
	class rhs_mag_3bm60_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM60";
		displayNameShort="$STR_RHS_MAG_SH_3BM60";
		ammo="rhs_ammo_3bm60";
		initSpeed=1700;
	};
	class rhs_mag_3bm60: rhs_mag_3bm60_10
	{
		count=40;
	};
	class rhs_mag_3bm69_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM59";
		displayNameShort="$STR_RHS_MAG_SH_3BM59";
		ammo="rhs_ammo_3bm69";
		initSpeed=2050;
	};
	class rhs_mag_3bm69_17: rhs_mag_3bm69_10
	{
		count=17;
	};
	class rhs_mag_3bm69: rhs_mag_3bm69_10
	{
		count=40;
	};
	class rhs_mag_3bm70_10: rhs_mag_3bm_base
	{
		displayName="$STR_RHS_MAG_3BM70";
		displayNameShort="$STR_RHS_MAG_SH_3BM70";
		ammo="rhs_ammo_3bm70";
		initSpeed=2050;
	};
	class rhs_mag_3bm70: rhs_mag_3bm70_10
	{
		count=40;
	};
	class rhs_mag_bk_base: VehicleMagazine
	{
		scope=2;
		reloadTime=12;
		magazineReloadTime=12;
		count=8;
		initSpeed=900;
		maxLeadSpeed=27;
		rhs_magazineIndex=2;
		muzzleImpulseFactor=0.0099999998;
	};
	class rhs_mag_bk4_5: rhs_mag_bk_base
	{
		displayName="$STR_RHS_MAG_3UBK3";
		displayNameShort="$STR_RHS_MAG_SH_3UBK3";
		ammo="rhs_ammo_bk4";
		count=5;
		initSpeed=1750;
	};
	class rhs_mag_bk5_8: rhs_mag_bk_base
	{
		displayName="$STR_RHS_MAG_3UBK4";
		displayNameShort="$STR_RHS_MAG_SH_3UBK4";
		ammo="rhs_ammo_bk5";
		initSpeed=900;
	};
	class rhs_mag_bk6m: rhs_mag_bk_base
	{
		displayName="$STR_RHS_MAG_bk6m";
		displayNameShort="$STR_RHS_MAG_SH_bk6m";
		ammo="rhs_ammo_bk6m";
		initSpeed=680;
		count=1;
	};
	class rhs_mag_bk6m_5: rhs_mag_bk6m
	{
		count=5;
	};
	class rhs_mag_bk6m_26: rhs_mag_bk6m
	{
		count=26;
	};
	class rhs_mag_bk13: rhs_mag_bk_base
	{
		displayName="$STR_RHS_MAG_bk13";
		displayNameShort="$STR_RHS_MAG_SH_bk13";
		ammo="rhs_ammo_bk13";
		initSpeed=726;
		count=1;
	};
	class rhs_mag_bk13_26: rhs_mag_bk13
	{
		count=26;
	};
	class rhs_mag_bk13_5: rhs_mag_bk13
	{
		count=5;
	};
	class rhs_mag_bk13_10: rhs_mag_bk13
	{
		count=10;
	};
	class rhs_mag_bk15_5: rhs_mag_bk_base
	{
		displayName="$STR_RHS_MAG_3UBK7";
		displayNameShort="$STR_RHS_MAG_SH_3UBK7";
		ammo="rhs_ammo_bk15";
		count=5;
		initSpeed=1750;
	};
	class rhs_mag_bk17_8: rhs_mag_bk_base
	{
		displayName="$STR_RHS_MAG_3UBK9";
		displayNameShort="$STR_RHS_MAG_SH_3UBK9";
		ammo="rhs_ammo_bk17";
		initSpeed=850;
	};
	class rhs_mag_bp540_4: rhs_mag_bk_base
	{
		displayName="BP-540 HEAT";
		displayNameShort="HEAT";
		ammo="rhs_ammo_bp540";
		initSpeed=680;
		count=4;
	};
	class rhs_mag_bp540: rhs_mag_bp540_4
	{
		count=40;
	};
	class rhs_mag_3bk_base: rhs_mag_bk_base
	{
		reloadTime=6.5;
		magazineReloadTime=6.5;
		count=8;
		tracersEvery=1;
		muzzleImpulseFactor[]=
		{
			"14*0.2",
			14
		};
	};
	class rhs_mag_3bk12_8: rhs_mag_3bk_base
	{
		displayName="$STR_RHS_MAG_3BK12";
		displayNameShort="$STR_RHS_MAG_SH_3BK12";
		ammo="rhs_ammo_3bk12";
		initSpeed=905;
	};
	class rhs_mag_3bk12: rhs_mag_3bk12_8
	{
		count=40;
	};
	class rhs_mag_3bk14_8: rhs_mag_3bk_base
	{
		displayName="$STR_RHS_MAG_3BK14";
		displayNameShort="$STR_RHS_MAG_SH_3BK14";
		ammo="rhs_ammo_3bk14";
		initSpeed=905;
	};
	class rhs_mag_3bk14_6: rhs_mag_3bk14_8
	{
		count=6;
	};
	class rhs_mag_3bk14: rhs_mag_3bk14_8
	{
		count=40;
	};
	class rhs_mag_3bk18_8: rhs_mag_3bk_base
	{
		displayName="$STR_RHS_MAG_3BK18";
		displayNameShort="$STR_RHS_MAG_SH_3BK18";
		ammo="rhs_ammo_3bk18";
		initSpeed=905;
	};
	class rhs_mag_3bk18_6: rhs_mag_3bk18_8
	{
		count=6;
	};
	class rhs_mag_3bk18: rhs_mag_3bk18_8
	{
		count=40;
	};
	class rhs_mag_3bk18m_8: rhs_mag_3bk_base
	{
		displayName="$STR_RHS_MAG_3BK18M";
		displayNameShort="$STR_RHS_MAG_SH_3BK18M";
		ammo="rhs_ammo_3bk18M";
		initSpeed=905;
	};
	class rhs_mag_3bk18m_6: rhs_mag_3bk18m_8
	{
		count=6;
	};
	class rhs_mag_3bk18m: rhs_mag_3bk18m_8
	{
		count=40;
	};
	class rhs_mag_3bk21_8: rhs_mag_3bk_base
	{
		displayName="$STR_RHS_MAG_3BK21";
		displayNameShort="$STR_RHS_MAG_SH_3BK21";
		ammo="rhs_ammo_3bk21";
		initSpeed=905;
	};
	class rhs_mag_3bk21: rhs_mag_3bk21_8
	{
		count=40;
	};
	class rhs_mag_3bk29_8: rhs_mag_3bk_base
	{
		displayName="$STR_RHS_MAG_3BK29";
		displayNameShort="$STR_RHS_MAG_SH_3BK29";
		ammo="rhs_ammo_3bk29";
		initSpeed=905;
	};
	class rhs_mag_3bk29: rhs_mag_3bk29_8
	{
		count=40;
	};
	class rhs_mag_3bk31_8: rhs_mag_3bk_base
	{
		displayName="$STR_RHS_MAG_3BK31";
		displayNameShort="$STR_RHS_MAG_SH_3BK31";
		ammo="rhs_ammo_3bk31";
		initSpeed=905;
	};
	class rhs_mag_3bk31_6: rhs_mag_3bk31_8
	{
		count=6;
	};
	class rhs_mag_3bk31_3: rhs_mag_3bk31_8
	{
		count=3;
	};
	class rhs_mag_3bk31: rhs_mag_3bk31_8
	{
		count=40;
	};
	class rhs_mag_of_base: VehicleMagazine
	{
		scope=2;
		reloadTime=12;
		magazineReloadTime=12;
		count=17;
		initSpeed=900;
		rhs_magazineIndex=3;
		maxLeadSpeed=40;
		muzzleImpulseFactor=0.001;
	};
	class rhs_mag_of412_17: rhs_mag_of_base
	{
		displayName="$STR_RHS_MAG_OF412";
		displayNameShort="$STR_RHS_MAG_SH_OF412";
		ammo="rhs_ammo_of412";
	};
	class rhs_mag_of412_21: rhs_mag_of412_17
	{
		count=21;
	};
	class rhs_mag_of412_18: rhs_mag_of412_17
	{
		count=18;
	};
	class rhs_mag_of11_20: rhs_mag_of_base
	{
		displayName="$STR_RHS_MAG_3UOF11";
		displayNameShort="$STR_RHS_MAG_SH_3UOF11";
		ammo="rhs_ammo_of11";
		count=20;
		muzzleImpulseFactor[]={1,0.1};
	};
	class rhs_mag_of28_20: rhs_mag_of_base
	{
		displayName="$STR_RHS_MAG_3UOF37";
		displayNameShort="$STR_RHS_MAG_SH_3UOF37";
		ammo="rhs_ammo_of28";
		count=20;
		muzzleImpulseFactor[]={1,0.1};
	};
	class rhs_mag_3of_base: rhs_mag_of_base
	{
		reloadTime=6.5;
		magazineReloadTime=6.5;
		count=6;
		tracersEvery=1;
		muzzleImpulseFactor[]=
		{
			"14*0.5",
			14
		};
	};
	class rhs_mag_3of11_6: rhs_mag_3of_base
	{
		displayName="$STR_RHS_MAG_3OF11";
		displayNameShort="$STR_RHS_MAG_SH_3OF11";
		ammo="rhs_ammo_3of11";
	};
	class rhs_mag_3of11: rhs_mag_3of11_6
	{
		count=40;
	};
	class rhs_mag_3of26_6: rhs_mag_3of_base
	{
		displayName="$STR_RHS_MAG_3OF26";
		displayNameShort="$STR_RHS_MAG_SH_3OF26";
		ammo="rhs_ammo_3of26";
		initSpeed=850;
		tracersEvery=0;
	};
	class rhs_mag_3of26_5: rhs_mag_3of26_6
	{
		count=5;
	};
	class rhs_mag_3of26_7: rhs_mag_3of26_6
	{
		count=7;
	};
	class rhs_mag_3of26: rhs_mag_3of26_6
	{
		count=40;
	};
	class rhs_mag_3UOF17_22: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_MAG_3UOF17";
		displayNameShort="$STR_RHS_MAG_SH_3UOF17";
		ammo="rhs_ammo_3UOF17";
		count=22;
		initSpeed=250;
		maxLeadSpeed=60;
		nameSound="heat";
		tracersEvery=0;
		rhs_magazineIndex=3;
	};
	class rhs_mag_3UOF19_22: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_MAG_3UOF19";
		displayNameShort="$STR_RHS_MAG_SH_3UOF19";
		ammo="rhs_ammo_3UOF19";
		count=22;
		initSpeed=355;
		maxLeadSpeed=60;
		nameSound="heat";
		tracersEvery=1;
		rhs_magazineIndex=3;
	};
	class rhs_mag_3UOF191_22: rhs_mag_3UOF19_22
	{
		displayName="3UOF191";
		displayNameShort="3UOF191";
		ammo="rhs_ammo_3UOF191";
	};
	class rhs_mag_9m41_20: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_9m41_NAME";
		displayNameShort="$STR_RHS_9m41_NAME";
		ammo="Flare_82mm_AMOS_White";
		count=20;
		initSpeed=200;
	};
	class rhs_mag_HE_2a33: 32Rnd_155mm_Mo_shells
	{
		scope=2;
		displayName="$STR_RHS_53WOF27_NAME";
		displayNameShort="HE";
		ammo="rhs_ammo_3WOF27";
		count=26;
		nameSound="heat";
		initSpeed=655;
		rhs_magazineIndex=3;
	};
	class rhs_mag_HE_2a33_26: rhs_mag_HE_2a33
	{
		count=26;
	};
	class rhs_mag_HE_2a33_32: rhs_mag_HE_2a33
	{
		count=32;
	};
	class rhs_mag_HE_2a33_46: rhs_mag_HE_2a33
	{
		count=46;
	};
	class rhs_mag_53vof546v: rhs_mag_HE_2a33
	{
		displayName="53-VOF-546V";
		ammo="rhs_ammo_53OF546";
		initSpeed=655;
		count=1;
	};
	class rhs_mag_53vof546v_26: rhs_mag_53vof546v
	{
		count=26;
	};
	class rhs_mag_53vof546v_32: rhs_mag_53vof546v
	{
		count=32;
	};
	class rhs_mag_53vof546v_46: rhs_mag_53vof546v
	{
		count=46;
	};
	class rhs_mag_53vof546v_direct: rhs_mag_53vof546v
	{
		ammo="rhs_ammo_53OF546_direct";
	};
	class rhs_mag_53vof546v_direct_32: rhs_mag_53vof546v_direct
	{
		count=32;
	};
	class rhs_mag_WP_2a33: rhs_mag_HE_2a33
	{
		displayName="$STR_RHS_53OCH540_NAME";
		displayNameShort="WP";
		count=5;
		ammo="rhs_ammo_152_WP";
	};
	class rhs_mag_WP_2a33_26: rhs_mag_WP_2a33
	{
		count=26;
	};
	class rhs_mag_WP_2a33_46: rhs_mag_WP_2a33
	{
		count=46;
	};
	class rhs_mag_Atomic_2a33: rhs_mag_HE_2a33
	{
		displayName="$STR_RHS_3WB3_NAME";
		displayNameShort="Nuke";
		ammo="rhs_ammo_3WB3";
	};
	class rhs_mag_Atomic_2a33_26: rhs_mag_Atomic_2a33
	{
		count=26;
	};
	class rhs_mag_Atomic_2a33_46: rhs_mag_Atomic_2a33
	{
		count=46;
	};
	class rhs_mag_LASER_2a33: rhs_mag_HE_2a33
	{
		displayName="$STR_RHS_3WOF93_NAME";
		displayNameShort="LG";
		count=5;
		ammo="rhs_ammo_3WOF93";
	};
	class rhs_mag_LASER_2a33_26: rhs_mag_LASER_2a33
	{
		count=26;
	};
	class rhs_mag_LASER_2a33_46: rhs_mag_LASER_2a33
	{
		count=26;
	};
	class rhs_mag_SMOKE_2a33: rhs_mag_HE_2a33
	{
		displayName="$STR_RHS_53WD546_NAME";
		displayNameShort="Smoke";
		count=5;
		ammo="rhs_ammo_53WD546U";
	};
	class rhs_mag_SMOKE_2a33_26: rhs_mag_SMOKE_2a33
	{
		count=26;
	};
	class rhs_mag_SMOKE_2a33_46: rhs_mag_SMOKE_2a33
	{
		count=26;
	};
	class rhs_mag_ILLUM_2a33: rhs_mag_HE_2a33
	{
		displayName="$STR_RHS_3WS23_NAME";
		displayNameShort="Illum";
		count=5;
		ammo="rhs_ammo_3WS23";
	};
	class rhs_mag_ILLUM_2a33_26: rhs_mag_ILLUM_2a33
	{
		count=26;
	};
	class rhs_mag_ILLUM_2a33_46: rhs_mag_ILLUM_2a33
	{
		count=26;
	};
	class rhs_mag_of462: 32Rnd_155mm_Mo_shells
	{
		scope=2;
		displayName="$STR_RHS_MAG_of462";
		ammo="rhs_ammo_of462";
		count=1;
		nameSound="heat";
		initSpeed=690;
		rhs_magazineIndex=3;
		muzzleImpulseFactor=0.1;
	};
	class rhs_mag_of462_10: rhs_mag_of462
	{
		count=10;
	};
	class rhs_mag_of462_direct: rhs_mag_of462
	{
		ammo="rhs_ammo_of462_direct";
	};
	class rhs_mag_of462_direct_10: rhs_mag_of462_direct
	{
		count=10;
	};
	class rhs_mag_3of56: rhs_mag_of462
	{
		displayName="$STR_RHS_MAG_3of56";
		ammo="rhs_ammo_3of56";
	};
	class rhs_mag_3of56_10: rhs_mag_3of56
	{
		count=10;
	};
	class rhs_mag_3of56_5: rhs_mag_3of56
	{
		count=5;
	};
	class rhs_mag_3of56_30: rhs_mag_3of56
	{
		count=30;
	};
	class rhs_mag_3of56_35: rhs_mag_3of56
	{
		count=35;
	};
	class rhs_mag_3of56_direct: rhs_mag_3of56
	{
		ammo="rhs_ammo_3of56_direct";
	};
	class rhs_mag_3of56_direct_10: rhs_mag_3of56_direct
	{
		count=10;
	};
	class rhs_mag_3of56_direct_30: rhs_mag_3of56_direct
	{
		count=30;
	};
	class rhs_mag_3of56_direct_5: rhs_mag_3of56_direct
	{
		count=5;
	};
	class rhs_mag_d462: rhs_mag_of462
	{
		displayName="$STR_RHS_MAG_d462";
		displayNameShort="Smoke";
		ammo="rhs_ammo_d462";
		rhs_magazineIndex=-1;
	};
	class rhs_mag_d462_2: rhs_mag_d462
	{
		count=2;
	};
	class rhs_mag_s463: rhs_mag_of462
	{
		displayName="$STR_RHS_MAG_s463";
		displayNameShort="Illum";
		ammo="rhs_ammo_s463";
		rhs_magazineIndex=-1;
	};
	class rhs_mag_s463_2: rhs_mag_s463
	{
		count=2;
	};
	class rhs_mag_3of69m: rhs_mag_of462
	{
		displayName="$STR_RHS_MAG_3of69m";
		displayNameShort="LG";
		ammo="rhs_ammo_3of69m";
		rhs_magazineIndex=-1;
	};
	class rhs_mag_3of69m_2: rhs_mag_3of69m
	{
		count=2;
	};
	class rhs_mag_3vo18_10: 32Rnd_155mm_Mo_shells
	{
		scope=2;
		displayName="$STR_RHS_MAG_3vo18";
		ammo="rhs_ammo_3vo18";
		count=10;
		initSpeed=211;
	};
	class rhs_mag_3vs25m_10: rhs_mag_3vo18_10
	{
		displayName="$STR_RHS_MAG_3vs25m";
		displayNameShort="Illum";
		ammo="rhs_ammo_3vs25m";
	};
	class rhs_mag_53_va_832a_10: rhs_mag_3vo18_10
	{
		displayName="$STR_RHS_MAG_va_832a";
		displayNameShort="Illum";
		ammo="rhs_ammo_3vs25m";
	};
	class rhs_mag_d832du_10: rhs_mag_3vo18_10
	{
		displayName="$STR_RHS_MAG_d832du";
		displayNameShort="Smoke";
		ammo="rhs_ammo_d832du";
	};
	class rhs_mag_9m14m: VehicleMagazine
	{
		scope=1;
		displayName="$STR_RHS_MAG_9M14M";
		displayNameShort="$STR_RHS_MAG_SH_9M14M";
		ammo="rhs_ammo_9m14m";
		count=1;
		initSpeed=80;
		maxleadspeed=30;
		nameSound="missiles";
	};
	class rhs_mag_9m14m_3: rhs_mag_9m14m
	{
		count=3;
	};
	class rhs_mag_9m14m_4: rhs_mag_9m14m
	{
		count=4;
	};
	class rhs_mag_MCLOS_Training: rhs_mag_9m14m
	{
		displayname="MCLOS training round";
		count=999;
		ammo="rhs_ammo_mclos_training";
	};
	class rhs_mag_9m14: rhs_mag_9m14m
	{
		displayName="$STR_RHS_MAG_9M14";
		displayNameShort="$STR_RHS_MAG_SH_9M14";
		ammo="rhs_ammo_9m14";
	};
	class rhs_mag_9m17: VehicleMagazine
	{
		scope=1;
		displayName="$STR_RHS_MAG_9M17";
		displayNameShort="$STR_RHS_MAG_SH_9M17";
		ammo="rhs_ammo_9m17";
		count=1;
		initSpeed=80;
		maxleadspeed=40;
		nameSound="missiles";
	};
	class rhs_mag_9m17p: rhs_mag_9m17
	{
		displayName="$STR_RHS_MAG_9M17P";
		displayNameShort="$STR_RHS_MAG_SH_9M17P";
		ammo="rhs_ammo_9m17p";
	};
	class rhs_mag_9M17_Mi24_2x: rhs_mag_9m17
	{
		model="rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m17_2x";
		count=2;
		mass=85;
		weight=85;
		hardpoints[]=
		{
			"RHS_HP_9m17_Mi24"
		};
		pylonWeapon="rhs_weap_2K8_launcher";
	};
	class rhs_mag_9M17p_Mi24_2x: rhs_mag_9M17_Mi24_2x
	{
		displayName="$STR_RHS_MAG_9M17P";
		displayNameShort="$STR_RHS_MAG_SH_9M17P";
		ammo="rhs_ammo_9m17p";
	};
	class rhs_mag_9m112_6: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_MAG_9M112";
		displayNameShort="$STR_RHS_MAG_SH_9M112";
		reloadTime=30;
		magazineReloadTime=30;
		ammo="rhs_ammo_9m112";
		count=6;
		initSpeed=125;
		maxleadspeed=50;
		nameSound="missiles";
		rhs_magazineIndex=4;
	};
	class rhs_mag_9m112m_6: rhs_mag_9m112_6
	{
		displayName="$STR_RHS_MAG_9M112M";
		displayNameShort="$STR_RHS_MAG_SH_9M112M";
		ammo="rhs_ammo_9m112m";
	};
	class rhs_mag_9m112m_4: rhs_mag_9m112m_6
	{
		count=4;
	};
	class rhs_mag_9m112m2_6: rhs_mag_9m112_6
	{
		displayName="$STR_RHS_MAG_9M112M2";
		displayNameShort="$STR_RHS_MAG_SH_9M112M2";
		ammo="rhs_ammo_9m112m2";
	};
	class rhs_mag_9m124_6: rhs_mag_9m112_6
	{
		displayName="$STR_RHS_MAG_9M124";
		displayNameShort="$STR_RHS_MAG_SH_9M124";
		ammo="rhs_ammo_9m124";
	};
	class rhs_mag_9m128_6: rhs_mag_9m112_6
	{
		scope=2;
		canLock=0;
		displayName="$STR_RHS_MAG_9M128";
		displayNameShort="$STR_RHS_MAG_SH_9M128";
		ammo="rhs_ammo_9m128";
		count=6;
	};
	class rhs_mag_9m113: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_MAG_9M113";
		displayNameShort="$STR_RHS_MAG_SH_9M113";
		ammo="rhs_ammo_9m113";
		count=1;
		initSpeed=80;
		maxleadspeed=80;
		nameSound="missiles";
		rhs_magazineIndex=4;
	};
	class rhs_mag_9m113_3: rhs_mag_9m113
	{
		count=3;
	};
	class rhs_mag_9m113_4: rhs_mag_9m113
	{
		count=4;
	};
	class rhs_mag_9m113_5: rhs_mag_9m113
	{
		count=5;
	};
	class rhs_mag_9m113_5_9P148_pylon: rhs_mag_9m113
	{
		hardpoints[]=
		{
			"RHS_HP_9P148"
		};
		displayname="9M113";
		displaynameShort="HEAT";
		descriptionShort="HEAT. 600 mm RHA penetration ";
		pylonWeapon="rhs_weap_9P148";
		count=5;
		model="\A3\weapons_f\empty";
	};
	class rhs_mag_9m113M: rhs_mag_9m113
	{
		displayName="$STR_RHS_MAG_9M113M";
		displayNameShort="$STR_RHS_MAG_SH_9M113M";
		ammo="rhs_ammo_9m113M";
	};
	class rhs_mag_9m113M_3: rhs_mag_9m113M
	{
		count=3;
	};
	class rhs_mag_9m113M_4: rhs_mag_9m113M
	{
		count=4;
	};
	class rhs_mag_9m113M_5: rhs_mag_9m113M
	{
		count=5;
	};
	class rhs_mag_9m111: rhs_mag_9m113
	{
		displayName="$STR_RHS_MAG_9M111";
		displayNameShort="$STR_RHS_MAG_SH_9M111";
		ammo="rhs_ammo_9m111";
	};
	class rhs_mag_9m111_3: rhs_mag_9m111
	{
		count=4;
	};
	class rhs_mag_9m111_4: rhs_mag_9m111
	{
		count=4;
	};
	class rhs_mag_9m111_5: rhs_mag_9m111
	{
		count=5;
	};
	class rhs_mag_9m111M: rhs_mag_9m111
	{
		displayName="$STR_RHS_MAG_9M111M";
		displayNameShort="$STR_RHS_MAG_SH_9M111M";
		ammo="rhs_ammo_9m111M";
	};
	class rhs_mag_9m111M_3: rhs_mag_9m111M
	{
		count=3;
	};
	class rhs_mag_9m111M_4: rhs_mag_9m111M
	{
		count=4;
	};
	class rhs_mag_9m111M_5: rhs_mag_9m111M
	{
		count=5;
	};
	class rhs_mag_9m117_3: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_MAG_3UBK101";
		displayNameShort="$STR_RHS_MAG_SH_3UBK101";
		ammo="rhs_ammo_9m117";
		reloadTime=12;
		magazineReloadTime=12;
		count=3;
		initSpeed=80;
		maxleadspeed=70;
		nameSound="missiles";
		rhs_magazineIndex=2;
	};
	class rhs_mag_9m117_8: rhs_mag_9m117_3
	{
		count=8;
	};
	class rhs_mag_9m117m_3: rhs_mag_9m117_3
	{
		displayName="$STR_RHS_MAG_3UBK10M";
		displayNameShort="$STR_RHS_MAG_SH_3UBK10M";
		ammo="rhs_ammo_9m117m";
		count=3;
	};
	class rhs_mag_9m117m_8: rhs_mag_9m117m_3
	{
		count=8;
	};
	class rhs_mag_9m117m1_3: rhs_mag_9m117_3
	{
		displayName="$STR_RHS_MAG_3UBK23";
		displayNameShort="$STR_RHS_MAG_SH_3UBK23";
		ammo="rhs_ammo_9m117m";
		count=3;
	};
	class rhs_mag_9m117m1_8: rhs_mag_9m117m1_3
	{
		count=8;
	};
	class rhs_mag_9m118_3: rhs_mag_9m117_3
	{
		displayName="$STR_RHS_MAG_3UBK102";
		displayNameShort="$STR_RHS_MAG_SH_3UBK102";
		canlock=1;
		ammo="rhs_ammo_9m118";
		count=3;
		initSpeed=100;
	};
	class rhs_mag_9m119_6: rhs_mag_9m112_6
	{
		scope=2;
		canLock=0;
		displayName="$STR_RHS_MAG_9M119";
		displayNameShort="$STR_RHS_MAG_SH_9M119";
		ammo="rhs_ammo_9m119";
		count=6;
	};
	class rhs_mag_9m119_4: rhs_mag_9m119_6
	{
		count=4;
	};
	class rhs_mag_9m119rx_6: rhs_mag_9m119_6
	{
		scope=2;
		displayName="$STR_RHS_MAG_9M119RX";
		displayNameShort="$STR_RHS_MAG_SH_9M119RX";
		canLock=0;
		reloadTime=8;
		magazineReloadTime=8;
		ammo="rhs_ammo_9m119";
		count=6;
		initSpeed=120;
		maxleadspeed=50;
		nameSound="missiles";
	};
	class rhs_mag_9m119m_6: rhs_mag_9m112_6
	{
		scope=2;
		canLock=0;
		displayName="$STR_RHS_MAG_9M119M";
		displayNameShort="$STR_RHS_MAG_SH_9M119M";
		ammo="rhs_ammo_9m119m";
		count=6;
	};
	class rhs_mag_9m119m_4: rhs_mag_9m119m_6
	{
		count=4;
	};
	class rhs_mag_9m119f_6: rhs_mag_9m112_6
	{
		displayName="$STR_RHS_MAG_9M119F";
		displayNameShort="$STR_RHS_MAG_SH_9M119F";
		ammo="rhs_ammo_9m119f";
	};
	class rhs_mag_9m133_2: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_MAG_9M133";
		displayNameShort="$STR_RHS_MAG_SH_9M133";
		canLock=1;
		reloadTime=8;
		magazineReloadTime=8;
		ammo="rhs_ammo_9m133";
		count=2;
		initSpeed=100;
		maxleadspeed=60;
		nameSound="missiles";
		rhs_magazineIndex=4;
		model="\A3\weapons_f\empty";
	};
	class rhs_mag_9m133: rhs_mag_9m133_2
	{
		count=1;
	};
	class rhs_mag_9m133f_2: rhs_mag_9m133_2
	{
		displayName="$STR_RHS_MAG_9M133F";
		displayNameShort="$STR_RHS_MAG_SH_9M133F";
		ammo="rhs_ammo_9m133f";
	};
	class rhs_mag_9m133f: rhs_mag_9m133f_2
	{
		count=1;
		canLock=0;
	};
	class rhs_mag_9m1331_2: rhs_mag_9m133_2
	{
		displayName="$STR_RHS_MAG_9M1331";
		displayNameShort="$STR_RHS_MAG_SH_9M1331";
		ammo="rhs_ammo_9m1331";
	};
	class rhs_mag_9m1331: rhs_mag_9m1331_2
	{
		count=1;
	};
	class rhs_mag_9m133m2_2: rhs_mag_9m133_2
	{
		displayName="$STR_RHS_MAG_9M133M2";
		displayNameShort="$STR_RHS_MAG_SH_9M133M2";
		ammo="rhs_ammo_9m133m2";
	};
	class rhs_mag_9m133m2: rhs_mag_9m133m2_2
	{
		count=1;
	};
	class rhs_mag_9m133_pylon: rhs_mag_9m133
	{
		hardpoints[]=
		{
			"RHS_HP_T15"
		};
		displayname="9M133";
		displaynameShort="Tandem HEAT";
		descriptionShort="Tandem HEAT. 1,000 mm RHA penetration ";
		pylonWeapon="rhs_weap_9K133M_9M133";
		initSpeed=0;
	};
	class rhs_mag_9m133f_pylon: rhs_mag_9m133f
	{
		hardpoints[]=
		{
			"RHS_HP_T15"
		};
		displayname="9M133F";
		displaynameShort="Thermobaric";
		descriptionShort="Thermobaric 10 kg TNT equivalent";
		pylonWeapon="rhs_weap_9K133M_9M133f";
		initSpeed=0;
	};
	class rhs_mag_9m1331_pylon: rhs_mag_9m1331
	{
		hardpoints[]=
		{
			"RHS_HP_T15"
		};
		displayname="9M131-1";
		displaynameShort="Tandem HEAT";
		descriptionShort="Tandem HEAT. 1,100 mm RHA penetration ";
		pylonWeapon="rhs_weap_9K133M_9M1331";
		initSpeed=0;
	};
	class rhs_mag_9m133m2_pylon: rhs_mag_9m133m2
	{
		hardpoints[]=
		{
			"RHS_HP_T15"
		};
		displayname="9M133M-2";
		displaynameShort="Tandem HEAT";
		descriptionShort="Tandem HEAT. 1,300 mm RHA penetration ";
		pylonWeapon="rhs_weap_9K133M_9M133M2";
		initSpeed=0;
	};
	class rhs_mag_9m133_spare_pylon: rhs_mag_9m133_pylon
	{
		hardpoints[]=
		{
			"RHS_HP_T15_SPARE"
		};
		pylonWeapon="rhs_weap_9K133M_spare";
		ammo="rhs_Laserbeam";
	};
	class rhs_mag_9m133f_spare_pylon: rhs_mag_9m133f_pylon
	{
		hardpoints[]=
		{
			"RHS_HP_T15_SPARE"
		};
		pylonWeapon="rhs_weap_9K133M_spare";
		ammo="rhs_Laserbeam";
	};
	class rhs_mag_9m1331_spare_pylon: rhs_mag_9m1331_pylon
	{
		hardpoints[]=
		{
			"RHS_HP_T15_SPARE"
		};
		pylonWeapon="rhs_weap_9K133M_spare";
		ammo="rhs_Laserbeam";
	};
	class rhs_mag_9m133m2_spare_pylon: rhs_mag_9m133m2_pylon
	{
		hardpoints[]=
		{
			"RHS_HP_T15_SPARE"
		};
		pylonWeapon="rhs_weap_9K133M_spare";
		ammo="rhs_Laserbeam";
	};
	class rhs_mag_3m7_12: VehicleMagazine
	{
		scope=2;
		displayName="3M7";
		canLock=1;
		reloadTime=10;
		magazineReloadTime=8.5;
		ammo="rhs_ammo_3m7";
		count=12;
		initSpeed=100;
		maxleadspeed=40;
		nameSound="missiles";
	};
	class rhs_mag_2Rnd_Igla: Titan_AA
	{
		scope=1;
		displayname="9K32";
		descriptionshort="Range: 800-4200 m <br/>Type: ground-air <br/>Used in: 9K32";
		ammo="rhs_ammo_9k38";
		type="6 * 		256";
		count=2;
		initspeed=40;
		maxleadspeed=320;
		nameSound="missiles";
	};
	class rhs_mag_9M115: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_MAG_9M115";
		displayNameShort="$STR_RHS_MAG_SH_9M115";
		canLock=0;
		reloadTime=8;
		magazineReloadTime=8;
		ammo="rhs_ammo_9m115";
		count=1;
		initSpeed=80;
		maxleadspeed=60;
		nameSound="missiles";
		rhs_magazineIndex=4;
	};
	class rhs_mag_9M131: rhs_mag_9M115
	{
		displayName="$STR_RHS_MAG_9M131";
		displayNameShort="$STR_RHS_MAG_SH_9M131";
		ammo="rhs_ammo_9m131";
	};
	class rhs_mag_9M131M: rhs_mag_9M115
	{
		displayName="$STR_RHS_MAG_9M131m";
		displayNameShort="$STR_RHS_MAG_SH_9M131m";
		ammo="rhs_ammo_9m131m";
	};
	class rhs_mag_9M131F: rhs_mag_9M115
	{
		displayName="$STR_RHS_MAG_9M131f";
		displayNameShort="$STR_RHS_MAG_SH_9M131f";
		ammo="rhs_ammo_9m131f";
	};
	class rhs_mag_9M114: VehicleMagazine
	{
		count=1;
		initspeed=55;
		namesound="missiles";
		displayname="9M114";
		displaynameshort="9M114";
		maxleadspeed=120;
		ammo="rhs_ammo_9M114";
		mass=42.5;
		weight=42.5;
		pylonWeapon="rhs_weap_9K114_launcher";
		hardpoints[]=
		{
			""
		};
	};
	class rhs_mag_9M114_Mi24_2x: rhs_mag_9M114
	{
		model="rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m114_2x";
		count=2;
		mass=85;
		weight=85;
		hardpoints[]=
		{
			"RHS_HP_9m114_Mi24"
		};
	};
	class rhs_mag_9M114M_Mi24_2x: rhs_mag_9M114_Mi24_2x
	{
		displayname="9M114M";
		displaynameshort="9M114M";
		ammo="rhs_ammo_9m114m";
	};
	class rhs_mag_9M114F_Mi24_2x: rhs_mag_9M114_Mi24_2x
	{
		displayname="9M114F";
		displaynameshort="9M114F";
		ammo="rhs_ammo_9m114f";
		pylonWeapon="rhs_weap_9K114f_launcher";
	};
	class rhs_mag_9M114M1_Mi24_2x: rhs_mag_9M114_Mi24_2x
	{
		displayname="9M114M1";
		displaynameshort="9M114M1";
		ammo="rhs_ammo_9m114m1";
	};
	class rhs_mag_9M114M2_Mi24_2x: rhs_mag_9M114_Mi24_2x
	{
		displayname="9M114M2";
		displaynameshort="9M114M2";
		ammo="rhs_ammo_9m114m2";
	};
	class rhs_mag_9m120: rhs_mag_9M114
	{
		ammo="rhs_ammo_9m120";
		displayname="9M120";
		displaynameshort="9M120";
		weight=42.5;
		pylonWeapon="rhs_weap_9m120_launcher";
	};
	class rhs_mag_9M120_Mi24_2x: rhs_mag_9m120
	{
		model="rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m120_2x";
		count=2;
		mass=85;
		weight=85;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi24"
		};
	};
	class rhs_mag_9M120_Mi28_8x: rhs_mag_9m120
	{
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_m_9m120_8x";
		count=8;
		mass=340;
		weight=340;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi28"
		};
	};
	class rhs_mag_9M120_8: rhs_mag_9m120
	{
		count=8;
		weight=340;
	};
	class rhs_mag_9M120_16: rhs_mag_9m120
	{
		count=16;
		weight=680;
	};
	class rhs_mag_9m120m: rhs_mag_9M114
	{
		ammo="rhs_ammo_9m120m";
		displayname="9M120M";
		displaynameshort="9M120M";
		weight=42.5;
		pylonWeapon="rhs_weap_9m120_launcher";
	};
	class rhs_mag_9M120M_Mi24_2x: rhs_mag_9m120m
	{
		model="rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m120_2x";
		count=2;
		mass=85;
		weight=85;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi24"
		};
	};
	class rhs_mag_9M120M_Mi28_8x: rhs_mag_9m120m
	{
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_m_9m120_8x";
		count=8;
		mass=340;
		weight=340;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi28"
		};
	};
	class rhs_mag_9M120m_8: rhs_mag_9m120m
	{
		count=8;
		weight="42.5*8";
	};
	class rhs_mag_9M120m_16: rhs_mag_9m120m
	{
		count=16;
		weight=680;
	};
	class rhs_mag_9m120f: rhs_mag_9M114
	{
		ammo="rhs_ammo_9m120f";
		displayname="9M120F HE";
		displaynameshort="9M120F HE";
		weight=42.5;
		pylonWeapon="rhs_weap_9m120f_launcher";
	};
	class rhs_mag_9M120F_Mi24_2x: rhs_mag_9m120f
	{
		model="rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m120_2x";
		count=2;
		mass=85;
		weight=85;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi24"
		};
	};
	class rhs_mag_9M120f_Mi28_8x: rhs_mag_9m120f
	{
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_m_9m120_8x";
		count=8;
		mass=340;
		weight=340;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi28"
		};
	};
	class rhs_mag_9M120f_8: rhs_mag_9m120f
	{
		count=8;
		weight=340;
	};
	class rhs_mag_9M120f_16: rhs_mag_9m120f
	{
		count=16;
		weight=680;
	};
	class rhs_mag_9m120o: rhs_mag_9M114
	{
		ammo="rhs_ammo_9m120o";
		displayname="9M120O Proximity";
		displaynameshort="9M120O Proximity";
		weight=42.5;
		pylonWeapon="rhs_weap_9m120o_launcher";
	};
	class rhs_mag_9M120O_Mi24_2x: rhs_mag_9m120o
	{
		model="rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_9m120_2x";
		count=2;
		mass=85;
		weight=85;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi24"
		};
	};
	class rhs_mag_9M120O_Mi28_8x: rhs_mag_9m120o
	{
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_m_9m120_8x";
		count=8;
		mass=340;
		weight=340;
		hardpoints[]=
		{
			"RHS_HP_9m120_Mi28"
		};
	};
	class rhs_mag_mi24_empty: VehicleMagazine
	{
		scope=2;
		ammo="rhs_ammo_ptb1500";
		displayName="Empty Shelf";
		count=1;
		mass=8.5;
		weight=8.5;
		nameSound="";
		model="rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_mi24_empty";
		pylonweapon="rhs_weap_DummyLauncher";
		hardpoints[]=
		{
			"RHS_HP_Empty_Mi24"
		};
	};
	class rhs_proxy_ags30_mag: VehicleMagazine
	{
		ammo="rhs_proxy_ags30_mag";
		count=1;
		weight=7;
	};
	class rhs_proxy_ags30_12_mag: rhs_proxy_ags30_mag
	{
		count=12;
		weight=84;
	};
	class rhs_proxy_pkm_18_mag: VehicleMagazine
	{
		ammo="rhs_proxy_pkm_mag";
		count=18;
		weight=7;
	};
	class rhs_mag_9m112: rhs_mag_9m112_6
	{
		count=40;
	};
	class rhs_mag_9m112m: rhs_mag_9m112m_6
	{
		count=40;
	};
	class rhs_mag_9m112m2: rhs_mag_9m112m2_6
	{
		count=40;
	};
	class rhs_mag_9m124: rhs_mag_9m124_6
	{
		count=40;
	};
	class rhs_mag_9m128: rhs_mag_9m128_6
	{
		count=40;
	};
	class rhs_mag_9m119: rhs_mag_9m119_4
	{
		count=40;
	};
	class rhs_mag_9m119rx: rhs_mag_9m119rx_6
	{
		count=40;
	};
	class rhs_mag_9m119m: rhs_mag_9m119m_4
	{
		count=40;
	};
	class rhs_mag_9m119f: rhs_mag_9m119f_6
	{
		count=40;
	};
	class rhs_mag_40Rnd_122mm_rockets: VehicleMagazine
	{
		scope=2;
		count=40;
		initspeed=690;
		ammo="rhs_ammo_m21OF_HE";
		displayname="$STR_RHS_122MMGRAD_NAME";
		nameSound="rockets";
		muzzleImpulseFactor[]={0.5,2};
	};
	class rhs_mag_bm21_base: VehicleMagazine
	{
		scope=0;
		model="\rhsafrf\addons\rhs_heavyweapons\grad\rhs_pylon_bm21";
		pylonWeapon="rhs_weap_bm21";
		nameSound="rockets";
		muzzleImpulseFactor[]={0.5,2};
		count=1;
		initspeed=690;
	};
	class rhs_mag_m21of_1: rhs_mag_bm21_base
	{
		scope=2;
		ammo="rhs_ammo_m21OF_HE";
		displayname="M-21OF";
		displaynameShort="HE";
		descriptionShort="High explosive 18,4kg warhead. 20km range";
		hardpoints[]=
		{
			"RHS_HP_BM21"
		};
	};
	class rhs_mag_9m28f_1: rhs_mag_m21of_1
	{
		ammo="rhs_ammo_9m28f";
		displayname="9M28F";
		displaynameShort="HE FRAG";
		descriptionShort="High explosive fragmentation 21kg warhead. 15km range";
		pylonWeapon="rhs_weap_bm21_9m28f";
	};
	class rhs_mag_9m28k_1: rhs_mag_m21of_1
	{
		ammo="rhs_ammo_9m28k";
		displayname="9M28K";
		displaynameShort="Cluster AT Mine";
		descriptionShort="Cluster AT mine munition. Deploys 3 PTM-3 mines. 13km range";
		pylonWeapon="rhs_weap_bm21_9m28k";
	};
	class rhs_mag_9m218_1: rhs_mag_m21of_1
	{
		ammo="rhs_ammo_9m218";
		displayname="9M218";
		displaynameShort="Cluster HEAT";
		descriptionShort="Cluster HEAT munition. Deploys 45 HEAT elements with penetration ability up to 160mm. 30km range";
		pylonWeapon="rhs_weap_bm21_9m218";
	};
	class rhs_mag_9m521_1: rhs_mag_m21of_1
	{
		ammo="rhs_ammo_9m521";
		displayname="9M521";
		displaynameShort="HE FRAG";
		pylonWeapon="rhs_weap_bm21_9m521";
		descriptionShort="High explosive fragmentation extended range 21kg warhead. 40km range";
	};
	class rhs_mag_9m522_1: rhs_mag_m21of_1
	{
		ammo="rhs_ammo_9m522";
		displayname="9M522";
		displaynameShort="HE FRAG";
		descriptionShort="High explosive fragmentation extended range 25kg warhead. 37km range";
		pylonWeapon="rhs_weap_bm21_9m522";
	};
	class rhs_mag_pg15v_24: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_MAG_PG15V";
		displayNameShort="$STR_RHS_MAG_SH_PG15V";
		ammo="rhs_ammo_pg15v";
		count=24;
		initSpeed=690;
	};
	class rhs_mag_pg15v_20: rhs_mag_pg15v_24
	{
		count=20;
	};
	class rhs_mag_pg15v_12: rhs_mag_pg15v_24
	{
		count=12;
	};
	class rhs_mag_og15v_16: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_MAG_OG15V";
		displayNameShort="$STR_RHS_MAG_SH_OG15V";
		ammo="rhs_ammo_og15v";
		count=16;
		initSpeed=290;
	};
	class rhs_mag_og15v_20: rhs_mag_og15v_16
	{
		count=20;
	};
	class rhs_mag_og15v_8: rhs_mag_og15v_16
	{
		count=8;
	};
	class rhs_mag_pg9v: rhs_mag_pg15v_24
	{
		displayName="$STR_RHS_MAG_PG9V";
		displayNameShort="$STR_RHS_MAG_SH_PG9V";
		ammo="rhs_ammo_pg9v";
		count=1;
		initSpeed=435;
	};
	class rhs_mag_pg9n: rhs_mag_pg9v
	{
		displayName="$STR_RHS_MAG_PG9N";
		displayNameShort="$STR_RHS_MAG_SH_PG9N";
		ammo="rhs_ammo_pg9n";
	};
	class rhs_mag_pg9vnt: rhs_mag_pg9v
	{
		displayName="$STR_RHS_MAG_PG9VNT";
		displayNameShort="$STR_RHS_MAG_SH_PG9VNT";
		ammo="rhs_ammo_pg9vnt";
		initSpeed=400;
	};
	class rhs_mag_og9v: rhs_mag_og15v_16
	{
		displayName="$STR_RHS_MAG_OG9V";
		displayNameShort="$STR_RHS_MAG_SH_OG9V";
		ammo="rhs_ammo_og9v";
		count=1;
		initSpeed=316;
	};
	class rhs_mag_og9vm: rhs_mag_og9v
	{
		displayName="$STR_RHS_MAG_OG9VM";
		displayNameShort="$STR_RHS_MAG_SH_OG9VM";
		ammo="rhs_ammo_og9vm";
	};
	class rhs_mag_3uor6_230: 450Rnd_127x108_Ball
	{
		displayName="$STR_RHS_MAG_3UOR6";
		displayNameShort="$STR_RHS_MAG_SH_3UOR6";
		nameSound="heat";
		ammo="rhs_ammo_3uor6";
		count=230;
		maxLeadSpeed=25;
		initSpeed=1120;
		tracersEvery=4;
		weight="0.385*230";
		rhs_magazineIndex=5;
	};
	class rhs_mag_3uor6_125: rhs_mag_3uor6_230
	{
		count=125;
		weight=48.125;
	};
	class rhs_mag_3uor6_150: rhs_mag_3uor6_230
	{
		count=150;
		weight=57.75;
	};
	class rhs_mag_3uor6_180: rhs_mag_3uor6_230
	{
		count=180;
		weight=69.300003;
	};
	class rhs_mag_3uor6_200: rhs_mag_3uor6_230
	{
		count=200;
		weight=77;
	};
	class rhs_mag_3uor6_237: rhs_mag_3uor6_230
	{
		count=237;
		weight=91.245003;
	};
	class rhs_mag_3uor6_250: rhs_mag_3uor6_230
	{
		count=250;
		weight=96.25;
	};
	class rhs_mag_3uor6_305: rhs_mag_3uor6_230
	{
		count=305;
		weight=117.425;
	};
	class rhs_mag_3uor6_340: rhs_mag_3uor6_230
	{
		count=340;
		weight=130.89999;
	};
	class rhs_mag_3uof8_230: rhs_mag_3uor6_230
	{
		displayName="$STR_RHS_MAG_3UOF8";
		displayNameShort="$STR_RHS_MAG_SH_3UOF8";
		ammo="rhs_ammo_3uof8";
		initSpeed=960;
		weight=89.470001;
	};
	class rhs_mag_3uof8_125: rhs_mag_3uof8_230
	{
		count=125;
		weight=48.625;
	};
	class rhs_mag_3uof8_150: rhs_mag_3uof8_230
	{
		count=150;
		weight=58.349998;
	};
	class rhs_mag_3uof8_180: rhs_mag_3uof8_230
	{
		count=180;
		weight=70.019997;
	};
	class rhs_mag_3uof8_200: rhs_mag_3uof8_230
	{
		count=200;
		weight=77.800003;
	};
	class rhs_mag_3uof8_237: rhs_mag_3uof8_230
	{
		count=237;
		weight=92.193001;
	};
	class rhs_mag_3uof8_250: rhs_mag_3uof8_230
	{
		count=250;
		weight=97.25;
	};
	class rhs_mag_3uof8_305: rhs_mag_3uof8_230
	{
		count=305;
		weight=118.645;
	};
	class rhs_mag_3uof8_340: rhs_mag_3uof8_230
	{
		count=340;
		weight=132.25999;
	};
	class rhs_mag_3ubr6_230: rhs_mag_3uor6_230
	{
		displayName="$STR_RHS_MAG_3UBR6";
		displayNameShort="$STR_RHS_MAG_SH_3UBR6";
		ammo="rhs_ammo_3ubr6";
		nameSound="sabot";
		weight=92;
		tracersEvery=3;
		rhs_magazineIndex=6;
	};
	class rhs_mag_3ubr6_100: rhs_mag_3ubr6_230
	{
		count=100;
		weight=40;
	};
	class rhs_mag_3ubr6_120: rhs_mag_3ubr6_230
	{
		count=120;
		weight=48;
	};
	class rhs_mag_3ubr6_125: rhs_mag_3ubr6_230
	{
		count=125;
		weight=50;
	};
	class rhs_mag_3ubr6_150: rhs_mag_3ubr6_230
	{
		count=150;
		weight=60;
	};
	class rhs_mag_3ubr6_160: rhs_mag_3ubr6_230
	{
		count=160;
		weight=64;
	};
	class rhs_mag_3ubr6_195: rhs_mag_3ubr6_230
	{
		count=195;
		weight=78;
	};
	class rhs_mag_3ubr6_227: rhs_mag_3ubr6_230
	{
		count=227;
		weight=90.800003;
	};
	class rhs_mag_3ubr6_250: rhs_mag_3ubr6_230
	{
		count=250;
		weight=100;
	};
	class rhs_mag_3ubr8_230: rhs_mag_3ubr6_230
	{
		displayName="$STR_RHS_MAG_3UBR8";
		displayNameShort="$STR_RHS_MAG_SH_3UBR8";
		ammo="rhs_ammo_3ubr8";
		weight=69;
	};
	class rhs_mag_3ubr8_100: rhs_mag_3ubr8_230
	{
		count=100;
		weight=40;
	};
	class rhs_mag_3ubr8_120: rhs_mag_3ubr8_230
	{
		count=120;
		weight=48;
	};
	class rhs_mag_3ubr8_125: rhs_mag_3ubr8_230
	{
		count=125;
		weight=37.5;
	};
	class rhs_mag_3ubr8_150: rhs_mag_3ubr8_230
	{
		count=150;
		weight=45;
	};
	class rhs_mag_3ubr8_160: rhs_mag_3ubr8_230
	{
		count=160;
		weight=48;
	};
	class rhs_mag_3ubr8_195: rhs_mag_3ubr8_230
	{
		count=195;
		weight=58.5;
	};
	class rhs_mag_3ubr8_227: rhs_mag_3ubr8_230
	{
		count=227;
		weight=68.099998;
	};
	class rhs_mag_3ubr8_250: rhs_mag_3ubr8_230
	{
		count=250;
		weight=75;
	};
	class rhs_mag_3ubr11_230: rhs_mag_3ubr6_230
	{
		displayName="$STR_RHS_MAG_3UBR11";
		displayNameShort="$STR_RHS_MAG_SH_3UBR11";
		ammo="rhs_ammo_3ubr11";
		weight=69;
	};
	class rhs_mag_3ubr11_100: rhs_mag_3ubr11_230
	{
		count=100;
		weight=40;
	};
	class rhs_mag_3ubr11_120: rhs_mag_3ubr11_230
	{
		count=120;
		weight=48;
	};
	class rhs_mag_3ubr11_125: rhs_mag_3ubr11_230
	{
		count=125;
		weight=37.5;
	};
	class rhs_mag_3ubr11_150: rhs_mag_3ubr11_230
	{
		count=150;
		weight=45;
	};
	class rhs_mag_3ubr11_160: rhs_mag_3ubr11_230
	{
		count=160;
		weight=48;
	};
	class rhs_mag_3ubr11_195: rhs_mag_3ubr11_230
	{
		count=195;
		weight=58.5;
	};
	class rhs_mag_3ubr11_227: rhs_mag_3ubr11_230
	{
		count=227;
		weight=68.099998;
	};
	class rhs_mag_3ubr11_250: rhs_mag_3ubr11_230
	{
		count=250;
		weight=75;
	};
	class rhs_mag_AZP23_250: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_AZP23_NAME";
		ammo="RHS_ammo_23mm_AA";
		count=250;
		initSpeed=980;
		maxLeadSpeed=650;
		nameSound="cannon";
		tracersEvery=1;
	};
	class rhs_mag_AZP23_250_mixed: rhs_mag_AZP23_250
	{
		ammo="RHS_ammo_23mm_AA_mixed";
	};
	class rhs_mag_AZP23_250_ap: rhs_mag_AZP23_250
	{
		ammo="rhs_ammo_bzt_23x115mm";
	};
	class rhs_mag_AZP23_2000: rhs_mag_AZP23_250
	{
		count=2000;
	};
	class rhs_mag_AZP23_2000_mixed: rhs_mag_AZP23_2000
	{
		ammo="RHS_ammo_23mm_AA_mixed";
	};
	class rhs_mag_AZP23_100: rhs_mag_AZP23_250
	{
		count=100;
		muzzleImpulseFactor[]={0.5,0.2};
	};
	class rhs_mag_AZP23_100_veh: rhs_mag_AZP23_100
	{
		muzzleImpulseFactor[]={0.30000001,1.2};
	};
	class rhs_mag_AZP23_100_ap: rhs_mag_AZP23_250_ap
	{
		count=100;
	};
	class rhs_mag_AZP23_100_ap_veh: rhs_mag_AZP23_100_ap
	{
		muzzleImpulseFactor[]={0.30000001,1.2};
	};
	class rhs_mag_AM23_500: rhs_mag_AZP23_250
	{
		initSpeed=720;
		count=500;
	};
	class rhs_mag_gsh30_ofzt_750: rhs_mag_3ubr6_230
	{
		displayName="$STR_RHS_MAG_OFZT30GSH";
		displayNameShort="$STR_RHS_MAG_SH_OFZT30GSH";
		ammo="rhs_ammo_3uof8";
		count=750;
		tracersEvery=1;
		initSpeed=817;
		maxLeadSpeed=300;
		weight="0.390*750";
	};
	class rhs_mag_gsh30_bt_750: rhs_mag_3uor6_230
	{
		displayName="$STR_RHS_MAG_BT30GSH";
		displayNameShort="$STR_RHS_MAG_SH_BT30GSH";
		ammo="rhs_ammo_gsh30_bt";
		count=750;
		weight=292.5;
		maxLeadSpeed=300;
	};
	class rhs_mag_gsh30_ofzt_250: rhs_mag_gsh30_ofzt_750
	{
		count=250;
		weight=97.5;
		maxLeadSpeed=300;
		muzzleImpulseFactor[]={0.5,1.2};
	};
	class rhs_mag_gsh30_bt_250: rhs_mag_gsh30_bt_750
	{
		count=250;
		weight=97.5;
		maxLeadSpeed=300;
		muzzleImpulseFactor[]={0.5,1.2};
	};
	class rhs_mag_gsh30_bt_150: rhs_mag_gsh30_bt_250
	{
		count=150;
		weight=58.5;
	};
	class rhs_mag_gsh30_mixed_150: rhs_mag_gsh30_bt_150
	{
		ammo="rhs_ammo_gsh30_mixed";
	};
	class rhs_mag_762x54mm_100: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_MAG_762X54MM";
		displayNameShort="$STR_RHS_MAG_SH_762X54MM";
		count=100;
		ammo="rhs_B_762x54_Ball";
		initSpeed=855;
		tracersEvery=4;
		nameSound="mgun";
		rhs_magazineIndex=7;
	};
	class rhs_mag_762x54mm_250: rhs_mag_762x54mm_100
	{
		count=250;
	};
	class rhs_mag_762x54mm_500: rhs_mag_762x54mm_100
	{
		count=500;
	};
	class rhs_mag_762x54mm_1000: rhs_mag_762x54mm_100
	{
		count=1000;
	};
	class rhs_mag_762x54mm_2000: rhs_mag_762x54mm_100
	{
		count=2000;
	};
	class rhs_mag_127x108mm_50: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_MAG_127X108MM";
		displayNameShort="$STR_RHS_MAG_SH_127X108MM";
		count=50;
		ammo="rhs_ammo_127x108mm";
		initSpeed=817;
		tracersEvery=4;
		nameSound="mgun";
		weight="0.13*50";
		ace_isbelt=1;
	};
	class rhs_mag_127x108mm_100: rhs_mag_127x108mm_50
	{
		count=100;
		weight=13;
	};
	class rhs_mag_127x108mm_150: rhs_mag_127x108mm_50
	{
		count=150;
		weight=19.5;
		ace_isbelt=0;
	};
	class rhs_mag_127x108mm_300: rhs_mag_127x108mm_50
	{
		count=300;
		weight=39;
	};
	class rhs_mag_127x108mm_1470: rhs_mag_127x108mm_50
	{
		ammo="rhs_ammo_127x108mm_x5";
		tracersEvery=1;
		count=1470;
		weight=191.10001;
		maxLeadSpeed=300;
		ace_isbelt=0;
	};
	class rhs_mag_127x108mm_1slt_1470: rhs_mag_127x108mm_1470
	{
		ammo="rhs_ammo_127x108mm_1SLT";
		displayName="$STR_RHS_MAG_127X108MM_1SLT";
		displayNameShort="$STR_RHS_MAG_SH_127X108MM_1SLT";
		tracersEvery=1;
		weight=208.74001;
		initSpeed=735;
	};
	class rhs_mag_145x115mm_50: VehicleMagazine
	{
		displayName="$STR_RHS_MAG_145X115MM";
		displayNameShort="$STR_RHS_MAG_SH_145X115MM";
		count=50;
		ammo="rhs_ammo_145x115mm";
		initSpeed=988;
		tracersEvery=4;
		nameSound="mgun";
	};
	class RHS_mag_VOG30_30: VehicleMagazine
	{
		displayName="$STR_RHS_MAG_VOG30";
		displayNameShort="$STR_RHS_MAG_SH_VOG30";
		count=30;
		ammo="rhs_ammo_VOG30";
		initSpeed=185;
		nameSound="handgrenade";
		ace_isbelt=1;
	};
	class RHS_mag_GPD30_30: RHS_mag_VOG30_30
	{
		displayName="$STR_RHS_MAG_GPD30";
		displayNameShort="$STR_RHS_MAG_SH_GPD30";
		ammo="rhs_ammo_GPD30";
	};
	class RHS_mag_VOG17m_30: RHS_mag_VOG30_30
	{
		displayName="$STR_RHS_MAG_VOG17m";
		displayNameShort="$STR_RHS_MAG_SH_VOG17m";
		ammo="rhs_ammo_VOG17m";
	};
	class rhs_mag_fold_stock: CA_Magazine
	{
		scope=1;
		count=1;
		mass=0;
		picture="\A3\Weapons_F\Data\clear_empty.paa";
	};
	class rhs_30Rnd_545x39_AK: CA_Magazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_AK_ca.paa";
		scope=1;
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_7N6_BAKELITE";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_Desc_0";
		displayNameShort="7N6";
		model="\rhsafrf\addons\rhs_weapons3\magazines\rhs_ak_bklt_mag";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l20_30rnd.p3d";
		modelSpecialIsProxy=1;
		ammo="rhs_B_545x39_Ball";
		count=30;
		mass=9.0900002;
		initSpeed=915;
		tracersEvery=0;
		lastRoundsTracer=0;
	};
	class rhs_30Rnd_545x39_7N6_AK: rhs_30Rnd_545x39_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_AK_ca.paa";
		scope=2;
	};
	class rhs_30Rnd_545x39_7N6_green_AK: rhs_30Rnd_545x39_7N6_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N6_green_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_7N6_GREEN_BAKELITE";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons3\aks74\data\rhs_aks74mag3_co.paa"
		};
		model="\rhsafrf\addons\rhs_weapons3\magazines\rhs_ak_bklt_mag_green";
	};
	class rhs_30Rnd_545x39_AK_no_tracers: rhs_30Rnd_545x39_7N6_AK
	{
		scope=1;
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_AK_no_tracers_ca.paa";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_Desc_0";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_NO_TRACERS";
		ammo="rhs_B_545x39_Ball_Tracer_Green";
		initSpeed=883;
		lastRoundsTracer=0;
	};
	class rhs_30Rnd_545x39_AK_green: rhs_30Rnd_545x39_7N6_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_AK_green_ca.paa";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_GREEN_Desc_0";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_GREEN0_BAKELITE";
		displayNameShort="7T3M Tracer";
		ammo="rhs_B_545x39_Ball_Tracer_Green";
		initSpeed=883;
		tracersEvery=1;
	};
	class rhs_30Rnd_545x39_AK_plum_green: rhs_30Rnd_545x39_AK_green
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N6M_plum_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_GREEN0_PLUM";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_plum";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"
		};
	};
	class rhs_30Rnd_545x39_7N6M_AK: rhs_30Rnd_545x39_7N6_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_7N6M_BAKELITE";
		displayNameShort="7N6M";
		ammo="rhs_B_545x39_7N6_Ball";
		initSpeed=880;
	};
	class rhs_30Rnd_545x39_7N6M_green_AK: rhs_30Rnd_545x39_7N6M_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N6_green_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_7N6M_GREEN_BAKELITE";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons3\aks74\data\rhs_aks74mag3_co.paa"
		};
		model="\rhsafrf\addons\rhs_weapons3\magazines\rhs_ak_bklt_mag_green";
	};
	class rhs_30Rnd_545x39_7N6M_plum_AK: rhs_30Rnd_545x39_7N6M_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N6M_plum_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_7N6M_PLUM";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_plum";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"
		};
	};
	class rhs_30Rnd_545x39_7N10_AK: rhs_30Rnd_545x39_7N6_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG1";
		displayNameShort="7N10";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag";
		ammo="rhs_B_545x39_7N10_Ball";
		initSpeed=880;
	};
	class rhs_30Rnd_545x39_7N10_plum_AK: rhs_30Rnd_545x39_7N10_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_plum_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG1_PLUM";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"
		};
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_plum";
	};
	class rhs_30Rnd_545x39_7N10_desert_AK: rhs_30Rnd_545x39_7N10_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_desert_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG1_DESERT";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"
		};
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_des";
	};
	class rhs_30Rnd_545x39_7N10_camo_AK: rhs_30Rnd_545x39_7N10_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_camo_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG1_CAMO";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"
		};
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_camo";
	};
	class rhs_30Rnd_545x39_7N22_AK: rhs_30Rnd_545x39_7N10_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N22_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG2";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_Desc_1";
		displayNameShort="7N22 - AP";
		ammo="rhs_B_545x39_7N22_Ball";
		initSpeed=890;
	};
	class rhs_30Rnd_545x39_7N22_plum_AK: rhs_30Rnd_545x39_7N22_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N22_plum_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG2_PLUM";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"
		};
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_plum";
	};
	class rhs_30Rnd_545x39_7N22_desert_AK: rhs_30Rnd_545x39_7N22_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N22_desert_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG2_DESERT";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"
		};
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_des";
	};
	class rhs_30Rnd_545x39_7N22_camo_AK: rhs_30Rnd_545x39_7N22_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N22_camo_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG2_CAMO";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"
		};
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag_camo";
	};
	class rhs_30Rnd_545x39_7U1_AK: rhs_30Rnd_545x39_7N10_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7U1_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG3";
		displayNameShort="7U1 Subsonic";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG_Desc_2";
		ammo="rhs_B_545x39_7U1_Ball";
		initSpeed=303;
		lastRoundsTracer=0;
	};
	class rhs_30Rnd_545x39_7N10_2mag_AK: rhs_30Rnd_545x39_7N10_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_2mag_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_2MAG";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23x2_30rnd.p3d";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag";
		mass=13.09;
	};
	class rhs_30Rnd_545x39_7N10_2mag_plum_AK: rhs_30Rnd_545x39_7N10_2mag_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_2mag_plum_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_2MAG_PLUM";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\rhs_ak74_new_co.paa"
		};
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag_plum";
	};
	class rhs_30Rnd_545x39_7N10_2mag_desert_AK: rhs_30Rnd_545x39_7N10_2mag_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_2mag_desert_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_2MAG_DESERT";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK74MPaint_co.paa"
		};
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag_des";
	};
	class rhs_30Rnd_545x39_7N10_2mag_camo_AK: rhs_30Rnd_545x39_7N10_2mag_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_545x39_7N10_2mag_camo_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_2MAG_CAMO";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\texture\AK74MCamo_co.paa"
		};
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_2mag_camo";
	};
	class rhs_45Rnd_545X39_7N22_AK: rhs_30Rnd_545x39_7N22_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_45RND_545X39_Mag2";
		descriptionShort="$STR_RHS_CFGMAGAZINES_45RND_545X39_MAG_Desc_1";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d";
		mass=13.64;
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_45rnd_bklt_mag";
		count=45;
	};
	class rhs_45Rnd_545X39_7N10_AK: rhs_30Rnd_545x39_7N10_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_45RND_545X39_Mag1";
		descriptionShort="$STR_RHS_CFGMAGAZINES_45RND_545X39_MAG_Desc_1";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d";
		mass=13.64;
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_45rnd_bklt_mag";
		count=45;
	};
	class rhs_45Rnd_545X39_7N6_AK: rhs_30Rnd_545x39_7N6_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_45RND_545X39_7N6";
		descriptionShort="$STR_RHS_CFGMAGAZINES_45RND_545X39_MAG_Desc_0";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d";
		mass=13.64;
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_45rnd_bklt_mag";
		count=45;
	};
	class rhs_45Rnd_545X39_7N6M_AK: rhs_30Rnd_545x39_7N6M_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_45RND_545X39_7N6M";
		descriptionShort="$STR_RHS_CFGMAGAZINES_45RND_545X39_MAG_Desc_0";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d";
		mass=13.64;
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_45rnd_bklt_mag";
		count=45;
	};
	class rhs_45Rnd_545X39_AK_Green: rhs_30Rnd_545x39_AK_green
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_45RND_545X39_MAG_GREEN0";
		descriptionShort="$STR_RHS_CFGMAGAZINES_45RND_545X39_MAG_Desc_0";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d";
		mass=13.64;
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_45rnd_bklt_mag";
		count=45;
	};
	class rhs_45Rnd_545X39_AK: rhs_30Rnd_545x39_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_45RND_545X39_Mag0";
		descriptionShort="$STR_RHS_CFGMAGAZINES_45RND_545X39_MAG_GREEN_Desc_0";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d";
		mass=13.64;
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_45rnd_bklt_mag";
		count=45;
	};
	class rhs_45Rnd_545X39_7U1_AK: rhs_30Rnd_545x39_7U1_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_45Rnd_545X39_7N6_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_45RND_545X39_Mag3";
		descriptionShort="$STR_RHS_CFGMAGAZINES_45RND_545X39_MAG_Desc_2";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l18_45rnd.p3d";
		mass=13.64;
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_45rnd_bklt_mag";
		count=45;
	};
	class rhs_60Rnd_545X39_7N22_AK: rhs_30Rnd_545x39_7N22_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_60Rnd_545X39_7N10_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_60RND_545X39_Mag2";
		descriptionShort="$STR_RHS_CFGMAGAZINES_60RND_545X39_MAG_Desc_1";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l31_60rnd.p3d";
		mass=19.690001;
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_60rnd_mag_black";
		count=60;
	};
	class rhs_60Rnd_545X39_7N10_AK: rhs_30Rnd_545x39_7N10_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_60Rnd_545X39_7N10_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_60RND_545X39_Mag1";
		descriptionShort="$STR_RHS_CFGMAGAZINES_60RND_545X39_MAG_Desc_1";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l31_60rnd.p3d";
		mass=19.690001;
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_60rnd_mag_black";
		count=60;
	};
	class rhs_60Rnd_545X39_AK_Green: rhs_30Rnd_545x39_AK_green
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_60Rnd_545X39_7N10_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_60RND_545X39_MAG_GREEN0";
		descriptionShort="$STR_RHS_CFGMAGAZINES_60RND_545X39_MAG_Desc_0";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l31_60rnd.p3d";
		mass=19.690001;
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_60rnd_mag_black";
		count=60;
	};
	class rhs_60Rnd_545X39_7U1_AK: rhs_30Rnd_545x39_7U1_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_60Rnd_545X39_7N10_AK_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_60RND_545X39_Mag3";
		descriptionShort="$STR_RHS_CFGMAGAZINES_60RND_545X39_MAG_Desc_2";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l31_60rnd.p3d";
		mass=19.690001;
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_60rnd_mag_black";
		count=60;
	};
	class rhs_VOG25: 1Rnd_HE_Grenade_shell
	{
		author="$STR_RHS_AUTHOR_FULL";
		descriptionshort="$STR_RHS_VOG25_DES";
		displayName="$STR_RHS_VOG25_NAME";
		displaynameshort="HE Grenade";
		picture="\rhsafrf\addons\rhs_weapons\gear\rhs_vog25_ca.paa";
		model="\rhsafrf\addons\rhs_weapons2\vogs\rhs_vog25";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vog25";
		modelSpecialIsProxy=1;
		ammo="rhs_g_vog25";
		count=1;
		mass=4.125;
		initspeed=76.5;
	};
	class rhs_VOG25P: rhs_VOG25
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_VOG25P_NAME";
		descriptionshort="$STR_RHS_VOG25P_DES";
		displaynameshort="HE-T Grenade";
		picture="\rhsafrf\addons\rhs_weapons\gear\rhs_vog25p_ca.paa";
		model="\rhsafrf\addons\rhs_weapons2\vogs\rhs_vog25p";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vog25p";
		ammo="rhs_g_vog25p";
		initspeed=75;
	};
	class rhs_VG40TB: rhs_VOG25
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_VG40TB_NAME";
		picture="\rhsafrf\addons\rhs_weapons\gear\rhs_vg40tb_ca.paa";
		model="\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
		displaynameshort="Thermobaric";
		descriptionshort="$STR_RHS_VG40TB_DES";
		ammo="rhs_g_vg40tb";
		initspeed=70;
	};
	class rhs_VG40SZ: rhs_VOG25
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_VG40SZ_NAME";
		displaynameshort="Stun Grenade";
		descriptionshort="$STR_RHS_VG40SZ_DES";
		picture="\rhsafrf\addons\rhs_weapons\gear\rhs_vg40sz_ca.paa";
		model="\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
		ammo="rhs_g_vg40sz";
		initspeed=70;
	};
	class rhs_VG40OP_white: rhs_VOG25
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_VG40OP_NAME";
		displaynameshort="White Flare";
		descriptionshort="$STR_RHS_VG40OP_DES";
		ammo="rhs_40mm_white";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
		initspeed=70;
	};
	class rhs_VG40OP_green: rhs_VG40OP_white
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_VG40OPGREEN_NAME";
		displaynameshort="Green Flare";
		ammo="rhs_40mm_green";
		initspeed=70;
	};
	class rhs_VG40OP_red: rhs_VG40OP_white
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_VG40OPRED_NAME";
		displaynameshort="Red Flare";
		ammo="rhs_40mm_red";
		initspeed=70;
	};
	class rhs_GRD40_White: rhs_VOG25
	{
		author="$STR_RHS_AUTHOR_FULL";
		displaynameshort="White Smoke";
		displayName="$STR_RHS_GRD40WHITE_NAME";
		descriptionshort="$STR_RHS_GRD40_DES";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
		picture="\rhsafrf\addons\rhs_weapons\gear\rhs_gd40dm_white_ca.paa";
		ammo="rhs_g_vg40md_white";
		model="\rhsafrf\addons\rhs_weapons2\vogs\rhs_gdm40";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_gdm40";
	};
	class rhs_GRD40_Green: rhs_GRD40_White
	{
		author="$STR_RHS_AUTHOR_FULL";
		displaynameshort="Green Smoke";
		displayName="$STR_RHS_GRD40GREEN_NAME";
		descriptionShort="Type: Smoke Grenade - Green<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: GP-25";
		picture="\rhsafrf\addons\rhs_weapons\gear\rhs_gd40dm_green_ca.paa";
		ammo="rhs_g_vg40md_green";
		initspeed=70;
	};
	class rhs_GRD40_Red: rhs_GRD40_White
	{
		author="$STR_RHS_AUTHOR_FULL";
		displaynameshort="Red Smoke";
		displayName="$STR_RHS_GRD40RED_NAME";
		descriptionShort="Type: Smoke Grenade - Red<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: GP-25";
		picture="\rhsafrf\addons\rhs_weapons\gear\rhs_gd40dm_red_ca.paa";
		ammo="rhs_g_vg40md_red";
	};
	class rhs_VG40MD: rhs_GRD40_White
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_g_vg40md";
		displayName="VG-40MD";
		displaynameshort="Impact Smoke";
		picture="\rhsafrf\addons\rhs_weapons2\gear\rhs_vg40md_white_ca.paa";
		model="\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
		initspeed=76.5;
	};
	class rhs_VG40MD_White: rhs_GRD40_White
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=1;
		displayName="$STR_RHS_VG40MDWHITE_NAME";
		picture="\rhsafrf\addons\rhs_weapons2\gear\rhs_vg40md_white_ca.paa";
		model="\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
	};
	class rhs_VG40MD_Green: rhs_GRD40_Green
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=1;
		displayName="$STR_RHS_VG40MDGREEN_NAME";
		picture="\rhsafrf\addons\rhs_weapons2\gear\rhs_vg40md_green_ca.paa";
		model="\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
	};
	class rhs_VG40MD_Red: rhs_GRD40_Red
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=1;
		displayName="$STR_RHS_VG40MDRED_NAME";
		picture="\rhsafrf\addons\rhs_weapons2\gear\rhs_vg40md_red_ca.paa";
		model="\rhsafrf\addons\rhs_weapons2\vogs\rhs_vg40md";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_vg40md";
	};
	class rhs_GDM40: rhs_GRD40_White
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_GDM40_NAME";
		descriptionShort="$STR_RHS_GDM40_DES";
		displaynameshort="Fast Smoke";
		ammo="rhs_g_gdm40";
		picture="\rhsafrf\addons\rhs_weapons2\gear\rhs_gdm40_ca.paa";
		model="\rhsafrf\addons\rhs_weapons2\vogs\rhs_gdm40";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_gdm40";
		initspeed=55;
	};
	class rhs_100Rnd_762x54mmR: rhs_30Rnd_545x39_7N6_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG0";
		descriptionShort="$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG_Desc_0";
		displayNameShort="57-N-323S";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_pk_mag";
		picture="\rhsafrf\addons\rhs_weapons\icons\pkpbox_ca.paa";
		ammo="rhs_B_762x54_Ball";
		count=100;
		mass=64.349998;
		initSpeed=798;
		tracersevery=5;
		ace_isbelt=1;
	};
	class rhs_100Rnd_762x54mmR_green: rhs_100Rnd_762x54mmR
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG0_GREEN";
		descriptionShort="$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG_Desc_2";
		displayNameShort="57-N-323S Tracer";
		ammo="rhs_B_762x54_Ball_Tracer_Green";
		initSpeed=798;
		tracersevery=1;
	};
	class rhs_100Rnd_762x54mmR_7N13: rhs_100Rnd_762x54mmR
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG1";
		descriptionShort="$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG_Desc_1";
		displayNameShort="7N13 AP";
		ammo="rhs_B_762x54_7N13_Ball";
	};
	class rhs_100Rnd_762x54mmR_7N26: rhs_100Rnd_762x54mmR
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG2";
		descriptionShort="$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG_Desc_1";
		displayNameShort="7N26 AP-I";
		ammo="rhs_B_762x54_7N26_Ball";
		initSpeed=835;
	};
	class rhs_100Rnd_762x54mmR_7BZ3: rhs_100Rnd_762x54mmR_7N13
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG3";
		descriptionShort="$STR_RHS_CFGMAGAZINES_100RND_762X51_MAG_Desc_3";
		displayNameShort="7BZ3 AP";
		ammo="rhs_B_762x54_7BZ3_Ball";
		initSpeed=808;
	};
	class rhs_10Rnd_762x54mmR_7N1: rhs_30Rnd_545x39_7N6_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_10Rnd_762x54mmR_7N1_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_10RND_762X54R_NAME";
		descriptionShort="$STR_RHS_CFGMAGAZINES_10RND_762X51R_MAG_Desc_0";
		displayNameShort="7N1";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_svd_mag";
		ammo="rhs_B_762x54_7N1_Ball";
		initSpeed=823;
		count=10;
		mass=5.1199999;
		lastRoundsTracer=0;
	};
	class rhs_10Rnd_762x54mmR_7N14: rhs_10Rnd_762x54mmR_7N1
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_10RND_762X54R_7N14_NAME";
		descriptionShort="7N14 10rnd SVD Mag";
		displayNameShort="7N14 AP";
		ammo="rhs_B_762x54_7N14_Ball";
		mass=5.9400001;
	};
	class rhs_30Rnd_762x39mm: rhs_30Rnd_545x39_7N6_AK
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_tracer_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG4";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0";
		displayNameShort="57-N-231";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_30rnd";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_steel_mag";
		modelSpecialIsProxy=1;
		ammo="rhs_B_762x39_Ball";
		count=30;
		initSpeed=718;
		mass=13.53;
	};
	class rhs_30Rnd_762x39mm_tracer: rhs_30Rnd_762x39mm
	{
		author="$STR_RHS_AUTHOR_FULL";
		tracersEvery=1;
		ammo="rhs_B_762x39_Tracer";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG5";
		displayNameShort="57-N-231P Tracer";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_2";
	};
	class rhs_30Rnd_762x39mm_89: rhs_30Rnd_762x39mm
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG6";
		displayNameShort="57-N-231(89)";
		ammo="rhs_B_762x39_Ball_89";
	};
	class rhs_30Rnd_762x39mm_U: rhs_30Rnd_762x39mm
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG7";
		displayNameShort="57-N-231U Subsonic";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_3";
		ammo="rhs_B_762x39_U_Ball";
		initSpeed=295;
		lastRoundsTracer=0;
	};
	class rhs_30Rnd_762x39mm_bakelite: rhs_30Rnd_762x39mm
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG4_BAKELITE";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_bklt_mag";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_6l10_30rnd";
		mass=11.7;
	};
	class rhs_30Rnd_762x39mm_bakelite_tracer: rhs_30Rnd_762x39mm_tracer
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG5_BAKELITE";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_bklt_mag";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_6l10_30rnd";
		mass=11.7;
	};
	class rhs_30Rnd_762x39mm_bakelite_89: rhs_30Rnd_762x39mm_89
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG6_BAKELITE";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_bklt_mag";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_6l10_30rnd";
		mass=11.7;
	};
	class rhs_30Rnd_762x39mm_bakelite_U: rhs_30Rnd_762x39mm_U
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG7_BAKELITE";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_bklt_mag";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_6l10_30rnd";
		mass=11.7;
	};
	class rhs_30Rnd_762x39mm_polymer: rhs_30Rnd_762x39mm
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG4_POLYMER";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_89_ca.paa";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steelnew_30rnd";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_103_mag";
		mass=11.47;
	};
	class rhs_30Rnd_762x39mm_polymer_tracer: rhs_30Rnd_762x39mm_tracer
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG5_POLYMER";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_89_ca.paa";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steelnew_30rnd";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_103_mag";
		mass=11.47;
	};
	class rhs_30Rnd_762x39mm_polymer_89: rhs_30Rnd_762x39mm_89
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG6_POLYMER";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_89_ca.paa";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steelnew_30rnd";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_103_mag";
		mass=11.47;
	};
	class rhs_30Rnd_762x39mm_polymer_U: rhs_30Rnd_762x39mm_U
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_30RND_545X39_MAG7_POLYMER";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_30Rnd_762x39mm_89_ca.paa";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steelnew_30rnd";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_103_mag";
		mass=11.47;
	};
	class rhs_10Rnd_762x39mm: rhs_30Rnd_762x39mm
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_10Rnd_762x39mm_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_10RND_545X39_MAG4";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_10rnd_bklt_mag";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_bakelite_10rnd";
		count=10;
		mass=5.5300002;
	};
	class rhs_10Rnd_762x39mm_tracer: rhs_30Rnd_762x39mm_tracer
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_10Rnd_762x39mm_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_10RND_545X39_MAG5";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_10rnd_bklt_mag";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_bakelite_10rnd";
		count=10;
		mass=5.5300002;
	};
	class rhs_10Rnd_762x39mm_89: rhs_30Rnd_762x39mm_89
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_10Rnd_762x39mm_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_10RND_545X39_MAG6";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_10rnd_bklt_mag";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_bakelite_10rnd";
		count=10;
		mass=5.5300002;
	};
	class rhs_10Rnd_762x39mm_U: rhs_30Rnd_762x39mm_U
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_10Rnd_762x39mm_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_10RND_545X39_MAG7";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_10rnd_bklt_mag";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_bakelite_10rnd";
		count=10;
		mass=5.5300002;
	};
	class rhs_75Rnd_762x39mm: rhs_30Rnd_762x39mm
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_75Rnd_762x39mm_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_75RND_762X39_MAG4";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_steel75_mag";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_75rnd";
		count=75;
		mass=33.68;
	};
	class rhs_75Rnd_762x39mm_tracer: rhs_30Rnd_762x39mm_tracer
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_75Rnd_762x39mm_tracer_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_75RND_762X39_MAG5";
		descriptionShort="$STR_RHS_CFGMAGAZINES_30RND_762X39_MAG_Desc_0";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_steel75_mag";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_75rnd";
		count=75;
		mass=33.68;
	};
	class rhs_75Rnd_762x39mm_89: rhs_30Rnd_762x39mm_89
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_75Rnd_762x39mm_89_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_75RND_762X39_MAG6";
		descriptionShort="$STR_RHS_CFGMAGAZINES_75RND_762X39_MAG_Desc_0";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_ak762_steel75_mag";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_762x39_steel_75rnd";
		count=75;
		mass=33.68;
	};
	class rhs_20rnd_9x39mm_SP5: rhs_30Rnd_762x39mm
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_20rnd_9x39mm_SP5_ca.paa";
		ammo="rhs_B_9x39_SP5";
		count=20;
		initSpeed=280;
		lastRoundsTracer=0;
		mass=8.0900002;
		model="\rhsafrf\addons\rhs_weapons2\magazines\rhs_9x39_20mag";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_9x39_6l25_20rnd";
		displayName="$STR_RHS_CFGMAGAZINES_20RND_9X39_MAG_SP5";
		descriptionShort="$STR_RHS_CFGMAGAZINES_20RND_9X39_MAG_Desc_0";
		displayNameShort="SP-5";
	};
	class rhs_20rnd_9x39mm_SP6: rhs_20rnd_9x39mm_SP5
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_20rnd_9x39mm_SP6_ca.paa";
		ammo="rhs_B_9x39_SP6";
		displayName="$STR_RHS_CFGMAGAZINES_20RND_9X39_MAG_SP6";
		descriptionShort="$STR_RHS_CFGMAGAZINES_20RND_9X39_MAG_Desc_1";
		displayNameShort="SP-6";
	};
	class rhs_10rnd_9x39mm_SP5: rhs_20rnd_9x39mm_SP5
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_10rnd_9x39mm_SP5_ca.paa";
		count=10;
		mass=5.4499998;
		model="\rhsafrf\addons\rhs_weapons2\magazines\rhs_9x39_10mag";
		modelSpecial="rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_9x39_6l24_10rnd";
		displayName="$STR_RHS_CFGMAGAZINES_10RND_9X39_MAG_SP5";
		descriptionShort="$STR_RHS_CFGMAGAZINES_10RND_9X39_MAG_Desc_0";
	};
	class rhs_10rnd_9x39mm_SP6: rhs_10rnd_9x39mm_SP5
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_10rnd_9x39mm_SP6_ca.paa";
		ammo="rhs_B_9x39_SP6";
		displayName="$STR_RHS_CFGMAGAZINES_10RND_9X39_MAG_SP6";
		descriptionShort="$STR_RHS_CFGMAGAZINES_10RND_9X39_MAG_Desc_1";
		displayNameShort="SP-6";
	};
	class rhs_5Rnd_338lapua_t5000: rhs_30Rnd_762x39mm
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		model="\rhsafrf\addons\rhs_weapons3\magazines\rhs_t5000_mag";
		displayName="$STR_RHS_CFGMAGAZINES_5RND_338LAPUA_T5000";
		descriptionShort="$STR_RHS_CFGMAGAZINES_5RND_338LAPUA_T5000_Desc_0";
		displayNameShort=".338 Lapua";
		ammo="B_338_Ball";
		count=5;
		initSpeed=925;
		lastRoundsTracer=0;
		mass=1.3200001;
	};
	class rhs_mine_pmn2_mag: ATMine_Range_Mag
	{
		mass=9.2399998;
		ammo="rhs_mine_pmn2_ammo";
		picture="\rhsafrf\addons\rhs_weapons\icons\rhs_mine_pmn2_ca";
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_PMN20";
		model="\rhsafrf\addons\rhs_weapons\mines\rhs_pmn2";
		descriptionShort="$STR_RHS_CFGMAGAZINES_PMN21";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901};
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_mine_pmn2";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"PressurePlate"
			};
			class PressurePlate
			{
				digDistance=0.02;
			};
		};
	};
	class rhs_mine_tm62m_mag: ATMine_Range_Mag
	{
		mass=104.5;
		ammo="rhs_mine_tm62m_ammo";
		picture="\rhsafrf\addons\rhs_weapons\icons\rhs_mine_tm62m_ca";
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_TM62M0";
		model="\rhsafrf\addons\rhs_weapons\mines\rhs_tm62m";
		descriptionShort="$STR_RHS_CFGMAGAZINES_TM62M1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901};
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_mine_tm62m";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"PressurePlate"
			};
			class PressurePlate
			{
				digDistance=0.090000004;
			};
		};
	};
	class rhs_mine_msk40p_white_mag: ATMine_Range_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		mass=20;
		ammo="rhs_mine_msk40p_white_ammo";
		picture="\rhsafrf\addons\rhs_weapons\icons\rhs_mine_msk40p_white_ca";
		model="\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_white_d";
		displayName="$STR_RHS_MINE_MSK40P_W_MAG_DISPLAYNAME";
		descriptionShort="$STR_RHS_MINE_MSK40P_MAG_DESCRIPTIONSHORT";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_ClassicMineWireMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901,701};
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_mine_msk40p_white";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Tripwire"
			};
			class Tripwire
			{
				digDistance=0.07;
			};
		};
	};
	class rhs_mine_msk40p_red_mag: rhs_mine_msk40p_white_mag
	{
		ammo="rhs_mine_msk40p_red_ammo";
		picture="\rhsafrf\addons\rhs_weapons\icons\rhs_mine_msk40p_red_ca";
		model="\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_red_d";
		displayName="$STR_RHS_MINE_MSK40P_R_MAG_DISPLAYNAME";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_mine_msk40p_red";
	};
	class rhs_mine_msk40p_green_mag: rhs_mine_msk40p_white_mag
	{
		ammo="rhs_mine_msk40p_green_ammo";
		picture="\rhsafrf\addons\rhs_weapons\icons\rhs_mine_msk40p_green_ca";
		model="\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_green_d";
		displayName="$STR_RHS_MINE_MSK40P_G_MAG_DISPLAYNAME";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_mine_msk40p_green";
	};
	class rhs_mine_msk40p_blue_mag: rhs_mine_msk40p_white_mag
	{
		ammo="rhs_mine_msk40p_blue_ammo";
		picture="\rhsafrf\addons\rhs_weapons\icons\rhs_mine_msk40p_blue_ca";
		model="\rhsafrf\addons\rhs_weapons\mines\rhs_msk40p_blue_d";
		displayName="$STR_RHS_MINE_MSK40P_B_MAG_DISPLAYNAME";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_mine_msk40p_blue";
	};
	class rhs_mine_sm320_white_mag: rhs_mine_msk40p_white_mag
	{
		mass=14;
		ammo="rhs_mine_sm320_white_ammo";
		picture="\rhsafrf\addons\rhs_weapons\icons\rhs_mine_sm320_white_ca";
		model="\rhsafrf\addons\rhs_weapons\mines\rhs_sm320_white_d";
		displayName="$STR_RHS_MINE_SM320_W_MAG_DISPLAYNAME";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_mine_sm320_white";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Tripwire"
			};
			class Tripwire
			{
				digDistance=0.050000001;
			};
		};
	};
	class rhs_mine_sm320_red_mag: rhs_mine_sm320_white_mag
	{
		ammo="rhs_mine_sm320_red_ammo";
		picture="\rhsafrf\addons\rhs_weapons\icons\rhs_mine_sm320_red_ca";
		model="\rhsafrf\addons\rhs_weapons\mines\rhs_sm320_red_d";
		displayName="$STR_RHS_MINE_SM320_R_MAG_DISPLAYNAME";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_mine_sm320_red";
	};
	class rhs_mine_sm320_green_mag: rhs_mine_sm320_white_mag
	{
		ammo="rhs_mine_sm320_green_ammo";
		picture="\rhsafrf\addons\rhs_weapons\icons\rhs_mine_sm320_green_ca";
		model="\rhsafrf\addons\rhs_weapons\mines\rhs_sm320_green_d";
		displayName="$STR_RHS_MINE_SM320_G_MAG_DISPLAYNAME";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_mine_sm320_green";
	};
	class rhs_mine_ozm72_a_mag: ATMine_Range_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		mass=55;
		ammo="rhs_mine_ozm72_a_ammo";
		picture="\rhsafrf\addons\rhs_weapons\icons\rhs_mine_ozm72_a_ca";
		displayName="$STR_RHS_CFGMAGAZINES_OZM72A";
		model="\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_a_d";
		descriptionShort="$STR_RHS_CFGMAGAZINES_OZM72_DESCRIPTIONSHORT";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901};
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_mine_ozm72_a";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Tripwire"
			};
			class Tripwire
			{
				digDistance=0.039999999;
			};
		};
	};
	class rhs_mine_ozm72_b_mag: rhs_mine_ozm72_a_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_mine_ozm72_b_ammo";
		picture="\rhsafrf\addons\rhs_weapons\icons\rhs_mine_ozm72_b_ca";
		displayName="$STR_RHS_CFGMAGAZINES_OZM72B";
		model="\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_b_d";
		descriptionShort="$STR_RHS_CFGMAGAZINES_OZM72_DESCRIPTIONSHORT";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_mine_ozm72_b";
	};
	class rhs_mine_ozm72_c_mag: rhs_mine_ozm72_a_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_mine_ozm72_c_ammo";
		picture="\rhsafrf\addons\rhs_weapons\icons\rhs_mine_ozm72_c_ca";
		displayName="$STR_RHS_CFGMAGAZINES_OZM72C";
		model="\rhsafrf\addons\rhs_weapons\mines\rhs_ozm72_c_d";
		descriptionShort="$STR_RHS_CFGMAGAZINES_OZM72_DESCRIPTIONSHORT";
		ace_explosives_DelayTime=1;
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_mine_ozm72_c";
		useAction=0;
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Command",
				"MK16_Transmitter"
			};
			class Command
			{
				FuseTime=0.5;
			};
			class MK16_Transmitter: Command
			{
			};
		};
	};
	class rhs_ec75_mag: ATMine_Range_Mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		scope=2;
		displayName="$STR_RHS_CFGMAGAZINES_EC75";
		picture="\rhsafrf\addons\rhs_weapons2\icons\rhs_ec75_ca";
		model="\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_d";
		descriptionShort="$STR_A3_cfgMagazines_DemoCharge1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_DemoCharge_Library0";
		};
		descriptionUse="$STR_A3_use_charge";
		type="2*		256";
		allowedSlots[]={901,701};
		value=5;
		ammo="rhs_ec75_ammo";
		mass=10.45;
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		weaponPoolAvailable=1;
		useActionTitle="$STR_ACTION_PUTBOMB";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
		ace_explosives_DelayTime=1;
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_ec75";
		useAction=0;
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Timer",
				"Command",
				"MK16_Transmitter",
				"DeadmanSwitch"
			};
			class Timer
			{
				FuseTime=0.5;
			};
			class Command
			{
				FuseTime=0.5;
			};
			class MK16_Transmitter: Command
			{
			};
			class DeadmanSwitch: Command
			{
			};
		};
	};
	class rhs_ec75_sand_mag: rhs_ec75_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_EC75_SAND";
		picture="\rhsafrf\addons\rhs_weapons2\icons\rhs_ec75_sand_ca";
		model="\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec75_sand_d";
		ammo="rhs_ec75_sand_ammo";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_ec75_sand";
	};
	class rhs_ec200_mag: rhs_ec75_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		mass=13.2;
		displayName="$STR_RHS_CFGMAGAZINES_EC200";
		picture="\rhsafrf\addons\rhs_weapons2\icons\rhs_ec200_ca";
		model="\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_d";
		ammo="rhs_ec200_ammo";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_ec200";
	};
	class rhs_ec200_sand_mag: rhs_ec200_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_EC200_SAND";
		picture="\rhsafrf\addons\rhs_weapons2\icons\rhs_ec200_sand_ca";
		model="\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec200_sand_d";
		ammo="rhs_ec200_sand_ammo";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_ec200_sand";
	};
	class rhs_ec400_mag: rhs_ec75_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		mass=17.6;
		displayName="$STR_RHS_CFGMAGAZINES_EC400";
		picture="\rhsafrf\addons\rhs_weapons2\icons\rhs_ec400_ca";
		model="\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_d";
		ammo="rhs_ec400_ammo";
		allowedSlots[]={901};
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_ec400";
	};
	class rhs_ec400_sand_mag: rhs_ec400_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_CFGMAGAZINES_EC400_SAND";
		picture="\rhsafrf\addons\rhs_weapons2\icons\rhs_ec400_sand_ca";
		model="\rhsafrf\addons\rhs_weapons2\explosives\rhs_ec400_sand_d";
		ammo="rhs_ec400_sand_ammo";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhs_ec400_sand";
	};
	class rhs_rpg26_mag: FakeMagazine
	{
		allowedSlots[]={701,901};
		scope=1;
		scopeArsenal=0;
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_RPG26_NAME";
		displayNameShort="AT";
		descriptionShort="$STR_RHS_RPG26_DES";
		picture="\rhsafrf\addons\rhs_weapons\icons\rpg26rocket_ca.paa";
		model="\A3\weapons_f\empty";
		ammo="rhs_rpg26_rocket";
		type="6 * 		256";
		initSpeed=149;
		mass=0;
	};
	class rhs_rshg2_mag: rhs_rpg26_mag
	{
		scope=1;
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_RSHG2_NAME";
		displayNameShort="HE";
		descriptionShort="$STR_RHS_RSHG2_DES";
		picture="\rhsafrf\addons\rhs_weapons\icons\rshg2rocket_ca.paa";
		ammo="rhs_rshg2_rocket";
		type="6 * 		256";
		initSpeed=149;
		mass=0;
	};
	class rhs_rpg18_mag: rhs_rpg26_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		displayName="$STR_RHS_RPG18_NAME";
		picture="\rhsafrf\addons\rhs_weapons\icons\rpg26rocket_ca.paa";
		ammo="rhs_rpg18_rocket";
		initSpeed=115;
		mass=0;
	};
	class rhs_launcher_dummy_mag: rhs_rpg26_mag
	{
		scope=1;
		count=0;
	};
	class rhs_rpg7_PG7VL_mag: CA_LauncherMagazine
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_rpg7_PG7VL_mag_ca.paa";
		scope=2;
		displayName="$STR_RHS_PG7VL_NAME";
		displayNameShort="PG-7VL - AT";
		descriptionShort="$STR_RHS_PG7VL_DES";
		model="\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_pg7vl_mag";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_pg7vl";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\rpg7\data\rhs_rpg7v2_02_co.paa"
		};
		ammo="rhs_rpg7v2_pg7vl";
		type="6 * 		256";
		initSpeed=112;
		mass=37.18;
	};
	class rhs_rpg7_PG7V_mag: rhs_rpg7_PG7VL_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_rpg7_PG7V_mag_ca.paa";
		displayName="$STR_RHS_PG7V_NAME";
		displayNameShort="PG-7V - AT";
		model="\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_pg7v_mag";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_pg7v";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\rpg7\data\rhs_rpg7v2_02_co.paa",
			"rhsafrf\addons\rhs_weapons\rpg7\data\pg_7v_co.paa"
		};
		ammo="rhs_rpg7v2_pg7v";
		initSpeed=114;
		mass=31.459999;
	};
	class rhs_rpg7_PG7VM_mag: rhs_rpg7_PG7V_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_rpg7_PG7VM_mag_ca.paa";
		displayName="$STR_RHS_PG7VM_NAME";
		displayNameShort="PG-7VM - AT";
		model="\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_pg7vm_mag";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_pg7vm";
		ammo="rhs_rpg7v2_pg7vm";
		initSpeed=134;
		mass=31.459999;
	};
	class rhs_rpg7_PG7VS_mag: rhs_rpg7_PG7V_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_rpg7_PG7VS_mag_ca.paa";
		displayName="$STR_RHS_PG7VS_NAME";
		displayNameShort="PG-7VS - AT";
		model="\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_pg7vs_mag";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_pg7vs";
		ammo="rhs_rpg7v2_pg7vs";
		initSpeed=134;
		mass=28.6;
	};
	class rhs_rpg7_PG7VR_mag: rhs_rpg7_PG7VL_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_rpg7_PG7VR_mag_ca.paa";
		displayName="$STR_RHS_PG7VR_NAME";
		displayNameShort="PG-7VR - AT";
		descriptionShort="$STR_RHS_PG7VR_DES";
		model="\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_pg7vr_mag";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_pg7vr";
		ammo="rhs_rpg7v2_pg7vr";
		initSpeed=66;
		mass=64.349998;
	};
	class rhs_rpg7_TBG7V_mag: rhs_rpg7_PG7VL_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_rpg7_TBG7V_mag_ca.paa";
		displayName="$STR_RHS_TBG7V_NAME";
		displayNameShort="TBG-7V - HE";
		descriptionShort="$STR_RHS_TBG7V_DES";
		model="\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_tbg7v_mag";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_tbg7v";
		ammo="rhs_rpg7v2_tbg7v";
		initSpeed=66;
		mass=64.349998;
	};
	class rhs_rpg7_OG7V_mag: rhs_rpg7_PG7VL_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_rpg7_OG7V_mag_ca.paa";
		displayName="$STR_RHS_OG7V_NAME";
		displayNameShort="OG-7V - HE";
		descriptionShort="$STR_RHS_OG7V_DES";
		model="\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_og7v_mag";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_og7v";
		ammo="rhs_rpg7v2_og7v";
		initSpeed=152;
		mass=28.6;
	};
	class rhs_rpg7_type69_airburst_mag: rhs_rpg7_PG7VL_mag
	{
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_inventoryicons\data\magazines\rhs_rpg7_type69_airburst_mag_ca.paa";
		displayName="$STR_RHS_TYPE69_AIRBURST_NAME";
		displayNameShort="AIRBURST";
		descriptionShort="$STR_RHS_TYPE69_DES";
		model="\rhsafrf\addons\rhs_weapons\rpg7\magazines\rhs_Type69_mag";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_type69";
		hiddenSelections[]=
		{
			"camo_1",
			"camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_weapons\rpg7\data\rhs_rpg7v2_02_co.paa",
			"rhsafrf\addons\rhs_weapons\rpg7\data\type_69_co.paa"
		};
		ammo="rhs_rpg7v2_type63_airburst";
		initSpeed=134;
		mass=28.6;
	};
	class rhs_mag_9k32_rocket: Titan_AA
	{
		ammo="rhs_ammo_9k32";
		descriptionshort="Range: 800-4200 m <br/>Type: ground-air <br/>Used in: 9K32";
		displayname="9K32";
		author="$STR_RHS_AUTHOR_FULL";
		initspeed=17;
		maxleadspeed=320;
		modelspecial="";
		picture="\rhsafrf\addons\rhs_weapons\icons\m_igla_ca.paa";
		model="\rhsafrf\addons\rhs_heavyweapons\igla\igla_missile";
		scope=2;
		nameSound="missiles";
		type="6 * 		256";
	};
	class rhs_mag_9k38_rocket: rhs_mag_9k32_rocket
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_9k38";
		displayname="$STR_RHS_CFGMAGAZINES_9K38_NAME";
		descriptionshort="$STR_RHS_CFGMAGAZINES_9K38_DESC";
		picture="\rhsafrf\addons\rhs_weapons\icons\m_igla_ca.paa";
	};
	class rhs_mag_9x19_17: CA_Magazine
	{
		scope=2;
		type=16;
		displayName="$STR_RHS_MAG_9X19_17_PY";
		descriptionShort="$STR_RHS_MAG_9X19_17_PY_DESC";
		picture="\rhsafrf\addons\rhs_weapons\icons\Pya_mag_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\magazines\rhs_pya_mag";
		ammo="rhs_B_9x19_7N21";
		count=17;
		initSpeed=465;
		mass=7.4899998;
	};
	class rhs_mag_9x19_7n31_17: rhs_mag_9x19_17
	{
		displayName="$STR_RHS_MAG_9X19_7N31_17_PY";
		ammo="rhs_B_9x19_7N31";
	};
	class rhs_mag_9x19mm_7n21_20: rhs_mag_9x19_17
	{
		displayName="$STR_RHS_CFGMAGAZINES_20RND_9X19_MAG_7N21";
		descriptionShort="$STR_RHS_CFGMAGAZINES_20RND_9X19_MAG_Desc_1";
		picture="\rhsafrf\addons\rhs_weapons2\icons\rhs_mag_9x19_20.paa";
		model="\rhsafrf\addons\rhs_weapons2\magazines\rhs_9x19_20mag";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_9x19_pp2000_20rnd";
		modelSpecialIsProxy=1;
		mass=8.4899998;
		count=20;
		lastRoundsTracer=0;
	};
	class rhs_mag_9x19mm_7n31_20: rhs_mag_9x19mm_7n21_20
	{
		displayName="$STR_RHS_CFGMAGAZINES_20RND_9X19_MAG_7N31";
		ammo="rhs_B_9x19_7N31";
		initSpeed=460;
	};
	class rhs_mag_9x19mm_7n21_44: rhs_mag_9x19mm_7n21_20
	{
		displayName="$STR_RHS_CFGMAGAZINES_44RND_9X19_MAG_7N21";
		descriptionShort="$STR_RHS_CFGMAGAZINES_44RND_9X19_MAG_Desc_0";
		model="\rhsafrf\addons\rhs_weapons2\magazines\rhs_9x19_44mag";
		modelSpecial="\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_9x19_pp2000_44rnd";
		count=44;
		mass=10.49;
	};
	class rhs_mag_9x19mm_7n31_44: rhs_mag_9x19mm_7n21_44
	{
		displayName="$STR_RHS_CFGMAGAZINES_44RND_9X19_MAG_7N31";
		ammo="rhs_B_9x19_7N31";
		initSpeed=460;
	};
	class rhs_mag_9x18_12_57N181S: rhs_mag_9x19_17
	{
		displayName="$STR_RHS_CFGMAGAZINES_12RND_9X18_MAG0";
		descriptionShort="$STR_RHS_MAG_9X18_12_PMM_DESC";
		picture="\rhsafrf\addons\rhs_weapons\icons\makarov_pmm_mag_ca.paa";
		model="\rhsafrf\addons\rhs_weapons2\magazines\rhs_pm_mag";
		ammo="rhs_B_9x18_57N181S";
		count=12;
		initSpeed=420;
		mass=4.4899998;
	};
	class rhs_mag_9x18_8_57N181S: rhs_mag_9x18_12_57N181S
	{
		displayName="$STR_RHS_CFGMAGAZINES_8RND_9X18_MAG0";
		descriptionShort="$STR_RHS_MAG_9X18_8_PM_DESC";
		picture="\rhsafrf\addons\rhs_weapons2\icons\rhs_pm_mag_ca.paa";
		model="\rhsafrf\addons\rhs_weapons2\magazines\rhs_pm_mag";
		count=8;
		initSpeed=319;
	};
	class rhs_18rnd_9x21mm_7N28: rhs_mag_9x19_17
	{
		ammo="rhs_B_9x21_7N28";
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_weapons2\icons\rhs_pm_mag_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_18RND_9X21_MAG0";
		descriptionShort="$STR_RHS_MAG_9X21_18_SR1_DESC";
		displayNameShort="7N28";
		initSpeed=390;
		count=18;
		mass=7.4899998;
	};
	class rhs_18rnd_9x21mm_7N29: rhs_18rnd_9x21mm_7N28
	{
		ammo="rhs_B_9x21_7N29";
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_weapons2\icons\rhs_pm_mag_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_18RND_9X21_MAG1";
		descriptionShort="$STR_RHS_MAG_9X21_18_SR1_DESC";
		displayNameShort="7N29";
		initSpeed=410;
		count=18;
		mass=7.4899998;
	};
	class rhs_18rnd_9x21mm_7BT3: rhs_18rnd_9x21mm_7N28
	{
		ammo="rhs_B_9x21_7BT3";
		author="$STR_RHS_AUTHOR_FULL";
		picture="\rhsafrf\addons\rhs_weapons2\icons\rhs_pm_mag_ca.paa";
		displayName="$STR_RHS_CFGMAGAZINES_18RND_9X21_MAG2";
		descriptionShort="$STR_RHS_MAG_9X21_18_SR1_DESC";
		displayNameShort="7BT3 Tracer";
		initSpeed=400;
		count=18;
		mass=7.4899998;
		tracersEvery=1;
	};
	class rhs_mag_rsp30_red: UGL_FlareRed_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		allowedSlots[]={};
		ammo="rhs_40mm_red";
	};
	class rhs_mag_rsp30_green: UGL_FlareGreen_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		allowedSlots[]={};
		ammo="rhs_40mm_green";
	};
	class rhs_mag_rsp30_white: UGL_FlareWhite_F
	{
		author="$STR_RHS_AUTHOR_FULL";
		allowedSlots[]={};
		ammo="rhs_40mm_white";
	};
	class rhs_mag_rgd5: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_rgd5";
		displayName="$STR_RHS_RGD5_NAME";
		displayNameShort="HE Grenade";
		descriptionshort="$STR_RHS_RGD5_DES";
		picture="\rhsafrf\addons\rhs_weapons\icons\rgd5_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\grenades\frag_rgd5";
		mass=6.8200002;
	};
	class rhs_mag_rgn: rhs_mag_rgd5
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_rgn";
		displayName="$STR_RHS_RGN_NAME";
		displayNameShort="RGN Impact";
		descriptionshort="Type: Offensive Fragmentation Impact Grenade<br />Rounds: 1<br />Used in: Hand";
		picture="\rhsafrf\addons\rhs_weapons2\gear\rhs_rgn_ca.paa";
		model="\rhsafrf\addons\rhs_weapons2\rgno\rgn";
	};
	class rhs_mag_rgo: rhs_mag_rgd5
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_rgo";
		displayName="$STR_RHS_RGO_NAME";
		displayNameShort="RGO Impact";
		descriptionshort="Type: Defensive Fragmentation Impact Grenade<br />Rounds: 1<br />Used in: Hand";
		picture="\rhsafrf\addons\rhs_weapons2\gear\rhs_rgo_ca.paa";
		model="\rhsafrf\addons\rhs_weapons2\rgno\rgo";
	};
	class rhs_mag_rdg2_white: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_rdg2_white";
		displayName="$STR_RHS_RDG2WHITE_NAME";
		displayNameShort="White Smoke";
		descriptionshort="$STR_RHS_RDG2_DES";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
		picture="\rhsafrf\addons\rhs_weapons\icons\rdg2_white_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\grenades\rdg2_white";
	};
	class rhs_mag_rdg2_black: rhs_mag_rdg2_white
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_rdg2_black";
		displayName="$STR_RHS_RDG2BLACK_NAME";
		displayNameShort="Black Smoke";
		picture="\rhsafrf\addons\rhs_weapons\icons\rdg2_black_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\grenades\rdg2_black";
	};
	class rhs_mag_nspn_yellow: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_nspn_yellow";
		displayName="$STR_RHS_NSPNYELLOW_NAME";
		displayNameShort="Yellow Flare";
		descriptionshort="$STR_RHS_NSPN_DES";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
		picture="\rhsafrf\addons\rhs_weapons\icons\rhs_nspn_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\grenades\smk_nsp_n";
	};
	class rhs_mag_nspn_red: rhs_mag_nspn_yellow
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_nspn_red";
		displayName="$STR_RHS_NSPNRED_NAME";
		displayNameShort="Red Flare";
	};
	class rhs_mag_nspn_green: rhs_mag_nspn_yellow
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_nspn_green";
		displayName="$STR_RHS_NSPNGREEN_NAME";
		displayNameShort="Green Flare";
	};
	class rhs_mag_nspd: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_nspd";
		displayName="$STR_RHS_NSPD_NAME";
		displayNameShort="Orange Smoke";
		descriptionshort="$STR_RHS_NSPD_DES";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
		picture="\rhsafrf\addons\rhs_weapons\icons\rhs_nspd_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\grenades\smk_nsp_d";
	};
	class rhs_mag_fakel: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_fakel";
		displayName="$STR_RHS_FAKEL_NAME";
		displayNameShort="Flashbang";
		descriptionshort="$STR_RHS_FAKEL_DES";
		picture="\rhsafrf\addons\rhs_weapons\icons\fakel_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\grenades\acc_fakel";
		mass=4.1999998;
	};
	class rhs_mag_fakels: HandGrenade
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_fakels";
		displayName="$STR_RHS_FAKELS_NAME";
		displayNameShort="Flashbang";
		descriptionshort="$STR_RHS_FAKEL_DES";
		picture="\rhsafrf\addons\rhs_weapons\icons\fakels_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\grenades\acc_fakel_s";
		mass=2.2;
	};
	class rhs_mag_zarya2: rhs_mag_fakels
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_zarya2";
		displayName="$STR_RHS_ZARYA2_NAME";
		picture="\rhsafrf\addons\rhs_weapons\icons\zarya2_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\grenades\acc_zarya";
		mass=3.8499999;
	};
	class rhs_mag_plamyam: rhs_mag_fakels
	{
		author="$STR_RHS_AUTHOR_FULL";
		ammo="rhs_ammo_plamyam";
		displayName="$STR_RHS_PLAMYAM_NAME";
		picture="\rhsafrf\addons\rhs_weapons\icons\plamyam_ca.paa";
		model="\rhsafrf\addons\rhs_weapons\grenades\acc_plamyaM";
		mass=4.1999998;
	};
	class rhs_LaserMag_ai: Laserbatteries
	{
		scope=1;
		initSpeed=96000;
		maxLeadSpeed=1500;
		ammo="rhs_laserbeam_ai";
	};
	class rhs_mag_M1069: VehicleMagazine
	{
		scope=2;
		displayName="XM1069 HE-FRAG";
		displayNameShort="M1069";
		ammo="rhs_ammo_M1069";
		muzzleImpulseFactor[]=
		{
			"9*0.1",
			9
		};
		count=8;
		initSpeed=1410;
		maxLeadSpeed=20;
		nameSound="heat";
		tracersEvery=1;
		rhs_magazineIndex=3;
	};
	class rhs_mag_M1147: rhs_mag_M1069
	{
		displayName="M1147 HE-FRAG";
		displayNameShort="M1147";
		ammo="rhs_ammo_M1147";
	};
	class rhs_mag_M416: rhs_mag_M1069
	{
		displayName="M416 Smoke";
		displayNameShort="M416";
		ammo="rhs_ammo_M416";
		initSpeed=732;
		rhs_magazineIndex=-1;
	};
	class rhs_mag_M1028: rhs_mag_M1069
	{
		displayName="M1028 Canister";
		displayNameShort="M1028";
		ammo="rhs_ammo_M1028";
		initSpeed=1410;
		rhs_magazineIndex=3;
	};
	class rhs_mag_M829: rhs_mag_M1069
	{
		displayName="M829 APFSDS-T";
		displayNameShort="M829";
		ammo="rhs_ammo_M829";
		count=28;
		initSpeed=1670;
		nameSound="sabot";
		rhs_magazineIndex=1;
	};
	class rhs_mag_M829A1: rhs_mag_M829
	{
		displayName="M829A1 APFSDS-T";
		displayNameShort="M829A1";
		ammo="rhs_ammo_M829A1";
		count=28;
		initSpeed=1575;
	};
	class rhs_mag_M829A2: rhs_mag_M829
	{
		displayName="M829A2 APFSDS-T";
		displayNameShort="M829A2";
		ammo="rhs_ammo_M829A2";
		count=28;
		initSpeed=1680;
	};
	class rhs_mag_M829A3: rhs_mag_M829
	{
		displayName="M829A3 APFSDS-T";
		displayNameShort="M829A3";
		ammo="rhs_ammo_M829A3";
		count=28;
		initSpeed=1555;
	};
	class rhs_mag_M829A4: rhs_mag_M829
	{
		displayName="M829A4 APFSDS-T";
		displayNameShort="M829A4";
		ammo="rhs_ammo_M829A4";
		count=28;
		initSpeed=1650;
	};
	class rhs_mag_M830: rhs_mag_M1069
	{
		displayName="M830 HEAT-FS";
		displayNameShort="M830";
		ammo="rhs_ammo_M830";
		initSpeed=915;
		maxLeadSpeed=20;
		rhs_magazineIndex=2;
	};
	class rhs_mag_M830A1: rhs_mag_M830
	{
		displayName="M830A1 MPAT";
		displayNameShort="M830A1";
		ammo="rhs_ammo_M830A1";
		count=8;
		initSpeed=1440;
	};
	class rhs_mag_M829A4_max: rhs_mag_M829A4
	{
		count=40;
	};
	class rhs_mag_M829A3_max: rhs_mag_M829A3
	{
		count=40;
	};
	class rhs_mag_M829A2_max: rhs_mag_M829A2
	{
		count=40;
	};
	class rhs_mag_M829A1_max: rhs_mag_M829A1
	{
		count=40;
	};
	class rhs_mag_M829_max: rhs_mag_M829
	{
		count=40;
	};
	class rhs_mag_M830_max: rhs_mag_M830
	{
		count=40;
	};
	class rhs_mag_M830A1_max: rhs_mag_M830A1
	{
		count=40;
	};
	class rhs_mag_M1069_max: rhs_mag_M1069
	{
		count=40;
	};
	class rhs_mag_M1147_max: rhs_mag_M1147
	{
		count=40;
	};
	class rhs_mag_M1028_max: rhs_mag_M1028
	{
		count=40;
	};
	class rhs_mag_M416_max: rhs_mag_M416
	{
		count=40;
	};
	class rhs_mag_70Rnd_25mm_M242_APFSDS: 60Rnd_30mm_APFSDS_shells_Tracer_Red
	{
		ammo="RHS_ammo_M919_APFSDS";
		count=70;
		displayname="25x137mm M919 APFSDS-T";
		displaynameshort="M919 APFSDS-T";
		initspeed=1385;
	};
	class rhs_mag_70Rnd_25mm_M242_M791: 60Rnd_30mm_APFSDS_shells_Tracer_Red
	{
		ammo="RHS_ammo_M791_APDS";
		count=70;
		displayname="25x137mm M791 APDS-T";
		displaynameshort="M791 APDS-T";
		initspeed=1345;
	};
	class rhs_mag_230Rnd_25mm_M242_HEI: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		scope=2;
		ammo="RHS_ammo_M792_HEI";
		count=230;
		displayname="25x137mm M792 HEI-T";
		displaynameshort="M792 HEI-T";
		initspeed=1100;
		lastroundstracer=4;
		maxleadspeed=100;
		namesound="cannon";
		tracersevery=1;
	};
	class rhs_mag_1100Rnd_762x51_M240: VehicleMagazine
	{
		scope=2;
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
		displayname="7.62x51mm EPR";
		displaynameshort="M80A1 EPR";
		namesound="mgun";
		initspeed=930;
		maxleadspeed=100;
		count=1100;
		tracersevery=5;
	};
	class rhs_mag_762x51_M240_1200: rhs_mag_1100Rnd_762x51_M240
	{
		count=1200;
	};
	class rhs_mag_762x51_M240: rhs_mag_1100Rnd_762x51_M240
	{
		count=100;
		initSpeed=910;
		lastRoundsTracer=0;
	};
	class rhs_mag_762x51_M240_200: rhs_mag_762x51_M240
	{
		count=200;
	};
	class rhs_mag_762x51_M240_200_M80: rhs_mag_762x51_M240
	{
		ammo="rhs_ammo_762x51_M80_Ball";
		displayname="7.62x51mm Ball";
		displaynameshort="M80 Ball";
		initspeed=838;
		count=200;
	};
	class rhs_mag_762x51_m80a1_4000: rhs_mag_1100Rnd_762x51_M240
	{
		count=4000;
		weight=84;
	};
	class RHS_mag_m1_he_12: 32Rnd_155mm_Mo_shells
	{
		scope=2;
		count=12;
		displayname="HE-FRAG M1";
		displaynameshort="HE-FRAG";
		nameSound="heat";
		ammo="rhs_ammo_m1_he";
		muzzleImpulseFactor[]={0.1,0.1};
	};
	class rhs_mag_m314_ilum_4: RHS_mag_m1_he_12
	{
		count=4;
		displayname="Illumination M314";
		displaynameshort="Illumination";
		ammo="rhs_ammo_m314_ilum";
	};
	class rhs_mag_m60a2_smoke_4: RHS_mag_m1_he_12
	{
		count=4;
		displayname="Smoke M60A2";
		displaynameshort="Smoke";
		ammo="rhs_ammo_m60a2_smoke";
	};
	class rhs_mag_1000Rnd_30x173: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		ammo="rhs_ammo_PGU14B_API";
		tracersEvery=0;
		muzzleImpulseFactor[]={0.1,0.40000001};
	};
	class rhs_mag_1000Rnd_30x173_mixed: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		ammo="rhs_ammo_30x173mm_GAU8_mixed";
		tracersEvery=0;
		muzzleImpulseFactor[]={0.1,0.40000001};
	};
	class rhs_mag_1150Rnd_30x173: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		count=1150;
		ammo="rhs_ammo_PGU14B_API";
		tracersEvery=0;
		muzzleImpulseFactor[]={0.1,0.5};
	};
	class rhs_mag_1150Rnd_30x173_mixed: 1000Rnd_Gatling_30mm_Plane_CAS_01_F
	{
		count=1150;
		ammo="rhs_ammo_30x173mm_GAU8_mixed";
		tracersEvery=0;
		muzzleImpulseFactor[]={0.1,0.5};
	};
	class rhs_mag_M197_750: VehicleMagazine
	{
		scope=2;
		displayname="20x102mm PGU-28/B SAPHEI";
		displaynameshort="SAPHEI";
		ammo="rhs_ammo_20mm_AP";
		count=750;
		initSpeed=1036;
		maxLeadSpeed=200;
		tracersEvery=0;
		nameSound="cannon";
	};
	class rhs_mag_M301_500: VehicleMagazine
	{
		scope=2;
		displayname="20x102mm M1031/1032 SAPHEI-T";
		displaynameshort="SAPHEI-T";
		ammo="rhs_ammo_20mm_AP";
		count=500;
		initSpeed=1036;
		maxLeadSpeed=200;
		tracersEvery=0;
		nameSound="cannon";
	};
	class rhs_mag_30x113mm_M789_HEDP_1200: VehicleMagazine
	{
		scope=1;
		displayName="30x113mm M789 HEDP-T";
		ammo="rhs_ammo_30x113mm_M789_HEDP";
		count=1200;
		initSpeed=805;
		tracersEvery=0;
		maxLeadSpeed=500;
		nameSound="cannon";
		airLock=1;
		weight=419;
	};
	class rhs_mag_30x113mm_M789_HEDP_laser_1200: rhs_mag_30x113mm_M789_HEDP_1200
	{
		ammo="rhs_ammo_30x113mm_M789_HEDP_laser";
		weight=419;
	};
	class RHS_48Rnd_40mm_MK19: VehicleMagazine
	{
		scope=2;
		displayName="Mk. 19 40mm M384 HE";
		ammo="rhs_ammo_mk19m3_M384";
		count=48;
		initSpeed=240;
		maxLeadSpeed=100;
		nameSound="grenadelauncher";
		displaynameshort="M384 HE";
		muzzleImpulseFactor[]={2,2};
		ace_isbelt=1;
	};
	class RHS_48Rnd_40mm_MK19_M430I: RHS_48Rnd_40mm_MK19
	{
		displayName="Mk. 19 40mm M430I HEDP";
		displaynameshort="M430I HEDP";
		ammo="rhs_ammo_mk19m3_M430I";
	};
	class RHS_48Rnd_40mm_MK19_M430A1: RHS_48Rnd_40mm_MK19
	{
		displayName="Mk. 19 40mm M430A1 HEDP";
		displaynameshort="M430A1 HEDP";
		ammo="rhs_ammo_mk19m3_M430A1";
	};
	class RHS_48Rnd_40mm_MK19_M1001: RHS_48Rnd_40mm_MK19
	{
		displayName="Mk. 19 40mm M1001 Canister";
		displaynameshort="M1001 Canister";
		ammo="rhs_ammo_mk19m3_M1001";
	};
	class RHS_96Rnd_40mm_MK19: RHS_48Rnd_40mm_MK19
	{
		count=96;
	};
	class RHS_96Rnd_40mm_MK19_M430I: RHS_48Rnd_40mm_MK19_M430I
	{
		count=96;
	};
	class RHS_96Rnd_40mm_MK19_M430A1: RHS_48Rnd_40mm_MK19_M430A1
	{
		count=96;
	};
	class RHS_96Rnd_40mm_MK19_M1001: RHS_48Rnd_40mm_MK19_M1001
	{
		count=96;
	};
	class rhs_mag_100rnd_127x99_mag: VehicleMagazine
	{
		scope=2;
		ammo="rhs_ammo_127x99_Ball";
		initSpeed=880;
		maxLeadSpeed=200;
		tracersEvery=5;
		nameSound="mgun";
		count=100;
		displayName="12.7mm M2 HMG Belt";
		descriptionShort="Caliber: 12.7x99 mm NATO<br/>Rounds: 100<br />Used in: Mounted M2";
		displaynameshort="M2 Ball";
		ace_isbelt=1;
	};
	class rhs_mag_100rnd_127x99_mag_Tracer_Red: rhs_mag_100rnd_127x99_mag
	{
		ammo="rhs_ammo_127x99_Ball_Tracer_Red";
		displayName="12.7mm M2 HMG Tracer (Red) Belt";
		descriptionShort="Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 100<br />Used in: Mounted M2";
	};
	class rhs_mag_100rnd_127x99_mag_Tracer_Green: rhs_mag_100rnd_127x99_mag_Tracer_Red
	{
		ammo="rhs_ammo_127x99_Ball_Tracer_Green";
		displayName="12.7mm M2 HMG Tracer (Green) Belt";
		descriptionShort="Caliber: 12.7x99 mm Tracer - Green<br/>Rounds: 100<br />Used in: Mounted M2";
	};
	class rhs_mag_100rnd_127x99_mag_Tracer_Yellow: rhs_mag_100rnd_127x99_mag_Tracer_Red
	{
		ammo="rhs_ammo_127x99_Ball_Tracer_Yellow";
		displayName="12.7mm M2 HMG Tracer (Yellow) Belt";
		descriptionShort="Caliber: 12.7x99 mm Tracer - Yellow<br/>Rounds: 100<br />Used in: Mounted M2";
	};
	class rhs_mag_100rnd_127x99_SLAP_mag: rhs_mag_100rnd_127x99_mag
	{
		ammo="rhs_ammo_127x99_SLAP";
		displayName="12.7mm SLAP M2 HMG Belt";
		descriptionShort="Caliber: 12.7x99 mm SLAP <br/>Rounds: 100<br />Used in: Mounted M2";
		displaynameshort="M903 SLAP";
		initSpeed=1210;
	};
	class rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red: rhs_mag_100rnd_127x99_SLAP_mag
	{
		ammo="rhs_ammo_127x99_SLAP_Tracer_Red";
		displayName="12.7mm SLAP M2 HMG Tracer (Red) Belt";
		descriptionShort="Caliber: 12.7x99 mm SLAP Tracer - Red<br/>Rounds: 100<br />Used in: Mounted M2";
	};
	class rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Green: rhs_mag_100rnd_127x99_SLAP_mag
	{
		ammo="rhs_ammo_127x99_SLAP_Tracer_Green";
		displayName="12.7mm SLAP M2 HMG Tracer (Green) Belt";
		descriptionShort="Caliber: 12.7x99 mm SLAP Tracer - Green<br/>Rounds: 100<br />Used in: Mounted M2";
	};
	class rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Yellow: rhs_mag_100rnd_127x99_SLAP_mag
	{
		ammo="rhs_ammo_127x99_SLAP_Tracer_Yellow";
		displayName="12.7mm SLAP M2 HMG Tracer (Yellow) Belt";
		descriptionShort="Caliber: 12.7x99 mm SLAP Tracer - Yellow<br/>Rounds: 100<br />Used in: Mounted M2";
	};
	class rhs_mag_200rnd_127x99_mag: rhs_mag_100rnd_127x99_mag
	{
		scope=2;
		count=200;
		descriptionShort="Caliber: 12.7x99 mm NATO<br/>Rounds: 200<br />Used in: Mounted M2";
	};
	class rhs_mag_200rnd_127x99_mag_Tracer_Red: rhs_mag_100rnd_127x99_mag_Tracer_Red
	{
		scope=2;
		count=200;
		descriptionShort="Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 200<br />Used in: Mounted M2";
	};
	class rhs_mag_200rnd_127x99_SLAP_mag: rhs_mag_100rnd_127x99_SLAP_mag
	{
		scope=2;
		count=200;
		descriptionShort="Caliber: 12.7x99 mm SLAP<br/>Rounds: 200<br />Used in: Mounted M2";
	};
	class rhs_mag_200rnd_127x99_SLAP_mag_Tracer_Red: rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red
	{
		scope=2;
		count=200;
		descriptionShort="Caliber: 12.7x99 mm SLAP Tracer - Red<br/>Rounds: 200<br />Used in: Mounted M2";
	};
	class rhs_mag_300rnd_127x99_mag: rhs_mag_100rnd_127x99_mag
	{
		scope=2;
		count=300;
		descriptionShort="Caliber: 12.7x99 mm NATO<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_300rnd_127x99_mag_Tracer_Red: rhs_mag_100rnd_127x99_mag_Tracer_Red
	{
		scope=2;
		count=300;
		tracersEvery=1;
		descriptionShort="Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_300rnd_127x99_SLAP_mag: rhs_mag_100rnd_127x99_SLAP_mag
	{
		scope=2;
		count=300;
		descriptionShort="Caliber: 12.7x99 mm SLAP<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_300rnd_127x99_SLAP_mag_Tracer_Red: rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red
	{
		scope=2;
		count=300;
		tracersEvery=1;
		descriptionShort="Caliber: 12.7x99 mm SLAP Tracer - Red<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_400rnd_127x99_mag: rhs_mag_100rnd_127x99_mag
	{
		scope=2;
		count=400;
		descriptionShort="Caliber: 12.7x99 mm NATO<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_400rnd_127x99_mag_Tracer_Red: rhs_mag_100rnd_127x99_mag_Tracer_Red
	{
		scope=2;
		count=400;
		descriptionShort="Caliber: 12.7x99 mm Tracer - Red<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_400rnd_127x99_SLAP_mag: rhs_mag_100rnd_127x99_SLAP_mag
	{
		scope=2;
		count=400;
		descriptionShort="Caliber: 12.7x99 mm SLAP<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red: rhs_mag_100rnd_127x99_SLAP_mag_Tracer_Red
	{
		scope=2;
		count=400;
		descriptionShort="Caliber: 12.7x99 mm SLAP Tracer - Red<br/>Rounds: 400<br />Used in: Mounted M2";
	};
	class rhs_mag_400rnd_127x99_mag_AI: rhs_mag_400rnd_127x99_mag
	{
		ammo="rhs_ammo_127x99_Ball_AI";
	};
	class rhs_mag_400rnd_127x99_mag_Tracer_Red_AI: rhs_mag_400rnd_127x99_mag_Tracer_Red
	{
		ammo="rhs_ammo_127x99_Ball_Tracer_Red_AI";
	};
	class rhs_mag_400rnd_127x99_SLAP_mag_AI: rhs_mag_400rnd_127x99_SLAP_mag
	{
		ammo="rhs_ammo_127x99_SLAP_AI";
	};
	class rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red_AI: rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red
	{
		ammo="rhs_ammo_127x99_SLAP_Tracer_Red_AI";
	};
	class rhs_mag_400rnd_127x99_mag_Plane: rhs_mag_400rnd_127x99_mag
	{
		ammo="rhs_ammo_127x99_Ball_Plane";
	};
	class rhs_mag_400rnd_127x99_mag_Tracer_Red_Plane: rhs_mag_400rnd_127x99_mag_Tracer_Red
	{
		ammo="rhs_ammo_127x99_Ball_Tracer_Red_Plane";
	};
	class rhs_mag_400rnd_127x99_SLAP_mag_Plane: rhs_mag_400rnd_127x99_SLAP_mag
	{
		ammo="rhs_ammo_127x99_SLAP_Plane";
	};
	class rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red_Plane: rhs_mag_400rnd_127x99_SLAP_mag_Tracer_Red
	{
		ammo="rhs_ammo_127x99_SLAP_Tracer_Red_Plane";
	};
	class rhs_1Rnd_m821_HE: 8Rnd_82mm_Mo_shells
	{
		author="RHS";
		displayName="81mm M821 HE Mortar Shell";
		displayNameShort="$STR_A3_cfgmagazines_8rnd_82mm_mo_shells_dns";
		count=1;
		ammo="rhs_m821_he";
		initSpeed=200;
	};
	class rhs_12Rnd_m821_HE: rhs_1Rnd_m821_HE
	{
		count=12;
	};
	class rhs_mag_155mm_m795_28: 32Rnd_155mm_Mo_shells
	{
		initSpeed=810;
		displayNameShort="$STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells_dns";
		scope=2;
		displayName="$STR_A3_CfgMagazines_50Rnd_120mm_Mo_shells0";
		ammo="Sh_155mm_AMOS";
		count=32;
		nameSound="heat";
		muzzleImpulseFactor[]={7,22};
	};
	class rhs_mag_155mm_m825a1_2: rhs_mag_155mm_m795_28
	{
		count=2;
		ammo="Smoke_120mm_AMOS_White";
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_smoke0";
		displayNameShort="$STR_A3_CfgMagazines_SmokeShell_dns";
	};
	class rhs_mag_155mm_485_2: rhs_mag_155mm_m825a1_2
	{
		ammo="rhs_ammo_m485_ilum";
		displayName="Illumination";
		displayNameShort="Illumination";
	};
	class rhs_mag_155mm_m712_2: rhs_mag_155mm_m825a1_2
	{
		ammo="Sh_155mm_AMOS_LG";
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
		displayNameShort="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_LG0";
	};
	class rhs_mag_155mm_m731_1: rhs_mag_155mm_m825a1_2
	{
		count=1;
		ammo="Mine_155mm_AMOS_range";
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_mine0";
		displayNameShort="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_mine0";
	};
	class rhs_mag_155mm_raams_1: rhs_mag_155mm_m731_1
	{
		ammo="AT_Mine_155mm_AMOS_range";
		displayName="$STR_A3_at_mine_cluster_0";
		displayNameShort="$STR_A3_at_mine_cluster_0";
	};
	class rhs_mag_155mm_m864_3: rhs_mag_155mm_m825a1_2
	{
		count=3;
		ammo="Cluster_155mm_AMOS";
		displayName="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_Cluster0";
		displayNameShort="$STR_A3_CfgMagazines_10Rnd_120mm_Mo_Cluster0";
	};
	class rhs_mag_2Rnd_TOW: VehicleMagazine
	{
		scope=2;
		ammo="rhs_ammo_TOW_AT";
		displayname="BGM-71A TOW";
		displaynameshort="BGM-71A";
		nameSound="missiles";
		count=2;
		initSpeed=55.709999;
		maxleadspeed=130;
		rhs_magazineIndex=4;
	};
	class rhs_mag_2Rnd_TOWB: rhs_mag_2Rnd_TOW
	{
		scope=2;
		ammo="rhs_ammo_TOWB_AT";
		displayname="BGM-71B TOW";
		displaynameshort="BGM-71B";
	};
	class rhs_mag_2Rnd_ITOW: rhs_mag_2Rnd_TOW
	{
		scope=2;
		ammo="rhs_ammo_ITOW_AT";
		displayname="BGM-71C ITOW";
		displaynameshort="BGM-71C";
	};
	class rhs_mag_2Rnd_TOW2: rhs_mag_2Rnd_TOW
	{
		scope=2;
		ammo="rhs_ammo_TOW2_AT";
		displayname="BGM-71D TOW-2";
		displaynameshort="BGM-71D";
	};
	class rhs_mag_2Rnd_TOW2A: rhs_mag_2Rnd_TOW
	{
		scope=2;
		ammo="rhs_ammo_TOW2A_AT";
		displayname="BGM-71E TOW-2A";
		displaynameshort="BGM-71E";
	};
	class rhs_mag_2Rnd_TOW2B: rhs_mag_2Rnd_TOW
	{
		scope=2;
		ammo="rhs_ammo_TOW2B_AT";
		displayname="BGM-71F TOW-2B";
		displaynameshort="BGM-71F";
	};
	class rhs_mag_2Rnd_TOW2B_AERO: rhs_mag_2Rnd_TOW
	{
		scope=2;
		ammo="rhs_ammo_TOW2B_AERO_AT";
		displayname="BGM-71F-3 TOW-2B AERO";
		displaynameshort="BGM-71F-3";
	};
	class rhs_mag_2Rnd_TOW2BB: rhs_mag_2Rnd_TOW
	{
		scope=2;
		ammo="rhs_ammo_TOW2_BB";
		displayname="BGM-71H Bunker Buster";
		displaynameshort="BGM-71H";
	};
	class rhs_mag_TOW: rhs_mag_2Rnd_TOW
	{
		count=1;
	};
	class rhs_mag_TOWB: rhs_mag_2Rnd_TOWB
	{
		count=1;
	};
	class rhs_mag_ITOW: rhs_mag_2Rnd_ITOW
	{
		count=1;
	};
	class rhs_mag_TOW2: rhs_mag_2Rnd_TOW2
	{
		count=1;
		ammo="rhs_ammo_TOW2_AT_static";
	};
	class rhs_mag_TOW2a: rhs_mag_2Rnd_TOW2A
	{
		count=1;
	};
	class rhs_mag_TOW2b: rhs_mag_2Rnd_TOW2B
	{
		count=1;
	};
	class rhs_mag_TOW2b_aero: rhs_mag_2Rnd_TOW2B_AERO
	{
		count=1;
	};
	class rhs_mag_TOW2bb: rhs_mag_2Rnd_TOW2BB
	{
		count=1;
	};
	class rhs_mag_m26_6: VehicleMagazine
	{
		scope=2;
		displayName="M26";
		displayNameShort="Cluster";
		descriptionShort="227mm rocket, ×161 M77 DPICM";
		ammo="rhs_ammo_m26_rocket";
		nameSound="rockets";
		initSpeed=650;
		count=6;
		model="rhsusf\addons\rhsusf_himars\M142_MLRS_Pod";
		hardpoints[]=
		{
			"RHS_HP_MLRS"
		};
		pylonWeapon="rhs_weap_mlrs";
	};
	class rhs_mag_m26a1_6: rhs_mag_m26_6
	{
		displayName="M26A1";
		descriptionShort="227mm rocket, ×130 M85 DPICM";
		ammo="rhs_ammo_m26a1_rocket";
		initSpeed=850;
	};
	class rhs_mag_m30_6: rhs_mag_m26a1_6
	{
		displayName="M30";
		descriptionShort="227mm rocket, GPS/INS, ×101 M85 DPICM";
		ammo="rhs_ammo_m30_rocket";
		hardpoints[]=
		{
			"RHS_HP_GMLRS"
		};
		pylonWeapon="rhs_weap_mlrs_guided";
	};
	class rhs_mag_m31_6: rhs_mag_m30_6
	{
		displayName="M31";
		displayNameShort="Unitary HE";
		descriptionShort="227mm rocket, GPS/INS, 200lb HE warhead";
		ammo="rhs_ammo_m31_rocket";
	};
	class rhs_mag_mgm140a_1: rhs_mag_m30_6
	{
		displayName="MGM-140A (M39)";
		displayNameShort="Cluster";
		descriptionShort="ATacMS Block I, ×234 M74 APAM";
		ammo="rhs_ammo_mgm140a_rocket";
		count=1;
		model="rhsusf\addons\rhsusf_himars\M142_ATACMS_Pod";
		hardpoints[]=
		{
			"RHS_HP_ATACMS"
		};
		pylonWeapon="rhs_weap_atacms";
	};
	class rhs_mag_mgm140b_1: rhs_mag_mgm140a_1
	{
		displayName="MGM-140B (M39A1)";
		descriptionShort="ATacMS Block IA, GPS/INS, ×69 M74 APAM";
		ammo="rhs_ammo_mgm140b_rocket";
		pylonWeapon="rhs_weap_atacms_guided";
	};
	class rhs_mag_mgm164_block2_1: rhs_mag_mgm140a_1
	{
		hardpoints[]={};
		displayName="MGM-164A";
		displayNameShort="Cluster, Guided HEAT";
		descriptionShort="ATacMS Block II, GPS/INS, ×13 Guided BAT";
		ammo="rhs_ammo_mgm164_block2_rocket";
	};
	class rhs_mag_mgm164_block4_1: rhs_mag_mgm140a_1
	{
		hardpoints[]={};
		displayName="MGM-168";
		displayNameShort="Unitary HE";
		descriptionShort="ATacMS Block IVA, GPS/INS, 500lb HE warhead";
		ammo="rhs_ammo_mgm164_block4_rocket";
		pylonWeapon="rhs_weap_atacms_guided";
	};
	class rhs_mag_mgm168_block4_1: rhs_mag_mgm164_block4_1
	{
		hardpoints[]=
		{
			"RHS_HP_ATACMS"
		};
	};
	class rhsusf_mag_L8A3_8: SmokeLauncherMag
	{
		count=8;
		scope=2;
		ammo="rhsusf_ammo_L8A3";
		initSpeed=50;
	};
	class rhsusf_mag_L8A3_12: rhsusf_mag_L8A3_8
	{
		count=12;
	};
	class rhsusf_mag_L8A3_16: rhsusf_mag_L8A3_8
	{
		count=16;
	};
	class rhsusf_mag_L8A3_48: rhsusf_mag_L8A3_8
	{
		count=48;
	};
	class rhsusf_mag_L8A3_L1_8: rhsusf_mag_L8A3_8
	{
	};
	class rhsusf_mag_L8A3_L2_8: rhsusf_mag_L8A3_8
	{
	};
	class rhsusf_mag_L8A3_L3_8: rhsusf_mag_L8A3_8
	{
	};
	class rhsusf_mag_L8A3_R1_8: rhsusf_mag_L8A3_8
	{
	};
	class rhsusf_mag_L8A3_R2_8: rhsusf_mag_L8A3_8
	{
	};
	class rhsusf_mag_L8A3_R3_8: rhsusf_mag_L8A3_8
	{
	};
	class rhsusf_mag_duke: SmokeLauncherMag
	{
		count=1;
		scope=2;
		ammo="rhsusf_ammo_duke";
		initSpeed=10;
	};
	class rhsusf_mag_laneMarkerSystem: SmokeLauncherMag
	{
		count=50;
		scope=2;
		ammo="rhsusf_ammo_laneMarkerSystem";
		initSpeed=10;
	};
	class rhsusf_mag_LWIRCM: CA_Magazine
	{
		count=120;
		ammo="rhs_ammo_LWIRCM";
		initSpeed=30;
		weight=0;
	};
	class rhsusf_mag_DIRCM: rhsusf_mag_LWIRCM
	{
	};
	class 30Rnd_CMFlare_Chaff_Magazine: 60Rnd_CMFlare_Chaff_Magazine
	{
		count=30;
	};
	class rhsusf_M130_CMFlare_Chaff_Magazine: 30Rnd_CMFlare_Chaff_Magazine
	{
		pylonweapon="rhsusf_weap_CMDispenser_M130";
		displayname="1x30 M206 Flare/RR-170 Chaff";
		hardpoints[]=
		{
			"RHSUSF_cm_M130"
		};
		count=15;
	};
	class rhsusf_M130_CMFlare_Chaff_Magazine_x2: rhsusf_M130_CMFlare_Chaff_Magazine
	{
		displayname="2x30 M206 Flare/RR-170 Chaff";
		hardpoints[]=
		{
			"RHSUSF_cm_M130_x2"
		};
		count=30;
	};
	class rhsusf_M130_CMFlare_Chaff_Magazine_x4: rhsusf_M130_CMFlare_Chaff_Magazine
	{
		displayname="4x30 M206 Flare/RR-170 Chaff";
		hardpoints[]=
		{
			"RHSUSF_cm_M130_x4"
		};
		count=60;
	};
	class rhsusf_M130_CMFlare_Chaff_Magazine_x8: rhsusf_M130_CMFlare_Chaff_Magazine
	{
		displayname="8x30 M206 Flare/RR-170 Chaff";
		hardpoints[]=
		{
			"RHSUSF_cm_M130_x8"
		};
		count=120;
	};
	class rhsusf_M130_CMFlare_Chaff_Magazine_x16: rhsusf_M130_CMFlare_Chaff_Magazine
	{
		displayname="16x30 M206 Flare/RR-170 Chaff";
		hardpoints[]=
		{
			"RHSUSF_cm_M130_x16"
		};
		count=240;
	};
	class rhsusf_M130_CMFlare_Magazine: rhsusf_M130_CMFlare_Chaff_Magazine
	{
		displayname="1x30 M206 Flare";
		count=30;
		ammo="rhsusf_CMflare_Ammo";
	};
	class rhsusf_M130_CMFlare_Magazine_x2: rhsusf_M130_CMFlare_Magazine
	{
		displayname="2x30 M206 Flare";
		hardpoints[]=
		{
			"RHSUSF_cm_M130_x2"
		};
		count=60;
	};
	class rhsusf_M130_CMFlare_Magazine_x4: rhsusf_M130_CMFlare_Magazine
	{
		displayname="4x30 M206 Flare";
		hardpoints[]=
		{
			"RHSUSF_cm_M130_x4"
		};
		count=120;
	};
	class rhsusf_M130_CMFlare_Magazine_x8: rhsusf_M130_CMFlare_Magazine
	{
		displayname="8x30 M206 Flare";
		hardpoints[]=
		{
			"RHSUSF_cm_M130_x8"
		};
		count=240;
	};
	class rhsusf_M130_CMFlare_Magazine_x16: rhsusf_M130_CMFlare_Magazine
	{
		displayname="16x30 M206 Flare";
		hardpoints[]=
		{
			"RHSUSF_cm_M130_x16"
		};
		count=480;
	};
	class rhsusf_ANALE39_CMFlare_Chaff_Magazine: rhsusf_M130_CMFlare_Chaff_Magazine
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE39";
		displayname="1x30 MJU-32 Flare/RR-144 Chaff";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE39"
		};
	};
	class rhsusf_ANALE39_CMFlare_Chaff_Magazine_x2: rhsusf_M130_CMFlare_Chaff_Magazine_x2
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE39";
		displayname="2x30 MJU-32 Flare/RR-144 Chaff";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE39_x2"
		};
	};
	class rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4: rhsusf_M130_CMFlare_Chaff_Magazine_x4
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE39";
		displayname="4x30 MJU-32 Flare/RR-144 Chaff";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE39_x4"
		};
	};
	class rhsusf_ANALE39_CMFlare_Magazine: rhsusf_M130_CMFlare_Magazine
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE39";
		displayname="1x30 MJU-32 Flare";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE39"
		};
	};
	class rhsusf_ANALE39_CMFlare_Magazine_x2: rhsusf_M130_CMFlare_Magazine_x2
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE39";
		displayname="2x30 MJU-32 Flare";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE39_x2"
		};
	};
	class rhsusf_ANALE39_CMFlare_Magazine_x4: rhsusf_M130_CMFlare_Magazine_x4
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE39";
		displayname="4x30 MJU-32 Flare";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE39_x4"
		};
	};
	class rhsusf_ANALE40_CMFlare_Chaff_Magazine: rhsusf_M130_CMFlare_Chaff_Magazine
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE40";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE40"
		};
	};
	class rhsusf_ANALE40_CMFlare_Chaff_Magazine_x2: rhsusf_M130_CMFlare_Chaff_Magazine_x2
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE40";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE40_x2"
		};
	};
	class rhsusf_ANALE40_CMFlare_Chaff_Magazine_x4: rhsusf_M130_CMFlare_Chaff_Magazine_x4
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE40";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE40_x4"
		};
	};
	class rhsusf_ANALE40_CMFlare_Chaff_Magazine_x8: rhsusf_M130_CMFlare_Chaff_Magazine_x8
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE40";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE40_x8"
		};
	};
	class rhsusf_ANALE40_CMFlare_Chaff_Magazine_x16: rhsusf_M130_CMFlare_Chaff_Magazine_x16
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE40";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE40_x16"
		};
	};
	class rhsusf_ANALE40_CMFlare_Magazine: rhsusf_M130_CMFlare_Magazine
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE40";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE40"
		};
	};
	class rhsusf_ANALE40_CMFlare_Magazine_x2: rhsusf_M130_CMFlare_Magazine_x2
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE40";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE40_x2"
		};
	};
	class rhsusf_ANALE40_CMFlare_Magazine_x4: rhsusf_M130_CMFlare_Magazine_x4
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE40";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE40_x4"
		};
	};
	class rhsusf_ANALE40_CMFlare_Magazine_x8: rhsusf_M130_CMFlare_Magazine_x8
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE40";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE40_x8"
		};
	};
	class rhsusf_ANALE40_CMFlare_Magazine_x16: rhsusf_M130_CMFlare_Magazine_x16
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE40";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE40_x16"
		};
	};
	class rhsusf_ANALE52_CMFlare_Chaff_Magazine: 30Rnd_CMFlare_Chaff_Magazine
	{
		pylonweapon="rhsusf_weap_CMDispenser_ANALE52";
		displayname="1x12 MJU-39 Flare/12 RR-170 Chaff";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE52"
		};
		count=12;
	};
	class rhsusf_ANALE52_CMFlare_Chaff_Magazine_x2: rhsusf_ANALE52_CMFlare_Chaff_Magazine
	{
		displayname="2x12 MJU-39 Flare/24 RR-170 Chaff";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE52_x2"
		};
		count=24;
	};
	class rhsusf_ANALE52_CMFlare_Chaff_Magazine_x4: rhsusf_ANALE52_CMFlare_Chaff_Magazine
	{
		displayname="4x12 MJU-39 Flare/2x24 RR-170 Chaff";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE52_x4"
		};
		count=48;
	};
	class rhsusf_ANALE52_CMFlare_Magazine: rhsusf_ANALE52_CMFlare_Chaff_Magazine
	{
		displayname="1x12 MJU-39 Flare";
		count=12;
		ammo="rhsusf_CMflare_Ammo";
	};
	class rhsusf_ANALE52_CMFlare_Magazine_x2: rhsusf_ANALE52_CMFlare_Magazine
	{
		displayname="2x12 MJU-39 Flare";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE52_x2"
		};
		count=24;
	};
	class rhsusf_ANALE52_CMFlare_Magazine_x4: rhsusf_ANALE52_CMFlare_Magazine
	{
		displayname="4x12 MJU-39 Flare";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE52_x4"
		};
		count=48;
	};
	class rhsusf_ANALE52_CMFlare_Magazine_x6: rhsusf_ANALE52_CMFlare_Magazine
	{
		displayname="6x12 MJU-39 Flare";
		hardpoints[]=
		{
			"RHSUSF_cm_ANALE52_x6"
		};
		count=72;
	};
	class rhs_fakemag: CA_Magazine
	{
		scope=1;
		scopeArsenal=0;
		count=200;
		mass=0;
	};
	class rhs_mag_fakeMuzzle1: rhs_fakemag
	{
		count=1;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag: 30Rnd_556x45_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_DISPLAY_NAME";
		displayNameShort="M855A1 EPR";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		ammo="rhs_ammo_556x45_M855A1_Ball";
		initSpeed=960;
		mass=9.3500004;
		tracersEvery=0;
		lastRoundsTracer=0;
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_n_30rnd";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo",
			"camo01",
			"camo02"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m885a1_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer_ca.paa";
		scope=1;
		scopeArsenal=0;
		ammo="rhs_ammo_556x45_M855A1_Ball";
		displayName="$STR_RHSUSF_30RND_556x45_NO_TRACER_DISPLAY_NAME";
		displayNameShort="M855A1 (No Tracer)";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		lastRoundsTracer=0;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red_ca.paa";
		ammo="rhs_ammo_556x45_M855A1_Ball_Red";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_TRACER_RED_DISPLAY_NAME";
		displayNameShort="M856A1 Tracer";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		tracersEvery=1;
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m856_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_drab_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green_ca.paa";
		scope=1;
		ammo="rhs_ammo_556x45_M855A1_Ball_Green";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_TRACER_GREEN_DISPLAY_NAME";
		displayNameShort="M856A1 (Green)";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		tracersEvery=1;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow_ca.paa";
		scope=1;
		ammo="rhs_ammo_556x45_M855A1_Ball_Yellow";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_TRACER_YELLOW_DISPLAY_NAME";
		displayNameShort="M856A1 (Yellow)";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		tracersEvery=1;
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange_ca.paa";
		scope=1;
		ammo="rhs_ammo_556x45_M855A1_Ball_Orange";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_TRACER_ORANGE_DISPLAY_NAME";
		displayNameShort="M856A1 (Orange)";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		tracersEvery=1;
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855_Stanag_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855_DISPLAY_NAME";
		displayNameShort="M855";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		ammo="rhs_ammo_556x45_M855_Ball";
		initSpeed=948.84241;
		mass=9.3500004;
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m855_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M855_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red_ca.paa";
		ammo="rhs_ammo_556x45_M855_Ball_Red";
		displayName="$STR_RHSUSF_30RND_556x45_M855_TRACER_RED_DISPLAY_NAME";
		displayNameShort="M856 Tracer";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		tracersEvery=1;
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m856_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_earth_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green: rhs_mag_30Rnd_556x45_M855_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green_ca.paa";
		scope=1;
		ammo="rhs_ammo_556x45_M855_Ball_Green";
		displayName="$STR_RHSUSF_30RND_556x45_M855_TRACER_GREEN_DISPLAY_NAME";
		displayNameShort="M856 (Green)";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		tracersEvery=1;
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow: rhs_mag_30Rnd_556x45_M855_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow_ca.paa";
		scope=1;
		ammo="rhs_ammo_556x45_M855_Ball_Yellow";
		displayName="$STR_RHSUSF_30RND_556x45_M855_TRACER_YELLOW_DISPLAY_NAME";
		displayNameShort="M856 (Yellow)";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		tracersEvery=1;
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange: rhs_mag_30Rnd_556x45_M855_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange_ca.paa";
		scope=1;
		ammo="rhs_ammo_556x45_M855_Ball_Orange";
		displayName="$STR_RHSUSF_30RND_556x45_M855_TRACER_ORANGE_DISPLAY_NAME";
		displayNameShort="M856 (Orange)";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		tracersEvery=1;
	};
	class rhs_mag_30Rnd_556x45_Mk318_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk318_Stanag_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_MK318_DISPLAY_NAME";
		displayNameShort="Mk318";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		ammo="rhs_ammo_556x45_Mk318_Ball";
		initSpeed=950.36639;
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_earth_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_Mk262_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk262_Stanag_ca.paa";
		ammo="rhs_ammo_556x45_Mk262_Ball";
		initSpeed=838.20001;
		displayName="$STR_RHSUSF_30RND_556x45_MK262_DISPLAY_NAME";
		displayNameShort="Mk262";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_M200_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M200_Stanag_ca.paa";
		ammo="rhs_ammo_556x45_blank";
		displayName="$STR_RHSUSF_30RND_556x45_BLANK_DISPLAY_NAME";
		displayNameShort="M200 Blanks";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		lastRoundsTracer=0;
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_M193_Stanag: 30Rnd_556x45_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M193_DISPLAY_NAME";
		displayNameShort="M193";
		descriptionShort="$STR_RHSUSF_30RND_556x45_DESCRIPTION_SHORT";
		ammo="rhs_ammo_556x45_M193_Ball";
		initSpeed=974;
		mass=9.3500004;
		tracersEvery=0;
		lastRoundsTracer=0;
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_n_30rnd";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo",
			"camo01",
			"camo02"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M193_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red_ca.paa";
		ammo="rhs_ammo_556x45_M196_Ball_Red";
		displayName="$STR_RHSUSF_30RND_556x45_M196_TRACER_RED_DISPLAY_NAME";
		displayNameShort="M196 Tracer";
		tracersEvery=1;
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m196_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_M855A1_EPM: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_EPM_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_EPM_DISPLAY_NAME";
		displayNameShort="M855A1 EPR";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_epm_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m885a1_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_earth_co.paa"
		};
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_epm";
	};
	class rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_EPM_TRACER_RED_DISPLAY_NAME";
		displayNameShort="M856A1 Tracer";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_epm_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m856_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa"
		};
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_epm";
	};
	class rhs_mag_30Rnd_556x45_Mk318_SCAR: rhs_mag_30Rnd_556x45_Mk318_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk318_SCAR_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_MK318_SCAR_DISPLAY_NAME";
		displayNameShort="Mk318";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_half_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_earth_co.paa"
		};
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_scar";
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_Pull_DISPLAY_NAME";
		displayNameShort="M855A1 EPR (Puller)";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_puller";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_magpul_30rnd";
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_Pull_TRACER_RED_DISPLAY_NAME";
		displayNameShort="M856A1 Tracer";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_puller";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_magpul_30rnd";
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Pull: rhs_mag_30Rnd_556x45_M855_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855_Stanag_Pull_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855_Pull_DISPLAY_NAME";
		displayNameShort="M855";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_puller";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_magpul_30rnd";
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855_Pull_TRACER_RED_DISPLAY_NAME";
		displayNameShort="M856 Tracer";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_puller";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_magpul_30rnd";
	};
	class rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull: rhs_mag_30Rnd_556x45_Mk318_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_MK318_Pull_DISPLAY_NAME";
		displayNameShort="Mk318";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_puller";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_magpul_30rnd";
	};
	class rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull: rhs_mag_30Rnd_556x45_Mk262_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_MK262_Pull_DISPLAY_NAME";
		displayNameShort="Mk262";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_puller";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_magpul_30rnd";
	};
	class rhs_mag_30Rnd_556x45_M855A1_EPM_Pull: rhs_mag_30Rnd_556x45_M855A1_EPM
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_EPM_Pull_DISPLAY_NAME";
		displayNameShort="M855A1 EPR";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_epm_puller";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_magpul_30rnd";
	};
	class rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_EPM_Pull_TRACER_RED_DISPLAY_NAME";
		displayNameShort="M856A1 Tracer";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_epm_puller";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_magpul_30rnd";
	};
	class rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull: rhs_mag_30Rnd_556x45_Mk318_SCAR
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_MK318_SCAR_Pull_DISPLAY_NAME";
		displayNameShort="Mk318";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_scar_puller";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_magpul_30rnd";
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_Ranger_DISPLAY_NAME";
		displayNameShort="M855A1 EPR";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_ranger";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_ranger_30rnd";
	};
	class rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_Ranger_TRACER_RED_DISPLAY_NAME";
		displayNameShort="M856A1 Tracer";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_ranger";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_ranger_30rnd";
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Ranger: rhs_mag_30Rnd_556x45_M855_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855_Ranger_DISPLAY_NAME";
		displayNameShort="M855";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_ranger";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_ranger_30rnd";
	};
	class rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red: rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855_Ranger_TRACER_RED_DISPLAY_NAME";
		displayNameShort="M856 Tracer";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_ranger";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_ranger_30rnd";
	};
	class rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger: rhs_mag_30Rnd_556x45_Mk318_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_MK318_Ranger_DISPLAY_NAME";
		displayNameShort="Mk318";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_ranger";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_ranger_30rnd";
	};
	class rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger: rhs_mag_30Rnd_556x45_Mk262_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_MK262_Ranger_DISPLAY_NAME";
		displayNameShort="Mk262";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_mag_ranger";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_ranger_30rnd";
	};
	class rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger: rhs_mag_30Rnd_556x45_M855A1_EPM
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_EPM_Ranger_DISPLAY_NAME";
		displayNameShort="M855A1 EPR";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_epm_ranger";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_ranger_30rnd";
	};
	class rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_EPM_Ranger_TRACER_RED_DISPLAY_NAME";
		displayNameShort="M856A1 Tracer";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_epm_ranger";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_ranger_30rnd";
	};
	class rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger: rhs_mag_30Rnd_556x45_Mk318_SCAR
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_MK318_SCAR_Ranger_DISPLAY_NAME";
		displayNameShort="Mk318";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_scar_ranger";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_ranger_30rnd";
	};
	class rhs_mag_30Rnd_556x45_M855A1_PMAG: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_PMAG_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_PMAG_DISPLAY_NAME";
		mass=9.3500004;
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_pmag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_pmag1_30rnd";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
	};
	class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_PMAG
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855A1_PMAG_TRACER_RED_DISPLAY_NAME";
		displayNameShort="M856A1 Tracer";
		ammo="rhs_ammo_556x45_M855A1_Ball_Red";
		tracersEvery=1;
	};
	class rhs_mag_30Rnd_556x45_M855_PMAG: rhs_mag_30Rnd_556x45_M855A1_PMAG
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855_PMAG_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855_PMAG_DISPLAY_NAME";
		displayNameShort="M855";
		ammo="rhs_ammo_556x45_M855_Ball";
		initSpeed=948.84241;
	};
	class rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_M855_PMAG_TRACER_RED_DISPLAY_NAME";
		displayNameShort="M856 Tracer";
		ammo="rhs_ammo_556x45_M855_Ball_Red";
		initSpeed=948.84241;
	};
	class rhs_mag_30Rnd_556x45_Mk318_PMAG: rhs_mag_30Rnd_556x45_M855A1_PMAG
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk318_PMAG_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_MK318_PMAG_DISPLAY_NAME";
		displayNameShort="Mk318";
		ammo="rhs_ammo_556x45_Mk318_Ball";
		initSpeed=950.36639;
	};
	class rhs_mag_30Rnd_556x45_Mk262_PMAG: rhs_mag_30Rnd_556x45_M855A1_PMAG
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk262_PMAG_ca.paa";
		displayName="$STR_RHSUSF_30RND_556x45_MK262_PMAG_DISPLAY_NAME";
		displayNameShort="Mk262";
		ammo="rhs_ammo_556x45_Mk262_Ball";
		initSpeed=838.20001;
	};
	class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan: rhs_mag_30Rnd_556x45_M855A1_PMAG
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_tan_co.paa"
		};
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_pmag_tan";
	};
	class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_tan_co.paa"
		};
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_pmag_tan";
	};
	class rhs_mag_30Rnd_556x45_M855_PMAG_Tan: rhs_mag_30Rnd_556x45_M855_PMAG
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855_PMAG_Tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_tan_co.paa"
		};
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_pmag_tan";
	};
	class rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red: rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_tan_co.paa"
		};
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_pmag_tan";
	};
	class rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan: rhs_mag_30Rnd_556x45_Mk318_PMAG
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_tan_co.paa"
		};
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_pmag_tan";
	};
	class rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan: rhs_mag_30Rnd_556x45_Mk262_PMAG
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_tan_co.paa"
		};
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag_pmag_tan";
	};
	class rhs_mag_20Rnd_556x45_M193_Stanag: rhs_mag_30Rnd_556x45_M193_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		count=20;
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_20Rnd_556x45_M193_Stanag_ca.paa";
		displayName="$STR_RHSUSF_20RND_556x45_M193_DISPLAY_NAME";
		descriptionShort="$STR_RHSUSF_20RND_556x45_DESCRIPTION_SHORT";
		mass=6.25;
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag20_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_20rnd";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_20rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa"
		};
	};
	class rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		count=20;
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red_ca.paa";
		displayName="$STR_RHSUSF_20RND_556x45_M196_TRACER_RED_DISPLAY_NAME";
		descriptionShort="$STR_RHSUSF_20RND_556x45_DESCRIPTION_SHORT";
		mass=6.25;
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag20_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_20rnd";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_20rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m196_co.paa"
		};
	};
	class rhs_mag_20Rnd_556x45_M200_Stanag: rhs_mag_30Rnd_556x45_M200_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		count=20;
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_20Rnd_556x45_M200_Stanag_ca.paa";
		displayName="$STR_RHSUSF_20RND_556x45_M200_DISPLAY_NAME";
		descriptionShort="$STR_RHSUSF_20RND_556x45_DESCRIPTION_SHORT";
		mass=6.25;
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag20_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_20rnd";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_20rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa"
		};
	};
	class rhs_mag_20Rnd_556x45_M855_Stanag: rhs_mag_30Rnd_556x45_M855_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		count=20;
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_20Rnd_556x45_M855_Stanag_ca.paa";
		displayName="$STR_RHSUSF_20RND_556x45_M855_DISPLAY_NAME";
		descriptionShort="$STR_RHSUSF_20RND_556x45_DESCRIPTION_SHORT";
		mass=6.25;
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag20_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_20rnd";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_20rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m855_co.paa"
		};
	};
	class rhs_mag_20Rnd_556x45_M855A1_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		count=20;
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_20Rnd_556x45_M855A1_Stanag_ca.paa";
		displayName="$STR_RHSUSF_20RND_556x45_M855A1_DISPLAY_NAME";
		descriptionShort="$STR_RHSUSF_20RND_556x45_DESCRIPTION_SHORT";
		mass=6.25;
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag20_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_20rnd";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_20rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m885a1_co.paa"
		};
	};
	class rhs_mag_20Rnd_556x45_Mk262_Stanag: rhs_mag_30Rnd_556x45_Mk262_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		count=20;
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_20Rnd_556x45_Mk262_Stanag_ca.paa";
		displayName="$STR_RHSUSF_20RND_556x45_Mk262_DISPLAY_NAME";
		descriptionShort="$STR_RHSUSF_20RND_556x45_DESCRIPTION_SHORT";
		mass=6.25;
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag20_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_20rnd";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_20rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_556_m193_co.paa"
		};
	};
	class rhs_mag_20Rnd_556x45_M193_2MAG_Stanag: rhs_mag_20Rnd_556x45_M193_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_20Rnd_556x45_M193_2MAG_Stanag_ca.paa";
		displayName="$STR_RHSUSF_20RND_556x45_M193_2MAG_DISPLAY_NAME";
		mass=9.3500004;
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag20_2mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_tape_20rnd";
	};
	class rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red: rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red_ca.paa";
		displayName="$STR_RHSUSF_20RND_556x45_M196_TRACER_RED_2MAG_DISPLAY_NAME";
		mass=9.3500004;
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_stanag20_2mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_usgi_tape_20rnd";
	};
	class rhs_mag_100Rnd_556x45_M855A1_cmag: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_100Rnd_556x45_M855A1_cmag_ca.paa";
		displayName="$STR_RHSUSF_100RND_556x45_M855A1_CMAG_DISPLAY_NAME";
		descriptionShort="Caliber: 5.56x45mm NATO&lt;br/&gt;Rounds: 100&lt;br/&gt;Used in: M4, M16, M27, M249";
		reloadAction="RHS_GestureReloadAR15_CMAG";
		mass=34.650002;
		count=100;
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_cmag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_stanag_cmag_100rnd";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\g36_cmag_co.paa"
		};
		hiddenSelections[]=
		{
			"camo"
		};
	};
	class rhs_mag_100Rnd_556x45_M855A1_cmag_mixed: rhs_mag_100Rnd_556x45_M855A1_cmag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_100Rnd_556x45_M855A1_cmag_mixed_ca.paa";
		displayName="100rnd C-Mag M855A1 (Mixed)";
		displayNameShort="M855A1 (Mixed)";
		ammo="rhs_ammo_556x45_M855A1_Ball_Red";
		tracersEvery=5;
		lastRoundsTracer=5;
	};
	class rhs_mag_100Rnd_556x45_M855_cmag: rhs_mag_100Rnd_556x45_M855A1_cmag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_100Rnd_556x45_M855_cmag_ca.paa";
		displayName="$STR_RHSUSF_100RND_556x45_M855_CMAG_DISPLAY_NAME";
		displayNameShort="M855";
		ammo="rhs_ammo_556x45_M855_Ball";
		initSpeed=948.84241;
	};
	class rhs_mag_100Rnd_556x45_M855_cmag_mixed: rhs_mag_100Rnd_556x45_M855_cmag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_100Rnd_556x45_M855_cmag_mixed_ca.paa";
		displayName="100rnd C-Mag M855 (Mixed)";
		displayNameShort="M855 (Mixed)";
		ammo="rhs_ammo_556x45_M855_Ball_Red";
		tracersEvery=5;
		lastRoundsTracer=5;
	};
	class rhs_mag_100Rnd_556x45_Mk318_cmag: rhs_mag_100Rnd_556x45_M855A1_cmag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_100Rnd_556x45_Mk318_cmag_ca.paa";
		displayName="$STR_RHSUSF_100RND_556x45_MK318_CMAG_DISPLAY_NAME";
		displayNameShort="Mk318";
		ammo="rhs_ammo_556x45_Mk318_Ball";
		initSpeed=950.36639;
	};
	class rhs_mag_100Rnd_556x45_Mk262_cmag: rhs_mag_100Rnd_556x45_M855A1_cmag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_100Rnd_556x45_Mk262_cmag_ca.paa";
		displayName="$STR_RHSUSF_100RND_556x45_MK262_CMAG_DISPLAY_NAME";
		displayNameShort="Mk262";
		ammo="rhs_ammo_556x45_Mk262_Ball";
		initSpeed=838.20001;
	};
	class rhs_mag_M441_HE: 1Rnd_HE_Grenade_shell
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		mass=5.0599999;
		ammo="rhsusf_40mm_HE";
		displayName="M441 HE Grenade Round";
		displaynameshort="HE Grenade";
		descriptionshort="Type: High Explosive Grenade<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		model="\rhsusf\addons\rhsusf_weapons2\magazines\40mm\rhs_m443";
		modelspecial="\rhsusf\addons\rhsusf_weapons\mag_proxies\40mm\rhs_m443";
		modelSpecialIsProxy=1;
		deleteIfEmpty=0;
	};
	class rhsusf_mag_6Rnd_M441_HE: rhs_mag_M441_HE
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="6rnd M441 HE Grenade Rounds";
		descriptionshort="Type: High Explosive Grenade<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		count=6;
		mass=30.360001;
	};
	class rhs_mag_M433_HEDP: rhs_mag_M441_HE
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M433 HEDP Grenade Round";
		displaynameshort="HEDP Grenade";
		descriptionshort="Type: High Explosive Dual Purpose Grenade<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo="rhsusf_40mm_HEDP";
		model="\rhsusf\addons\rhsusf_weapons2\magazines\40mm\rhs_m443";
		modelspecial="\rhsusf\addons\rhsusf_weapons\mag_proxies\40mm\rhs_m443";
		modelSpecialIsProxy=1;
		deleteIfEmpty=0;
		picture="\rhsusf\addons\rhsusf_weapons2\icons\rhs_icon_m443_ca.paa";
	};
	class rhsusf_mag_6Rnd_M433_HEDP: rhs_mag_M433_HEDP
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="6rnd M433 HEDP Grenades";
		descriptionshort="Type: High Explosive Dual Purpose Grenade<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		count=6;
		mass=30.360001;
	};
	class rhs_mag_M397_HET: rhs_mag_M441_HE
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M397 HET Grenade Round";
		displaynameshort="HET Grenade";
		descriptionshort="Type: High Explosive Timed<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo="rhs_ammo_m397";
		model="\rhsusf\addons\rhsusf_weapons2\magazines\40mm\rhs_m443";
		modelspecial="\rhsusf\addons\rhsusf_weapons\mag_proxies\40mm\rhs_m443";
		modelSpecialIsProxy=1;
		deleteIfEmpty=0;
		picture="\rhsusf\addons\rhsusf_weapons2\icons\rhs_icon_m443_ca.paa";
	};
	class rhsusf_mag_6Rnd_M397_HET: rhs_mag_M397_HET
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="6rnd M397 HET Grenades";
		descriptionshort="Type: High Explosive Timed<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		count=6;
		mass=30.360001;
	};
	class rhs_mag_M781_Practice: rhs_mag_M433_HEDP
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M781 Practice Round";
		displaynameshort="Practice Rnd.";
		descriptionshort="Type: Practice Grenade<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo="rhsusf_40mm_Practice";
		model="\rhsusf\addons\rhsusf_weapons2\magazines\40mm\rhs_m781";
		modelspecial="\rhsusf\addons\rhsusf_weapons\mag_proxies\40mm\rhs_m781";
		picture="\rhsusf\addons\rhsusf_weapons2\icons\rhs_icon_m781_ca.paa";
	};
	class rhsusf_mag_6Rnd_M781_Practice: rhs_mag_M781_Practice
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="6Rnd. M781 Practice Round";
		descriptionshort="Type: Practice Grenade<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		scope=2;
		count=6;
		mass=30.360001;
	};
	class rhs_mag_m4009: rhs_mag_M441_HE
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="GL Stun Grenade Round";
		displaynameshort="Stun Grenade";
		descriptionShort="Type: Stun Grenade<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		picture="\rhsusf\addons\rhsusf_weapons\icons\m576_buckshot_ca.paa";
		ammo="rhsusf_40mm_FLASHBANG";
	};
	class rhsusf_mag_6Rnd_m4009: rhsusf_mag_6Rnd_M433_HEDP
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="6rnd. GL Stun Grenade Round";
		displaynameshort="Stun Grenade";
		descriptionShort="Type: Stun Grenade<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		picture="\rhsusf\addons\rhsusf_weapons\icons\m576_buckshot_ca.paa";
		ammo="rhs_g_vg40sz";
		mass=30.360001;
	};
	class rhs_mag_m576: rhs_mag_M441_HE
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M576 Buckshot Round";
		displaynameshort="Buckshot";
		descriptionShort="Type: Buckshot Round<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		model="\rhsusf\addons\rhsusf_weapons2\magazines\40mm\rhs_m576";
		modelspecial="\rhsusf\addons\rhsusf_weapons\mag_proxies\40mm\rhs_m576";
		modelSpecialIsProxy=1;
		deleteIfEmpty=0;
		picture="\rhsusf\addons\rhsusf_weapons\icons\m576_buckshot_ca.paa";
		ammo="rhs_ammo_m576_buckshot";
		initSpeed=268;
	};
	class rhsusf_mag_6Rnd_M576_Buckshot: rhsusf_mag_6Rnd_M433_HEDP
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="6rnd. M576 Buckshot Round";
		displaynameshort="Buckshot";
		descriptionShort="Type: Buckshot Round<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		model="\rhsusf\addons\rhsusf_weapons2\magazines\40mm\rhs_m576";
		picture="\rhsusf\addons\rhsusf_weapons\icons\m576_buckshot_ca.paa";
		ammo="rhs_ammo_m576_buckshot";
		mass=30.360001;
	};
	class rhs_mag_M585_white: rhs_mag_M441_HE
	{
		scope=1;
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M583 White Flare Round";
		displaynameshort="White Flare";
		descriptionShort="Type: Flare Round - White<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo="rhsusf_40mm_white";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
	};
	class rhs_mag_M583A1_white: rhs_mag_M585_white
	{
		scope=2;
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M583A1 White Flare Round";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
	};
	class rhs_mag_m661_green: rhs_mag_M585_white
	{
		scope=2;
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M661 Green Flare Round";
		displaynameshort="Green Flare";
		descriptionShort="Type: Flare Round - Green<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo="rhsusf_40mm_green";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_green_CA.paa";
	};
	class rhs_mag_m662_red: rhs_mag_M585_white
	{
		scope=2;
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M662 Red Flare Round";
		displaynameshort="Red Flare";
		descriptionShort="Type: Flare Round - Red<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo="rhsusf_40mm_red";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_Red_CA.paa";
	};
	class rhs_mag_M585_white_cluster: rhs_mag_M585_white
	{
		scope=2;
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M585 White Cluster Star Round";
		displaynameshort="White Cluster Star";
		descriptionShort="Type: Cluster Star - White<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo="rhsusf_40mm_clusterflare_white";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
	};
	class rhs_mag_M663_green_cluster: rhs_mag_M585_white_cluster
	{
		scope=2;
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M663 Green Cluster Star Round";
		displaynameshort="Green Cluster Star";
		descriptionShort="Type: Cluster Star - Green<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo="rhsusf_40mm_clusterflare_green";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_green_CA.paa";
	};
	class rhs_mag_M664_red_cluster: rhs_mag_M585_white_cluster
	{
		scope=2;
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M664 Red Cluster Star Round";
		displaynameshort="Red Cluster Star";
		descriptionShort="Type: Cluster Star - Red<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo="rhsusf_40mm_clusterflare_red";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_red_CA.paa";
	};
	class rhsusf_mag_6Rnd_M585_white: rhsusf_mag_6Rnd_M433_HEDP
	{
		scope=1;
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="6Rnd. M585 White Flare Round";
		displaynameshort="White Flare";
		descriptionShort="Type: Flare Round - White<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		ammo="rhsusf_40mm_white";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
	};
	class rhsusf_mag_6Rnd_M583A1_white: rhsusf_mag_6Rnd_M585_white
	{
		scope=2;
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="6Rnd. M583A1 White Flare Round";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
	};
	class rhsusf_mag_6Rnd_m661_green: rhsusf_mag_6Rnd_M585_white
	{
		scope=2;
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="6Rnd. M661 Green Flare Round";
		displaynameshort="Green Flare";
		descriptionShort="Type: Flare Round - Green<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		ammo="rhsusf_40mm_green";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_green_CA.paa";
	};
	class rhsusf_mag_6Rnd_m662_red: rhsusf_mag_6Rnd_M585_white
	{
		scope=2;
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="6Rnd. M662 Red Flare Round";
		displaynameshort="Red Flare";
		descriptionShort="Type: Flare Round - Red<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		ammo="rhsusf_40mm_red";
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_Red_CA.paa";
	};
	class rhs_mag_m713_Red: rhs_mag_M441_HE
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M713 Red Smoke Round";
		displaynameshort="Red Smoke";
		descriptionShort="Type: Smoke Round - Red<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
		ammo="rhs_40mm_m713_red";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
	};
	class rhs_mag_m714_White: rhs_mag_m713_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M714 White Smoke Round";
		displaynameshort="White Smoke";
		descriptionShort="Type: Smoke Round - White<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		ammo="rhs_40mm_m714_white";
	};
	class rhs_mag_m715_Green: rhs_mag_m713_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M715 Green Smoke Round";
		displaynameshort="Green Smoke";
		descriptionShort="Type: Smoke Round - Green<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
		ammo="rhs_40mm_m715_green";
	};
	class rhs_mag_m716_yellow: rhs_mag_m713_Red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M716 Yellow Smoke Round";
		displaynameshort="Yellow Smoke";
		descriptionShort="Type: Smoke Round - Yellow<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
		ammo="rhs_40mm_m716_yellow";
	};
	class rhsusf_mag_6Rnd_M713_red: rhsusf_mag_6Rnd_M433_HEDP
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="6Rnd. M713 Red Smoke Round";
		displaynameshort="Red Smoke";
		descriptionShort="Type: Smoke Grenade - Red<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
		ammo="rhs_40mm_m713_red";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
	};
	class rhsusf_mag_6Rnd_M714_white: rhsusf_mag_6Rnd_M713_red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="6Rnd. M714 White Smoke Round";
		displaynameshort="White Smoke";
		descriptionShort="Type: Smoke Grenade - White<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		ammo="rhs_40mm_m714_white";
	};
	class rhsusf_mag_6Rnd_M715_green: rhsusf_mag_6Rnd_M713_red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="6Rnd. M715 Green Smoke Round";
		displaynameshort="Green Smoke";
		descriptionShort="Type: Smoke Grenade - Green<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
		ammo="rhs_40mm_m715_green";
	};
	class rhsusf_mag_6Rnd_M716_yellow: rhsusf_mag_6Rnd_M713_red
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="6Rnd. M716 Yellow Smoke Round";
		displaynameshort="Yellow Smoke";
		descriptionShort="Type: Smoke Grenade - Yellow<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		picture="\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
		ammo="rhs_40mm_m716_yellow";
	};
	class rhsusf_5Rnd_300winmag_xm2010: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="$STR_rhsusf_5Rnd_300winmag_xm2010";
		displaynameshort=".300 Win Mag";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_win_mag";
		picture="\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		ammo="rhsusf_B_300winmag";
		count=5;
		initSpeed=869;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="$STR_rhsusf_5Rnd_300winmag_xm2010_DESC";
		mass=1.5599999;
	};
	class 10Rnd_RHS_50BMG_Box: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=1;
		value=1;
		displayName="";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="\rhsusf\addons\rhsusf_weapons\icons\m_bmg_stdbox_ca.paa";
		modelSpecial="";
		useAction=0;
		useActionTitle="";
		reloadAction="";
		ammo="rhsusf_ammo_127x99_M33_Ball";
		count=10;
		type=256;
		initSpeed=853;
		selectionFireAnsim="zasleh";
		nameSound="magazine";
		maxLeadSpeed=23;
		weaponpoolavailable=1;
		mass=41.139999;
	};
	class rhsusf_mag_10Rnd_STD_50BMG_M33: 10Rnd_RHS_50BMG_Box
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		initSpeed=853;
		displayName="10rnd M107 M33";
		displayNameShort="M33 Ball";
		descriptionShort="10RD .50BMG M33 Ball M107 Magazine";
		tracersEvery=0;
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_50cal_box_mag";
	};
	class rhsusf_mag_10Rnd_STD_50BMG_mk211: rhsusf_mag_10Rnd_STD_50BMG_M33
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="10rnd M107 Mk211";
		displayNameShort="Mk 211 HEIAP";
		descriptionShort="10RD .50BMG Mk 211 HEIAP M107 Magazine";
		ammo="rhsusf_ammo_127x99_mk211";
	};
	class rhsusf_5Rnd_00Buck: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="$STR_RHSUSF_5RND_12G_00BUCKSHOT_DISPLAY_NAME";
		displayNameShort="Buckshot";
		descriptionshort="Caliber: 12 gauge<br />Rounds: 5<br />Used in: M590A1";
		picture="\rhsusf\addons\rhsusf_weapons\icons\m_12g_buck.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_buckshot";
		modelSpecial="\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_buckshot_1rnd.p3d";
		modelSpecialIsProxy=1;
		ammo="rhs_ammo_12g_00buckshot";
		count=5;
		mass=5.5;
		initSpeed=336;
	};
	class rhsusf_8Rnd_00Buck: rhsusf_5Rnd_00Buck
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="$STR_RHSUSF_8RND_12G_00BUCKSHOT_DISPLAY_NAME";
		descriptionshort="Caliber: 12 gauge<br />Rounds: 8<br />Used in: M590A1";
		count=8;
		mass=8.8000002;
		initSpeed=403;
	};
	class rhsusf_5Rnd_Slug: rhsusf_5Rnd_00Buck
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="$STR_RHSUSF_5RND_12G_SLUG_DISPLAY_NAME";
		displayNameShort="Slug";
		picture="\rhsusf\addons\rhsusf_weapons\icons\m_12g_slug.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_slug";
		modelSpecial="\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_slug_1rnd.p3d";
		ammo="rhs_ammo_12g_slug";
		initSpeed=395;
	};
	class rhsusf_8Rnd_Slug: rhsusf_5Rnd_Slug
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="$STR_RHSUSF_8RND_12G_SLUG_DISPLAY_NAME";
		descriptionshort="Caliber: 12 gauge<br />Rounds: 8<br />Used in: M590A1";
		count=8;
		mass=8.8000002;
		initSpeed=475;
	};
	class rhsusf_5Rnd_HE: rhsusf_8Rnd_Slug
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="$STR_RHSUSF_5RND_12G_HEEP_DISPLAY_NAME";
		displayNameShort="HE";
		descriptionshort="Caliber: 12 gauge<br />Rounds: 5<br />Used in: M590A1";
		picture="\rhsusf\addons\rhsusf_weapons\icons\m_12g_heep.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_he";
		modelSpecial="\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_heer_1rnd.p3d";
		ammo="rhs_ammo_12g_HE";
		count=5;
		mass=5.5;
		initSpeed=125;
	};
	class rhsusf_8Rnd_HE: rhsusf_5Rnd_HE
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="$STR_RHSUSF_8RND_12G_HEEP_DISPLAY_NAME";
		descriptionshort="Caliber: 12 gauge<br />Rounds: 8<br />Used in: M590A1";
		count=8;
		mass=8.8000002;
		initSpeed=150;
	};
	class rhsusf_5Rnd_FRAG: rhsusf_8Rnd_HE
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="$STR_RHSUSF_5RND_12G_FRAG_DISPLAY_NAME";
		displayNameShort="FRAG";
		descriptionshort="Caliber: 12 gauge<br />Rounds: 5<br />Used in: M590A1";
		picture="\rhsusf\addons\rhsusf_weapons\icons\m_12g_frag.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\12g\12g_frag";
		modelSpecial="\rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_12ga_hefrag_1rnd.p3d";
		ammo="rhs_ammo_12g_FRAG";
		count=5;
		mass=5.5;
		initSpeed=125;
	};
	class rhsusf_8Rnd_FRAG: rhsusf_5Rnd_FRAG
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="$STR_RHSUSF_8RND_12G_FRAG_DISPLAY_NAME";
		descriptionshort="Caliber: 12 gauge<br />Rounds: 8<br />Used in: M590A1";
		count=8;
		mass=8.8000002;
		initSpeed=150;
	};
	class rhsusf_5Rnd_doomsday_Buck: rhsusf_5Rnd_00Buck
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=1;
		scopeArsenal=0;
		displayName="5rnd. 12g Doosmday Buckshot";
		displayNameShort="DOOMSDAY";
		descriptionshort="Caliber: 12 gauge<br />Rounds: 5<br />Used in: M590A1";
		ammo="rhs_ammo_doomsday_buckshot";
		count=5;
		mass=12;
	};
	class rhsusf_8Rnd_doomsday_Buck: rhsusf_5Rnd_doomsday_Buck
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="8rnd. 12g Doosmday Buckshot";
		descriptionshort="Caliber: 12 gauge<br />Rounds: 8<br />Used in: M590A1";
		ammo="rhs_ammo_doomsday_buckshot";
		count=8;
		mass=15;
	};
	class rhs_mag_six12_slug: CA_Magazine
	{
		scope=2;
		displayname="Six-12 Slug";
		displayNameShort="Slug";
		ammo="rhs_ammo_12g_slug";
		count=6;
		initSpeed=395;
		modelspecial="\a3\Weapons_F_Enoch\MagazineProxies\mag_12ga_tsp12_6rnd_F.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\Weapons_F_Enoch\Rifles\MSBS\Data\MSBS_03_black_CO.paa"
		};
	};
	class rhsusf_100Rnd_556x45_soft_pouch: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_ca.paa";
		ammo="rhs_ammo_556x45_M855A1_Ball";
		count=100;
		descriptionshort="Caliber: 5.56x45mm M855A1 NATO<br />Rounds: 100<br />Used in: M249";
		displayname="100rnd M249 Softpack M855A1";
		displayNameShort="M855A1 EPR";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_m81_co.paa"
		};
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_pouch_100rnd";
		reloadAction="rhs_GestureReloadM249";
		mass=26.9;
		tracersEvery=0;
		lastRoundsTracer=0;
		ace_isbelt=1;
	};
	class rhsusf_100Rnd_556x45_mixed_soft_pouch: rhsusf_100Rnd_556x45_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_ca.paa";
		ammo="rhs_ammo_556x45_M855A1_Ball_Red";
		displayname="100rnd M249 Softpack M855A1 (Mixed)";
		displayNameShort="M855A1 (Mixed)";
		lastroundstracer=5;
		tracersEvery=5;
	};
	class rhsusf_100Rnd_556x45_M855_soft_pouch: rhsusf_100Rnd_556x45_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_ca.paa";
		descriptionshort="Caliber: 5.56x45mm M855 NATO<br />Rounds: 100<br />Used in: M249";
		displayname="100rnd M249 Softpack M855";
		displayNameShort="M855";
		ammo="rhs_ammo_556x45_M855_Ball";
		initSpeed=948.84241;
	};
	class rhsusf_100Rnd_556x45_M855_mixed_soft_pouch: rhsusf_100Rnd_556x45_M855_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_ca.paa";
		ammo="rhs_ammo_556x45_M855_Ball_Red";
		displayname="100rnd M249 Softpack M855 (Mixed)";
		displayNameShort="M855 (Mixed)";
		lastroundstracer=5;
		tracersEvery=5;
	};
	class rhsusf_100Rnd_556x45_M995_soft_pouch: rhsusf_100Rnd_556x45_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_ca.paa";
		descriptionshort="Caliber: 5.56x45mm AP NATO<br />Rounds: 100<br />Used in: M249";
		displayname="100rnd M249 Softpack M995 AP";
		displayNameShort="M995 AP";
		ammo="rhs_ammo_556x45_M995_AP";
		initSpeed=1024;
		tracersEvery=5;
	};
	class rhsusf_100Rnd_556x45_M200_soft_pouch: rhsusf_100Rnd_556x45_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_ca.paa";
		descriptionshort="Caliber: 5.56x45mm Blank NATO<br />Rounds: 100<br />Used in: M249";
		displayname="100rnd M249 Softpack M200";
		displayNameShort="M200 Blanks";
		ammo="rhs_ammo_556x45_blank";
	};
	class rhsusf_100Rnd_556x45_soft_pouch_ucp: rhsusf_100Rnd_556x45_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_ucp_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_ucp";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"
		};
	};
	class rhsusf_100Rnd_556x45_mixed_soft_pouch_ucp: rhsusf_100Rnd_556x45_mixed_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_ucp_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_ucp";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"
		};
	};
	class rhsusf_100Rnd_556x45_M855_soft_pouch_ucp: rhsusf_100Rnd_556x45_M855_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_ucp_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_ucp";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"
		};
	};
	class rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp: rhsusf_100Rnd_556x45_M855_mixed_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_ucp_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_ucp";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"
		};
	};
	class rhsusf_100Rnd_556x45_M995_soft_pouch_ucp: rhsusf_100Rnd_556x45_M995_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_ucp_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_ucp";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"
		};
	};
	class rhsusf_100Rnd_556x45_M200_soft_pouch_ucp: rhsusf_100Rnd_556x45_M200_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_ucp_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_ucp";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"
		};
	};
	class rhsusf_100Rnd_556x45_soft_pouch_coyote: rhsusf_100Rnd_556x45_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_coyote_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_coy";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"
		};
	};
	class rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote: rhsusf_100Rnd_556x45_mixed_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_coyote_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_coy";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"
		};
	};
	class rhsusf_100Rnd_556x45_M855_soft_pouch_coyote: rhsusf_100Rnd_556x45_M855_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_coyote_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_coy";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"
		};
	};
	class rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote: rhsusf_100Rnd_556x45_M855_mixed_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_coyote_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_coy";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"
		};
	};
	class rhsusf_100Rnd_556x45_M995_soft_pouch_coyote: rhsusf_100Rnd_556x45_M995_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_coyote_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_coy";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"
		};
	};
	class rhsusf_100Rnd_556x45_M200_soft_pouch_coyote: rhsusf_100Rnd_556x45_M200_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_556x45_soft_pouch_coyote_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_softpouch_mag_coy";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"
		};
	};
	class rhsusf_200Rnd_556x45_soft_pouch: rhsusf_100Rnd_556x45_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_200Rnd_556x45_soft_pouch_ca.paa";
		count=200;
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_pouch_200rnd";
		descriptionshort="Caliber: 5.56x45mm M855A1 NATO<br />Rounds: 200<br />Used in: M249";
		displayname="200rnd M249 Softpack M855A1";
		mass=45.869999;
	};
	class rhsusf_200Rnd_556x45_mixed_soft_pouch: rhsusf_200Rnd_556x45_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_200Rnd_556x45_soft_pouch_ca.paa";
		ammo="rhs_ammo_556x45_M855A1_Ball_Red";
		displayname="200rnd M249 Softpack M855A1 (Mixed)";
		displayNameShort="M855A1 (Mixed)";
		lastroundstracer=5;
		tracersEvery=5;
	};
	class rhsusf_200Rnd_556x45_M855_soft_pouch: rhsusf_100Rnd_556x45_M855_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_200Rnd_556x45_soft_pouch_ca.paa";
		count=200;
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_pouch_200rnd";
		descriptionshort="Caliber: 5.56x45mm M855 NATO<br />Rounds: 200<br />Used in: M249";
		displayname="200rnd M249 Softpack M855";
		mass=45.869999;
	};
	class rhsusf_200Rnd_556x45_M855_mixed_soft_pouch: rhsusf_200Rnd_556x45_M855_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_200Rnd_556x45_soft_pouch_ca.paa";
		ammo="rhs_ammo_556x45_M855_Ball_Red";
		displayname="200rnd M249 Softpack M855 (Mixed)";
		displayNameShort="M855 (Mixed)";
		lastroundstracer=5;
		tracersEvery=5;
	};
	class rhsusf_200Rnd_556x45_soft_pouch_ucp: rhsusf_200Rnd_556x45_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_200Rnd_556x45_soft_pouch_ucp_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_ucp";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"
		};
	};
	class rhsusf_200Rnd_556x45_mixed_soft_pouch_ucp: rhsusf_200Rnd_556x45_mixed_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_200Rnd_556x45_soft_pouch_ucp_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_ucp";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"
		};
	};
	class rhsusf_200Rnd_556x45_M855_soft_pouch_ucp: rhsusf_200Rnd_556x45_M855_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_200Rnd_556x45_soft_pouch_ucp_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_ucp";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"
		};
	};
	class rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp: rhsusf_200Rnd_556x45_M855_mixed_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_200Rnd_556x45_soft_pouch_ucp_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_ucp";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_ucp_co.paa"
		};
	};
	class rhsusf_200Rnd_556x45_soft_pouch_coyote: rhsusf_200Rnd_556x45_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_200Rnd_556x45_soft_pouch_coyote_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"
		};
	};
	class rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote: rhsusf_200Rnd_556x45_mixed_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_200Rnd_556x45_soft_pouch_coyote_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"
		};
	};
	class rhsusf_200Rnd_556x45_M855_soft_pouch_coyote: rhsusf_200Rnd_556x45_M855_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_200Rnd_556x45_soft_pouch_coyote_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"
		};
	};
	class rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote: rhsusf_200Rnd_556x45_M855_mixed_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_200Rnd_556x45_soft_pouch_coyote_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_200rnd_softpouch_mag_coy";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\stockpouch_coy_co.paa"
		};
	};
	class rhs_200rnd_556x45_M_SAW: rhsusf_200Rnd_556x45_soft_pouch
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_200Rnd_556x45_box_ca.paa";
		scope=1;
		scopeArsenal=0;
		ammo="rhs_ammo_556x45_M855A1_Ball_Red";
		displayname="200rnd M249 Box M855A1 (Mixed)";
		displaynameshort="M855A1 (Mixed)";
		lastroundstracer=5;
		tracersevery=5;
		mass=51.650002;
		hiddenSelections[]={};
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
	};
	class rhs_200rnd_556x45_T_SAW: rhs_200rnd_556x45_M_SAW
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayname="200rnd M249 Box M856A1 (Tracer)";
		displaynameshort="M856A1 Tracer";
		lastroundstracer=5;
		tracersevery=1;
		mass=51.650002;
	};
	class rhs_200rnd_556x45_B_SAW: rhs_200rnd_556x45_M_SAW
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		ammo="rhs_ammo_556x45_M855A1_Ball";
		displayname="200rnd M249 Box M855A1";
		displaynameshort="M855A1 EPR";
		lastroundstracer=0;
		tracersevery=0;
	};
	class rhsusf_200Rnd_556x45_box: rhs_200rnd_556x45_B_SAW
	{
		scope=2;
		scopeArsenal=2;
	};
	class rhsusf_200rnd_556x45_mixed_box: rhs_200rnd_556x45_M_SAW
	{
		scope=2;
		scopeArsenal=2;
	};
	class rhsusf_200rnd_556x45_M855_box: rhs_200rnd_556x45_B_SAW
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		scopeArsenal=2;
		mass=51.650002;
		displayname="200rnd M249 Box M855";
		displaynameshort="M855";
		descriptionshort="Caliber: 5.56x45mm M855 NATO<br />Rounds: 200<br />Used in: M249";
		ammo="rhs_ammo_556x45_M855_Ball";
		initSpeed=948.84241;
	};
	class rhsusf_200rnd_556x45_M855_mixed_box: rhsusf_200rnd_556x45_M855_box
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		ammo="rhs_ammo_556x45_M855A1_Ball_Red";
		displayname="200rnd M249 Box M855 (Mixed)";
		displaynameshort="M855 (Mixed)";
		tracersevery=5;
	};
	class rhsusf_50Rnd_762x51: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_50Rnd_762x51_ca.paa";
		scope=2;
		descriptionshort="Caliber: 7.62x51mm NATO<br />Rounds: 50<br />Used in: M240";
		displayname="50rnd M240 Softpack M80";
		displaynameshort="M80 Ball";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_softpouch_mag";
		count=50;
		type="2*		256";
		ammo="rhs_ammo_762x51_M80_Ball";
		initSpeed=838;
		tracersEvery=5;
		lastRoundsTracer=0;
		mass=25.41;
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_50rnd";
		modelSpecialIsProxy=1;
		ace_isbelt=1;
	};
	class rhsusf_50Rnd_762x51_m61_ap: rhsusf_50Rnd_762x51
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_50Rnd_762x51_m61_ap_ca.paa";
		displayname="50rnd M240 Softpack M61 AP";
		displayNameShort="M61 AP";
		ammo="rhs_ammo_762x51_M61_AP";
		initSpeed=838;
		mass=25.41;
	};
	class rhsusf_50Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_50Rnd_762x51_m62_tracer_ca.paa";
		displayname="50rnd M240 Softpack M62 (Tracer)";
		displayNameShort="M62 Tracer";
		ammo="rhs_ammo_762x51_M62_tracer";
		initSpeed=817;
		mass=25.41;
		tracersEvery=1;
	};
	class rhsusf_50Rnd_762x51_m80a1epr: rhsusf_50Rnd_762x51
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_50Rnd_762x51_m80a1epr_ca.paa";
		displayname="50rnd M240 Softpack M80A1 EPR";
		displayNameShort="M80A1 EPR";
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
		initSpeed=930;
		mass=25.41;
	};
	class rhsusf_50Rnd_762x51_m82_blank: rhsusf_50Rnd_762x51
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_50Rnd_762x51_m82_blank_ca.paa";
		displayname="50rnd M240 Belt M82 (Blank)";
		displayNameShort="M82 Blanks";
		ammo="rhs_ammo_762x51_M82_blank";
		initSpeed=838;
		mass=25.41;
	};
	class rhsusf_100Rnd_762x51: rhsusf_50Rnd_762x51
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_762x51_ca.paa";
		displayname="100rnd M240 Box M80";
		displayNameShort="M80 Ball";
		descriptionshort="Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
		count=100;
		initSpeed=838;
		mass=32.34;
		lastroundstracer=0;
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
	};
	class rhsusf_100Rnd_762x51_m61_ap: rhsusf_50Rnd_762x51_m61_ap
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_762x51_m61_ap_ca.paa";
		displayname="100rnd M240 Box M61 AP";
		displayNameShort="M61 AP";
		descriptionshort="Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		count=100;
		mass=32.34;
		lastroundstracer=0;
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
	};
	class rhsusf_100Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51_m62_tracer
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_762x51_m62_tracer_ca.paa";
		displayname="100rnd M240 Box M62 (Tracer)";
		displayNameShort="M62 Tracer";
		descriptionshort="Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		count=100;
		mass=32.34;
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
	};
	class rhsusf_100Rnd_762x51_m80a1epr: rhsusf_50Rnd_762x51_m80a1epr
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_762x51_m80a1epr_ca.paa";
		displayname="100rnd M240 Box M80A1 EPR";
		displayNameShort="M80A1 EPR";
		descriptionshort="Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		count=100;
		mass=32.34;
		lastroundstracer=0;
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
	};
	class rhsusf_100Rnd_762x51_m82_blank: rhsusf_50Rnd_762x51_m82_blank
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_100Rnd_762x51_m82_blank_ca.paa";
		displayname="100rnd M240 Box M82 (Blank)";
		displayNameShort="M82 Blanks";
		descriptionshort="Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		count=100;
		mass=32.34;
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_m240_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
	};
	class rhsusf_50Rnd_762x51_m993: rhsusf_50Rnd_762x51
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=1;
		displayName="50rnd M240 Softpack M993 AP";
		displayNameShort="M993 AP";
		descriptionshort="Caliber: 7.62x51mm NATO<br />Rounds: 50<br />Used in: M240";
		ammo="rhs_ammo_762x51_M993_Ball";
		initSpeed=910;
		mass=16.24;
	};
	class rhsusf_100Rnd_762x51_m993: rhsusf_50Rnd_762x51_m993
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=1;
		displayName="100rnd M240 Box M993 AP";
		descriptionshort="Caliber: 7.62x51mm NATO<br />Rounds: 100<br />Used in: M240";
		count=100;
		mass=32.34;
	};
	class rhsusf_20Rnd_762x51_m118_special_Mag: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="20rnd M14 M118";
		displayNameShort="M118 Ball";
		picture="\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_m14_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_M14_20rnd";
		modelSpecialIsProxy=1;
		count=20;
		ammo="rhs_ammo_762x51_M118_Special_Ball";
		mass=16.24;
		initSpeed=805;
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: M14 Series Rifles";
	};
	class rhsusf_20Rnd_762x51_m993_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="20rnd M14 M993 AP";
		displayNameShort="M993 AP";
		ammo="rhs_ammo_762x51_M993_Ball";
		mass=16.24;
		initSpeed=910;
	};
	class rhsusf_20Rnd_762x51_m80_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayname="20rnd M14 M80";
		displayNameShort="M80 Ball";
		ammo="rhs_ammo_762x51_M80_Ball";
		mass=16.24;
		initSpeed=838;
	};
	class rhsusf_20Rnd_762x51_m62_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayname="20rnd M14 M62 (Tracer)";
		displayNameShort="M62 Tracer";
		ammo="rhs_ammo_762x51_M62_tracer";
		mass=16.24;
		initSpeed=817;
		tracersEvery=1;
	};
	class rhsusf_20Rnd_762x51_SR25_m118_special_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="20rnd SR-25 M118";
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SR-25 Series Rifles";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_20rnd_ar308_mag";
	};
	class rhsusf_20Rnd_762x51_SR25_m993_Mag: rhsusf_20Rnd_762x51_m993_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="20rnd SR-25 M993 AP";
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SR-25 Series Rifles";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_20rnd_ar308_mag";
	};
	class rhsusf_20Rnd_762x51_SR25_m62_Mag: rhsusf_20Rnd_762x51_m62_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="20rnd SR-25 M62 (Tracer)";
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SR-25 Series Rifles";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_20rnd_ar308_mag";
	};
	class rhsusf_20Rnd_762x51_SR25_mk316_special_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		initSpeed=814;
		ammo="rhs_ammo_762x51_Mk316_Special_Ball";
		displayName="20rnd SR-25 Mk316 Mod 0";
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SR-25 Series Rifles";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_20rnd_ar308_mag";
	};
	class rhsusf_5Rnd_762x51_m118_special_Mag: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="5rnd M118";
		displayNameShort="M118 Ball";
		picture="\A3\weapons_f\data\UI\m_5rnd_127x108_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_762x51_loose";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_aics_5rnd";
		modelSpecialIsProxy=1;
		count=5;
		ammo="rhs_ammo_762x51_M118_Special_Ball";
		mass=2.6400001;
		initSpeed=805;
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 5<br />Used in: M24 SWS";
	};
	class rhsusf_5Rnd_762x51_m993_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="5rnd M993 AP";
		displayNameShort="M993 AP";
		ammo="rhs_ammo_762x51_M993_Ball";
		mass=2.6400001;
		initSpeed=910;
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 5<br />Used in: M24 SWS";
	};
	class rhsusf_5Rnd_762x51_m62_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayname="5rnd M62 (Tracer)";
		displayNameShort="M62 Tracer";
		ammo="rhs_ammo_762x51_M62_tracer";
		mass=2.6400001;
		initSpeed=817;
		tracersEvery=1;
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 5<br />Used in: M24 SWS";
	};
	class rhsusf_10Rnd_762x51_m118_special_Mag: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="10rnd AICS M118";
		displayNameShort="M118 Ball";
		picture="\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_10rnd_aics_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_aics_10rnd";
		modelSpecialIsProxy=1;
		count=10;
		ammo="rhs_ammo_762x51_M118_Special_Ball";
		mass=5.2800002;
		initSpeed=805;
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M40A5";
	};
	class rhsusf_10Rnd_762x51_m993_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_10rnd_aics_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_aics_10rnd";
		scope=2;
		displayName="10rnd AICS M993 AP";
		displayNameShort="M993 AP";
		picture="\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		ammo="rhs_ammo_762x51_M993_Ball";
		count=10;
		mass=5.2800002;
		initSpeed=910;
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M40A5";
	};
	class rhsusf_10Rnd_762x51_m62_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_10rnd_aics_mag";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_aics_10rnd";
		scope=2;
		displayname="10rnd AICS M62 (Tracer)";
		displayNameShort="M62 Tracer";
		picture="\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		ammo="rhs_ammo_762x51_M62_tracer";
		count=10;
		mass=5.2800002;
		initSpeed=817;
		tracersEvery=1;
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 10<br />Used in: M40A5";
	};
	class rhsusf_5Rnd_762x51_AICS_m118_special_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_5rnd_aics_mag";
		displayName="5rnd AICS M118";
		picture="\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 5<br />Used in: M40A5";
	};
	class rhsusf_5Rnd_762x51_AICS_m993_Mag: rhsusf_5Rnd_762x51_m993_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_5rnd_aics_mag";
		displayName="5rnd AICS M993 AP";
		picture="\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 5<br />Used in: M40A5";
	};
	class rhsusf_5Rnd_762x51_AICS_m62_Mag: rhsusf_5Rnd_762x51_m62_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_5rnd_aics_mag";
		displayname="5rnd AICS M62 (Tracer)";
		picture="\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 5<br />Used in: M40A5";
	};
	class rhs_mag_20Rnd_SCAR_762x51_m80_ball: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="20rnd SCAR M80";
		displayNameShort="M80 Ball";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_20Rnd_SCAR_762x51_m80_ball_ca.paa";
		count=20;
		ammo="rhs_ammo_762x51_M80_Ball";
		mass=16.24;
		initSpeed=794;
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SCAR-H";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_20rnd_scar_mag.p3d";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_MK17_20rnd";
		modelSpecialIsProxy=1;
	};
	class rhs_mag_20Rnd_SCAR_762x51_m80a1_epr: rhs_mag_20Rnd_SCAR_762x51_m80_ball
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="20rnd SCAR M80A1 EPR";
		displayNameShort="M80A1 EPR";
		ammo="rhs_ammo_762x51_M80A1EPR_Ball";
	};
	class rhs_mag_20Rnd_SCAR_762x51_m62_tracer: rhs_mag_20Rnd_SCAR_762x51_m80_ball
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="20rnd SCAR M62 (Tracer)";
		displayNameShort="M62 Tracer";
		ammo="rhs_ammo_762x51_M62_tracer";
		tracersEvery=1;
	};
	class rhs_mag_20Rnd_SCAR_762x51_m61_ap: rhs_mag_20Rnd_SCAR_762x51_m80_ball
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="20rnd SCAR M61 AP";
		displayNameShort="M61 AP";
		ammo="rhs_ammo_762x51_M61_AP";
	};
	class rhs_mag_20Rnd_SCAR_762x51_m118_special: rhs_mag_20Rnd_SCAR_762x51_m80_ball
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="20rnd SCAR M118 Ball";
		displayNameShort="M118 Special Ball";
		ammo="rhs_ammo_762x51_M118_Special_Ball";
		initSpeed=763;
	};
	class rhs_mag_20Rnd_SCAR_762x51_mk316_special: rhs_mag_20Rnd_SCAR_762x51_m80_ball
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="20rnd SCAR Mk316 Mod 0";
		displayNameShort="Mk316 Special Ball";
		ammo="rhs_ammo_762x51_Mk316_Special_Ball";
		initSpeed=772;
	};
	class rhsusf_mag_40Rnd_46x30_FMJ: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		type=16;
		mass=8.8000002;
		displayName="40rnd MP7 SX FMJ";
		ammo="rhs_ammo_46x30_FMJ";
		count=40;
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_40rnd_mp7_mag";
		descriptionShort="Caliber: 4.6x30 mm<br/>Rounds: 40<br/>Used in: MP7A2";
		initSpeed=620;
		lastRoundsTracer=0;
		picture="\rhsusf\addons\rhsusf_weapons2\glock17g4\data\rhs_mag1_glock17g4_ca.paa";
		tracersEvery=0;
	};
	class rhsusf_mag_40Rnd_46x30_JHP: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		type=16;
		displayName="40rnd MP7 SX JHP";
		picture="\rhsusf\addons\rhsusf_weapons2\glock17g4\data\rhs_mag1_glock17g4_ca.paa";
		ammo="rhs_ammo_46x30_JHP";
		count=40;
		mass=8.8000002;
		tracersEvery=0;
		lastRoundsTracer=0;
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_40rnd_mp7_mag";
		descriptionShort="Caliber: 4.6x30 mm<br/>Rounds: 40<br/>Used in: MP7A2";
		initSpeed=690;
	};
	class rhsusf_mag_40Rnd_46x30_AP: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		type=16;
		displayName="40rnd MP7 SX AP ";
		picture="\rhsusf\addons\rhsusf_weapons2\glock17g4\data\rhs_mag1_glock17g4_ca.paa";
		ammo="rhs_ammo_46x30_AP";
		count=40;
		mass=8.8000002;
		tracersEvery=0;
		lastRoundsTracer=0;
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_40rnd_mp7_mag";
		descriptionShort="Caliber: 4.6x30 mm<br/>Rounds: 40<br/>Used in: MP7A2";
		initSpeed=680;
	};
	class rhsusf_mag_7x45acp_MHP: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		type=16;
		displayName="$STR_RHSUSF_7RND_45ACP_DISPLAY_NAME";
		picture="\rhsusf\addons\rhsusf_weapons\icons\mag_45acp_ca.paa";
		ammo="rhs_ammo_45ACP_MHP";
		count=7;
		mass=5.2800002;
		initSpeed=280;
		tracersEvery=0;
		lastRoundsTracer=0;
		descriptionShort="$STR_RHSUSF_7RND_45ACP_DESCRIPTION_SHORT";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_7rnd_m1911_mag";
	};
	class rhsusf_mag_17Rnd_9x19_FMJ: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		type=16;
		displayName="$STR_RHSUSF_17RND_9x19_FMJ_DISPLAY_NAME";
		displayNameShort="9mm FMJ Mag";
		picture="\rhsusf\addons\rhsusf_weapons2\glock17g4\data\rhs_mag1_glock17g4_ca.paa";
		ammo="rhs_ammo_9x19_FMJ";
		count=17;
		mass=6;
		initSpeed=390.10001;
		descriptionShort="$STR_RHSUSF_17RND_9x19_FMJ_DESCRIPTION_SHORT";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_17rnd_glk_mag";
	};
	class rhsusf_mag_17Rnd_9x19_JHP: rhsusf_mag_17Rnd_9x19_FMJ
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="$STR_RHSUSF_17RND_9x19_JHP_DISPLAY_NAME";
		displayNameShort="9mm JHP Mag";
		picture="\rhsusf\addons\rhsusf_weapons2\glock17g4\data\rhs_mag2_glock17g4_ca.paa";
		ammo="rhs_ammo_9x19_JHP";
		initSpeed=301.79999;
		descriptionShort="$STR_RHSUSF_17RND_9x19_JHP_DESCRIPTION_SHORT";
	};
	class rhsusf_mag_15Rnd_9x19_FMJ: rhsusf_mag_17Rnd_9x19_FMJ
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="$STR_RHSUSF_15RND_9x19_FMJ_DISPLAY_NAME";
		picture="\rhsusf\addons\rhsusf_weapons2\m9_beretta\Data\UI\M9_Magazine_ca.paa";
		ammo="rhs_ammo_9x19_FMJ";
		count=15;
		descriptionShort="$STR_RHSUSF_15RND_9x19_FMJ_DESCRIPTION_SHORT";
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_15rnd_m9_mag";
	};
	class rhsusf_mag_15Rnd_9x19_JHP: rhsusf_mag_17Rnd_9x19_JHP
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="$STR_RHSUSF_15RND_9x19_JHP_DISPLAY_NAME";
		picture="\rhsusf\addons\rhsusf_weapons2\m9_beretta\Data\UI\M9_Magazine_ca.paa";
		descriptionShort="$STR_RHSUSF_15RND_9x19_JHP_DESCRIPTION_SHORT";
		count=15;
		model="\rhsusf\addons\rhsusf_weapons\magazines\rhs_15rnd_m9_mag";
	};
	class rhs_m136_mag: CA_LauncherMagazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		allowedSlots[]={801,701,901};
		scope=1;
		displayName="M136 HEAT";
		descriptionshort="Type: High Explosive Anti Tank";
		picture="\rhsusf\addons\rhsusf_weapons\icons\m_m136_ca.paa";
		model="\A3\weapons_f\empty";
		ammo="rhs_ammo_M136_rocket";
		type="6 * 		256";
		initSpeed=290;
		mass=0;
	};
	class rhs_dummy_mag: FakeMagazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		allowedSlots[]={801,701,901};
		scope=1;
		displayName="M136 HEAT";
		descriptionshort="Type: High Explosive Anti Tank";
		picture="\rhsusf\addons\rhsusf_weapons\icons\m_m136_ca.paa";
		model="\A3\weapons_f\empty";
		ammo="rhs_ammo_M136_rocket";
		type="6 * 		256";
		initSpeed=290;
		mass=0;
	};
	class rhsusf_launcher_dummy_mag: rhs_dummy_mag
	{
		scope=1;
		count=0;
	};
	class rhs_m136_hedp_mag: rhs_m136_mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M136 HEDP";
		descriptionshort="Type: High Explosive, Dual Purpose";
		ammo="rhs_ammo_M136_hedp_rocket";
	};
	class rhs_m136_hp_mag: rhs_m136_mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M136 HP";
		descriptionshort="Type: High Penetration";
		ammo="rhs_ammo_M136_hp_rocket";
	};
	class rhs_m72a7_mag: rhs_m136_hedp_mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		displayName="M72 HEDP";
		ammo="rhs_ammo_m72a7_rocket";
	};
	class rhs_fim92_mag: Titan_AA
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		mass=120;
		displayName="FIM-92F";
		descriptionshort="Type: Surface-to-air<br />Caliber: 70 mm<br />Used in: FIM-92";
		ammo="rhs_ammo_fim92_missile";
		type="6 * 		256";
		picture="\rhsusf\addons\rhsusf_weapons\icons\m_stinger_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\FIM92\Stinger_proxy";
		initSpeed=20;
		maxLeadSpeed=220;
	};
	class rhs_fgm148_magazine_AT: CA_LauncherMagazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="FGM-148 Missile";
		descriptionshort="Type: High Explosive Anti Tank<br />Caliber: 127 mm<br />Used in: FGM-148";
		picture="\rhsusf\addons\rhsusf_weapons\FGM148\data\UI\m_fgm148_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_tube_ammo";
		deleteIfEmpty=0;
		count=1;
		ammo="rhs_ammo_M_fgm148_AT";
		initSpeed=10;
		maxLeadSpeed=350;
		mass=286.88;
		rhs_addEmptyTube="rhs_fgm148_magazine_AT_empty";
	};
	class rhs_fgm148_magazine_AT_empty: rhs_fgm148_magazine_AT
	{
		scope=1;
		displayName="FGM-148 Empty Tube";
		mass=72.599998;
		model="\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_tube_ammo_empty";
	};
	class rhs_fgm172a_magazine_AT: CA_LauncherMagazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="FGM172A SRAW";
		descriptionshort="Type: High Explosive Anti Tank<br />Caliber: 139 mm<br />Used in: Mk 40 Mod 0";
		picture="\rhsusf\addons\rhsusf_weapons\FGM148\data\UI\m_fgm148_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_tube_ammo";
		type="3 * 256";
		count=1;
		ammo="rhs_ammo_M_fgm172a_AT";
		initSpeed=40;
		maxLeadSpeed=350;
		mass=140.8;
	};
	class rhs_fgm172b_magazine_MPV: rhs_fgm172a_magazine_AT
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="FGM172B SRAW-MPV";
		descriptionshort="Type: High Explosive Multi-purpose<br />Caliber: 139 mm<br />Used in: Mk41 Mod 0";
		picture="\rhsusf\addons\rhsusf_weapons\FGM148\data\UI\m_fgm148_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_tube_ammo";
		count=1;
		ammo="rhs_ammo_M_fgm172b_MPV";
		maxLeadSpeed=350;
		mass=140.8;
	};
	class rhs_mag_smaw_HEAA: CA_LauncherMagazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="Mk.6 HEAA";
		descriptionshort="Type: High Explosive Anti Armor<br />Caliber: 83 mm<br />Used in: SMAW";
		model="rhsusf\addons\rhsusf_weapons2\smaw\ammo_smaw.p3d";
		picture="\rhsusf\addons\rhsusf_weapons2\smaw\UI\ammo_CA.paa";
		initSpeed=220;
		displaynameshort="Mk.6 HEAA";
		ammo="rhs_ammo_smaw_HEAA";
		type="2*256";
		mass=136.39999;
	};
	class rhs_mag_smaw_HEDP: CA_LauncherMagazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="Mk.3 HEDP";
		descriptionshort="Type: High Explosive Dual Purpose<br />Caliber: 83 mm<br />Used in: SMAW";
		model="rhsusf\addons\rhsusf_weapons2\smaw\ammo_smaw.p3d";
		picture="\rhsusf\addons\rhsusf_weapons2\smaw\UI\ammo_CA.paa";
		initSpeed=220;
		displaynameshort="Mk.3 HEDP";
		ammo="rhs_ammo_smaw_HEDP";
		type="2*256";
		mass=129.8;
	};
	class rhs_mag_smaw_SR: CA_LauncherMagazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="Mk.217 Spotting";
		descriptionshort="Type: 9mm Spotting Round<br />Rounds: 5<br />Used in: SMAW Spotting Rifle";
		model="rhsusf\addons\rhsusf_weapons2\smaw\spotting_smaw.p3d";
		picture="\rhsusf\addons\rhsusf_weapons2\smaw\UI\spotting_CA.paa";
		initSpeed=220;
		displaynameshort="MK217 Tracer";
		ammo="rhs_ammo_smaw_SR";
		type=256;
		mass=7;
		count=5;
		ace_overpressure_priority=99;
		ace_overpressure_angle=0;
		ace_overpressure_range=0;
		ace_overpressure_damage=0;
	};
	class rhs_mag_maaws_HEAT: CA_LauncherMagazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="FFV751 HEAT";
		model="rhsusf\addons\rhsusf_weapons2\m3maaws\mag_m3maaws.p3d";
		picture="\rhsusf\addons\rhsusf_weapons2\m3maaws\UI\gear_small_CA.paa";
		initSpeed=290;
		descriptionShort="High Explosive Anti tank";
		displaynameshort="751 HEAT";
		ammo="rhs_ammo_maaws_HEAT";
		type="2*        256";
		mass=88.199997;
	};
	class rhs_mag_maaws_HEDP: CA_LauncherMagazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="FFV502 HEDP";
		model="rhsusf\addons\rhsusf_weapons2\m3maaws\mag_m3maaws.p3d";
		picture="\rhsusf\addons\rhsusf_weapons2\m3maaws\UI\gear_small_CA.paa";
		initSpeed=230;
		descriptionShort="High Explosive Dual Purpose";
		displaynameshort="502 HEDP";
		ammo="rhs_ammo_maaws_HEDP";
		type="2*        256";
		mass=72.769997;
	};
	class rhs_mag_maaws_HE: CA_LauncherMagazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="FFV441 HE";
		model="rhsusf\addons\rhsusf_weapons2\m3maaws\mag_m3maaws.p3d";
		picture="\rhsusf\addons\rhsusf_weapons2\m3maaws\UI\gear_small_CA.paa";
		initSpeed=255;
		descriptionShort="High Explosive";
		displaynameshort="441 HE";
		ammo="rhs_ammo_maaws_HE";
		type="2*        256";
		mass="68,36";
	};
	class rhs_mag_maaws_SMOKE: CA_LauncherMagazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=1;
		displayName="FFV469 SMOKE";
		model="rhsusf\addons\rhsusf_weapons2\m3maaws\mag_m3maaws.p3d";
		picture="\rhsusf\addons\rhsusf_weapons2\m3maaws\UI\gear_small_CA.paa";
		initSpeed=255;
		descriptionShort="Smoke";
		displaynameshort="469 SMOKE";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
		ammo="rhs_ammo_maaws_SMOKE";
		type="2*        256";
		mass=68.360001;
	};
	class rhs_mag_maaws_ILLUM: CA_LauncherMagazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=1;
		displayName="FFV545 ILLUMINATION";
		model="rhsusf\addons\rhsusf_weapons2\m3maaws\mag_m3maaws.p3d";
		picture="\rhsusf\addons\rhsusf_weapons2\m3maaws\UI\gear_small_CA.paa";
		initSpeed=255;
		descriptionShort="Ilumination Flare";
		displaynameshort="545 ILLUMINATION";
		ammo="rhs_ammo_maaws_ILLUM";
		type="2*        256";
		mass=71.830002;
	};
	class rhsusf_m112_mag: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="$STR_RHSUSF_M112_EXPLOSIVE_DISPLAY_NAME";
		picture="\rhsusf\addons\rhsusf_weapons\icons\rhsusf_explosive_m112x1_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x1_d";
		descriptionShort="$STR_A3_cfgMagazines_PipeBomb1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_PipeBomb_Library0";
		};
		descriptionUse="$STR_A3_use_charge";
		type="2*		256";
		allowedSlots[]={901};
		value=5;
		ammo="rhsusf_m112_ammo";
		mass=12.54;
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		weaponPoolAvailable=1;
		useActionTitle="$STR_ACTION_PUTBOMB";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
		ace_explosives_DelayTime=1;
		ace_explosives_Placeable=1;
		ace_explosives_SetupObject="ACE_Explosives_Place_rhsusf_explosive_m112";
		useAction=0;
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Timer",
				"Command",
				"MK16_Transmitter",
				"DeadmanSwitch"
			};
			class Timer
			{
				FuseTime=0.5;
			};
			class Command
			{
				FuseTime=0.5;
			};
			class MK16_Transmitter: Command
			{
			};
			class DeadmanSwitch: Command
			{
			};
		};
	};
	class rhsusf_m112x4_mag: rhsusf_m112_mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		mass=50.16;
		displayName="$STR_RHSUSF_M112X4_EXPLOSIVE_DISPLAY_NAME";
		picture="\rhsusf\addons\rhsusf_weapons\icons\rhsusf_explosive_m112x4_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\explosives\rhsusf_m112x4_d";
		ammo="rhsusf_m112x4_ammo";
		descriptionShort="$STR_A3_cfgMagazines_DemoCharge1";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_DemoCharge_Library0";
		};
		allowedSlots[]={901,701};
		ace_explosives_SetupObject="ACE_Explosives_Place_rhsusf_explosive_m112x4";
	};
	class rhs_mine_M19_mag: ATMine_Range_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		mass=138.16;
		ammo="rhsusf_mine_m19_ammo";
		picture="\rhsusf\addons\rhsusf_weapons\icons\rhsusf_mine_m19_ca.paa";
		displayName="$STR_RHSUSF_M19_ATMINE_DISPLAY_NAME";
		model="\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m19_e";
		descriptionShort="$STR_RHSUSF_M19_ATMINE_DESCRIPTION_SHORT";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhsusf_mine_M19";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"PressurePlate"
			};
			class PressurePlate
			{
				digDistance=0.075000003;
			};
		};
	};
	class rhsusf_mine_m14_mag: ATMine_Range_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		mass=2.2;
		ammo="rhsusf_mine_m14_ammo";
		picture="\rhsusf\addons\rhsusf_weapons\icons\rhsusf_mine_m14_ca.paa";
		displayName="$STR_RHSUSF_M14_APMINE_DISPLAY_NAME";
		model="\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m14_d";
		descriptionShort="$STR_RHSUSF_M14_APMINE_DESCRIPTION_SHORT";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_ClassicMineRangeMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhsusf_mine_m14";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"PressurePlate"
			};
			class PressurePlate
			{
				digDistance=0.029999999;
			};
		};
	};
	class rhsusf_mine_m49a1_3m_mag: ATMine_Range_Mag
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_mine_m49a1_mag_ca.paa";
		mass=20;
		ammo="rhsusf_mine_m49a1_3m_ammo";
		model="\rhsusf\addons\rhsusf_weapons\mines\rhsusf_m49a1_d";
		displayName="M49A1 (3m)";
		descriptionShort="$STR_RHSUSF_MINE_M49A1_MAG_DESCRIPTIONSHORT";
		class Library
		{
			libTextDesc="$STR_A3_cfgMagazines_ClassicMineWireMagazine_Library0";
		};
		descriptionUse="$STR_A3_use_mine";
		allowedSlots[]={901,701};
		ace_explosives_SetupObject="ACE_Explosives_Place_rhsusf_mine_m49a1_3m";
		class ACE_Triggers
		{
			SupportedTriggers[]=
			{
				"Tripwire"
			};
			class Tripwire
			{
				digDistance=0.125;
			};
		};
	};
	class rhsusf_mine_m49a1_6m_mag: rhsusf_mine_m49a1_3m_mag
	{
		displayName="M49A1 (6m)";
		ammo="rhsusf_mine_m49a1_6m_ammo";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhsusf_mine_m49a1_6m";
	};
	class rhsusf_mine_m49a1_10m_mag: rhsusf_mine_m49a1_3m_mag
	{
		displayName="M49A1 (10m)";
		ammo="rhsusf_mine_m49a1_10m_ammo";
		ace_explosives_SetupObject="ACE_Explosives_Place_rhsusf_mine_m49a1_10m";
	};
	class rhs_mag_m67: HandGrenade
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		ammo="rhs_ammo_m67";
		displayName="$STR_RHSUSF_1Rnd_M67";
		displayNameShort="Frag Grenade";
		descriptionshort="Type: Fragmentation Grenade<br />Rounds: 1<br />Used in: Hand";
		mass=8.8000002;
		model="\rhsusf\addons\rhsusf_weapons\grenades\m67\m67_frag";
		picture="\rhsusf\addons\rhsusf_weapons\icons\g_m67_ca.paa";
	};
	class rhs_mag_m69: HandGrenade
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		ammo="rhs_ammo_m69";
		displayName="$STR_RHSUSF_1Rnd_M69";
		displayNameShort="Practice Grenade";
		descriptionshort="Type: Practice Grenade<br />Rounds: 1<br />Used in: Hand";
		mass=8.8000002;
		model="\rhsusf\addons\rhsusf_weapons\grenades\m69\m69_practice";
		picture="\rhsusf\addons\rhsusf_weapons\icons\g_m69_ca.paa";
	};
	class rhs_mag_mk84: HandGrenade
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		ammo="rhs_ammo_m84";
		displayName="$STR_RHSUSF_1Rnd_MK84";
		displayNameShort="Stun Grenade";
		descriptionshort="Type: Stun Grenade<br />Rounds: 1<br />Used in: Hand";
		picture="\rhsusf\addons\rhsusf_weapons\icons\g_m84_flash_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\grenades\m84\m84_flash";
		mass=5.1900001;
	};
	class rhs_mag_an_m8hc: HandGrenade
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		ammo="rhs_ammo_an_m8hc";
		displayName="$STR_RHSUSF_1Rnd_M8HC";
		displayNameShort="White Smoke";
		descriptionshort="Type: Smoke Grenade - White<br />Rounds: 1<br />Used in: Hand";
		picture="\rhsusf\addons\rhsusf_weapons\icons\g_an_m8hc_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\grenades\an-m8hc\an-m8hc";
		mass=8.9799995;
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
	};
	class rhs_mag_an_m14_th3: HandGrenade
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		ammo="rhs_ammo_an_m14_th3";
		displayName="$STR_RHSUSF_1Rnd_ANM14_TH3";
		displayNameShort="Incendiary Grenade";
		descriptionshort="Type: Incendiary Grenade<br />Rounds: 1<br />Used in: Hand";
		picture="\rhsusf\addons\rhsusf_weapons\icons\g_an_m14_th3_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\grenades\an-m14_th3\an-m14_th3";
		mass=12.01;
	};
	class rhs_mag_m7a3_cs: HandGrenade
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		ammo="rhs_ammo_m7a3_cs";
		displayName="$STR_RHSUSF_1Rnd_M7A3_CS";
		displayNameShort="CS Gas Grnd.";
		descriptionshort="Type: CS Gas Grenade<br />Rounds: 1<br />Used in: Hand";
		picture="\rhsusf\addons\rhsusf_weapons\icons\g_m7a3_cs_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\grenades\m7a3_cs\m7a3_cs";
		mass=9.6800003;
	};
	class rhs_mag_mk3a2: HandGrenade
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		ammo="rhs_ammo_mk3a2";
		displayName="$STR_RHSUSF_1Rnd_MK3A2";
		displayNameShort="Concussion Grnd.";
		descriptionshort="Type: Concussion Grenade<br />Rounds: 1<br />Used in: Hand";
		picture="\rhsusf\addons\rhsusf_weapons\icons\g_mk3a2_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\grenades\mk3a2\mk3a2";
		mass=9.5699997;
	};
	class rhs_mag_m18_smoke_base: HandGrenade
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		model="\rhsusf\addons\rhsusf_weapons\grenades\m18\m18_smoke";
		mass=11.88;
		scope=0;
		descriptionshort="Type: Smoke Grenade - White<br />Rounds: 1<br />Used in: Hand";
		nameSoundWeapon="smokeshell";
		nameSound="smokeshell";
	};
	class rhs_mag_m18_green: rhs_mag_m18_smoke_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		ammo="rhs_ammo_m18_green";
		displayName="$STR_RHSUSF_1Rnd_M18_GREEN";
		descriptionshort="Type: Smoke Grenade - Green<br />Rounds: 1<br />Used in: Hand";
		displayNameShort="Green Smoke";
		picture="\rhsusf\addons\rhsusf_weapons\icons\g_m18_green_ca.paa";
		scope=2;
	};
	class rhs_mag_m18_purple: rhs_mag_m18_smoke_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		ammo="rhs_ammo_m18_purple";
		displayName="$STR_RHSUSF_1Rnd_M18_PURPLE";
		displayNameShort="Purple Smoke";
		descriptionshort="Type: Smoke Grenade - Purple<br />Rounds: 1<br />Used in: Hand";
		picture="\rhsusf\addons\rhsusf_weapons\icons\g_m18_purple_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\grenades\m18\m18_smoke_purple";
		scope=2;
	};
	class rhs_mag_m18_red: rhs_mag_m18_smoke_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		ammo="rhs_ammo_m18_red";
		displayName="$STR_RHSUSF_1Rnd_M18_RED";
		displayNameShort="Red Smoke";
		descriptionshort="Type: Smoke Grenade - Red<br />Rounds: 1<br />Used in: Hand";
		picture="\rhsusf\addons\rhsusf_weapons\icons\g_m18_red_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\grenades\m18\m18_smoke_red";
		scope=2;
	};
	class rhs_mag_m18_yellow: rhs_mag_m18_smoke_base
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		ammo="rhs_ammo_m18_yellow";
		displayName="$STR_RHSUSF_1Rnd_M18_YELLOW";
		displayNameShort="Yellow Smoke";
		descriptionshort="Type: Smoke Grenade - Yellow<br />Rounds: 1<br />Used in: Hand";
		picture="\rhsusf\addons\rhsusf_weapons\icons\g_m18_yellow_ca.paa";
		model="\rhsusf\addons\rhsusf_weapons\grenades\m18\m18_smoke_yellow";
		scope=2;
	};
	class rhs_mag_s5_32: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_MAG_S5";
		displayNameShort="$STR_RHS_MAG_SH_S5";
		descriptionShort="General purpose";
		ammo="rhs_ammo_s5";
		count=64;
		maxleadspeed=200;
		initSpeed=44;
		nameSound="rockets";
		weight=256;
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С5";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С5";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							type="text";
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="С5";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								
								{
									"Center",
									{0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{0.027000001,0},
									1
								},
								
								{
									"Center",
									{0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{0,0.030547399},
									1
								},
								
								{
									"Center",
									{-0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{-0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{-0.027000001,0},
									1
								},
								
								{
									"Center",
									{-0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{-0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{0.017550001,8.6792601e-010},
									1
								},
								
								{
									"Center",
									{0.01485,7.3439899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-1.53427e-009,0.019855799},
									1
								},
								
								{
									"Center",
									{-1.29823e-009,0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-0.017550001,-2.3677901e-010},
									1
								},
								
								{
									"Center",
									{-0.01485,-2.00351e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{3.0685401e-009,-0.019855799},
									1
								},
								
								{
									"Center",
									{2.5964599e-009,-0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,-0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,-0.0054000798},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_s5_16: rhs_mag_s5_32
	{
		count=16;
		weight=84;
	};
	class rhs_mag_s5_64: rhs_mag_s5_32
	{
		count=64;
		weight=276;
	};
	class rhs_mag_s5_128: rhs_mag_s5_32
	{
		count=128;
		weight=532;
	};
	class rhs_mag_s5_192: rhs_mag_s5_32
	{
		count=192;
		weight=788;
	};
	class rhs_mag_s5_m1_32: rhs_mag_s5_32
	{
		displayName="$STR_RHS_MAG_s5m1";
		displayNameShort="$STR_RHS_MAG_SH_s5m1";
		descriptionShort="HE-FRAG";
		ammo="rhs_ammo_s5m1";
		count=64;
		weight=247.03999;
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С5М1";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С5М1";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							type="text";
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="С5М1";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								
								{
									"Center",
									{0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{0.027000001,0},
									1
								},
								
								{
									"Center",
									{0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{0,0.030547399},
									1
								},
								
								{
									"Center",
									{-0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{-0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{-0.027000001,0},
									1
								},
								
								{
									"Center",
									{-0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{-0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{0.017550001,8.6792601e-010},
									1
								},
								
								{
									"Center",
									{0.01485,7.3439899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-1.53427e-009,0.019855799},
									1
								},
								
								{
									"Center",
									{-1.29823e-009,0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-0.017550001,-2.3677901e-010},
									1
								},
								
								{
									"Center",
									{-0.01485,-2.00351e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{3.0685401e-009,-0.019855799},
									1
								},
								
								{
									"Center",
									{2.5964599e-009,-0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,-0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,-0.0054000798},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_s5_m1_16: rhs_mag_s5_m1_32
	{
		count=16;
		weight=81.760002;
	};
	class rhs_mag_s5_m1_64: rhs_mag_s5_m1_32
	{
		count=64;
		weight=267.04001;
	};
	class rhs_mag_s5_m1_128: rhs_mag_s5_m1_32
	{
		count=128;
		weight=514.08002;
	};
	class rhs_mag_s5_m1_192: rhs_mag_s5_m1_32
	{
		count=192;
		weight=761.12;
	};
	class rhs_mag_s5_k1_32: rhs_mag_s5_32
	{
		displayName="$STR_RHS_MAG_s5k1";
		displayNameShort="$STR_RHS_MAG_SH_s5k1";
		descriptionShort="HEAT (Penetration: 130mm RHA)";
		ammo="rhs_ammo_s5k1";
		count=64;
		weight=232.96001;
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С5К1";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С5К1";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							type="text";
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="С5К1";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								
								{
									"Center",
									{0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{0.027000001,0},
									1
								},
								
								{
									"Center",
									{0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{0,0.030547399},
									1
								},
								
								{
									"Center",
									{-0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{-0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{-0.027000001,0},
									1
								},
								
								{
									"Center",
									{-0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{-0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{0.017550001,8.6792601e-010},
									1
								},
								
								{
									"Center",
									{0.01485,7.3439899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-1.53427e-009,0.019855799},
									1
								},
								
								{
									"Center",
									{-1.29823e-009,0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-0.017550001,-2.3677901e-010},
									1
								},
								
								{
									"Center",
									{-0.01485,-2.00351e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{3.0685401e-009,-0.019855799},
									1
								},
								
								{
									"Center",
									{2.5964599e-009,-0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,-0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,-0.0054000798},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_s5_k1_16: rhs_mag_s5_k1_32
	{
		count=16;
		weight=78.239998;
	};
	class rhs_mag_s5_k1_64: rhs_mag_s5_k1_32
	{
		count=64;
		weight=252.96001;
	};
	class rhs_mag_s5_k1_128: rhs_mag_s5_k1_32
	{
		count=128;
		weight=485.92001;
	};
	class rhs_mag_s5_k1_192: rhs_mag_s5_k1_32
	{
		count=192;
		weight=718.88;
	};
	class rhs_mag_s5_ko_32: rhs_mag_s5_32
	{
		displayName="$STR_RHS_MAG_s5ko";
		displayNameShort="$STR_RHS_MAG_SH_s5ko";
		descriptionShort="HEAT-FRAG (Penetration: 130mm RHA)";
		ammo="rhs_ammo_s5ko";
		count=64;
		weight=283.51999;
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С5КО";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С5КО";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							type="text";
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="С5КО";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								
								{
									"Center",
									{0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{0.027000001,0},
									1
								},
								
								{
									"Center",
									{0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{0,0.030547399},
									1
								},
								
								{
									"Center",
									{-0.0135,0.0264541},
									1
								},
								
								{
									"Center",
									{-0.023382001,0.0152737},
									1
								},
								
								{
									"Center",
									{-0.027000001,0},
									1
								},
								
								{
									"Center",
									{-0.023382001,-0.0152737},
									1
								},
								
								{
									"Center",
									{-0.0135,-0.0264541},
									1
								},
								
								{
									"Center",
									{0,-0.030547399},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{0.017550001,8.6792601e-010},
									1
								},
								
								{
									"Center",
									{0.01485,7.3439899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-1.53427e-009,0.019855799},
									1
								},
								
								{
									"Center",
									{-1.29823e-009,0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{-0.017550001,-2.3677901e-010},
									1
								},
								
								{
									"Center",
									{-0.01485,-2.00351e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0124097,-0.0140402},
									1
								},
								
								{
									"Center",
									{-0.0105005,-0.0118802},
									1
								},
								{},
								
								{
									"Center",
									{3.0685401e-009,-0.019855799},
									1
								},
								
								{
									"Center",
									{2.5964599e-009,-0.0168011},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,-0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,0.0054000798},
									1
								},
								{},
								
								{
									"Center",
									{-0.0066821598,-0.0075601102},
									1
								},
								
								{
									"Center",
									{-0.00477297,-0.0054000798},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_s5_ko_16: rhs_mag_s5_ko_32
	{
		count=16;
		weight=90.879997;
	};
	class rhs_mag_s5_ko_64: rhs_mag_s5_ko_32
	{
		count=64;
		weight=303.51999;
	};
	class rhs_mag_s5_ko_128: rhs_mag_s5_ko_32
	{
		count=128;
		weight=587.03998;
	};
	class rhs_mag_s5_ko_192: rhs_mag_s5_ko_32
	{
		count=192;
		weight=870.56;
	};
	class rhs_mag_s8_12: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_MAG_S8KOM";
		displayNameShort="$STR_RHS_MAG_SH_S8KOM";
		descriptionShort="HEAT (Penetration: 350mm RHA)";
		ammo="rhs_ammo_s8";
		count=12;
		initSpeed=44;
		nameSound="rockets";
		maxleadspeed=30;
		weight=155.60001;
	};
	class rhs_mag_s8_20: rhs_mag_s8_12
	{
		count=20;
		weight=246;
	};
	class rhs_mag_s8_40: rhs_mag_s8_12
	{
		count=40;
		weight=472;
	};
	class rhs_mag_s8_80: rhs_mag_s8_12
	{
		count=80;
		weight=924;
	};
	class rhs_mag_s8_120: rhs_mag_s8_12
	{
		count=120;
		weight=1376;
	};
	class rhs_mag_s8_DF_20: rhs_mag_s8_12
	{
		count=20;
		weight=268;
		displayName="$STR_RHS_MAG_S8DF";
		displayNameShort="$STR_RHS_MAG_SH_S8DF";
		descriptionShort="Thermobaric";
		ammo="rhs_ammo_s8df";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С8ДФ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С8ДФ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							type="text";
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="С8ДФ";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								
								{
									"Center",
									{0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.029999999,0},
									1
								},
								
								{
									"Center",
									{0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{0,0.0339416},
									1
								},
								
								{
									"Center",
									{-0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{-0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.029999999,0},
									1
								},
								
								{
									"Center",
									{-0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{-0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{0.0195,9.6436303e-010},
									1
								},
								
								{
									"Center",
									{0.0165,8.1599899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-1.70474e-009,0.022062},
									1
								},
								
								{
									"Center",
									{-1.44248e-009,0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-0.0195,-2.63087e-010},
									1
								},
								
								{
									"Center",
									{-0.0165,-2.22612e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{3.40949e-009,-0.022062},
									1
								},
								
								{
									"Center",
									{2.8849501e-009,-0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,-0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,0.0060000899},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,-0.0060000801},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_s8_DF_40: rhs_mag_s8_DF_20
	{
		count=40;
		weight=556;
	};
	class rhs_mag_s8_DF_80: rhs_mag_s8_DF_20
	{
		count=80;
		weight=1092;
	};
	class rhs_mag_s8_T_20: rhs_mag_s8_12
	{
		count=20;
		weight=320;
		displayName="$STR_RHS_MAG_S8T";
		displayNameShort="$STR_RHS_MAG_SH_S8T";
		descriptionShort="Tandem HEAT (Penetration: 440mm RHA)";
		ammo="rhs_ammo_s8t";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С8Т";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С8Т";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							type="text";
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="С8Т";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								
								{
									"Center",
									{0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.029999999,0},
									1
								},
								
								{
									"Center",
									{0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{0,0.0339416},
									1
								},
								
								{
									"Center",
									{-0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{-0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.029999999,0},
									1
								},
								
								{
									"Center",
									{-0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{-0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{0.0195,9.6436303e-010},
									1
								},
								
								{
									"Center",
									{0.0165,8.1599899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-1.70474e-009,0.022062},
									1
								},
								
								{
									"Center",
									{-1.44248e-009,0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-0.0195,-2.63087e-010},
									1
								},
								
								{
									"Center",
									{-0.0165,-2.22612e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{3.40949e-009,-0.022062},
									1
								},
								
								{
									"Center",
									{2.8849501e-009,-0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,-0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,0.0060000899},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,-0.0060000801},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_s8_T_40: rhs_mag_s8_T_20
	{
		count=40;
		weight=620;
	};
	class rhs_mag_s8_T_80: rhs_mag_s8_T_20
	{
		count=80;
		weight=1220;
	};
	class rhs_mag_s13b_10: VehicleMagazine
	{
		scope=2;
		displayName="$STR_RHS_MAG_S13B";
		displayNameShort="$STR_RHS_MAG_SH_S13B";
		descriptionShort="Obstacle penetration/HE";
		ammo="rhs_ammo_s13b";
		count=10;
		maxleadspeed=200;
		initSpeed=44;
		nameSound="rockets";
		weight=600;
	};
	class rhs_mag_s13d_10: rhs_mag_s13b_10
	{
		displayName="$STR_RHS_MAG_S13D";
		displayNameShort="$STR_RHS_MAG_SH_S13D";
		descriptionShort="Thermobaric (35-40kg TNT equivalent). Introduced in 1995";
		ammo="rhs_ammo_s13d";
		weight=680;
	};
	class rhs_mag_s13df_10: rhs_mag_s13b_10
	{
		displayName="$STR_RHS_MAG_S13DF";
		displayNameShort="$STR_RHS_MAG_SH_S13DF";
		descriptionShort="Thermobaric (35-40kg TNT equivalent). Introduced in 2018";
		ammo="rhs_ammo_s13df";
		weight=680;
	};
	class rhs_mag_s13t_10: rhs_mag_s13b_10
	{
		displayName="$STR_RHS_MAG_S13T";
		displayNameShort="$STR_RHS_MAG_SH_S13T";
		descriptionShort="Tandem HEAT (Penetration: 600mm RHA)";
		ammo="rhs_ammo_s13t";
		weight=750;
	};
	class rhs_mag_s13of_10: rhs_mag_s13b_10
	{
		displayName="$STR_RHS_MAG_S13OF";
		displayNameShort="$STR_RHS_MAG_SH_S13OF";
		descriptionShort="HE-FRAG. Introduced in 1993";
		ammo="rhs_ammo_s13of";
		weight=690;
	};
	class rhs_mag_ub16_s5: rhs_mag_s5_32
	{
		ammo="rhs_ammo_s5";
		model="rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_ub16.p3d";
		count=16;
		mass=118;
		weight=118;
		pylonWeapon="rhs_weap_s5";
		hardpoints[]=
		{
			"RHS_HP_UB16"
		};
	};
	class rhs_mag_ub16_s5m1: rhs_mag_ub16_s5
	{
		displayName="$STR_RHS_MAG_s5m1";
		displayNameShort="$STR_RHS_MAG_SH_s5m1";
		ammo="rhs_ammo_s5m1";
		mass=115.76;
		weight=115.76;
		pylonWeapon="rhs_weap_s5m1";
	};
	class rhs_mag_ub16_s5k1: rhs_mag_ub16_s5
	{
		displayName="$STR_RHS_MAG_s5k1";
		displayNameShort="$STR_RHS_MAG_SH_s5k1";
		ammo="rhs_ammo_s5k1";
		mass=112.24;
		weight=112.24;
		pylonWeapon="rhs_weap_s5k1";
	};
	class rhs_mag_ub16_s5ko: rhs_mag_ub16_s5
	{
		displayName="$STR_RHS_MAG_s5ko";
		displayNameShort="$STR_RHS_MAG_SH_s5ko";
		ammo="rhs_ammo_s5ko";
		mass=124.88;
		weight=124.88;
		pylonWeapon="rhs_weap_s5ko";
	};
	class rhs_mag_ub16_ka52_s5: rhs_mag_ub16_s5
	{
		model="rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_ub16_ka52.p3d";
		hardpoints[]=
		{
			"RHS_HP_UB16_KA52"
		};
	};
	class rhs_mag_ub16_ka52_s5m1: rhs_mag_ub16_ka52_s5
	{
		displayName="$STR_RHS_MAG_s5m1";
		displayNameShort="$STR_RHS_MAG_SH_s5m1";
		ammo="rhs_ammo_s5m1";
		mass=115.76;
		weight=115.76;
		pylonWeapon="rhs_weap_s5m1";
	};
	class rhs_mag_ub16_ka52_s5k1: rhs_mag_ub16_ka52_s5
	{
		displayName="$STR_RHS_MAG_s5k1";
		displayNameShort="$STR_RHS_MAG_SH_s5k1";
		ammo="rhs_ammo_s5k1";
		mass=112.24;
		weight=112.24;
		pylonWeapon="rhs_weap_s5k1";
	};
	class rhs_mag_ub16_ka52_s5ko: rhs_mag_ub16_ka52_s5
	{
		displayName="$STR_RHS_MAG_s5ko";
		displayNameShort="$STR_RHS_MAG_SH_s5ko";
		ammo="rhs_ammo_s5ko";
		mass=124.88;
		weight=124.88;
		pylonWeapon="rhs_weap_s5ko";
	};
	class rhs_mag_ub16_bd3_umk2a_s5: rhs_mag_ub16_s5
	{
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_ub16.p3d";
		hardpoints[]=
		{
			"RHS_HP_UB16_BD3_UMK2A"
		};
	};
	class rhs_mag_ub16_bd3_umk2a_s5m1: rhs_mag_ub16_bd3_umk2a_s5
	{
		displayName="$STR_RHS_MAG_s5m1";
		displayNameShort="$STR_RHS_MAG_SH_s5m1";
		ammo="rhs_ammo_s5m1";
		mass=115.76;
		weight=115.76;
		pylonWeapon="rhs_weap_s5m1";
	};
	class rhs_mag_ub16_bd3_umk2a_s5k1: rhs_mag_ub16_bd3_umk2a_s5
	{
		displayName="$STR_RHS_MAG_s5k1";
		displayNameShort="$STR_RHS_MAG_SH_s5k1";
		ammo="rhs_ammo_s5k1";
		mass=112.24;
		weight=112.24;
		pylonWeapon="rhs_weap_s5k1";
	};
	class rhs_mag_ub16_bd3_umk2a_s5ko: rhs_mag_ub16_bd3_umk2a_s5
	{
		displayName="$STR_RHS_MAG_s5ko";
		displayNameShort="$STR_RHS_MAG_SH_s5ko";
		ammo="rhs_ammo_s5ko";
		mass=124.88;
		weight=124.88;
		pylonWeapon="rhs_weap_s5ko";
	};
	class rhs_mag_ub32_s5: rhs_mag_s5_32
	{
		ammo="rhs_ammo_s5";
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_r_ub32.p3d";
		count=32;
		mass=237;
		weight=237;
		pylonWeapon="rhs_weap_s5";
		hardpoints[]=
		{
			"RHS_HP_UB32"
		};
	};
	class rhs_mag_ub32_s5m1: rhs_mag_ub32_s5
	{
		displayName="$STR_RHS_MAG_s5m1";
		displayNameShort="$STR_RHS_MAG_SH_s5m1";
		ammo="rhs_ammo_s5m1";
		mass=232.52;
		weight=232.52;
		pylonWeapon="rhs_weap_s5m1";
	};
	class rhs_mag_ub32_s5k1: rhs_mag_ub32_s5
	{
		displayName="$STR_RHS_MAG_s5k1";
		displayNameShort="$STR_RHS_MAG_SH_s5k1";
		ammo="rhs_ammo_s5k1";
		mass=225.48;
		weight=225.48;
		pylonWeapon="rhs_weap_s5k1";
	};
	class rhs_mag_ub32_s5ko: rhs_mag_ub32_s5
	{
		displayName="$STR_RHS_MAG_s5ko";
		displayNameShort="$STR_RHS_MAG_SH_s5ko";
		ammo="rhs_ammo_s5ko";
		mass=250.75999;
		weight=250.75999;
		pylonWeapon="rhs_weap_s5ko";
	};
	class rhs_mag_ub32_ka52_s5: rhs_mag_ub32_s5
	{
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_r_ub32_ka52.p3d";
		hardpoints[]=
		{
			"RHS_HP_UB32_KA52"
		};
	};
	class rhs_mag_ub32_ka52_s5m1: rhs_mag_ub32_ka52_s5
	{
		displayName="$STR_RHS_MAG_s5m1";
		displayNameShort="$STR_RHS_MAG_SH_s5m1";
		ammo="rhs_ammo_s5m1";
		mass=232.52;
		weight=232.52;
		pylonWeapon="rhs_weap_s5m1";
	};
	class rhs_mag_ub32_ka52_s5k1: rhs_mag_ub32_ka52_s5
	{
		displayName="$STR_RHS_MAG_s5k1";
		displayNameShort="$STR_RHS_MAG_SH_s5k1";
		ammo="rhs_ammo_s5k1";
		mass=225.48;
		weight=225.48;
		pylonWeapon="rhs_weap_s5k1";
	};
	class rhs_mag_ub32_ka52_s5ko: rhs_mag_ub32_ka52_s5
	{
		displayName="$STR_RHS_MAG_s5ko";
		displayNameShort="$STR_RHS_MAG_SH_s5ko";
		ammo="rhs_ammo_s5ko";
		mass=250.75999;
		weight=250.75999;
		pylonWeapon="rhs_weap_s5ko";
	};
	class rhs_mag_ub32_bd3_umk2a_s5: rhs_mag_ub32_s5
	{
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_ub32.p3d";
		hardpoints[]=
		{
			"RHS_HP_UB32_BD3_UMK2A"
		};
	};
	class rhs_mag_ub32_bd3_umk2a_s5m1: rhs_mag_ub32_bd3_umk2a_s5
	{
		displayName="$STR_RHS_MAG_s5m1";
		displayNameShort="$STR_RHS_MAG_SH_s5m1";
		ammo="rhs_ammo_s5m1";
		mass=115.76;
		weight=115.76;
		pylonWeapon="rhs_weap_s5m1";
	};
	class rhs_mag_ub32_bd3_umk2a_s5k1: rhs_mag_ub32_bd3_umk2a_s5
	{
		displayName="$STR_RHS_MAG_s5k1";
		displayNameShort="$STR_RHS_MAG_SH_s5k1";
		ammo="rhs_ammo_s5k1";
		mass=112.24;
		weight=112.24;
		pylonWeapon="rhs_weap_s5k1";
	};
	class rhs_mag_ub32_bd3_umk2a_s5ko: rhs_mag_ub32_bd3_umk2a_s5
	{
		displayName="$STR_RHS_MAG_s5ko";
		displayNameShort="$STR_RHS_MAG_SH_s5ko";
		ammo="rhs_ammo_s5ko";
		mass=124.88;
		weight=124.88;
		pylonWeapon="rhs_weap_s5ko";
	};
	class rhs_mag_b8m1_s8kom: rhs_mag_s8_12
	{
		ammo="rhs_ammo_s8";
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_r_b8m1.p3d";
		count=20;
		mass=376;
		weight=376;
		pylonWeapon="rhs_weap_s8";
		hardpoints[]=
		{
			"RHS_HP_B8M1"
		};
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С8КОМ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С8КОМ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							type="text";
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="С8КОМ";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								
								{
									"Center",
									{0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.029999999,0},
									1
								},
								
								{
									"Center",
									{0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{0,0.0339416},
									1
								},
								
								{
									"Center",
									{-0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{-0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.029999999,0},
									1
								},
								
								{
									"Center",
									{-0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{-0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{0.0195,9.6436303e-010},
									1
								},
								
								{
									"Center",
									{0.0165,8.1599899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-1.70474e-009,0.022062},
									1
								},
								
								{
									"Center",
									{-1.44248e-009,0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-0.0195,-2.63087e-010},
									1
								},
								
								{
									"Center",
									{-0.0165,-2.22612e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{3.40949e-009,-0.022062},
									1
								},
								
								{
									"Center",
									{2.8849501e-009,-0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,-0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,0.0060000899},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,-0.0060000801},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_b8m1_s8df: rhs_mag_b8m1_s8kom
	{
		displayName="$STR_RHS_MAG_s8df";
		displayNameShort="$STR_RHS_MAG_SH_s8df";
		ammo="rhs_ammo_s8df";
		mass=418;
		weight=418;
		pylonWeapon="rhs_weap_s8df";
	};
	class rhs_mag_b8m1_s8t: rhs_mag_b8m1_s8kom
	{
		displayName="$STR_RHS_MAG_s8t";
		displayNameShort="$STR_RHS_MAG_SH_s8t";
		ammo="rhs_ammo_s8t";
		mass=450;
		weight=450;
		pylonWeapon="rhs_weap_s8t";
	};
	class rhs_mag_b8m1_bd3_umk2a_s8kom: rhs_mag_b8m1_s8kom
	{
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_b8m1.p3d";
		hardpoints[]=
		{
			"RHS_HP_B8M1_BD3_UMK2A"
		};
	};
	class rhs_mag_b8m1_bd3_umk2a_s8df: rhs_mag_b8m1_bd3_umk2a_s8kom
	{
		displayName="$STR_RHS_MAG_s8df";
		displayNameShort="$STR_RHS_MAG_SH_s8df";
		ammo="rhs_ammo_s8df";
		mass=391;
		weight=391;
		pylonWeapon="rhs_weap_s8df";
	};
	class rhs_mag_b8m1_bd3_umk2a_s8t: rhs_mag_b8m1_bd3_umk2a_s8kom
	{
		displayName="$STR_RHS_MAG_s8t";
		displayNameShort="$STR_RHS_MAG_SH_s8t";
		ammo="rhs_ammo_s8t";
		mass=423;
		weight=423;
		pylonWeapon="rhs_weap_s8t";
	};
	class rhs_mag_b8v20a_s8kom: rhs_mag_b8m1_s8kom
	{
		ammo="rhs_ammo_s8";
		model="rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_b8v20a.p3d";
		count=20;
		mass=349;
		weight=349;
		pylonWeapon="rhs_weap_s8";
		hardpoints[]=
		{
			"RHS_HP_B8V20"
		};
	};
	class rhs_mag_b8v20a_s8df: rhs_mag_b8v20a_s8kom
	{
		displayName="$STR_RHS_MAG_s8df";
		displayNameShort="$STR_RHS_MAG_SH_s8df";
		ammo="rhs_ammo_s8df";
		mass=391;
		weight=391;
		pylonWeapon="rhs_weap_s8df";
	};
	class rhs_mag_b8v20a_s8t: rhs_mag_b8v20a_s8kom
	{
		displayName="$STR_RHS_MAG_s8t";
		displayNameShort="$STR_RHS_MAG_SH_s8t";
		ammo="rhs_ammo_s8t";
		mass=423;
		weight=423;
		pylonWeapon="rhs_weap_s8t";
	};
	class rhs_mag_b8v20a_ka52_s8kom: rhs_mag_b8v20a_s8kom
	{
		model="rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_r_b8v20a_ka52.p3d";
		hardpoints[]=
		{
			"RHS_HP_B8V20_KA52"
		};
	};
	class rhs_mag_b8v20a_ka52_s8df: rhs_mag_b8v20a_ka52_s8kom
	{
		displayName="$STR_RHS_MAG_s8df";
		displayNameShort="$STR_RHS_MAG_SH_s8df";
		ammo="rhs_ammo_s8df";
		mass=391;
		weight=391;
		pylonWeapon="rhs_weap_s8df";
	};
	class rhs_mag_b8v20a_ka52_s8t: rhs_mag_b8v20a_ka52_s8kom
	{
		displayName="$STR_RHS_MAG_s8t";
		displayNameShort="$STR_RHS_MAG_SH_s8t";
		ammo="rhs_ammo_s8t";
		mass=423;
		weight=423;
		pylonWeapon="rhs_weap_s8t";
	};
	class rhs_mag_b13l_s13b: rhs_mag_s13b_10
	{
		ammo="rhs_ammo_s13b";
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_r_b13l.p3d";
		count=5;
		mass=501.5;
		weight=501.5;
		pylonWeapon="rhs_weap_s13";
		hardpoints[]=
		{
			"RHS_HP_B13L"
		};
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С13";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С13";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonValue1
						{
							type="text";
							source="pylonAmmo";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class PylonText1
						{
							type="text";
							source="static";
							text="С13";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.12},
								1
							};
							right[]=
							{
								{0.035,0.12},
								1
							};
							down[]=
							{
								{-0.0049999999,0.16},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								
								{
									"Center",
									{0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.029999999,0},
									1
								},
								
								{
									"Center",
									{0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{0,0.0339416},
									1
								},
								
								{
									"Center",
									{-0.015,0.029393399},
									1
								},
								
								{
									"Center",
									{-0.025979999,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.029999999,0},
									1
								},
								
								{
									"Center",
									{-0.025979999,-0.0169708},
									1
								},
								
								{
									"Center",
									{-0.015,-0.029393399},
									1
								},
								
								{
									"Center",
									{0,-0.0339416},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{0.0195,9.6436303e-010},
									1
								},
								
								{
									"Center",
									{0.0165,8.1599899e-010},
									1
								},
								{},
								
								{
									"Center",
									{0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-1.70474e-009,0.022062},
									1
								},
								
								{
									"Center",
									{-1.44248e-009,0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{-0.0195,-2.63087e-010},
									1
								},
								
								{
									"Center",
									{-0.0165,-2.22612e-010},
									1
								},
								{},
								
								{
									"Center",
									{-0.0137886,-0.0156002},
									1
								},
								
								{
									"Center",
									{-0.0116673,-0.0132002},
									1
								},
								{},
								
								{
									"Center",
									{3.40949e-009,-0.022062},
									1
								},
								
								{
									"Center",
									{2.8849501e-009,-0.018667899},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,-0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{0.0053033,0.0060000801},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,0.0060000899},
									1
								},
								{},
								
								{
									"Center",
									{-0.00742462,-0.0084001198},
									1
								},
								
								{
									"Center",
									{-0.0053033,-0.0060000801},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class PylonValue1: PylonValue1
						{
						};
						class Shape: Shape
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_b13l_s13d: rhs_mag_b13l_s13b
	{
		displayName="$STR_RHS_MAG_s13d";
		displayNameShort="$STR_RHS_MAG_SH_s13d";
		ammo="rhs_ammo_s13d";
		mass=500;
		weight=500;
		pylonWeapon="rhs_weap_s13d";
	};
	class rhs_mag_b13l_s13df: rhs_mag_b13l_s13b
	{
		displayName="$STR_RHS_MAG_s13df";
		displayNameShort="$STR_RHS_MAG_SH_s13df";
		ammo="rhs_ammo_s13df";
		mass=500;
		weight=500;
		pylonWeapon="rhs_weap_s13df";
	};
	class rhs_mag_b13l_s13t: rhs_mag_b13l_s13b
	{
		displayName="$STR_RHS_MAG_s13t";
		displayNameShort="$STR_RHS_MAG_SH_s13t";
		ammo="rhs_ammo_s13t";
		mass=535;
		weight=535;
		pylonWeapon="rhs_weap_s13t";
	};
	class rhs_mag_b13l_s13of: rhs_mag_b13l_s13b
	{
		displayName="$STR_RHS_MAG_s13of";
		displayNameShort="$STR_RHS_MAG_SH_s13of";
		ammo="rhs_ammo_s13of";
		mass=505;
		weight=505;
		pylonWeapon="rhs_weap_s13of";
	};
	class rhs_mag_b13l_bd3_umk2a_s13b: rhs_mag_b13l_s13b
	{
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_b13l.p3d";
		hardpoints[]=
		{
			"RHS_HP_B13L_BD3_UMK2A"
		};
	};
	class rhs_mag_b13l_bd3_umk2a_s13d: rhs_mag_b13l_bd3_umk2a_s13b
	{
		displayName="$STR_RHS_MAG_s13d";
		displayNameShort="$STR_RHS_MAG_SH_s13d";
		ammo="rhs_ammo_s13d";
		mass=480;
		weight=480;
		pylonWeapon="rhs_weap_s13d";
	};
	class rhs_mag_b13l_bd3_umk2a_s13df: rhs_mag_b13l_bd3_umk2a_s13b
	{
		displayName="$STR_RHS_MAG_s13df";
		displayNameShort="$STR_RHS_MAG_SH_s13df";
		ammo="rhs_ammo_s13df";
		mass=480;
		weight=480;
		pylonWeapon="rhs_weap_s13df";
	};
	class rhs_mag_b13l_bd3_umk2a_s13t: rhs_mag_b13l_bd3_umk2a_s13b
	{
		displayName="$STR_RHS_MAG_s13t";
		displayNameShort="$STR_RHS_MAG_SH_s13t";
		ammo="rhs_ammo_s13t";
		mass=515;
		weight=515;
		pylonWeapon="rhs_weap_s13t";
	};
	class rhs_mag_b13l_bd3_umk2a_s13of: rhs_mag_b13l_bd3_umk2a_s13b
	{
		displayName="$STR_RHS_MAG_s13of";
		displayNameShort="$STR_RHS_MAG_SH_s13of";
		ammo="rhs_ammo_s13of";
		mass=485;
		weight=485;
		pylonWeapon="rhs_weap_s13of";
	};
	class rhs_mag_b13l1_s13b: rhs_mag_b13l_s13b
	{
		ammo="rhs_ammo_s13b";
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_r_b13l1.p3d";
		count=5;
		mass=481.5;
		weight=481.5;
		pylonWeapon="rhs_weap_s13";
		hardpoints[]=
		{
			"RHS_HP_B13L1"
		};
	};
	class rhs_mag_b13l1_s13d: rhs_mag_b13l1_s13b
	{
		displayName="$STR_RHS_MAG_s13d";
		displayNameShort="$STR_RHS_MAG_SH_s13d";
		ammo="rhs_ammo_s13d";
		mass=480;
		weight=480;
		pylonWeapon="rhs_weap_s13d";
	};
	class rhs_mag_b13l1_s13df: rhs_mag_b13l1_s13b
	{
		displayName="$STR_RHS_MAG_s13df";
		displayNameShort="$STR_RHS_MAG_SH_s13df";
		ammo="rhs_ammo_s13df";
		mass=480;
		weight=480;
		pylonWeapon="rhs_weap_s13df";
	};
	class rhs_mag_b13l1_s13t: rhs_mag_b13l1_s13b
	{
		displayName="$STR_RHS_MAG_s13t";
		displayNameShort="$STR_RHS_MAG_SH_s13t";
		ammo="rhs_ammo_s13t";
		mass=515;
		weight=515;
		pylonWeapon="rhs_weap_s13t";
	};
	class rhs_mag_b13l1_s13of: rhs_mag_b13l1_s13b
	{
		displayName="$STR_RHS_MAG_s13of";
		displayNameShort="$STR_RHS_MAG_SH_s13of";
		ammo="rhs_ammo_s13of";
		mass=485;
		weight=485;
		pylonWeapon="rhs_weap_s13of";
	};
	class rhs_mag_b13l1_ka52_s13b: rhs_mag_b13l1_s13b
	{
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_r_b13l1_ka52.p3d";
		hardpoints[]=
		{
			"RHS_HP_B13L1_KA52"
		};
	};
	class rhs_mag_b13l1_ka52_s13d: rhs_mag_b13l1_ka52_s13b
	{
		displayName="$STR_RHS_MAG_s13d";
		displayNameShort="$STR_RHS_MAG_SH_s13d";
		ammo="rhs_ammo_s13d";
		mass=480;
		weight=480;
		pylonWeapon="rhs_weap_s13d";
	};
	class rhs_mag_b13l1_ka52_s13df: rhs_mag_b13l1_ka52_s13b
	{
		displayName="$STR_RHS_MAG_s13df";
		displayNameShort="$STR_RHS_MAG_SH_s13df";
		ammo="rhs_ammo_s13df";
		mass=480;
		weight=480;
		pylonWeapon="rhs_weap_s13df";
	};
	class rhs_mag_b13l1_ka52_s13t: rhs_mag_b13l1_ka52_s13b
	{
		displayName="$STR_RHS_MAG_s13t";
		displayNameShort="$STR_RHS_MAG_SH_s13t";
		ammo="rhs_ammo_s13t";
		mass=515;
		weight=515;
		pylonWeapon="rhs_weap_s13t";
	};
	class rhs_mag_b13l1_ka52_s13of: rhs_mag_b13l1_ka52_s13b
	{
		displayName="$STR_RHS_MAG_s13of";
		displayNameShort="$STR_RHS_MAG_SH_s13of";
		ammo="rhs_ammo_s13of";
		mass=485;
		weight=485;
		pylonWeapon="rhs_weap_s13of";
	};
	class rhs_mag_apu68m3_s24: rhs_mag_s13b_10
	{
		displayName="$STR_RHS_MAG_S24";
		displayNameShort="$STR_RHS_MAG_SH_S24";
		ammo="rhs_ammo_s24";
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_apu68m3_s24.p3d";
		count=1;
		mass=280;
		weight=280;
		pylonWeapon="rhs_weap_s24";
		hardpoints[]=
		{
			"RHS_HP_APU68M3_S24"
		};
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С24";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С24";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							type="text";
							source="static";
							text="С24";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_apu68m3_s24b: rhs_mag_apu68m3_s24
	{
		displayName="$STR_RHS_MAG_s24b";
		displayNameShort="$STR_RHS_MAG_SH_s24b";
		ammo="rhs_ammo_s24b";
		mass=280;
		weight=280;
		pylonWeapon="rhs_weap_s24b";
	};
	class rhs_mag_apu68_bd3_umk2a_s24: rhs_mag_apu68m3_s24
	{
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_s24.p3d";
		hardpoints[]=
		{
			"RHS_HP_APU68_BD3_UMK2A"
		};
	};
	class rhs_mag_apu68_bd3_umk2a_s24b: rhs_mag_apu68_bd3_umk2a_s24
	{
		displayName="$STR_RHS_MAG_s24b";
		displayNameShort="$STR_RHS_MAG_SH_s24b";
		ammo="rhs_ammo_s24b";
		mass=280;
		weight=280;
		pylonWeapon="rhs_weap_s24b";
	};
	class rhs_mag_o25l_s25o: rhs_mag_apu68m3_s24
	{
		displayName="$STR_RHS_MAG_S25O";
		displayNameShort="$STR_RHS_MAG_SH_S25O";
		ammo="rhs_ammo_s25o";
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_o25l.p3d";
		count=1;
		mass=290;
		weight=290;
		pylonWeapon="rhs_weap_s25";
		hardpoints[]=
		{
			"RHS_HP_O25L"
		};
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С25";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="С25";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							type="text";
							source="static";
							text="С25";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_o25l_s25of: rhs_mag_o25l_s25o
	{
		displayName="$STR_RHS_MAG_s25of";
		displayNameShort="$STR_RHS_MAG_SH_s25of";
		ammo="rhs_ammo_s25of";
		mass=290;
		weight=290;
		pylonWeapon="rhs_weap_s25of";
	};
	class rhs_mag_o25l_s25l: rhs_mag_o25l_s25o
	{
		displayName="$STR_RHS_MAG_s25l";
		displayNameShort="$STR_RHS_MAG_SH_s25l";
		ammo="rhs_ammo_s25l";
		mass=290;
		weight=290;
		pylonWeapon="rhs_weap_s25l";
	};
	class rhs_mag_o25l_s25ld: rhs_mag_o25l_s25o
	{
		displayName="$STR_RHS_MAG_s25ld";
		displayNameShort="$STR_RHS_MAG_SH_s25ld";
		ammo="rhs_ammo_s25ld";
		mass=290;
		weight=290;
		pylonWeapon="rhs_weap_s25ld";
	};
	class rhs_mag_bd3_usk_a_o25l_s25o: rhs_mag_o25l_s25o
	{
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_usk_a_o25l.p3d";
		mass=310;
		weight=310;
		hardpoints[]=
		{
			"RHS_HP_BD3_USK_A_O25L"
		};
	};
	class rhs_mag_bd3_usk_a_o25l_s25of: rhs_mag_bd3_usk_a_o25l_s25o
	{
		displayName="$STR_RHS_MAG_s25of";
		displayNameShort="$STR_RHS_MAG_SH_s25of";
		ammo="rhs_ammo_s25of";
		mass=310;
		weight=310;
		pylonWeapon="rhs_weap_s25of";
	};
	class rhs_mag_bd3_usk_a_o25l_s25l: rhs_mag_bd3_usk_a_o25l_s25o
	{
		displayName="$STR_RHS_MAG_s25l";
		displayNameShort="$STR_RHS_MAG_SH_s25l";
		ammo="rhs_ammo_s25l";
		mass=310;
		weight=310;
		pylonWeapon="rhs_weap_s25l";
	};
	class rhs_mag_bd3_usk_a_o25l_s25ld: rhs_mag_bd3_usk_a_o25l_s25o
	{
		displayName="$STR_RHS_MAG_s25ld";
		displayNameShort="$STR_RHS_MAG_SH_s25ld";
		ammo="rhs_ammo_s25ld";
		mass=310;
		weight=310;
		pylonWeapon="rhs_weap_s25ld";
	};
	class rhs_mag_bd3_umk2a_o25l_s25o: rhs_mag_o25l_s25o
	{
		model="rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_o25l.p3d";
		mass=310;
		weight=310;
		hardpoints[]=
		{
			"RHS_HP_BD3_UMK2A_O25L"
		};
	};
	class rhs_mag_bd3_umk2a_o25l_s25of: rhs_mag_bd3_umk2a_o25l_s25o
	{
		displayName="$STR_RHS_MAG_s25of";
		displayNameShort="$STR_RHS_MAG_SH_s25of";
		ammo="rhs_ammo_s25of";
		mass=310;
		weight=310;
		pylonWeapon="rhs_weap_s25of";
	};
	class rhs_mag_bd3_umk2a_o25l_s25l: rhs_mag_bd3_umk2a_o25l_s25o
	{
		displayName="$STR_RHS_MAG_s25l";
		displayNameShort="$STR_RHS_MAG_SH_s25l";
		ammo="rhs_ammo_s25l";
		mass=310;
		weight=310;
		pylonWeapon="rhs_weap_s25l";
	};
	class rhs_mag_bd3_umk2a_o25l_s25ld: rhs_mag_bd3_umk2a_o25l_s25o
	{
		displayName="$STR_RHS_MAG_s25ld";
		displayNameShort="$STR_RHS_MAG_SH_s25ld";
		ammo="rhs_ammo_s25ld";
		mass=310;
		weight=310;
		pylonWeapon="rhs_weap_s25ld";
	};
	class rhs_mag_R27R: VehicleMagazine
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r27";
		count=1;
		initspeed=100;
		maxleadspeed=900;
		namesound="missiles";
		ammo="rhs_ammo_r27r";
		displayname="$STR_RHS_R27R_NAME";
		descriptionShort="Active radar homing. Range: 2km-16km";
		displaynameshort="ARH";
		mass=44;
		hardpoints[]=
		{
			"RHS_HP_R27"
		};
		pylonWeapon="rhs_weap_r27r_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="27Р";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="27Р";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							type="text";
							source="static";
							text="27Р";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R27R_APU470: rhs_mag_R27R
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu470_r27";
		hardpoints[]=
		{
			"RHS_HP_R27_APU470"
		};
	};
	class rhs_mag_R27ER: rhs_mag_R27R
	{
		displayname="$STR_RHS_R27ER_NAME";
		descriptionShort="Active radar homing. Range: 2km-20km";
		ammo="rhs_ammo_r27er";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="27ЭР";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="27ЭР";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							type="text";
							source="static";
							text="27ЭР";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R27ER_APU470: rhs_mag_R27ER
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu470_r27";
		hardpoints[]=
		{
			"RHS_HP_R27_APU470"
		};
	};
	class rhs_mag_R27T: rhs_mag_R27ER
	{
		displayname="$STR_RHS_R27T_NAME";
		displaynameshort="IR";
		descriptionShort="Infrared homing. Locking radius: ±7.5° off-boresight. Range: 1.7km-22km";
		ammo="rhs_ammo_r27t";
		pylonWeapon="rhs_weap_r27t_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="27Т";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="27Т";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							type="text";
							source="static";
							text="27Т";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R27T_APU470: rhs_mag_R27T
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu470_r27";
		hardpoints[]=
		{
			"RHS_HP_R27_APU470"
		};
	};
	class rhs_mag_R27ET: rhs_mag_R27T
	{
		displayname="$STR_RHS_R27ET_NAME";
		descriptionShort="Infrared homing. Locking radius: ±7.5° off-boresight. Range: 1.7km-26km";
		ammo="rhs_ammo_r27et";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="27ЭТ";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="27ЭТ";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							type="text";
							source="static";
							text="27ЭТ";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								
								{
									"Center",
									{0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.02,0},
									1
								},
								
								{
									"Center",
									{0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{0,0.0226277},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0.019595601},
									1
								},
								
								{
									"Center",
									{-0.01732,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.02,0},
									1
								},
								
								{
									"Center",
									{-0.01732,-0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0099999998,-0.019595601},
									1
								},
								
								{
									"Center",
									{0,-0.0226277},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,-0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,0.032000501},
									1
								},
								{},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								
								{
									"Center",
									{-0.0282843,-0.0320004},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{0.02,9.8909003e-010},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-1.74846e-009,0.0226277},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,0.0160002},
										1
									},
									
									{
										"Center",
										{-0.02,-2.6983299e-010},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0141421,-0.0160002},
										1
									},
									
									{
										"Center",
										{3.4969101e-009,-0.0226277},
										1
									},
									
									{
										"Center",
										{0.0141421,-0.0160002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R27ET_APU470: rhs_mag_R27ET
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu470_r27";
		hardpoints[]=
		{
			"RHS_HP_R27_APU470"
		};
	};
	class rhs_mag_R60: VehicleMagazine
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r60";
		count=1;
		initspeed=100;
		maxleadspeed=900;
		namesound="missiles";
		ammo="rhs_ammo_r60";
		displayname="$STR_RHS_R60_NAME";
		displaynameshort="IR";
		descriptionShort="Infrared homing. Locking radius: ±12° off-boresight. Range: 0.3km-5km";
		mass=44;
		hardpoints[]=
		{
			"RHS_HP_R60"
		};
		pylonWeapon="rhs_weap_r60_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="60";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="60";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							type="text";
							source="static";
							text="60";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0135766},
									1
								},
								
								{
									"Center",
									{0.0060000001,-0.0117574},
									1
								},
								
								{
									"Center",
									{0.010392,-0.0067883199},
									1
								},
								
								{
									"Center",
									{0.012,0},
									1
								},
								
								{
									"Center",
									{0.010392,0.0067883199},
									1
								},
								
								{
									"Center",
									{0.0060000001,0.0117574},
									1
								},
								
								{
									"Center",
									{0,0.0135766},
									1
								},
								
								{
									"Center",
									{-0.0060000001,0.0117574},
									1
								},
								
								{
									"Center",
									{-0.010392,0.0067883199},
									1
								},
								
								{
									"Center",
									{-0.012,0},
									1
								},
								
								{
									"Center",
									{-0.010392,-0.0067883199},
									1
								},
								
								{
									"Center",
									{-0.0060000001,-0.0117574},
									1
								},
								
								{
									"Center",
									{0,-0.0135766},
									1
								},
								{},
								
								{
									"Center",
									{0.00848528,-0.0096001402},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{0.00848528,0.0096001402},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{-0.00848528,0.0096001402},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{-0.00848528,-0.0096001299},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.00848528,-0.0096001402},
										1
									},
									
									{
										"Center",
										{0.012,5.9345401e-010},
										1
									},
									
									{
										"Center",
										{0.00848528,0.0096001402},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.00848528,0.0096001402},
										1
									},
									
									{
										"Center",
										{-1.0490701e-009,0.0135766},
										1
									},
									
									{
										"Center",
										{-0.00848528,0.0096001402},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.00848528,0.0096001402},
										1
									},
									
									{
										"Center",
										{-0.012,-1.6189999e-010},
										1
									},
									
									{
										"Center",
										{-0.00848528,-0.0096001299},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.00848528,-0.0096001299},
										1
									},
									
									{
										"Center",
										{2.0981501e-009,-0.0135766},
										1
									},
									
									{
										"Center",
										{0.0084852902,-0.0096001299},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R60_APU60: rhs_mag_R60
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu60_r60";
		hardpoints[]=
		{
			"RHS_HP_R60_APU60"
		};
	};
	class rhs_mag_R60M: rhs_mag_R60
	{
		ammo="rhs_ammo_r60m";
		displayname="$STR_RHS_R60M_NAME";
		descriptionShort="Infrared homing. Locking radius: ±17° off-boresight. Range: 0.3km-8km";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="60М";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="60М";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							type="text";
							source="static";
							text="60М";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0135766},
									1
								},
								
								{
									"Center",
									{0.0060000001,-0.0117574},
									1
								},
								
								{
									"Center",
									{0.010392,-0.0067883199},
									1
								},
								
								{
									"Center",
									{0.012,0},
									1
								},
								
								{
									"Center",
									{0.010392,0.0067883199},
									1
								},
								
								{
									"Center",
									{0.0060000001,0.0117574},
									1
								},
								
								{
									"Center",
									{0,0.0135766},
									1
								},
								
								{
									"Center",
									{-0.0060000001,0.0117574},
									1
								},
								
								{
									"Center",
									{-0.010392,0.0067883199},
									1
								},
								
								{
									"Center",
									{-0.012,0},
									1
								},
								
								{
									"Center",
									{-0.010392,-0.0067883199},
									1
								},
								
								{
									"Center",
									{-0.0060000001,-0.0117574},
									1
								},
								
								{
									"Center",
									{0,-0.0135766},
									1
								},
								{},
								
								{
									"Center",
									{0.00848528,-0.0096001402},
									1
								},
								
								{
									"Center",
									{0.0141421,-0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{0.00848528,0.0096001402},
									1
								},
								
								{
									"Center",
									{0.0141421,0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{-0.00848528,0.0096001402},
									1
								},
								
								{
									"Center",
									{-0.0141421,0.0160002},
									1
								},
								{},
								
								{
									"Center",
									{-0.00848528,-0.0096001299},
									1
								},
								
								{
									"Center",
									{-0.0141421,-0.0160002},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.00848528,-0.0096001402},
										1
									},
									
									{
										"Center",
										{0.012,5.9345401e-010},
										1
									},
									
									{
										"Center",
										{0.00848528,0.0096001402},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.00848528,0.0096001402},
										1
									},
									
									{
										"Center",
										{-1.0490701e-009,0.0135766},
										1
									},
									
									{
										"Center",
										{-0.00848528,0.0096001402},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.00848528,0.0096001402},
										1
									},
									
									{
										"Center",
										{-0.012,-1.6189999e-010},
										1
									},
									
									{
										"Center",
										{-0.00848528,-0.0096001299},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.00848528,-0.0096001299},
										1
									},
									
									{
										"Center",
										{2.0981501e-009,-0.0135766},
										1
									},
									
									{
										"Center",
										{0.0084852902,-0.0096001299},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R60M_APU60: rhs_mag_R60M
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu60_r60";
		hardpoints[]=
		{
			"RHS_HP_R60_APU60"
		};
	};
	class rhs_mag_R73: VehicleMagazine
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r73_ext";
		count=1;
		initspeed=0;
		maxleadspeed=900;
		namesound="missiles";
		ammo="rhs_ammo_r73";
		displayname="$STR_RHS_R73_NAME";
		descriptionShort="Infrared homing. Locking radius: ±25° off-boresight. Range: 0.3km-8km";
		displaynameshort="IR";
		mass=105;
		hardpoints[]=
		{
			"RHS_HP_R73"
		};
		pylonWeapon="rhs_weap_r73_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="73";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="73";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							type="text";
							source="static";
							text="73";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0141423},
									1
								},
								
								{
									"Center",
									{0.0062500001,-0.0122473},
									1
								},
								
								{
									"Center",
									{0.010825,-0.00707117},
									1
								},
								
								{
									"Center",
									{0.0125,0},
									1
								},
								
								{
									"Center",
									{0.010825,0.00707117},
									1
								},
								
								{
									"Center",
									{0.0062500001,0.0122473},
									1
								},
								
								{
									"Center",
									{0,0.0141423},
									1
								},
								
								{
									"Center",
									{-0.0062500001,0.0122473},
									1
								},
								
								{
									"Center",
									{-0.010825,0.00707117},
									1
								},
								
								{
									"Center",
									{-0.0125,0},
									1
								},
								
								{
									"Center",
									{-0.010825,-0.00707117},
									1
								},
								
								{
									"Center",
									{-0.0062500001,-0.0122473},
									1
								},
								
								{
									"Center",
									{0,-0.0141423},
									1
								},
								{},
								
								{
									"Center",
									{0.0088388398,-0.0100001},
									1
								},
								
								{
									"Center",
									{0.0176777,-0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{0.0088388398,0.0100001},
									1
								},
								
								{
									"Center",
									{0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0088388296,0.0100001},
									1
								},
								
								{
									"Center",
									{-0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0088388398,-0.0100001},
									1
								},
								
								{
									"Center",
									{-0.0176777,-0.020000299},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0088388398,-0.0100001},
										1
									},
									
									{
										"Center",
										{0.0125,6.1818101e-010},
										1
									},
									
									{
										"Center",
										{0.0088388398,0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0088388398,0.0100001},
										1
									},
									
									{
										"Center",
										{-1.09278e-009,0.0141423},
										1
									},
									
									{
										"Center",
										{-0.0088388296,0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0088388296,0.0100001},
										1
									},
									
									{
										"Center",
										{-0.0125,-1.68646e-010},
										1
									},
									
									{
										"Center",
										{-0.0088388398,-0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0088388398,-0.0100001},
										1
									},
									
									{
										"Center",
										{2.1855699e-009,-0.0141423},
										1
									},
									
									{
										"Center",
										{0.0088388398,-0.0100001},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R73_APU73: rhs_mag_R73
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu73_r73";
		hardpoints[]=
		{
			"RHS_HP_R73_APU73"
		};
	};
	class rhs_mag_R73M: rhs_mag_R73
	{
		ammo="rhs_ammo_r73m";
		displayname="$STR_RHS_R73M_NAME";
		descriptionShort="Infrared homing. Locking radius: ±60° off-boresight. Range: 0.15km-8km";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="73М";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="73М";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							type="text";
							source="static";
							text="73М";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0141423},
									1
								},
								
								{
									"Center",
									{0.0062500001,-0.0122473},
									1
								},
								
								{
									"Center",
									{0.010825,-0.00707117},
									1
								},
								
								{
									"Center",
									{0.0125,0},
									1
								},
								
								{
									"Center",
									{0.010825,0.00707117},
									1
								},
								
								{
									"Center",
									{0.0062500001,0.0122473},
									1
								},
								
								{
									"Center",
									{0,0.0141423},
									1
								},
								
								{
									"Center",
									{-0.0062500001,0.0122473},
									1
								},
								
								{
									"Center",
									{-0.010825,0.00707117},
									1
								},
								
								{
									"Center",
									{-0.0125,0},
									1
								},
								
								{
									"Center",
									{-0.010825,-0.00707117},
									1
								},
								
								{
									"Center",
									{-0.0062500001,-0.0122473},
									1
								},
								
								{
									"Center",
									{0,-0.0141423},
									1
								},
								{},
								
								{
									"Center",
									{0.0088388398,-0.0100001},
									1
								},
								
								{
									"Center",
									{0.0176777,-0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{0.0088388398,0.0100001},
									1
								},
								
								{
									"Center",
									{0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0088388296,0.0100001},
									1
								},
								
								{
									"Center",
									{-0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0088388398,-0.0100001},
									1
								},
								
								{
									"Center",
									{-0.0176777,-0.020000299},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0088388398,-0.0100001},
										1
									},
									
									{
										"Center",
										{0.0125,6.1818101e-010},
										1
									},
									
									{
										"Center",
										{0.0088388398,0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0088388398,0.0100001},
										1
									},
									
									{
										"Center",
										{-1.09278e-009,0.0141423},
										1
									},
									
									{
										"Center",
										{-0.0088388296,0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0088388296,0.0100001},
										1
									},
									
									{
										"Center",
										{-0.0125,-1.68646e-010},
										1
									},
									
									{
										"Center",
										{-0.0088388398,-0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0088388398,-0.0100001},
										1
									},
									
									{
										"Center",
										{2.1855699e-009,-0.0141423},
										1
									},
									
									{
										"Center",
										{0.0088388398,-0.0100001},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
		pylonWeapon="rhs_weap_r73m_Launcher";
	};
	class rhs_mag_R73M_APU73: rhs_mag_R73M
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu73_r73";
		hardpoints[]=
		{
			"RHS_HP_R73_APU73"
		};
	};
	class rhs_mag_R74: rhs_mag_R73
	{
		ammo="rhs_ammo_r74";
		displayname="$STR_RHS_R74_NAME";
		descriptionShort="Infrared homing missile with improved CM resistance. Locking radius: ±60° off-boresight. Range: 0.15km-8km";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="74";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="74";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							type="text";
							source="static";
							text="74";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0141423},
									1
								},
								
								{
									"Center",
									{0.0062500001,-0.0122473},
									1
								},
								
								{
									"Center",
									{0.010825,-0.00707117},
									1
								},
								
								{
									"Center",
									{0.0125,0},
									1
								},
								
								{
									"Center",
									{0.010825,0.00707117},
									1
								},
								
								{
									"Center",
									{0.0062500001,0.0122473},
									1
								},
								
								{
									"Center",
									{0,0.0141423},
									1
								},
								
								{
									"Center",
									{-0.0062500001,0.0122473},
									1
								},
								
								{
									"Center",
									{-0.010825,0.00707117},
									1
								},
								
								{
									"Center",
									{-0.0125,0},
									1
								},
								
								{
									"Center",
									{-0.010825,-0.00707117},
									1
								},
								
								{
									"Center",
									{-0.0062500001,-0.0122473},
									1
								},
								
								{
									"Center",
									{0,-0.0141423},
									1
								},
								{},
								
								{
									"Center",
									{0.0088388398,-0.0100001},
									1
								},
								
								{
									"Center",
									{0.0176777,-0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{0.0088388398,0.0100001},
									1
								},
								
								{
									"Center",
									{0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0088388296,0.0100001},
									1
								},
								
								{
									"Center",
									{-0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0088388398,-0.0100001},
									1
								},
								
								{
									"Center",
									{-0.0176777,-0.020000299},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0088388398,-0.0100001},
										1
									},
									
									{
										"Center",
										{0.0125,6.1818101e-010},
										1
									},
									
									{
										"Center",
										{0.0088388398,0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0088388398,0.0100001},
										1
									},
									
									{
										"Center",
										{-1.09278e-009,0.0141423},
										1
									},
									
									{
										"Center",
										{-0.0088388296,0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0088388296,0.0100001},
										1
									},
									
									{
										"Center",
										{-0.0125,-1.68646e-010},
										1
									},
									
									{
										"Center",
										{-0.0088388398,-0.0100001},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0088388398,-0.0100001},
										1
									},
									
									{
										"Center",
										{2.1855699e-009,-0.0141423},
										1
									},
									
									{
										"Center",
										{0.0088388398,-0.0100001},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
		pylonWeapon="rhs_weap_r74_Launcher";
		hardpoints[]=
		{
			"RHS_HP_R74"
		};
	};
	class rhs_mag_R74_APU73: rhs_mag_R74
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu73_r73";
		hardpoints[]=
		{
			"RHS_HP_R74_APU73"
		};
	};
	class rhs_mag_R74M2: rhs_mag_R73
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r74m2";
		count=1;
		ammo="rhs_ammo_r74m2";
		displayname="$STR_RHS_R74M2_NAME";
		displaynameshort="IR";
		descriptionShort="Infrared homing. Locking radius: ±75° off-boresight. Range: 0.15km-8km";
		initspeed=0;
		hardpoints[]=
		{
			"RHS_HP_R74M2"
		};
		pylonWeapon="rhs_weap_r74m2_Launcher";
	};
	class rhs_mag_R74M2_int: rhs_mag_R74M2
	{
		hardpoints[]=
		{
			"RHS_HP_R74M2_INT"
		};
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
	};
	class rhs_mag_R77: rhs_mag_R73
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77";
		count=1;
		ammo="rhs_ammo_r77";
		displayname="$STR_RHS_R77_NAME";
		displaynameshort="ARH";
		descriptionShort="Active radar homing. Range: 2km-25km";
		hardpoints[]=
		{
			"RHS_HP_R77"
		};
		pylonWeapon="rhs_weap_r77_Launcher";
		mass=173;
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="77";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="77";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							type="text";
							source="static";
							text="77";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{0,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.0240003},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{0.0212132,0.0240003},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.0240003},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.0240003},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{0.015,7.41817e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0169708},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-0.015,-2.0237501e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0169708},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R77_AKU170: rhs_mag_R77
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77_ext";
		hardpoints[]=
		{
			"RHS_HP_R77_AKU170"
		};
	};
	class rhs_mag_R77_AKU170_MIG29: rhs_mag_R77
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77_MiG";
		hardpoints[]=
		{
			"RHS_HP_R77_AKU170_MIG29"
		};
	};
	class rhs_mag_R77M: rhs_mag_R77
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77m";
		count=1;
		ammo="rhs_ammo_r77m";
		displayname="$STR_RHS_R77M_NAME";
		displaynameshort="ARH";
		descriptionShort="Active radar homing missile with improved CM resistance. Range: 2km-25km";
		hardpoints[]=
		{
			"RHS_HP_R77M"
		};
		pylonWeapon="rhs_weap_r77m_Launcher";
		mass=190;
		ejectSpeed[]={1,0,0};
		initSpeed=0;
		initSpeedY=-25;
		initSpeedZ=0;
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="77М";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="77М";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							type="text";
							source="static";
							text="77М";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								
								{
									"Center",
									{0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{0.015,0},
									1
								},
								
								{
									"Center",
									{0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{0,0.0169708},
									1
								},
								
								{
									"Center",
									{-0.0074999998,0.0146967},
									1
								},
								
								{
									"Center",
									{-0.01299,0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.015,0},
									1
								},
								
								{
									"Center",
									{-0.01299,-0.0084854001},
									1
								},
								
								{
									"Center",
									{-0.0074999998,-0.0146967},
									1
								},
								
								{
									"Center",
									{0,-0.0169708},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{0.0212132,-0.0240003},
									1
								},
								{},
								
								{
									"Center",
									{0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{0.0212132,0.0240003},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0212132,0.0240003},
									1
								},
								{},
								
								{
									"Center",
									{-0.0106066,-0.0120002},
									1
								},
								
								{
									"Center",
									{-0.0212132,-0.0240003},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{0.015,7.41817e-010},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-1.31134e-009,0.0169708},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,0.0120002},
										1
									},
									
									{
										"Center",
										{-0.015,-2.0237501e-010},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0106066,-0.0120002},
										1
									},
									
									{
										"Center",
										{2.6226801e-009,-0.0169708},
										1
									},
									
									{
										"Center",
										{0.0106066,-0.0120002},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_R77M_AKU170: rhs_mag_R77M
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77_ext";
		hardpoints[]=
		{
			"RHS_HP_R77M_AKU170"
		};
	};
	class rhs_mag_R77M_AKU170_MIG29: rhs_mag_R77M
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_m_r77_MiG";
		hardpoints[]=
		{
			"RHS_HP_R77M_AKU170_MIG29"
		};
	};
	class rhs_mag_kh25: VehicleMagazine
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_apu68_kh25";
		ammo="rhs_ammo_kh25";
		displayname="$STR_RHS_KH25_NAME";
		descriptionShort="Semi-active laser seeker. Range: 2km-10km";
		displaynameshort="LG";
		namesound="missiles";
		count=1;
		initspeed=0;
		mass=320;
		hardpoints[]=
		{
			"RHS_HP_KH25"
		};
		pylonWeapon="rhs_weap_kh25_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="Х25";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="Х25";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};
				class Draw
				{
					condition="1-pylonMagazineEmpty";
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Shape
					{
						type="polygon";
						width=4;
						points[]=
						{
							
							{
								
								{
									{-0.022,-0.039999999},
									1
								},
								
								{
									{0.022,-0.039999999},
									1
								},
								
								{
									{0.022,0.039999999},
									1
								},
								
								{
									{-0.022,0.039999999},
									1
								}
							}
						};
					};
					class Selected
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.57999998,0.23,0};
						alpha=0.22;
						class Shape
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										{-0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.18000001},
										1
									},
									
									{
										{0.022,0.25999999},
										1
									},
									
									{
										{-0.022,0.25999999},
										1
									}
								}
							};
						};
					};
				};
			};
			class rhs_rus_circle
			{
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0,0};
					};
				};
				class Draw
				{
					color[]={0.15000001,1,0.15000001,1};
					alpha=0.22;
					class Default
					{
						condition="1-PylonSelected-pylonMagazineEmpty";
						color[]={1,1,1};
						class PylonText1
						{
							type="text";
							source="static";
							text="Х25";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{-0.0049999999,0.059999999},
								1
							};
							right[]=
							{
								{0.039999999,0.059999999},
								1
							};
							down[]=
							{
								{-0.0049999999,0.105},
								1
							};
						};
						class Shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Center",
									{0,-0.0113139},
									1
								},
								
								{
									"Center",
									{0.0049999999,-0.0097978096},
									1
								},
								
								{
									"Center",
									{0.0086599998,-0.0056569302},
									1
								},
								
								{
									"Center",
									{0.0099999998,0},
									1
								},
								
								{
									"Center",
									{0.0086599998,0.0056569302},
									1
								},
								
								{
									"Center",
									{0.0049999999,0.0097978096},
									1
								},
								
								{
									"Center",
									{0,0.0113139},
									1
								},
								
								{
									"Center",
									{-0.0049999999,0.0097978096},
									1
								},
								
								{
									"Center",
									{-0.0086599998,0.0056569302},
									1
								},
								
								{
									"Center",
									{-0.0099999998,0},
									1
								},
								
								{
									"Center",
									{-0.0086599998,-0.0056569302},
									1
								},
								
								{
									"Center",
									{-0.0049999999,-0.0097978096},
									1
								},
								
								{
									"Center",
									{0,-0.0113139},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,-0.0080001103},
									1
								},
								
								{
									"Center",
									{0.0176777,-0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{0.0070710699,0.0080001103},
									1
								},
								
								{
									"Center",
									{0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,0.0080001103},
									1
								},
								
								{
									"Center",
									{-0.0176777,0.020000299},
									1
								},
								{},
								
								{
									"Center",
									{-0.0070710699,-0.0080001103},
									1
								},
								
								{
									"Center",
									{-0.0176777,-0.020000299},
									1
								},
								{}
							};
						};
					};
					class Selected: Default
					{
						condition="PylonSelected*(PylonAmmoRelative>=0.001)";
						color[]={0.15000001,1,0.15000001,1};
						alpha=0.22;
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0080001103},
										1
									},
									
									{
										"Center",
										{0.0099999998,4.9454502e-010},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0080001103},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{0.0070710699,0.0080001103},
										1
									},
									
									{
										"Center",
										{-8.7422802e-010,0.0113139},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0080001103},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,0.0080001103},
										1
									},
									
									{
										"Center",
										{-0.0099999998,-1.3491699e-010},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0080001103},
										1
									}
								},
								
								{
									
									{
										"Center",
										1,
										{0,0},
										1
									},
									
									{
										"Center",
										{-0.0070710699,-0.0080001103},
										1
									},
									
									{
										"Center",
										{1.74846e-009,-0.0113139},
										1
									},
									
									{
										"Center",
										{0.0070710699,-0.0080001103},
										1
									}
								}
							};
						};
					};
					class Empty: Selected
					{
						condition="pylonMagazineEmpty";
						color[]={1,0,0,1};
						class PylonText1: PylonText1
						{
						};
						class Shape: Shape
						{
						};
						class Polygon: Polygon
						{
						};
					};
				};
			};
		};
	};
	class rhs_mag_kh25ML: rhs_mag_kh25
	{
		ammo="rhs_ammo_kh25ML";
		displayname="$STR_RHS_KH25ML_NAME";
		descriptionShort="Semi-active laser seeker. Range: 2km-10km";
		mass=308;
		pylonWeapon="rhs_weap_kh25ml_Launcher";
	};
	class rhs_mag_kh25MA: rhs_mag_kh25
	{
		ammo="rhs_ammo_kh25MA";
		displayname="$STR_RHS_KH25MA_NAME";
		displaynameshort="AGM";
		descriptionShort="Active radar homing. Requires radar. Range: 1.5km-10km";
		mass=308;
		pylonWeapon="rhs_weap_kh25ma_Launcher";
	};
	class rhs_mag_kh25MT: rhs_mag_kh25
	{
		ammo="rhs_ammo_kh25MT";
		displayname="$STR_RHS_KH25MT_NAME";
		displaynameshort="TV";
		descriptionShort="TV-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-8km";
		pylonWeapon="rhs_weap_kh25mt_Launcher";
	};
	class rhs_mag_kh25MTP: rhs_mag_kh25
	{
		ammo="rhs_ammo_kh25MTP";
		displayname="$STR_RHS_KH25MTP_NAME";
		displaynameshort="IR";
		descriptionShort="IR-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-9km";
		pylonWeapon="rhs_weap_kh25mtp_Launcher";
	};
	class rhs_mag_kh25MP: rhs_mag_kh25
	{
		ammo="rhs_ammo_kh25MP";
		displayname="$STR_RHS_KH25MP_NAME";
		displaynameshort="Anti-Radar";
		descriptionShort="Anti radiation missile. Range: 1.5km-10km";
		mass=323;
		pylonWeapon="rhs_weap_kh25mp_Launcher";
	};
	class rhs_mag_kh25_apu68_mig29: rhs_mag_kh25
	{
		model="\rhsafrf\addons\rhs_airweapons\rhs_pylon_bd3_umk2a_kh25";
		hardpoints[]=
		{
			"RHS_HP_KH25_APU68_MIG29"
		};
		pylonWeapon="rhs_weap_kh25_mig29_Launcher";
	};
	class rhs_mag_kh25ML_apu68_mig29: rhs_mag_kh25_apu68_mig29
	{
		ammo="rhs_ammo_kh25ML";
		displayname="$STR_RHS_KH25ML_NAME";
		mass=308;
		pylonWeapon="rhs_weap_kh25ml_mig29_Launcher";
	};
	class rhs_mag_kh25MT_apu68_mig29: rhs_mag_kh25_apu68_mig29
	{
		ammo="rhs_ammo_kh25MT";
		displayname="$STR_RHS_KH25MT_NAME";
		displaynameshort="TV";
		descriptionShort="TV-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-8km";
		pylonWeapon="rhs_weap_kh25mt_Launcher";
	};
	class rhs_mag_kh25MTP_apu68_mig29: rhs_mag_kh25_apu68_mig29
	{
		ammo="rhs_ammo_kh25MTP";
		displayname="$STR_RHS_KH25MTP_NAME";
		displaynameshort="IR";
		descriptionShort="IR-guided version which is fitted with automatic optical homing to a distinguishable object indicated by the pilot in the cockpit. Range: 1.5km-9km";
		pylonWeapon="rhs_weap_kh25mtp_Launcher";
	};
	class rhs_mag_kh25MP_apu68_mig29: rhs_mag_kh25_apu68_mig29
	{
		ammo="rhs_ammo_kh25MP";
		displayname="$STR_RHS_KH25MP_NAME";
		displaynameshort="Anti-Radar";
		descriptionShort="Anti radiation missile. Range: 1.5km-10km";
		mass=323;
		pylonWeapon="rhs_weap_kh25mp_Launcher";
	};
	class rhs_mag_kh29l: VehicleMagazine
	{
		model="\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_kh29_aku58";
		ammo="rhs_ammo_kh29l";
		displayname="$STR_RHS_KH29L_NAME";
		displaynameshort="LG";
		descriptionShort="Semi-active laser seeker. Range: 1.5km-10km";
		namesound="missiles";
		count=1;
		initspeed=0;
		mass=660;
		hardpoints[]=
		{
			"RHS_HP_KH29"
		};
		pylonWeapon="rhs_weap_kh29_Launcher";
		class mfdElements
		{
			class rhs_rus_ammoname
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="Х29";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_rus_ammoname_right
			{
				class Bones
				{
				};
				class Draw
				{
					condition="PylonSelected";
					color[]={0.15000001,1,0.15000001};
					alpha=1;
					class PylonText1
					{
						type="text";
						source="static";
						text="Х29";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{-0.0049999999,0.02},
							1
						};
						right[]=
						{
							{0.045000002,0.02},
							1
						};
						down[]=
						{
							{-0.0049999999,0.064999998},
							1
						};
					};
				};
			};
			class rhs_su25_box
			{
				class Bones
				{
				};