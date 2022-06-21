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
			"ace_compat_rhs_usf_3"
			
		};
 	};
};
class CfgMagazines
{
    class CA_Magazine

	class rhs_mag_20Rnd_SCAR_762x51_SD: CA_Magazine
	{
		author="$STR_RHSUSF_AUTHOR_FULL";
		scope=2;
		displayName="20rnd SCAR SD";
		displayNameShort="SD";
		picture="\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhs_mag_20Rnd_SCAR_762x51_M80_ca.paa";
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
		dlc="RHS_SAF";
		author="$STR_RHSSAF_AUTHOR_FULL";
		displayName="20rnd SCAR SD (black)";
		picture="\rhssaf\addons\rhssaf_inventoryicons\data\magazines\rhs_mag_20Rnd_SCAR_762x51_M80_bk_ca.paa";
		model="rhssaf\addons\rhssaf_m_weapon_scar\magazine\rhs_20rnd_scarh_mag.p3d";
		modelSpecial="rhssaf\addons\rhssaf_m_weapon_scar\mag_proxies\rhs_mag_762x51_scarh_20rnd";
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
        }
    }
}