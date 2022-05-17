class CfgPatches
{
	class ZenConcussionGrenade
	{
		requiredVersion = 0.1;
		units[] =
		{
			"Zen_ConcussiveGrenade"
		};
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Characters_Tops"
		};
	};
};

class CfgMods
{
	class ZenConcussionGrenade
	{
		dir = "ZenConcussionGrenade";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ZenConcussionGrenade";
		credits = "";
		author = "Zenarchist";
		authorID = "0";
		version = "1.03";
		extra = 0;
		type = "mod";
		dependencies[] = { "Game","World","Mission" };
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = { "ZenConcussionGrenade/scripts/4_World" };
			};
		};
	};
};

class CfgAmmo
{
	class DefaultAmmo;
	class Zen_ConcussionGrenade_Ammo : DefaultAmmo
	{
		indirectHit = 1;
		indirectHitRange = 5;
		indirectHitRangeMultiplier = 4;
		explosive = 1;
		typicalSpeed = 3;
		initSpeed = 3;
		slowdownThreshold = 100;
		simulation = "shotShell";
		simulationStep = 0.050000001;
		soundSetExplosion[] =
		{
			"Flashgrenade_Explosion_SoundSet",
			"Flashgrenade_Explosion_Tail_SoundSet"
		};
		class DamageApplied
		{
			type = "FragGrenade";
			class Health
			{
				damage = 1;
			};
			class Blood
			{
				damage = 0;
			};
			class Shock
			{
				damage = 100;
			};
		};
		class NoiseExplosion
		{
			strength = 100;
			type = "shot";
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Grenade_Base;
	class Zen_ConcussionGrenade : Grenade_Base
	{
		scope = 2;
		displayName = "MK3 Grenade";
		descriptionShort = "The MK3 hand grenade is a non-lethal grenade that produces minimal shrapnel and is capable of knocking survivors unconscious.";
		model = "\dz\weapons\explosives\flashbang.p3d";
		rotationFlags = 17;
		weight = 350;
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"ZenConcussionGrenade\data\zen_concussion_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"dz\weapons\explosives\data\flashbang.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] =
					{

						{
							1,

							{
								"DZ\weapons\explosives\data\flashbang.rvmat"
							}
						},

						{
							0.69999999,

							{
								"DZ\weapons\explosives\data\flashbang.rvmat"
							}
						},

						{
							0.5,

							{
								"DZ\weapons\explosives\data\flashbang_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"DZ\weapons\explosives\data\flashbang_damage.rvmat"
							}
						},

						{
							0,

							{
								"DZ\weapons\explosives\data\flashbang_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class Grenade_unpin
				{
					soundSet = "Grenade_unpin_SoundSet";
					id = 201;
				};
				class turnOnRadio_Pin
				{
					soundSet = "Grenade_pin_SoundSet";
					id = 1006;
				};
			};
		};
	};
};