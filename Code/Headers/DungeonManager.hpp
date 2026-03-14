#pragma once
# include <string>
# include <vector>
# include <fstream>
# include "Section.hpp"
# include "Map.hpp"

class DungeonManager{
    private :
        std::vector<Section>            Sections;
        std::vector<Map>                generatedMaps;
        std::vector<Map>                candidateMaps;
        std::vector<std::string>        sectionFilesPaths;
        DungeonManager();
    public :
        DungeonManager(const std::string &pathsDir);
        DungeonManager(const std::vector<Map> &Maps);
        DungeonManager(const DungeonManager &src);
        ~DungeonManager();

        const std::vector<Section>      &getSections() const;
        const std::vector<Map>          &getMaps() const;
        const std::vector<std::string>  &getPaths() const;

        void                            newSaveChecker(); // start of the game, checks if sections are available
        void                            EndOfMapGenerationChecker(); // checks if generation on first start of the worked correctly: if not, generate default 
        void                            newMapsChecker(); // in game button , maps has to be checked

        void                            generateProceduralMaps();
        void                            generateDefaultMaps();

        const Map                       &getMapByName(const std::string &name) const;
        const Map                       &getMapById(const size_t id) const;
        const Map                       &getMapByPath(const std::string &path) const;
};