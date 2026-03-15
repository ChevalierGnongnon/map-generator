#pragma once
# include <string>
# include <vector>
# include <fstream>
# include "Section.hpp"
# include "Map.hpp"
# include "DungeonManager.hpp"
# include "Header.hpp"

typedef struct  s_rules{
    unsigned long                       width;
    unsigned long                       height;
    unsigned long                       walkOn;
    unsigned long                       unaccessible;
    unsigned long                       walls;
    unsigned long                       doors;
    unsigned long                       chests;
    unsigned long                       ennemies;
    unsigned long                       bosses;
    unsigned long                       pnjs;
    unsigned long                       events;
} t_rules;