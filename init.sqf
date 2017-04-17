
// cash marker radius for BLUEFOR
TB_rules_SAD_estimatedCacheOffsetRadius = 85;
publicVariable "TB_rules_SAD_estimatedCacheOffsetRadius";

// flags
ICE_factionFlag_bluFor = "\ice\ice_main\Images\flags\usa.paa";
ICE_factionFlag_opFor = "\ice\ice_main\Images\flags\southSahrani.paa";
publicVariable "ICE_factionFlag_bluFor";
publicVariable "ICE_factionFlag_opFor";

#include "\ice\tb_main\sys\gameModes\sad_init.sqf"
[] execVM "functions\initFastRope.sqf";
[] execVM "functions\uavThermalDisable.sqf";

if(!isServer || local player)then
{
	waitUntil{player==player};
	waitUntil{alive player};
	waitUntil{local player};
	waitUntil { !isNull(findDisplay 46); };
	[] call compile preprocessfile "functions\client.sqf";
};



