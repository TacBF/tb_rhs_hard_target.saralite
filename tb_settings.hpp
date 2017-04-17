class ICE
{
    class vehicles
    {
    class armaments
        {
        startFullyRearmed = 1;
        };
    };
  class zones
  {
    #include "zoneList.hpp"
  };
  class firstAid
  {
    bleedoutTimeSteps[] = {200,100, 0}; // Controls the bleedout time steps
    bleedoutTimeReset = 300; // Controls the time that you should go incapped within to go down a step. 2 * this time takes you a step back up.
  };
  class mission
  {
    gameMode = "S&D";
    missionScale = "large";
    recommendedTotalPlayers = 40;
    attackingSide = "west";

    class briefings
        {
        // Provide file name containing side specific mission briefings here. File text can use structured text syntax. Use <br /> tag for line breaks.
        class west
              {
             original = "briefing_blue.hpp";
            //these are optional:
            //english = "briefing_blue_en.hpp";
            //italian= = "briefing_blue_it.hpp";
              };
        class east
             {
             original = "briefing_red.hpp";
            //these are optional:
            //english = "briefing_blue_en.hpp";
            //italian= = "briefing_blue_it.hpp";
              };
        };

    class factions // or sides
    {
      class faction
      {
        bluFor = "BLU_F";
        opFor = "OPF_G_F";
      };
			class teamName
			{
				bluFor = "U.S. Army";
				opFor = "Insurgency";
			};
			class teamFlag
			{
				bluFor = "\ice\ice_main\Images\flags\usa.paa"; // "flags" is a sub-folder in mission folder
				opFor = "\ice\ice_main\Images\flags\southSahrani.paa";
			};
    };
    class scoring
    {
      class tickets
      {
        // In S&D, do not specify any tickets. It is automatically calculated, with the defenders ticket count representing the total caches.
        bluFor = 35;
        opFor = 2;
        ticketsPerCache = 30; // Tickets given to BLUFOR when a cache is destroyed
      };
    };
  };
  class respawn
  {
    class FO
    {
      minSpacingDist = 600;
      maxFriendlySiteDist = 3200;
      minZoneDist = 50;
      minEnemyFBDist = 200;
      minEnemyBaseDist = 1000;
    };
    class SRP
    {
      maxFriendlySiteDist = 600;
    };
    class HO
    {
      minSpacingDist = 650;
	  maxFriendlySiteDist = 600;
    };
    class infantry
        {
            baseDuration = 60;
            class unevenTeamsPenaltyTime
            {
                ratioDuration = 60; // "pivot value" where low player count differences result in small time penalties,
                // but large differences result in exponential time penalties
                maxDuration = 240;
            };
        };
  };
  class gameModes
  {
    class objectives
    {
      class zones
      {
        class captureRates
        {
          // Eg: A higher value (eg: 2 to 3) is ideal for smaller missions.
          heldZoneMultiplier = 2.5; // Decimal value between 0 and N. (> 0, < 1 will reduce capture rate), (> 1 will increase capture rate). Eg: 0.25, 0.5, 0.75, 1.0, 1.25, 1.5

          // This value is a cumulative multiplier with 'captureRateMultiplier'. (So if captureRateMultiplier == 2 and neutralZoneCaptureRateMultiplier == 3, then overall rate is 6 times faster.)
          // Eg: A value of 2 is ideal for missions which have very few neutral zones at the start.
          // Eg: A high value (eg: 3 to 6) is ideal for missions which have many neutral zones at the start or for smaller missions.
          neutralZoneMultiplier = 4; // Decimal value between 0 and N. (> 0, < 1 will reduce capture rate), (> 1 will increase capture rate)

          negateNeutral = 1; // set to 1 to make both Multipliers totally independent, not a "cumulative multiplier".
        };
      };
    };
    class SAD
    {
      class cache
      {
        minSpacingDist = 600;
      };

	  BuildingPositionsData[] = {
		{"Land_Hotel", {1,0.6,-4.3}},
	    {"Land_Dum_olez_istan2_maly",{0,2,1.5}},	    
		{"Land_Dum_olez_istan2",{2.5,2.7,-0.2}},
		{"Land_Dum_olez_istan1", {3,-2.7,1.5}},
		{"Land_Dum_olez_istan1_open2", {0,0,0}},
	    {"Land_Hotel", {1,0.6,-0.6}},
		{"Land_Dum_istan3_hromada2", {6,2,2.2}},
		{"Land_Dum_istan3_pumpa", {4,-0.2,1.5}},
		{"Land_Bouda2_vnitrek", {2,1.6,-0.5}},
		{"Land_Hut_old02", {-4.5,-1,-3}},
		{"Land_Hotel", {1,0.6,2.8}},
		{"Land_Tovarna2", {-4.5,5.5,1.8}},
		{"Land_Army_hut_int", {2.5,-1.5,-1.5}},
		{"Land_Hangar_2", {0,-8.8,-2.5}},
		{"Land_Hut02", {-1,2,-0.3}}		
      };
    };
  };
  class gear
  {
    #include "tb_kitDefines.sqh"
	#include "tb_magazineExclusions.hpp"

    class NVGogglesForAll
    {
      west = 1;
      east = 1;
      resistance = 1;
      civilian = 0;
    };
    class roles
    {
      #define __unlimited -99
      kits[] =
      {
            #include "factions\BLU_F_roleRatio.hpp"
            #include "factions\OPF_G_F_roleRatio.hpp"
      };
    };
    class armaments
    {

		class BLU_F
		{
			defaultGear = "factions\BLU_F.sqh";
			#include "factions\_common_smallItems.sqh"
			#include "factions\BLU_F_gear.sqh"
			#include "factions\BLU_F_uniforms.sqh"
		};
		class OPF_G_F
		{
			defaultGear = "factions\OPF_G_F.sqh";
			#include "factions\_common_smallItems.sqh"
			#include "factions\OPF_G_F_gear.sqh"
			#include "factions\OPF_G_F_uniforms.sqh"
		};
    };
  };
};
