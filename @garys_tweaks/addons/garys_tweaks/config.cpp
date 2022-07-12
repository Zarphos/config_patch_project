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
}
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

	