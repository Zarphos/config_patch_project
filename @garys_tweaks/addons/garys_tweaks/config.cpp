class CfgPatches
{
	class Garys_tweaks
	 	{
 		units[] = {};
 		weapons[] = {};
 		requiredVersion = 0.1;
 		requiredAddons[] = 
		{	"ace_ballistics",
			"ace_weather",
			"rhsusf_main",
			"rhs_main",
			"rhsgref_main",
			"rhssaf_main",
			"rhsusf_main",
			"UK3CB_BAF_Weapons",
			"UK3CB_BAF_Equipment",
			"UK3CB_BAF_Weapons_RHS_ammo_compatibility_",
			"hlc_core",
			"hlc_rhs_compat_CORE",
			"hlc_ace3_Compat_CORE",
			"ace_compat_rhs_afrf3",
			"ace_compat_rhs_gref3",
			"ace_compat_rhs_saf3",
			"ace_compat_rhs_usf3"
			
		};

 	};
};
class CfgAmmo
{
		class B_556x45_Ball;

		class rhs_ammo_556x45_M855A1_Ball: B_556x45_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge="RHS_Cartridge_556x45_m855";
		hit=9;
		typicalSpeed=900;
		airFriction=-0.000772;
		caliber=0.64999998;
		deflecting=21;
		visibleFire=3;
		audibleFire=7;
		ACE_caliber=5.6900001;
		ACE_bulletLength=26.211999;
		ACE_bulletMass=4.0176001;
		ACE_ammoTempMuzzleVelocityShifts[]={-27.200001,-26.440001,-23.76,-21,-17.540001,-13.1,-7.9499998,-1.62,6.2399998,15.48,27.75};
		ACE_ballisticCoefficients[]={0.151499999};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={759,802,835,885,885,910,878,917,946,951,960,988};
		ACE_barrelLengths[]={210.82001,238.75999,269.23999,299.72,330.20001,360.67999,391.16,419.10001,449.57999,480.06,508,609.59998};
	};
	class rhs_ammo_556x45_M855A1_Ball_Red: rhs_ammo_556x45_M855A1_Ball
	{
		nvgOnly=0;
		tracerStartTime=0.072999999;
		tracerEndTime=1;
	};
	class rhs_ammo_556x45_M855A1_Ball_Green: rhs_ammo_556x45_M855A1_Ball_Red
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class rhs_ammo_556x45_M855A1_Ball_Yellow: rhs_ammo_556x45_M855A1_Ball_Red
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class rhs_ammo_556x45_M855A1_Ball_Orange: rhs_ammo_556x45_M855A1_Ball_Red
	{
		model="\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
	};
	class rhs_ammo_556x45_M855_Ball: B_556x45_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge="RHS_Cartridge_556x45_m855";
		hit=8;
		typicalSpeed=948.84241;
		airFriction=-0.00076000002;
		caliber=0.53388101;
		deflecting=21;
		visibleFire=3;
		audibleFire=7;
		ACE_caliber=5.6900001;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=4.0176001;
		ACE_ammoTempMuzzleVelocityShifts[]={-27.200001,-26.440001,-23.76,-21,-17.540001,-13.1,-7.9499998,-1.62,6.2399998,15.48,27.75};
		ACE_ballisticCoefficients[]={0.15099999};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={723,764,796,825,843,866,878,892,906,915,922,949};
		ACE_barrelLengths[]={210.82001,238.75999,269.23999,299.72,330.20001,360.67999,391.16,419.10001,449.57999,480.06,508,609.59998};
	};
	class rhs_ammo_556x45_M855_Ball_Red: rhs_ammo_556x45_M855_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		cartridge="RHS_Cartridge_556x45_m855";
		nvgOnly=0;
		tracerStartTime=0.072999999;
		tracerEndTime=1;
	};
	class rhs_ammo_556x45_M855_Ball_Green: rhs_ammo_556x45_M855_Ball_Red
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class rhs_ammo_556x45_M855_Ball_Yellow: rhs_ammo_556x45_M855_Ball_Red
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class rhs_ammo_556x45_M855_Ball_Orange: rhs_ammo_556x45_M855_Ball_Red
	{
		model="\rhsusf\addons\rhsusf_weapons\tracer\tracer_orange";
	};
	class rhs_ammo_556x45_Mk318_Ball: B_556x45_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit=9.5500002;
		typicalSpeed=950;
		airFriction=-0.00076000002;
		caliber=0.63999999;
		deflecting=17;
		visibleFire=3;
		audibleFire=5.5;
		tracerStartTime=0.072999999;
		tracerEndTime=1;
		ACE_caliber=5.6900001;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=4.0176001;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.30700001};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={780,892,938,974,991};
		ACE_barrelLengths[]={254,355.6,393.70001,508,609.59998};
	};
	class rhs_ammo_556x45_Mk262_Ball: B_556x45_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		hit=10.3;
		typicalSpeed=838.20001;
		airFriction=-0.00066000002;
		caliber=0.67699999;
		deflecting=15;
		visibleFire=2.5;
		audibleFire=5;
		tracerStartTime=0.072999999;
		tracerEndTime=1.15;
		ACE_caliber=5.6900001;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=4.9896002;
		ACE_muzzleVelocityVariationSD=0.40000001;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.362};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={624,816,832,838,863};
		ACE_barrelLengths[]={190.5,368.29999,457.20001,508,609.59998};
	};
	class rhs_ammo_556x45_M193_Ball: B_556x45_Ball
	{
		caliber=0.44;
		hit=9.3000002;
		typicalSpeed=974;
		airFriction=-0.00076999998;
		deflecting=28;
		visibleFire=3;
		audibleFire=7;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_caliber=5.6900001;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=3.56
		ACE_ammoTempMuzzleVelocityShifts[]={-27.200001,-26.440001,-23.76,-21,-17.540001,-13.1,-7.9499998,-1.62,6.2399998,15.48,27.75};
		ACE_ballisticCoefficients[]={0.243};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={778,822,857,888,908,932,945,960,975,985,993,1012};
		ACE_barrelLengths[]={210.82001,238.75999,269.23999,299.72,330.20001,360.67999,391.16,419.10001,449.57999,480.06,508,609.59998};
	};
	class rhs_ammo_556x45_M196_Ball_Red: rhs_ammo_556x45_M193_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=0;
		tracerStartTime=0.072999999;
		tracerEndTime=1;
	};
	class rhs_ammo_556x45_M995_AP: B_556x45_Ball
	{
		caliber=0.86862099;
		hit=8.6000004;
		typicalSpeed=1024;
		airFriction=-0.00076999998;
		deflecting=21;
		visibleFire=3;
		audibleFire=7;
		tracerStartTime=0.072999999;
		tracerEndTime=1;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};
