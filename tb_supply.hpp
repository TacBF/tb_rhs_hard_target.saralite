class TacBF
{
        class Supply
        {
                // Generates cargo IDs (More effecient broadcasting for these items + their ammo)
                staticWeapons[] = {"RHS_M2StaticMG_D", "RHS_M2StaticMG_MiniTripod_D", "RHS_M252_D", "RHS_TOW_TriPod_D", "rhs_Igla_AA_pod_msv", "rhsgref_ins_DSHKM", "rhsgref_ins_DSHKM_Mini_TriPod", "rhs_KORD_high_MSV", "rhs_KORD_MSV",  "rhs_2b14_82mm_msv", "rhsgref_ins_SPG9", "rhs_Metis_9k115_2_msv","RHS_ZU23_MSV"};
                class CargoCollections
                {
                    class statics_west_base 
				    {
                        transportClear = 1;
                        cargo[] = {
						{"RHS_M2StaticMG_D", -0, 8},
						{"RHS_M252_D", -0, 6},
						{"RHS_TOW_TriPod_D", -0, 3},
						{"TB_Box_West_Mines_F", 8, 0},
						{"TB_BLUBasicAmmunitionBox", 8, -0}
						};
                    };
                    class statics_west_fb 
				    {
                        transportClear = 1;
                        cargo[] = {
						{"RHS_M2StaticMG_D", -0, 4},
						{"RHS_TOW_TriPod_D", -0, 2},
						{"TB_Box_West_Mines_F", 8, 0},
						{"TB_BLUBasicAmmunitionBox", 8, -0}
						};
                    };
                    class statics_res_base 
					{
                        transportClear = 1;
                        cargo[] = {
						{"rhsgref_ins_DSHKM_Mini_TriPod", -0, 12},
						{"rhs_2b14_82mm_msv", -0, 8},
						{"rhsgref_ins_SPG9", -0, 8},
						{"RHS_ZU23_MSV", -0, 10},
						{"RHS_M2StaticMG_MiniTripod_D", -0, 12},
						{"rhsgref_ins_SPG9", -0, 6},
						{"TB_Box_East_Mines_F", 8, 0},
						{"ICE_emptySandbagsCrate_supply", 12,-0}
						};
                    };
                    class statics_res_te 
					{
                        transportClear = 1;
                        cargo[] = {
						{"RHS_ZU23_MSV", 1, 3},
						{"RHS_M2StaticMG_MiniTripod_D", -0, 6},
						{"rhsgref_ins_SPG9", 1, 3},
						{"rhsgref_ins_DSHKM",2,6},
						{"rhsgref_ins_DSHKM_Mini_TriPod",2,4},
						{"ICE_emptySandbagsCrate_supply", 8,-0},
						{"TB_Box_East_Mines_F", 8, 0},
						{"TB_A3RESBasicAmmunitionBox", 5, -0}};
                    };
			        class rds_westFO 
			        {
				        transportClear = 1;
				        cargo[] = {
						{"RHS_M2StaticMG_MiniTripod_D", 2, 4},
						{"RHS_M2StaticMG_D", 1, 2},
						{"RHS_M252_D", 1, 0},
						{"ICE_emptySandbagsCrate_supply", 4,-0}
						};
			        };
                };
				
		        class Containers
		       {
			        class ICE_ForwardOutpost_container_WestMG
			        {
				        crateCollection = "rds_westFO";
				        mass = 1750; 
			        };

			        class ICE_ForwardOutpost_container_EastMG
			        {
				        crateCollection = "rds_eastFO";
				        mass = 1750; 
			        };
		        };
 
        };
};