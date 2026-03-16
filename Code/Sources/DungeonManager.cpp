#include "DungeonManager.hpp"

DungeonManager::DungeonManager(const std::string &pathsDir){

}
DungeonManager::DungeonManager(const std::vector<Map> &Maps){

}
DungeonManager::DungeonManager(const DungeonManager &src){

}
DungeonManager::~DungeonManager(){

}

const std::vector<Section>      &DungeonManager::getSections() const{
	return (this->Sections);
}
const std::vector<Map>          &DungeonManager::getMaps() const{
	return (this->generatedMaps);
}
const std::vector<std::string>  &DungeonManager::getPaths() const{
	return (this->sectionFilesPaths);
}

void                            DungeonManager::newSaveChecker(){

}
void                            DungeonManager::EndOfMapGenerationChecker(){

}
void                            DungeonManager::newMapsChecker(){

}

void                            DungeonManager::generateProceduralMaps(){

}
void                            DungeonManager::generateDefaultMaps(){

}

void                            DungeonManager::generateMap(t_rules &rules){

}

const Map                       &DungeonManager::getMapByName(const std::string &name) const{

}
const Map                       &DungeonManager::getMapById(const size_t id) const{

}
const Map                       &DungeonManager::getMapByPath(const std::string &path) const{

}