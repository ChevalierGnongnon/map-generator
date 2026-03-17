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
    unsigned long                       doors;
    unsigned long                       chests;
    unsigned long                       ennemies;
    unsigned long                       bosses;
    unsigned long                       pnjs;
    unsigned long                       events;
} t_rules;

typedef struct s_connector{
    size_t      x_pos;
    size_t      y_pos;
    t_direction dir;
} t_connector;

typedef enum e_connector_direction{
    top,
    left,
    right,
    bottom,
} t_direction;

typedef enum e_section_type{
	corner,
	corridor,
	safe_place,
	room,
	boss_room,
	event_room
} t_section_type;