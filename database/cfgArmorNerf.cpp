class CfgWeapons
{
	access=1;
	class Default
	
	clas ItemCore;

	class InventoryItem_Base_F
	{
		type=0;
	};
	{
		type=801;
	};
	class VestItem: InventoryItem_Base_F
	{
		_generalMacro="VestItem";
		type=701;
		uniformType="Default";
				hitpointName="HitBody";
				armor=0;
				passThrough=1;
			};
		
		overlaySelectionsInfo[]=
		{
			"Ghillie_hide"
		};
		showHolsteredPistol=0;
	class BinocularItem: InventoryItem_Base_F
	{
		type=617;
	};
	class HMDItem: InventoryItem_Base_F
	{
		type=616;
	};
	class RadioItem: InventoryItem_Base_F
	{
		type=611;
	};
	class GoggleItem: InventoryItem_Base_F
	{
		type=603;
	};
	class ScubaItem: InventoryItem_Base_F
	{
		type=604;
	};
	class FirstAidKit: ItemCore
	{
		_generalMacro="FirstAidKit";
		descriptionShort="$STR_A3_cfgWeapons_FirstAidKit1";
		class ItemInfo: InventoryFirstAidKitItem_Base_F
		{
			mass=4;
		};
		type=0;
	};
	class Medikit: ItemCore
	{
		_generalMacro="Medikit";
		descriptionShort="$STR_A3_cfgWeapons_Medikit1";
		descriptionUse="$STR_A3_CfgWeapons_use_Medikit0";
		class ItemInfo: MedikitItem
		{
			mass=60;
		};
		type=0;
	};
	class ToolKit: ItemCore
	{
		_generalMacro="ToolKit";
		descriptionShort="$STR_A3_cfgWeapons_ToolKit1";
		class ItemInfo: ToolKitItem
		{
			mass=80;
		};
	};
	class launch_NLAW_F: Launcher_Base_F
	{
		_generalMacro="launch_NLAW_F";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Launchers\NLAW\Data\Anim\NLAW.rtm"
		};
		reloadAction="ReloadRPG";
		recoil="recoil_nlaw";
		maxZeroing=800;
		shotPos="muzzlePos2";
		shotEnd="muzzleEnd2";
		modes[]=
		{
			"Single",
			"Overfly"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw",
					1.9952624,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				soundSetShot[]=
				{
					"jsrs_nlaw_shot_soundset",
					"jsrs_warhead_reverb_soundset"
				};
			};
			recoil="recoil_single_nlaw";
			aiRateOfFire=7;
			aiRateOfFireDistance=500;
			minRange=25;
			minRangeProbab=0.80000001;
			midRange=50;
			midRangeProbab=0.80000001;
			maxRange=790;
			maxRangeProbab=0.80000001;
			ace_missileGuidance_attackProfile="ace_nlaw_directAttack";
		};
		class Overfly: Single
		{
			textureType="overfly";
			aiRateOfFire=7;
			aiRateOfFireDistance=500;
			minRange=50;
			minRangeProbab=0.69999999;
			midRange=100;
			midRangeProbab=0.94999999;
			maxRange=790;
			maxRangeProbab=0.94999999;
			ace_missileGuidance_attackProfile="ace_nlaw_overflyTopAttack";
		};
		class GunParticles
		{
			class effect1
			{
				positionName="muzzleEnd2";
				directionName="muzzlePos2";
				effectName="RocketBackEffectsNLAWNT";
			};
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Dry_NLAW",
			0.17782794,
			1,
			15
		};
		reloadMagazineSound[]=
		{
			"",
			1,
			1
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locking_NLAW",
			0.31622776,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locked_NLAW",
			0.31622776,
			2.5
		};
		changeFiremodeSound[]=
		{
			"A3\sounds_f\dummysound",
			0.56234133,
			1,
			20
		};
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		opticsZoomMin=0.0623;
		opticsZoomMax=0.0623;
		opticsZoomInit=0.0623;
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				opticsZoomMin=0.0623;
				opticsZoomMax=0.0623;
				opticsZoomInit=0.0623;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				distanceZoomMin=0;
				distanceZoomMax=0;
			};
		};
		cameraDir="look";
		value=20;
		weaponInfoType="RscOpticsRangeFinderNLAW";
		weaponLockDelay=3;
		lockAcquire=0;
		weaponLockSystem=1;
		cmImmunity=0.1;
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		magazineWell[]={};
		inertia=1;
		aimTransitionSpeed=0.5;
		dexterity=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=275;
		};
		class ItemInfo
		{
			priority=3;
		};
		descriptionShort="$STR_A3_CfgWeapons_launch_NLAW1";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_launch_NLAW_Library0";
		};
		soundFly[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\warfare\SoundFly1.ogg",
			1,
			1.5,
			500
		};
		baseWeapon="launch_NLAW_F";
		magazineReloadTime=0.1;
		ace_nlaw_enabled=1;
		canLock=1;
		ace_overpressure_priority=1;
		ace_overpressure_angle=30;
		ace_overpressure_range=2;
		ace_overpressure_damage=0.60000002;
	};
	class launch_RPG32_F: Launcher_Base_F
	{
		_generalMacro="launch_RPG32_F";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Launchers\RPG32\data\Anim\RPG32.rtm"
		};
		reloadAction="ReloadRPG";
		recoil="recoil_rpg";
		maxZeroing=600;
		weaponInfoType="RscWeaponEmpty";
		opticsZoomMin=0.1083;
		opticsZoomMax=0.1083;
		opticsZoomInit=0.1083;
		cameraDir="look";
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				opticsZoomMin=0.1083;
				opticsZoomMax=0.1083;
				opticsZoomInit=0.1083;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		magazines[]=
		{
			"RPG32_F",
			"RPG32_HE_F"
		};
		magazineWell[]=
		{
			"RPG32"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				soundSetShot[]=
				{
					"jsrs_rpg42_shot_soundset",
					"jsrs_warhead_reverb_soundset"
				};
			};
			recoil="recoil_single_law";
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=2;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=40;
			midRangeProbab=0.85000002;
			maxRange=600;
			maxRangeProbab=0.85000002;
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			0.25118864,
			1,
			10
		};
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=0.89999998;
		aimTransitionSpeed=0.5;
		dexterity=1.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=66;
		};
		descriptionShort="$STR_A3_CfgWeapons_launch_LAW1";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_launch_LAW_Library0";
		};
		soundFly[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\warfare\SoundFly1.ogg",
			1,
			1.5,
			500
		};
		ace_overpressure_priority=1;
		ace_overpressure_angle=60;
		ace_overpressure_range=15;
		ace_overpressure_damage=0.69999999;
		ace_reloadlaunchers_enabled=1;
	};
	class launch_Titan_base: Launcher_Base_F
	{
		_generalMacro="launch_Titan_base";
		nameSound="aalauncher";
		weaponInfoType="RscOptics_titan";
		magazines[]=
		{
			"Titan_AA"
		};
		magazineWell[]=
		{
			"Titan_Long"
		};
		cursor="missile";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Beta\Launchers\Titan\Data\Anim\titan.rtm"
		};
		reloadAction="ReloadRPG";
		recoil="recoil_titan_long";
		maxZeroing=2000;
		shotPos="muzzlePos2";
		shotEnd="muzzleEnd2";
		class GunParticles
		{
			class effect1
			{
				positionName="muzzleEnd2";
				directionName="muzzlePos2";
				effectName="RocketBackEffectsNLAWNT";
			};
		};
		modes[]=
		{
			"Single",
			"TopDown"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Titan",
					3.1622777,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				soundSetShot[]=
				{
					"jsrs_mprl_shot_soundset",
					"jsrs_warhead_reverb_soundset"
				};
			};
			recoil="recoil_single_titan";
			aiRateOfFire=7;
			aiRateOfFireDistance=1500;
			minRange=70;
			minRangeProbab=0.60000002;
			midRange=150;
			midRangeProbab=0.85000002;
			maxRange=3450;
			maxRangeProbab=0.85000002;
			ace_missileGuidance_attackProfile="JAV_DIR";
		};
		class TopDown: Single
		{
			textureType="topDown";
			aiRateOfFire=7;
			aiRateOfFireDistance=1500;
			minRange=150;
			minRangeProbab=0.80000001;
			midRange=500;
			midRangeProbab=0.94999999;
			maxRange=2000;
			maxRangeProbab=0.94999999;
			ace_missileGuidance_attackProfile="JAV_TOP";
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Dry_Titan",
			0.15848932,
			1,
			18
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\reload_Titan",
			1,
			1,
			20
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",
			0.31622776,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",
			0.31622776,
			2.5
		};
		value=20;
		canLock=2;
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_launch_MPRL_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_launch_MPRL1";
		inertia=1.2;
		aimTransitionSpeed=0.60000002;
		dexterity=0.80000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
			mass=110;
		};
		class ItemInfo
		{
			priority=3;
		};
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.40000001;
		class OpticsModes
		{
			{
				opticsID=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare=0;
				opticsZoomMin=0.083329998;
				opticsZoomMax=0.041669998;
				opticsZoomInit=0.083329998;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"Ti"
				};
				thermalMode[]={0,1};
				opticsDisablePeripherialVision=1;
				discretefov[]={0.083329998,0.041669998};
				discreteInitIndex=0;
				nFovLimit=0.083329998;
			};
		};
		soundFly[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\warfare\SoundFly1.ogg",
			1,
			1.5,
			500
		};
		ace_overpressure_priority=1;
		ace_overpressure_angle=40;
		ace_overpressure_range=8;
		ace_overpressure_damage=0.5;
		ace_reloadlaunchers_enabled=1;
	};
	class launch_Titan_short_base: launch_Titan_base
	{
		_generalMacro="launch_Titan_short_base";
		descriptionShort="$STR_CfgWeapons_launch_MPRL_short_F1";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=88;
		};
		inertia=1.1;
		aimTransitionSpeed=0.69999999;
		recoil="recoil_titan_short";
		magazines[]=
		{
			"Titan_AT",
			"Titan_AP"
		};
		magazineWell[]=
		{
			"Titan_Short"
		};
		lockAcquire=0;
		cmImmunity=0.2;
		class Library
		{
			libTextDesc="$STR_A3_cfgWeapons_launch_MPRL_short_Library0";
		};
		class Single: Single
		{
			minRange=70;
			minRangeProbab=0.89999998;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=2000;
			maxRangeProbab=0.80000001;
		};
		ace_overpressure_priority=1;
		ace_overpressure_angle=30;
		ace_overpressure_range=2;
		ace_overpressure_damage=0.5;
	};
	class launch_B_Titan_F: launch_Titan_base
	{
		_generalMacro="launch_B_Titan_F";
	};
	class launch_I_Titan_F: launch_Titan_base
	{
		_generalMacro="launch_I_Titan_F";
	};
	class launch_O_Titan_F: launch_Titan_base
	{
		_generalMacro="launch_O_Titan_F";
	};
	class launch_Titan_F: launch_Titan_base
	{
		_generalMacro="launch_Titan_F";
	};
	class launch_B_Titan_short_F: launch_Titan_short_base
	{
		_generalMacro="launch_B_Titan_short_F";
		ace_javelin_enabled=1;
		weaponInfoType="ACE_RscOptics_javelin";
		canLock=0;
		lockingTargetSound[]=
		{
			"",
			0,
			1
		};
		lockedTargetSound[]=
		{
			"",
			0,
			1
		};
	};
	class launch_I_Titan_short_F: launch_Titan_short_base
	{
		_generalMacro="launch_I_Titan_short_F";
		ace_javelin_enabled=1;
		weaponInfoType="ACE_RscOptics_javelin";
		canLock=0;
		lockingTargetSound[]=
		{
			"",
			0,
			1
		};
		lockedTargetSound[]=
		{
			"",
			0,
			1
		};
	};
	class launch_O_Titan_short_F: launch_Titan_short_base
	{
		_generalMacro="launch_O_Titan_short_F";
		ace_javelin_enabled=1;
		weaponInfoType="ACE_RscOptics_javelin";
		canLock=0;
		lockingTargetSound[]=
		{
			"",
			0,
			1
		};
		lockedTargetSound[]=
		{
			"",
			0,
			1
		};
	};
	class launch_Titan_short_F: launch_Titan_short_base
	{
		_generalMacro="launch_Titan_short_F";
		ace_javelin_enabled=1;
		weaponInfoType="ACE_RscOptics_javelin";
		canLock=0;
		lockingTargetSound[]=
		{
			"",
			0,
			1
		};
		lockedTargetSound[]=
		{
			"",
			0,
			1
		};
	};
	class DMR_01_base_F: Rifle_Long_Base_F
	{
		_generalMacro="DMR_01_base_F";
		magazines[]=
		{
			"10Rnd_762x54_Mag"
		};
		magazineWell[]=
		{
			"Rahim_762x54",
			"CBA_762x54R_SVD"
		};
		reloadAction="GestureReloadDMR";
		recoil="recoil_dmr_01";
		maxZeroing=1600;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_EPA\LongRangeRifles\DMR_01\data\Anim\dmr_01.rtm"
		};
		cursor="srifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_762
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[]={0.44999999,0.38};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				compatibleItems[]={};
				iconPosition[]={0.34999999,0.5};
				iconScale=0.25;
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1",
			"fullauto_medium"
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_dry",
			0.25118864,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR_01_firemode",
			0.31622776,
			1,
			5
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rahim_shot_soundset",
					"jsrs_7x62mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rahim_shot_silenced_soundset",
					"jsrs_7x62mm_sd_reverb_soundset"
				};
			};
			reloadTime=0.092;
			dispersion=0.00057999999;
			recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rahim_shot_soundset",
					"jsrs_7x62mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_rahim_shot_silenced_soundset",
					"jsrs_7x62mm_sd_reverb_soundset"
				};
			};
			reloadTime=0.092;
			dispersion=0.00057999999;
			recoil="recoil_auto_dmr";
			recoilProne="recoil_auto_prone_dmr";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class single_close_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=700;
			midRangeProbab=0.5;
			maxRange=1000;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
		ace_overheating_closedBolt=1;
	};
	class srifle_DMR_01_F: DMR_01_base_F
	{
		_generalMacro="srifle_DMR_01_F";
		baseWeapon="srifle_DMR_01_F";
		descriptionShort="$STR_A3_CfgWeapons_srifle_DMR_01_F1";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.44999999,0.38};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.5};
				iconScale=0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.40000001,0.69999999};
				iconScale=0.2;
			};
			mass=100;
		};
		inertia=0.5;
		aimTransitionSpeed=1;
		dexterity=1.5;
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_srifle_DMR_01_F_library";
		};
		class ItemInfo
		{
			priority=1;
		};
		ACE_RailHeightAboveBore=2.83284;
		ACE_IronSightBaseAngle=0.0057299999;
		ACE_barrelLength=609.59998;
		ACE_barrelTwist=241.3;
		initSpeed=-1.00019;
	};
	class srifle_DMR_01_ACO_F: srifle_DMR_01_F
	{
		_generalMacro="srifle_DMR_01_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
		};
	};
	class srifle_DMR_01_MRCO_F: srifle_DMR_01_F
	{
		_generalMacro="srifle_DMR_01_MRCO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class srifle_DMR_01_SOS_F: srifle_DMR_01_F
	{
		_generalMacro="srifle_DMR_01_SOS_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
		};
	};
	class srifle_DMR_01_DMS_F: srifle_DMR_01_F
	{
		_generalMacro="srifle_DMR_01_DMS_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
		};
	};
	class srifle_DMR_01_DMS_snds_F: srifle_DMR_01_F
	{
		_generalMacro="srifle_DMR_01_DMS_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_b";
			};
		};
	};
	class srifle_DMR_01_ARCO_F: srifle_DMR_01_F
	{
		_generalMacro="srifle_DMR_01_ARCO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ARCO";
			};
		};
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		_generalMacro="EBR_base_F";
		magazines[]=
		{
			"20Rnd_762x51_Mag"
		};
		magazineWell[]=
		{
			"M14_762x51",
			"CBA_762x51_M14"
		};
		magazineReloadSwitchPhase=0.5;
		reloadAction="GestureReloadEBR";
		recoil="recoil_ebr";
		maxZeroing=1600;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\LongRangeRifles\EBR\Data\Anim\ebr.rtm"
		};
		cursor="srifle";
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_762
			{
				iconPosition[]={0.050000001,0.38};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.34999999,0.40000001};
				iconScale=0.25;
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics1"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_dry",
			0.63095737,
			1,
			30
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_firemode",
			0.25118864,
			1,
			5
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_reload",
			1,
			1,
			10
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",
					0.56234133,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",
					0.56234133,
					1.2,
					30
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_01",
					3.9810717,
					1,
					2000
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_02",
					3.9810717,
					1,
					2000
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_03",
					3.9810717,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",
							1.5848932,
							1,
							2000
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
				soundSetShot[]=
				{
					"jsrs_mk18_shot_soundset",
					"jsrs_7x62mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",
					1,
					1,
					600
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",
					1,
					1,
					600
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",
					1,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",
							1,
							1,
							600
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
				soundsetshot[]=
				{
					"jsrs_mk18_shot_silenced_soundset",
					"jsrs_7x62mm_sd_reverb_soundset"
				};
			};
			reloadTime=0.085000001;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_01",
					0.56234133,
					1,
					30
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_closure_02",
					0.56234133,
					1.2,
					30
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_01",
					3.9810717,
					1,
					2000
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_02",
					3.9810717,
					1,
					2000
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_short_03",
					3.9810717,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_forest",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_houses",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_interior",
							1.5848932,
							1,
							2000
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_meadows",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_tail_trees",
							1,
							1,
							2000
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
				soundSetShot[]=
				{
					"jsrs_mk18_shot_soundset",
					"jsrs_7x62mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_01",
					1,
					1,
					600
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_02",
					1,
					1,
					600
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_short_03",
					1,
					1,
					600
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_forest",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_houses",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_interior",
							1.9952624,
							1,
							600
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_meadows",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\silencer_Mk18_tail_trees",
							1,
							1,
							600
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
				soundsetshot[]=
				{
					"jsrs_mk18_shot_silenced_soundset",
					"jsrs_7x62mm_sd_reverb_soundset"
				};
			};
			reloadTime=0.085000001;
			recoil="recoil_auto_ebr";
			recoilProne="recoil_auto_prone_ebr";
			dispersion=0.00073000003;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class single_close_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: single_close_optics1
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=600;
			midRangeProbab=0.40000001;
			maxRange=900;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
		ace_overheating_closedBolt=1;
	};
	class srifle_EBR_F: EBR_base_F
	{
		_generalMacro="srifle_EBR_F";
		baseWeapon="srifle_EBR_F";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_srifle_ABR_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_srifle_ABR1";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.2;
				class compatibleItems: compatibleItems
				{
					RKSL_optic_RMR_MS19=0;
					RKSL_optic_RMR_MS19_FDE=0;
					RKSL_optic_RMR_RM33=0;
					RKSL_optic_RMR_RM33_FDE=0;
				};
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.40000001};
				iconScale=0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.30000001,0.64999998};
				iconScale=0.2;
			};
			mass=112;
		};
		inertia=0.69999999;
		aimTransitionSpeed=0.80000001;
		dexterity=1.3;
		class ItemInfo
		{
			priority=1;
		};
		ACE_RailHeightAboveBore=1.98812;
		ACE_IronSightBaseAngle=0.0074479999;
		ACE_barrelLength=457.20001;
		ACE_barrelTwist=304.79999;
		initSpeed=-0.97944403;
	};
	class srifle_EBR_ACO_F: srifle_EBR_F
	{
		_generalMacro="srifle_EBR_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
		};
	};
	class srifle_EBR_MRCO_pointer_F: srifle_EBR_F
	{
		_generalMacro="srifle_EBR_MRCO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class srifle_EBR_ARCO_pointer_F: srifle_EBR_F
	{
		_generalMacro="srifle_EBR_ARCO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ARCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class srifle_EBR_SOS_F: srifle_EBR_F
	{
		_generalMacro="srifle_EBR_SOS_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
		};
	};
	class srifle_EBR_ARCO_pointer_snds_F: srifle_EBR_F
	{
		_generalMacro="srifle_EBR_ARCO_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_arco";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_b";
			};
		};
	};
	class srifle_EBR_DMS_F: srifle_EBR_F
	{
		_generalMacro="srifle_EBR_DMS_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
		};
	};
	class srifle_EBR_Hamr_pointer_F: srifle_EBR_F
	{
		_generalMacro="srifle_EBR_Hamr_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class srifle_EBR_DMS_pointer_snds_F: srifle_EBR_F
	{
		_generalMacro="srifle_EBR_DMS_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_b";
			};
		};
	};
	class GM6_base_F: Rifle_Long_Base_F
	{
		_generalMacro="GM6_base_F";
		magazines[]=
		{
			"5Rnd_127x108_Mag",
			"5Rnd_127x108_APDS_Mag"
		};
		magazineWell[]={};
		reloadAction="ReloadGM6";
		recoil="recoil_gm6";
		maxZeroing=2200;
		cursor="srifle";
		maxRecoilSway=0.029999999;
		swayDecaySpeed=1.25;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\LongRangeRifles\GM6\Data\Anim\GM6.rtm"
		};
		opticsPPEffects[]={};
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="SniperCloud";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		distanceZoomMin=100;
		distanceZoomMax=350;
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_dry",
			0.56234133,
			1,
			15
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_reload",
			1,
			1,
			10
		};
		soundBipodDeploy[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",
			0.70794576,
			1,
			20
		};
		soundBipodFold[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",
			0.70794576,
			1,
			20
		};
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			0.70794576,
			1,
			20
		};
		class Single: Mode_SemiAuto
		{
			dispersion=0.00034999999;
			soundContinuous=0;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_gm6_shot_soundset",
					"jsrs_12x7mm_reverb_soundset"
				};
			};
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
			class SilencedSound: BaseSoundModeType
			{
				closure1[]=
				{
					"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_closure_01",
					1.77828,
					1,
					10
				};
				closure2[]=
				{
					"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_closure_01",
					1.77828,
					1,
					10
				};
				soundclosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			reloadTime=0.23999999;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.40000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=250;
			minRangeProbab=0.2;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.40000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.2;
			midRange=1200;
			midRangeProbab=0.69999999;
			maxRange=2100;
			maxRangeProbab=0.30000001;
			aiRateOfFire=7;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		ace_overheating_closedBolt=1;
	};
	class srifle_GM6_F: GM6_base_F
	{
		_generalMacro="srifle_GM6_F";
		baseWeapon="srifle_GM6_F";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
			};
			class PointerSlot
			{
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.55000001,0.30000001};
				iconScale=0.2;
			};
			mass=253;
		};
		inertia=1.2;
		aimTransitionSpeed=0.5;
		dexterity=1;
		class ItemInfo
		{
			priority=1;
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_srifle_GM6_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_srifle_GM61";
		deployedPivot="bipod";
		hasBipod=1;
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			0.70794576,
			1,
			20
		};
		ACE_RailHeightAboveBore=4.7557201;
		ACE_IronSightBaseAngle=0.001146;
		ACE_barrelLength=730;
		ACE_barrelTwist=381;
		initSpeed=-1;
		magazineWell[]=
		{
			"CBA_50BMG_AS50"
		};
	};
	class srifle_GM6_SOS_F: srifle_GM6_F
	{
		_generalMacro="srifle_GM6_SOS_F";
		weaponpoolavailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
		};
	};
	class srifle_GM6_LRPS_F: srifle_GM6_F
	{
		_generalMacro="srifle_GM6_LRPS_F";
		weaponpoolavailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_LRPS";
			};
		};
	};
	class srifle_GM6_camo_F: srifle_GM6_F
	{
		_generalMacro="srifle_GM6_camo_F";
		baseWeapon="srifle_GM6_camo_F";
		};
		};
		deployedPivot="bipod";
		hasBipod=1;
	};
	class srifle_GM6_camo_SOS_F: srifle_GM6_camo_F
	{
		_generalMacro="srifle_GM6_camo_SOS_F";
		weaponpoolavailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
		};
	};
	class srifle_GM6_camo_LRPS_F: srifle_GM6_camo_F
	{
		_generalMacro="srifle_GM6_camo_LRPS_F";
		weaponpoolavailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_LRPS";
			};
		};
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		_generalMacro="LRR_base_F";
		magazines[]=
		{
			"7Rnd_408_Mag"
		};
		magazineWell[]=
		{
			"M320_408"
		};
		reloadAction="GestureReloadLRR";
		recoil="recoil_m320";
		maxZeroing=2400;
		cursor="srifle";
		initSpeed=910;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\LongRangeRifles\M320\data\Anim\m320.rtm"
		};
		opticsPPEffects[]={};
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="SniperCloud";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\big\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_dry",
			0.50118721,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_reload",
			1,
			1,
			10
		};
		soundBipodDeploy[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",
			0.70794576,
			1,
			20
		};
		soundBipodFold[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",
			0.70794576,
			1,
			20
		};
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			0.70794576,
			1,
			20
		};
		class Single: Mode_SemiAuto
		{
			dispersion=0.00018;
			soundContinuous=0;
			reloadTime=1.2;
			recoil="recoil_single_gm6";
			recoilProne="recoil_single_prone_gm6";
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_m320r_shot_soundset",
					"jsrs_12x7mm_reverb_soundset"
				};
			};
			minRange=2;
			minRangeProbab=0.1;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
			class SilencedSound: BaseSoundModeType
			{
				closure1[]=
				{
					"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_closure_01",
					1.77828,
					1,
					10
				};
				closure2[]=
				{
					"a3\sounds_f\arsenal\weapons\longrangerifles\m320\m320_closure_01",
					1.77828,
					1,
					10
				};
				soundclosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=700;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=250;
			minRangeProbab=0.1;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.1;
			midRange=1050;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=2000;
			requiredOpticType=2;
		};
		ace_overheating_closedBolt=1;
	};
	class srifle_LRR_F: LRR_base_F
	{
		_generalMacro="srifle_LRR_F";
		baseWeapon="srifle_LRR_F";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_srifle_LRR_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_srifle_LRR1";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
			};
			class PointerSlot
			{
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.60000002,0.34999999};
				iconScale=0.2;
			};
			mass=310;
		};
		inertia=1.1;
		aimTransitionSpeed=0.5;
		dexterity=1.1;
		class ItemInfo
		{
			priority=1;
		};
		deployedPivot="bipod";
		hasBipod=1;
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			0.70794576,
			1,
			20
		};
		ACE_RailHeightAboveBore=3.2086401;
		ACE_IronSightBaseAngle=0.004011;
		ACE_barrelLength=736.59998;
		ACE_barrelTwist=330.20001;
		initSpeed=-1;
		magazineWell[]=
		{
			"CBA_408CT_Inter"
		};
	};
	class srifle_LRR_SOS_F: srifle_LRR_F
	{
		_generalMacro="srifle_LRR_SOS_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
		};
	};
	class srifle_LRR_LRPS_F: srifle_LRR_F
	{
		_generalMacro="srifle_LRR_LRPS_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_LRPS";
			};
		};
	};
	class srifle_LRR_camo_F: srifle_LRR_F
	{
		_generalMacro="srifle_LRR_camo_F";
		baseWeapon="srifle_LRR_camo_F";
		hasBipod=1;
	};
	class srifle_LRR_camo_SOS_F: srifle_LRR_camo_F
	{
		_generalMacro="srifle_LRR_camo_SOS_F";
		weaponpoolavailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
		};
	};
	class srifle_LRR_camo_LRPS_F: srifle_LRR_camo_F
	{
		_generalMacro="srifle_LRR_camo_LRPS_F";
		weaponpoolavailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_LRPS";
			};
		};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		_generalMacro="LMG_Mk200_F";
		baseWeapon="LMG_Mk200_F";
		magazines[]=
		{
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"200Rnd_65x39_cased_Box_Red",
			"200Rnd_65x39_cased_Box_Tracer_Red"
		};
		reloadAction="GestureReloadM200";
		recoil="recoil_mk200";
		maxZeroing=1200;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\weapons_f\Machineguns\M200\data\Anim\M200.rtm"
		};
		class ItemInfo
		{
			priority=1;
		};
		nameSound="Mgun";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_LMG_Mk200_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_LMG_Mk2001";
		cursor="mg";
		cursorAim="EmptyCursor";
		inertia=0.69999999;
		aimTransitionSpeed=0.80000001;
		dexterity=1.3;
		};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_65MG
			{
				iconPinpoint="center";
				iconPosition[]={-0.07,0.389};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short_MG
			{
				iconPosition[]={0.60000002,0.44999999};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.5};
				iconScale=0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.34999999,0.80000001};
				iconScale=0.2;
			};
			mass=114;
		};
		modes[]=
		{
			"manual",
			"Single",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2",
			"ACE_Burst_far"
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\dry_Mk200",
			0.44668359,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Reload_Mk200",
			1,
			1,
			10
		};
		class manual: Mode_FullAuto
		{
			dispersion=0.00102;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_mk200_shot_soundset",
					"jsrs_6x5mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_mk200_shot_silenced_soundset",
					"jsrs_6x5mm_sd_reverb_soundset"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
			reloadTime=0.109;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRangeProbab=0.0099999998;
			maxRange=750;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			maxRange=1100;
			aiRateOfFireDistance=1100;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		class GunParticles: GunParticles
		{
			class AmmoBeltEject
			{
				effectName="MachineGunEject2";
				positionName="nabojnicestart";
				directionName="nabojniceend";
			};
		};
		magazineWell[]=
		{
			"Mk200_65x39",
			"CBA_65x39_Mk200"
		};
		magazineReloadSwitchPhase=0.47999999;
		ace_overheating_allowSwapBarrel=1;
		ACE_RailHeightAboveBore=2.68925;
		ACE_IronSightBaseAngle=0.0017190001;
		class Single: manual
		{
			reloadTime=0.109;
			dispersion=0.0017500001;
			autofire=0;
			burst=1;
			texturetype="semi";
			showToPlayer=1;
		};
		class ACE_Burst_far: medium
		{
			aiRateOfFire=6;
			aiRateOfFireDistance=900;
			minRange=500;
			minRangeProbab=0.1;
			midRange=700;
			midRangeProbab=0.2;
			maxRange=900;
			maxRangeProbab=0.2;
			burst="3 + round random 5";
		};
		ACE_barrelLength=381;
		ACE_barrelTwist=177.8;
		initSpeed=-0.999327;
	};
	class LMG_Mk200_MRCO_F: LMG_Mk200_F
	{
		_generalMacro="LMG_Mk200_MRCO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class LMG_Mk200_pointer_F: LMG_Mk200_F
	{
		_generalMacro="LMG_Mk200_pointer_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		_generalMacro="LMG_Zafir_F";
		baseWeapon="LMG_Zafir_F";
		magazines[]=
		{
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer"
		};
		reloadAction="GestureReloadM200";
		recoil="recoil_zafir";
		maxZeroing=1400;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Beta\Machineguns\Zafir\Data\Anim\zafir.rtm"
		};
		nameSound="Mgun";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_LMG_Zafir_F_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_LMG_Zafir_F1";
		cursor="mg";
		cursorAim="EmptyCursor";
		magazineReloadSwitchPhase=0.54100001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short_MG
			{
				iconPosition[]={0.60000002,0.34999999};
				iconScale=0.15000001;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.40000001,0.40000001};
				iconScale=0.15000001;
			};
			mass=163;
		};
		inertia=0.89999998;
		aimTransitionSpeed=0.60000002;
		dexterity=1.2;
		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2",
			"ACE_Burst_far"
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		discreteDistance[]={300,400,500,600,700,800,900,1000};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\dry_Zafir",
			0.44668359,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\reload_zafir",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\firemode_Zafir",
			0.25118864,
			1,
			5
		};
		soundBipodDeploy[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",
			0.70794576,
			1,
			20
		};
		soundBipodFold[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",
			0.70794576,
			1,
			20
		};
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			0.70794576,
			1,
			20
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.063000001;
			dispersion=0.00131;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			sounds[]=
			{
				"standardsound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_zafir_shot_soundset",
					"jsrs_7x62mm_reverb_soundset"
				};
			};
			autoFire=0;
			soundContinuous=0;
			soundBurst=0;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
			showToPlayer=1;
			class SilencedSound: BaseSoundModeType
			{
			};
			minRange=120;
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion=0.00131;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			sounds[]=
			{
				"standardsound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_zafir_shot_soundset",
					"jsrs_7x62mm_reverb_soundset"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			showToPlayer=1;
			class SilencedSound: BaseSoundModeType
			{
			};
			reloadTime=0.07;
		};
		class close: FullAuto
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=5;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=400;
			midRangeProbab=0.60000002;
			maxRange=600;
			maxRangeProbab=0.1;
		};
		class far_optic1: close
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=9;
			aiRateOfFireDistance=900;
			minRange=350;
			minRangeProbab=0.039999999;
			midRange=550;
			midRangeProbab=0.5;
			maxRangeProbab=0.0099999998;
			maxRange=800;
		};
		class far_optic2: far_optic1
		{
			requiredOpticType=2;
			autoFire=0;
			burst=1;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=800;
			midRangeProbab=0.5;
			maxRangeProbab=0.0099999998;
			maxRange=1200;
		};
		aiDispersionCoefY=23;
		aiDispersionCoefX=19;
		deployedPivot="bipod";
		hasBipod=1;
		class GunParticles: GunParticles
		{
			class AmmoBeltEject
			{
				effectName="MachineGunEject2";
				positionName="nabojnicestart";
				directionName="nabojniceend";
			};
		};
		magazineWell[]=
		{
			"CBA_762x54R_LINKS"
		};
		ace_overheating_allowSwapBarrel=1;
		ACE_RailHeightAboveBore=0.99665099;
		ACE_IronSightBaseAngle=0.004584;
		class ACE_Burst_far: medium
		{
			aiRateOfFire=6;
			aiRateOfFireDistance=900;
			minRange=500;
			minRangeProbab=0.1;
			midRange=700;
			midRangeProbab=0.2;
			maxRange=900;
			maxRangeProbab=0.2;
			burst="3 + round random 5";
		};
		ACE_barrelLength=459.73999;
		ACE_barrelTwist=304.79999;
		initSpeed=-1.0004801;
	};
	class LMG_Zafir_pointer_F: LMG_Zafir_F
	{
		_generalMacro="LMG_Zafir_pointer_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundbullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class single: Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound"
			};
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_zafir_shot_soundset",
					"jsrs_7x62mm_reverb_soundset"
				};
			};
		};
		class fullauto: Mode_FullAuto
		{
			sounds[]=
			{
				"standardsound"
			};
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_zafir_shot_soundset",
					"jsrs_7x62mm_reverb_soundset"
				};
			};
		};
	};
	class LMG_Zafir_ARCO_F: LMG_Zafir_F
	{
		_generalMacro="LMG_Zafir_ARCO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ARCO";
			};
		};
	};
	class hgun_ACPC2_F: Pistol_Base_F
	{
		_generalMacro="hgun_ACPC2_F";
		baseWeapon="hgun_ACPC2_F";
		magazines[]=
		{
			"9Rnd_45ACP_Mag"
		};
		magazineWell[]=
		{
			"ACPC2_45ACP",
			"CBA_45ACP_1911"
		};
		descriptionShort="$STR_A3_CFGWEAPONS_HGUN_ACPC2_F_2";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_hgun_ACPC2_Library0";
		};
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\dry_Acpc2",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\reload_ACPC2",
			1,
			1,
			30
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_acpc_shot_soundset",
					"jsrs_cal45_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_acpc_shot_silenced_soundset",
					"jsrs_cal45_sd_reverb_soundset"
				};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.15000001;
			dispersion=0.0029;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		inertia=0.2;
		aimTransitionSpeed=1.6;
		dexterity=1.8;
		recoil="recoil_pistol_acpc2";
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			holsterScale=0.94999999;
			class CowsSlot
			{
			};
			class MuzzleSlot: asdg_MuzzleSlot_45ACP
			{
				iconPosition[]={0.25,0.40000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[]={0.47999999,0.54000002};
				iconScale=0.25;
			};
			mass=24;
		};
		ACE_barrelLength=127;
		ACE_barrelTwist=406.39999;
		initSpeed=-0.98425198;
	};
	class hgun_ACPC2_snds_F: hgun_ACPC2_F
	{
		_generalMacro="hgun_ACPC2_snds_F";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_acp";
			};
		};
	};
	class hgun_P07_F: Pistol_Base_F
	{
		_generalMacro="hgun_P07_F";
		baseWeapon="hgun_P07_F";
		magazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_red_Mag",
			"16Rnd_9x21_green_Mag",
			"16Rnd_9x21_yellow_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Red_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag"
		};
		magazineWell[]=
		{
			"Pistol_9x21"
		};
		reloadAction="GestureReloadPistol";
		recoil="recoil_pistol_p07";
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\P07\dry_P07",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",
			1,
			1,
			10
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_p07_shot_soundset",
					"jsrs_9mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_p07_shot_silenced_soundset",
					"jsrs_9mm_sd_reverb_soundset"
				};
			};
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			reloadTime=0.12;
			dispersion=0.0029;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_hgun_P07_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_hgun_P071";
		inertia=0.1;
		aimTransitionSpeed=1.6;
		dexterity=1.9;
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot
			{
			};
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			mass=13;
		};
		class ItemInfo
		{
			priority=2;
		};
		ACE_barrelLength=101.6;
		ACE_barrelTwist=254;
		initSpeed=-0.906977;
	};
	class hgun_P07_snds_F: hgun_P07_F
	{
		_generalMacro="hgun_P07_snds_F";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		_generalMacro="hgun_Pistol_heavy_01_F";
		baseWeapon="hgun_Pistol_heavy_01_F";
		magazines[]=
		{
			"11Rnd_45ACP_Mag"
		};
		magazineWell[]=
		{
			"PistolHeavy_01_45ACP"
		};
		descriptionShort="$STR_A3_CFGWEAPONS_HGUN_ACPC2_F_2";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_hgun_Pistol_heavy_01_F_Library0";
		};
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\reload_4_five",
			0.56234133,
			1,
			30
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_4five_shot_soundset",
					"jsrs_cal45_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_4five_shot_silenced_soundset",
					"jsrs_cal45_sd_reverb_soundset"
				};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.1;
			dispersion=0.0043500001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		inertia=0.30000001;
		aimTransitionSpeed=1.5;
		dexterity=1.7;
		recoil="recoil_pistol_4five";
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			holsterScale=0.94999999;
			class CowsSlot: asdg_PistolOpticMount
			{
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class MuzzleSlot: asdg_MuzzleSlot_45ACP
			{
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[]={0.47,0.55000001};
				iconScale=0.30000001;
			};
			mass=21;
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundbullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		ACE_barrelLength=114.3;
		ACE_barrelTwist=406.39999;
		initSpeed=-0.94488198;
	};
	class hgun_Pistol_heavy_01_snds_F: hgun_Pistol_heavy_01_F
	{
		_generalMacro="hgun_Pistol_heavy_01_snds_F";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_acp";
			};
		};
	};
	class hgun_Pistol_heavy_01_MRD_F: hgun_Pistol_heavy_01_F
	{
		_generalMacro="hgun_Pistol_heavy_01_MRD_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRD";
			};
		};
	};
	class hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		_generalMacro="hgun_Pistol_heavy_02_F";
		baseWeapon="hgun_Pistol_heavy_02_F";
		magazines[]=
		{
			"6Rnd_45ACP_Cylinder"
		};
		magazineWell[]=
		{
			"Cylinder_45ACP"
		};
		descriptionShort="$STR_A3_CFGWEAPONS_HGUN_ACPC2_F_2";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_hgun_Pistol_heavy_02_F_Library0";
		};
		reloadAction="GestureReloadPistolHeavy02";
		recoil="recoil_pistol_zubr";
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\dry_Zubr",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\Zubr\reload_Zubr",
			0.56234133,
			1,
			10
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"standardsound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_zubr_shot_soundset",
					"jsrs_12x7mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.25;
			dispersion=0.00145;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		bullet1[]=
		{
			"A3\sounds_f\dummysound",
			1,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			1
		};
		inertia=0.30000001;
		aimTransitionSpeed=1.5;
		dexterity=1.7;
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			holsterScale=0.85000002;
			class CowsSlot: asdg_PistolOpticRail1913
			{
				iconPosition[]={0.40000001,0.30000001};
				iconScale=0.15000001;
			};
			class PointerSlot: asdg_PistolUnderRail
			{
				iconPosition[]={0.34999999,0.60000002};
				iconScale=0.30000001;
			};
			mass=20;
		};
		ace_overheating_jamTypesAllowed[]=
		{
			"Fire",
			"Dud"
		};
		ACE_barrelLength=76.199997;
		ACE_barrelTwist=406.39999;
		initSpeed=-0.90551198;
	};
	class hgun_Pistol_heavy_02_Yorris_F: hgun_Pistol_heavy_02_F
	{
		_generalMacro="hgun_Pistol_heavy_02_Yorris_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Yorris";
			};
		};
	};
	class hgun_Rook40_F: Pistol_Base_F
	{
		_generalMacro="hgun_Rook40_F";
		baseWeapon="hgun_Rook40_F";
		magazines[]=
		{
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_red_Mag",
			"16Rnd_9x21_green_Mag",
			"16Rnd_9x21_yellow_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Red_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag"
		};
		magazineWell[]=
		{
			"Pistol_9x21"
		};
		descriptionShort="$STR_A3_CfgWeapons_hgun_P071";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_hgun_Rook40_Library0";
		};
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\dry_Rook40",
			0.22387211,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\reload_rook40",
			1,
			1,
			10
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_rook40_shot_soundset",
					"jsrs_9mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_rook40_shot_silenced_soundset",
					"jsrs_9mm_sd_reverb_soundset"
				};
			};
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			reloadTime=0.1;
			dispersion=0.0043500001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		inertia=0.2;
		aimTransitionSpeed=1.6;
		dexterity=1.8;
		recoil="recoil_pistol_rook40";
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot
			{
			};
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
				iconPosition[]={0.30000001,0.38};
				iconScale=0.2;
			};
			mass=20;
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundbullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		ACE_barrelLength=111.76;
		ACE_barrelTwist=254;
		initSpeed=-0.93488401;
	};
	class hgun_Rook40_snds_F: hgun_Rook40_F
	{
		_generalMacro="hgun_Rook40_snds_F";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		_generalMacro="arifle_Katiba_Base_F";
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer"
		};
		magazineWell[]=
		{
			"Katiba_65x39",
			"CBA_65x39_Katiba"
		};
		reloadAction="GestureReloadKatiba";
		recoil="recoil_ktb";
		maxZeroing=1000;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\Khaybar\data\anim\katiba.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_65
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_far_optics2",
			"fullauto_medium",
			"ACE_Burst_far"
		};
		class Single: Mode_SemiAuto
		{
			dispersion=0.00116;
			recoil="recoil_single_ktb";
			recoilProne="recoil_single_prone_ktb";
			maxRange=400;
			maxRangeProbab=0.30000001;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",
					0.17782794,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",
					0.17782794,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_katiba_shot_soundset",
					"jsrs_6x5mm_reverb_soundset"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_01",
					3.1622777,
					1,
					1800
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_02",
					3.1622777,
					1,
					1800
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_03",
					3.1622777,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin2",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",
							2.2387211,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_katiba_shot_silenced_soundset",
					"jsrs_6x5mm_sd_reverb_soundset"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_01",
					0.79432821,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_02",
					0.79432821,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.075000003;
			minRange=120;
			minRangeProbab=0.69999999;
			midRange=300;
			midRangeProbab=0.5;
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion=0.00116;
			recoil="recoil_auto_trg";
			recoilProne="recoil_auto_prone_trg";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_01",
					0.56234133,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\closure_Katiba_02",
					0.56234133,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_katiba_shot_soundset",
					"jsrs_6x5mm_reverb_soundset"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_01",
					3.1622777,
					1,
					1800
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_02",
					3.1622777,
					1,
					1800
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_short_03",
					3.1622777,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin2",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_interior",
							1.5848932,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_trees",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_forest",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_meadows",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_tail_houses",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_katiba_shot_silenced_soundset",
					"jsrs_6x5mm_sd_reverb_soundset"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_01",
					0.79432821,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_02",
					0.79432821,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_short_03",
					0.79432821,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Silencer_Katiba_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.075000003;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=20;
			burst="3 + round random 5";
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=700;
			minRange=120;
			maxRange=700;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRangeProbab=0.1;
			midRange=450;
			midRangeProbab=0.60000002;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=900;
			minRange=200;
			maxRange=900;
		};
		class EGLM: UGL_F
		{
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadKatibaUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_UGL_reload",
				0.79432821,
				1,
				10
			};
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\dry_Katiba",
			0.56234133,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\reload_Katiba",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",
			0.25118864,
			1,
			5
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
			minRange=400;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.2;
			maxRange=600;
			maxRangeProbab=0.2;
			burst="2 + round random 3";
		};
	};
	class arifle_Katiba_F: arifle_Katiba_Base_F
	{
		_generalMacro="arifle_Katiba_F";
		baseWeapon="arifle_Katiba_F";
		descriptionShort="$STR_A3_CfgWeapons_arifle_Katiba_F1";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_Katiba_F_Library0";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			mass=81;
		};
		inertia=0.40000001;
		aimTransitionSpeed=1;
		dexterity=1.6;
		ACE_RailHeightAboveBore=5.7546802;
		ACE_IronSightBaseAngle=0.011459;
		ACE_barrelLength=508;
		ACE_barrelTwist=203.2;
		initSpeed=-1;
	};
	class arifle_Katiba_C_F: arifle_Katiba_Base_F
	{
		_generalMacro="arifle_Katiba_C_F";
		baseWeapon="arifle_Katiba_C_F";
		descriptionShort="$STR_A3_CfgWeapons_arifle_Katiba_F1";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_Katiba_F_Library0";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0.1,0.44999999};
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			mass=73;
		};
		inertia=0.30000001;
		aimTransitionSpeed=1.2;
		dexterity=1.7;
		recoil="recoil_ktbc";
		maxZeroing=800;
		class Single: Single
		{
			dispersion=0.00145;
			maxRange=350;
			maxRangeProbab=0.2;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_katibac_shot_soundset",
					"jsrs_6x5mm_reverb_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_katibac_shot_silenced_soundset",
					"jsrs_6x5mm_sd_reverb_soundset"
				};
			};
			minRange=120;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.30000001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00145;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_katibac_shot_soundset",
					"jsrs_6x5mm_reverb_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_katibac_shot_silenced_soundset",
					"jsrs_6x5mm_sd_reverb_soundset"
				};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00145;
			showToPlayer=0;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=20;
			maxRange=150;
			burst="3 + round random 5";
		};
		class single_medium_optics1: single_medium_optics1
		{
			requiredOpticType=1;
			dispersion=0.00145;
			minRangeProbab=0.2;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.30000001;
			minRange=120;
			maxRange=600;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			dispersion=0.00145;
			minRangeProbab=0.1;
			midRange=450;
			midRangeProbab=0.60000002;
			maxRangeProbab=0.050000001;
			aiRateOfFire=7;
			aiRateOfFireDistance=800;
			minRange=200;
			maxRange=800;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		ACE_RailHeightAboveBore=5.7546802;
		ACE_IronSightBaseAngle=0.011459;
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=400;
			minRange=300;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.2;
			maxRange=500;
			maxRangeProbab=0.2;
			burst="2 + round random 3";
		};
		ACE_barrelLength=393.70001;
		ACE_barrelTwist=203.2;
		initSpeed=-0.961294;
	};
	class arifle_Katiba_GL_F: arifle_Katiba_Base_F
	{
		_generalMacro="arifle_Katiba_GL_F";
		baseWeapon="arifle_Katiba_GL_F";
		descriptionShort="$STR_A3_CfgWeapons_arifle_Katiba_GL_F1";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_Katiba_F_Library0";
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\Khaybar\data\anim\katiba_gl.rtm"
		};
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			mass=111;
		};
		inertia=0.5;
		aimTransitionSpeed=0.80000001;
		dexterity=1.5;
		ACE_RailHeightAboveBore=5.7546802;
		ACE_IronSightBaseAngle=0.011459;
		ACE_barrelLength=508;
		ACE_barrelTwist=203.2;
		initSpeed=-1;
	};
	class arifle_Katiba_C_ACO_pointer_F: arifle_Katiba_C_F
	{
		_generalMacro="arifle_Katiba_C_ACO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Katiba_C_ACO_F: arifle_Katiba_C_F
	{
		_generalMacro="arifle_Katiba_C_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
		};
	};
	class arifle_Katiba_ACO_F: arifle_Katiba_F
	{
		_generalMacro="arifle_Katiba_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
		};
	};
	class arifle_Katiba_pointer_F: arifle_Katiba_F
	{
		_generalMacro="arifle_Katiba_pointer_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Katiba_ACO_pointer_F: arifle_Katiba_F
	{
		_generalMacro="arifle_Katiba_ACO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Katiba_ARCO_F: arifle_Katiba_F
	{
		_generalMacro="arifle_Katiba_ARCO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
		};
	};
	class arifle_Katiba_ARCO_pointer_F: arifle_Katiba_F
	{
		_generalMacro="arifle_Katiba_ARCO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Katiba_GL_ACO_F: arifle_Katiba_GL_F
	{
		_generalMacro="arifle_Katiba_GL_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
		};
	};
	class arifle_Katiba_GL_ARCO_pointer_F: arifle_Katiba_GL_F
	{
		_generalMacro="arifle_Katiba_GL_ARCO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Katiba_GL_ACO_pointer_F: arifle_Katiba_GL_F
	{
		_generalMacro="arifle_Katiba_GL_ACO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Katiba_GL_Nstalker_pointer_F: arifle_Katiba_GL_F
	{
		_generalMacro="arifle_Katiba_GL_Nstalker_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Nightstalker";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Katiba_GL_ACO_pointer_snds_F: arifle_Katiba_GL_F
	{
		_generalMacro="arifle_Katiba_GL_ACO_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_Katiba_C_ACO_pointer_snds_F: arifle_Katiba_C_F
	{
		_generalMacro="arifle_Katiba_C_ACO_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_Katiba_ACO_pointer_snds_F: arifle_Katiba_F
	{
		_generalMacro="arifle_Katiba_ACO_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_Katiba_ARCO_pointer_snds_F: arifle_Katiba_F
	{
		_generalMacro="arifle_Katiba_ARCO_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
		};
	};
	class mk20_base_F: Rifle_Base_F
	{
		_generalMacro="mk20_base_F";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_green",
			"hlc_30rnd_556x45_EPR",
			"hlc_30rnd_556x45_SOST",
			"hlc_30rnd_556x45_SPR",
			"hlc_30rnd_556x45_S",
			"hlc_30rnd_556x45_M",
			"hlc_30rnd_556x45_t",
			"hlc_30rnd_556x45_MDim",
			"hlc_30rnd_556x45_TDim",
			"hlc_50rnd_556x45_EPR",
			"hlc_50rnd_556x45_SOST",
			"hlc_50rnd_556x45_SPR",
			"hlc_50rnd_556x45_M",
			"hlc_50rnd_556x45_MDim",
			"hlc_30rnd_556x45_EPR_PMAG",
			"hlc_30rnd_556x45_SOST_PMAG",
			"hlc_30rnd_556x45_SPR_PMAG",
			"hlc_30rnd_556x45_S_PMAG",
			"hlc_30rnd_556x45_M_PMAG",
			"hlc_30rnd_556x45_t_PMAG",
			"hlc_30rnd_556x45_MDim_PMAG",
			"hlc_30rnd_556x45_TDim_PMAG",
			"hlc_30rnd_556x45_EPR_STANAGHD",
			"hlc_30rnd_556x45_SOST_STANAGHD",
			"hlc_30rnd_556x45_SPR_STANAGHD",
			"hlc_30rnd_556x45_S_STANAGHD",
			"hlc_30rnd_556x45_M_STANAGHD",
			"hlc_30rnd_556x45_t_STANAGHD",
			"hlc_30rnd_556x45_MDim_STANAGHD",
			"hlc_30rnd_556x45_TDim_STANAGHD",
			"hlc_30rnd_556x45_EPR_L5",
			"hlc_30rnd_556x45_SOST_L5",
			"hlc_30rnd_556x45_SPR_L5",
			"hlc_30rnd_556x45_S_L5",
			"hlc_30rnd_556x45_M_L5",
			"hlc_30rnd_556x45_t_L5",
			"hlc_30rnd_556x45_MDim_L5",
			"hlc_30rnd_556x45_TDim_L5",
			"hlc_30rnd_556x45_EPR_EMAG",
			"hlc_30rnd_556x45_SOST_EMAG",
			"hlc_30rnd_556x45_SPR_EMAG",
			"hlc_30rnd_556x45_S_EMAG",
			"hlc_30rnd_556x45_M_EMAG",
			"hlc_30rnd_556x45_t_EMAG",
			"hlc_30rnd_556x45_MDim_EMAG",
			"hlc_30rnd_556x45_TDim_EMAG"
		};
		magazineWell[]=
		{
			"STANAG_556x45",
			"CBA_556x45_STANAG"
		};
		magazineReloadSwitchPhase=0.40000001;
		reloadAction="GestureReloadMk20";
		recoil="recoil_mk20";
		maxZeroing=800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556
			{
				iconPosition[]={0,0.36000001};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[]={0.44999999,0.25};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.34999999,0.34999999};
				iconScale=0.25;
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="$STR_A3_CFGWEAPONS_MK20_BASE_F0";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_beta\rifles\mk20\data\Anim\mk20.rtm"
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2",
			"ACE_Burst_far"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\dry_Mk20",
			0.31622776,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\reload_Mk20",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_mk20_shot_soundset",
					"jsrs_5x56mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_mk20_shot_silenced_soundset",
					"jsrs_5x56mm_sd_reverb_soundset"
				};
			};
			dispersion=0.00116;
			recoil="recoil_single_mk20";
			recoilProne="recoil_single_prone_mk20";
			maxRange=300;
			maxRangeProbab=0.2;
			reloadTime=0.07;
			minRange=120;
			minRangeProbab=0.69999999;
			midRange=250;
			midRangeProbab=0.5;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_mk20_shot_soundset",
					"jsrs_5x56mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_mk20_shot_silenced_soundset",
					"jsrs_5x56mm_sd_reverb_soundset"
				};
			};
			dispersion=0.00116;
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			reloadTime=0.07;
			minRange=0;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=20;
			maxRange=150;
			burst="3 + round random 5";
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRangeProbab=0.2;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=600;
			minRange=120;
			maxRange=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.050000001;
			aiRateOfFire=7;
			aiRateOfFireDistance=800;
			minRange=200;
			maxRange=800;
		};
		class EGLM: UGL_F
		{
			useExternalOptic=0;
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload",
				0.79432821,
				1,
				10
			};
			cameraDir="OP_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadMk20UGL";
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
			minRange=400;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.2;
			maxRange=600;
			maxRangeProbab=0.2;
			burst="2 + round random 3";
		};
	};
	class arifle_Mk20_F: mk20_base_F
	{
		_generalMacro="arifle_Mk20_F";
		baseWeapon="arifle_Mk20_F";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_Mk20_Library0";
		};
		descriptionShort="$STR_A3_CFGWEAPONS_ARIFLE_MK201";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.44999999,0.25};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.34999999};
				iconScale=0.25;
			};
			mass=75;
		};
		inertia=0.40000001;
		aimTransitionSpeed=1.3;
		dexterity=1.6;
		class ItemInfo
		{
			priority=1;
		};
		ACE_RailHeightAboveBore=4.5725498;
		ACE_IronSightBaseAngle=0.0063029998;
		ACE_barrelLength=441.95999;
		ACE_barrelTwist=177.8;
		initSpeed=-0.99284899;
	};
	class arifle_Mk20_plain_F: arifle_Mk20_F
	{
		_generalMacro="arifle_Mk20_plain_F";
		baseWeapon="arifle_Mk20_plain_F";
		{
		};
	};
	class arifle_Mk20C_F: mk20_base_F
	{
		_generalMacro="arifle_Mk20C_F";
		baseWeapon="arifle_Mk20C_F";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_Mk20_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_arifle_Mk20C1";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0.1,0.36000001};
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.34999999};
				iconScale=0.25;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.44999999,0.25};
				iconScale=0.2;
			};
			mass=74;
		};
		inertia=0.30000001;
		aimTransitionSpeed=1.4;
		dexterity=1.7;
		recoil="recoil_mk20c";
		maxZeroing=600;
		class ItemInfo
		{
			priority=1;
			RMBhint="Mk20C";
			onHoverText="TODO Mk20C DSS";
		};
		class Single: Single
		{
			dispersion=0.00145;
			maxRangeProbab=0.30000001;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_mk20c_shot_soundset",
					"jsrs_5x56mm_reverb_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_mk20c_shot_silenced_soundset",
					"jsrs_5x56mm_sd_reverb_soundset"
				};
			};
			minRange=120;
			minRangeProbab=0.69999999;
			midRange=250;
			midRangeProbab=0.5;
			maxRange=350;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00145;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_mk20c_shot_soundset",
					"jsrs_5x56mm_reverb_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_mk20c_shot_silenced_soundset",
					"jsrs_5x56mm_sd_reverb_soundset"
				};
			};
			minRange=0;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00145;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=600;
			minRange=120;
			maxRange=550;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00145;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
			minRange=20;
			burst="3 + round random 5";
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundbullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		ACE_RailHeightAboveBore=4.41539;
		ACE_IronSightBaseAngle=0.001146;
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=400;
			minRange=300;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.2;
			maxRange=500;
			maxRangeProbab=0.2;
			burst="2 + round random 3";
		};
		ACE_barrelLength=406.39999;
		ACE_barrelTwist=177.8;
		initSpeed=-0.97429699;
	};
	class arifle_Mk20C_plain_F: arifle_Mk20C_F
	{
		_generalMacro="arifle_Mk20C_plain_F";
		baseWeapon="arifle_Mk20C_plain_F";
	class arifle_Mk20_GL_F: mk20_base_F
	{
		_generalMacro="arifle_Mk20_GL_F";
		baseWeapon="arifle_Mk20_GL_F";
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_Mk20_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_arifle_Mk20_GL1";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0.1,0.36000001};
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.34999999};
				iconScale=0.25;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.44999999,0.25};
				iconScale=0.2;
			};
			mass=105;
		};
		inertia=0.5;
		aimTransitionSpeed=1.3;
		dexterity=1.5;
		recoil="recoil_mk20c";
		maxZeroing=600;
		class ItemInfo
		{
			priority=1;
			RMBhint="Mk20 EGLM";
			onHoverText="TODO Mk20 EGLM DSS";
		};
		class Single: Single
		{
			dispersion=0.00145;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00145;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00145;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00145;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		weaponInfoType="RscWeaponZeroing";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_beta\Rifles\MK20\Data\Anim\mk20G.rtm"
		};
		ACE_RailHeightAboveBore=4.41539;
		ACE_IronSightBaseAngle=0.0057299999;
		ACE_barrelLength=406.39999;
		ACE_barrelTwist=177.8;
		initSpeed=-0.97429699;
	};
	class arifle_Mk20_GL_plain_F: arifle_Mk20_GL_F
	{
		_generalMacro="arifle_Mk20_GL_plain_F";
		baseWeapon="arifle_Mk20_GL_plain_F";
	};
	class arifle_Mk20C_ACO_F: arifle_Mk20C_F
	{
		_generalMacro="arifle_Mk20C_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_aco_grn";
			};
		};
	};
	class arifle_Mk20C_ACO_pointer_F: arifle_Mk20C_F
	{
		_generalMacro="arifle_Mk20C_ACO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_aco_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Mk20_pointer_F: arifle_Mk20_F
	{
		_generalMacro="arifle_Mk20_pointer_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Mk20_Holo_F: arifle_Mk20_F
	{
		_generalMacro="arifle_Mk20_Holo_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
		};
	};
	class arifle_Mk20_ACO_F: arifle_Mk20_F
	{
		_generalMacro="arifle_Mk20_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_aco_grn";
			};
		};
	};
	class arifle_Mk20_ACO_pointer_F: arifle_Mk20_F
	{
		_generalMacro="arifle_Mk20_ACO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_aco_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Mk20_MRCO_F: arifle_Mk20_F
	{
		_generalMacro="arifle_Mk20_MRCO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class arifle_Mk20_MRCO_plain_F: arifle_Mk20_plain_F
	{
		_generalMacro="arifle_Mk20_MRCO_plain_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class arifle_Mk20_MRCO_pointer_F: arifle_Mk20_F
	{
		_generalMacro="arifle_Mk20_MRCO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Mk20_GL_MRCO_pointer_F: arifle_Mk20_GL_F
	{
		_generalMacro="arifle_Mk20_GL_MRCO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_Mk20_GL_ACO_F: arifle_Mk20_GL_F
	{
		_generalMacro="arifle_Mk20_GL_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
		};
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		_generalMacro="arifle_MX_Base_F";
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag"
		};
		magazineWell[]=
		{
			"MX_65x39",
			"MX_65x39_Large",
			"CBA_65x39_MX",
			"CBA_65x39_MX_XL"
		};
		magazineReloadSwitchPhase=0.5;
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_XMX_Library0";
		};
		reloadAction="GestureReloadMX";
		recoil="recoil_mx";
		maxZeroing=1000;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_65
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
			class UnderBarrelSlot: UnderBarrelSlot_rail
			{
				iconPosition[]={0.2,0.69999999};
				iconScale=0.2;
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="$STR_A3_CfgWeapons_XM_base_F0";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\MX\data\Anim\mx.rtm"
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2",
			"ACE_Burst_far"
		};
		class Single: Mode_SemiAuto
		{
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00086999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_mx_shot_soundset",
					"jsrs_6x5mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_mx_shot_silenced_soundset",
					"jsrs_6x5mm_sd_reverb_soundset"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			reloadTime=0.075000003;
			minRange=120;
			minRangeProbab=0.69999999;
			midRange=300;
			midRangeProbab=0.5;
		};
		class FullAuto: Mode_FullAuto
		{
			dispersion=0.00086999999;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_mx_shot_soundset",
					"jsrs_6x5mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_mx_shot_silenced_soundset",
					"jsrs_6x5mm_sd_reverb_soundset"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			reloadTime=0.075000003;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			aiBurstTerminable=1;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=20;
			burst="3 + round random 5";
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=700;
			minRange=120;
			maxRange=700;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			showToPlayer=0;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.60000002;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=900;
			minRange=200;
			maxRange=900;
		};
		class GL_3GL_F: UGL_F
		{
			descriptionShort="$STR_A3_cfgweapons_3gl1";
			useExternalOptic=0;
			magazines[]=
			{
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell",
				"3Rnd_HE_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"3Rnd_UGL_FlareGreen_F",
				"3Rnd_UGL_FlareRed_F",
				"3Rnd_UGL_FlareYellow_F",
				"3Rnd_UGL_FlareCIR_F",
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_SmokeRed_Grenade_shell",
				"3Rnd_SmokeGreen_Grenade_shell",
				"3Rnd_SmokeYellow_Grenade_shell",
				"3Rnd_SmokePurple_Grenade_shell",
				"3Rnd_SmokeBlue_Grenade_shell",
				"3Rnd_SmokeOrange_Grenade_shell",
				"ACE_HuntIR_M203"
			};
			magazineWell[]=
			{
				"UGL_40x36",
				"3UGL_40x36",
				"CBA_40mm_3GL",
				"CBA_40mm_M203",
				"CBA_40mm_EGLM"
			};
			cameraDir="OP_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234133,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\Reload_Mx",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\firemode_Mx",
			0.17782794,
			1,
			5
		};
		ACE_clearJamAction="GestureReloadMX";
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
			minRange=400;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.2;
			maxRange=600;
			maxRangeProbab=0.2;
			burst="2 + round random 3";
		};
	};
	class arifle_MXC_F: arifle_MX_Base_F
	{
		_generalMacro="arifle_MXC_F";
		baseWeapon="arifle_MXC_F";
		reloadAction="GestureReloadMXCompact";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\MX\data\Anim\MX_cqc.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0,0.40000001};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.40000001};
			};
			class UnderBarrelSlot
			{
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.30000001};
				iconScale=0.2;
			};
			mass=72;
		};
		inertia=0.40000001;
		aimTransitionSpeed=1.2;
		dexterity=1.6;
		recoil="recoil_mxc";
		maxZeroing=800;
		class ItemInfo
		{
			priority=1;
		};
		descriptionShort="$STR_A3_CfgWeapons_arifle_XMX1";
		class Single: Single
		{
			dispersion=0.00116;
			maxRange=350;
			maxRangeProbab=0.1;
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_mxc_shot_soundset",
					"jsrs_6x5mm_reverb_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_mxc_shot_silenced_soundset",
					"jsrs_6x5mm_sd_reverb_soundset"
				};
			};
			minRange=120;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.30000001;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00116;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_mxc_shot_soundset",
					"jsrs_6x5mm_reverb_soundset"
				};
			};
			class silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_mxc_shot_silenced_soundset",
					"jsrs_6x5mm_sd_reverb_soundset"
				};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00116;
			showToPlayer=0;
			aiBurstTerminable=1;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=20;
			burst="3 + round random 5";
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00116;
			requiredOpticType=1;
			minRangeProbab=0.2;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=600;
			minRange=120;
			maxRange=600;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=7;
			aiRateOfFireDistance=700;
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		changeFiremodeSound[]=
		{
			"A3\sounds_f\weapons\closure\firemode_changer_2",
			0.17782794,
			1,
			5
		};
		ACE_RailHeightAboveBore=2.40874;
		ACE_IronSightBaseAngle=-0.0051569999;
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=400;
			minRange=300;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.2;
			maxRange=500;
			maxRangeProbab=0.2;
			burst="2 + round random 3";
		};
		class single_far_optics2: single_medium_optics1
		{
			aiRateOfFireDistance=800;
			minRange=200;
			maxRange=800;
		};
		ACE_barrelLength=266.70001;
		ACE_barrelTwist=203.2;
		initSpeed=-0.94638199;
	};
	class arifle_MX_F: arifle_MX_Base_F
	{
		_generalMacro="arifle_MX_F";
		baseWeapon="arifle_MX_F";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\MX\data\Anim\MX_afg.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.2,0.69999999};
				iconScale=0.2;
			};
			mass=79;
		};
		inertia=0.5;
		aimTransitionSpeed=1;
		dexterity=1.5;
		class ItemInfo
		{
			priority=1;
		};
		descriptionShort="$STR_A3_CfgWeapons_arifle_XMX1";
		ACE_RailHeightAboveBore=2.8020101;
		ACE_IronSightBaseAngle=-0.0051569999;
		ACE_barrelLength=368.29999;
		ACE_barrelTwist=228.60001;
		initSpeed=-0.97222197;
	};
	class arifle_MX_GL_F: arifle_MX_Base_F
	{
		_generalMacro="arifle_MX_GL_F";
		baseWeapon="arifle_MX_GL_F";
		weaponInfoType="RscWeaponZeroing";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\MX\data\Anim\MX_gl.rtm"
		};
		muzzles[]=
		{
			"this",
			"GL_3GL_F"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot
			{
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
			};
			mass=119;
		};
		inertia=0.60000002;
		aimTransitionSpeed=0.80000001;
		dexterity=1.4;
		class ItemInfo
		{
			priority=1;
			RMBhint="XMX 3GL";
			onHoverText="TODO XMX 3GL DSS";
		};
		descriptionShort="$STR_A3_CfgWeapons_arifle_XMX_GL1";
		ACE_RailHeightAboveBore=2.8020101;
		ACE_IronSightBaseAngle=-0.0057299999;
		ACE_barrelLength=368.29999;
		ACE_barrelTwist=228.60001;
		initSpeed=-0.97222197;
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		_generalMacro="arifle_MX_SW_F";
		nameSound="Mgun";
		magazines[]=
		{
			"100Rnd_65x39_caseless_mag"
		};
		cursor="mg";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_65MG
			{
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.2,0.69999999};
				iconScale=0.2;
			};
			mass=81;
		};
		inertia=0.60000002;
		aimTransitionSpeed=0.80000001;
		dexterity=1.4;
		recoil="recoil_sw";
		maxZeroing=1200;
		class Single: Mode_SemiAuto
		{
			reloadTime=0.079999998;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00073000003;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_mx_shot_soundset",
					"jsrs_6x5mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_mx_shot_silenced_soundset",
					"jsrs_6x5mm_sd_reverb_soundset"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			minRange=120;
		};
		class ItemInfo
		{
			priority=1;
			RMBhint="XMSW";
			onHoverText="TODO XMSW DSS";
		};
		modes[]=
		{
			"Single",
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2",
			"ACE_Burst_far"
		};
		class manual: FullAuto
		{
			reloadTime=0.079999998;
			dispersion=0.00073000003;
			recoilProne="recoil_single_prone_mx_sw";
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_mx_shot_soundset",
					"jsrs_6x5mm_reverb_soundset"
				};
			};
			class SilencedSound
			{
				soundSetShot[]=
				{
					"jsrs_mx_shot_silenced_soundset",
					"jsrs_6x5mm_sd_reverb_soundset"
				};
			};
		};
		class close: manual
		{
			burst=10;
			aiBurstTerminable=1;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiBurstTerminable=1;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=5;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: close
		{
			burst=3;
			requiredOpticType=1;
			aiRateOfFire=5;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRangeProbab=0.0099999998;
			aiRateOfFireDistance=750;
			maxRange=750;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			maxRange=1100;
			aiRateOfFireDistance=1100;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		descriptionShort="$STR_A3_CfgWeapons_arifle_XM_LSW1";
		baseWeapon="arifle_MX_SW_F";
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
		ACE_clearJamAction="";
		ace_overheating_allowSwapBarrel=1;
		ace_overheating_dispersion=0.75;
		ACE_RailHeightAboveBore=2.40874;
		ACE_IronSightBaseAngle=-0.004011;
		class ACE_Burst_far: medium
		{
			aiRateOfFire=6;
			aiRateOfFireDistance=900;
			minRange=500;
			minRangeProbab=0.1;
			midRange=700;
			midRangeProbab=0.2;
			maxRange=900;
			maxRangeProbab=0.2;
			burst="3 + round random 5";
		};
		ACE_barrelLength=406.39999;
		ACE_barrelTwist=228.60001;
		initSpeed=-0.98191202;
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		_generalMacro="arifle_MXM_F";
		baseWeapon="arifle_MXM_F";
		reloadAction="GestureReloadMXSniper";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"
		};
		class Single: Single
		{
			dispersion=0.00073000003;
			maxRange=450;
			maxRangeProbab=0.30000001;
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_mxm_shot_soundset",
					"jsrs_6x5mm_reverb_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_mxm_shot_silenced_soundset",
					"jsrs_6x5mm_sd_reverb_soundset"
				};
			};
			minRange=120;
			minRangeProbab=0.69999999;
			midRange=350;
			midRangeProbab=0.5;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00073000003;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			sounds[]=
			{
				"standardsound",
				"silencedsound"
			};
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_mxm_shot_soundset",
					"jsrs_6x5mm_reverb_soundset"
				};
			};
			class silencedsound
			{
				soundsetshot[]=
				{
					"jsrs_mxm_shot_silenced_soundset",
					"jsrs_6x5mm_sd_reverb_soundset"
				};
			};
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00073000003;
			showToPlayer=0;
			aiBurstTerminable=1;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=20;
			burst="3 + round random 5";
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00073000003;
			requiredOpticType=1;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=700;
			minRange=120;
			maxRange=750;
		};
		class single_far_optics2: single_far_optics2
		{
			dispersion=0.00073000003;
			requiredOpticType=2;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=900;
			minRange=200;
			maxRange=900;
		};
		class ItemInfo
		{
			priority=1;
			RMBhint="XMM";
			onHoverText="TODO XMM DSS";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0,0.40000001};
			};
			allowedSlots[]={};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.2,0.69999999};
				iconScale=0.2;
			};
			mass=85;
		};
		inertia=0.60000002;
		aimTransitionSpeed=0.80000001;
		dexterity=1.4;
		recoil="recoil_mxm";
		maxZeroing=1400;
		descriptionShort="$STR_A3_CfgWeapons_arifle_XMM1";
		ACE_RailHeightAboveBore=2.40323;
		ACE_IronSightBaseAngle=-0.004011;
		ACE_barrelLength=457.20001;
		ACE_barrelTwist=228.60001;
		initSpeed=-1;
		magazines[]=
		{
			"ACE_30Rnd_65_Creedmor_mag",
			"ACE_30Rnd_65x47_Scenar_mag",
			"ACE_30Rnd_65_Creedmor_black_mag",
			"ACE_30Rnd_65_Creedmor_khaki_mag",
			"ACE_30Rnd_65x47_Scenar_black_mag",
			"ACE_30Rnd_65x47_Scenar_khaki_mag"
		};
	};
	class arifle_MX_pointer_F: arifle_MX_F
	{
		_generalMacro="arifle_MX_pointer_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_Holo_pointer_F: arifle_MX_F
	{
		_generalMacro="arifle_MX_Holo_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_Hamr_pointer_F: arifle_MX_F
	{
		_generalMacro="arifle_MX_Hamr_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_ACO_pointer_F: arifle_MX_F
	{
		_generalMacro="arifle_MX_ACO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_ACO_F: arifle_MX_F
	{
		_generalMacro="arifle_MX_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class arifle_MX_GL_ACO_F: arifle_MX_GL_F
	{
		_generalMacro="arifle_MX_GL_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class arifle_MX_GL_ACO_pointer_F: arifle_MX_GL_F
	{
		_generalMacro="arifle_MX_GL_ACO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_GL_Hamr_pointer_F: arifle_MX_GL_F
	{
		_generalMacro="arifle_MX_GL_Hamr_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MXC_Holo_F: arifle_MXC_F
	{
		_generalMacro="arifle_MXC_Holo_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
		};
	};
	class arifle_MXC_Holo_pointer_F: arifle_MXC_F
	{
		_generalMacro="arifle_MXC_Holo_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_SW_pointer_F: arifle_MX_SW_F
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
		};
		baseWeapon="arifle_MX_SW_F";
		_generalMacro="arifle_MX_SW_pointer_F";
	};
	class arifle_MX_SW_Hamr_pointer_F: arifle_MX_SW_F
	{
		_generalMacro="arifle_MX_SW_Hamr_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MXM_Hamr_pointer_F: arifle_MXM_F
	{
		_generalMacro="arifle_MXM_Hamr_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MXC_ACO_F: arifle_MXC_F
	{
		_generalMacro="arifle_MXC_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class arifle_MXC_Holo_pointer_snds_F: arifle_MXC_F
	{
		_generalMacro="arifle_MXC_Holo_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MXC_SOS_point_snds_F: arifle_MXC_F
	{
		_generalMacro="arifle_MXC_SOS_point_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_MXC_ACO_pointer_snds_F: arifle_MXC_F
	{
		_generalMacro="arifle_MXC_ACO_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_MXC_ACO_pointer_F: arifle_MXC_F
	{
		_generalMacro="arifle_MXC_ACO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_ACO_pointer_snds_F: arifle_MX_F
	{
		_generalMacro="arifle_MX_ACO_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_MX_RCO_pointer_snds_F: arifle_MX_F
	{
		_generalMacro="arifle_MX_RCO_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_MX_GL_Holo_pointer_snds_F: arifle_MX_GL_F
	{
		_generalMacro="arifle_MX_GL_Holo_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_MXM_SOS_pointer_F: arifle_MXM_F
	{
		_generalMacro="arifle_MXM_SOS_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MXM_RCO_pointer_snds_F: arifle_MXM_F
	{
		_generalMacro="arifle_MXM_RCO_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ARCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_H";
			};
		};
	};
	class arifle_MXM_DMS_F: arifle_MXM_F
	{
		_generalMacro="arifle_MXM_DMS_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
		};
	};
	class arifle_MXC_Black_F: arifle_MXC_F
	{
		baseWeapon="arifle_MXC_Black_F";
		_generalMacro="arifle_MXC_Black_F";
		{
			"30Rnd_65x39_caseless_black_mag"
		};
	};
	class arifle_MX_Black_F: arifle_MX_F
	{
		baseWeapon="arifle_MX_Black_F";
		_generalMacro="arifle_MX_Black_F";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
	};
	class arifle_MX_GL_Black_F: arifle_MX_GL_F
	{
		baseWeapon="arifle_MX_GL_Black_F";
		_generalMacro="arifle_MX_GL_Black_F";
		magazines[]=
		{
			"30Rnd_65x39_caseless_black_mag"
		};
	};
	class arifle_MX_SW_Black_F: arifle_MX_SW_F
	{
		_generalMacro="arifle_MX_SW_Black_F";
		{
			"100Rnd_65x39_caseless_black_mag"
		};
		baseWeapon="arifle_MX_SW_Black_F";
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class arifle_MXM_Black_F: arifle_MXM_F
	{
		baseWeapon="arifle_MXM_Black_F";
		_generalMacro="arifle_MXM_Black_F";
		{
			"ACE_30Rnd_65_Creedmor_mag",
			"ACE_30Rnd_65x47_Scenar_mag",
			"ACE_30Rnd_65_Creedmor_black_mag",
			"ACE_30Rnd_65_Creedmor_khaki_mag",
			"ACE_30Rnd_65x47_Scenar_black_mag",
			"ACE_30Rnd_65x47_Scenar_khaki_mag"
		};
	};
	class arifle_MX_GL_Black_Hamr_pointer_F: arifle_MX_GL_Black_F
	{
		_generalMacro="arifle_MX_GL_Black_Hamr_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_Black_Hamr_pointer_F: arifle_MX_Black_F
	{
		_generalMacro="arifle_MX_Black_Hamr_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_MX_SW_Black_Hamr_pointer_F: arifle_MX_SW_Black_F
	{
		_generalMacro="arifle_MX_SW_Black_Hamr_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class SDAR_base_F: Rifle_Base_F
	{
		_generalMacro="SDAR_base_F";
		magazines[]=
		{
			"20Rnd_556x45_UW_mag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"hlc_30rnd_556x45_EPR",
			"hlc_30rnd_556x45_SOST",
			"hlc_30rnd_556x45_SPR",
			"hlc_30rnd_556x45_S",
			"hlc_30rnd_556x45_M",
			"hlc_30rnd_556x45_t",
			"hlc_30rnd_556x45_MDim",
			"hlc_30rnd_556x45_TDim",
			"hlc_50rnd_556x45_EPR",
			"hlc_50rnd_556x45_SOST",
			"hlc_50rnd_556x45_SPR",
			"hlc_50rnd_556x45_M",
			"hlc_50rnd_556x45_MDim",
			"hlc_30rnd_556x45_EPR_PMAG",
			"hlc_30rnd_556x45_SOST_PMAG",
			"hlc_30rnd_556x45_SPR_PMAG",
			"hlc_30rnd_556x45_S_PMAG",
			"hlc_30rnd_556x45_M_PMAG",
			"hlc_30rnd_556x45_t_PMAG",
			"hlc_30rnd_556x45_MDim_PMAG",
			"hlc_30rnd_556x45_TDim_PMAG",
			"hlc_30rnd_556x45_EPR_STANAGHD",
			"hlc_30rnd_556x45_SOST_STANAGHD",
			"hlc_30rnd_556x45_SPR_STANAGHD",
			"hlc_30rnd_556x45_S_STANAGHD",
			"hlc_30rnd_556x45_M_STANAGHD",
			"hlc_30rnd_556x45_t_STANAGHD",
			"hlc_30rnd_556x45_MDim_STANAGHD",
			"hlc_30rnd_556x45_TDim_STANAGHD",
			"hlc_30rnd_556x45_EPR_L5",
			"hlc_30rnd_556x45_SOST_L5",
			"hlc_30rnd_556x45_SPR_L5",
			"hlc_30rnd_556x45_S_L5",
			"hlc_30rnd_556x45_M_L5",
			"hlc_30rnd_556x45_t_L5",
			"hlc_30rnd_556x45_MDim_L5",
			"hlc_30rnd_556x45_TDim_L5",
			"hlc_30rnd_556x45_EPR_EMAG",
			"hlc_30rnd_556x45_SOST_EMAG",
			"hlc_30rnd_556x45_SPR_EMAG",
			"hlc_30rnd_556x45_S_EMAG",
			"hlc_30rnd_556x45_M_EMAG",
			"hlc_30rnd_556x45_t_EMAG",
			"hlc_30rnd_556x45_MDim_EMAG",
			"hlc_30rnd_556x45_TDim_EMAG"
		};
		magazineWell[]=
		{
			"STANAG_556x45",
			"CBA_556x45_STANAG"
		};
		reloadAction="GestureReloadSDAR";
		recoil="recoil_sdar";
		maxZeroing=800;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				effectName="ShotUnderwater";
				positionName="usti hlavne";
				directionName="konec hlavne";
			};
		};
		descriptionShort="$STR_A3_CfgWeapons_SDAR_base_F0";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\weapons_f\Rifles\SDAR\data\Anim\SDAR.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
			};
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		distanceZoomMin=30;
		distanceZoomMax=30;
		discreteDistance[]={30,100,200,300,400};
		discreteDistanceInitIndex=0;
		canShootInWater=1;
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\Dry_SDAR",
			0.39810717,
			1,
			15
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\reload_sdar",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\firemode_SDAR",
			0.25118864,
			1,
			5
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_02",
					0.50118721,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_01",
					3.1622777,
					1,
					1400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_02",
					3.1622777,
					1,
					1400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_03",
					3.1622777,
					1,
					1400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
				beginwater1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
					1,
					1,
					400
				};
				beginwater2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
					1,
					1,
					400
				};
				beginwater3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					0.33000001,
					"beginwater2",
					0.33000001,
					"beginwater3",
					0.34
				};
				SoundSetShot[]=
				{
					"jsrs_uwg_shot_soundset",
					"jsrs_5x56mm_reverb_soundset"
				};
			};
			reloadTime=0.1;
			recoil="recoil_single_sdar";
			recoilProne="recoil_single_prone_sdar";
			dispersion=0.00131;
			minRangeProbab=0.30000001;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=35;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=20;
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_uwg_shot_silenced_soundset",
					"jsrs_5x56mm_sd_reverb_soundset"
				};
			};
			minRange=10;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_02",
					0.50118721,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_01",
					3.1622777,
					1,
					1400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_02",
					3.1622777,
					1,
					1400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_03",
					3.1622777,
					1,
					1400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
				beginwater1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
					1,
					1,
					400
				};
				beginwater2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
					1,
					1,
					400
				};
				beginwater3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					0.33000001,
					"beginwater2",
					0.33000001,
					"beginwater3",
					0.34
				};
				SoundSetShot[]=
				{
					"jsrs_uwg_shot_soundset",
					"jsrs_5x56mm_reverb_soundset"
				};
			};
			soundBurst=0;
			burst=3;
			reloadTime=0.090000004;
			recoil="recoil_burst_sdar";
			recoilProne="recoil_burst_prone_sdar";
			dispersion=0.00131;
			minRangeProbab=0.30000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=15;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_uwg_shot_silenced_soundset",
					"jsrs_5x56mm_sd_reverb_soundset"
				};
			};
			minRange=5;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_01",
					0.50118721,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\closure_SDAR_02",
					0.50118721,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_01",
					3.1622777,
					1,
					1400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_02",
					3.1622777,
					1,
					1400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_short_03",
					3.1622777,
					1,
					1400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\SDAR_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
				beginwater1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_01",
					1,
					1,
					400
				};
				beginwater2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_02",
					1,
					1,
					400
				};
				beginwater3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\SDAR\underwater_sdar_03",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					0.33000001,
					"beginwater2",
					0.33000001,
					"beginwater3",
					0.34
				};
				SoundSetShot[]=
				{
					"jsrs_uwg_shot_soundset",
					"jsrs_5x56mm_reverb_soundset"
				};
			};
			reloadTime=0.079999998;
			recoil="recoil_auto_sdar";
			recoilProne="recoil_auto_prone_sdar";
			dispersion=0.00131;
			minRange=0;
			minRangeProbab=0.1;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.050000001;
			aiRateOfFire=0.2;
			aiRateOfFireDistance=5;
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_uwg_shot_silenced_soundset",
					"jsrs_5x56mm_sd_reverb_soundset"
				};
			};
		};
		aiDispersionCoefY=14;
		aiDispersionCoefX=10;
	};
	class arifle_SDAR_F: SDAR_base_F
	{
		_generalMacro="arifle_SDAR_F";
		baseWeapon="arifle_SDAR_F";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
		};
		inertia=0.40000001;
		aimTransitionSpeed=1.4;
		dexterity=1.6;
		descriptionShort="$STR_A3_CfgWeapons_arifle_SDAR1";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_SDAR_Library0";
		};
		ACE_RailHeightAboveBore=0;
		ACE_IronSightBaseAngle=-0.042971998;
		ACE_barrelLength=457.20001;
		ACE_barrelTwist=285.75;
		initSpeed=-0.998321;
	};
	class Tavor_base_F: Rifle_Base_F
	{
		_generalMacro="Tavor_base_F";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_green",
			"hlc_30rnd_556x45_EPR",
			"hlc_30rnd_556x45_SOST",
			"hlc_30rnd_556x45_SPR",
			"hlc_30rnd_556x45_S",
			"hlc_30rnd_556x45_M",
			"hlc_30rnd_556x45_t",
			"hlc_30rnd_556x45_MDim",
			"hlc_30rnd_556x45_TDim",
			"hlc_50rnd_556x45_EPR",
			"hlc_50rnd_556x45_SOST",
			"hlc_50rnd_556x45_SPR",
			"hlc_50rnd_556x45_M",
			"hlc_50rnd_556x45_MDim",
			"hlc_30rnd_556x45_EPR_PMAG",
			"hlc_30rnd_556x45_SOST_PMAG",
			"hlc_30rnd_556x45_SPR_PMAG",
			"hlc_30rnd_556x45_S_PMAG",
			"hlc_30rnd_556x45_M_PMAG",
			"hlc_30rnd_556x45_t_PMAG",
			"hlc_30rnd_556x45_MDim_PMAG",
			"hlc_30rnd_556x45_TDim_PMAG",
			"hlc_30rnd_556x45_EPR_STANAGHD",
			"hlc_30rnd_556x45_SOST_STANAGHD",
			"hlc_30rnd_556x45_SPR_STANAGHD",
			"hlc_30rnd_556x45_S_STANAGHD",
			"hlc_30rnd_556x45_M_STANAGHD",
			"hlc_30rnd_556x45_t_STANAGHD",
			"hlc_30rnd_556x45_MDim_STANAGHD",
			"hlc_30rnd_556x45_TDim_STANAGHD",
			"hlc_30rnd_556x45_EPR_L5",
			"hlc_30rnd_556x45_SOST_L5",
			"hlc_30rnd_556x45_SPR_L5",
			"hlc_30rnd_556x45_S_L5",
			"hlc_30rnd_556x45_M_L5",
			"hlc_30rnd_556x45_t_L5",
			"hlc_30rnd_556x45_MDim_L5",
			"hlc_30rnd_556x45_TDim_L5",
			"hlc_30rnd_556x45_EPR_EMAG",
			"hlc_30rnd_556x45_SOST_EMAG",
			"hlc_30rnd_556x45_SPR_EMAG",
			"hlc_30rnd_556x45_S_EMAG",
			"hlc_30rnd_556x45_M_EMAG",
			"hlc_30rnd_556x45_t_EMAG",
			"hlc_30rnd_556x45_MDim_EMAG",
			"hlc_30rnd_556x45_TDim_EMAG"
		};
		magazineWell[]=
		{
			"STANAG_556x45",
			"CBA_556x45_STANAG",
			"CBA_556x45_STANAG_L",
			"CBA_556x45_STANAG_XL",
			"CBA_556x45_STANAG_2D"
		};
		magazineReloadSwitchPhase=0.47999999;
		reloadAction="GestureReloadTRG";
		recoil="recoil_trg20";
		maxZeroing=800;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21.rtm"
		};
		descriptionShort="$STR_A3_CFGWEAPONS_MK20_BASE_F0";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_556
			{
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.25,0.40000001};
				iconScale=0.25;
			};
		};
		opticsPPEffects[]=
		{
			"Default"
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_medium_optics2",
			"fullauto_medium",
			"ACE_Burst_far"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Dry_TRG20",
			0.39810717,
			1,
			15
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\firemode_TRG20",
			0.17782794,
			1,
			5
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Reload_TRG20",
			1,
			1,
			10
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_trg20_shot_soundset",
					"jsrs_5x56mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_5x56mm_sd_reverb_soundset"
				};
			};
			dispersion=0.00116;
			recoil="recoil_single_trg";
			recoilProne="recoil_single_prone_trg";
			maxRangeProbab=0.2;
			reloadTime=0.07;
			minRange=120;
			minRangeProbab=0.69999999;
			midRange=250;
			midRangeProbab=0.5;
			maxRange=350;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_trg20_shot_soundset",
					"jsrs_5x56mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_5x56mm_sd_reverb_soundset"
				};
			};
			dispersion=0.00116;
			recoil="recoil_auto_trg";
			recoilProne="recoil_auto_prone_trg";
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
			reloadTime=0.07;
			minRange=0;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer=0;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			minRange=20;
			maxRange=150;
			burst="3 + round random 5";
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=600;
			minRange=120;
			maxRange=550;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=700;
			minRange=200;
			maxRange=700;
		};
		class EGLM: UGL_F
		{
			useExternalOptic=0;
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_UGL_reload",
				0.79432821,
				1,
				10
			};
			cameraDir="OP_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadTrgUGL";
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=400;
			minRange=300;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.2;
			maxRange=500;
			maxRangeProbab=0.2;
			burst="2 + round random 3";
		};
	};
	class arifle_TRG21_F: Tavor_base_F
	{
		_generalMacro="arifle_TRG21_F";
		baseWeapon="arifle_TRG21_F";
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_TRG21_GL_Library0";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.25,0.40000001};
				iconScale=0.25;
			};
			mass=72;
		};
		class ItemInfo
		{
			priority=1;
		};
		inertia=0.40000001;
		aimTransitionSpeed=1.3;
		dexterity=1.6;
		recoil="recoil_trg21";
		class Single: Single
		{
			dispersion=0.00086999999;
			maxRangeProbab=0.30000001;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_trg21_shot_soundset",
					"jsrs_5x56mm_reverb_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_5x56mm_sd_reverb_soundset"
				};
			};
			minRange=120;
			minRangeProbab=0.69999999;
			midRange=300;
			midRangeProbab=0.5;
			maxRange=400;
		};
		class FullAuto: FullAuto
		{
			dispersion=0.00086999999;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
			class standardsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_trg21_shot_soundset",
					"jsrs_5x56mm_reverb_soundset"
				};
			};
			class silencedsound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_trg20_shot_silenced_soundset",
					"jsrs_5x56mm_sd_reverb_soundset"
				};
			};
			minRange=0;
		};
		class fullauto_medium: fullauto_medium
		{
			dispersion=0.00086999999;
			showToPlayer=0;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			minRange=20;
			maxRange=150;
			burst="3 + round random 5";
		};
		class single_medium_optics1: single_medium_optics1
		{
			dispersion=0.00086999999;
			minRangeProbab=0.2;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=700;
			minRange=120;
			maxRange=600;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRangeProbab=0.050000001;
			aiRateOfFire=7;
			aiRateOfFireDistance=800;
			minRange=200;
			maxRange=800;
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundbullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		ACE_RailHeightAboveBore=4.3095398;
		ACE_IronSightBaseAngle=0.002292;
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=400;
			minRange=300;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.2;
			maxRange=500;
			maxRangeProbab=0.2;
			burst="2 + round random 3";
		};
		ACE_barrelLength=459.73999;
		ACE_barrelTwist=177.8;
		initSpeed=-1;
	};
	class arifle_TRG20_F: Tavor_base_F
	{
		_generalMacro="arifle_TRG20_F";
		baseWeapon="arifle_TRG20_F";
		{
			libTextDesc="$str_a3_cfgweapons_arifle_trg21_gl_library0";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[]={0.1,0.40000001};
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.25,0.40000001};
				iconScale=0.25;
			};
			mass=70;
		};
		class ItemInfo
		{
			priority=1;
		};
		inertia=0.30000001;
		aimTransitionSpeed=1.4;
		dexterity=1.7;
		maxZeroing=600;
		ACE_RailHeightAboveBore=4.3095398;
		ACE_IronSightBaseAngle=0.002292;
		ACE_barrelLength=381;
		ACE_barrelTwist=177.8;
		initSpeed=-0.961496;
	};
	class arifle_TRG21_GL_F: arifle_TRG21_F
	{
		_generalMacro="arifle_TRG21_GL_F";
		baseWeapon="arifle_TRG21_GL_F";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21G.rtm"
		};
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		descriptionShort="$STR_A3_CfgWeapons_arifle_TRG21_GL1";
		};
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_TRG21_GL_Library0";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=102;
		};
		class ItemInfo
		{
			priority=1;
			RMBhint="TRG-21 EGLM";
			onHoverText="TODO TRG-21 EGLM DSS";
		};
		inertia=0.5;
		aimTransitionSpeed=1.2;
		dexterity=1.5;
		recoil="recoil_trg21";
		ACE_RailHeightAboveBore=4.3095398;
		ACE_IronSightBaseAngle=-0.014424;
		initSpeed=-1;
	};
	class arifle_TRG20_Holo_F: arifle_TRG20_F
	{
		_generalMacro="arifle_TRG20_Holo_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
		};
	};
	class arifle_TRG20_ACO_pointer_F: arifle_TRG20_F
	{
		_generalMacro="arifle_TRG20_ACO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_TRG20_ACO_Flash_F: arifle_TRG20_F
	{
		_generalMacro="arifle_TRG20_ACO_Flash_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class arifle_TRG20_ACO_F: arifle_TRG20_F
	{
		_generalMacro="arifle_TRG20_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
		};
	};
	class arifle_TRG21_ACO_pointer_F: arifle_TRG21_F
	{
		_generalMacro="arifle_TRG21_ACO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_TRG21_ARCO_pointer_F: arifle_TRG21_F
	{
		_generalMacro="arifle_TRG21_ARCO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_arco";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class arifle_TRG21_MRCO_F: arifle_TRG21_F
	{
		_generalMacro="arifle_TRG21_MRCO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class arifle_TRG21_GL_MRCO_F: arifle_TRG21_GL_F
	{
		_generalMacro="arifle_TRG21_GL_MRCO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRCO";
			};
		};
	};
	class arifle_TRG21_GL_ACO_pointer_F: arifle_TRG21_GL_F
	{
		_generalMacro="arifle_TRG21_GL_ACO_pointer_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		_generalMacro="pdw2000_base_F";
		magazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Red_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_red_Mag",
			"16Rnd_9x21_green_Mag",
			"16Rnd_9x21_yellow_Mag"
		};
		maxZeroing=400;
		discreteDistance[]={100,200};
		discreteDistanceInitIndex=0;
		descriptionShort="$STR_A3_CfgWeapons_pdw2000_base_F0";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Gamma\Smgs\pdw2000\data\Anim\SMG_03.rtm"
		};
		reloadAction="GestureReloadSMG_03";
		recoil="recoil_pdw";
		distanceZoomMin=50;
		distanceZoomMax=50;
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",
			0.39810717,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",
			0.39810717,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",
			0.39810717,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",
			0.39810717,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Dry_pdw2000",
			0.099999994,
			1,
			20
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Firemode_pdw2000",
			0.25118864,
			1,
			5
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Reload_pdw2000",
			1,
			1,
			10
		};
			"camo3"
		};
			"\a3\weapons_f_gamma\smgs\pdw2000\data\pdw2000_co"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SMGPDW2000_Shot_SoundSet",
					"SMGPDW2000_Tail_SoundSet",
					"SMGPDW2000_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SMGPDW2000_silencerShot_SoundSet",
					"SMGPDW2000_silencerTail_SoundSet",
					"SMGPDW2000_silencerInteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_pdw";
			recoilProne="recoil_single_prone_pdw";
			dispersion=0.0020300001;
			minRangeProbab=0.30000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
			reloadTime=0.059999999;
			minRange=100;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SMGPDW2000_Shot_SoundSet",
					"SMGPDW2000_Tail_SoundSet",
					"SMGPDW2000_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SMGPDW2000_silencerShot_SoundSet",
					"SMGPDW2000_silencerTail_SoundSet",
					"SMGPDW2000_silencerInteriorTail_SoundSet"
				};
			};
			soundBurst=0;
			burst=3;
			reloadTime=0.054499999;
			recoil="recoil_burst_pdw";
			recoilProne="recoil_burst_prone_pdw";
			dispersion=0.0020300001;
			minRangeProbab=0.30000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=250;
			minRange=50;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SMGPDW2000_Shot_SoundSet",
					"SMGPDW2000_Tail_SoundSet",
					"SMGPDW2000_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"SMGPDW2000_silencerShot_SoundSet",
					"SMGPDW2000_silencerTail_SoundSet",
					"SMGPDW2000_silencerInteriorTail_SoundSet"
				};
			};
			recoil="recoil_auto_pdw";
			recoilProne="recoil_auto_prone_pdw";
			dispersion=0.0020300001;
			minRange=0;
			minRangeProbab=0.1;
			midRange=25;
			midRangeProbab=0.69999999;
			maxRange=70;
			maxRangeProbab=0.050000001;
			aiRateOfFire=0.2;
			aiRateOfFireDistance=50;
			reloadTime=0.059999999;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_9mm
			{
				iconPosition[]={0.1,0.41};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[]={0.40000001,0.31999999};
				iconScale=0.15000001;
			};
			class PointerSlot
			{
			};
		};
		ACE_RailHeightAboveBore=3.08883;
		ACE_RailBaseAngle=0.019366;
		ACE_IronSightBaseAngle=0.0097399997;
	};
	class hgun_PDW2000_F: pdw2000_base_F
	{
		_generalMacro="hgun_PDW2000_F";
		baseWeapon="hgun_PDW2000_F";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG
			{
				iconPosition[]={0.1,0.41};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.40000001,0.31999999};
				iconScale=0.15000001;
			};
			mass=33;
		};
		inertia=0.2;
		aimTransitionSpeed=1.5;
		dexterity=1.8;
		class ItemInfo
		{
			priority=2;
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_hgun_PDW2000_Library0";
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundbullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class single: Mode_SemiAuto
		{
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pdw2000_shot_soundset",
					"jsrs_9mm_reverb_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_9mm_sd_reverb_soundset"
				};
			};
		};
		class burst: Mode_Burst
		{
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pdw2000_shot_soundset",
					"jsrs_9mm_reverb_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_9mm_sd_reverb_soundset"
				};
			};
		};
		class fullauto: Mode_FullAuto
		{
			class basesoundmodetype
			{
			};
			class standardsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pdw2000_shot_soundset",
					"jsrs_9mm_reverb_soundset"
				};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[]=
				{
					"jsrs_pdw2000_shot_silenced_soundset",
					"jsrs_9mm_sd_reverb_soundset"
				};
			};
		};
		ACE_barrelLength=177.8;
		ACE_barrelTwist=228.60001;
		initSpeed=-0.99418598;
	};
	class hgun_PDW2000_snds_F: hgun_PDW2000_F
	{
		_generalMacro="hgun_PDW2000_snds_F";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class hgun_PDW2000_Holo_F: hgun_PDW2000_F
	{
		_generalMacro="hgun_PDW2000_Holo_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_smg";
			};
		};
	};
	class hgun_PDW2000_Holo_snds_F: hgun_PDW2000_F
	{
		_generalMacro="hgun_PDW2000_Holo_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_smg";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		_generalMacro="SMG_01_Base";
		magazines[]=
		{
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"
		};
		maxZeroing=400;
		reloadAction="GestureReloadSMG_01";
		recoil="recoil_smg_01";
		cursor="smg";
		discreteDistance[]={100,200};
		discreteDistanceInitIndex=0;
		aiDispersionCoefY=8;
		aiDispersionCoefX=9;
		};
		};
		descriptionShort="$str_a3_cfgweapons_smg_011";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_beta\Smgs\SMG_01\data\Anim\SMG_01.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_45ACP
			{
				iconPosition[]={0.1,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[]={0.40000001,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				compatibleItems[]=
				{
					"acc_flashlight_smg_01"
				};
				iconPosition[]={0.1,0.40000001};
				iconScale=0.2;
			};
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		distanceZoomMin=100;
		distanceZoomMax=100;
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Dry_Vermin",
			0.50118721,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\SMG\Vermin\reload_vermin",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\SMG\Vermin\firemode_Vermin",
			0.25118864,
			1,
			5
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_smg45_shot_soundset",
					"jsrs_cal45_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_smg45_shot_silenced_soundset",
					"jsrs_cal45_sd_reverb_soundset"
				};
			};
			dispersion=0.00131;
			recoil="recoil_single_SMG_01";
			recoilProne="recoil_single_prone_SMG_01";
			minRangeProbab=0.30000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			reloadTime=0.050000001;
			minRange=50;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_smg45_shot_soundset",
					"jsrs_cal45_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_smg45_shot_silenced_soundset",
					"jsrs_cal45_sd_reverb_soundset"
				};
			};
			soundBurst=0;
			textureType="dual";
			dispersion=0.00131;
			recoil="recoil_burst_smg_01";
			recoilProne="recoil_burst_prone_smg_01";
			minRangeProbab=0.30000001;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=250;
			burst=2;
			reloadTime=0.050000001;
			minRange=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_smg45_shot_soundset",
					"jsrs_cal45_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_smg45_shot_silenced_soundset",
					"jsrs_cal45_sd_reverb_soundset"
				};
			};
			dispersion=0.00131;
			recoil="recoil_auto_smg_01";
			recoilProne="recoil_auto_prone_smg_01";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			aiRateOfFireDistance=50;
			reloadTime=0.050000001;
		};
		magazineWell[]=
		{
			"CBA_45ACP_Glock_Full"
		};
		ACE_RailHeightAboveBore=4.85355;
		ACE_RailBaseAngle=0.025095601;
		ACE_IronSightBaseAngle=0.018908;
	};
	class SMG_01_F: SMG_01_Base
	{
		_generalMacro="SMG_01_F";
		baseWeapon="SMG_01_F";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_45ACP_SMG
			{
				iconPosition[]={0.1,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.40000001,0.30000001};
				iconScale=0.2;
			};
			mass=60;
		};
		inertia=0.30000001;
		aimTransitionSpeed=1.4;
		dexterity=1.7;
		descriptionShort="$STR_A3_CfgWeapons_SMG_011";
		class Library
		{
			libTextDesc="$str_a3_cfgweapons_hgun_smg_01_library0";
		};
		ACE_barrelLength=139.7;
		ACE_barrelTwist=406.39999;
		initSpeed=-1.00148;
	};
	class SMG_01_Holo_F: SMG_01_F
	{
		_generalMacro="SMG_01_Holo_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_smg";
			};
		};
	};
	class SMG_01_Holo_pointer_snds_F: SMG_01_F
	{
		_generalMacro="SMG_01_Holo_pointer_snds_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_smg";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_acp";
			};
		};
	};
	class SMG_01_ACO_F: SMG_01_F
	{
		_generalMacro="SMG_01_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_smg";
			};
		};
	};
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		_generalMacro="SMG_02_base_F";
		magazines[]=
		{
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Red_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag"
		};
		reloadAction="GestureReloadSMG_02";
		recoil="recoil_smg_02";
		maxZeroing=600;
		cursor="smg";
		discreteDistance[]={100,200};
		discreteDistanceInitIndex=0;
		aiDispersionCoefY=8;
		aiDispersionCoefX=9;
		descriptionShort="$STR_A3_CfgWeapons_SMG_02_base_F0";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_beta\Smgs\SMG_02\data\Anim\SMG_02.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot_9mm
			{
				iconPosition[]={0.079999998,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot_Rail
			{
				iconPosition[]={0.44999999,0.27000001};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot_Rail
			{
				iconPosition[]={0.28,0.40000001};
				iconScale=0.25;
			};
		};
		bullet1[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet2[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet3[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet4[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\metal_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet5[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet6[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet7[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet8[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\dirt_4.ogg",
			2.0099001,
			1,
			10
		};
		bullet9[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_1.ogg",
			2.0099001,
			1,
			10
		};
		bullet10[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_2.ogg",
			2.0099001,
			1,
			10
		};
		bullet11[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_3.ogg",
			2.0099001,
			1,
			10
		};
		bullet12[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\small\grass_4.ogg",
			2.0099001,
			1,
			10
		};
		soundBullet[]=
		{
			"bullet1",
			0.079999998,
			"bullet2",
			0.083999999,
			"bullet3",
			0.083999999,
			"bullet4",
			0.083999999,
			"bullet5",
			0.093000002,
			"bullet6",
			0.093000002,
			"bullet7",
			0.074000001,
			"bullet8",
			0.074000001,
			"bullet9",
			0.083999999,
			"bullet10",
			0.085000001,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		distanceZoomMin=100;
		distanceZoomMax=100;
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\SMG\Sting\Dry_Sting",
			0.25118864,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\SMG\Sting\reload_sting",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\SMG\Sting\firemode_Sting",
			0.25118864,
			1,
			5
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_sting9_shot_soundset",
					"jsrs_9mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_sting9_shot_silenced_soundset",
					"jsrs_9mm_sd_reverb_soundset"
				};
			};
			dispersion=0.00116;
			recoil="recoil_single_smg_02";
			recoilProne="recoil_single_prone_smg_02";
			minRangeProbab=0.30000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			reloadTime=0.052000001;
			minRange=50;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_sting9_shot_soundset",
					"jsrs_9mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_sting9_shot_silenced_soundset",
					"jsrs_9mm_sd_reverb_soundset"
				};
			};
			soundBurst=0;
			burst=3;
			dispersion=0.00116;
			recoil="recoil_burst_smg_02";
			recoilProne="recoil_burst_prone_smg_02";
			minRangeProbab=0.30000001;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=250;
			reloadTime=0.052000001;
			minRange=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_sting9_shot_soundset",
					"jsrs_9mm_reverb_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"jsrs_sting9_shot_silenced_soundset",
					"jsrs_9mm_sd_reverb_soundset"
				};
			};
			dispersion=0.00116;
			recoil="recoil_auto_smg_02";
			recoilProne="recoil_auto_prone_smg_02";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
			aiRateOfFireDistance=50;
			reloadTime=0.052000001;
		};
		class UGL_F: UGL_F
		{
		};
		magazineWell[]=
		{
			"CBA_9x19_ScorpionEvo3"
		};
		ACE_RailHeightAboveBore=4.4183102;
		ACE_RailBaseAngle=0.0217724;
		ACE_IronSightBaseAngle=0.022918001;
	};
	class SMG_02_F: SMG_02_base_F
	{
		_generalMacro="SMG_02_F";
		baseWeapon="SMG_02_F";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG
			{
				iconPosition[]={0.079999998,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.44999999,0.27000001};
				iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.28,0.40000001};
				iconScale=0.25;
			};
			mass=61;
		};
		inertia=0.40000001;
		aimTransitionSpeed=1.3;
		dexterity=1.6;
		descriptionShort="$STR_A3_CfgWeapons_SMG_021";
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_SMG_02_Library0";
		};
		ACE_barrelLength=195.58;
		ACE_barrelTwist=254;
		initSpeed=-1.00029;
	};
	class SMG_02_ACO_F: SMG_02_F
	{
		_generalMacro="SMG_02_ACO_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn_smg";
			};
		};
	};
	class SMG_02_ARCO_pointg_F: SMG_02_F
	{
		_generalMacro="SMG_02_ARCO_pointg_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ARCO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
		};
	};
	class Uniform_Base: ItemCore
	{
		allowedSlots[]={901};
		class ItemInfo: UniformItem
		{
			uniformClass="B_Soldier_F";
			containerClass="Supply0";
			mass=0;
		};
		ACE_GForceCoef=1;
	};
	class U_BasicBody: Uniform_Base
	{
		{
			uniformClass="Underwear_F";
			containerClass="Supply0";
			mass=5;
		};
	};
	class U_B_CombatUniform_mcam: Uniform_Base
	{
		{
			uniformClass="B_Soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CombatUniform_mcam_tshirt: Uniform_Base
	{
		{
			uniformClass="B_soldier_AR_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CombatUniform_mcam_vest: Uniform_Base
	{
		{
			uniformClass="B_Soldier_SL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_GhillieSuit: Uniform_Base
	{
		{
			uniformClass="B_sniper_F";
			containerClass="Supply60";
			mass=60;
		};
	};
	class U_B_HeliPilotCoveralls: Uniform_Base
	{
		{
			uniformClass="B_Helipilot_F";
			containerClass="Supply40";
			mass=60;
		};
		ACE_GForceCoef=0.80000001;
	};
	class U_B_Wetsuit: Uniform_Base
	{
		{
			uniformClass="B_diver_F";
			containerClass="Supply80";
			uniformType="Neopren";
			mass=60;
		};
	};
	class U_O_CombatUniform_ocamo: Uniform_Base
	{
		{
			uniformClass="O_Soldier_F";
			containerClass="Supply40";
			mass=80;
		};
	};
	class U_O_GhillieSuit: Uniform_Base
	{
		{
			uniformClass="O_sniper_F";
			containerClass="Supply60";
			mass=100;
		};
	};
	class U_O_PilotCoveralls: Uniform_Base
	{
		{
			uniformClass="O_helipilot_F";
			containerClass="Supply60";
			mass=100;
		};
		ACE_GForceCoef=0.80000001;
	};
	class U_O_Wetsuit: Uniform_Base
	{
		{
			uniformClass="O_diver_f";
			containerClass="Supply80";
			uniformType="Neopren";
			mass=60;
		};
	};
	class U_C_Poloshirt_blue: Uniform_Base
	{
		{
			uniformClass="C_man_polo_1_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_C_Poloshirt_burgundy: Uniform_Base
	{
		{
			uniformClass="C_man_polo_2_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_C_Poloshirt_stripped: Uniform_Base
	{
		{
			uniformClass="C_man_polo_3_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_C_Poloshirt_tricolour: Uniform_Base
	{
		{
			uniformClass="C_man_polo_4_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_C_Poloshirt_salmon: Uniform_Base
	{
		{
			uniformClass="C_man_polo_5_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_C_Poloshirt_redwhite: Uniform_Base
	{
		{
			uniformClass="C_man_polo_6_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_C_Commoner1_1: Uniform_Base
	{
		{
			uniformClass="C_man_1_1_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_C_Commoner1_2: Uniform_Base
	{
		{
			uniformClass="C_man_1_2_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_C_Commoner1_3: Uniform_Base
	{
		{
			uniformClass="C_man_1_3_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_Rangemaster: Uniform_Base
	{
		{
			uniformClass="B_RangeMaster_F";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_NikosBody: Uniform_Base
	{
		{
			uniformClass="C_Nikos";
			containerClass="Supply20";
			mass=10;
		};
	};
	class U_OrestesBody: Uniform_Base
	{
		{
			uniformClass="C_Orestes";
			containerClass="Supply20";
			mass=10;
		};
	};
	class U_B_CombatUniform_mcam_worn: Uniform_Base
	{
		{
			uniformClass="B_Soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CombatUniform_wdl: Uniform_Base
	{
		{
			uniformClass="B_SoldierW_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CombatUniform_wdl_tshirt: Uniform_Base
	{
		{
			uniformClass="B_SoldierW_02_f";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CombatUniform_wdl_vest: Uniform_Base
	{
		{
			uniformClass="B_SoldierW_03_f";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CombatUniform_sgg: Uniform_Base
	{
		{
			uniformClass="B_SoldierS_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CombatUniform_sgg_tshirt: Uniform_Base
	{
		{
			uniformClass="B_soldier_AR_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CombatUniform_sgg_vest: Uniform_Base
	{
		{
			uniformClass="B_Soldier_SL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_SpecopsUniform_sgg: Uniform_Base
	{
		{
			uniformClass="B_recon_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_PilotCoveralls: Uniform_Base
	{
		{
			uniformClass="B_Pilot_F";
			containerClass="Supply60";
			mass=80;
		};
		ACE_GForceCoef=0.80000001;
	};
	class U_O_CombatUniform_oucamo: Uniform_Base
	{
		{
			uniformClass="O_soldierU_F";
			containerClass="Supply40";
			mass=80;
		};
	};
	class U_O_SpecopsUniform_ocamo: Uniform_Base
	{
		{
			uniformClass="O_crew_F";
			containerClass="Supply40";
			mass=80;
		};
	};
	class U_O_SpecopsUniform_blk: Uniform_Base
	{
		{
			uniformClass="O_recon_F";
			containerClass="Supply40";
			mass=80;
		};
	};
	class U_O_OfficerUniform_ocamo: Uniform_Base
	{
		{
			uniformClass="O_officer_F";
			containerClass="Supply40";
			mass=60;
		};
	};
	class U_I_CombatUniform: Uniform_Base
	{
		{
			uniformClass="I_soldier_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_CombatUniform_tshirt: Uniform_Base
	{
		{
			uniformClass="I_Soldier_lite_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_CombatUniform_shortsleeve: Uniform_Base
	{
		{
			uniformClass="I_Soldier_lite_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_pilotCoveralls: Uniform_Base
	{
		{
			uniformClass="I_pilot_F";
			containerClass="Supply60";
			mass=80;
		};
		ACE_GForceCoef=0.80000001;
	};
	class U_I_HeliPilotCoveralls: Uniform_Base
	{
		{
			uniformClass="I_helipilot_F";
			containerClass="Supply40";
			mass=60;
		};
		ACE_GForceCoef=0.80000001;
	};
	class U_I_GhillieSuit: Uniform_Base
	{
		{
			uniformClass="I_sniper_F";
			containerClass="Supply60";
			mass=60;
		};
	};
	class U_I_OfficerUniform: Uniform_Base
	{
		{
			uniformClass="I_officer_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_Wetsuit: Uniform_Base
	{
		{
			uniformClass="I_diver_f";
			containerClass="Supply80";
			uniformType="Neopren";
			mass=60;
		};
	};
	class U_Competitor: Uniform_Base
	{
		{
			uniformClass="B_Competitor_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_MillerBody: Uniform_Base
	{
		{
			uniformClass="B_Story_SF_Captain_F";
			containerClass="Supply0";
			mass=1;
		};
	};
	class U_KerryBody: Uniform_Base
	{
		{
			uniformClass="B_Story_Protagonist_F";
			containerClass="Supply0";
			mass=1;
		};
	};
	class U_AttisBody: Uniform_Base
	{
			mass=1;
		};
	};
	class U_AntigonaBody: Uniform_Base
	{
			mass=1;
		};
	};
	class U_IG_Menelaos: Uniform_Base
	{
			mass=30;
		};
	};
	class U_C_Novak: Uniform_Base
	{
			mass=30;
		};
	};
	class U_OI_Scientist: Uniform_Base
	{
		{
			uniformClass="Underwear_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_IG_Guerilla1_1: Uniform_Base
	{
		{
			uniformClass="I_G_Soldier_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_IG_Guerilla2_1: Uniform_Base
	{
		{
			uniformClass="I_G_Soldier_AR_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_IG_Guerilla2_2: Uniform_Base
	{
		{
			uniformClass="I_G_engineer_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_IG_Guerilla2_3: Uniform_Base
	{
		{
			uniformClass="I_G_medic_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_IG_Guerilla3_1: Uniform_Base
	{
		{
			uniformClass="I_G_Soldier_M_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class U_IG_Guerilla3_2: Uniform_Base
	{
		{
			uniformClass="I_G_Soldier_LAT_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class U_IG_leader: Uniform_Base
	{
		{
			uniformClass="I_G_Soldier_TL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_BG_Guerilla1_1: Uniform_Base
	{
		{
			uniformClass="B_G_Soldier_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_BG_Guerilla2_1: Uniform_Base
	{
		{
			uniformClass="B_G_Soldier_AR_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_BG_Guerilla2_2: Uniform_Base
	{
		{
			uniformClass="B_G_engineer_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_BG_Guerilla2_3: Uniform_Base
	{
		{
			uniformClass="B_G_medic_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_BG_Guerilla3_1: Uniform_Base
	{
		{
			uniformClass="B_G_Soldier_M_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class U_BG_Guerilla3_2: Uniform_Base
	{
		{
			uniformClass="B_G_Soldier_LAT_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class U_BG_leader: Uniform_Base
	{
		{
			uniformClass="B_G_Soldier_TL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_OG_Guerilla1_1: Uniform_Base
	{
		{
			uniformClass="O_G_Soldier_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_OG_Guerilla2_1: Uniform_Base
	{
		{
			uniformClass="O_G_Soldier_AR_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_OG_Guerilla2_2: Uniform_Base
	{
		{
			uniformClass="O_G_engineer_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_OG_Guerilla2_3: Uniform_Base
	{
		{
			uniformClass="O_G_medic_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_OG_Guerilla3_1: Uniform_Base
	{
		{
			uniformClass="O_G_Soldier_M_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class U_OG_Guerilla3_2: Uniform_Base
	{
		{
			uniformClass="O_G_Soldier_LAT_F";
			containerClass="Supply50";
			mass=50;
		};
	};
	class U_OG_leader: Uniform_Base
	{
		{
			uniformClass="O_G_Soldier_TL_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_C_Poor_1: Uniform_Base
	{
		{
			uniformClass="C_man_p_fugitive_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Poor_2: Uniform_Base
	{
		{
			uniformClass="C_man_p_beggar_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Scavenger_1: Uniform_Base
	{
			mass=30;
		};
	};
	class U_C_Scavenger_2: Uniform_Base
	{
			mass=30;
		};
	};
	class U_C_Farmer: Uniform_Base
	{
			mass=30;
		};
	};
	class U_C_Fisherman: Uniform_Base
	{
			mass=30;
		};
	};
	class U_C_WorkerOveralls: Uniform_Base
	{
		{
			uniformClass="C_man_w_farmer_2_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_FishermanOveralls: Uniform_Base
	{
			mass=30;
		};
	};
	class U_C_WorkerCoveralls: Uniform_Base
	{
		{
			uniformClass="C_man_w_worker_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_HunterBody_grn: Uniform_Base
	{
		{
			uniformClass="C_man_hunter_1_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_HunterBody_brn: Uniform_Base
	{
			mass=30;
		};
	};
	class U_C_Commoner2_1: Uniform_Base
	{
			mass=30;
		};
	};
	class U_C_Commoner2_2: Uniform_Base
	{
			mass=30;
		};
	};
	class U_C_Commoner2_3: Uniform_Base
	{
			mass=30;
		};
	};
	class U_C_PriestBody: Uniform_Base
	{
			mass=30;
		};
	};
	class U_C_Poor_shorts_1: Uniform_Base
	{
		{
			uniformClass="C_man_p_shorts_1_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Poor_shorts_2: Uniform_Base
	{
			mass=30;
		};
	};
	class U_C_Commoner_shorts: Uniform_Base
	{
		{
			uniformClass="C_man_shorts_1_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_ShirtSurfer_shorts: Uniform_Base
	{
		{
			uniformClass="C_man_shorts_2_F";
			containerClass="Supply10";
			mass=30;
		};
	};
	class U_C_TeeSurfer_shorts_1: Uniform_Base
	{
		{
			uniformClass="C_man_shorts_3_F";
			containerClass="Supply10";
			mass=30;
		};
	};
	class U_C_TeeSurfer_shorts_2: Uniform_Base
	{
		{
			uniformClass="C_man_shorts_4_F";
			containerClass="Supply10";
			mass=30;
		};
	};
	class U_B_CTRG_1: Uniform_Base
	{
		{
			uniformClass="B_CTRG_soldier_GL_LAT_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_2: Uniform_Base
	{
		{
			uniformClass="B_CTRG_soldier_engineer_exp_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_CTRG_3: Uniform_Base
	{
		{
			uniformClass="B_CTRG_soldier_AR_A_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_survival_uniform: Uniform_Base
	{
		{
			uniformClass="b_soldier_survival_F";
			containerClass="Supply40";
			uniformType="Neopren";
			mass=60;
		};
	};
	class U_I_G_Story_Protagonist_F: Uniform_Base
	{
		{
			uniformClass="I_G_Story_Protagonist_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_G_resistanceLeader_F: Uniform_Base
	{
		{
			uniformClass="I_G_resistanceLeader_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_C_Journalist: Uniform_Base
	{
		{
			uniformClass="C_journalist_F";
			containerClass="Supply20";
			mass=10;
		};
	};
	class U_C_Scientist: Uniform_Base
	{
		{
			uniformClass="C_scientist_F";
			containerClass="Supply20";
			mass=10;
		};
	};
	class U_NikosAgedBody: Uniform_Base
	{
		{
			uniformClass="C_Nikos_aged";
			containerClass="Supply20";
			mass=10;
		};
	};
	class U_B_Protagonist_VR: Uniform_Base
	{
		{
			uniformClass="B_Protagonist_VR_F";
			containerClass="Supply500";
			mass=60;
		};
	};
	class U_O_Protagonist_VR: Uniform_Base
	{
		{
			uniformClass="O_Protagonist_VR_F";
			containerClass="Supply500";
			mass=60;
		};
	};
	class U_I_Protagonist_VR: Uniform_Base
	{
		{
			uniformClass="I_Protagonist_VR_F";
			containerClass="Supply500";
			mass=60;
		};
	};
	class U_C_Protagonist_VR: Uniform_Base
	{
		{
			uniformClass="C_Protagonist_VR_F";
			containerClass="Supply500";
			mass=60;
		};
	};
	class U_IG_Guerrilla_6_1: Uniform_Base
	{
		{
			uniformClass="I_G_Soldier_LAT_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_BG_Guerrilla_6_1: Uniform_Base
	{
		{
			uniformClass="B_G_Soldier_LAT_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_OG_Guerrilla_6_1: Uniform_Base
	{
		{
			uniformClass="O_G_Soldier_LAT_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_B_Soldier_VR: Uniform_Base
	{
		{
			uniformClass="B_Soldier_VR_F";
			containerClass="Supply0";
			mass=0;
		};
	class U_O_Soldier_VR: Uniform_Base
	{
		{
			uniformClass="O_Soldier_VR_F";
			containerClass="Supply0";
			mass=0;
		};
	class U_I_Soldier_VR: Uniform_Base
	{
		{
			uniformClass="I_Soldier_VR_F";
			containerClass="Supply0";
			mass=0;
		};
	class U_C_Soldier_VR: Uniform_Base
	{
		{
			uniformClass="C_Soldier_VR_F";
			containerClass="Supply0";
			mass=0;
		};
	class U_C_Driver_1: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Driver_1_F";
			containerClass="Supply20";
			mass=60;
		};
	};
	class U_C_Driver_2: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Driver_2_F";
			containerClass="Supply20";
			mass=60;
		};
	};
	class U_C_Driver_3: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Driver_3_F";
			containerClass="Supply20";
			mass=60;
		};
	};
	class U_C_Driver_4: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Driver_4_F";
			containerClass="Supply20";
			mass=60;
		};
	};
	class U_Marshal: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Marshal_F";
			containerClass="Supply20";
			mass=60;
		};
	};
	class U_C_Driver_1_black: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Driver_1_black_F";
			containerClass="Supply20";
			mass=60;
		};
	};
	class U_C_Driver_1_blue: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Driver_1_blue_F";
			containerClass="Supply20";
			mass=60;
		};
	};
	class U_C_Driver_1_green: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Driver_1_green_F";
			containerClass="Supply20";
			mass=60;
		};
	};
	class U_C_Driver_1_red: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Driver_1_red_F";
			containerClass="Supply20";
			mass=60;
		};
	};
	class U_C_Driver_1_white: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Driver_1_white_F";
			containerClass="Supply20";
			mass=60;
		};
	};
	class U_C_Driver_1_yellow: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Driver_1_yellow_F";
			containerClass="Supply20";
			mass=60;
		};
	};
	class U_C_Driver_1_orange: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Driver_1_orange_F";
			containerClass="Supply20";
			mass=60;
		};
	};
	class U_B_FullGhillie_lsh: Uniform_Base
	{
		{
			uniformClass="B_ghillie_lsh_F";
			containerClass="Supply60";
			mass=80;
		};
		DLC="Mark";
	};
	class U_B_FullGhillie_sard: Uniform_Base
	{
		{
			uniformClass="B_ghillie_sard_F";
			containerClass="Supply60";
			mass=80;
		};
		DLC="Mark";
	};
	class U_B_FullGhillie_ard: Uniform_Base
	{
		{
			uniformClass="B_ghillie_ard_F";
			containerClass="Supply60";
			mass=80;
		};
		DLC="Mark";
	};
	class U_O_FullGhillie_lsh: Uniform_Base
	{
		{
			uniformClass="O_ghillie_lsh_F";
			containerClass="Supply60";
			mass=120;
		};
		DLC="Mark";
	};
	class U_O_FullGhillie_sard: Uniform_Base
	{
		{
			uniformClass="O_ghillie_sard_F";
			containerClass="Supply60";
			mass=120;
		};
		DLC="Mark";
	};
	class U_O_FullGhillie_ard: Uniform_Base
	{
		{
			uniformClass="O_ghillie_ard_F";
			containerClass="Supply60";
			mass=120;
		};
		DLC="Mark";
	};
	class U_I_FullGhillie_lsh: Uniform_Base
	{
		{
			uniformClass="I_ghillie_lsh_F";
			containerClass="Supply60";
			mass=80;
		};
		DLC="Mark";
	};
	class U_I_FullGhillie_sard: Uniform_Base
	{
		{
			uniformClass="I_ghillie_sard_F";
			containerClass="Supply60";
			mass=80;
		};
		DLC="Mark";
	};
	class U_I_FullGhillie_ard: Uniform_Base
	{
		{
			uniformClass="I_ghillie_ard_F";
			containerClass="Supply60";
			mass=80;
		};
		DLC="Mark";
	};
	class Vest_Camo_Base: ItemCore
	{
		_generalMacro="Vest_Camo_Base";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		class ItemInfo: VestItem
		{
			mass=0;
		};
	};
	class Vest_NoCamo_Base: ItemCore
	{
		_generalMacro="Vest_NoCamo_Base";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
	class V_Rangemaster_belt: Vest_NoCamo_Base
	{
		_generalMacro="V_Rangemaster_belt";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply40";
			mass=5;
		};
	};
	class V_BandollierB_khk: Vest_Camo_Base
	{
		_generalMacro="V_BandollierB_khk";
		weaponPoolAvailable=1;
		{
			containerClass="Supply80";
			mass=10;
		};
	};
	class V_BandollierB_cbr: V_BandollierB_khk
	{
		_generalMacro="V_BandollierB_cbr";
		{
		};
	};
	class V_BandollierB_rgr: V_BandollierB_khk
	{
		_generalMacro="V_BandollierB_rgr";
		{
		};
	};
	class V_BandollierB_blk: V_BandollierB_khk
	{
		_generalMacro="V_BandollierB_blk";
		{
		};
	};
	class V_BandollierB_oli: V_BandollierB_khk
	{
		_generalMacro="V_BandollierB_oli";
		{
	};
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		_generalMacro="V_PlateCarrier1_rgr";
		descriptionShort="$STR_A3_SP_AL_III";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
                    passthrough=0.5;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
                    passthrough=0.5;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
                    passthrough=0.5;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;				};
			};
		};
	};
	class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr
	{
		_generalMacro="V_PlateCarrier2_rgr";
		descriptionShort="$STR_A3_SP_AL_IV";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
                    passthrough=0.35;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
                    passthrough=0.35;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
                    passthrough=0.35;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.35;				};
			};
		};
	};
	class V_PlateCarrier2_blk: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrier2_blk";
		{
	};
	class V_PlateCarrier3_rgr: Vest_NoCamo_Base
	{
		_generalMacro="V_PlateCarrier3_rgr";
		descriptionShort="$STR_A3_SP_AL_IV";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=20;
                    passthrough=0.35;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=20;
                    passthrough=0.35;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
                    passthrough=0.35;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.35;				};
			};
		};
	};
	class V_PlateCarrierGL_rgr: Vest_NoCamo_Base
	{
		_generalMacro="V_PlateCarrierGL_rgr";
		overviewName="$STR_B_SOLDIER_GL_F0";
		descriptionShort="$STR_A3_SP_ER";
		{
			containerClass="Supply140";
			mass=100;
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
                    passthrough=0.7;				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
                    passthrough=0.7;				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
                    passthrough=0.75;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
                    passthrough=0.75;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
                    passthrough=0.5;				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
                    passthrough=0.5;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.75;				};
			};
		};
		DLC="Mark";
	};
	class V_PlateCarrierGL_blk: V_PlateCarrierGL_rgr
	{
		_generalMacro="V_PlateCarrierGL_blk";
	};
	class V_PlateCarrierGL_mtp: V_PlateCarrierGL_rgr
	{
		_generalMacro="V_PlateCarrierGL_mtp";
	};
	class V_PlateCarrier1_blk: Vest_Camo_Base
	{
		_generalMacro="V_PlateCarrier1_blk";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
                    passthrough=0.5;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
                    passthrough=0.5;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
                    passthrough=0.5;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;				};
			};
		};
	};
	class V_PlateCarrierSpec_rgr: Vest_NoCamo_Base
	{
		_generalMacro="V_PlateCarrierSpec_rgr";
		descriptionShort="$STR_A3_SP_AL_V";
		{
			containerClass="Supply100";
			mass=120;
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
                    passthrough=0.7;				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
                    passthrough=0.7;				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
                    passthrough=0.2;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;				};
			};
		};
		DLC="Mark";
	};
	class V_PlateCarrierSpec_blk: V_PlateCarrierSpec_rgr
	{
		_generalMacro="V_PlateCarrierSpec_blk";
	};
	class V_PlateCarrierSpec_mtp: V_PlateCarrierSpec_rgr
	{
		_generalMacro="V_PlateCarrierSpec_mtp";
	};
	class V_Chestrig_khk: Vest_Camo_Base
	{
		_generalMacro="V_Chestrig_khk";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=20;
		};
	};
	class V_Chestrig_rgr: V_Chestrig_khk
	{
		_generalMacro="V_Chestrig_rgr";
	};
	class V_Chestrig_blk: V_Chestrig_khk
	{
		_generalMacro="V_Chestrig_blk";
	};
	class V_Chestrig_oli: Vest_Camo_Base
	{
		_generalMacro="V_Chestrig_oli";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=20;
		};
	};
	class V_TacVest_khk: Vest_Camo_Base
	{
		_generalMacro="V_TacVest_khk";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
                    passthrough=0.7;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
                    passthrough=0.7;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
                    passthrough=0.7;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.7;				};
			};
		};
	};
	class V_TacVest_brn: V_TacVest_khk
	{
		_generalMacro="V_TacVest_brn";
	class V_TacVest_oli: V_TacVest_khk
	{
		_generalMacro="V_TacVest_oli";
	class V_TacVest_blk: V_TacVest_khk
	{
		_generalMacro="V_TacVest_blk";
	class V_TacVest_camo: Vest_Camo_Base
	{
		_generalMacro="V_TacVest_camo";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
                    passthrough=0.7;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
                    passthrough=0.7;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
                    passthrough=0.7;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.7;				};
			};
		};
	};
	class V_TacVest_blk_POLICE: Vest_Camo_Base
	{
		_generalMacro="V_TacVest_blk_POLICE";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=50;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=12;
                    passthrough=0.6;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=12;
                    passthrough=0.6;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
                    passthrough=0.6;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class V_TacVestIR_blk: Vest_NoCamo_Base
	{
		_generalMacro="V_TacVestIR_blk";
		descriptionShort="$STR_A3_SP_AL_I";
		class ItemInfo: VestItem
		{
			containerClass="Supply140";
			mass=50;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
                    passthrough=0.7;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
                    passthrough=0.7;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
                    passthrough=0.7;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.7;				};
			};
		};
	};
	class V_TacVestCamo_khk: Vest_Camo_Base
	{
		_generalMacro="V_TacVestCamo_khk";
		class ItemInfo: VestItem
		{
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
                    passthrough=0.7;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
                    passthrough=0.7;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
                    passthrough=0.7;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.7;				};
			};
		};
	};
	class V_HarnessO_brn: Vest_NoCamo_Base
	{
		_generalMacro="V_HarnessO_brn";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply160";
			mass=30;
		};
	};
	class V_HarnessOGL_brn: Vest_NoCamo_Base
	{
		_generalMacro="V_HarnessOGL_brn";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_HarnessO_gry: V_HarnessO_brn
	{
		_generalMacro="V_HarnessO_gry";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply160";
			mass=30;
		};
	};
	class V_HarnessOGL_gry: V_HarnessO_gry
	{
		_generalMacro="V_HarnessOGL_gry";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=15;
		};
	};
	class V_HarnessOSpec_brn: V_HarnessO_brn
	{
		_generalMacro="V_HarnessOSpec_brn";
		class ItemInfo: VestItem
		{
			containerClass="Supply160";
			mass=30;
		};
	};
	class V_HarnessOSpec_gry: V_HarnessO_gry
	{
		_generalMacro="V_HarnessOSpec_gry";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply160";
			mass=30;
		};
	};
	class V_PlateCarrierIA1_dgtl: Vest_NoCamo_Base
	{
		_generalMacro="V_PlateCarrierIA1_dgtl";
		descriptionShort="$STR_A3_SP_AL_III";
		class ItemInfo: VestItem
		{
			containerClass="Supply120";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
                    passthrough=0.5;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
                    passthrough=0.5;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
                    passthrough=0.5;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;				};
			};
		};
	};
	class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl
	{
		_generalMacro="V_PlateCarrierIA2_dgtl";
		descriptionShort="$STR_A3_SP_AL_III";
		class ItemInfo: VestItem
		{
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
                    passthrough=0.5;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
                    passthrough=0.5;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
                    passthrough=0.5;				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
                    passthrough=0.5;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;				};
			};
		};
	};
	class V_PlateCarrierIAGL_dgtl: V_PlateCarrierIA2_dgtl
	{
		_generalMacro="V_PlateCarrierIAGL_dgtl";
		descriptionShort="$STR_A3_SP_ER";
		class ItemInfo: VestItem
		{
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
                    passthrough=0.7;				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
                    passthrough=0.7;				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
                    passthrough=0.75;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
                    passthrough=0.75;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
                    passthrough=0.5;				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
                    passthrough=0.5;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.75;				};
			};
		};
		DLC="Mark";
	};
	class V_PlateCarrierIAGL_oli: V_PlateCarrierIAGL_dgtl
	{
		_generalMacro="V_PlateCarrierIAGL_oli";
		DLC="Mark";
	};
	class V_RebreatherB: Vest_Camo_Base
	{
		_generalMacro="V_RebreatherB";
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		shownUnderwaterSelections[]=
		{
			"unhide",
			"unhide2"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply0";
			mass=80;
			vestType="Rebreather";
			hiddenUnderwaterSelections[]=
			{
				"hide"
			};
			shownUnderwaterSelections[]=
			{
				"unhide",
				"unhide2"
			};
			hiddenUnderwaterSelectionsTextures[]=
			{
				"\A3\characters_f\common\data\diver_equip_nato_co.paa",
				"\A3\characters_f\common\data\diver_equip_nato_co.paa",
				"\A3\characters_f\data\visors_ca.paa"
			};
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
                    passthrough=0.7;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
                    passthrough=0.7;				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
                    passthrough=0.7;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.7;				};
			};
		};
	};
	class V_RebreatherIR: V_RebreatherB
	{
		_generalMacro="V_RebreatherIR";
		{
			"\A3\characters_f\common\data\diver_equip_iran_co.paa",
			"\A3\characters_f\common\data\diver_equip_iran_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
	};
	class V_RebreatherIA: V_RebreatherB
	{
		_generalMacro="V_RebreatherIA";
		{
			"\A3\characters_f\common\data\diver_equip_rus_co.paa",
			"\A3\characters_f\common\data\diver_equip_rus_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
	};
	class V_PlateCarrier_Kerry: V_PlateCarrier1_rgr
	{
		_generalMacro="V_PlateCarrier_Kerry";
 
	};
	class V_PlateCarrierL_CTRG: V_PlateCarrier1_rgr
	{
		_generalMacro="V_PlateCarrierL_CTRG";
		{
	};
	class V_PlateCarrierH_CTRG: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrierH_CTRG";
		{
	};
	class V_I_G_resistanceLeader_F: V_TacVest_camo
	{
		_generalMacro="V_I_G_resistanceLeader_F";
		{
		};
	};
	class V_Press_F: Vest_Camo_Base
	{
		_generalMacro="V_Press_F";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply40";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=12;
                    passthrough=0.6;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=12;
                    passthrough=0.6;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
                    passthrough=0.6;				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=12;
                    passthrough=0.6;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class HeadgearItem: InventoryItem_Base_F
	{
		_generalMacro="HeadgearItem";
		allowedSlots[]={901,605};
		type=605;
		class ItemInfo: HeadgearItem
		{
			mass=0;
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class H_HelmetB: ItemCore
	{
		_generalMacro="H_HelmetB";
		weaponPoolAvailable=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class H_HelmetB_camo: H_HelmetB
	{
		_generalMacro="H_HelmetB_camo";
		class ItemInfo: HeadgearItem
		{
			mass=40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class H_HelmetB_paint: H_HelmetB
	{
		_generalMacro="H_HelmetB_paint";
	class H_HelmetB_light: H_HelmetB
	{
		_generalMacro="H_HelmetB_light";
		descriptionShort="$STR_A3_SP_AL_I";
		class ItemInfo: ItemInfo
		{
			mass=20;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
                    passthrough=0.7;				};
			};
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class H_Booniehat_khk: HelmetBase
	{
		_generalMacro="H_Booniehat_khk";
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
		class ItemInfo: ItemInfo
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
		};
	};
	class H_Booniehat_oli: H_Booniehat_khk
	{
		_generalMacro="H_Booniehat_oli";
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Booniehat_indp: H_Booniehat_khk
	{
		_generalMacro="H_Booniehat_indp";
	class H_Booniehat_mcamo: H_Booniehat_khk
	{
		_generalMacro="H_Booniehat_mcamo";
	class H_Booniehat_grn: H_Booniehat_khk
	{
		_generalMacro="H_Booniehat_grn";
	};
	class H_Booniehat_tan: H_Booniehat_khk
	{
		_generalMacro="H_Booniehat_tan";
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Booniehat_dirty: H_Booniehat_khk
	{
		_generalMacro="H_Booniehat_dirty";
	};
	class H_Booniehat_dgtl: H_Booniehat_khk
	{
		_generalMacro="H_Booniehat_dgtl";
		{
			"",
			6,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Booniehat_khk_hs: H_Booniehat_khk
	{
		_generalMacro="H_Booniehat_khk_hs";
		allowedFacewear[]=
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
 
	};
	class H_HelmetB_plain_mcamo: H_HelmetB
	{
		_generalMacro="H_HelmetB_plain_mcamo";
		{
		};
	};
	class H_HelmetB_plain_blk: H_HelmetB_plain_mcamo
	{
		_generalMacro="H_HelmetB_plain_blk";
	class H_HelmetSpecB: H_HelmetB_plain_mcamo
	{
		_generalMacro="H_HelmetSpecB";
		class ItemInfo: ItemInfo
		{
			mass=50;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
                    passthrough=0.7;				};
			};
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class H_HelmetSpecB_paint1: H_HelmetSpecB
	{
		_generalMacro="H_HelmetSpecB_paint1";
	class H_HelmetSpecB_paint2: H_HelmetSpecB
	{
		_generalMacro="H_HelmetSpecB_paint2";
	class H_HelmetSpecB_blk: H_HelmetSpecB
	{
		_generalMacro="H_HelmetSpecB_blk";
	class H_HelmetSpecB_snakeskin: H_HelmetSpecB
	{
		_generalMacro="H_HelmetSpecB_snakeskin";
	class H_HelmetSpecB_sand: H_HelmetSpecB
	{
		_generalMacro="H_HelmetSpecB_sand";
	class H_HelmetIA: H_HelmetB
	{
		_generalMacro="H_HelmetIA";
		{
			mass=30;
			allowedSlots[]={901,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class H_HelmetIA_net: H_HelmetIA
	{
		_generalMacro="H_HelmetIA_net";
	};
	class H_HelmetIA_camo: H_HelmetIA
	{
		_generalMacro="H_HelmetIA_camo";
	};
	class H_Helmet_Kerry: H_HelmetB
	{
		_generalMacro="H_Helmet_Kerry";
 
	};
	class H_HelmetB_grass: H_HelmetB
	{
		_generalMacro="H_HelmetB_grass";
	class H_HelmetB_snakeskin: H_HelmetB
	{
		_generalMacro="H_HelmetB_snakeskin";
	class H_HelmetB_desert: H_HelmetB
	{
		_generalMacro="H_HelmetB_desert";
	class H_HelmetB_black: H_HelmetB
	{
		_generalMacro="H_HelmetB_black";
	class H_HelmetB_sand: H_HelmetB
	{
		_generalMacro="H_HelmetB_sand";
	class H_Cap_red: HelmetBase
	{
		_generalMacro="H_Cap_red";
		{
			mass=4;
			allowedSlots[]={801,901,701,605};
		};
	};
	class H_Cap_blu: H_Cap_red
	{
		_generalMacro="H_Cap_blu";
		{
			"",
			12,
			"G_Aviator",
			1,
			"G_Balaclava_blk",
			1,
			"G_Balaclava_oli",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Cap_oli: H_Cap_red
	{
		_generalMacro="H_Cap_oli";
		{
			"",
			5,
			"G_Aviator",
			1,
			"G_Balaclava_blk",
			1,
			"G_Balaclava_oli",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Cap_headphones: HelmetBase
	{
		_generalMacro="H_Cap_headphones";
		{
			mass=8;
	};
	class H_Cap_tan: H_Cap_red
	{
		_generalMacro="H_Cap_tan";
		{
			"",
			7.5,
			"G_Aviator",
			1,
			"G_Balaclava_blk",
			1,
			"G_Balaclava_oli",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Cap_blk: H_Cap_red
	{
		_generalMacro="H_Cap_blk";
		{
			"",
			7.5,
			"G_Aviator",
			1,
			"G_Balaclava_blk",
			1,
			"G_Balaclava_oli",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Cap_blk_CMMG: H_Cap_red
	{
		_generalMacro="H_Cap_blk_CMMG";
	class H_Cap_brn_SPECOPS: H_Cap_red
	{
		_generalMacro="H_Cap_brn_SPECOPS";
	class H_Cap_tan_specops_US: H_Cap_red
	{
		_generalMacro="H_Cap_tan_specops_US";
	class H_Cap_khaki_specops_UK: H_Cap_red
	{
		_generalMacro="H_Cap_khaki_specops_UK";
	class H_Cap_grn: H_Cap_red
	{
		_generalMacro="H_Cap_grn";
		{
			"",
			5,
			"G_Aviator",
			1,
			"G_Balaclava_blk",
			1,
			"G_Balaclava_oli",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Cap_grn_BI: H_Cap_red
	{
		_generalMacro="H_Cap_grn_BI";
	class H_Cap_blk_Raven: H_Cap_red
	{
		_generalMacro="H_Cap_blk_Raven";
		{
			"",
			5.5,
			"G_Aviator",
			1,
			"G_Balaclava_blk",
			1,
			"G_Balaclava_oli",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Cap_blk_ION: H_Cap_red
	{
		_generalMacro="H_Cap_blk_ION";
	class H_Cap_oli_hs: H_Cap_oli
	{
		_generalMacro="H_Cap_oli_hs";
		allowedFacewear[]=
		{
			"",
			5,
			"G_Aviator",
			1,
			"G_Balaclava_blk",
			1,
			"G_Balaclava_oli",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
 
	};
	class H_Cap_press: H_Cap_red
	{
		_generalMacro="H_Cap_press";
	class H_Cap_usblack: H_Cap_red
	{
		_generalMacro="H_Cap_usblack";
	class H_Cap_surfer: H_Cap_red
	{
		_generalMacro="H_Cap_surfer";
	class H_Cap_police: H_Cap_red
	{
		_generalMacro="H_Cap_police";
	class H_HelmetCrew_B: H_HelmetB
	{
		_generalMacro="H_HelmetCrew_B";
		class ItemInfo: ItemInfo
		{
			mass=40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
                    passthrough=0.7;				};
			};
		};
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
	class H_HelmetCrew_O: H_HelmetCrew_B
	{
		_generalMacro="H_HelmetCrew_O";
		{
		};
	};
	class H_HelmetCrew_I: H_HelmetCrew_B
	{
		_generalMacro="H_HelmetCrew_I";
		{
		};
	};
	class H_PilotHelmetFighter_B: H_HelmetB
	{
		_generalMacro="H_PilotHelmetFighter_B";
		class ItemInfo: ItemInfo
		{
			mass=60;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
                    passthrough=0.7;				};
				class Face
				{
					hitpointName="HitFace";
					armor=4;
                    passthrough=0.7;				};
			};
		};
		subItems[]=
		{
			"Integrated_NVG_F"
		};
		ACE_Protection=1;
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
	class H_PilotHelmetFighter_O: H_PilotHelmetFighter_B
	{
		_generalMacro="H_PilotHelmetFighter_O";
		{
		};
	};
	class H_PilotHelmetFighter_I: H_PilotHelmetFighter_B
	{
		_generalMacro="H_PilotHelmetFighter_I";
		{
		};
	};
	class H_PilotHelmetHeli_B: H_HelmetB
	{
		_generalMacro="H_PilotHelmetHeli_B";
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
		ACE_Protection=1;
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
	class H_PilotHelmetHeli_O: H_PilotHelmetHeli_B
	{
		_generalMacro="H_PilotHelmetHeli_O";
		{
		};
	};
	class H_PilotHelmetHeli_I: H_PilotHelmetHeli_B
	{
		_generalMacro="H_PilotHelmetHeli_I";
		{
		};
	};
	class H_CrewHelmetHeli_B: H_HelmetB
	{
		_generalMacro="H_CrewHelmetHeli_B";
		{
			mass=50;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
				class Face
				{
					hitpointName="HitFace";
					armor=4;
                    passthrough=0.7;				};
			};
		};
		ACE_Protection=1;
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
	class H_CrewHelmetHeli_O: H_CrewHelmetHeli_B
	{
		_generalMacro="H_CrewHelmetHeli_O";
		{
		};
	};
	class H_CrewHelmetHeli_I: H_CrewHelmetHeli_B
	{
		_generalMacro="H_CrewHelmetHeli_I";
		{
		};
	};
	class H_HelmetO_ocamo: H_HelmetB
	{
		_generalMacro="H_HelmetO_ocamo";
		class ItemInfo: ItemInfo
		{
			mass=40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
                    passthrough=0.7;				};
			};
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class H_HelmetLeaderO_ocamo: H_HelmetO_ocamo
	{
		_generalMacro="H_HelmetLeaderO_ocamo";
		class ItemInfo: ItemInfo
		{
			mass=60;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=12;
                    passthrough=0.7;				};
			};
		};
	};
	class H_MilCap_ocamo: HelmetBase
	{
		_generalMacro="H_MilCap_ocamo";
		{
			mass=6;
			allowedSlots[]={901,701,605};
		};
	};
	class H_MilCap_mcamo: H_MilCap_ocamo
	{
		_generalMacro="H_MilCap_mcamo";
	class H_MilCap_oucamo: H_MilCap_ocamo
	{
		_generalMacro="H_MilCap_oucamo";
		{
		};
	};
	class H_MilCap_rucamo: H_MilCap_oucamo
	{
		_generalMacro="H_MilCap_rucamo";
	class H_MilCap_gry: H_MilCap_oucamo
	{
		_generalMacro="H_MilCap_gry";
	class H_MilCap_dgtl: H_MilCap_oucamo
	{
		_generalMacro="H_MilCap_dgtl";
	class H_MilCap_blue: H_MilCap_oucamo
	{
		_generalMacro="H_MilCap_blue";
	class H_HelmetB_light_grass: H_HelmetB_light
	{
		_generalMacro="H_HelmetB_light_grass";
	class H_HelmetB_light_snakeskin: H_HelmetB_light
	{
		_generalMacro="H_HelmetB_light_snakeskin";
	class H_HelmetB_light_desert: H_HelmetB_light
	{
		_generalMacro="H_HelmetB_light_desert";
	class H_HelmetB_light_black: H_HelmetB_light
	{
		_generalMacro="H_HelmetB_light_black";
	class H_HelmetB_light_sand: H_HelmetB_light
	{
		_generalMacro="H_HelmetB_light_sand";
	class H_BandMask_blk: HelmetBase
	{
		_generalMacro="H_BandMask_blk";
		{
			mass=8;
			allowedSlots[]={801,901,701,605};
		};
	};
	class H_BandMask_khk: H_BandMask_blk
	{
		_generalMacro="H_BandMask_khk";
 
	};
	class H_BandMask_reaper: H_BandMask_blk
	{
		_generalMacro="H_BandMask_reaper";
 
	};
	class H_BandMask_demon: H_BandMask_blk
	{
		_generalMacro="H_BandMask_demon";
 
	};
	class H_HelmetO_oucamo: H_HelmetO_ocamo
	{
		_generalMacro="H_HelmetO_oucamo";
		{
		};
	};
	class H_HelmetLeaderO_oucamo: H_HelmetLeaderO_ocamo
	{
		_generalMacro="H_HelmetLeaderO_oucamo";
		{
		};
	};
	class H_HelmetSpecO_ocamo: H_HelmetO_ocamo
	{
		_generalMacro="H_HelmetSpecO_ocamo";
		class ItemInfo: ItemInfo
		{
			mass=50;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
                    passthrough=0.7;				};
			};
		};
	};
	class H_HelmetSpecO_blk: H_HelmetSpecO_ocamo
	{
		_generalMacro="H_HelmetSpecO_blk";
		{
		};
	};
	class H_Bandanna_surfer: HelmetBase
	{
		_generalMacro="H_Bandanna_surfer";
		{
			"",
			4,
			"G_Aviator",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_sport",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
		class ItemInfo: ItemInfo
		{
			mass=8;
			allowedSlots[]={901,701,605};
		};
	};
	class H_Bandanna_khk: H_Bandanna_surfer
	{
		_generalMacro="H_Bandanna_khk";
		{
			"",
			6,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Bandanna_khk_hs: H_Bandanna_khk
	{
		_generalMacro="H_Bandanna_khk_hs";
		allowedFacewear[]=
		{
			"",
			6,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
 
	};
	class H_Bandanna_cbr: H_Bandanna_surfer
	{
		_generalMacro="H_Bandanna_cbr";
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Bandanna_sgg: H_Bandanna_surfer
	{
		_generalMacro="H_Bandanna_sgg";
		{
			"",
			4,
			"G_Aviator",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_sport",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Bandanna_sand: H_Bandanna_surfer
	{
		_generalMacro="H_Bandanna_sand";
		{
			"",
			4.5,
			"G_Aviator",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Bandanna_surfer_blk: H_Bandanna_surfer
	{
		_generalMacro="H_Bandanna_surfer_blk";
		{
			"",
			5.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Bandanna_surfer_grn: H_Bandanna_surfer
	{
		_generalMacro="H_Bandanna_surfer_grn";
		{
			"",
			4.5,
			"G_Aviator",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Bandanna_gry: H_Bandanna_surfer
	{
		_generalMacro="H_Bandanna_gry";
		{
			"",
			6,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Bandanna_blu: H_Bandanna_surfer
	{
		_generalMacro="H_Bandanna_blu";
		{
			"",
			5.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Bandanna_camo: H_Bandanna_surfer
	{
		_generalMacro="H_Bandanna_camo";
		{
			"",
			5.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Bandanna_mcamo: H_Bandanna_surfer
	{
		_generalMacro="H_Bandanna_mcamo";
	class H_Shemag_khk: HelmetBase
	{
		_generalMacro="H_Shemag_khk";
		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
		};
	};
	class H_Shemag_tan: H_Shemag_khk
	{
		_generalMacro="H_Shemag_tan";
	};
	class H_Shemag_olive: H_Shemag_khk
	{
		_generalMacro="H_Shemag_olive";
		{
			"",
			2,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Shemag_olive_hs: H_Shemag_olive
	{
		_generalMacro="H_Shemag_olive_hs";
		allowedFacewear[]=
		{
			"",
			2,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
 
	};
	class H_ShemagOpen_khk: HelmetBase
	{
		_generalMacro="H_ShemagOpen_khk";
		{
			"",
			2,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
	};
	class H_ShemagOpen_tan: H_ShemagOpen_khk
	{
		_generalMacro="H_ShemagOpen_tan";
		{
			"",
			2,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Beret_blk: HelmetBase
	{
		_generalMacro="H_Beret_blk";
		{
			"",
			7.5,
			"G_Aviator",
			1,
			"G_Balaclava_blk",
			1,
			"G_Balaclava_oli",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
		};
	};
	class H_Beret_blk_POLICE: H_Beret_blk
	{
		_generalMacro="H_Beret_blk_POLICE";
	};
	class H_Beret_red: H_Beret_blk
	{
		_generalMacro="H_Beret_red";
	};
	class H_Beret_grn: H_Beret_blk
	{
		_generalMacro="H_Beret_grn";
	};
	class H_Beret_grn_SF: H_Beret_blk
	{
		_generalMacro="H_Beret_grn_SF";
	};
	class H_Beret_brn_SF: H_Beret_blk
	{
		_generalMacro="H_Beret_brn_SF";
	};
	class H_Beret_ocamo: H_Beret_blk
	{
		_generalMacro="H_Beret_ocamo";
	class H_Beret_02: H_Beret_blk
	{
		_generalMacro="H_Beret_02";
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
		};
	};
	class H_Beret_Colonel: H_Beret_02
	{
		_generalMacro="H_Beret_Colonel";
	class H_Watchcap_blk: HelmetBase
	{
		_generalMacro="H_Watchcap_blk";
		{
			"",
			6,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
		};
	};
	class H_Watchcap_cbr: H_Watchcap_blk
	{
		_generalMacro="H_Watchcap_cbr";
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Watchcap_khk: H_Watchcap_blk
	{
		_generalMacro="H_Watchcap_khk";
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Watchcap_camo: H_Watchcap_blk
	{
		_generalMacro="H_Watchcap_camo";
		{
			"",
			6,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Watchcap_sgg: H_Watchcap_blk
	{
		_generalMacro="H_Watchcap_sgg";
	class H_TurbanO_blk: HelmetBase
	{
		_generalMacro="H_TurbanO_blk";
		class ItemInfo: ItemInfo
		{
			mass=8;
			allowedSlots[]={801,901,701,605};
		};
	};
	class H_StrawHat: HelmetBase
	{
		_generalMacro="H_StrawHat";
		{
			mass=6;
			allowedSlots[]={901,701,605};
		};
	};
	class H_StrawHat_dark: H_StrawHat
	{
		_generalMacro="H_StrawHat_dark";
	class H_Hat_blue: HelmetBase
	{
		_generalMacro="H_Hat_blue";
		{
			mass=6;
			allowedSlots[]={901,701,605};
		};
	};
	class H_Hat_brown: H_Hat_blue
	{
		_generalMacro="H_Hat_brown";
	class H_Hat_camo: H_Hat_blue
	{
		_generalMacro="H_Hat_camo";
	class H_Hat_grey: H_Hat_blue
	{
		_generalMacro="H_Hat_grey";
	class H_Hat_checker: H_Hat_blue
	{
		_generalMacro="H_Hat_checker";
	class H_Hat_tan: H_Hat_blue
	{
		_generalMacro="H_Hat_tan";
	class H_RacingHelmet_1_F: H_HelmetB_camo
	{
		_generalMacro="H_RacingHelmet_1_F";
		descriptionShort="$STR_A3_SP_AL_I";
		class ItemInfo: ItemInfo
		{
			mass=40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
                    passthrough=0.7;				};
				class Face
				{
					hitpointName="HitFace";
					armor=4;
                    passthrough=0.7;				};
			};
		};
		DLC="Kart";
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
	class rhsgref_helmet_pasgt_woodland: rhsgref_helmet_pasgt_erdl
	{
		{
		};
	};
	class rhssaf_helmet_m97_woodland_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess
	{
		dlc="RHS_SAF";
		class ItemInfo: HeadgearItem
		{
			mass=42;
			allowedSlots[]={901,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhssaf_vest_md12_digital: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=70;
		};
	};
	class m93_dino: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93dino";
			containerClass="Supply40";
			mass=40;
		};
	};
	class pasgt_dino: rhsgref_helmet_pasgt_woodland
	{
	class pasgt_dinog: rhssaf_helmet_m97_woodland_black_ess_bare
	{
	};
	class m12_dino: rhssaf_vest_md12_digital
	{
	class rhsusf_opscore_cover: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
			"contour",
			"cover",
			"ms2000"
		};
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_cb_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			armor=6;
				"contour",
				"cover",
				"ms2000"
			};
		};
	};
	class rhssaf_helmet_m97_nostrap_blue: rhssaf_helmet_m97_woodland
	{
		dlc="RHS_SAF";
		{
			mass=40;
			allowedSlots[]={901,605};
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class pasgt_bgw: rhssaf_helmet_m97_nostrap_blue
	{
	class pasgt_bgd: rhssaf_helmet_m97_nostrap_blue
	{
	class m93_bgw: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93bgw";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_bgd: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93bgd";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m12_bgw: rhssaf_vest_md12_digital
	{
	class m12_bgd: rhssaf_vest_md12_digital
	{
	class rhs_uniform_acu_ucp: Uniform_Base
	{
		dlc="RHS_USAF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_acu_uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_helmet_pasgt_woodland_rhino: rhsgref_helmet_pasgt_erdl_rhino
	{
		{
			mass=40;
		};
	};
	class pasgt_cp: rhsgref_helmet_pasgt_woodland_rhino
	{
	class pasgt_cpa: rhsgref_helmet_pasgt_woodland_rhino
	{
	class m93_cp: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93cp";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_cpa: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93cpa";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m12_cp: rhssaf_vest_md12_digital
	{
	class rhsusf_mbav: rhsusf_iotv_ocp_base
	{
		class ItemInfo: ItemInfo
		{
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=28;
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class rhsusf_mbav_light: rhsusf_mbav
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class rhsusf_mbav_rifleman: rhsusf_mbav_light
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
		};
	};
	class rhsusf_mbav_mg: rhsusf_mbav_light
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply160";
		};
	};
	class rhsusf_mbav_grenadier: rhsusf_mbav_light
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply150";
			class HitpointsProtectionInfo: HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Diaphragm: Diaphragm
				{
				};
				class Body: Body
				{
				};
			};
		};
	};
	class rhsusf_mbav_medic: rhsusf_mbav_light
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply160";
		};
	};
	class pasgt_dm: rhsgref_helmet_pasgt_woodland_rhino
	{
	class pasgt_dm2: rhsgref_helmet_pasgt_woodland_rhino
	{
	class m93_dm: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93dm";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_dm2: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93dm2";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m12_dm: rhssaf_vest_md12_digital
	{
	class rhs_6b23_6sh116: rhs_6b23_digi
	{
		};
		class ItemInfo: ItemInfo
		{
			};
			containerClass="Supply140";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.5;					simulation="RHS_Gost_3";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22 + 		3";
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor="22 + 		3";
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;					simulation="RHS_Gost_3";
				};
			};
		};
		};
	};
	class rhs_6b23_6sh116_vog: rhs_6b23_6sh116
	{
		class ItemInfo: ItemInfo
		{
			mass=85;
			containerClass="Supply160";
		};
	};
	class rhs_6b7_1m_emr: rhs_6b7_1m
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
 
	};
	class rhs_6b7_1m_emr_ess: rhs_6b7_1m_bala1
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
 
	};
	class pasgt_fi: rhsgref_helmet_pasgt_woodland
	{
	class pasgt_fig: rhssaf_helmet_m97_woodland_black_ess_bare
	{
	};
	class pasgt_fid: rhsgref_helmet_pasgt_woodland
	{
	class pasgt_fidg: rhssaf_helmet_m97_woodland_black_ess_bare
	{
	};
	class m93_fi: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93fi";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_fid: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93fid";
			containerClass="Supply40";
			mass=40;
		};
	};
	class v6b23fi: rhs_6b23_6sh116
	{
		};
	};
	class pasgt_ce: rhssaf_helmet_m97_nostrap_blue
	{
	class pasgt_dg: rhssaf_helmet_m97_nostrap_blue
	{
	class m93_ce: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93ce";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_dg: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93dg";
			containerClass="Supply40";
			mass=40;
		};
	};
	class carrier_ce: V_PlateCarrierIA1_dgtl
	{
		{
			containerClass="Supply120";
			mass=60;
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
                    passthrough=0.5;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
                    passthrough=0.5;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
                    passthrough=0.5;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;				};
			};
		};
	};
	class CryGen2_mc: Uniform_Base
	{
		descriptionShort="Crye Army Custom";
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_G2_mc";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen2_mc_alt: Uniform_Base
	{
		descriptionShort="Crye Army Custom";
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_G2_mc_alt";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen2_tan: Uniform_Base
	{
		descriptionShort="Crye Army Custom";
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_G2_tan";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen2_rgr: Uniform_Base
	{
		descriptionShort="Crye Army Custom";
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_G2_rgr";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen2_blk: Uniform_Base
	{
		descriptionShort="Crye Army Custom";
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_G2_blk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen2_wd: Uniform_Base
	{
		descriptionShort="Crye Army Custom";
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_G2_wd";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen2_ucp: Uniform_Base
	{
		descriptionShort="Crye Army Custom";
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_G2_ucp";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_cd: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93cd";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_cw: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93cw";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_cmw: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93cmw";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_cmd: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93cmd";
			containerClass="Supply40";
			mass=40;
		};
	};
	class pasgt_cw: ItemCore
	{
		weaponPoolAvailable=1;
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class pasgt_cmw: ItemCore
	{
		weaponPoolAvailable=1;
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class pasgt_cmd: ItemCore
	{
		weaponPoolAvailable=1;
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class pasgt_cd: ItemCore
	{
		weaponPoolAvailable=1;
		{
			mass=30;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class pasgt_cwg: ItemCore
	{
		weaponPoolAvailable=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			allowedslots[]={901,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class pasgt_cmwg: ItemCore
	{
		weaponPoolAvailable=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			allowedslots[]={901,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class pasgt_cmdg: ItemCore
	{
		weaponPoolAvailable=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			allowedslots[]={901,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class pasgt_cdg: ItemCore
	{
		weaponPoolAvailable=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			allowedslots[]={901,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class pasgt_gr: rhsgref_helmet_pasgt_woodland
	{
	class pasgt_grg: rhssaf_helmet_m97_woodland_black_ess_bare
	{
	};
	class pasgt_gra: rhsgref_helmet_pasgt_woodland
	{
	class pasgt_grag: rhssaf_helmet_m97_woodland_black_ess_bare
	{
	};
	class pasgt_grd: rhsgref_helmet_pasgt_woodland
	{
	class pasgt_grdg: rhssaf_helmet_m97_woodland_black_ess_bare
	{
	};
	class m93_gr: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93gr";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_gra: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93gra";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_grd: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93grd";
			containerClass="Supply40";
			mass=40;
		};
	};
	class carrier_gr: V_PlateCarrierIA1_dgtl
	{
		{
			containerClass="Supply120";
			mass=60;
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
                    passthrough=0.5;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
                    passthrough=0.5;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
                    passthrough=0.5;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;				};
			};
		};
	};
	class pasgt_id: rhsgref_helmet_pasgt_woodland
	{
	class pasgt_idd: rhsgref_helmet_pasgt_woodland
	{
	class m93_id: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93id";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_idd: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93idd";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m12_id: rhssaf_vest_md12_digital
	{
	class rhssaf_vest_md99_woodland_rifleman: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		descriptionShort="$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply90";
			mass=70;
		};
	};
	class rhssaf_vest_md99_woodland_rifleman_radio: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		descriptionShort="$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply90";
			mass=75;
		};
	};
	class rhssaf_vest_md98_rifleman: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=80;
		};
	};
	class m93_trk: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93trk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_irn: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93irn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_ird: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93ird";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_sf4: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93s4f";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_syr: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93syr";
			containerClass="Supply40";
			mass=40;
		};
	};
	class pasgt_trk: rhsgref_helmet_pasgt_woodland
	{
	class pasgt_irn: rhsgref_helmet_pasgt_woodland
	{
	class pasgt_ird: rhsgref_helmet_pasgt_woodland
	{
	class pasgt_s4f: rhsgref_helmet_pasgt_woodland
	{
	class pasgt_syr: rhsgref_helmet_pasgt_woodland
	{
	class m99_syr: rhssaf_vest_md99_woodland_rifleman
	{
	};
	class m99_syr_rad: rhssaf_vest_md99_woodland_rifleman_radio
	{
	};
	class m98_syr: rhssaf_vest_md98_rifleman
	{
	class m12_irn: rhssaf_vest_md12_digital
	{
	class m12_trk: rhssaf_vest_md12_digital
	{
	class pasgt_dc: rhsgref_helmet_pasgt_woodland
	{
	class m93_dc: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93dc";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m12_dc: rhssaf_vest_md12_digital
	{
	class CryGen3_m98: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_m98";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen3_m98g: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_m98g";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_m98: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93m98";
			containerClass="Supply40";
			mass=40;
		};
	};
	class opscorem98: rhsusf_opscore_cover
	{
			"",
			"ws_norway\Data\occover_m98_co",
			""
		};
	};
	class opscorem98c: rhsusf_opscore_cover
	{
			"",
			"ws_norway\Data\occover_m98_co",
			""
		};
	};
	class opscorem98sc: rhsusf_opscore_cover
	{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"ws_norway\Data\occover_m98_co",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class m12_m98: rhssaf_vest_md12_digital
	{
	class rhs_6b23_digi_6sh92_Spetsnaz: rhs_6b23_6sh92_radio
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=70;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=8;
                    passthrough=0.6;					simulation="RHS_Gost_2";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22 + 		3";
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor="22 + 		3";
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;					simulation="RHS_Gost_3";
				};
			};
		};
	};
	class rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz: rhs_6b23_6sh92_radio
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=75;
		};
	};
	class CryGen3_rus_emr: Uniform_Base
	{
		descriptionShort="Copy of Crye combat uniform produced by ANA";
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_rus_emr";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen3_rus_atacs: Uniform_Base
	{
		descriptionShort="Copy of Crye combat uniform produced by ANA";
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_rus_atacs";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen3_rus_mc: Uniform_Base
	{
		descriptionShort="Copy of Crye combat uniform produced by ANA";
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_rus_mc";
			containerClass="Supply40";
			mass=40;
		};
	};
	class opscorerf: rhsusf_opscore_cover
	{
			"",
			"ws_russia\Data\occover_atacs_co",
			""
		};
	};
	class opscorerfc: rhsusf_opscore_cover
	{
			"",
			"ws_russia\Data\occover_atacs_co",
			""
		};
	};
	class opscorerfcs: rhsusf_opscore_cover
	{
			"",
			"ws_russia\Data\occover_atacs_co",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class opscorerff: rhsusf_opscore_cover
	{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"ws_russia\Data\occover_atacs_co",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class gorkaEMR2: Uniform_Base
	{
		descriptionShort="Legendary original Gorka Suit by BARS";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_EMR2";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorka3: Uniform_Base
	{
		descriptionShort="Legendary original Gorka Suit by BARS";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_3";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkaskol: Uniform_Base
	{
		descriptionShort="Legendary original Gorka Suit by BARS";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_skol";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkacflora: Uniform_Base
	{
		descriptionShort="Gorka Suit by SSO";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_cflora";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkaspks: Uniform_Base
	{
		descriptionShort="Gorka Suit by SSO";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_spks";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkasurpat: Uniform_Base
	{
		descriptionShort="Gorka Suit by SSO";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_surpat";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkaleto: Uniform_Base
	{
		descriptionShort="Gorka Suit by SSO";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_leto";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkaemrd: Uniform_Base
	{
		descriptionShort="Camoufage suit from Ratnik program";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_emrd";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkaemrw: Uniform_Base
	{
		descriptionShort="Camoufage suit from Ratnik program";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_emrw";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkaemra: Uniform_Base
	{
		descriptionShort="Camoufage suit from Ratnik program";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_emra";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkaemrs: Uniform_Base
	{
		descriptionShort="Camoufage suit from Ratnik program";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_emrs";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkaksor: Uniform_Base
	{
		descriptionShort="Camoufage suit produced by ANA";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_ksor";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkaEMR: Uniform_Base
	{
		descriptionShort="Camoufage suit produced by ANA";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_EMR";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkaflora: Uniform_Base
	{
		descriptionShort="Camoufage suit produced by ANA";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_flora";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkasurpat2: Uniform_Base
	{
		descriptionShort="Camoufage suit produced by ANA";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_surpat2";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkaleto2: Uniform_Base
	{
		descriptionShort="Camoufage suit produced by ANA";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_leto2";
			containerClass="Supply50";
			mass=50;
		};
	};
	class gorkaskol2: Uniform_Base
	{
		descriptionShort="Camoufage suit produced by ANA";
		class ItemInfo: UniformItem
		{
			uniformClass="gorka_skol2";
			containerClass="Supply50";
			mass=50;
		};
	};
	class m88_ataka_w: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m88_ataka";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m88_black_w: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m88_black";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m88_mc_w: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m88_mc";
			containerClass="Supply40";
			mass=40;
		};
	};
	class v6b23spzb: rhs_6b23_6sh116
	{
		};
	};
	class v6b23spzbvog: rhs_6b23_6sh116_vog
	{
		};
	};
	class v6b23spzbg: rhs_6b23_6sh116
	{
		};
	};
	class v6b23spzbgvog: rhs_6b23_6sh116_vog
	{
		};
	};
	class v6b23spzbf: rhs_6b23_6sh116
	{
		};
	};
	class v6b23spzbfvog: rhs_6b23_6sh116_vog
	{
		};
	};
	class v6b23tan: rhs_6b23_6sh116
	{
		};
	};
	class v6b23tanvog: rhs_6b23_6sh116_vog
	{
		};
	};
	class v6b23spznew: rhs_6b23_digi_6sh92_Spetsnaz
	{
		descriptionShort="Enhanced 6B23 type vest used by MVD units";
	};
	class v6b23spznewvog: rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz
	{
		descriptionShort="Enhanced 6B23 type vest used by MVD units";
	};
	class hg_6b7_des: rhs_6b7_1m_emr
	{
	};
	class hg_6b7_des_ess: rhs_6b7_1m_emr_ess
	{
	};
	class rhsusf_mich_bare_alt: rhsusf_mich_bare
	{
		dlc="RHS_USAF";
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos_alt: rhsusf_mich_bare_norotos
	{
		dlc="RHS_USAF";
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class mich_rhino_rgr: rhsusf_mich_bare_alt
	{
		};
	};
	class mich_norotos_rgr: rhsusf_mich_bare_norotos_alt
	{
		};
	};
	class mich_rhino_blk: rhsusf_mich_bare_alt
	{
		};
	};
	class mich_norotos_blk: rhsusf_mich_bare_norotos_alt
	{
		};
	};
	class mich_rhino_od: rhsusf_mich_bare_alt
	{
		};
	};
	class mich_norotos_od: rhsusf_mich_bare_norotos_alt
	{
		};
	};
	class mich_rhino_tan: rhsusf_mich_bare_alt
	{
		};
	};
	class mich_norotos_tan: rhsusf_mich_bare_norotos_alt
	{
		};
	};
	class mich_rhino_spray1: rhsusf_mich_bare_alt
	{
		};
	};
	class mich_norotos_spray1: rhsusf_mich_bare_norotos_alt
	{
		};
	};
	class mich_rhino_spray2: rhsusf_mich_bare_alt
	{
		};
	};
	class mich_norotos_spray2: rhsusf_mich_bare_norotos_alt
	{
		};
	};
	class mich_rhino_spray3: rhsusf_mich_bare_alt
	{
		};
	};
	class mich_norotos_spray3: rhsusf_mich_bare_norotos_alt
	{
		};
	};
	class mich_rhino_spray4: rhsusf_mich_bare_alt
	{
		};
	};
	class mich_norotos_spray4: rhsusf_mich_bare_norotos_alt
	{
		};
	};
	class mbavr: rhsusf_mbav
	{
	};
	class mbavr_l: rhsusf_mbav_light
	{
	};
	class mbavr_r: rhsusf_mbav_rifleman
	{
	};
	class mbavr_mg: rhsusf_mbav_mg
	{
	};
	class mbavr_gl: rhsusf_mbav_grenadier
	{
	};
	class mbavr_m: rhsusf_mbav_medic
	{
	};
	class mbavkhk: rhsusf_mbav
	{
	};
	class mbavkhk_l: rhsusf_mbav_light
	{
	};
	class mbavkhk_r: rhsusf_mbav_rifleman
	{
	};
	class mbavkhk_mg: rhsusf_mbav_mg
	{
	};
	class mbavkhk_gl: rhsusf_mbav_grenadier
	{
	};
	class mbavkhk_m: rhsusf_mbav_medic
	{
	};
	class mbavblk: rhsusf_mbav
	{
	};
	class mbavblk_l: rhsusf_mbav_light
	{
	};
	class mbavblk_r: rhsusf_mbav_rifleman
	{
	};
	class mbavblk_mg: rhsusf_mbav_mg
	{
	};
	class mbavblk_gl: rhsusf_mbav_grenadier
	{
	};
	class mbavblk_m: rhsusf_mbav_medic
	{
	};
	class CryGen3_mtp: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_mtp";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_d85: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93d85";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_d852: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93d852";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_ddpm: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93ddpm";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhssaf_helmet_m97_olive_nocamo: rhssaf_helmet_base
	{
		dlc="RHS_SAF";
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class CryGen3_WD_GRN_C: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_WD_GRN";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen3_multicam_C: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_multicam";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen3_multicam_GRN_C: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_multicam_GRN";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen3_mctrp: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_mctrp";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen3_kryptek: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_kryptek";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen3_kryptek2: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_kryptek2";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen3_kryptek2_tan: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_kryptek2_tan";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen3_mcblk: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_mcblk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen3_dt: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_dt";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen3_ts: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_ts";
			containerClass="Supply40";
			mass=40;
		};
	};
	class CryGen3_tsm: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="Cry_Gen_tsm";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_od: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93od";
			containerClass="Supply40";
			mass=40;
		};
	};
	class m93_khk: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="m93khk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class pasgt_tan: rhssaf_helmet_m97_olive_nocamo
	{
	class opscorem: rhsusf_opscore_cover
	{
			"",
			"ws_uniforms2\Data\occover_mc_co",
			""
		};
	};
	class opscoremb: rhsusf_opscore_cover
	{
			"",
			"ws_uniforms2\Data\occover_mc_co",
			""
		};
	};
	class opscorems: rhsusf_opscore_cover
	{
			"",
			"ws_uniforms2\Data\occover_mc_co",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class opscoremcs: rhsusf_opscore_cover
	{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"ws_uniforms2\Data\occover_mc_co",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	};
	class opscoret: rhsusf_opscore_cover
	{
			"",
			"",
			""
		};
	};
	class opscoretc: rhsusf_opscore_cover
	{
			"",
			"",
			""
		};
	};
	class lbh_od: V_HarnessO_brn
	{
		};
		};
		class ItemInfo: VestItem
		{
			};
			containerClass="Supply90";
			mass=10;
			armor="2*3";
                    passthrough=0.75;		};
	};
	class m12_khk: rhssaf_vest_md12_digital
	{
	class m12_grn: rhssaf_vest_md12_digital
	{
	class rhssaf_helmet_m97_olive_nocamo_black_ess_bare: rhssaf_helmet_m97_olive_nocamo_black_ess
	{
		dlc="RHS_SAF";
		class ItemInfo: HeadgearItem
		{
			mass=42;
			allowedSlots[]={901,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhssaf_helmet_m97_olive_nocamo_black_ess: rhssaf_helmet_base
	{
		dlc="RHS_SAF";
		descriptionShort="$STR_RHSSAF_HELMET_M97_OLIVE_NOCAMO_BLACK_ESS_DESCRIPTIONSHORT";
		class ItemInfo: HeadgearItem
		{
			mass=42;
			allowedSlots[]={901,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class H_Helmet_Skate: H_HelmetB
	{
		_generalMacro="H_Helmet_Skate";
		DLC="Expansion";
		descriptionShort="$STR_A3_SP_AL_I";
		{
			mass=20;
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
                    passthrough=0.7;				};
			};
		};
	};
	class H_HelmetB_TI_tna_F: H_HelmetB
	{
		_generalMacro="H_HelmetB_TI_tna_F";
		DLC="Expansion";
		descriptionShort="$STR_A3_SP_AL_II";
		{
			mass=50;
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
				class Face
				{
					hitpointName="HitFace";
					armor=4;
                    passthrough=0.7;				};
			};
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class H_HelmetB_TI_arid_F: H_HelmetB_TI_tna_F
	{
		_generalMacro="H_HelmetB_TI_arid_F";
	class H_HelmetO_ViperSP_hex_F: H_HelmetB
	{
		_generalMacro="H_HelmetO_ViperSP_hex_F";
		DLC="Expansion";
		descriptionShort="$STR_A3_SP_AL_V";
		{
			mass=80;
			{
				class Head
				{
					hitpointName="HitHead";
					armor=12;
                    passthrough=0.7;				};
				class Face
				{
					hitpointName="HitFace";
					armor=8;
                    passthrough=0.7;				};
			};
		};
		subItems[]=
		{
			"Integrated_NVG_TI_1_F"
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class V_DeckCrew_base_F: Vest_Camo_Base
	{
		DLC="Jets";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply50";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=12;
                    passthrough=0.6;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=12;
                    passthrough=0.6;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
                    passthrough=0.6;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class V_DeckCrew_yellow_F: V_DeckCrew_base_F
	{
	class V_DeckCrew_blue_F: V_DeckCrew_base_F
	{
	class V_DeckCrew_green_F: V_DeckCrew_base_F
	{
	class V_DeckCrew_red_F: V_DeckCrew_base_F
	{
	class V_DeckCrew_white_F: V_DeckCrew_base_F
	{
	class V_DeckCrew_brown_F: V_DeckCrew_base_F
	{
	class V_DeckCrew_violet_F: V_DeckCrew_base_F
	{
	class B_Patrol_Soldier_Leader_weapon_F: arifle_MX_GL_F
	{
		_generalMacro="B_Patrol_Soldier_Leader_weapon_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_h_snd_F";
			};
		};
	};
	class B_Patrol_Soldier_Operator_weapon_F: arifle_MXC_F
	{
		_generalMacro="B_Patrol_Soldier_Operator_weapon_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_h_snd_F";
			};
		};
	};
	class B_Patrol_Soldier_Marksman_weapon_F: srifle_EBR_F
	{
		_generalMacro="B_Patrol_Soldier_Marksman_weapon_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B";
			};
		};
	};
	class B_Patrol_Soldier_Medic_weapon_F: arifle_MX_F
	{
		_generalMacro="B_Patrol_Soldier_Medic_weapon_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_h_snd_F";
			};
		};
	};
	class B_Patrol_Soldier_Autorifleman_weapon_F: arifle_MX_SW_F
	{
		_generalMacro="B_Patrol_Soldier_Autorifleman_weapon_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_h_snd_F";
			};
		};
	};
	class B_Patrol_Soldier_MachineGunner_weapon_F: LMG_Mk200_F
	{
		_generalMacro="B_Patrol_Soldier_MachineGunner_weapon_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_h_snd_F";
			};
		};
	};
	class B_Patrol_Soldier_HeavyGunner_weapon_F: LMG_Zafir_F
	{
		_generalMacro="B_Patrol_Soldier_HeavyGunner_weapon_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight";
			};
		};
	};
	class B_Patrol_Soldier_Carrier_weapon_F: arifle_MX_F
	{
		_generalMacro="B_Patrol_Soldier_Carrier_weapon_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_h_snd_F";
			};
		};
	};
	class B_Patrol_Soldier_Specialist_weapon_F: arifle_MX_F
	{
		_generalMacro="B_Patrol_Soldier_Specialist_weapon_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_snd";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_h_snd_F";
			};
		};
	};
	class B_Patrol_Soldier_Pistol_F: hgun_Pistol_heavy_01_F
	{
		_generalMacro="B_Patrol_Soldier_Pistol_F";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_MRD";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_acp";
			};
		};
	};
	class BombCluster_01_F: Bomb_04_Plane_CAS_01_F
	{
		magazines[]=
		{
			"PylonMissile_1Rnd_BombCluster_01_F",
			"PylonRack_2Rnd_BombCluster_01_F"
		};
		class LoalAltitude: LoalAltitude
		{
		};
	};
	class BombCluster_02_F: BombCluster_01_F
	{
		magazines[]=
		{
			"PylonMissile_1Rnd_BombCluster_02_F",
			"PylonMissile_1Rnd_BombCluster_02_cap_F"
		};
		class LoalAltitude: LoalAltitude
		{
		};
	};
	class BombCluster_03_F: BombCluster_01_F
	{
		magazines[]=
		{
			"PylonMissile_1Rnd_BombCluster_03_F",
			"PylonRack_2Rnd_BombCluster_03_F"
		};
		class LoalAltitude: LoalAltitude
		{
		};
	};
	class BombDemine_01_F: Bomb_04_Plane_CAS_01_F
	{
		magazines[]=
		{
			"PylonRack_4Rnd_BombDemine_01_F",
			"PylonRack_4Rnd_BombDemine_01_Dummy_F"
		};
		autoFire=0;
		reloadTime=0;
		cursorAim="";
		sounds[]=
		{
			"Bomb_Demine_Release"
		};
		class Bomb_Demine_Release
		{
			Bomb_Demine_Release_01[]=
			{
				"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_6_DemineDrone_Bomb_Release_01",
				3.9810717,
				1,
				20
			};
			Bomb_Demine_Release_02[]=
			{
				"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_6_DemineDrone_Bomb_Release_02",
				3.9810717,
				1,
				20
			};
			Bomb_Demine_Release_03[]=
			{
				"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_6_DemineDrone_Bomb_Release_03",
				3.9810717,
				1,
				20
			};
			Bomb_Demine_Release_04[]=
			{
				"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_6_DemineDrone_Bomb_Release_04",
				3.9810717,
				1,
				20
			};
			soundBegin[]=
			{
				"Bomb_Demine_Release_01",
				0.25,
				"Bomb_Demine_Release_02",
				0.25,
				"Bomb_Demine_Release_03",
				0.25,
				"Bomb_Demine_Release_04",
				0.25
			};
		};
		modes[]=
		{
			"this"
		};
		class EventHandlers
		{
			fired="_this call bis_fnc_firedBombDemine;";
		};
	};
	class Bomb_Leaflets: Bomb_04_Plane_CAS_01_F
	{
		magazines[]=
		{
			"1Rnd_Leaflets_West_F",
			"1Rnd_Leaflets_East_F",
			"1Rnd_Leaflets_Guer_F",
			"1Rnd_Leaflets_Civ_F",
			"1Rnd_Leaflets_Custom_01_F",
			"1Rnd_Leaflets_Custom_02_F",
			"1Rnd_Leaflets_Custom_03_F",
			"1Rnd_Leaflets_Custom_04_F",
			"1Rnd_Leaflets_Custom_05_F",
			"1Rnd_Leaflets_Custom_06_F",
			"1Rnd_Leaflets_Custom_07_F",
			"1Rnd_Leaflets_Custom_08_F",
			"1Rnd_Leaflets_Custom_09_F",
			"1Rnd_Leaflets_Custom_10_F",
			"Pylon_1Rnd_Leaflets_West_F",
			"Pylon_1Rnd_Leaflets_East_F",
			"Pylon_1Rnd_Leaflets_Guer_F",
			"Pylon_1Rnd_Leaflets_Civ_F",
			"Pylon_1Rnd_Leaflets_Custom_01_F",
			"Pylon_1Rnd_Leaflets_Custom_02_F",
			"Pylon_1Rnd_Leaflets_Custom_03_F",
			"Pylon_1Rnd_Leaflets_Custom_04_F",
			"Pylon_1Rnd_Leaflets_Custom_05_F",
			"Pylon_1Rnd_Leaflets_Custom_06_F",
			"Pylon_1Rnd_Leaflets_Custom_07_F",
			"Pylon_1Rnd_Leaflets_Custom_08_F",
			"Pylon_1Rnd_Leaflets_Custom_09_F",
			"Pylon_1Rnd_Leaflets_Custom_10_F"
		};
		cursorAim="";
		class EventHandlers
		{
			fired="['fired',_this] remoteExec ['bis_fnc_initLeaflet'];";
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"this"
		};
		sounds[]=
		{
			"Bomb_Leaflets_Release"
		};
		class Bomb_Leaflets_Release
		{
			Bomb_Leaflets_Release_01[]=
			{
				"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_06_Leaflets_Release_Ext_01",
				1,
				1,
				35
			};
			Bomb_Leaflets_Release_02[]=
			{
				"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_06_Leaflets_Release_Ext_02",
				1,
				1,
				35
			};
			Bomb_Leaflets_Release_03[]=
			{
				"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_06_Leaflets_Release_Ext_03",
				1,
				1,
				35
			};
			Bomb_Leaflets_Release_04[]=
			{
				"A3\Sounds_F_Orange\Vehicles\Air\UAV_06\UAV_06_Leaflets_Release_Ext_04",
				1,
				35
			};
			soundBegin[]=
			{
				"Bomb_Leaflets_Release_01",
				0.25,
				"Bomb_Leaflets_Release_02",
				0.25,
				"Bomb_Leaflets_Release_03",
				0.25,
				"Bomb_Leaflets_Release_04",
				0.25
			};
		};
	};
	class AmbulanceHorn: CarHorn
	{
		drySound[]=
		{
			"A3\Sounds_F_Orange\Vehicles\Soft\Van_02\Van_02_Ambulance_Siren_OneShot",
			1,
			1,
			200
		};
	};
	class PoliceHorn: CarHorn
	{
		drySound[]=
		{
			"A3\Sounds_F\vehicles\soft\Offroad_01\Offroad_01_Gendarmerie_Siren_OneShot",
			1,
			1,
			200
		};
	};
	class C_UavTerminal: UavTerminal_base
	{
		_generalMacro="C_UavTerminal";
		DLC="Orange";
		class ItemInfo: ItemInfo
		{
			side=3;
		};
	};
	class U_C_IDAP_Man_shorts_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_IDAP_Man_AidWorker_06_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_IDAP_Man_casual_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_IDAP_Man_AidWorker_05_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_IDAP_Man_cargo_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_IDAP_Man_AidWorker_01_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_IDAP_Man_Tee_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_IDAP_Man_AidWorker_04_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_IDAP_Man_Jeans_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_IDAP_Man_AidWorker_02_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_IDAP_Man_TeeShorts_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_IDAP_Man_AidWorker_03_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Paramedic_01_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Man_Paramedic_01_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_Mechanic_01_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Story_Mechanic_01_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_BG_Guerilla1_2_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="B_G_Story_Guerilla_01_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_ConstructionCoverall_Red_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Man_ConstructionWorker_01_Red_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_ConstructionCoverall_Vrana_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Man_ConstructionWorker_01_Vrana_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_ConstructionCoverall_Black_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Man_ConstructionWorker_01_Black_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class U_C_ConstructionCoverall_Blue_F: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformClass="C_Man_ConstructionWorker_01_Blue_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class H_Hat_Safari_base_F: HelmetBase
	{
		_generalMacro="H_Hat_Safari_base_F";
		DLC="Orange";
 
	};
	class H_Hat_Safari_sand_F: H_Hat_Safari_base_F
	{
		_generalMacro="H_Hat_Safari_sand_F";
	class H_Hat_Safari_olive_F: H_Hat_Safari_base_F
	{
		_generalMacro="H_Hat_Safari_olive_F";
	class H_Construction_basic_base_F: HelmetBase
	{
		_generalMacro="H_Construction_basic_base_F";
		DLC="Orange";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=2;
                    passthrough=0.7;				};
			};
		};
	};
	class H_Construction_basic_yellow_F: H_Construction_basic_base_F
	{
		_generalMacro="H_Construction_basic_yellow_F";
	class H_Construction_basic_white_F: H_Construction_basic_base_F
	{
		_generalMacro="H_Construction_basic_white_F";
	class H_Construction_basic_orange_F: H_Construction_basic_base_F
	{
		_generalMacro="H_Construction_basic_orange_F";
	class H_Construction_basic_red_F: H_Construction_basic_base_F
	{
		_generalMacro="H_Construction_basic_red_F";
	class H_Construction_basic_vrana_F: H_Construction_basic_base_F
	{
		_generalMacro="H_Construction_basic_vrana_F";
	class H_Construction_basic_black_F: H_Construction_basic_base_F
	{
		_generalMacro="H_Construction_basic_black_F";
	class H_Construction_earprot_base_F: HelmetBase
	{
		_generalMacro="H_Construction_earprot_base_F";
		DLC="Orange";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=2;
                    passthrough=0.7;				};
			};
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
	};
	class H_Construction_earprot_yellow_F: H_Construction_earprot_base_F
	{
		_generalMacro="H_Construction_earprot_yellow_F";
	class H_Construction_earprot_white_F: H_Construction_earprot_base_F
	{
		_generalMacro="H_Construction_earprot_white_F";
	class H_Construction_earprot_orange_F: H_Construction_earprot_base_F
	{
		_generalMacro="H_Construction_earprot_orange_F";
	class H_Construction_earprot_red_F: H_Construction_earprot_base_F
	{
		_generalMacro="H_Construction_earprot_red_F";
	class H_Construction_earprot_vrana_F: H_Construction_earprot_base_F
	{
		_generalMacro="H_Construction_earprot_vrana_F";
	class H_Construction_earprot_black_F: H_Construction_earprot_base_F
	{
		_generalMacro="H_Construction_earprot_black_F";
	class H_Construction_headset_base_F: HelmetBase
	{
		_generalMacro="H_Construction_headset_base_F";
		DLC="Orange";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=2;
                    passthrough=0.7;				};
			};
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
	};
	class H_Construction_headset_yellow_F: H_Construction_headset_base_F
	{
		_generalMacro="H_Construction_headset_yellow_F";
	class H_Construction_headset_white_F: H_Construction_headset_base_F
	{
		_generalMacro="H_Construction_headset_white_F";
	class H_Construction_headset_orange_F: H_Construction_headset_base_F
	{
		_generalMacro="H_Construction_headset_orange_F";
	class H_Construction_headset_red_F: H_Construction_headset_base_F
	{
		_generalMacro="H_Construction_headset_red_F";
	class H_Construction_headset_vrana_F: H_Construction_headset_base_F
	{
		_generalMacro="H_Construction_headset_vrana_F";
	class H_Construction_headset_black_F: H_Construction_headset_base_F
	{
		_generalMacro="H_Construction_headset_black_F";
	class H_EarProtectors_base_F: HelmetBase
	{
		_generalMacro="H_EarProtectors_base_F";
		DLC="Orange";
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
	};
	class H_EarProtectors_yellow_F: H_EarProtectors_base_F
	{
		_generalMacro="H_EarProtectors_yellow_F";
	class H_EarProtectors_white_F: H_EarProtectors_base_F
	{
		_generalMacro="H_EarProtectors_white_F";
	class H_EarProtectors_orange_F: H_EarProtectors_base_F
	{
		_generalMacro="H_EarProtectors_orange_F";
	class H_EarProtectors_red_F: H_EarProtectors_base_F
	{
		_generalMacro="H_EarProtectors_red_F";
	class H_EarProtectors_black_F: H_EarProtectors_base_F
	{
		_generalMacro="H_EarProtectors_black_F";
	class H_HeadSet_base_F: HelmetBase
	{
		_generalMacro="H_HeadSet_base_F";
		DLC="Orange";
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
	};
	class H_HeadSet_yellow_F: H_HeadSet_base_F
	{
		_generalMacro="H_HeadSet_yellow_F";
	class H_HeadSet_white_F: H_HeadSet_base_F
	{
		_generalMacro="H_HeadSet_white_F";
	class H_HeadSet_orange_F: H_HeadSet_base_F
	{
		_generalMacro="H_HeadSet_orange_F";
	class H_HeadSet_red_F: H_HeadSet_base_F
	{
		_generalMacro="H_HeadSet_red_F";
	class H_HeadSet_black_F: H_HeadSet_base_F
	{
		_generalMacro="H_HeadSet_black_F";
	class H_PASGT_basic_base_F: HelmetBase
	{
		_generalMacro="H_PASGT_basic_base_F";
		DLC="Orange";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class H_PASGT_basic_blue_press_F: H_PASGT_basic_base_F
	{
		_generalMacro="H_PASGT_basic_blue_press_F";
	class H_PASGT_basic_blue_F: H_PASGT_basic_base_F
	{
		_generalMacro="H_PASGT_basic_blue_F";
	class H_PASGT_basic_white_F: H_PASGT_basic_base_F
	{
		_generalMacro="H_PASGT_basic_white_F";
	class H_PASGT_basic_olive_F: H_PASGT_basic_base_F
	{
		_generalMacro="H_PASGT_basic_olive_F";
	class H_PASGT_basic_black_F: H_PASGT_basic_base_F
	{
		_generalMacro="H_PASGT_basic_black_F";
	class H_PASGT_neckprot_base_F: HelmetBase
	{
		_generalMacro="H_PASGT_neckprot_base_F";
		DLC="Orange";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=8;
                    passthrough=0.7;				};
			};
		};
	};
	class H_PASGT_neckprot_blue_press_F: H_PASGT_neckprot_base_F
	{
		_generalMacro="H_PASGT_neckprot_blue_press_F";
	class H_HeadBandage_base_F: HelmetBase
	{
		_generalMacro="H_HeadBandage_base_F";
		DLC="Orange";
 
	};
	class H_HeadBandage_stained_F: H_HeadBandage_base_F
	{
		_generalMacro="H_HeadBandage_stained_F";
	class H_HeadBandage_clean_F: H_HeadBandage_base_F
	{
		_generalMacro="H_HeadBandage_clean_F";
	class H_HeadBandage_bloody_F: H_HeadBandage_base_F
	{
		_generalMacro="H_HeadBandage_bloody_F";
	class H_Cap_White_IDAP_F: H_Cap_red
	{
		_generalMacro="H_Cap_White_IDAP_F";
		DLC="Orange";
	class H_Cap_Orange_IDAP_F: H_Cap_White_IDAP_F
	{
		_generalMacro="H_Cap_Orange_IDAP_F";
	class H_Cap_Black_IDAP_F: H_Cap_White_IDAP_F
	{
		_generalMacro="H_Cap_Black_IDAP_F";
	class H_WirelessEarpiece_base_F: HelmetBase
	{
		_generalMacro="H_WirelessEarpiece_base_F";
		DLC="Orange";
 
	};
	class H_WirelessEarpiece_F: H_WirelessEarpiece_base_F
	{
		_generalMacro="H_WirelessEarpiece_F";
	};
	class V_Plain_base_F: Vest_Camo_Base
	{
		_generalMacro="V_Plain_base_F";
		descriptionShort="$STR_A3_SP_noarmor";
		class ItemInfo: ItemInfo
		{
			mass=5;
		};
	};
	class V_Plain_medical_F: V_Plain_base_F
	{
		_generalMacro="V_Plain_medical_F";
	class V_Plain_crystal_F: V_Plain_base_F
	{
		_generalMacro="V_Plain_crystal_F";
	class V_Pocketed_base_F: Vest_Camo_Base
	{
		_generalMacro="V_Pocketed_base_F";
		descriptionShort="$STR_A3_SP_noarmor";
		class ItemInfo: ItemInfo
		{
			mass=15;
		};
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitpointName="HitChest";
				armor=2;
				passThrough=0.89999998;
			};
			class Diaphragm
			{
				hitpointName="HitDiaphragm";
				armor=2;
				passThrough=0.89999998;
			};
			class Abdomen
			{
				hitpointName="HitAbdomen";
				armor=2;
				passThrough=0.89999998;
			};
			class Body
			{
				hitpointName="HitBody";
				passThrough=0.89999998;
			};
		};
	};
	class V_Pocketed_olive_F: V_Pocketed_base_F
	{
		_generalMacro="V_Pocketed_olive_F";
	class V_Pocketed_coyote_F: V_Pocketed_base_F
	{
		_generalMacro="V_Pocketed_coyote_F";
	class V_Pocketed_black_F: V_Pocketed_base_F
	{
		_generalMacro="V_Pocketed_black_F";
	class V_Safety_base_F: Vest_Camo_Base
	{
		_generalMacro="V_Safety_base_F";
		descriptionShort="$STR_A3_SP_noarmor";
		class ItemInfo: ItemInfo
		{
			mass=5;
		};
	};
	class V_Safety_yellow_F: V_Safety_base_F
	{
		_generalMacro="V_Safety_yellow_F";
	class V_Safety_orange_F: V_Safety_base_F
	{
		_generalMacro="V_Safety_orange_F";
	class V_Safety_blue_F: V_Safety_base_F
	{
		_generalMacro="V_Safety_blue_F";
	class V_LegStrapBag_base_F: Vest_Camo_Base
	{
		_generalMacro="V_LegStrapBag_base_F";
		descriptionShort="$STR_A3_SP_noarmor";
		class ItemInfo: ItemInfo
		{
			mass=8;
		};
	};
	class V_LegStrapBag_black_F: V_LegStrapBag_base_F
	{
		_generalMacro="V_LegStrapBag_black_F";
	class V_LegStrapBag_coyote_F: V_LegStrapBag_base_F
	{
		_generalMacro="V_LegStrapBag_coyote_F";
	class V_LegStrapBag_olive_F: V_LegStrapBag_base_F
	{
		_generalMacro="V_LegStrapBag_olive_F";
	class V_EOD_base_F: Vest_Camo_Base
	{
		_generalMacro="V_EOD_base_F";
		DLC="Orange";
		descriptionShort="$STR_A3_SP_ER";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply30";
			mass=65;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
                    passthrough=0.7;				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
                    passthrough=0.7;				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
                    passthrough=0.75;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
                    passthrough=0.75;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
                    passthrough=0.5;				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
                    passthrough=0.5;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.75;				};
			};
		};
	};
	class V_EOD_blue_F: V_EOD_base_F
	{
		_generalMacro="V_EOD_blue_F";
	};
	class V_EOD_olive_F: V_EOD_base_F
	{
		_generalMacro="V_EOD_olive_F";
	};
	class V_EOD_coyote_F: V_EOD_base_F
	{
		_generalMacro="V_EOD_coyote_F";
	};
	class V_EOD_IDAP_blue_F: V_EOD_base_F
	{
		_generalMacro="V_EOD_IDAP_blue_F";
	};
	class U_O_officer_noInsignia_hex_F: Uniform_Base
	{
		_generalMacro="U_O_officer_noInsignia_hex_F";
		{
			uniformClass="O_A_officer_F";
			containerClass="Supply40";
			mass=60;
		};
	};
	class arifle_CTAR_blk_flash_F: arifle_CTAR_blk_F
	{
		_generalMacro="arifle_CTAR_blk_flash_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class arifle_CTAR_blk_aco_flash_F: arifle_CTAR_blk_F
	{
		_generalMacro="arifle_CTAR_blk_aco_flash_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_aco_grn";
			};
		};
	};
	class arifle_CTAR_blk_arco_flash_F: arifle_CTAR_blk_F
	{
		_generalMacro="arifle_CTAR_blk_arco_flash_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
		};
	};
	class arifle_CTARS_blk_flash_F: arifle_CTARS_blk_F
	{
		_generalMacro="arifle_CTARS_blk_flash_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class arifle_CTAR_GL_blk_aco_flash_F: arifle_CTAR_GL_blk_F
	{
		_generalMacro="arifle_CTAR_GL_blk_aco_flash_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_aco_grn";
			};
		};
	};
	class arifle_CTAR_GL_blk_arco_flash_F: arifle_CTAR_GL_blk_F
	{
		_generalMacro="arifle_CTAR_GL_blk_arco_flash_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
		};
	};
	class srifle_DMR_07_blk_F_arco_flash_F: srifle_DMR_07_blk_F
	{
		_generalMacro="srifle_DMR_07_blk_F_arco_flash_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Arco_blk_F";
			};
		};
	};
	class SMG_02_flash_F: SMG_02_F
	{
		_generalMacro="SMG_02_flash_F";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class launch_MRAWS_base_F: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"jsrs_smaw_shot_soundset",
					"jsrs_warhead_reverb_soundset"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			sounds[]=
			{
				"standardsound"
			};
			recoil="recoil_single_law";
			aiRateOfFire=7;
			aiRateOfFireDistance=600;
			dispersion=0.07;
			minRange=50;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.80000001;
			maxRange=700;
			maxRangeProbab=0.1;
		};
		_generalMacro="launch_MRAWS_base_F";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\a3\Weapons_F_Tank\Launchers\MRAWS\Data\Anim\MRAWS.rtm"
		};
		magazines[]=
		{
			"MRAWS_HEAT_F",
			"MRAWS_HE_F",
			"MRAWS_HEAT55_F"
		};
		reloadAction="ReloadRPG";
		recoil="recoil_rpg";
		maxZeroing=600;
		weaponInfoType="RscOpticsRangeFinderMRAWS";
		opticsZoomMin=0.1083;
		opticsZoomMax=0.1083;
		opticsZoomInit=0.1083;
		cameraDir="look";
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		modes[]=
		{
			"Single"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			0.25118864,
			1,
			10
		};
		soundFly[]=
		{
			"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\warfare\SoundFly1.ogg",
			1,
			1.5,
			500
		};
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=0.89999998;
		aimTransitionSpeed=0.5;
		dexterity=1.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.15000001,0.5};
				iconScale=0.25;
			};
			mass=145.5;
		};
		class Library
		{
			libTextDesc="$STR_A3_maaws_library1";
		};
		descriptionShort="$STR_A3_cfgweapons_launch_mraws_descriptionshort0";
		magazineWell[]=
		{
			"CBA_Carl_Gustaf"
		};
		ace_reloadlaunchers_enabled=1;
	};
	class launch_Vorona_base_F: Launcher_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Launcher_Vorona_Shot_SoundSet",
					"Launcher_Vorona_Tail_SoundSet"
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Titan",
					3.1622777,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			sounds[]=
			{
				"StandardSound"
			};
			recoil="recoil_empty";
			aiRateOfFire=24;
			aiRateOfFireDistance=2000;
			aiRateOfFireDispersion=-16;
			minRange=10;
			minRangeProbab=0.69999999;
			midRange=1000;
			midRangeProbab=0.89999998;
			maxRange=2000;
			maxRangeProbab=0.85000002;
		};
		_generalMacro="launch_Vorona_base_F";
		nameSound="aalauncher";
		weaponInfoType="RscOpticsRangeFinderVorona";
		magazines[]=
		{
			"Vorona_HEAT",
			"Vorona_HE"
		};
		cursor="missile";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Anim\Vorona.rtm"
		};
		reloadAction="ReloadRPG";
		recoil="recoil_empty";
		shotPos="muzzlePos2";
		shotEnd="muzzleEnd2";
		modes[]=
		{
			"Single"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Dry_Titan",
			0.15848932,
			1,
			18
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\reload_Titan",
			1,
			1,
			20
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Fly_Titan",
			0.63095737,
			1.5,
			300
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",
			0.31622776,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",
			0.31622776,
			2.5
		};
		value=20;
		canLock=0;
		weaponLockDelay=1.5;
		class Library
		{
			libTextDesc="$STR_A3_vorona_library1";
		};
		descriptionShort="$STR_A3_cfgweapons_launch_o_vorona_descriptionshort0";
		inertia=1.1;
		aimTransitionSpeed=1;
		dexterity=0.80000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=224.8;
		};
		class ItemInfo
		{
			priority=3;
		};
		class OpticsModes
		{
			{
				opticsID=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare=0;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"TI"
				};
				thermalMode[]={4,5};
				opticsDisablePeripherialVision=1;
				discretefov[]={0.0583333,0.0291667};
				discreteInitIndex=0;
			};
		};
		ace_reloadlaunchers_enabled=1;
	};
	class launcher_SPG9: MissileLauncher
	{
		class StandardSound
		{
			soundSetShot[]=
			{
				"Launcher_SPG9_Shot_SoundSet",
				"Launcher_SPG9_Tail_SoundSet"
			};
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.4125376,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		reloadTime=6;
		magazineReloadTime=6;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			1,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		holdsterAnimValue=1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			1.1,
			700
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"SPG9_HEAT",
			"SPG9_HE",
			"12rnd_SPG9_HEAT",
			"8rnd_SPG9_HE"
		};
		minRange=20;
		minRangeProbab=0.5;
		midRange=400;
		midRangeProbab=0.80000001;
		maxRange=1200;
		maxRangeProbab=0.80000001;
		aiRateOfFire=5;
		aiRateOfFireDistance=1000;
		aiRateOfFireDispersion=-2;
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				opticsZoomMin=0.175;
				opticsZoomMax=0.175;
				opticsZoomInit=0.175;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		canLock=0;
		weaponLockSystem=0;
		textureType="semi";
	};
	class cannon_20mm: autocannon_Base_F
	{
		FCSMaxLeadSpeed=0;
		muzzles[]=
		{
			"HE",
			"AP"
		};
		class HE: autocannon_Base_F
		{
			magazines[]=
			{
				"60Rnd_20mm_HE_shells"
			};
			magazineReloadTime=40;
			class player: player
			{
				dispersion=0.0018;
				reloadTime=0.2;
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
		class AP: autocannon_Base_F
		{
			magazines[]=
			{
				"60Rnd_20mm_AP_shells"
			};
			magazineReloadTime=40;
			class player: player
			{
				dispersion=0.00089999998;
				reloadTime=0.2;
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
	};
	class cannon_125mm_advanced: cannon_125mm
	{
		FCSMaxLeadSpeed=30.555599;
		FCSZeroingDelay=0.5;
		class player: player
		{
			dispersion=0.00054400001;
			reloadTime=5;
			magazineReloadTime=5;
		};
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Advanced_Reload_01",
			2.5118864,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\Cannon_125mm_Advanced_Reload_01",
			2.5118864,
			1,
			10
		};
	};
	class missiles_SAAMI: MissileLauncher
	{
		showAimCursorInternal=0;
		reloadTime=1;
		magazineReloadTime=50;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			1,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		magazines[]=
		{
			"4Rnd_70mm_SAAMI_missiles"
		};
		minRange=200;
		minRangeProbab=0.25;
		midRange=1500;
		midRangeProbab=0.89999998;
		maxRange=8000;
		maxRangeProbab=0.89999998;
		aiRateOfFire=30;
		aiRateOfFireDistance=8000;
		aiRateOfFireDispersion=-25;
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.5;
		textureType="semi";
		class StandardSound
		{
			soundSetShot[]=
			{
				"Static_Launcher_Titan_ATAA_Vehicle_Shot_SoundSet",
				"Static_Launcher_Titan_ATAA_Tail_SoundSet"
			};
		};
	};
	class missiles_Firefist: MissileLauncher
	{
		showAimCursorInternal=0;
		reloadTime=1;
		magazineReloadTime=30;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			1,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		magazines[]=
		{
			"2Rnd_127mm_Firefist_missiles"
		};
		minRange=75;
		minRangeProbab=0.5;
		midRange=500;
		midRangeProbab=0.89999998;
		maxRange=2500;
		maxRangeProbab=0.89999998;
		aiRateOfFire=45;
		aiRateOfFireDistance=4000;
		aiRateOfFireDispersion=-35;
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.30000001;
		textureType="semi";
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234097,
			2.5
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234097,
			1
		};
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			1.1,
			700
		};
		holdsterAnimValue=1;
		modes[]=
		{
			"direct",
			"topDown"
		};
		class Direct: MissileLauncher
		{
			textureType="semi";
			minRange=75;
			minRangeProbab=0.5;
			midRange=300;
			midRangeProbab=0.89999998;
			maxRange=2500;
			maxRangeProbab=0.80000001;
			aiRateOfFire=45;
			aiRateOfFireDistance=4000;
			aiRateOfFireDispersion=-35;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"Launcher_Firefist_Shot_SoundSet",
					"Launcher_Firefist_Tail_SoundSet"
				};
			};
		};
		class TopDown: Direct
		{
			textureType="topDown";
			minRange=160;
			minRangeProbab=0.60000002;
			midRange=800;
			midRangeProbab=0.94999999;
			maxRange=2500;
			maxRangeProbab=0.94999999;
		};
	};
	class missiles_Vorona: MissileLauncher
	{
		reloadTime=1;
		magazineReloadTime=8;
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",
			0.89125091,
			1,
			10
		};
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",
				1.4125376,
				1,
				1100
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			soundSetShot[]=
			{
				"Launcher_Vorona_Shot_SoundSet",
				"Launcher_Vorona_Tail_SoundSet"
			};
		};
		holdsterAnimValue=1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",
			1,
			1.1,
			700
		};
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",
			0.56234133,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",
			0.56234133,
			2.5
		};
		magazines[]=
		{
			"Vorona_HEAT",
			"Vorona_HE"
		};
		minRange=50;
		minRangeProbab=0.40000001;
		midRange=500;
		midRangeProbab=0.85000002;
		maxRange=2000;
		maxRangeProbab=0.85000002;
		aiRateOfFire=24;
		aiRateOfFireDistance=2000;
		aiRateOfFireDispersion=-16;
		canLock=0;
		weaponLockSystem=0;
		textureType="semi";
	};
	class MMG_01_vehicle: LMG_RCWS
	{
		descriptionShort="$STR_A3_CfgWeapons_MMG_01_hex_F1";
		magazines[]=
		{
			"150Rnd_93x64_Mag"
		};
		magazineReloadTime=10;
		ballisticsComputer=2;
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.25118864,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.25118864,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.25118864,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.25118864,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		drySound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Dry",
			0.17782794,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_reload",
			0.50118721,
			1,
			10
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class manual: MGun
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_01",
					0.63095737,
					1,
					10
				};
				closure2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_02",
					0.63095737,
					1,
					10
				};
				closure3[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Closure_03",
					0.63095737,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.33000001,
					"closure2",
					0.33000001,
					"closure3",
					0.34
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_01",
					1.5848932,
					1,
					1200
				};
				begin2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_02",
					1.5848932,
					1,
					1200
				};
				begin3[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_short_03",
					1.5848932,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_interior",
							1.4125376,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_forest",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_houses",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_meadows",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_tail_trees",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_01",
					1.5848932,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_02",
					1.5848932,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_short_03",
					1.5848932,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_interior",
							1.4125376,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\silencer_MMG_01_tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			soundContinuous=0;
			soundBurst=0;
			dispersion=0.0014;
			reloadTime=0.085714303;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=16;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=6;
			burstRangeMax=12;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=12;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=250;
			minRange=150;
			minRangeProbab=0.69999999;
			midRange=600;
			midRangeProbab=0.64999998;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=8;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=600;
			minRange=600;
			minRangeProbab=0.64999998;
			midRange=800;
			midRangeProbab=0.40000001;
			maxRange=1200;
			maxRangeProbab=0.1;
		};
		class GunParticles
		{
			class effect1
			{
				positionName="muzzle_2_beg";
				directionName="muzzle_2_end";
				effectName="MachineGunCloud";
			};
			class effect2
			{
				positionName="machinegun_2_eject_pos";
				directionName="machinegun_2_eject_dir";
				effectName="MachineGunCartridge338";
			};
		};
	};
	class MMG_02_coax: MMG_02_vehicle
	{
		showAimCursorInternal=0;
		ballisticsComputer="2 + 16";
		magazines[]=
		{
			"130Rnd_338_Mag",
			"200Rnd_338_Mag"
		};
		magazineReloadTime=10;
		class manual: manual
		{
			reloadTime=0.085714303;
		};
		class GunParticles
		{
			class effect1
			{
				positionName="muzzle_2_beg";
				directionName="muzzle_2_end";
				effectName="MachineGunCloud";
			};
		};
	};
	class autocannon_30mm_RCWS: autocannon_Base_F
	{
		magazines[]=
		{
			"60Rnd_30mm_MP_shells_Tracer_Green"
		};
		magazineReloadTime=40;
		class player: player
		{
			reloadTime=0.133333;
		};
		class close: player
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=6;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=200;
			minRange=0;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.80000001;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=5;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=600;
			minRange=600;
			minRangeProbab=0.75;
			midRange=800;
			midRangeProbab=0.80000001;
			maxRange=1200;
			maxRangeProbab=0.80000001;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=3;
			aiRateOfFire=2;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1000;
			minRange=1000;
			minRangeProbab=0.80000001;
			midRange=1500;
			midRangeProbab=0.80000001;
			maxRange=2000;
			maxRangeProbab=0.69999999;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=2;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1800;
			minRange=1800;
			minRangeProbab=0.74000001;
			midRange=2400;
			midRangeProbab=0.64999998;
			maxRange=3000;
			maxRangeProbab=0.050000001;
		};
		class GunParticles
		{
			class Effect
			{
				effectName="AutoCannonFired";
				positionName="Usti hlavne2";
				directionName="Konec hlavne2";
			};
		};
	};
	class HMG_127_AFV: HMG_127
	{
		class GunParticles
		{
			class effect1
			{
				positionName="muzzle_beg";
				directionName="muzzle_end";
				effectName="MachineGunCloud";
			};
		};
	};
	class launch_MRAWS_olive_F: launch_MRAWS_base_F
	{
		_generalMacro="launch_MRAWS_olive_F";
		baseWeapon="launch_MRAWS_olive_F";
	};
	class launch_MRAWS_olive_rail_F: launch_MRAWS_olive_F
	{
		_generalMacro="launch_MRAWS_olive_rail_F";
		baseWeapon="launch_MRAWS_olive_rail_F";
		weaponInfoType="RscWeaponEmpty";
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
	};
	class launch_MRAWS_green_F: launch_MRAWS_base_F
	{
		_generalMacro="launch_MRAWS_green_F";
		baseWeapon="launch_MRAWS_green_F";
	};
	class launch_MRAWS_green_rail_F: launch_MRAWS_olive_rail_F
	{
		_generalMacro="launch_MRAWS_green_rail_F";
		baseWeapon="launch_MRAWS_green_rail_F";
	};
	class launch_MRAWS_sand_F: launch_MRAWS_base_F
	{
		_generalMacro="launch_MRAWS_sand_F";
		baseWeapon="launch_MRAWS_sand_F";
	};
	class launch_MRAWS_sand_rail_F: launch_MRAWS_olive_rail_F
	{
		_generalMacro="launch_MRAWS_sand_rail_F";
		baseWeapon="launch_MRAWS_sand_rail_F";
	};
	class launch_O_Vorona_brown_F: launch_Vorona_base_F
	{
		_generalMacro="launch_O_Vorona_brown_F";
	};
	class launch_O_Vorona_green_F: launch_Vorona_base_F
	{
		_generalMacro="launch_O_Vorona_green_F";
	};
	class H_Tank_base_F: HelmetBase
	{
		_generalMacro="H_Tank_base_F";
		DLC="Tank";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.80000001;
				};
			};
		};
	};

	class H_HelmetHBK_base_F: HelmetBase
	{
		DLC="Enoch";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class H_HelmetHBK_headset_base_F: H_HelmetHBK_base_F
	{
		class ItemInfo: ItemInfo
		{
			mass=35;
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class H_HelmetHBK_ear_base_F: H_HelmetHBK_base_F
	{
		class ItemInfo: ItemInfo
		{
			mass=40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=7;
                    passthrough=0.7;				};
			};
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class H_HelmetHBK_chops_base_F: H_HelmetHBK_base_F
	{
		class ItemInfo: ItemInfo
		{
			mass=50;
			class HitpointsProtectionInfo: HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=7;
                    passthrough=0.7;				};
				class Face
				{
					hitpointName="HitFace";
					armor=3;
                    passthrough=0.2;				};
			};
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class H_HelmetHBK_F: H_HelmetHBK_base_F
	{
		_generalMacro="H_HelmetHBK_F";
	class H_HelmetHBK_headset_F: H_HelmetHBK_headset_base_F
	{
		_generalMacro="H_HelmetHBK_headset_F";
	class H_HelmetHBK_ear_F: H_HelmetHBK_ear_base_F
	{
		_generalMacro="H_HelmetHBK_ear_F";
	class H_HelmetHBK_chops_F: H_HelmetHBK_chops_base_F
	{
		_generalMacro="H_HelmetHBK_chops_F";
	class H_HelmetAggressor_base_F: HelmetBase
	{
		DLC="Enoch";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
                    passthrough=0.7;				};
			};
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class H_HelmetAggressor_cover_base_F: H_HelmetAggressor_base_F
	{
 
	};
	class H_HelmetAggressor_F: H_HelmetAggressor_base_F
	{
		_generalMacro="H_HelmetAggressor_F";
	class H_HelmetAggressor_cover_F: H_HelmetAggressor_cover_base_F
	{
		_generalMacro="H_HelmetAggressor_cover_F";
	class H_HelmetAggressor_cover_taiga_F: H_HelmetAggressor_cover_base_F
	{
		_generalMacro="H_HelmetAggressor_cover_taiga_F";
	class H_Beret_EAF_01_F: H_Beret_blk
	{
		_generalMacro="H_Beret_EAF_01_F";
		DLC="Enoch";
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
		};
	};
	class H_Hat_Tinfoil_base_F: HelmetBase
	{
		_generalMacro="H_Hat_Tinfoil_base_F";
		DLC="Contact";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
			};
		};
	};
	class H_Hat_Tinfoil_F: H_Hat_Tinfoil_base_F
	{
		_generalMacro="H_Hat_Tinfoil_F";
	};
	class H_Booniehat_mgrn: H_Booniehat_khk
	{
		_generalMacro="H_Booniehat_mgrn";
		DLC="Enoch";
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Booniehat_taiga: H_Booniehat_khk
	{
		_generalMacro="H_Booniehat_taiga";
		DLC="Enoch";
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Booniehat_eaf: H_Booniehat_khk
	{
		_generalMacro="H_Booniehat_eaf";
		DLC="Enoch";
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_Booniehat_wdl: H_Booniehat_khk
	{
		_generalMacro="H_Booniehat_wdl";
		DLC="Enoch";
		{
			"",
			6.5,
			"G_Aviator",
			1,
			"G_Bandanna_aviator",
			1,
			"G_Bandanna_beast",
			1,
			"G_Bandanna_blk",
			1,
			"G_Bandanna_khk",
			1,
			"G_Bandanna_oli",
			1,
			"G_Bandanna_shades",
			1,
			"G_Bandanna_sport",
			1,
			"G_Bandanna_tan",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
	};
	class H_MilCap_grn: H_MilCap_ocamo
	{
		_generalMacro="H_MilCap_grn";
		DLC="Enoch";
	class H_MilCap_taiga: H_MilCap_ocamo
	{
		_generalMacro="H_MilCap_taiga";
		DLC="Enoch";
	class H_MilCap_wdl: H_MilCap_ocamo
	{
		_generalMacro="H_MilCap_wdl";
		DLC="Enoch";
	class H_MilCap_eaf: H_MilCap_ocamo
	{
		_generalMacro="H_MilCap_wdl";
		DLC="Enoch";
	class H_HelmetB_plain_wdl: H_HelmetB_plain_mcamo
	{
		_generalMacro="H_HelmetB_plain_wdl";
		DLC="Enoch";
	class H_HelmetB_light_wdl: H_HelmetB_light
	{
		_generalMacro="H_HelmetB_light_wdl";
		DLC="Enoch";
	class H_HelmetSpecB_wdl: H_HelmetSpecB
	{
		_generalMacro="H_HelmetSpecB_wdl";
		DLC="Enoch";
	class H_HelmetCrew_I_E: H_HelmetCrew_I
	{
		_generalMacro="H_HelmetCrew_I_E";
		DLC="Enoch";
	};
	class H_Tank_eaf_F: H_Tank_black_F
	{
		_generalMacro="H_Tank_eaf_F";
		DLC="Enoch";
	};
	class H_PilotHelmetFighter_I_E: H_PilotHelmetFighter_O
	{
		_generalMacro="H_PilotHelmetFighter_I_E";
		DLC="Enoch";
 
	};
	class H_PilotHelmetHeli_I_E: H_PilotHelmetHeli_O
	{
		_generalMacro="H_PilotHelmetFighter_I_E";
 
	};
	class H_CrewHelmetHeli_I_E: H_CrewHelmetHeli_O
	{
		_generalMacro="H_CrewHelmetHeli_I_E";
 
	};
	class V_CarrierRigKBT_01_base_F: Vest_Camo_Base
	{
		descriptionShort="$STR_A3_SP_AL_III";
		class ItemInfo: ItemInfo
		{
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
                    passthrough=0.5;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
                    passthrough=0.5;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
                    passthrough=0.5;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;				};
			};
		};
	};
	class V_CarrierRigKBT_01_light_base_F: V_CarrierRigKBT_01_base_F
	{
		descriptionShort="$STR_A3_SP_AL_III";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply130";
			mass=70;
		};
	};
	class V_CarrierRigKBT_01_heavy_base_F: V_CarrierRigKBT_01_base_F
	{
		descriptionShort="$STR_A3_SP_ER";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply130";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=0.5;
                    passthrough=0.7;				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
                    passthrough=0.7;				};
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
                    passthrough=0.75;				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
                    passthrough=0.75;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
                    passthrough=0.5;				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
                    passthrough=0.5;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.75;				};
			};
		};
	};
	class V_CarrierRigKBT_01_EAF_F: V_CarrierRigKBT_01_base_F
	{
		_generalMacro="V_CarrierRigKBT_01_EAF_F";
	class V_CarrierRigKBT_01_light_EAF_F: V_CarrierRigKBT_01_light_base_F
	{
		_generalMacro="V_CarrierRigKBT_01_light_EAF_F";
	class V_CarrierRigKBT_01_heavy_EAF_F: V_CarrierRigKBT_01_heavy_base_F
	{
		_generalMacro="V_CarrierRigKBT_01_heavy_EAF_F";
	class V_CarrierRigKBT_01_Olive_F: V_CarrierRigKBT_01_base_F
	{
		_generalMacro="V_CarrierRigKBT_01_Olive_F";
	class V_CarrierRigKBT_01_light_Olive_F: V_CarrierRigKBT_01_light_base_F
	{
		_generalMacro="V_CarrierRigKBT_01_light_Olive_F";
	class V_CarrierRigKBT_01_heavy_Olive_F: V_CarrierRigKBT_01_heavy_base_F
	{
		_generalMacro="V_CarrierRigKBT_01_heavy_Olive_F";
	class V_SmershVest_01_base_F: Vest_Camo_Base
	{
		};
		DLC="Enoch";
		descriptionShort="$STR_A3_SP_NOARMOR";
		class ItemInfo: ItemInfo
		{
			};
			containerClass="Supply160";
			mass=30;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};
		class ItemInfo: HeadgearItem
		{
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhs_fieldcap_vsr: rhs_fieldcap
	{
	class rhs_fieldcap_digi: rhs_fieldcap
	{
		{
		};
	};
	class rhs_fieldcap_digi2: rhs_fieldcap
	{
		{
		};
	};
	class rhs_fieldcap_digi_des: rhs_fieldcap_digi
	{
	class rhs_fieldcap_ml: rhs_fieldcap
	{
	class rhs_fieldcap_khk: rhs_fieldcap
	{
	class rhs_fieldcap_helm: rhs_fieldcap
	{
		class ItemInfo: ItemInfo
		{
			mass=20;
		};
	};
	class rhs_fieldcap_helm_digi: rhs_fieldcap_helm
	{
 
	};
	class rhs_fieldcap_helm_ml: rhs_fieldcap_helm
	{
	};
	class rhs_fieldcap_izlom: rhs_fieldcap_digi2
	{
		{
		};
	};
	class rhs_beanie: H_HelmetB
	{
		dlc="RHS_AFRF";
		allowedFacewear[]=
		{
			"",
			8,
			"rhs_scarf",
			1,
			"G_Aviator",
			1
		};
		class ItemInfo: HeadgearItem
		{
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhs_beanie_green: rhs_beanie
	{
	class rhs_6b26: H_HelmetB
	{
		dlc="RHS_AFRF";
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		{
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhs_6b26_bala: rhs_6b26
	{
		allowedFacewear[]={};
 
	};
	class rhs_6b26_ess: rhs_6b26
	{
		allowedFacewear[]=
		{
			"rhs_scarf",
			"G_Aviator"
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhs_6b26_ess_bala: rhs_6b26
	{
		allowedFacewear[]={};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhs_6b26_green: rhs_6b26
	{
 
	};
	class rhs_6b26_bala_green: rhs_6b26_green
	{
		allowedFacewear[]={};
 
	};
	class rhs_6b26_ess_green: rhs_6b26_green
	{
 
	};
	class rhs_6b26_ess_bala_green: rhs_6b26_green
	{
		allowedFacewear[]={};
 
	};
	class rhs_6b26_digi: rhs_6b26
	{
		dlc="RHS_AFRF";
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
	class rhs_6b26_digi_bala: rhs_6b26_digi
	{
		allowedFacewear[]={};
 
	};
	class rhs_6b26_digi_ess: rhs_6b26_digi
	{
		allowedFacewear[]=
		{
			"rhs_scarf",
			"G_Aviator"
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhs_6b26_digi_ess_bala: rhs_6b26_digi
	{
		allowedFacewear[]={};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhs_6b27m: H_HelmetB
	{
		dlc="RHS_AFRF";
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		{
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhs_6b27m_digi: rhs_6b27m
	{
	class rhs_6b27m_ml: rhs_6b27m
	{
	class rhs_6b27m_ess_bala: rhs_6b27m
	{
		allowedFacewear[]={};
		class ItemInfo: ItemInfo
		{
			mass=34.32;
		};
	};
	class rhs_6b27m_digi_ess_bala: rhs_6b27m_ess_bala
	{
	class rhs_6b27m_ML_ess_bala: rhs_6b27m_ess_bala
	{
	class rhs_6b27m_bala: rhs_6b27m
	{
		allowedFacewear[]={};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhs_6b27m_digi_bala: rhs_6b27m_bala
	{
	class rhs_6b27m_ml_bala: rhs_6b27m_bala
	{
	class rhs_6b27m_ess: rhs_6b27m
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhs_6b27m_digi_ess: rhs_6b27m_ess
	{
	class rhs_6b27m_ml_ess: rhs_6b27m_ess
	{
	class rhs_6b27m_green: rhs_6b27m
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
 
	};
	class rhs_6b27m_green_ess: rhs_6b27m_ess
	{
 
	};
	class rhs_6b27m_green_bala: rhs_6b27m_bala
	{
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhs_6b27m_green_ess_bala: rhs_6b27m_ess_bala
	{
 
	};
	class rhs_6b28: rhs_6b27m
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		{
			mass=40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhs_6b28_flora: rhs_6b28
	{
	class rhs_6b28_ess: rhs_6b28
	{
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhs_6b28_flora_ess: rhs_6b28_ess
	{
	class rhs_6b28_bala: rhs_6b28
	{
		allowedFacewear[]={};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhs_6b28_flora_bala: rhs_6b28_bala
	{
	class rhs_6b28_ess_bala: rhs_6b28
	{
		allowedFacewear[]={};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhs_6b28_flora_ess_bala: rhs_6b28_ess_bala
	{
	class rhs_6b28_green: rhs_6b28
	{
		{
		};
	};
	class rhs_6b28_green_ess: rhs_6b28_ess
	{
		{
		};
	};
	class rhs_6b28_green_bala: rhs_6b28
	{
		allowedFacewear[]={};
		{
		};
	};
	class rhs_6b28_green_ess_bala: rhs_6b28
	{
		allowedFacewear[]={};
		{
		};
	};
	class rhs_Booniehat_digi: ItemCore
	{
		dlc="RHS_AFRF";
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		weaponPoolAvailable=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
	};
	class rhs_Booniehat_flora: rhs_Booniehat_digi
	{
	class rhs_ssh68: rhs_6b27m
	{
		allowedFacewear[]=
		{
			"",
			8,
			"rhs_scarf",
			1,
			"G_Aviator",
			1
		};
		{
			{
				class Head
				{
					hitpointName="HitHead";
					armor=2;
                    passthrough=0.7;				};
			};
		};
	};
	class rhs_zsh7a: H_HelmetB
	{
		dlc="RHS_AFRF";
		{
			mass=11;
			allowedSlots[]={801,901,701,605};
			{
				class Head
				{
					hitpointName="HitHead";
					armor=2;
                    passthrough=0.7;				};
			};
		};
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
	class rhs_zsh7a_alt: rhs_zsh7a
	{
 
		ACE_Protection=1;
	};
	class rhs_zsh7a_mike: rhs_zsh7a
	{
 
	};
	class rhs_zsh7a_mike_green: rhs_zsh7a_mike
	{
		{
	};
	class rhs_zsh7a_mike_alt: rhs_zsh7a_mike
	{
 
		ACE_Protection=1;
	};
	class rhs_zsh7a_mike_green_alt: rhs_zsh7a_mike_green
	{
 
		ACE_Protection=1;
	};
	class rhs_gssh18: H_HelmetB
	{
		dlc="RHS_AFRF";
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.5;
	};
	class rhs_6m2: H_HelmetB
	{
		dlc="RHS_AFRF";
			allowedSlots[]={801,901,701,605};
		};
	};
	class rhs_6m2_1: rhs_6m2
	{
		dlc="RHS_AFRF";
 
	};
	class rhs_tsh4: H_HelmetB
	{
		dlc="RHS_AFRF";
		allowedFacewear[]=
		{
			"",
			3,
			"rhs_scarf",
			5,
			"G_Aviator",
			2
		};
		{
			mass=5;
		};
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
	class rhs_tsh4_ess: rhs_tsh4
	{
		allowedFacewear[]=
		{
			"",
			3,
			"rhs_scarf",
			7
		};
		class ItemInfo: ItemInfo
		{
			mass=6;
		};
	};
	class rhs_tsh4_bala: rhs_tsh4
	{
		allowedFacewear[]={};
		class ItemInfo: ItemInfo
		{
			mass=6;
		};
	};
	class rhs_tsh4_ess_bala: rhs_tsh4
	{
		allowedFacewear[]={};
		class ItemInfo: ItemInfo
		{
			mass=6;
		};
	};
	class rhs_6b47: rhs_6b28
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
 
	};
	class rhs_6b47_bala: rhs_6b47
	{
		dlc="RHS_AFRF";
		allowedFacewear[]={};
		};
		};
		class ItemInfo: ItemInfo
		{
			};
		};
	};
	class rhs_6b47_ess: rhs_6b47
	{
 
	};
	class rhs_6b47_ess_bala: rhs_6b47
	{
		allowedFacewear[]={};
		};
		};
		class ItemInfo: ItemInfo
		{
			};
		};
	};
	class rhs_6b47_6m2: rhs_6b47
	{
 
	};
	class rhs_6b47_6m2_1: rhs_6b47
	{
 
	};
	class rhs_6b7_1m: rhs_6b28
	{
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_scarf",
			2,
			"G_Aviator",
			1
		};
		{
		};
	};
	class rhs_6b7_1m_ess: rhs_6b7_1m
	{
 
	};
	class rhs_6b7_1m_ess_bala: rhs_6b7_1m
	{
		allowedFacewear[]={};
 
	};
	class rhs_6b7_1m_bala1: rhs_6b7_1m
	{
		allowedFacewear[]={};
 
	};
	class rhs_6b7_1m_bala1_emr: rhs_6b7_1m_bala1
	{
		allowedFacewear[]={};
		};
		};
		class ItemInfo: ItemInfo
		{
			};
			};
		};
	};
	class rhs_6b7_1m_emr_ess_bala: rhs_6b7_1m_bala1
	{
		allowedFacewear[]={};
		};
		};
		class ItemInfo: ItemInfo
		{
			};
			};
		};
	};
	class rhs_6b7_1m_bala1_flora: rhs_6b7_1m_bala1_emr
	{
		};
		class ItemInfo: ItemInfo
		{
			};
			};
		};
	};
	class rhs_6b7_1m_bala1_olive: rhs_6b7_1m_bala1_emr
	{
		};
		class ItemInfo: ItemInfo
		{
			};
			};
		};
	};
	class rhs_6b7_1m_bala2: rhs_6b7_1m
	{
		allowedFacewear[]={};
 
	};
	class rhs_6b7_1m_bala2_emr: rhs_6b7_1m_bala2
	{
		allowedFacewear[]={};
		};
		};
		class ItemInfo: ItemInfo
		{
			};
			};
		};
	};
	class rhs_6b7_1m_bala2_flora: rhs_6b7_1m_bala2_emr
	{
		};
		};
		class ItemInfo: ItemInfo
		{
			};
			};
		};
	};
	class rhs_6b7_1m_bala2_olive: rhs_6b7_1m_bala2_emr
	{
		};
		};
		class ItemInfo: ItemInfo
		{
			};
			};
		};
	};
	class rhs_6b7_1m_flora: rhs_6b7_1m_emr
	{
	};
	class rhs_6b7_1m_flora_ns3: rhs_6b7_1m_flora
	{
 
	};
	class rhs_6b7_1m_olive: rhs_6b7_1m_emr
	{
	};
	class rhs_altyn: rhs_6b7_1m_emr
	{
		allowedFacewear[]={};
		{
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhs_altyn_bala: rhs_altyn
	{
 
	};
	class rhs_altyn_visordown: rhs_altyn
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
				class Face
				{
					hitpointName="HitFace";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhs_altyn_novisor: rhs_altyn
	{
 
	};
	class rhs_altyn_novisor_bala: rhs_altyn_novisor
	{
 
	};
	class rhs_altyn_novisor_ess: rhs_altyn
	{
 
	};
	class rhs_altyn_novisor_ess_bala: rhs_altyn_novisor_ess
	{
 
	};
	class rhs_zsh12: rhs_altyn_novisor
	{
		dlc="RHS_AFRF";
	};
	class rhs_zsh12_black: rhs_zsh12
	{
		dlc="RHS_AFRF";
	};
	class rhs_zsh12_bala: rhs_altyn_novisor_bala
	{
		dlc="RHS_AFRF";
	};
	class rhs_1PN138: NVGoggles
	{
		dlc="RHS_AFRF";
		descriptionShort="1PN138 Monocular Night Vision Device";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			mass=15;
		};
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_4096.paa";
		ace_nightvision_bluRadius=0.13;
	};
	class rhs_6m2_nvg: rhs_1PN138
	{
		visionMode[]=
		{
			"Normal",
			"Normal"
		};
		descriptionShort="No Armor";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			mass=1;
		};
	};
	class rhs_6m2_1_nvg: rhs_6m2_nvg
	{
 
	};
	class rhs_beret_vdv1: rhs_Booniehat_flora
	{
		dlc="RHS_AFRF";
		allowedFacewear[]=
		{
			"",
			8,
			"rhs_scarf",
			1,
			"G_Aviator",
			1
		};
		weaponPoolAvailable=1;
		class ItemInfo: HeadgearItem
		{
			mass=5;
			allowedSlots[]={801,901,701,605};
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhs_beret_vdv2: rhs_beret_vdv1
	{
		{
		};
	};
	class rhs_beret_mp1: rhs_beret_vdv1
	{
		{
		};
	};
	class rhs_beret_milp: rhs_beret_vdv1
	{
		{
		};
	};
	class rhs_beret_vdv3: rhs_beret_milp
	{
	class rhs_beret_mp2: rhs_beret_vdv1
	{
		{
		};
	};
	class rhs_beret_mvd: rhs_beret_milp
	{
		{
		};
	};
	class rhs_ssh60: rhs_ssh68
	{
		{
	};
	class rhs_ssh68_2: rhs_ssh68
	{
		{
	};
	class rhs_stsh81: rhs_ssh68
	{
		{
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
			mass=40;
		};
	};
	class rhs_stsh81_butan: rhs_stsh81
	{
		{
		};
	};
	class rhs_fieldcap_m88: rhs_beanie
	{
		class ItemInfo: HeadgearItem
		{
	};
	class rhs_fieldcap_m88_ttsko: rhs_fieldcap_m88
	{
	class rhs_fieldcap_m88_ttsko_alt: rhs_fieldcap_m88
	{
	class rhs_fieldcap_m88_ttsko_vdv: rhs_fieldcap_m88
	{
	class rhs_fieldcap_m88_moldovan_ttsko_cold: rhs_fieldcap_m88
	{
	class rhs_fieldcap_m88_moldovan_ttsko_hot: rhs_fieldcap_m88
	{
	class rhs_fieldcap_m88_moldovan_ttsko_desat: rhs_fieldcap_m88
	{
	class rhs_fieldcap_m88_moldovan_ttsko_blue: rhs_fieldcap_m88
	{
	class rhs_fieldcap_m88_vsr: rhs_fieldcap_m88
	{
	class rhs_fieldcap_m88_vsr_2: rhs_fieldcap_m88
	{
	class rhs_fieldcap_m88_grey: rhs_fieldcap_m88
	{
	class rhs_fieldcap_m88_klmk: rhs_fieldcap_m88
	{
	class rhs_fieldcap_m88_woodland: rhs_fieldcap_m88
	{
	class rhs_fieldcap_m88_back: rhs_fieldcap_m88
	{
 
	};
	class rhs_fieldcap_m88_ttsko_back: rhs_fieldcap_m88_back
	{
	class rhs_fieldcap_m88_ttsko_alt_back: rhs_fieldcap_m88_back
	{
	class rhs_fieldcap_m88_ttsko_vdv_back: rhs_fieldcap_m88_back
	{
	class rhs_fieldcap_m88_moldovan_ttsko_cold_back: rhs_fieldcap_m88_back
	{
	class rhs_fieldcap_m88_moldovan_ttsko_hot_back: rhs_fieldcap_m88_back
	{
	class rhs_fieldcap_m88_moldovan_ttsko_desat_back: rhs_fieldcap_m88_back
	{
	class rhs_fieldcap_m88_moldovan_ttsko_blue_back: rhs_fieldcap_m88_back
	{
	class rhs_fieldcap_m88_vsr_back: rhs_fieldcap_m88_back
	{
	class rhs_fieldcap_m88_vsr_2_back: rhs_fieldcap_m88_back
	{
	class rhs_fieldcap_m88_grey_back: rhs_fieldcap_m88_back
	{
	class rhs_fieldcap_m88_klmk_back: rhs_fieldcap_m88_back
	{
	class rhs_fieldcap_m88_woodland_back: rhs_fieldcap_m88_back
	{
	class rhs_fieldcap_early: rhs_fieldcap_m88
	{
		class ItemInfo: HeadgearItem
		{
		};
	};
	class rhs_omon_cap: rhs_fieldcap_m88
	{
		class ItemInfo: HeadgearItem
		{
		};
	};
	class rhs_pilotka: rhs_fieldcap_m88
	{
		{
	};
	class rhs_ushanka: rhs_fieldcap_m88
	{
		{
	};
	class rhs_beret_vdv_early: rhs_beret_vdv1
	{
		class ItemInfo: HeadgearItem
		{
		};
	};
	class rhs_beret_omon: rhs_beret_vdv_early
	{
		{
	};
	class rhs_cossack_papakha: rhs_fieldcap_m88
	{
		{
	};
	class rhs_cossack_visor_cap: rhs_fieldcap_m88
	{
		{
	};
	class rhs_cossack_visor_cap_tan: rhs_fieldcap_m88
	{
		{
	};
	class rhs_headband: rhs_fieldcap_m88
	{
		{
	};
	class rhs_vkpo_cap: rhs_fieldcap_m88
	{
		class ItemInfo: HeadgearItem
		{
	};
	class rhs_vkpo_cap_alt: rhs_vkpo_cap
	{
	class rhs_6b47_bare: rhs_6b47
	{
		{
	};
	class rhs_6b47_bare_d: rhs_6b47_bare
	{
	class rhs_6b47_emr: rhs_6b47
	{
		{
	};
	class rhs_6b47_emr_1: rhs_6b47
	{
		{
	};
	class rhs_6b47_emr_2: rhs_6b47
	{
		{
	};
	class rhs_6b47_6B50: rhs_6b47_emr
	{
 
	};
	class rhs_6b48: rhs_6b47_bare
	{
		{
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
	class rhs_6b23: Vest_Camo_Base
	{
		dlc="RHS_AFRF";
		descriptionShort="Armor Level 4";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply20";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=8;
                    passthrough=0.6;					simulation="RHS_Gost_2";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;					simulation="RHS_Gost_3";
				};
			};
		};
	};
	class rhs_6b23_crew: rhs_6b23
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply90";
			mass=70;
		};
	};
	class rhs_6b23_engineer: rhs_6b23
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply80";
			mass=65;
		};
	};
	class rhs_6b23_medic: rhs_6b23
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply130";
			mass=80;
		};
	};
	class rhs_6b23_rifleman: rhs_6b23
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply80";
			mass=65;
		};
	};
	class rhs_6b23_crewofficer: rhs_6b23
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply60";
			mass=65;
		};
	};
	class rhs_6b23_sniper: rhs_6b23
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply80";
			mass=65;
		};
	};
	class rhs_6b23_6sh92: rhs_6b23
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.5;					simulation="RHS_Gost_3";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22 + 		3";
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor="22 + 		3";
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;					simulation="RHS_Gost_3";
				};
			};
		};
	};
	class rhs_6b23_6sh92_vog: rhs_6b23_6sh92
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=80;
		};
	};
	class rhs_6b23_6sh92_vog_headset: rhs_6b23_6sh92_vog
	{
 
	};
	class rhs_6b23_6sh92_headset: rhs_6b23_6sh92
	{
 
	};
	class rhs_6b23_6sh92_headset_mapcase: rhs_6b23_6sh92
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=80;
		};
	};
	class rhs_6b23_6sh92_radio: rhs_6b23_6sh92
	{
 
	};
	class rhs_6sh46: Vest_Camo_Base
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			mass=15;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhs_vest_commander: Vest_Camo_Base
	{
		dlc="RHS_AFRF";
			mass=20;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhs_vest_pistol_holster: rhs_vest_commander
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply20";
			mass=5;
		};
	};
	class rhs_6b23_digi: rhs_6b23
	{
	};
	class rhs_6b23_digi_crew: rhs_6b23_crew
	{
	};
	class rhs_6b23_digi_engineer: rhs_6b23_engineer
	{
	};
	class rhs_6b23_digi_medic: rhs_6b23_medic
	{
	};
	class rhs_6b23_digi_rifleman: rhs_6b23_rifleman
	{
	};
	class rhs_6b23_digi_crewofficer: rhs_6b23_crewofficer
	{
	};
	class rhs_6b23_digi_sniper: rhs_6b23_sniper
	{
	};
	class rhs_6b23_digi_6sh92: rhs_6b23_6sh92
	{
	};
	class rhs_6b23_digi_6sh92_vog: rhs_6b23_6sh92_vog
	{
	};
	class rhs_6b23_digi_6sh92_vog_headset: rhs_6b23_6sh92_vog_headset
	{
	};
	class rhs_6b23_digi_6sh92_headset: rhs_6b23_6sh92_headset
	{
	};
	class rhs_6b23_digi_6sh92_headset_mapcase: rhs_6b23_6sh92_headset_mapcase
	{
	};
	class rhs_6b23_digi_6sh92_radio: rhs_6b23_6sh92_radio
	{
	};
	class rhs_6b23_digi_6sh92_headset_spetsnaz: rhs_6b23_6sh92_radio
	{
 
	};
	class rhs_6b23_digi_6sh92_spetsnaz2: rhs_6b23_6sh92_radio
	{
 
	};
	class rhs_6b23_digi_6sh92_Vog_Spetsnaz: rhs_6b23_6sh92_radio
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=75;
		};
	};
	class rhs_6b23_ML: rhs_6b23
	{
	};
	class rhs_6b23_ML_crew: rhs_6b23_crew
	{
	};
	class rhs_6b23_ML_engineer: rhs_6b23_engineer
	{
	};
	class rhs_6b23_ML_medic: rhs_6b23_medic
	{
	};
	class rhs_6b23_ML_rifleman: rhs_6b23_rifleman
	{
	};
	class rhs_6b23_ML_crewofficer: rhs_6b23_crewofficer
	{
	};
	class rhs_6b23_ML_sniper: rhs_6b23_sniper
	{
	};
	class rhs_6b23_ML_6sh92: rhs_6b23_6sh92
	{
	};
	class rhs_6b23_ML_6sh92_vog: rhs_6b23_6sh92_vog
	{
	};
	class rhs_6b23_ML_6sh92_vog_headset: rhs_6b23_6sh92_vog_headset
	{
	};
	class rhs_6b23_ML_6sh92_headset: rhs_6b23_6sh92_headset
	{
	};
	class rhs_6b23_ML_6sh92_headset_mapcase: rhs_6b23_6sh92_headset_mapcase
	{
	};
	class rhs_6b23_ML_6sh92_radio: rhs_6b23_6sh92_radio
	{
	};
	class rhs_vydra_3m: Vest_Camo_Base
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			mass=15;
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=0.80000001;
				};
			};
		};
	};
	class rhs_6b23_vydra_3m: rhs_6b23_6sh92
	{
		};
		};
		class ItemInfo: ItemInfo
		{
			};
			containerClass="Supply100";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=8;
                    passthrough=0.6;					simulation="RHS_Gost_2";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22 + 		3";
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor="22 + 		3";
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;					simulation="RHS_Gost_3";
				};
			};
		};
	};
	class rhs_6b23_digi_vydra_3m: rhs_6b23_vydra_3m
	{
		};
	};
	class rhs_6b23_ML_vydra_3m: rhs_6b23_vydra_3m
	{
		};
	};
	class rhs_6b23_6sh116_flora: rhs_6b23_6sh116
	{
		};
	};
	class rhs_6b23_6sh116_od: rhs_6b23_6sh116
	{
		};
	};
	class rhs_6b23_6sh116_mixed: rhs_6b23_6sh116
	{
		};
	};
	class rhs_6b23_6sh116_vog_flora: rhs_6b23_6sh116_vog
	{
		};
 
	};
	class rhs_6b23_6sh116_vog_od: rhs_6b23_6sh116_vog
	{
		};
 
	};
	class rhs_6b23_6sh116_vog_mixed: rhs_6b23_6sh116_vog
	{
		};
 
	};
	class rhs_6b13: rhs_6b23
	{
		descriptionShort="Armor Level 6";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply20";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=16;
                    passthrough=0.5;					simulation="RHS_Gost_3";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;					simulation="RHS_Gost_6";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=28;
                    passthrough=0.2;					simulation="RHS_Gost_6";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
			};
		};
	};
	class rhs_6b13_crewofficer: rhs_6b13
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply40";
			mass=85;
		};
	};
	class rhs_6b13_6sh92: rhs_6b13
	{
		descriptionShort="Armor Level 6";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=95;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=16;
                    passthrough=0.5;					simulation="RHS_Gost_3";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor="28 + 		3";
                    passthrough=0.2;					simulation="RHS_Gost_6";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;					simulation="RHS_Gost_6";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
			};
		};
	};
	class rhs_6b13_6sh92_vog: rhs_6b13_6sh92
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=100;
		};
	};
	class rhs_6b13_6sh92_headset_mapcase: rhs_6b13_6sh92
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=100;
		};
	};
	class rhs_6b13_6sh92_radio: rhs_6b13_6sh92
	{
 
	};
	class rhs_6b13_EMR: rhs_6b13
	{
	};
	class rhs_6b13_EMR_6sh92: rhs_6b13_6sh92
	{
	};
	class rhs_6b13_EMR_6sh92_vog: rhs_6b13_6sh92_vog
	{
	};
	class rhs_6b13_EMR_6sh92_headset_mapcase: rhs_6b13_6sh92_headset_mapcase
	{
	};
	class rhs_6b13_EMR_6sh92_radio: rhs_6b13_6sh92_radio
	{
	};
	class rhs_6b13_Flora: rhs_6b13
	{
	};
	class rhs_6b13_Flora_crewofficer: rhs_6b13_crewofficer
	{
	};
	class rhs_6b13_Flora_6sh92: rhs_6b13_6sh92
	{
	};
	class rhs_6b13_Flora_6sh92_vog: rhs_6b13_6sh92_vog
	{
	};
	class rhs_6b13_Flora_6sh92_headset_mapcase: rhs_6b13_6sh92_headset_mapcase
	{
	};
	class rhs_6b13_Flora_6sh92_radio: rhs_6b13_6sh92_radio
	{
	};
	class rhs_6b43: rhs_6b23
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply20";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=16;
                    passthrough=0.5;					simulation="RHS_Gost_3";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;					simulation="RHS_Gost_6";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=28;
                    passthrough=0.2;					simulation="RHS_Gost_6";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=28;
                    passthrough=0.2;					simulation="RHS_Gost_6";
				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;					simulation="RHS_Gost_6";
				};
			};
		};
	};
	class rhs_6sh92: Vest_Camo_Base
	{
		dlc="RHS_AFRF";
		descriptionShort="No Armor";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=15;
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=0.80000001;
				};
			};
		};
	};
	class rhs_6sh92_vog: rhs_6sh92
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=20;
		};
	};
	class rhs_6sh92_vog_headset: rhs_6sh92_vog
	{
 
	};
	class rhs_6sh92_headset: rhs_6sh92
	{
 
	};
	class rhs_6sh92_radio: rhs_6sh92
	{
 
	};
	class rhs_6sh92_digi: rhs_6sh92
	{
	};
	class rhs_6sh92_digi_vog: rhs_6sh92_vog
	{
	};
	class rhs_6sh92_digi_vog_headset: rhs_6sh92_vog_headset
	{
	};
	class rhs_6sh92_digi_headset: rhs_6sh92_headset
	{
	};
	class rhs_6sh92_digi_radio: rhs_6sh92_radio
	{
	};
	class rhs_6sh92_vsr: rhs_6sh92
	{
	};
	class rhs_6sh92_vsr_vog: rhs_6sh92_vog
	{
	};
	class rhs_6sh92_vsr_vog_headset: rhs_6sh92_vog_headset
	{
	};
	class rhs_6sh92_vsr_headset: rhs_6sh92_headset
	{
	};
	class rhs_6sh92_vsr_radio: rhs_6sh92_radio
	{
	};
	class rhs_6b2: Vest_Camo_Base
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply20";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=12;
                    passthrough=0.6;					simulation="RHS_Gost_2";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=12;
                    passthrough=0.6;					simulation="RHS_Gost_2";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
                    passthrough=0.6;					simulation="RHS_Gost_2";
				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;					simulation="RHS_Gost_2";
				};
			};
		};
	};
	class rhs_6b2_AK: rhs_6b2
	{
		dlc="RHS_AFRF";
		descriptionShort="Armor Level 1";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply80";
			mass=45;
		};
	};
	class rhs_6b2_chicom: rhs_6b2_AK
	{
		dlc="RHS_AFRF";
		descriptionShort="Armor Level 1";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply90";
			mass=50;
		};
	};
	class rhs_6b2_lifchik: rhs_6b2_AK
	{
		dlc="RHS_AFRF";
		descriptionShort="Armor Level 1";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=50;
		};
	};
	class rhs_6b2_holster: rhs_6b2_AK
	{
		dlc="RHS_AFRF";
		descriptionShort="Armor Level 1";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply30";
			mass=42;
		};
	};
	class rhs_6b2_RPK: rhs_6b2_AK
	{
		dlc="RHS_AFRF";
		descriptionShort="Armor Level 1";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply90";
			mass=50;
		};
	};
	class rhs_6b2_SVD: rhs_6b2_AK
	{
		dlc="RHS_AFRF";
		descriptionShort="Armor Level 1";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply80";
			mass=45;
		};
	};
	class rhs_6b3: rhs_6b2
	{
		dlc="RHS_AFRF";
		};
		class ItemInfo: ItemInfo
		{
			};
			containerClass="Supply80";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.5;					simulation="RHS_Gost_4";
				};
			};
		};
	};
	class rhs_6b3_AK: rhs_6b3
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=65;
		};
	};
	class rhs_6b3_AK_2: rhs_6b3_AK
	{
 
	};
	class rhs_6b3_AK_3: rhs_6b3_AK
	{
 
	};
	class rhs_6b3_holster: rhs_6b3
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply90";
			mass=55;
		};
	};
	class rhs_6b3_off: rhs_6b3
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=55;
		};
	};
	class rhs_6b3_R148: rhs_6b3_AK
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply90";
		};
	};
	class rhs_6b3_RPK: rhs_6b3
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=70;
		};
	};
	class rhs_6b3_VOG: rhs_6b3
	{
		dlc="RHS_AFRF";
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=70;
		};
	};
	class rhs_6b3_VOG_2: rhs_6b3_VOG
	{
		dlc="RHS_AFRF";
 
	};
	class rhs_6b5: rhs_6b23
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply80";
			mass=132;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=8;
                    passthrough=0.7;				};
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
                    passthrough=0.35;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
                    passthrough=0.35;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
                    passthrough=0.35;				};
				class Body
				{
					hitpointName="HitBody";
					armor=8;
                    passthrough=0.7;				};
			};
		};
	};
	class rhs_6b5_officer: rhs_6b5
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=142;
		};
	};
	class rhs_6b5_medic: rhs_6b5
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=152;
		};
	};
	class rhs_6b5_sniper: rhs_6b5
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply90";
			mass=137;
		};
	};
	class rhs_6b5_rifleman: rhs_6b5
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply130";
			mass=147;
		};
	};
	class rhs_6b5_khaki: rhs_6b5
	{
	class rhs_6b5_officer_khaki: rhs_6b5_officer
	{
	class rhs_6b5_medic_khaki: rhs_6b5_medic
	{
	class rhs_6b5_sniper_khaki: rhs_6b5_sniper
	{
	class rhs_6b5_rifleman_khaki: rhs_6b5_rifleman
	{
	class rhs_6b5_vsr: rhs_6b5
	{
	class rhs_6b5_officer_vsr: rhs_6b5_officer
	{
	class rhs_6b5_medic_vsr: rhs_6b5_medic
	{
	class rhs_6b5_sniper_vsr: rhs_6b5_sniper
	{
	class rhs_6b5_rifleman_vsr: rhs_6b5_rifleman
	{
	class rhs_6b5_ttsko: rhs_6b5
	{
	class rhs_6b5_officer_ttsko: rhs_6b5_officer
	{
	class rhs_6b5_medic_ttsko: rhs_6b5_medic
	{
	class rhs_6b5_sniper_ttsko: rhs_6b5_sniper
	{
	class rhs_6b5_rifleman_ttsko: rhs_6b5_rifleman
	{
	class rhs_6b5_spetsodezhda: rhs_6b5
	{
	class rhs_6b5_officer_spetsodezhda: rhs_6b5_officer
	{
	class rhs_6b5_medic_spetsodezhda: rhs_6b5_medic
	{
	class rhs_6b5_sniper_spetsodezhda: rhs_6b5_sniper
	{
	class rhs_6b5_rifleman_spetsodezhda: rhs_6b5_rifleman
	{
	class rhs_chicom: Vest_Camo_Base
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			mass=10;
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=0.80000001;
				};
			};
		};
	};
	class rhs_chicom_khk: rhs_chicom
	{
		dlc="RHS_AFRF";
	class rhs_gear_OFF: rhs_chicom
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			mass=10;
		};
	};
	class rhs_lifchik: rhs_chicom
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=15;
		};
	};
	class rhs_lifchik_light: rhs_lifchik
	{
		dlc="RHS_AFRF";
 
	};
	class rhs_lifchik_NCO: rhs_lifchik
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
		};
	};
	class rhs_lifchik_vog: rhs_lifchik
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply150";
		};
	};
	class rhs_belt_sks: rhs_chicom
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply40";
			mass=10;
		};
	};
	class rhs_belt_svd: rhs_belt_sks
	{
		dlc="RHS_AFRF";
		{
		};
	};
	class rhs_belt_AK: rhs_belt_sks
	{
		dlc="RHS_AFRF";
		{
			containerClass="Supply60";
		};
	};
	class rhs_belt_AK_back: rhs_belt_sks
	{
		dlc="RHS_AFRF";
		{
			containerClass="Supply60";
		};
	};
	class rhs_belt_AK_GL: rhs_belt_sks
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply80";
		};
	};
	class rhs_belt_AK4: rhs_belt_sks
	{
		dlc="RHS_AFRF";
		{
		};
	};
	class rhs_belt_AK4_back: rhs_belt_sks
	{
		dlc="RHS_AFRF";
		{
		};
	};
	class rhs_belt_holster: rhs_belt_sks
	{
		dlc="RHS_AFRF";
		{
			containerClass="Supply10";
			mass=5;
		};
	};
	class rhs_belt_RPK: rhs_belt_sks
	{
		dlc="RHS_AFRF";
		{
			containerClass="Supply60";
			mass=15;
		};
	};
	class rhs_suspender_SKS: rhs_belt_sks
	{
		dlc="RHS_AFRF";
		{
			containerClass="Supply40";
			mass=10;
		};
	};
	class rhs_suspender_AK: rhs_belt_sks
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply60";
			mass=10;
		};
	};
	class rhs_suspender_AK4: rhs_belt_sks
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply40";
			mass=10;
		};
	};
	class rhs_suspender_AK8_chestrig: rhs_belt_sks
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply80";
			mass=20;
		};
	};
	class rhs_6b45: rhs_6b43
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			mass=80;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=16;
                    passthrough=0.5;					simulation="RHS_Gost_3";
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;					simulation="RHS_Gost_6";
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=28;
                    passthrough=0.2;					simulation="RHS_Gost_6";
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=28;
                    passthrough=0.2;					simulation="RHS_Gost_6";
				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;					simulation="RHS_Gost_6";
				};
			};
		};
	};
	class rhs_6b45_desert: rhs_6b45
	{
		dlc="RHS_AFRF";
	class rhs_6b45_grn: rhs_6b45
	{
		dlc="RHS_AFRF";
		};
		};
		class ItemInfo: ItemInfo
		{
			};
			containerClass="Supply160";
			mass=95;
		};
	};
	class rhs_6b45_holster: rhs_6b45
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply20";
			mass=85;
		};
	};
	class rhs_6b45_light: rhs_6b45
	{
		dlc="RHS_AFRF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply60";
			mass=85;
		};
	};
	class rhs_6b45_mg: rhs_6b45
	{
		dlc="RHS_AFRF";
		};
		};
		class ItemInfo: ItemInfo
		{
			};
			containerClass="Supply160";
			mass=95;
		};
	};
	class rhs_6b45_off: rhs_6b45
	{
		dlc="RHS_AFRF";
			"Camo3"
		};
			"rhsafrf\addons\rhs_infantry3\ratnik\data\azart_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			};
			containerClass="Supply120";
			mass=90;
		};
	};
	class rhs_6b45_rifleman: rhs_6b45
	{
		dlc="RHS_AFRF";
		};
		};
		class ItemInfo: ItemInfo
		{
			};
			containerClass="Supply120";
			mass=90;
		};
	};
	class rhs_6b45_rifleman_2: rhs_6b45
	{
		dlc="RHS_AFRF";
		};
		};
		class ItemInfo: ItemInfo
		{
			};
			containerClass="Supply120";
			mass=90;
		};
	};
	class rhs_6sh117_rifleman: Vest_Camo_Base
	{
		dlc="RHS_AFRF";
		};
		};
		descriptionShort="No Armor";
		class ItemInfo: ItemInfo
		{
			};
			containerClass="Supply120";
			mass=15;
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=0.80000001;
				};
			};
		};
	};
	class rhs_6sh117_nco: rhs_6sh117_rifleman
	{
		dlc="RHS_AFRF";
			"Camo3"
		};
			"rhsafrf\addons\rhs_infantry3\ratnik\data\radio_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"Camo3"
			};
			containerClass="Supply140";
			mass=20;
		};
	};
	class rhs_6sh117_nco_azart: rhs_6sh117_rifleman
	{
		dlc="RHS_AFRF";
			"Camo3"
		};
			"rhsafrf\addons\rhs_infantry3\ratnik\data\azart_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"Camo3"
			};
			containerClass="Supply140";
			mass=20;
		};
	};
	class rhs_6sh117_mg: rhs_6sh117_rifleman
	{
		dlc="RHS_AFRF";
		};
		};
		class ItemInfo: ItemInfo
		{
			};
			containerClass="Supply180";
			mass=20;
		};
	};
	class rhs_6sh117_ar: rhs_6sh117_rifleman
	{
		dlc="RHS_AFRF";
		};
		};
		class ItemInfo: ItemInfo
		{
			};
			containerClass="Supply130";
			mass=18;
		};
	};
	class rhs_6sh117_svd: rhs_6sh117_rifleman
	{
		dlc="RHS_AFRF";
			"Camo3"
		};
			"rhsafrf\addons\rhs_infantry3\ratnik\data\radio_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"Camo3"
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class rhs_6sh117_val: rhs_6sh117_rifleman
	{
		dlc="RHS_AFRF";
			"Camo3"
		};
			"rhsafrf\addons\rhs_infantry3\ratnik\data\radio_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"Camo3"
			};
			containerClass="Supply120";
			mass=15;
		};
	};
	class rhs_6sh117_grn: rhs_6sh117_rifleman
	{
		dlc="RHS_AFRF";
		};
		};
		class ItemInfo: ItemInfo
		{
			};
			containerClass="Supply140";
			mass=20;
		};
	};
	class rhs_radio_R169P1: ItemRadio
	{
		class ItemInfo: ItemInfo
		{
			mass=6.5999999;
		};
	};
	class rhs_radio_R187P1: ItemRadio
	{
		class ItemInfo: ItemInfo
		{
			mass=6.5999999;
		};
	};
	class rhsusf_weap_DummyLauncher: MissileLauncher
	{
		showToPlayer=0;
		magazines[]=
		{
			"rhs_mag_ANALQ131",
			"rhs_mag_fueltank_UH60",
			"rhs_mag_fueltank_UH60MEV"
		};
	};
	class rhs_weap_SidewinderLauncher: MissileLauncher
	{
		shortNameMagazine="AIM-9X";
		minRange=300;
		minRangeProbab=0.25;
		midRange=2500;
		midRangeProbab=0.89999998;
		maxRange=9000;
		maxRangeProbab=0.30000001;
		sounds[]=
		{
			"StandardSound"
		};
		holdsterAnimValue=1;
		class StandardSound
		{
			weaponSoundEffect="DefaultRifle";
			begin1[]=
			{
				"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_1",
				2.5,
				1.03,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				0.5,
				"begin2",
				0.5
			};
			begin2[]=
			{
				"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_2",
				2.5,
				1.03,
				1500
			};
		};
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			1.316228,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			1.316228,
			2.5
		};
		weaponSoundEffect="DefaultRifle";
		reloadTime=0.1;
		magazineReloadTime=30;
		magazines[]=
		{
			"rhs_mag_Sidewinder",
			"rhs_mag_Sidewinder_2",
			"rhs_mag_Sidewinder_int",
			"rhs_mag_Sidewinder_heli",
			"rhs_mag_Sidewinder_heli_2"
		};
		cursorSize=0;
		cursor="missile";
		cursorAim="EmptyCursor";
		aiRateOfFire=5;
		aiRateOfFireDistance=2000;
		canLock=2;
		weaponLockDelay=3;
		weaponLockSystem=2;
	};
	class rhs_weap_AIM9M: rhs_weap_SidewinderLauncher
	{
		shortNameMagazine="AIM-9M";
		magazines[]=
		{
			"rhs_mag_Sidewinder_heli",
			"rhs_mag_Sidewinder_heli_2",
			"rhs_mag_aim9m",
			"rhs_mag_aim9m_2",
			"rhs_mag_aim9m_int"
		};
	};
	class rhs_weap_AIM120: rhs_weap_SidewinderLauncher
	{
		shortNameMagazine="AIM-120";
		magazineReloadTime=0.1;
		weaponLockSystem=8;
		minRange=2000;
		minRangeProbab=0.25;
		midRange=6500;
		midRangeProbab=0.89999998;
		maxRange=22000;
		maxRangeProbab=0.30000001;
		magazines[]=
		{
			"rhs_mag_aim120"
		};
	};
	class rhs_weap_AIM120D: rhs_weap_AIM120
	{
		shortNameMagazine="AIM-120D";
		magazineReloadTime=0.1;
		maxRange=28000;
		magazines[]=
		{
			"rhs_mag_aim120d",
			"rhs_mag_aim120d_int",
			"rhs_mag_aim120d_2_F22_l",
			"rhs_mag_aim120d_2_F22_r"
		};
	};
	class rhs_weap_FFARLauncher: RocketPods
	{
		magazines[]=
		{
			"rhs_mag_M151_19",
			"rhs_mag_M151_19_green",
			"rhs_mag_M151_7",
			"rhs_mag_M151_7_green",
			"rhs_mag_M151_7_USAF_LAU131",
			"rhs_mag_M151_21_USAF_LAU131_3",
			"rhs_mag_FFAR_7_USAF",
			"rhs_mag_FFAR_21_USAF_LAU68_3",
			"rhs_mag_FFAR_19_USAF",
			"rhs_mag_FFAR_57_USAF_LAU61_3"
		};
		modes[]=
		{
			"Far_AI",
			"Single",
			"Two",
			"Four",
			"Eight",
			"Twelve",
			"TwentyFour",
			"Burst"
		};
		cursor="rocket";
		cursorAim="EmptyCursor";
		cursorSize=0;
		class Far_AI: RocketPods
		{
			burst=1;
			reloadTime=0.079999998;
			autoFire=0;
			showToPlayer=0;
			soundBurst=0;
			dispersion=0.011;
			minRange=150;
			minRangeProbab=0.60000002;
			midRange=600;
			midRangeProbab=0.89999998;
			maxRange=2500;
			maxRangeProbab=0.12;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_1",
					2.4000001,
					1,
					1400
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
				begin2[]=
				{
					"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_2",
					2.4000001,
					1,
					1400
				};
			};
		};
		class Burst: RocketPods
		{
			burst=1;
			salvo=2;
			reloadTime=0.079999998;
			soundContinuous=0;
			autoFire=1;
			aiDispersionCoefX=1.5;
			aiDispersionCoefY=1;
			dispersion=0.012;
			textureType="fullAuto";
			minRange=1;
			minRangeProbab=0.001;
			midRange=2;
			midRangeProbab=0.001;
			maxRange=3;
			maxRangeProbab=0.001;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				weaponSoundEffect="DefaultRifle";
				begin1[]=
				{
					"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_1",
					2.4000001,
					1,
					1400
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
				begin2[]=
				{
					"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_2",
					2.4000001,
					1,
					1400
				};
			};
			soundBurst=0;
		};
		class Single: Burst
		{
			autoFire=0;
			salvo=1;
			textureType="semi";
		};
		class Two: Single
		{
			salvo=2;
			burst=1;
		};
		class Four: Single
		{
			salvo=2;
			burst=2;
		};
		class Eight: Four
		{
			burst=8;
		};
		class Twelve: Four
		{
			burst=12;
		};
		class TwentyFour: Four
		{
			burst=24;
		};
	};
	class rhs_weap_FFARLauncher_M229: rhs_weap_FFARLauncher
	{
		magazines[]=
		{
			"rhs_mag_M229_19",
			"rhs_mag_M229_19_green",
			"rhs_mag_M229_7",
			"rhs_mag_M229_7_green"
		};
	};
	class rhs_weap_FFARLauncher_M257: rhs_weap_FFARLauncher
	{
		magazines[]=
		{
			"rhs_mag_M257_7",
			"rhs_mag_M257_7_green",
			"rhs_mag_M257_7_USAF_LAU131"
		};
		modes[]=
		{
			"Far_AI",
			"Single"
		};
		class Far_AI: Far_AI
		{
			minRange=3000;
			minRangeProbab=0.60000002;
			midRange=4000;
			midRangeProbab=0.89999998;
			maxRange=6000;
			maxRangeProbab=0.60000002;
		};
	};
	class rhs_weap_HellfireLauncher: Missile_AGM_02_Plane_CAS_01_F
	{
		autoFire=0;
		cursorSize=0;
		cursor="missile";
		cursorAim="EmptyCursor";
		aiRateOfFire=5;
		aiRateOfFireDistance=1000;
		maxrange=8000;
		maxrangeprobab=0.60000002;
		midrange=2000;
		midrangeprobab=0.89999998;
		minrange=250;
		minrangeprobab=0.60000002;
		nameSound="MissileLauncher";
		reloadTime=1;
		magazines[]=
		{
			"rhs_mag_AGM114L_4",
			"rhs_mag_AGM114L_2",
			"rhs_mag_AGM114L"
		};
		canLock=2;
		weaponLockDelay=3;
		modes[]=
		{
			"TopDown",
			"LoalDistance"
		};
		class TopDown: Mode_SemiAuto
		{
			textureType="topDown";
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			maxrange=8000;
			maxrangeprobab=0.60000002;
			midrange=2000;
			midrangeprobab=0.89999998;
			minrange=250;
			minrangeprobab=0.60000002;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_1",
					2.5,
					0.95999998,
					1500
				};
				begin2[]=
				{
					"rhsusf\addons\rhsusf_sounds\launcher_small\launcher_small_2",
					2.5,
					0.95999998,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
		};
		class LoalDistance: TopDown
		{
		};
		class Cruise: TopDown
		{
		};
	};
	class rhs_weap_AGM114L_Launcher: rhs_weap_HellfireLauncher
	{
		magazines[]=
		{
			"rhs_mag_AGM114L_4",
			"rhs_mag_AGM114L_2",
			"rhs_mag_AGM114L",
			"rhs_mag_AGM114L_2_plane",
			"rhs_mag_AGM114L_plane"
		};
	};
	class rhs_weap_AGM114K_base_Launcher: rhs_weap_HellfireLauncher
	{
		magazines[]=
		{
			"rhs_mag_agm114K_4",
			"rhs_mag_agm114K_2",
			"rhs_mag_agm114K",
			"rhs_mag_AGM114K_2_plane",
			"rhs_mag_AGM114K_plane"
		};
		class EventHandlers
		{
			fired="_this call rhs_fnc_LOALGuide";
		};
		canLock=1;
		aiRateOfFire=8;
		aiRateOfFireDistance=500;
		class TopDown: TopDown
		{
			aiRateOfFire=8;
			aiRateOfFireDistance=500;
		};
	};
	class rhs_weap_AGM114K_Launcher: rhs_weap_AGM114K_base_Launcher
	{
		muzzles[]=
		{
			"this",
			"LOAL_LO",
			"LOAL_HI"
		};
		class LOAL_LO: rhs_weap_AGM114K_base_Launcher
		{
			modes[]=
			{
				"LoalDistance"
			};
			class LoalDistance: TopDown
			{
			};
			class EventHandlers
			{
				fired="_this call rhs_fnc_LOALGuide";
			};
		};
		class LOAL_HI: rhs_weap_AGM114K_base_Launcher
		{
			modes[]=
			{
				"LoalDistance"
			};
			class LoalDistance: TopDown
			{
			};
			class EventHandlers
			{
				fired="_this call rhs_fnc_LOALGuide";
			};
		};
	};
	class rhs_weap_AGM114M_base_Launcher: rhs_weap_HellfireLauncher
	{
		magazines[]=
		{
			"rhs_mag_agm114M_4",
			"rhs_mag_agm114M_2",
			"rhs_mag_agm114M",
			"rhs_mag_AGM114M_2_plane",
			"rhs_mag_AGM114M_plane"
		};
	};
	class rhs_weap_AGM114M_Launcher: rhs_weap_AGM114M_base_Launcher
	{
		muzzles[]=
		{
			"this",
			"LOAL_LO",
			"LOAL_HI"
		};
		class LOAL_LO: rhs_weap_AGM114K_base_Launcher
		{
			modes[]=
			{
				"LoalDistance"
			};
			class LoalDistance: TopDown
			{
			};
			class EventHandlers
			{
				fired="_this call rhs_fnc_LOALGuide";
			};
		};
		class LOAL_HI: rhs_weap_AGM114K_base_Launcher
		{
			modes[]=
			{
				"LoalDistance"
			};
			class LoalDistance: TopDown
			{
			};
			class EventHandlers
			{
				fired="_this call rhs_fnc_LOALGuide";
			};
		};
	};
	class RHS_weap_AGM114N_base_Launcher: rhs_weap_HellfireLauncher
	{
		magazines[]=
		{
			"rhs_mag_agm114N_4",
			"rhs_mag_agm114N_2",
			"rhs_mag_agm114N",
			"rhs_mag_AGM114N_2_plane",
			"rhs_mag_AGM114N_plane"
		};
	};
	class RHS_weap_AGM114N_Launcher: RHS_weap_AGM114N_base_Launcher
	{
		muzzles[]=
		{
			"this",
			"LOAL_LO",
			"LOAL_HI"
		};
		class LOAL_LO: rhs_weap_AGM114K_base_Launcher
		{
			modes[]=
			{
				"LoalDistance"
			};
			class LoalDistance: TopDown
			{
			};
			class EventHandlers
			{
				fired="_this call rhs_fnc_LOALGuide";
			};
		};
		class LOAL_HI: rhs_weap_AGM114K_base_Launcher
		{
			modes[]=
			{
				"LoalDistance"
			};
			class LoalDistance: TopDown
			{
			};
			class EventHandlers
			{
				fired="_this call rhs_fnc_LOALGuide";
			};
		};
	};
	class rhs_weap_DAGR_Launcher: rhs_weap_HellfireLauncher
	{
		autoFire=0;
		CanLock=2;
		weight=40;
		nameSound="MissileLauncher";
		lockingTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			0.31622776,
			1
		};
		lockedTargetSound[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			0.31622776,
			2.5
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
		magazines[]=
		{
			"rhs_mag_DAGR_4",
			"rhs_mag_DAGR_8",
			"rhs_mag_DAGR_16",
			"rhs_mag_DAGR_4_plane",
			"rhs_mag_DAGR_8_plane"
		};
		weaponLockDelay=3;
		cursorAim="EmptyCursor";
		cursor="EmptyCursor";
		showAimCursorInternal=0;
		class Direct: TopDown
		{
			textureType="semi";
			aiRateOfFire=5;
			aiRateOfFireDistance=4000;
			minRange=600;
			minRangeProbab=0.60000002;
			midRange=2000;
			midRangeProbab=0.89999998;
			maxRange=4000;
			maxRangeProbab=0.1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"rhsusf\addons\rhsusf_melb\Sound\M260\M260_1",
					2.5999999,
					1,
					1800
				};
				begin2[]=
				{
					"rhsusf\addons\rhsusf_melb\Sound\M260\M260_2",
					2.5999999,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
		};
		class LoalDistance: TopDown
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"rhsusf\addons\rhsusf_melb\Sound\M260\M260_1",
					2.5999999,
					1,
					1800
				};
				begin2[]=
				{
					"rhsusf\addons\rhsusf_melb\Sound\M260\M260_2",
					2.5999999,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
		};
		modes[]=
		{
			"Direct",
			"LoalDistance"
		};
	};
	class rhs_weap_agm65: rhs_weap_HellfireLauncher
	{
		shortNameMagazine="AGM-65";
		missileLockCone=65;
		magazines[]=
		{
			"rhs_mag_agm65",
			"rhs_mag_agm65b_x3"
		};
		reloadTime=0.1;
		magazineReloadTime=0.1;
		aiRateOfFire=5;
		aiRateOfFireDistance=500;
		nameSound="MissileLauncher";
		weaponSoundEffect="DefaultRifle";
		modes[]=
		{
			"this"
		};
		weaponLockDelay=3;
		textureType="semi";
		minRange=300;
		minRangeProbab=0.25;
		midRange=2500;
		midRangeProbab=0.89999998;
		maxRange=9000;
		maxRangeProbab=0.0099999998;
	};
	class rhs_weap_agm65b: rhs_weap_agm65
	{
		magazines[]=
		{
			"rhs_mag_agm65b",
			"rhs_mag_agm65b_3"
		};
	};
	class rhs_weap_agm65d: rhs_weap_agm65
	{
		magazines[]=
		{
			"rhs_mag_agm65d",
			"rhs_mag_agm65d_3"
		};
	};
	class rhs_weap_agm65e: rhs_weap_agm65
	{
		magazines[]=
		{
			"rhs_mag_agm65e",
			"rhs_mag_agm65e_3"
		};
	};
	class rhs_weap_agm65f: rhs_weap_agm65
	{
		magazines[]=
		{
			"rhs_mag_agm65f",
			"rhs_mag_agm65f_3"
		};
	};
	class rhs_weap_agm65h: rhs_weap_agm65
	{
		magazines[]=
		{
			"rhs_mag_agm65h",
			"rhs_mag_agm65h_3"
		};
	};
	class rhs_weap_stinger_Launcher: rhs_weap_TOW_Launcher
	{
		reloadTime=4;
		magazineReloadTime=5;
		canLock=2;
		aiRateOfFire=5;
		aiRateOfFireDistance=1500;
		minRange=50;
		minRangeProbab=0.5;
		midRange=1450;
		midRangeProbab=1;
		maxRange=4050;
		maxRangeProbab=0.60000002;
		weaponLockSystem=2;
		magazines[]=
		{
			"rhs_mag_4Rnd_stinger",
			"rhs_mag_2Rnd_stinger"
		};
	};
	class rhs_weap_stinger_Launcher_static: rhs_weap_stinger_Launcher
	{
		autoReload=1;
		magazineReloadTime=20;
	};
	class rhs_weap_ATAS_launcher: rhs_weap_TOW_Launcher
	{
		reloadTime=4;
		magazineReloadTime=0;
		canLock=2;
		autoReload=1;
		aiRateOfFire=5;
		aiRateOfFireDistance=1500;
		minRange=50;
		minRangeProbab=0.5;
		midRange=1450;
		midRangeProbab=1;
		maxRange=4050;
		maxRangeProbab=0.60000002;
		weaponLockSystem=2;
		magazines[]=
		{
			"rhs_mag_ATAS_2",
			"rhs_mag_ATAS_AH64_2"
		};
	};
	class rhs_weap_gbu12: Bomb_04_Plane_CAS_01_F
	{
		cursorSize=0;
		cursor="bomb";
		cursorAim="EmptyCursor";
		minRange=150;
		minRangeProbab=0.5;
		midRange=550;
		midRangeProbab=1;
		maxRange=1550;
		maxRangeProbab=0.60000002;
		magazines[]=
		{
			"rhs_mag_gbu12"
		};
	};
	class rhs_weap_gbu32: Bomb_04_Plane_CAS_01_F
	{
		cursorSize=0;
		cursor="bomb";
		cursorAim="EmptyCursor";
		minRange=150;
		minRangeProbab=0.5;
		midRange=550;
		midRangeProbab=1;
		maxRange=1550;
		maxRangeProbab=0.60000002;
		magazines[]=
		{
			"rhs_mag_gbu32"
		};
	};
	class rhs_weap_mk82: Mk82BombLauncher
	{
		cursorSize=0;
		cursor="bomb";
		cursorAim="EmptyCursor";
		airateoffire=1;
		airateoffiredistance=500;
		minRange=50;
		minRangeProbab=0.5;
		midRange=250;
		midRangeProbab=1;
		maxRange=550;
		maxRangeProbab=0.60000002;
		magazines[]=
		{
			"rhs_mag_mk82",
			"rhs_mag_mk82_3"
		};
	};
	class rhs_weap_cbu100: rhs_weap_mk82
	{
		magazines[]=
		{
			"rhs_mag_cbu100",
			"rhs_mag_cbu100_3"
		};
	};
	class rhs_weap_cbu87: rhs_weap_mk82
	{
		magazines[]=
		{
			"rhs_mag_cbu87",
			"rhs_mag_cbu87_3"
		};
	};
	class rhs_weap_cbu89: rhs_weap_cbu87
	{
		magazines[]=
		{
			"rhs_mag_cbu89",
			"rhs_mag_cbu89_3"
		};
	};
	class rhsusf_M61A2: weapon_Fighter_Gun20mm_AA
	{
		shortNameMagazine="20mm";
		class manual: manual
		{
			reloadTime=0.0099999998;
		};
		cursorAim="EmptyCursor";
		holdsterAnimValue=1.5;
		initSpeed=900;
		CanLock=2;
		optics=1;
		aiDispersionCoefX=1;
		aiDispersionCoefY=1;
		magazines[]=
		{
			"rhsusf_20mm_M61A2"
		};
	};
	class RHS_Laserdesignator_MELB: Laserdesignator_mounted
	{
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
		nameSound="laserdesignator";
		minRange=1;
		minRangeProbab=0.0099999998;
		midRange=2;
		midRangeProbab=0.0099999998;
		maxRange=3;
		maxRangeProbab=0.0099999998;
	};
	class rhs_uniform_g3_mc: Uniform_Base
	{
		dlc="RHS_USAF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_socom_mc_uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_g3_m81: Uniform_Base
	{
		dlc="RHS_USAF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_socom_g3_m81_uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_g3_aor2: Uniform_Base
	{
		dlc="RHS_USAF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_socom_g3_aor2_uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_g3_tan: Uniform_Base
	{
		dlc="RHS_USAF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_socom_g3_tan_uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_g3_rgr: Uniform_Base
	{
		dlc="RHS_USAF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_socom_g3_rgr_uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_g3_blk: Uniform_Base
	{
		dlc="RHS_USAF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_socom_g3_blk_uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_cu_ocp: Uniform_Base
	{
		dlc="RHS_USAF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_ocp_crewman";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_cu_ucp: rhs_uniform_cu_ocp
	{
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_ucp_crewman";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_cu_ocp_1stcav: rhs_uniform_cu_ocp
	{
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_ocp_rifleman_1stcav";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_cu_ucp_1stcav: rhs_uniform_cu_ucp
	{
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_ucp_rifleman_1stcav";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_cu_ocp_82nd: rhs_uniform_cu_ocp
	{
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_ocp_rifleman_82nd";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_cu_ucp_82nd: rhs_uniform_cu_ucp
	{
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_ucp_rifleman_82nd";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_cu_ocp_101st: rhs_uniform_cu_ocp
	{
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_ocp_rifleman_101st";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_cu_ucp_101st: rhs_uniform_cu_ucp
	{
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_ucp_rifleman_101st";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_cu_ocp_10th: rhs_uniform_cu_ocp
	{
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_ocp_rifleman_10th";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_cu_ucp_10th: rhs_uniform_cu_ucp
	{
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_ucp_rifleman_10th";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_cu_ucp_patchless: rhs_uniform_cu_ocp
	{
	};
	class rhs_uniform_cu_ocp_patchless: rhs_uniform_cu_ucp
	{
	};
	class rhs_uniform_FROG01_d: rhs_uniform_cu_ocp
	{
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_usmc_marpat_d_crewman";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_FROG01_wd: rhs_uniform_FROG01_d
	{
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_usmc_marpat_wd_rifleman";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_FROG01_m81: rhs_uniform_g3_m81
	{
	};
	class rhs_uniform_acu_ucp2: rhs_uniform_acu_ucp
	{
		dlc="RHS_USAF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_acu2_uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_acu_ucpd: rhs_uniform_acu_ucp
	{
		dlc="RHS_USAF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_acu_ucpd_uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_acu_oefcp: rhs_uniform_acu_ucp
	{
		dlc="RHS_USAF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_acu_oefcp_uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_acu_ocp: rhs_uniform_acu_ucp
	{
		dlc="RHS_USAF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_acu_ocp_uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_abu: Uniform_Base
	{
		dlc="RHS_USAF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_airforce_abu_uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhs_uniform_bdu_erdl: Uniform_Base
	{
		dlc="RHS_USAF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsusf_army_bdu_erdl_uniform";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsusf_patrolcap_ocp: H_HelmetB
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
		};
	};
	class rhsusf_patrolcap_ucp: rhsusf_patrolcap_ocp
	{
		dlc="RHS_USAF";
		{
	};
	class rhs_xmas_antlers: ItemCore
	{
		dlc="RHS_USAF";
		weaponPoolAvailable=1;
		dlc="RHS_USAF";
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
	};
	class rhs_Booniehat_ucp: rhs_Booniehat_ocp
	{
		dlc="RHS_USAF";
	class rhs_Booniehat_marpatd: rhs_Booniehat_ocp
	{
		dlc="RHS_USAF";
	class rhs_Booniehat_marpatwd: rhs_Booniehat_ocp
	{
		dlc="RHS_USAF";
	class rhs_Booniehat_m81: rhs_Booniehat_ocp
	{
		dlc="RHS_USAF";
	class rhs_booniehat2_marpatd: ItemCore
	{
		dlc="RHS_USAF";
		weaponPoolAvailable=1;
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
	};
	class rhs_booniehat2_marpatwd: rhs_booniehat2_marpatd
	{
		dlc="RHS_USAF";
	class rhs_8point_marpatd: ItemCore
	{
		dlc="RHS_USAF";
		weaponPoolAvailable=1;
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
	};
	class rhs_8point_marpatwd: rhs_8point_marpatd
	{
		dlc="RHS_USAF";
	class rhsusf_ach_helmet_ocp: H_HelmetB
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			7,
			"rhs_ess_black",
			2,
			"rhs_googles_black",
			1
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhsusf_ach_helmet_ocp_alt: rhsusf_ach_helmet_ocp
	{
	};
	class rhsusf_ach_helmet_ocp_norotos: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_ach_helmet_ucp: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
	};
	class rhsusf_ach_helmet_ucp_alt: rhsusf_ach_helmet_ucp
	{
	};
	class rhsusf_ach_helmet_ucp_norotos: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_ach_helmet_M81: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
	};
	class rhsusf_ach_helmet_DCU: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
	};
	class rhsusf_ach_helmet_DCU_early: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_ach_helmet_DCU_early_rhino: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_ach_helmet_camo_ocp: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		};
		};
		class ItemInfo: ItemInfo
		{
			};
		};
	};
	class rhsusf_ach_helmet_headset_ocp: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_helmet_headset_ocp_alt: rhsusf_ach_helmet_headset_ocp
	{
	};
	class rhsusf_ach_helmet_headset_ucp: rhsusf_ach_helmet_headset_ocp
	{
		dlc="RHS_USAF";
	};
	class rhsusf_ach_helmet_headset_ucp_alt: rhsusf_ach_helmet_headset_ucp
	{
	};
	class rhsusf_ach_helmet_ESS_ocp: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
 
	};
	class rhsusf_ach_helmet_ESS_ocp_alt: rhsusf_ach_helmet_ESS_ocp
	{
	};
	class rhsusf_ach_helmet_ESS_ucp: rhsusf_ach_helmet_ESS_ocp
	{
		dlc="RHS_USAF";
	};
	class rhsusf_ach_helmet_ESS_ucp_alt: rhsusf_ach_helmet_ESS_ucp
	{
	};
	class rhsusf_ach_helmet_headset_ess_ocp: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_helmet_headset_ess_ocp_alt: rhsusf_ach_helmet_headset_ess_ocp
	{
	};
	class rhsusf_ach_helmet_headset_ess_ucp: rhsusf_ach_helmet_headset_ess_ocp
	{
		dlc="RHS_USAF";
	};
	class rhsusf_ach_helmet_headset_ess_ucp_alt: rhsusf_ach_helmet_headset_ess_ucp
	{
	};
	class rhsusf_ach_bare: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_ach_bare_ess: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
 
	};
	class rhsusf_ach_bare_headset: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_headset_ess: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_tan: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_ach_bare_tan_ess: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
 
	};
	class rhsusf_ach_bare_tan_headset: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_tan_headset_ess: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_wood: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_ach_bare_wood_ess: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
 
	};
	class rhsusf_ach_bare_wood_headset: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_wood_headset_ess: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_des: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_ach_bare_des_ess: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
 
	};
	class rhsusf_ach_bare_des_headset: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_des_headset_ess: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_semi: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_ach_bare_semi_ess: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
 
	};
	class rhsusf_ach_bare_semi_headset: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_ach_bare_semi_headset_ess: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_01: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		descriptionshort="OpsCore FAST Ballistic Helmet";
			"contour",
			"UNCOV_FLAG",
			"ms2000"
		};
			"",
			"",
			""
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			armor=6;
				"contour",
				"UNCOV_FLAG",
				"ms2000"
			};
		};
	};
	class rhsusf_opscore_fg: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
			"",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
			""
		};
	};
	class rhsusf_opscore_fg_pelt: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
			"",
			"",
			"",
			""
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_fg_pelt_nsw: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
			"",
			"",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_fg_pelt_cam: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"",
			""
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_ut: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
	class rhsusf_opscore_ut_pelt: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
			"",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
			""
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_ut_pelt_cam: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"",
			""
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_ut_pelt_nsw: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
			"",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_ut_pelt_nsw_cam: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\mich_acc_tan_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_bk: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
	class rhsusf_opscore_bk_pelt: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_mc: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
	class rhsusf_opscore_mc_pelt: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_mc_pelt_nsw: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
			"",
			"",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_aor1: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
	class rhsusf_opscore_aor1_pelt: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_aor1_pelt_nsw: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
			"",
			"",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_aor2: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
	class rhsusf_opscore_aor2_pelt: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_aor2_pelt_nsw: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
			"",
			"",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_paint: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
	class rhsusf_opscore_paint_pelt: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_paint_pelt_nsw: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
			"",
			"",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_paint_pelt_nsw_cam: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_mc_cover: rhsusf_opscore_cover
	{
		dlc="RHS_USAF";
			"",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa",
			""
		};
	};
	class rhsusf_opscore_mc_cover_pelt: rhsusf_opscore_cover
	{
		dlc="RHS_USAF";
			"",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa",
			""
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_mc_cover_pelt_nsw: rhsusf_opscore_cover
	{
		dlc="RHS_USAF";
			"",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_mc_cover_pelt_cam: rhsusf_opscore_cover
	{
		dlc="RHS_USAF";
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_rg_cover: rhsusf_opscore_cover
	{
		dlc="RHS_USAF";
			"",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_rg_co.paa",
			""
		};
	};
	class rhsusf_opscore_rg_cover_pelt: rhsusf_opscore_cover
	{
		dlc="RHS_USAF";
			"",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_rg_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_coy_cover: rhsusf_opscore_cover
	{
		dlc="RHS_USAF";
			"",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_cb_co.paa",
			""
		};
	};
	class rhsusf_opscore_coy_cover_pelt: rhsusf_opscore_cover
	{
		dlc="RHS_USAF";
			"",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\fs_cover_cb_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_mar_01: rhsusf_ach_helmet_ocp
	{
		dlc="RHS_USAF";
		descriptionshort="OpsCore FAST Maritime Helmet";
		};
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			armor=6;
			};
		};
	};
	class rhsusf_opscore_mar_ut: rhsusf_opscore_mar_01
	{
		dlc="RHS_USAF";
		};
	};
	class rhsusf_opscore_mar_ut_pelt: rhsusf_opscore_mar_01
	{
		dlc="RHS_USAF";
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_mar_fg: rhsusf_opscore_mar_01
	{
		dlc="RHS_USAF";
		};
	};
	class rhsusf_opscore_mar_fg_pelt: rhsusf_opscore_mar_01
	{
		dlc="RHS_USAF";
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_opscore_01_tan: rhsusf_opscore_01
	{
	};
	class rhsusf_opscore_02: rhsusf_opscore_01
	{
	};
	class rhsusf_opscore_02_tan: rhsusf_opscore_01
	{
	};
	class rhsusf_opscore_03_ocp: rhsusf_opscore_01
	{
	};
	class rhsusf_opscore_04_ocp: rhsusf_opscore_01
	{
	};
	class rhsusf_cvc_helmet: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			2,
			"rhs_ess_black",
			2,
			"rhs_googles_black",
			2,
			"rhs_googles_clear",
			1,
			"rhsusf_shemagh2_tan",
			5,
			"rhsusf_shemagh2_gogg_tan",
			10
		};
		{
		};
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
	class rhsusf_cvc_alt_helmet: rhsusf_cvc_helmet
	{
		dlc="RHS_USAF";
		{
		};
	};
	class rhsusf_cvc_green_helmet: rhsusf_cvc_helmet
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			5,
			"rhs_ess_black",
			2,
			"rhs_googles_black",
			2,
			"rhs_googles_clear",
			1,
			"rhsusf_shemagh2_od",
			3,
			"rhsusf_shemagh2_gogg_od",
			5
		};
	class rhsusf_cvc_green_alt_helmet: rhsusf_cvc_alt_helmet
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			5,
			"rhs_ess_black",
			2,
			"rhs_googles_black",
			2,
			"rhs_googles_clear",
			1,
			"rhsusf_shemagh2_od",
			3,
			"rhsusf_shemagh2_gogg_od",
			5
		};
	class rhsusf_cvc_ess: rhsusf_cvc_helmet
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			2,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1,
			"rhsusf_shemagh2_tan",
			4
		};
		{
		};
	};
	class rhsusf_cvc_green_ess: rhsusf_cvc_ess
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			2,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1,
			"rhsusf_shemagh2_od",
			4
		};
	class rhsusf_hgu56p: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
		allowedFacewear[]={};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
	class rhsusf_hgu56p_visor: rhsusf_hgu56p
	{
		dlc="RHS_USAF";
 
		ACE_Protection=1;
	};
	class rhsusf_hgu56p_mask: rhsusf_hgu56p
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_hgu56p_visor_mask: rhsusf_hgu56p
	{
		dlc="RHS_USAF";
 
		ACE_Protection=1;
	};
	class rhsusf_hgu56p_visor_mask_skull: rhsusf_hgu56p_visor_mask
	{
		dlc="RHS_USAF";
	class rhsusf_hgu56p_mask_skull: rhsusf_hgu56p_mask
	{
		dlc="RHS_USAF";
	class rhsusf_hgu56p_visor_mask_mo: rhsusf_hgu56p_visor_mask
	{
		dlc="RHS_USAF";
	class rhsusf_hgu56p_mask_mo: rhsusf_hgu56p_mask
	{
		dlc="RHS_USAF";
	class rhsusf_hgu56p_mask_smiley: rhsusf_hgu56p
	{
		dlc="RHS_USAF";
		{
		};
	};
	class rhsusf_hgu56p_visor_mask_smiley: rhsusf_hgu56p_mask_smiley
	{
		dlc="RHS_USAF";
 
		ACE_Protection=1;
	};
	class rhsusf_hgu56p_black: rhsusf_hgu56p
	{
		dlc="RHS_USAF";
		{
		};
	};
	class rhsusf_hgu56p_visor_black: rhsusf_hgu56p_black
	{
		dlc="RHS_USAF";
 
		ACE_Protection=1;
	};
	class rhsusf_hgu56p_mask_black: rhsusf_hgu56p_black
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_hgu56p_visor_mask_black: rhsusf_hgu56p_black
	{
		dlc="RHS_USAF";
 
		ACE_Protection=1;
	};
	class rhsusf_hgu56p_visor_mask_black_skull: rhsusf_hgu56p_visor_mask_black
	{
		dlc="RHS_USAF";
	};
	class rhsusf_hgu56p_mask_black_skull: rhsusf_hgu56p_visor_mask_black_skull
	{
		dlc="RHS_USAF";
 
		ACE_Protection=0;
	};
	class rhsusf_hgu56p_visor_mask_Empire_black: rhsusf_hgu56p_black
	{
		dlc="RHS_USAF";
 
		ACE_Protection=1;
	};
	class rhsusf_hgu56p_green: rhsusf_hgu56p
	{
		dlc="RHS_USAF";
		{
		};
	};
	class rhsusf_hgu56p_visor_green: rhsusf_hgu56p_green
	{
		dlc="RHS_USAF";
 
		ACE_Protection=1;
	};
	class rhsusf_hgu56p_mask_green: rhsusf_hgu56p_green
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_hgu56p_visor_mask_green: rhsusf_hgu56p_green
	{
		dlc="RHS_USAF";
 
		ACE_Protection=1;
	};
	class rhsusf_hgu56p_mask_green_mo: rhsusf_hgu56p_mask_green
	{
		dlc="RHS_USAF";
	class rhsusf_hgu56p_visor_mask_green_mo: rhsusf_hgu56p_visor_mask_green
	{
		dlc="RHS_USAF";
	class rhsusf_hgu56p_tan: rhsusf_hgu56p
	{
		dlc="RHS_USAF";
		{
		};
	};
	class rhsusf_hgu56p_visor_tan: rhsusf_hgu56p_tan
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_hgu56p_mask_tan: rhsusf_hgu56p_tan
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_hgu56p_visor_mask_tan: rhsusf_hgu56p_tan
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_hgu56p_pink: rhsusf_hgu56p
	{
		dlc="RHS_USAF";
		{
		};
	};
	class rhsusf_hgu56p_visor_pink: rhsusf_hgu56p_pink
	{
		dlc="RHS_USAF";
 
		ACE_Protection=1;
	};
	class rhsusf_hgu56p_mask_pink: rhsusf_hgu56p_pink
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_hgu56p_visor_mask_pink: rhsusf_hgu56p_pink
	{
		dlc="RHS_USAF";
 
		ACE_Protection=1;
	};
	class rhsusf_hgu56p_usa: rhsusf_hgu56p
	{
		dlc="RHS_USAF";
		{
		};
	};
	class rhsusf_hgu56p_visor_usa: rhsusf_hgu56p_usa
	{
		dlc="RHS_USAF";
 
		ACE_Protection=1;
	};
	class rhsusf_hgu56p_saf: rhsusf_hgu56p
	{
		dlc="RHS_USAF";
		{
		};
	};
	class rhsusf_hgu56p_visor_saf: rhsusf_hgu56p_saf
	{
		dlc="RHS_USAF";
 
		ACE_Protection=1;
	};
	class rhsusf_hgu56p_mask_saf: rhsusf_hgu56p_saf
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_hgu56p_visor_mask_saf: rhsusf_hgu56p_visor_saf
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_hgu56p_white: rhsusf_hgu56p
	{
		dlc="RHS_USAF";
		{
		};
	};
	class rhsusf_hgu56p_visor_white: rhsusf_hgu56p_white
	{
		dlc="RHS_USAF";
 
		ACE_Protection=1;
	};
	class rhsusf_ANPVS_14: NVGoggles
	{
		dlc="RHS_USAF";
		descriptionShort="AN/PVS-14 Monocular Night Vision Device";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			mass=20;
		};
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_4096.paa";
		ace_nightvision_bluRadius=0.13;
	};
	class rhsusf_ANPVS_15: rhsusf_ANPVS_14
	{
		dlc="RHS_USAF";
		descriptionShort="AN/PVS-15 Night Vision Binocular";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			mass=20;
		};
		ace_nightvision_border="\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius=0.15000001;
	};
	class rhsusf_Rhino: rhsusf_ANPVS_14
	{
		dlc="RHS_USAF";
		visionMode[]=
		{
			"Normal",
			"Normal"
		};
		descriptionShort="Empty Rhino NVG Mount";
		class ItemInfo
		{
			type=616;
			hmdType=0;
			mass=5;
		};
	};
	class rhsusf_anvis_nvg_bc_caps: NVGoggles
	{
		dlc="RHS_USAF";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		class ItemInfo
		{
			type=616;
			hmdType=0;
			mass=4;
		};
	};
	class rhsusf_ANVIS: NVGoggles
	{
		dlc="RHS_USAF";
		descriptionShort="ANVIS-9 Night Vision Binocular";
		nameSound="nvgoggles";
		simulation="NVGoggles";
		showEmpty=0;
		muzzlePos="usti hlavne";
		muzzleEnd="konec hlavne";
		value=5;
		opticsZoomMin=1;
		opticsZoomMax=1;
		class ItemInfo
		{
			type=616;
			hmdType=0;
			mass=20;
		};
	};
	class rhsusf_mich_helmet_marpatwd: H_HelmetB
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
		class ItemInfo: ItemInfo
		{
			allowedSlots[]={801,901,701,605};
			mass=40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhsusf_mich_helmet_marpatwd_headset: rhsusf_mich_helmet_marpatwd
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_mich_helmet_marpatd: rhsusf_mich_helmet_marpatwd
	{
		dlc="RHS_USAF";
	};
	class rhsusf_mich_helmet_marpatd_headset: rhsusf_mich_helmet_marpatwd_headset
	{
		dlc="RHS_USAF";
	};
	class rhsusf_mich_helmet_marpatwd_alt: rhsusf_mich_helmet_marpatwd
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_mich_helmet_marpatwd_alt_headset: rhsusf_mich_helmet_marpatwd
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_mich_helmet_marpatd_alt: rhsusf_mich_helmet_marpatwd_alt
	{
		dlc="RHS_USAF";
	};
	class rhsusf_mich_helmet_marpatd_alt_headset: rhsusf_mich_helmet_marpatwd_alt_headset
	{
		dlc="RHS_USAF";
	};
	class rhsusf_mich_helmet_marpatwd_norotos: rhsusf_mich_helmet_marpatwd
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_mich_helmet_marpatwd_norotos_headset: rhsusf_mich_helmet_marpatwd_norotos
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_mich_helmet_marpatd_norotos: rhsusf_mich_helmet_marpatwd_norotos
	{
		dlc="RHS_USAF";
	};
	class rhsusf_mich_helmet_marpatd_norotos_headset: rhsusf_mich_helmet_marpatwd_norotos_headset
	{
		dlc="RHS_USAF";
	};
	class rhsusf_mich_helmet_marpatwd_norotos_arc: rhsusf_mich_helmet_marpatwd
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_mich_helmet_marpatwd_norotos_arc_headset: rhsusf_mich_helmet_marpatwd_norotos_arc
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_mich_helmet_marpatd_norotos_arc: rhsusf_mich_helmet_marpatwd_norotos_arc
	{
		dlc="RHS_USAF";
	};
	class rhsusf_mich_helmet_marpatd_norotos_arc_headset: rhsusf_mich_helmet_marpatwd_norotos_arc_headset
	{
		dlc="RHS_USAF";
	};
	class rhsusf_mich_bare: rhsusf_mich_helmet_marpatwd
	{
		dlc="RHS_USAF";
		};
		};
		class ItemInfo: ItemInfo
		{
			};
		};
	};
	class rhsusf_mich_bare_headset: rhsusf_mich_bare
	{
		dlc="RHS_USAF";
			"bowman"
		};
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"bowman"
			};
		};
	};
	class rhsusf_mich_bare_norotos: rhsusf_mich_bare
	{
		dlc="RHS_USAF";
		};
 
	};
	class rhsusf_mich_bare_norotos_headset: rhsusf_mich_bare_headset
	{
		dlc="RHS_USAF";
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
		};
 
	};
	class rhsusf_mich_bare_norotos_alt_headset: rhsusf_mich_bare_norotos_headset
	{
		dlc="RHS_USAF";
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhsusf_mich_bare_norotos_arc: rhsusf_mich_bare
	{
		dlc="RHS_USAF";
		};
 
	};
	class rhsusf_mich_bare_norotos_arc_headset: rhsusf_mich_bare_headset
	{
		dlc="RHS_USAF";
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
		};
 
	};
	class rhsusf_mich_bare_norotos_arc_alt: rhsusf_mich_bare_norotos_arc
	{
		dlc="RHS_USAF";
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos_arc_alt_headset: rhsusf_mich_bare_norotos_arc_headset
	{
		dlc="RHS_USAF";
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhsusf_mich_bare_tan: rhsusf_mich_bare
	{
		dlc="RHS_USAF";
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhsusf_mich_bare_tan_headset: rhsusf_mich_bare_headset
	{
		dlc="RHS_USAF";
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhsusf_mich_bare_alt_tan: rhsusf_mich_bare_tan
	{
		dlc="RHS_USAF";
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos_tan: rhsusf_mich_bare_tan
	{
		dlc="RHS_USAF";
		};
 
	};
	class rhsusf_mich_bare_norotos_tan_headset: rhsusf_mich_bare_tan_headset
	{
		dlc="RHS_USAF";
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
		};
 
	};
	class rhsusf_mich_bare_norotos_alt_tan: rhsusf_mich_bare_norotos_tan
	{
		dlc="RHS_USAF";
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos_alt_tan_headset: rhsusf_mich_bare_norotos_tan_headset
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_mich_bare_norotos_arc_tan: rhsusf_mich_bare_norotos_tan
	{
		dlc="RHS_USAF";
		};
 
	};
	class rhsusf_mich_bare_norotos_arc_tan_headset: rhsusf_mich_bare_norotos_tan_headset
	{
		dlc="RHS_USAF";
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
		};
 
	};
	class rhsusf_mich_bare_norotos_arc_alt_tan: rhsusf_mich_bare_norotos_arc_tan
	{
		dlc="RHS_USAF";
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos_arc_alt_tan_headset: rhsusf_mich_bare_norotos_arc_tan_headset
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_mich_bare_semi: rhsusf_mich_bare
	{
		dlc="RHS_USAF";
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhsusf_mich_bare_semi_headset: rhsusf_mich_bare_headset
	{
		dlc="RHS_USAF";
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhsusf_mich_bare_alt_semi: rhsusf_mich_bare_semi
	{
		dlc="RHS_USAF";
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos_semi: rhsusf_mich_bare_semi
	{
		dlc="RHS_USAF";
		};
 
	};
	class rhsusf_mich_bare_norotos_semi_headset: rhsusf_mich_bare_semi_headset
	{
		dlc="RHS_USAF";
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
	};
	class rhsusf_mich_bare_norotos_alt_semi: rhsusf_mich_bare_norotos_semi
	{
		dlc="RHS_USAF";
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos_alt_semi_headset: rhsusf_mich_bare_norotos_semi_headset
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_mich_bare_norotos_arc_semi: rhsusf_mich_bare_norotos_alt_semi
	{
		dlc="RHS_USAF";
		};
 
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos_arc_semi_headset: rhsusf_mich_bare_norotos_semi_headset
	{
		dlc="RHS_USAF";
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
		};
 
	};
	class rhsusf_mich_bare_norotos_arc_alt_semi: rhsusf_mich_bare_norotos_arc_semi
	{
		dlc="RHS_USAF";
 
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0;
	};
	class rhsusf_mich_bare_norotos_arc_alt_semi_headset: rhsusf_mich_bare_norotos_arc_semi_headset
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_lwh_helmet_marpatd: H_HelmetB
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
		{
			mass=40;
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhsusf_lwh_helmet_marpatd_ess: rhsusf_lwh_helmet_marpatd
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_lwh_helmet_marpatd_headset: rhsusf_lwh_helmet_marpatd
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_lwh_helmet_marpatwd: rhsusf_lwh_helmet_marpatd
	{
		dlc="RHS_USAF";
	class rhsusf_lwh_helmet_marpatwd_ess: rhsusf_lwh_helmet_marpatd_ess
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_lwh_helmet_marpatwd_blk_ess: rhsusf_lwh_helmet_marpatd_ess
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_lwh_helmet_marpatwd_headset: rhsusf_lwh_helmet_marpatd_headset
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_lwh_helmet_marpatwd_headset_blk: rhsusf_lwh_helmet_marpatd_headset
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_lwh_helmet_marpatwd_headset_blk2: rhsusf_lwh_helmet_marpatd_headset
	{
		dlc="RHS_USAF";
		{
	};
	class rhsusf_lwh_helmet_M1942: rhsusf_lwh_helmet_marpatd
	{
		dlc="RHS_USAF";
	class rhsusf_Bowman: ItemCore
	{
		dlc="RHS_USAF";
		{
			mass=3;
	};
	class rhsusf_bowman_cap: rhsusf_Bowman
	{
		dlc="RHS_USAF";
		class ItemInfo: ItemInfo
		{
			mass=3;
		};
	};
	class RHS_jetpilot_usaf: H_HelmetB
	{
		dlc="RHS_USAF";
		{
			mass=50;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=1;
                    passthrough=0.7;				};
			};
		};
		ACE_Protection=1;
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
	class rhsusf_ihadss: rhsusf_opscore_01
	{
		dlc="RHS_USAF";
		allowedFacewear[]={};
		class ItemInfo: ItemInfo
		{
			mass=40;
		};
		subItems[]=
		{
		};
		ace_hearing_protection=0.85000002;
		ace_hearing_lowerVolume=0.60000002;
	};
	{
		visionMode[]=
		{
			"Normal"
		};
	};
	class rhsusf_protech_helmet: H_HelmetB
	{
		dlc="RHS_USAF";
		allowedFacewear[]=
		{
			"",
			6,
			"rhs_googles_black",
			3,
			"rhs_googles_clear",
			1
		};
		class ItemInfo: ItemInfo
		{
			mass=15;
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=0.80000001;
				};
			};
		};
	};
	class rhsusf_protech_helmet_ess: rhsusf_protech_helmet
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_protech_helmet_rhino: rhsusf_protech_helmet
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_protech_helmet_rhino_ess: rhsusf_protech_helmet
	{
		dlc="RHS_USAF";
 
	};
	class rhsusf_iotv_ocp_base: Vest_Camo_Base
	{
		dlc="RHS_USAF";
			"camo2"
		};
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa"
		};
		descriptionShort="Armor Level IV";
		class ItemInfo: ItemInfo
		{
				"camo2"
			};
			containerClass="Supply20";
			mass=100;
			armor=20;
			descriptionShort="Armor Level IV";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.6;				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=28;
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=28;
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;				};
			};
		};
	};
	class rhsusf_iotv_ocp: rhsusf_iotv_ocp_base
	{
			"camo2"
		};
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_co.paa"
		};
	};
	class rhsusf_iotv_ocp_Grenadier: rhsusf_iotv_ocp_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=120;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.6;				};
				class Chest
				{
					HitpointName="HitChest";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;				};
			};
		};
	};
	class rhsusf_iotv_ocp_Medic: rhsusf_iotv_ocp_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=120;
		};
	};
	class rhsusf_iotv_ocp_Repair: rhsusf_iotv_ocp_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=120;
		};
	};
	class rhsusf_iotv_ocp_Rifleman: rhsusf_iotv_ocp_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.6;				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;				};
			};
		};
	};
	class rhsusf_iotv_ocp_SAW: rhsusf_iotv_ocp_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply150";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.6;				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=28;
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;				};
			};
		};
	};
	class rhsusf_iotv_ocp_Squadleader: rhsusf_iotv_ocp_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply150";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.6;				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=28;
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;				};
			};
		};
	};
	class rhsusf_iotv_ocp_Teamleader: rhsusf_iotv_ocp_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply150";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.6;				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=28;
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;				};
			};
		};
	};
	class rhsusf_iotv_ucp_base: rhsusf_iotv_ocp_base
	{
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa"
		};
	};
	class rhsusf_iotv_ucp: rhsusf_iotv_ocp
	{
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv3_ucp_co.paa"
		};
	};
	class rhsusf_iotv_ucp_Grenadier: rhsusf_iotv_ucp_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=120;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.6;				};
				class Chest
				{
					HitpointName="HitChest";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;				};
			};
		};
	};
	class rhsusf_iotv_ucp_Medic: rhsusf_iotv_ucp_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=120;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.6;				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;				};
			};
		};
	};
	class rhsusf_iotv_ucp_Repair: rhsusf_iotv_ucp_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=120;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.6;				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;				};
			};
		};
	};
	class rhsusf_iotv_ucp_Rifleman: rhsusf_iotv_ucp_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.6;				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;				};
			};
		};
	};
	class rhsusf_iotv_ucp_SAW: rhsusf_iotv_ucp_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply150";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.6;				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=28;
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;				};
			};
		};
	};
	class rhsusf_iotv_ucp_Squadleader: rhsusf_iotv_ucp_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply150";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.6;				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=28;
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;				};
			};
		};
	};
	class rhsusf_iotv_ucp_Teamleader: rhsusf_iotv_ucp_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply150";
			mass=140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=12;
                    passthrough=0.6;				};
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=28;
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.2;				};
			};
		};
	};
	class rhsusf_spc: rhsusf_iotv_ocp_base
	{
			"camo3"
		};
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_usmc_camelbak_co.paa"
		};
		descriptionShort="Armor Level IV";
		class ItemInfo: ItemInfo
		{
				"camo3"
			};
			containerClass="Supply20";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=28;
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class rhsusf_spc_rifleman: rhsusf_spc
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class rhsusf_spc_iar: rhsusf_spc_rifleman
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply160";
			mass=120;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class rhsusf_spc_corpsman: rhsusf_spc_rifleman
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class rhsusf_spc_crewman: rhsusf_spc_rifleman
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply80";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class rhsusf_spc_light: rhsusf_spc_rifleman
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class rhsusf_spc_marksman: rhsusf_spc_rifleman
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply80";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class rhsusf_spc_mg: rhsusf_spc_rifleman
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class rhsusf_spc_sniper: rhsusf_spc_rifleman
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply80";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=28;
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class rhsusf_spc_squadleader: rhsusf_spc_rifleman
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="28 + 		3";
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class rhsusf_spc_teamleader: rhsusf_spc_rifleman
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply160";
			mass=120;
		};
	};
	class rhsusf_spc_patchless: rhsusf_spc_light
	{
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_usmc_camelbak_co.paa"
		};
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_usmc_camelbak.rvmat"
		};
	};
	class rhsusf_spc_patchless_radio: rhsusf_spc_squadleader
	{
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_usmc_camelbak_co.paa"
		};
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_usmc_camelbak.rvmat"
		};
	};
	class rhsusf_spcs_ocp: rhsusf_iotv_ocp_base
	{
		};
		};
		descriptionShort="Armor Level IV";
		class ItemInfo: ItemInfo
		{
			};
			};
			containerClass="Supply140";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=28;
                    passthrough=0.2;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=28;
                    passthrough=0.2;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
                    passthrough=0.6;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.6;				};
			};
		};
	};
	class rhsusf_spcs_ocp_squadleader: rhsusf_spcs_ocp
	{
			"camo3",
			"camo4"
		};
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
				"camo3",
				"camo4"
			};
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
			};
		};
	};
	class rhsusf_spcs_ocp_teamleader: rhsusf_spcs_ocp
	{
			"camo3",
			"camo4",
			"camo5"
		};
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"camo3",
				"camo4",
				"camo5"
			};
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
				"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
			};
		};
	};
	class rhsusf_spcs_ocp_teamleader_alt: rhsusf_spcs_ocp
	{
			"camo3",
			"camo4"
		};
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
				"camo3",
				"camo4"
			};
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
			};
		};
	};
	class rhsusf_spcs_ocp_saw: rhsusf_spcs_ocp
	{
			"camo3"
		};
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"camo3"
			};
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
			};
		};
	};
	class rhsusf_spcs_ocp_grenadier: rhsusf_spcs_ocp
	{
			"camo3",
			"camo4"
		};
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"camo3",
				"camo4"
			};
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
			};
		};
	};
	class rhsusf_spcs_ocp_rifleman: rhsusf_spcs_ocp
	{
			"camo3",
			"camo4"
		};
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"camo3",
				"camo4"
			};
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
			};
		};
	};
	class rhsusf_spcs_ocp_rifleman_alt: rhsusf_spcs_ocp
	{
			"camo3",
			"camo4"
		};
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
				"camo3",
				"camo4"
			};
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
			};
		};
	};
	class rhsusf_spcs_ocp_medic: rhsusf_spcs_ocp
	{
			"camo3",
			"camo4"
		};
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"camo3",
				"camo4"
			};
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
			};
		};
	};
	class rhsusf_spcs_ocp_crewman: rhsusf_spcs_ocp
	{
			"camo3",
			"camo4"
		};
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"camo3",
				"camo4"
			};
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
			};
		};
	};
	class rhsusf_spcs_ocp_machinegunner: rhsusf_spcs_ocp
	{
			"camo3"
		};
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"camo3"
			};
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
			};
		};
	};
	class rhsusf_spcs_ocp_sniper: rhsusf_spcs_ocp
	{
			"camo3",
			"camo4",
			"camo5"
		};
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
			"rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"camo3",
				"camo4",
				"camo5"
			};
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
				"rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp: rhsusf_spcs_ocp
	{
		};
		class ItemInfo: ItemInfo
		{
			};
		};
	};
	class rhsusf_spcs_ucp_squadleader: rhsusf_spcs_ocp_squadleader
	{
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_teamleader: rhsusf_spcs_ocp_teamleader
	{
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
				"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_teamleader_alt: rhsusf_spcs_ocp_teamleader_alt
	{
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_saw: rhsusf_spcs_ocp_saw
	{
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_grenadier: rhsusf_spcs_ocp_grenadier
	{
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_rifleman: rhsusf_spcs_ocp_rifleman
	{
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_rifleman_alt: rhsusf_spcs_ocp_rifleman_alt
	{
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_medic: rhsusf_spcs_ocp_medic
	{
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\m4\data\magazine_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_crewman: rhsusf_spcs_ocp_crewman
	{
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\mag_proxies\data\pmag_black_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_machinegunner: rhsusf_spcs_ocp_machinegunner
	{
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa"
			};
		};
	};
	class rhsusf_spcs_ucp_sniper: rhsusf_spcs_ocp_sniper
	{
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
			"rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"
		};
		class ItemInfo: ItemInfo
		{
				"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
				"rhsusf\addons\rhsusf_weapons\grenades\m18\data\m18_green_ca.paa",
				"rhsusf\addons\rhsusf_weapons2\mk14\data\mk14_co.paa"
			};
		};
	};
	class rhsusf_plateframe_sapi: rhsusf_iotv_ocp_base
	{
			"Camo3",
			"Camo4",
			"Camo5",
			"Camo6",
			"Camo7"
		};
			"rhsusf\addons\rhsusf_infantry2\gear\vests\mbav\data\mbav_gear_co.paa",
			"rhsusf\addons\rhsusf_infantry\gear\vests\data\rhs_vest_iotv2_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_usgi_alum_co.paa",
			"rhsusf\addons\rhsusf_weapons\mag_proxies\data\rhs_30rn_magpul_black_co.paa",
			"rhsusf\addons\rhsusf_weapons3\mk17\data\mk17_co.paa"
		};
		descriptionShort="Armor Level III";
		class ItemInfo: ItemInfo
		{
				"Camo3",
				"Camo4",
				"Camo5",
				"Camo6",
				"Camo7"
			};
			containerClass="Supply20";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
                    passthrough=0.35;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
                    passthrough=0.35;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.35;				};
			};
		};
	};
	class rhsusf_plateframe_light: rhsusf_plateframe_sapi
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
                    passthrough=0.35;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22 + 		3";
                    passthrough=0.35;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.35;				};
			};
		};
	};
	class rhsusf_plateframe_rifleman: rhsusf_plateframe_sapi
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply160";
			mass=100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
                    passthrough=0.35;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor="22 + 		3";
                    passthrough=0.35;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.35;				};
			};
		};
	};
	class rhssaf_helmet_base: H_HelmetB
	{
		dlc="RHS_SAF";
		allowedFacewear[]=
		{
			"rhs_scarf",
			"G_Aviator"
		};
		class ItemInfo: HeadgearItem
		{
			mass=42;
			allowedSlots[]={901,605};
			{
				class Head
				{
					hitpointName="HitHead";
					armor=3;
                    passthrough=0.6;				};
			};
		};
	};
	class rhssaf_helmet_m59_85_nocamo: rhssaf_helmet_base
	{
		dlc="RHS_SAF";
	};
	class rhssaf_helmet_m59_85_oakleaf: rhssaf_helmet_base
	{
		dlc="RHS_SAF";
		{
			mass=42;
			allowedSlots[]={901,605};
			{
				class Head
				{
					hitpointName="HitHead";
					armor=3;
                    passthrough=0.6;				};
			};
		};
	};
	class rhssaf_helmet_m97_black_nocamo: rhssaf_helmet_m97_olive_nocamo
	{
		dlc="RHS_SAF";
	class rhssaf_helmet_m97_black_nocamo_black_ess: rhssaf_helmet_m97_olive_nocamo_black_ess
	{
		dlc="RHS_SAF";
	};
	class rhssaf_helmet_m97_black_nocamo_black_ess_bare: rhssaf_helmet_m97_olive_nocamo_black_ess_bare
	{
		dlc="RHS_SAF";
	};
	class rhssaf_helmet_m97_woodland: rhssaf_helmet_base
	{
		dlc="RHS_SAF";
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhssaf_helmet_m97_digital: rhssaf_helmet_m97_woodland
	{
		dlc="RHS_SAF";
	class rhssaf_helmet_m97_md2camo: rhssaf_helmet_m97_woodland
	{
		dlc="RHS_SAF";
	class rhssaf_helmet_m97_oakleaf: rhssaf_helmet_m97_woodland
	{
		dlc="RHS_SAF";
	class rhssaf_helmet_m97_nostrap_blue_tan_ess: rhssaf_helmet_m97_woodland
	{
		dlc="RHS_SAF";
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhssaf_helmet_m97_nostrap_blue_tan_ess_bare: rhssaf_helmet_m97_woodland
	{
		dlc="RHS_SAF";
		class ItemInfo: HeadgearItem
		{
			mass=40;
			allowedSlots[]={901,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhssaf_helmet_m97_woodland_black_ess: rhssaf_helmet_m97_olive_nocamo_black_ess
	{
		dlc="RHS_SAF";
		descriptionShort="$STR_RHSSAF_HELMET_M97_WOODLAND_BLACK_ESS_DESCRIPTIONSHORT";
		class ItemInfo: HeadgearItem
		{
			mass=42;
			allowedSlots[]={901,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhssaf_helmet_m97_digital_black_ess: rhssaf_helmet_m97_woodland_black_ess
	{
		dlc="RHS_SAF";
	};
	class rhssaf_helmet_m97_md2camo_black_ess: rhssaf_helmet_m97_woodland_black_ess
	{
		dlc="RHS_SAF";
	};
	class rhssaf_helmet_m97_oakleaf_black_ess: rhssaf_helmet_m97_woodland_black_ess
	{
		dlc="RHS_SAF";
	};
	class rhssaf_helmet_m97_digital_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
	{
		dlc="RHS_SAF";
	};
	class rhssaf_helmet_m97_md2camo_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
	{
		dlc="RHS_SAF";
	};
	class rhssaf_helmet_m97_oakleaf_black_ess_bare: rhssaf_helmet_m97_woodland_black_ess_bare
	{
		dlc="RHS_SAF";
	};
	class rhssaf_helmet_m97_veil_Base: rhssaf_helmet_m97_woodland
	{
		dlc="RHS_SAF";
		};
		};
		class ItemInfo: ItemInfo
		{
			};
		};
	};
	class rhssaf_helmet_m97_veil_woodland: rhssaf_helmet_m97_veil_Base
	{
		dlc="RHS_SAF";
		};
	};
	class rhssaf_helmet_m97_veil_digital: rhssaf_helmet_m97_veil_Base
	{
		dlc="RHS_SAF";
		};
	};
	class rhssaf_helmet_m97_veil_md2camo: rhssaf_helmet_m97_veil_Base
	{
		dlc="RHS_SAF";
		};
	};
	class rhssaf_helmet_m97_veil_oakleaf: rhssaf_helmet_m97_veil_Base
	{
		dlc="RHS_SAF";
		};
	};
	class rhssaf_beret_green: rhssaf_helmet_base
	{
		dlc="RHS_SAF";
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhssaf_beret_red: rhssaf_beret_green
	{
		dlc="RHS_SAF";
	class rhssaf_beret_para: rhssaf_beret_green
	{
		dlc="RHS_SAF";
	class rhssaf_beret_black: rhssaf_beret_green
	{
		dlc="RHS_SAF";
	class rhssaf_beret_blue_un: rhssaf_helmet_base
	{
		dlc="RHS_SAF";
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhssaf_booniehat_digital: rhs_booniehat2_marpatd
	{
		dlc="RHS_SAF";
	class rhssaf_booniehat_md2camo: rhs_booniehat2_marpatd
	{
		dlc="RHS_SAF";
	class rhssaf_booniehat_woodland: rhs_booniehat2_marpatd
	{
		dlc="RHS_SAF";
	class rhssaf_bandana_digital: H_Bandanna_khk
	{
		dlc="RHS_SAF";
	class rhssaf_bandana_digital_desert: rhssaf_bandana_digital
	{
		dlc="RHS_SAF";
	class rhssaf_bandana_oakleaf: rhssaf_bandana_digital
	{
		dlc="RHS_SAF";
	class rhssaf_bandana_smb: rhssaf_bandana_digital
	{
		dlc="RHS_SAF";
	class rhssaf_bandana_md2camo: rhssaf_bandana_digital
	{
		dlc="RHS_SAF";
	class rhssaf_uniform_m10_digital: Uniform_Base
	{
		dlc="RHS_SAF";
		{
			uniformClass="rhssaf_soldier_army_digital_base";
			containerClass="Supply60";
			mass=40;
	};
	class rhssaf_uniform_m10_digital_summer: Uniform_Base
	{
		dlc="RHS_SAF";
		{
			uniformClass="rhssaf_soldier_army_para_digital_base";
			containerClass="Supply60";
			mass=40;
	};
	class rhssaf_uniform_m10_digital_desert: Uniform_Base
	{
		dlc="RHS_SAF";
		{
			uniformClass="rhssaf_soldier_un_desert_base";
			containerClass="Supply60";
			mass=40;
	};
	class rhssaf_uniform_m10_digital_tan_boots: Uniform_Base
	{
		dlc="RHS_SAF";
		{
			uniformClass="rhssaf_soldier_un_digital_base";
			containerClass="Supply60";
			mass=40;
	};
	class rhssaf_uniform_m93_oakleaf: Uniform_Base
	{
		dlc="RHS_SAF";
		{
			uniformClass="rhssaf_soldier_army_oakleaf_base";
			containerClass="Supply60";
			mass=40;
	};
	class rhssaf_uniform_m93_oakleaf_summer: Uniform_Base
	{
		dlc="RHS_SAF";
		{
			uniformClass="rhssaf_soldier_army_oakleaf_summer_base";
			containerClass="Supply60";
			mass=40;
	};
	class rhssaf_uniform_heli_pilot: Uniform_Base
	{
		dlc="RHS_SAF";
		{
			uniformClass="rhssaf_airforce_pilot_transport_heli";
			containerClass="Supply60";
			mass=40;
		ACE_GForceCoef=0.80000001;
	};
	class rhssaf_uniform_mig29_pilot: Uniform_Base
	{
		dlc="RHS_SAF";
		{
			uniformClass="rhssaf_airforce_pilot_mig29";
			containerClass="Supply60";
			mass=40;
		ACE_GForceCoef=0.80000001;
	};
	class rhssaf_uniform_gendarmes_acu: Uniform_Base
	{
		dlc="RHS_SAF";
		};
		};
		class ItemInfo: UniformItem
		{
			uniformClass="rhssaf_soldier_atf_base";
			containerClass="Supply60";
			mass=40;
			};
		};
	};
	class rhssaf_balistic_vest_base: Vest_Camo_Base
	{
		dlc="RHS_SAF";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		class ItemInfo: ItemInfo
		{
			mass=60;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=8;
                    passthrough=0.7;				};
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
                    passthrough=0.35;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
                    passthrough=0.35;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=22;
                    passthrough=0.35;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.35;				};
			};
		};
	};
	class rhssaf_tactical_vest_base: Vest_Camo_Base
	{
		dlc="RHS_SAF";
		weaponPoolAvailable=1;
		allowedSlots[]={901};
		class ItemInfo: ItemInfo
		{
			mass=40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=0;
					PassThrough=1;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=3;
                    passthrough=0.75;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=3;
                    passthrough=0.75;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.75;				};
			};
		};
	};
	class rhssaf_vest_md98_woodland: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=60;
		};
	};
	class rhssaf_vest_md98_md2camo: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=60;
		};
	};
	class rhssaf_vest_md98_digital: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=60;
		};
	};
	class rhssaf_vest_md98_officer: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=60;
		};
	};
	class rhssaf_vest_otv_md2camo: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		{
			containerClass="Supply90";
			mass=70;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=0;
					PassThrough=0.89999998;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
                    passthrough=0.35;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
                    passthrough=0.35;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.7;				};
			};
		};
	};
	class rhssaf_vest_md99_md2camo_rifleman: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=70;
		};
	};
	class rhssaf_vest_md99_md2camo_rifleman_radio: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=75;
		};
	};
	class rhssaf_vest_md99_digital_rifleman: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		descriptionShort="$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply90";
			mass=70;
		};
	};
	class rhssaf_vest_md99_digital_rifleman_radio: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		descriptionShort="$STR_RHSSAF_BALISTIC_VEST_BASE_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply90";
			mass=75;
		};
	};
	class rhssaf_vest_md99_md2camo: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=60;
		};
	};
	class rhssaf_vest_md99_md2camo_radio: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=65;
		};
	};
	class rhssaf_vest_md99_digital: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=60;
		};
	};
	class rhssaf_vest_md99_digital_radio: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=65;
		};
	};
	class rhssaf_vest_md99_woodland: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=60;
		};
	};
	class rhssaf_vest_md99_woodland_radio: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=65;
		};
	};
	class rhssaf_vest_md12_m70_rifleman: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		descriptionShort="$STR_RHSSAF_VEST_MD12_DIGITAL_DESCRIPTIONSHORT";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply70";
			mass=90;
		};
	};
	class rhssaf_vest_md12_digital_desert: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=70;
		};
	};
	class rhssaf_vest_md99a5_md2camo_rifleman: rhssaf_balistic_vest_base
	{
		dlc="RHS_SAF";
		class ItemInfo: ItemInfo
		{
			mass=120;
		};
	};
	class ACE_fieldDressing: ACE_ItemCore
	{
		descriptionShort="$STR_ace_medical_treatment_Bandage_Basic_Desc_Short";
		descriptionUse="$STR_ace_medical_treatment_Bandage_Basic_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class ACE_packingBandage: ACE_ItemCore
	{
		descriptionShort="$STR_ace_medical_treatment_Packing_Bandage_Desc_Short";
		descriptionUse="$STR_ace_medical_treatment_Packing_Bandage_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class ACE_elasticBandage: ACE_ItemCore
	{
		descriptionShort="$STR_ace_medical_treatment_Bandage_Elastic_Desc_Short";
		descriptionUse="$STR_ace_medical_treatment_Bandage_Elastic_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class ACE_tourniquet: ACE_ItemCore
	{
		descriptionShort="$STR_ace_medical_treatment_Tourniquet_Desc_Short";
		descriptionUse="$STR_ace_medical_treatment_Tourniquet_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class ACE_splint: ACE_ItemCore
	{
		descriptionShort="$STR_ace_medical_treatment_splint_Desc_Short";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=2;
		};
	};
	class ACE_morphine: ACE_ItemCore
	{
		descriptionShort="$STR_ace_medical_treatment_Morphine_Desc_Short";
		descriptionUse="$STR_ace_medical_treatment_Morphine_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class ACE_adenosine: ACE_ItemCore
	{
		descriptionShort="$STR_ace_medical_treatment_adenosine_Desc_Short";
		descriptionUse="$STR_ace_medical_treatment_adenosine_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class ACE_atropine: ACE_ItemCore
	{
		descriptionShort="$STR_ace_medical_treatment_Atropine_Desc_Short";
		descriptionUse="$STR_ace_medical_treatment_Atropine_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class ACE_epinephrine: ACE_ItemCore
	{
		descriptionShort="$STR_ace_medical_treatment_Epinephrine_Desc_Short";
		descriptionUse="$STR_ace_medical_treatment_Epinephrine_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class ACE_plasmaIV: ACE_ItemCore
	{
		descriptionUse="$STR_ace_medical_treatment_Plasma_IV_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=10;
		};
	};
	class ACE_plasmaIV_500: ACE_plasmaIV
	{
		{
			mass=5;
		};
	};
	class ACE_plasmaIV_250: ACE_plasmaIV
	{
		{
			mass=2.5;
		};
	};
	class ACE_bloodIV: ACE_ItemCore
	{
		descriptionUse="$STR_ace_medical_treatment_Blood_IV_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=10;
		};
	};
	class ACE_bloodIV_500: ACE_bloodIV
	{
		{
			mass=5;
		};
	};
	class ACE_bloodIV_250: ACE_bloodIV
	{
		{
			mass=2.5;
		};
	};
	class ACE_salineIV: ACE_ItemCore
	{
		descriptionUse="$STR_ace_medical_treatment_Saline_IV_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=10;
		};
	};
	class ACE_salineIV_500: ACE_salineIV
	{
		{
			mass=5;
		};
	};
	class ACE_salineIV_250: ACE_salineIV
	{
		{
			mass=2.5;
		};
	};
	class ACE_quikclot: ACE_ItemCore
	{
		descriptionShort="$STR_ace_medical_treatment_QuikClot_Desc_Short";
		descriptionUse="$STR_ace_medical_treatment_QuikClot_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class ACE_personalAidKit: ACE_ItemCore
	{
		descriptionShort="$STR_ace_medical_treatment_Aid_Kit_Desc_Short";
		descriptionUse="$STR_ace_medical_treatment_Aid_Kit_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=10;
		};
	};
	class ACE_surgicalKit: ACE_ItemCore
	{
		descriptionShort="$STR_ace_medical_treatment_SurgicalKit_Desc_Short";
		descriptionUse="$STR_ace_medical_treatment_SurgicalKit_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=15;
		};
	};
	class ACE_bodyBag: ACE_ItemCore
	{
		descriptionShort="$STR_ace_medical_treatment_Bodybag_Desc_Short";
		descriptionUse="$STR_ace_medical_treatment_Bodybag_Desc_Use";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=7;
		};
	};
	class ACE_VMM3: Pistol_Base_F
	{
		descriptionShort="$STR_ace_minedetector_VMM3_Description";
		magazines[]={};
		modes[]=
		{
			"Single"
		};
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
		class Single: Mode_SemiAuto
		{
			sounds[]={};
			begin1[]=
			{
				"",
				1.77828,
				1,
				1000
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
			reloadTime=0.075000003;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			dispersion=0.001;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.050000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			holsterScale=0;
			mass=77;
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
		};
	};
	class ACE_VMH3: ACE_VMM3
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=55;
		};
	};
	class ACE_RangeTable_82mm: ACE_ItemCore
	{
		descriptionShort="$STR_ace_mk6mortar_rangetable_description";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0.5;
		};
	};
	class ACE_mortar_82mm: mortar_82mm
	{
		magazines[]=
		{
			"ACE_1Rnd_82mm_Mo_HE",
			"ACE_1Rnd_82mm_Mo_Smoke",
			"ACE_1Rnd_82mm_Mo_Illum",
			"ACE_1Rnd_82mm_Mo_HE_Guided",
			"ACE_1Rnd_82mm_Mo_HE_LaserGuided"
		};
		modes[]=
		{
			"Single1",
			"Single2",
			"Single3"
		};
		reloadTime=0.5;
		magazineReloadTime=0.5;
		class Single1: Single1
		{
			reloadTime=0.5;
		};
	};
	class rhsgref_uniform_ttsko_forest: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_cdf_reg_TTsKO_forest";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_ttsko_mountain: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_cdf_reg_TTsKO_mountain";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_ttsko_urban: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_cdf_reg_TTsKO_urban";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_vsr: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_cdf_reg_vsr";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_para_ttsko_oxblood: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_cdf_para_TTsKO_summer";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_para_ttsko_mountain: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_cdf_para_TTsKO_fall";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_para_ttsko_urban: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_cdf_para_TTsKO_dark";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_specter: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_ins_uniform_specter";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_reed: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_ins_reed";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_alpenflage: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_nat_alpenflage";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_flecktarn: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_nat_flecktarn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_flecktarn_full: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_nat_flecktarn_full";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_tigerstripe: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_nat_tigerstripe";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_woodland: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_nat_woodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_woodland_olive: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_nat_woodland_olive";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_ERDL: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_hidf_ERDL";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_og107: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_hidf_og107";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_og107_erdl: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_hidf_og107_erdl";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_altis_lizard: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_nat_altis_lizard";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_olive: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_nat_olive";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_altis_lizard_olive: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_nat_altis_lizard_olive";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_dpm: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_nat_dpm";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_dpm_olive: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_nat_dpm_olive";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_3color_desert: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_nat_3color_desert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_gorka_1_f: Uniform_Base
	{
		dlc="RHS_GREF";
		class ItemInfo: UniformItem
		{
			uniformClass="rhsgref_nat_gorka_1_flecktarn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class rhsgref_uniform_TLA_1: U_IG_leader
	{
		dlc="RHS_GREF";
		{
			uniformClass="rhsgref_tla_para1";
		};
	};
	class rhsgref_uniform_TLA_2: U_IG_leader
	{
		dlc="RHS_GREF";
		{
			uniformClass="rhsgref_tla_para2";
		};
	};
	class rhsgref_un_beret: ItemCore
	{
		dlc="RHS_GREF";
		weaponPoolAvailable=1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
		};
	};
	class rhsgref_Booniehat_alpen: ItemCore
	{
		dlc="RHS_GREF";
		weaponPoolAvailable=1;
		{
			mass=10;
			allowedSlots[]={801,901,701,605};
	};
	};
	class rhsgref_bcap_specter: H_Cap_red
	{
		dlc="RHS_GREF";
		{
			"G_Aviator",
			"G_Balaclava_blk",
			"G_Balaclava_oli",
			"G_Bandanna_aviator",
			"G_Bandanna_beast",
			"G_Bandanna_blk",
			"G_Bandanna_khk",
			"G_Bandanna_oli",
			"G_Bandanna_shades",
			"G_Bandanna_sport",
			"G_Bandanna_tan",
			"G_Shades_Black",
			"G_Shades_Blue",
			"G_Shades_Red",
			"G_Shades_Green"
		};
	};
	class rhsgref_patrolcap_specter: rhs_fieldcap_digi2
	{
		dlc="RHS_GREF";
		{
			allowedSlots[]={801,901,701,605};
		};
	};
	class rhsgref_fieldcap: H_HelmetB
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"rhs_scarf",
			"G_Aviator"
		};
		{
			allowedSlots[]={801,901,701,605};
		};
	};
	class rhsgref_fieldcap_ttsko_forest: rhsgref_fieldcap
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	};
	class rhsgref_fieldcap_ttsko_mountain: rhsgref_fieldcap
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	};
	class rhsgref_fieldcap_ttsko_urban: rhsgref_fieldcap
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	};
	class rhsgref_fieldcap_ttsko_digi: rhsgref_fieldcap
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"rhs_scarf",
			"G_Balaclava_blk"
		};
	};
	class rhsgref_ssh68: H_HelmetB
	{
		allowedFacewear[]=
		{
			"rhs_scarf",
			"G_Aviator"
		};
		{
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=2;
                    passthrough=0.7;				};
			};
		};
	};
	class rhsgref_ssh68_ttsko_mountain: rhsgref_ssh68
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	class rhsgref_ssh68_ttsko_forest: rhsgref_ssh68
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	class rhsgref_ssh68_ttsko_fall: rhsgref_ssh68
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	class rhsgref_ssh68_ttsko_summer: rhsgref_ssh68
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	class rhsgref_ssh68_ttsko_dark: rhsgref_ssh68
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	class rhsgref_ssh68_ttsko_digi: rhsgref_ssh68
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	class rhsgref_ssh68_emr: rhsgref_ssh68
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	class rhsgref_ssh68_un: rhsgref_ssh68
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	class rhsgref_ssh68_vsr: rhsgref_ssh68
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	class rhsgref_M56: H_HelmetB
	{
		allowedFacewear[]=
		{
			"rhs_scarf",
			"G_Aviator"
		};
		hidddenSelections[]=
		{
			"Camo2"
		};
		class ItemInfo: ItemInfo
		{
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=2;
                    passthrough=0.7;				};
			};
		};
	};
	class rhsgref_6b27m: H_HelmetB
	{
		allowedFacewear[]=
		{
			"rhs_scarf",
			"G_Aviator"
		};
		{
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhsgref_6b27m_ttsko_forest: rhsgref_6b27m
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	class rhsgref_6b27m_ttsko_mountain: rhsgref_6b27m
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	class rhsgref_6b27m_ttsko_urban: rhsgref_6b27m
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"G_Squares_Tinted",
			"G_Aviator"
		};
	class rhsgref_6b27m_ttsko_digi: rhsgref_6b27m
	{
		dlc="RHS_GREF";
		allowedFacewear[]=
		{
			"rhs_scarf",
			"G_Balaclava_blk"
		};
	class rhsgref_helmet_M1_bare: H_HelmetB
	{
		{
			mass=40;
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=2;
                    passthrough=0.7;				};
			};
		};
	};
	class rhsgref_helmet_M1_bare_alt01: rhsgref_helmet_M1_bare
	{
		{
		};
	};
	class rhsgref_helmet_M1_liner: H_HelmetB
	{
		{
			mass=40;
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
                    passthrough=0.7;				};
			};
		};
	};
	class rhsgref_helmet_M1_mit: H_HelmetB
	{
		{
			mass=42;
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=2;
                    passthrough=0.7;				};
			};
		};
	};
	class rhsgref_helmet_M1_erdl: rhsgref_helmet_M1_mit
	{
		{
			mass=42;
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=2;
                    passthrough=0.7;				};
			};
		};
	};
	class rhsgref_helmet_M1_des: rhsgref_helmet_M1_mit
	{
		{
			mass=42;
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=2;
                    passthrough=0.7;				};
			};
		};
	};
	class rhsgref_hat_M1951: H_HelmetB
	{
		{
			mass=5;
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=0;
				};
			};
		};
	};
	class rhsgref_hat_m1941cap: rhsgref_hat_M1951
	{
		{
		};
	};
	class rhsgref_helmet_M1_painted: rhsgref_helmet_M1_bare
	{
		{
		};
	};
	class rhsgref_helmet_M1_painted_alt01: rhsgref_helmet_M1_bare
	{
		{
		};
	};
	class rhsgref_helmet_pasgt_erdl: H_HelmetB
	{
		{
			mass=40;
			allowedSlots[]={801,901,701,605};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
                    passthrough=0.7;				};
			};
		};
	};
	class rhsgref_helmet_pasgt_erdl_rhino: H_HelmetB
	{
		{
		};
	};
	class rhsgref_helmet_pasgt_flecktarn: rhsgref_helmet_pasgt_erdl_rhino
	{
		{
		};
	};
	class rhsgref_helmet_pasgt_un: rhsgref_helmet_pasgt_erdl
	{
		{
		};
	};
	class rhsgref_helmet_pasgt_press: rhsgref_helmet_pasgt_erdl
	{
		{
		};
	};
	class rhsgref_helmet_pasgt_3color_desert: rhsgref_helmet_pasgt_erdl
	{
		{
		};
	};
	};
	class rhsgref_6b23_khaki_nco: rhsgref_6b23_khaki
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply80";
			mass=65;
		};
	};
	class rhsgref_6b23_khaki_medic: rhsgref_6b23_khaki
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply130";
			mass=80;
		};
	};
	class rhsgref_6b23_ttsko_forest: rhsgref_6b23_khaki
	{
 
	};
	class rhsgref_6b23_ttsko_forest_rifleman: rhsgref_6b23_khaki_rifleman
	{
 
	};
	class rhsgref_6b23_ttsko_mountain: rhsgref_6b23_khaki
	{
 
	};
	class rhsgref_6b23_ttsko_mountain_rifleman: rhsgref_6b23_khaki_rifleman
	{
 
	};
	class rhsgref_6b23_ttsko_mountain_sniper: rhsgref_6b23_khaki_sniper
	{
 
	};
	class rhsgref_6b23_ttsko_mountain_officer: rhsgref_6b23_khaki_officer
	{
 
	};
	class rhsgref_6b23_ttsko_mountain_nco: rhsgref_6b23_khaki_nco
	{
 
	};
	class rhsgref_6b23_ttsko_mountain_medic: rhsgref_6b23_khaki_medic
	{
 
	};
	class rhsgref_6b23_ttsko_digi: rhsgref_6b23_khaki
	{
 
	};
	class rhsgref_6b23_ttsko_digi_rifleman: rhsgref_6b23_khaki_rifleman
	{
 
	};
	class rhsgref_6b23_ttsko_digi_sniper: rhsgref_6b23_khaki_sniper
	{
 
	};
	class rhsgref_6b23_ttsko_digi_officer: rhsgref_6b23_khaki_officer
	{
 
	};
	class rhsgref_6b23_ttsko_digi_nco: rhsgref_6b23_khaki_nco
	{
 
	};
	class rhsgref_6b23_ttsko_digi_medic: rhsgref_6b23_khaki_medic
	{
 
	};
	class rhsgref_otv_khaki: rhsgref_6b23_khaki_rifleman
	{
		{
			containerClass="Supply100";
			mass=70;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=0;
					PassThrough=0.89999998;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
                    passthrough=0.35;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
                    passthrough=0.35;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.7;				};
			};
		};
	};
	class rhsgref_otv_digi: rhsgref_otv_khaki
	{
		{
	};
	class rhsgref_TacVest_ERDL: rhsgref_6b23_khaki_rifleman
	{
		{
			containerClass="Supply100";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName="HitNeck";
					armor=0;
					PassThrough=0.89999998;
				};
				class Chest
				{
					HitpointName="HitChest";
					armor=8;
                    passthrough=0.7;				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=8;
                    passthrough=0.7;				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=3;
                    passthrough=0.75;				};
				class Body
				{
					hitpointName="HitBody";
                    passthrough=0.7;				};
			};
		};
	};
	class rhsgref_alice_webbing: rhs_6b23
	{
		dlc="RHS_GREF";
			mass=15;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhsgref_chestrig: rhs_6b23
	{
		dlc="RHS_GREF";
		descriptionShort="No Armor";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=15;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhsgref_chicom: rhsgref_chestrig
	{
		dlc="RHS_GREF";
		class ItemInfo: ItemInfo
		{
			mass=15;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName="HitBody";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class rhsgref_chicom_m88: rhsgref_chicom
	{
 
	};
	class rhsgref_weap_ak103_pso1m21: rhs_weap_ak103
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_acc_pso1m21";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="rhs_acc_dtk";
			};
		};
	};
	class rhsgref_weap_ak103_pso1m2: rhs_weap_ak103
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_acc_pso1m2";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="rhs_acc_dtk";
			};
		};
	};
	class rhsgref_weap_svds: rhs_weap_svds
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_acc_pso1m2";
			};
		};
	};
	class rhsgref_weap_savz58v_black_rxo1: rhs_weap_savz58v_rail_black
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_RX01_NoFilter";
			};
		};
	};
	class rhsgref_weap_savz58v_saboteur: rhs_weap_savz58v_ris_grip3
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_T1_low_fwd";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="rhsgref_acc_zendl";
			};
			class LinkedItemsUnder
			{
				slot="GripodSlot";
				item="rhsusf_acc_tdstubby_blk";
			};
		};
	};
	class rhsgref_weap_akm_zenitco: rhs_weap_akm_zenitco01_b33_grip1
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="rhs_acc_dtkakm";
			};
			class LinkedItemsUnder
			{
				slot="GripodSlot";
				item="rhs_acc_grip_rk6";
			};
		};
	};
	class rhsgref_weap_akm_zenitco_sd: rhs_weap_akm_zenitco01_b33_grip1
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="rhs_acc_pbs1";
			};
			class LinkedItemsUnder
			{
				slot="GripodSlot";
				item="rhs_acc_grip_rk6";
			};
		};
	};
	class UK3CB_BAF_L85A3: UK3CB_BAF_L85A2
	{
		DLC="UK3CB_BAF_Weapons";
		baseWeapon="UK3CB_BAF_L85A3";
		descriptionshort="Assault Rifle<br/>Calibre: 5.56x45mm STANAG<br/>by www.3commandobrigade.com";
		class Library
		{
			libtextdesc="The L85A3 is the Heckler and Koch updated version of the SA80 L85A2 and is one of the most accurate individual weapons currently available.";
		};
		discretedistance[]={100,200,300,400,500};
		discretedistanceinitindex=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\data\anims\L85A3.rtm"
		};
		magazineWell[]={};
		reloadaction="GestureReloadTRG";
		reloadmagazinesound[]=
		{
			"UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\Sounds\L85_reloadmag",
			1,
			1,
			30
		};
		initSpeed=940;
		inertia=0.30000001;
		dexterity=1;
		ace_barrelLength=518;
		ace_barrelTwist=180;
		ace_twistDirection=1;
		ace_railHeightAboveBore=3.0999999;
		ace_railBaseAngle=0;
		ace_ironSightBaseAngle=0;
		deployedPivot="bipod";
		hasBipod=0;
		UK3CB_underbarrel_altWeapon_afg="UK3CB_BAF_L85A3_AFG";
		UK3CB_underbarrel_altWeapon_afg_d="UK3CB_BAF_L85A3_AFG_D";
		UK3CB_underbarrel_altWeapon_afg_g="UK3CB_BAF_L85A3_AFG_G";
		UK3CB_underbarrel_altWeapon_afg_t="UK3CB_BAF_L85A3_AFG_T";
		UK3CB_underbarrel_altWeapon_afg_w="UK3CB_BAF_L85A3_AFG_W";
		UK3CB_underbarrel_altWeapon_grippod="UK3CB_BAF_L85A3_Grippod";
		UK3CB_underbarrel_altWeapon_grippod_d="UK3CB_BAF_L85A3_Grippod_D";
		UK3CB_underbarrel_altWeapon_grippod_g="UK3CB_BAF_L85A3_Grippod_G";
		UK3CB_underbarrel_altWeapon_grippod_t="UK3CB_BAF_L85A3_Grippod_T";
		UK3CB_underbarrel_altWeapon_grippod_w="UK3CB_BAF_L85A3_Grippod_W";
		UK3CB_underbarrel_baseWeapon="UK3CB_BAF_L85A3";
		UK3CB_safemode=1;
		weaponInfoType="UK3CB_RscWeaponZeroing_UnderbarrelAcc";
		class GunParticles: GunParticles
		{
			class RifleAmmoCloud
			{
				positionName="nabojnicestart";
				directionName="nabojniceend";
				effectName="UK3CB_EjectionSmoke";
			};
			class SmokeEffect
			{
				positionName="usti hlavne";
				directionName="usti hlavne up";
				effectName="UK3CB_HeatHaze";
			};
		};
		class WeaponSlotsInfo
		{
			allowedslots[]={901};
			mass=82;
			class MuzzleSlot: UK3CB_MuzzleSlot_556_L85
			{
			};
			class PointerSlot: UK3CB_FrontSideRail
			{
			};
			class CowsSlot: UK3CB_OpticalRailMedium
			{
			};
			class UnderBarrelSlot: UK3CB_UnderSlot_L85
			{
			};
		};
		muzzles[]=
		{
			"this",
			"Safe"
		};
		class Safe: uk3cb_safe_base
		{
		};
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3CB_BAF_L85_Closure_SoundSet",
					"3CB_BAF_L85_Shot_SoundSet",
					"3CB_BAF_Rifle1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3CB_BAF_L85_Closure_SoundSet",
					"3CB_BAF_L85_ShotSD_SoundSet",
					"3CB_BAF_Rifle1_SD_Tail_SoundSet"
				};
			};
			reloadTime=0.092330001;
			dispersion=0.00089999998;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class FullAuto: FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3CB_BAF_L85_Closure_SoundSet",
					"3CB_BAF_L85_Shot_SoundSet",
					"3CB_BAF_Rifle1_Tail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3CB_BAF_L85_Closure_SoundSet",
					"3CB_BAF_L85_ShotSD_SoundSet",
					"3CB_BAF_Rifle1_SD_Tail_SoundSet"
				};
			};
			reloadTime=0.092330001;
			dispersion=0.00089999998;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class Fullauto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class Single_medium_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			minRange=2;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.30000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		class Single_far_optics2: Single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.60000002;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=800;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
	};
	class UK3CB_BAF_L85A3_AFG: UK3CB_BAF_L85A3
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\data\anims\L85A3_handpose_afg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="UK3CB_underbarrel_acc_afg";
				slot="UnderBarrelSlot";
			};
		};
	};
	class UK3CB_BAF_L85A3_AFG_D: UK3CB_BAF_L85A3
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\data\anims\L85A3_handpose_afg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="UK3CB_underbarrel_acc_afg_d";
				slot="UnderBarrelSlot";
			};
		};
	};
	class UK3CB_BAF_L85A3_AFG_G: UK3CB_BAF_L85A3
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\data\anims\L85A3_handpose_afg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="UK3CB_underbarrel_acc_afg_g";
				slot="UnderBarrelSlot";
			};
		};
	};
	class UK3CB_BAF_L85A3_AFG_T: UK3CB_BAF_L85A3
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\data\anims\L85A3_handpose_afg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="UK3CB_underbarrel_acc_afg_t";
				slot="UnderBarrelSlot";
			};
		};
	};
	class UK3CB_BAF_L85A3_AFG_W: UK3CB_BAF_L85A3
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\data\anims\L85A3_handpose_afg.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="UK3CB_underbarrel_acc_afg_w";
				slot="UnderBarrelSlot";
			};
		};
	};
	class UK3CB_BAF_L85A3_Grippod: UK3CB_BAF_L85A3
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\data\anims\L85A3_handpose_vertical.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="UK3CB_underbarrel_acc_grippod";
				slot="UnderBarrelSlot";
			};
		};
	};
	class UK3CB_BAF_L85A3_Grippod_D: UK3CB_BAF_L85A3
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\data\anims\L85A3_handpose_vertical.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="UK3CB_underbarrel_acc_grippod_d";
				slot="UnderBarrelSlot";
			};
		};
	};
	class UK3CB_BAF_L85A3_Grippod_G: UK3CB_BAF_L85A3
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\data\anims\L85A3_handpose_vertical.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="UK3CB_underbarrel_acc_grippod_g";
				slot="UnderBarrelSlot";
			};
		};
	};
	class UK3CB_BAF_L85A3_Grippod_T: UK3CB_BAF_L85A3
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\data\anims\L85A3_handpose_vertical.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="UK3CB_underbarrel_acc_grippod_t";
				slot="UnderBarrelSlot";
			};
		};
	};
	class UK3CB_BAF_L85A3_Grippod_W: UK3CB_BAF_L85A3
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\data\anims\L85A3_handpose_vertical.rtm"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item="UK3CB_underbarrel_acc_grippod_w";
				slot="UnderBarrelSlot";
			};
		};
	};
	class UK3CB_BAF_L85A3_UGL: UK3CB_BAF_L85A3
	{
		baseWeapon="UK3CB_BAF_L85A3_UGL";
		descriptionshort="Assault Rifle with UGL<br/>Calibre: 5.56x45mm STANAG<br/>by www.3commandobrigade.com";
		handanim[]=
		{
			"OFP2_ManSkeleton",
			"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_L85A3\data\anims\L85A3UGL.rtm"
		};
		muzzles[]=
		{
			"this",
			"UK3CB_BAF_L123A2"
		};
		inertia=0.40000001;
		dexerity=0.80000001;
		UK3CB_underbarrel_altWeapon_afg="";
		UK3CB_underbarrel_altWeapon_afg_d="";
		UK3CB_underbarrel_altWeapon_afg_g="";
		UK3CB_underbarrel_altWeapon_afg_t="";
		UK3CB_underbarrel_altWeapon_afg_w="";
		UK3CB_underbarrel_altWeapon_grippod="";
		UK3CB_underbarrel_altWeapon_grippod_d="";
		UK3CB_underbarrel_altWeapon_grippod_g="";
		UK3CB_underbarrel_altWeapon_grippod_t="";
		UK3CB_underbarrel_altWeapon_grippod_w="";
		UK3CB_underbarrel_altWeapon_grippod_tan="";
		UK3CB_underbarrel_baseWeapon="UK3CB_BAF_L85A3_UGL";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=115;
			class UnderBarrelSlot
			{
			};
		};
		class UK3CB_BAF_L123A2: UK3CB_BAF_L123A2
		{
		};
	};
	class ACE_ATragMX: ACE_ItemCore
	{
		descriptionShort="$STR_ace_atragmx_Description";
		icon="iconObject_circle";
		mapSize=0.034000002;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=2;
		};
	};
	class ace_compat_rhs_afrf3_rhs_weap_2b14: rhs_weap_2b14
	{
		magazineReloadTime=0.5;
	};
	class ace_compat_rhs_afrf3_rhs_weap_nsvt_effects: rhs_weap_nsvt_effects
	{
		magazineReloadTime=0.5;
	};
	class ace_compat_rhs_afrf3_rhs_weap_KORD: rhs_weap_kord
	{
		magazineReloadTime=0.5;
	};
	class ace_compat_rhs_afrf3_RHS_weap_AGS30: RHS_weap_Ags30
	{
		magazineReloadTime=0.5;
	};
	class ace_compat_rhs_afrf3_rhs_weap_SPG9: rhs_weap_SPG9
	{
		magazineReloadTime=0.5;
	};
	class ace_compat_rhs_afrf3_rhs_weap_9K133_launcher: rhs_weap_9K133_launcher
	{
		magazineReloadTime=0.5;
	};
	class ace_compat_rhs_afrf3_rhs_weap_9K115_2_launcher: rhs_weap_9K115_2_launcher
	{
		magazineReloadTime=0.5;
	};
	class ace_compat_rhs_afrf3_2b14_carry: Launcher_Base_F
	{
		class ACE_CSW
		{
			type="weapon";
			deployTime=20;
			pickupTime=25;
			class assembleTo
			{
				ace_csw_mortarBaseplate="rhs_2b14_82mm_msv";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=670;
		};
		modes[]={};
	};
	class ace_compat_rhs_afrf3_nsv_carry: Launcher_Base_F
	{
		class ACE_CSW
		{
			type="weapon";
			deployTime=4;
			pickupTime=4;
			class assembleTo
			{
				ace_csw_kordTripodLow="RHS_NSV_TriPod_MSV";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=550;
		};
		modes[]={};
	};
	class ace_compat_rhs_afrf3_kord_carry: Launcher_Base_F
	{
		class ACE_CSW
		{
			type="weapon";
			deployTime=4;
			pickupTime=4;
			class assembleTo
			{
				ace_csw_kordTripod="rhs_KORD_high_MSV";
				ace_csw_kordTripodLow="rhs_KORD_MSV";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=550;
		};
		modes[]={};
	};
	class ace_compat_rhs_afrf3_ags30_carry: Launcher_Base_F
	{
		class ACE_CSW
		{
			type="weapon";
			deployTime=4;
			pickupTime=4;
			class assembleTo
			{
				ace_csw_sag30Tripod="RHS_AGS30_TriPod_MSV";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=400;
		};
		modes[]={};
	};
	class ace_compat_rhs_afrf3_spg9_carry: Launcher_Base_F
	{
		class ACE_CSW
		{
			type="weapon";
			deployTime=4;
			pickupTime=4;
			class assembleTo
			{
				ace_csw_spg9Tripod="rhs_SPG9_INS";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=1000;
		};
		modes[]={};
	};
	class ace_compat_rhs_afrf3_spg9m_carry: ace_compat_rhs_afrf3_spg9_carry
	{
		class ACE_CSW: ACE_CSW
		{
			class assembleTo
			{
				ace_csw_spg9Tripod="rhs_SPG9M_MSV";
			};
		};
	};
	class ace_compat_rhs_afrf3_metis_carry: Launcher_Base_F
	{
		class ACE_CSW
		{
			type="mount";
			deployTime=4;
			pickupTime=4;
			deploy="rhs_Metis_9k115_2_msv";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=300;
		};
		modes[]={};
	};
	class ace_compat_rhs_afrf3_kornet_carry: Launcher_Base_F
	{
		class ACE_CSW
		{
			type="mount";
			deployTime=4;
			pickupTime=4;
			deploy="rhs_Kornet_9M133_2_msv";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=600;
		};
		modes[]={};
	};
	class ace_compat_rhs_usf3_rhs_mortar_81mm: rhs_mortar_81mm
	{
		magazineReloadTime=0.5;
	};
	class ace_compat_rhs_usf3_RHS_M2: RHS_M2
	{
		magazineReloadTime=0.5;
	};
	class ace_compat_rhs_usf3_RHS_MK19: RHS_MK19
	{
		magazineReloadTime=0.5;
	};
	class ace_compat_rhs_usf3_Rhs_weap_TOW_Launcher_static: rhs_weap_TOW_Launcher_static
	{
		magazineReloadTime=0.5;
	};
	class ace_compat_rhs_usf3_m252_carry: Launcher_Base_F
	{
		class ACE_CSW
		{
			type="weapon";
			deployTime=20;
			pickupTime=25;
			class assembleTo
			{
				ace_csw_mortarBaseplate="RHS_M252_WD";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=620;
		};
		modes[]={};
	};
	class ace_compat_rhs_usf3_m2_carry: Launcher_Base_F
	{
		class ACE_CSW
		{
			type="weapon";
			deployTime=4;
			pickupTime=4;
			class assembleTo
			{
				ace_csw_m3Tripod="RHS_M2StaticMG_WD";
				ace_csw_m3TripodLow="RHS_M2StaticMG_MiniTripod_WD";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=840;
		};
		modes[]={};
	};
	class ace_compat_rhs_usf3_mk19_carry: Launcher_Base_F
	{
		class ACE_CSW
		{
			type="weapon";
			deployTime=4;
			pickupTime=4;
			class assembleTo
			{
				ace_csw_m3TripodLow="RHS_MK19_TriPod_WD";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=770;
		};
		modes[]={};
	};
	class ace_compat_rhs_usf3_tow_carry: Launcher_Base_F
	{
		class ACE_CSW
		{
			type="weapon";
			deployTime=4;
			pickupTime=4;
			class assembleTo
			{
				ace_csw_m220Tripod="RHS_TOW_TriPod_WD";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=500;
		};
		modes[]={};
	};
	class ace_dragon_super: launch_Titan_F
	{
		magazines[]={};
		descriptionShort="$STR_ace_dragon_dragonDescription";
		class ACE_CSW
		{
			type="mount";
			deployTime=2;
			pickupTime=2;
			deploy="ace_dragon_staticBase";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=253;
		};
		modes[]={};
	};
	class ace_dragon_superStatic: missiles_titan_static
	{
		ace_overpressure_angle=90;
		ace_overpressure_range=30;
		ace_overpressure_damage=0.85000002;
		initSpeed=120;
		descriptionShort="$STR_ace_dragon_dragonDescription";
		magazines[]=
		{
			"ace_dragon_super"
		};
	};
	class ace_dragon_dummyStatic: Default
	{
		cursor="";
		cursorAim="";
		reloadTime=0;
		canLock=0;
		optics=0;
		enableAttack=0;
	};
	class ace_dragon_sight: Binocular
	{
		optics=1;
		weaponInfoType="RscWeaponEmpty";
		reloadaction="";
		showSwitchAction=1;
		useAsBinocular=1;
		descriptionShort="$STR_ace_dragon_sightDescription";
		ace_disposable=0;
		magazines[]={};
		type=4096;
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		opticsZoomMin=0.055;
		opticsZoomMax=0.055;
		class ACE_CSW
		{
			type="weapon";
			deployTime=2;
			pickupTime=1;
			class assembleTo
			{
				ace_dragon_super_noSight="ace_dragon_super_sight";
			};
		};
		class WeaponSlotsInfo
		{
			mass=68;
		};
	};
	class ACE_RangeCard: ACE_ItemCore
	{
		descriptionShort="$STR_ace_rangecard_Description";
		icon="iconObject_circle";
		mapSize=0.034000002;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=1;
		};
	};
	class ace_compat_rhs_gref3_rhs_weap_DSHKM: rhs_weap_DSHKM
	{
		magazineReloadTime=0.5;
	};
	class ace_compat_rhs_gref3_dshkm_carry: Launcher_Base_F
	{
		class ACE_CSW
		{
			type="weapon";
			deployTime=4;
			pickupTime=4;
			class assembleTo
			{
				ace_csw_kordTripod="rhsgref_ins_DSHKM";
				ace_csw_kordTripodLow="rhsgref_ins_DSHKM_Mini_TriPod";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconScale=0.1;
			};
			mass=740;
		};
		modes[]={};
	};
	class rhsgref_helmet_pasgt_3color_desert_rhino: rhsgref_helmet_pasgt_erdl_rhino
	{
		{
			mass=40;
		};
	};
	class rhsgref_helmet_pasgt_altis_lizard: rhsgref_helmet_pasgt_erdl
	{
		{
		};
	};
	class rhsgref_helmet_pasgt_olive: rhsgref_helmet_pasgt_erdl
	{
		{
		};
	};
	class rhsgref_hat_m43cap_heer: rhsgref_hat_m1941cap
	{
		{
			mass=5;
		};
	};
	class rhsgref_hat_m43cap_heer1_tilted: rhsgref_hat_m43cap_heer
	{
		{
		};
	};
	class rhsgref_helmet_m1940: rhsgref_helmet_M1_bare
	{
 
	};
	class rhsgref_helmet_m1940_alt1: rhsgref_helmet_m1940
	{
 
	};
	class rhsgref_helmet_m1940_h: rhsgref_helmet_m1940
	{
 
	};
	class rhsgref_helmet_m1940_camo01: rhsgref_helmet_m1940
	{
 
	};
	class rhsgref_helmet_m1940_camo01_alt1: rhsgref_helmet_m1940_camo01
	{
 
	};
	class rhsgref_helmet_m1940_winter: rhsgref_helmet_m1940
	{
 
	};
	class rhsgref_helmet_m1940_winter_alt1: rhsgref_helmet_m1940_winter
	{
 
	};
	class rhsgref_helmet_m1942: rhsgref_helmet_m1940
	{
 
	};
	class rhsgref_helmet_m1942_alt1: rhsgref_helmet_m1942
	{
 
	};
	class rhsgref_helmet_m1942_h: rhsgref_helmet_m1942
	{
 
	};
	class rhsgref_helmet_m1942_camo01: rhsgref_helmet_m1942
	{
 
	};
	class rhsgref_helmet_m1942_camo01_alt1: rhsgref_helmet_m1942_camo01
	{
 
	};
	class rhsgref_helmet_m1942_winter: rhsgref_helmet_m1942
	{
 
	};
	class rhsgref_helmet_m1942_winter_alt1: rhsgref_helmet_m1942_winter
	{
 
	};
	class rhsgref_helmet_m1942_heermarshcover: rhsgref_helmet_m1942
	{
		{
		};
	};
	class rhsgref_helmet_m1942_heersplintercover: rhsgref_helmet_m1942_heermarshcover
	{
		{
		};
	};
	class rhsgref_helmet_m1942_heergreycover: rhsgref_helmet_m1942_heermarshcover
	{
		{
		};
	};
	class rhsgref_helmet_m1942_heerwintercover: rhsgref_helmet_m1942_heermarshcover
	{
		{
		};
	};
	class rhsgref_6b23_khaki: rhs_6b23
	{
		dlc="RHS_GREF";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply80";
			mass=65;
		};
	};
	class rhsgref_6b23_khaki_rifleman: rhsgref_6b23_khaki
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=75;
		};
	};
	class rhsgref_6b23_khaki_sniper: rhsgref_6b23_khaki
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply80";
			mass=65;
		};
	};
	class rhsgref_6b23_khaki_officer: rhsgref_6b23_khaki
	{
		class ItemInfo: ItemInfo
		{
			containerClass="Supply60";
			mass=65;
		};
    };
};
