#pragma once
#include "DungeonManager.hpp"


class Map{
    private:
        const std::string                   path;
        const std::string                   name;
        size_t                              id;
        std::vector<std::string>            content;
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
        
    public:
        const std::string                   &getPath() const;
        const std::string                   &getName() const;
        const size_t                        &getId() const;
        const std::vector<std::string>      &getContent() const;
        const unsigned long                 &getWidth() const;
        const unsigned long                 &getHeight() const;
        const unsigned long                 &getWalkOn() const;
        const unsigned long                 &getUnaccessible() const;
        const unsigned long                 &getWalls() const;
        const unsigned long                 &getDoors() const;
        const unsigned long                 &getChests() const;
        const unsigned long                 &getEnnemies() const;
        const unsigned long                 &getBosses() const;
        const unsigned long                 &getPnjs() const;
        const unsigned long                 &getEvents() const;
};