class CfgWeapons
{
	class ItemCore;
	class muzzle_snds_H: ItemCore
	{
		class ItemInfo;
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class UK3CB_BAF_AT4_AT_Launcher: Launcher_Base_F
	{
		modelOptics="\A3\Weapons_F\empty";
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=0;
				modelOptics=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				distanceZoomMin=50;
				distanceZoomMax=400;
				discreteDistance[]={50,100,150,200,250,300,350,400};
				discreteDistanceCameraPoint[]=
				{
					"eye_1",
					"eye_2",
					"eye_3",
					"eye_4",
					"eye_5",
					"eye_6",
					"eye_7",
					"eye_8"
				};
				discreteDistanceInitIndex=0;
				opticsFlare=0;
				opticsDisablePeripherialVision=0.67000002;
				memorypointcamera="eye";
				cameraDir="look";
				visionMode[]={};
				opticsPPEffects[]=
				{
					""
				};
			};
		};
		value=20;
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=0.89999998;
		dexterity=1.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=148;
		};
		ace_overpressure_priority=1;
		ace_overpressure_angle=30;
		ace_overpressure_range=10;
		ace_overpressure_damage=0.60000002;
		baseWeapon="UK3CB_BAF_AT4_AT_Launcher";
	};
	class UK3CB_BAF_AT4_AP_Launcher: UK3CB_BAF_AT4_AT_Launcher
	{

		magazines[]=
		{
			"UK3CB_BAF_AT4_AP_Mag"
		};
		baseWeapon="UK3CB_BAF_AT4_AP_Launcher";
	};
	class UK3CB_BAF_AT4_CS_AT_Launcher: UK3CB_BAF_AT4_AT_Launcher
	{

		magazines[]=
		{
			"UK3CB_BAF_AT4_CS_AT_Mag"
		};
			dexterity=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=180;
		};
		UK3CB_used_launcher="UK3CB_BAF_AT4_CS_Launcher_Used";
		ace_overpressure_angle=30;
		ace_overpressure_range=1;
		ace_overpressure_damage=0.2;
		baseWeapon="UK3CB_BAF_AT4_CS_AT_Launcher";
	};
	class UK3CB_BAF_AT4_CS_AP_Launcher: UK3CB_BAF_AT4_CS_AT_Launcher
	{

		magazines[]=
		{
			"UK3CB_BAF_AT4_CS_AP_Mag"
		};
		baseWeapon="UK3CB_BAF_AT4_CS_AP_Launcher";
	};
	class UK3CB_BAF_AT4_Launcher_Used: UK3CB_BAF_AT4_AT_Launcher
	{

		magazines[]=
		{
			"UK3CB_BAF_AT4_Mag_Used"
		};
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=22;
		};
	};
	class UK3CB_BAF_AT4_CS_Launcher_Used: UK3CB_BAF_AT4_Launcher_Used
	{
		scope=1;
		scopeCurator=0;
		scopeArsenal=0;
		displayname="ILAW Launcher (used)";
		descriptionShort="Used ILAW Launcher<br/>by www.3commandobrigade.com";
	};
	class launch_Titan_base: Launcher_Base_F
	{
		class Single;
		class TopDown;
		class OpticsModes
		{
			class StepScope;
		};
	};
	class launch_Titan_short_base: launch_Titan_base
	{
	};
	class launch_B_Titan_short_F: launch_Titan_short_base
	{
	};
	class UK3CB_BAF_Javelin_Launcher: launch_B_Titan_short_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=117;
		};
		class OpticsModes: OpticsModes
		{
			class StepScope: StepScope
			{
				opticsZoomMin=0.0277;
				opticsZoomMax=0.69999999;
				opticsZoomInit=0.0625;
				cameraDir="OP_look";
				visionMode[]=
				{
					"Normal",
					"TI"
				};
				thermalMode[]={2,3};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		ace_javelin_enabled=1;
		ace_overpressure_priority=1;
		ace_overpressure_angle=30;
		ace_overpressure_range=4;
		ace_overpressure_damage=0.5;
		baseWeapon="UK3CB_BAF_Javelin_Launcher";
	};
	class UK3CB_BAF_Javelin_Slung_Tube: Launcher_Base_F
	{
		scope=2;
		modes[]=
		{
			"this"
		};
		magazines[]={};
		showSwitchAction=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=350;
		};
		baseWeapon="UK3CB_BAF_Javelin_Slung_Tube";
	};
	class UK3CB_BAF_Javelin_Slung_Tube_Used: UK3CB_BAF_Javelin_Slung_Tube
	{
		scope=1;
		author="www.3commandobrigade.com";
		displayName="Javelin Tube (used)";
		model="\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Launchers\UK3CB_Javelin_Used_Tube.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=53;
		};
	};
	class Binocular;
	class UK3CB_BAF_Javelin_CLU: Binocular
	{
		scope=2;
		author="www.3commandobrigade.com";
		DLC="UK3CB_BAF_Weapons";
		displayName="Javelin CLU";
		descriptionShort="Mid-range fire-and-forget anti-tank missile system<br/>by www.3commandobrigade.com";
		class Library
		{
			libTextDesc="FGM-148 Javelin is a portable mid-range fire-and-forget anti-tank missile system.";
		};
		model="\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Launchers\UK3CB_Javelin_CLU.p3d";
		picture="\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Launchers\data\clu_javelin_ca.paa";
		magazines[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\UK3CB_BAF_Weapons\addons\UK3CB_BAF_Weapons_Launchers\Anims\Javelin.rtm"
		};
		cameraDir="OP_look";
		cursor="laserDesignator";
		cursorAim="EmptyCursor";
		cursorAimOn="EmptyCursor";
		showSwitchAction=0;
		forceOptics=0;
		modelOptics="\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
		weaponInfoType="RscOptics_titan";
		class OpticsModes
		{
			class StepScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.0277;
				opticsZoomMax=0.69999999;
				opticsZoomInit=0.0625;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="OP_look";
				visionMode[]=
				{
					"Normal",
					"TI"
				};
				thermalMode[]={2,3};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		class WeaponSlotsInfo
		{
			mass=141;
		};
	};
	class launch_NLAW_F: Launcher_Base_F
	{
		class OpticsModes
		{
			class optic;
		};
		class WeaponSlotsInfo;
	};
	class UK3CB_BAF_NLAW_Launcher: launch_NLAW_F
	{
		scope=2;
		scopeArsenal=2;
		author="www.3commandobrigade.com";
		DLC="UK3CB_BAF_Weapons";
		displayName="NLAW Launcher";
		descriptionShort="Short-range fire-and-forget anti-tank missile system<br/>by www.3commandobrigade.com";
		class Library
		{
			libTextDesc="The NLAW is a short-range fire-and-forget anti-tank missile system.";
		};
		weaponInfoType="UK3CB_RscWeaponZeroing_SingleShot_NLAW";
		uk3cb_used_launcher="UK3CB_BAF_NLAW_Launcher_Used";
		reloadAction="";
		recoil="uk3cb_nlaw_recoil";
		magazineReloadTime=0;
		magazines[]=
		{
			"UK3CB_BAF_NLAW_Mag"
		};
		maxZeroing=800;
		class OpticsModes: OpticsModes
		{
			class optic: optic
			{
				distanceZoomMin=300;
				distanceZoomMax=300;
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
			};
		};
		inertia=1.2;
		dexertity=1.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=280;
		};
		ace_UsedTube="";
		baseWeapon="UK3CB_BAF_NLAW_Launcher";
	};
	class UK3CB_BAF_NLAW_Launcher_Used: UK3CB_BAF_NLAW_Launcher
	{
		scope=1;
		displayname="NLAW Launcher (used)";
		descriptionShort="Used NLAW Launcher<br/>by www.3commandobrigade.com";
		magazines[]=
		{
			"UK3CB_BAF_NLAW_Mag_Used"
		};
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=42;
		};
		ace_nlaw_enabled=0;
	};
	class Vest_NoCamo_Base: ItemCore
	{
		class ItemInfo;
	};
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class InventoryItem_Base_F
	{
		scope=0;
		type=0;
	};
	class VestItem
	{
		class InventoryItem_Base_F;
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
		class ItemInfo: ItemInfo
		{
			containerClass="Supply140";
			mass=100;
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
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=120;
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
	};
	class V_TacVest_oli: V_TacVest_khk
	{
		_generalMacro="V_TacVest_oli";
	};
	class V_TacVest_blk: V_TacVest_khk
	{
		_generalMacro="V_TacVest_blk";
	};
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
		class ItemInfo: ItemInfo
		{
			containerClass="Supply0";
			mass=80;
			vestType="Rebreather";
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

	};
	class V_RebreatherIA: V_RebreatherB
	{

	};
	class V_PlateCarrier_Kerry: V_PlateCarrier1_rgr
	{
		_generalMacro="V_PlateCarrier_Kerry";
	};
	class V_PlateCarrierL_CTRG: V_PlateCarrier1_rgr
	{
		_generalMacro="V_PlateCarrierL_CTRG";
	};
	class V_PlateCarrierH_CTRG: V_PlateCarrier2_rgr
	{
		_generalMacro="V_PlateCarrierH_CTRG";
	};
	class V_I_G_resistanceLeader_F: V_TacVest_camo
	{
		_generalMacro="V_I_G_resistanceLeader_F";
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
	};
	class HelmetBase: ItemCore
	{
		weaponPoolAvailable=1;
		scope=0;
		class ItemInfo: HeadgearItem
		{
			mass=0;
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
	class H_HelmetB: ItemCore
	{
		_generalMacro="H_HelmetB";
		weaponPoolAvailable=1;
		class ItemInfo: HeadgearItem
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
	class H_HelmetB_plain_mcamo: H_HelmetB
	{
		_generalMacro="H_HelmetB_plain_mcamo";
		{
		};
	};
	class H_HelmetB_plain_blk: H_HelmetB_plain_mcamo
	{
		_generalMacro="H_HelmetB_plain_blk";
	};
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
	};
	class H_HelmetSpecB_paint2: H_HelmetSpecB
	{
		_generalMacro="H_HelmetSpecB_paint2";
	};
	class H_HelmetSpecB_blk: H_HelmetSpecB
	{
		_generalMacro="H_HelmetSpecB_blk";
	};
	class H_HelmetSpecB_snakeskin: H_HelmetSpecB
	{
		_generalMacro="H_HelmetSpecB_snakeskin";
	};
	class H_HelmetSpecB_sand: H_HelmetSpecB
	{
		_generalMacro="H_HelmetSpecB_sand";
	};
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
	};
	class H_HelmetB_snakeskin: H_HelmetB
	{
		_generalMacro="H_HelmetB_snakeskin";
	};
	class H_HelmetB_desert: H_HelmetB
	{
		_generalMacro="H_HelmetB_desert";
	};
	class H_HelmetB_black: H_HelmetB
	{
		_generalMacro="H_HelmetB_black";
	};
	class H_HelmetB_sand: H_HelmetB
	{
		_generalMacro="H_HelmetB_sand";
	};
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
	
	class H_HelmetB_light_grass: H_HelmetB_light
	{
		_generalMacro="H_HelmetB_light_grass";
	};
	class H_HelmetB_light_snakeskin: H_HelmetB_light
	{
		_generalMacro="H_HelmetB_light_snakeskin";
	};
	class H_HelmetB_light_desert: H_HelmetB_light
	{
		_generalMacro="H_HelmetB_light_desert";
	};
	class H_HelmetB_light_black: H_HelmetB_light
	{
		_generalMacro="H_HelmetB_light_black";
	};
	class H_HelmetB_light_sand: H_HelmetB_light
	{
		_generalMacro="H_HelmetB_light_sand";
	};
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
	};
	class pasgt_dinog: rhssaf_helmet_m97_woodland_black_ess_bare
	{
	};
	class m12_dino: rhssaf_vest_md12_digital
	{
	};
	class rhsusf_opscore_cover: rhsusf_opscore_01
	{
		class ItemInfo: ItemInfo
		{
			mass=30;
			armor=6;
				"contour",
				"cover",
				"ms2000"
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
	};
	class pasgt_bgd: rhssaf_helmet_m97_nostrap_blue
	{
	};
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
	};
	class m12_bgd: rhssaf_vest_md12_digital
	{
	};
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
	};
	class pasgt_cpa: rhsgref_helmet_pasgt_woodland_rhino
	{
	};
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
	};
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
	};
	class pasgt_dm2: rhsgref_helmet_pasgt_woodland_rhino
	{
	};
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
	};
	class rhs_6b23_6sh116: rhs_6b23_digi
	{
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
	class pasgt_ce: rhssaf_helmet_m97_nostrap_blue
	{
	};
	class pasgt_dg: rhssaf_helmet_m97_nostrap_blue
	{
	};
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
	};
	class pasgt_grg: rhssaf_helmet_m97_woodland_black_ess_bare
	{
	};
	class pasgt_gra: rhsgref_helmet_pasgt_woodland
	{
	};
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
	};
	class pasgt_idd: rhsgref_helmet_pasgt_woodland
	{
	};
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
	};
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
	};
	class pasgt_irn: rhsgref_helmet_pasgt_woodland
	{
	};
	class pasgt_ird: rhsgref_helmet_pasgt_woodland
	{
	};
	class pasgt_s4f: rhsgref_helmet_pasgt_woodland
	{
	};
	class pasgt_syr: rhsgref_helmet_pasgt_woodland
	{
	};
	class m99_syr: rhssaf_vest_md99_woodland_rifleman
	{
	};
	class m99_syr_rad: rhssaf_vest_md99_woodland_rifleman_radio
	{
	};
	class m98_syr: rhssaf_vest_md98_rifleman
	{
	};
	class m12_irn: rhssaf_vest_md12_digital
	{
	};
	class m12_trk: rhssaf_vest_md12_digital
	{
	};
	class pasgt_dc: rhsgref_helmet_pasgt_woodland
	{
	};
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
	};
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
	class opscorem98c: rhsusf_opscore_cover
	{
			"",
			"ws_norway\Data\occover_m98_co",
			""
		};
	class opscorem98sc: rhsusf_opscore_cover
	{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"ws_norway\Data\occover_m98_co",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	class m12_m98: rhssaf_vest_md12_digital
	{
	};
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
	class opscorerfc: rhsusf_opscore_cover
	{
			"",
			"ws_russia\Data\occover_atacs_co",
			""
		};
	class opscorerfcs: rhsusf_opscore_cover
	{
			"",
			"ws_russia\Data\occover_atacs_co",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
	class opscorerff: rhsusf_opscore_cover
	{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"ws_russia\Data\occover_atacs_co",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
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
	class v6b23spzbvog: rhs_6b23_6sh116_vog
	{
		};
	class v6b23spzbg: rhs_6b23_6sh116
	{
		};
	class v6b23spzbgvog: rhs_6b23_6sh116_vog
	{
		};
	class v6b23spzbf: rhs_6b23_6sh116
	{
	};
	class v6b23spzbfvog: rhs_6b23_6sh116_vog
	{
	};
	class v6b23tan: rhs_6b23_6sh116
	{
	};
	class v6b23tanvog: rhs_6b23_6sh116_vog
	{
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
	class mich_norotos_rgr: rhsusf_mich_bare_norotos_alt
	{
	};
	class mich_rhino_blk: rhsusf_mich_bare_alt
	{
	};
	class mich_norotos_blk: rhsusf_mich_bare_norotos_alt
	{
	};
	class mich_rhino_od: rhsusf_mich_bare_alt
	{
	};
	class mich_norotos_od: rhsusf_mich_bare_norotos_alt
	{
	};
	class mich_rhino_tan: rhsusf_mich_bare_alt
	{
	};
	class mich_norotos_tan: rhsusf_mich_bare_norotos_alt
	{
	};
	class mich_rhino_spray1: rhsusf_mich_bare_alt
	{
	};
	class mich_norotos_spray1: rhsusf_mich_bare_norotos_alt
	{
	};
	class mich_rhino_spray2: rhsusf_mich_bare_alt
	{
	};
	class mich_norotos_spray2: rhsusf_mich_bare_norotos_alt
	{
	};
	class mich_rhino_spray3: rhsusf_mich_bare_alt
	{
	};
	class mich_norotos_spray3: rhsusf_mich_bare_norotos_alt
	{
	};
	class mich_rhino_spray4: rhsusf_mich_bare_alt
	{
	};
	class mich_norotos_spray4: rhsusf_mich_bare_norotos_alt
	{
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
	class opscorems: rhsusf_opscore_cover
	{
			"",
			"ws_uniforms2\Data\occover_mc_co",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
	class opscoremcs: rhsusf_opscore_cover
	{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"ws_uniforms2\Data\occover_mc_co",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
	};
	class opscoret: rhsusf_opscore_cover
	{
	};
	class opscoretc: rhsusf_opscore_cover
	{
	};
	class lbh_od: V_HarnessO_brn
	{
		class ItemInfo: VestItem
		{
			
			containerClass="Supply90";
			mass=10;
			armor="2*3";
             passthrough=0.75;		};
	};
	class m12_khk: rhssaf_vest_md12_digital
	{
	};
	class m12_grn: rhssaf_vest_md12_digital
	{
	};
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
	};
		_generalMacro="H_HelmetB_TI_arid_F";
	class H_HelmetO_ViperSP_hex_F: H_HelmetB
	{
		_generalMacro="H_HelmetO_ViperSP_hex_F";
		DLC="Expansion";
		descriptionShort="$STR_A3_SP_AL_V";
		class ItemInfo: ItemInfo
		{
			mass=80;
			class HitpointsProtectionInfo
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
	};
	class V_DeckCrew_blue_F: V_DeckCrew_base_F
	{
	};
	class V_DeckCrew_green_F: V_DeckCrew_base_F
	{
	};
	class V_DeckCrew_red_F: V_DeckCrew_base_F
	{
	};
	class V_DeckCrew_white_F: V_DeckCrew_base_F
	{
	};
	class V_DeckCrew_brown_F: V_DeckCrew_base_F
	{
	};
	class V_DeckCrew_violet_F: V_DeckCrew_base_F
	{
	};
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
	};
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
	};
		_generalMacro="H_Construction_basic_yellow_F";
	};
	class H_Construction_basic_white_F: H_Construction_basic_base_F
	{
		_generalMacro="H_Construction_basic_white_F";
	};
	class H_Construction_basic_orange_F: H_Construction_basic_base_F
	{
		_generalMacro="H_Construction_basic_orange_F";
	};
	class H_Construction_basic_red_F: H_Construction_basic_base_F
	{
		_generalMacro="H_Construction_basic_red_F";
	};
	class H_Construction_basic_vrana_F: H_Construction_basic_base_F
	{
		_generalMacro="H_Construction_basic_vrana_F";
	};
	class H_Construction_basic_black_F: H_Construction_basic_base_F
	{
		_generalMacro="H_Construction_basic_black_F";
	};
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
	};
	class H_Construction_earprot_white_F: H_Construction_earprot_base_F
	{
		_generalMacro="H_Construction_earprot_white_F";
	};
	class H_Construction_earprot_orange_F: H_Construction_earprot_base_F
	{
		_generalMacro="H_Construction_earprot_orange_F";
	};
	class H_Construction_earprot_red_F: H_Construction_earprot_base_F
	{
		_generalMacro="H_Construction_earprot_red_F";
	};
	class H_Construction_earprot_vrana_F: H_Construction_earprot_base_F
	{
		_generalMacro="H_Construction_earprot_vrana_F";
	};
	class H_Construction_earprot_black_F: H_Construction_earprot_base_F
	{
		_generalMacro="H_Construction_earprot_black_F";
	};
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
	};
	class H_Construction_headset_white_F: H_Construction_headset_base_F
	{
		_generalMacro="H_Construction_headset_white_F";
	};
	class H_Construction_headset_orange_F: H_Construction_headset_base_F
	{
		_generalMacro="H_Construction_headset_orange_F";
	};
	class H_Construction_headset_red_F: H_Construction_headset_base_F
	{
		_generalMacro="H_Construction_headset_red_F";
	};
	class H_Construction_headset_vrana_F: H_Construction_headset_base_F
	{
		_generalMacro="H_Construction_headset_vrana_F";
	};
	class H_Construction_headset_black_F: H_Construction_headset_base_F
	{
		_generalMacro="H_Construction_headset_black_F";
	};
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
	};
	class H_EarProtectors_white_F: H_EarProtectors_base_F
	{
		_generalMacro="H_EarProtectors_white_F";
	};
	class H_EarProtectors_orange_F: H_EarProtectors_base_F
	{
		_generalMacro="H_EarProtectors_orange_F";
	};
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
		descriptionShort="Armor Level III";
		class ItemInfo: ItemInfo
		{

			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=22;
					PassThrough=0.35;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=22;
					PassThrough=0.35;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.35;
				};
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
	};
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
	class rhssaf_helmet_m97_veil_md2camo: rhssaf_helmet_m97_veil_Base
	{
		dlc="RHS_SAF";
		};
	class rhssaf_helmet_m97_veil_oakleaf: rhssaf_helmet_m97_veil_Base
	{
		dlc="RHS_SAF";
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
	class rhssaf_uniform_m10_digital_summer: Uniform_Base
	{
		dlc="RHS_SAF";
		{
			uniformClass="rhssaf_soldier_army_para_digital_base";
			containerClass="Supply60";
			mass=40;
		};
	};
	class rhssaf_uniform_m10_digital_desert: Uniform_Base
	{
		dlc="RHS_SAF";
		{
			uniformClass="rhssaf_soldier_un_desert_base";
			containerClass="Supply60";
			mass=40;
	};
	};
	class rhssaf_uniform_m10_digital_tan_boots: Uniform_Base
	{
		dlc="RHS_SAF";
		{
			uniformClass="rhssaf_soldier_un_digital_base";
			containerClass="Supply60";
			mass=40;
	};
	};
	class rhssaf_uniform_m93_oakleaf: Uniform_Base
	{
		dlc="RHS_SAF";
		{
			uniformClass="rhssaf_soldier_army_oakleaf_base";
			containerClass="Supply60";
			mass=40;
	};
	};
	class rhssaf_uniform_m93_oakleaf_summer: Uniform_Base
	{
			uniformClass="rhssaf_soldier_army_oakleaf_summer_base";
			containerClass="Supply60";
			mass=40;
	};
	class rhssaf_uniform_heli_pilot: Uniform_Base
	{
		dlc="RHS_SAF";
		
			uniformClass="rhssaf_airforce_pilot_transport_heli";
			containerClass="Supply60";
			mass=40;
		ACE_GForceCoef=0.80000001;
	};
	class rhssaf_uniform_mig29_pilot: Uniform_Base
	{
		dlc="RHS_SAF";
		
			uniformClass="rhssaf_airforce_pilot_mig29";
			containerClass="Supply60";
			mass=40;
		ACE_GForceCoef=0.80000001;
	};
	class rhssaf_uniform_gendarmes_acu: Uniform_Base
	{
		dlc="RHS_SAF";
		
		class ItemInfo: UniformItem
		{
			uniformClass="rhssaf_soldier_atf_base";
			containerClass="Supply60";
			mass=40;
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
	class rhsgref_ssh68_ttsko_mountain: rhsgref_ssh68;
	class rhsgref_ssh68_ttsko_forest: rhsgref_ssh68;

	class rhsgref_ssh68_ttsko_fall: rhsgref_ssh68;

	class rhsgref_ssh68_ttsko_summer: rhsgref_ssh68;

	class rhsgref_ssh68_ttsko_dark: rhsgref_ssh68;

	class rhsgref_ssh68_ttsko_digi: rhsgref_ssh68;

	class rhsgref_ssh68_emr: rhsgref_ssh68;

	class rhsgref_ssh68_un: rhsgref_ssh68;

	class rhsgref_ssh68_vsr: rhsgref_ssh68;

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
	class rhsgref_6b27m_ttsko_forest: rhsgref_6b27m;
	class rhsgref_6b27m_ttsko_urban: rhsgref_6b27m;
	class rhsgref_6b27m_ttsko_digi: rhsgref_6b27m;
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
	
		};
	class rhsgref_helmet_pasgt_3color_desert: rhsgref_helmet_pasgt_erdl;
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

class CfgMagazines
{
    class CA_Magazine;

	class rhs_mag_20Rnd_SCAR_762x51_SD: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="20rnd SCAR SD";
		displayNameShort="SD";
		count=20;
		ammo="ACE_762x51_Ball_Subsonic";
		mass=16.24;
		initSpeed=330;
		descriptionShort="Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SCAR-H";
		model="rhsusf\addons\rhsusf_weapons\magazines\rhs_20rnd_scar_mag.p3d";
		modelSpecial="rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_MK17_20rnd";
		modelSpecialIsProxy=1;
	};
		class rhs_mag_20Rnd_SCAR_762x51_SD_bk: rhs_mag_20Rnd_SCAR_762x51_SD
	{
		displayName="20rnd SCAR SD (black)";
	};
}
class CfgMagazineWells
{
    	class CBA_762x51_SCAR
	{
		RHS_Magazines[]=
		{
			"rhs_mag_20Rnd_SCAR_762x51_SD"
		};
		RHSSAF_Magazines[]=
		{
			"rhs_mag_20Rnd_SCAR_762x51_SD_bk"
		};
	};
	class CBA_762x51_SCAR_EGLM
	{
		RHS_Magazines[]=
		{
			"rhs_mag_20Rnd_SCAR_762x51_SD"
        };
    };
};

	