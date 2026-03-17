#include "Header.hpp"

Map::Map(t_rules &rules, std::vector<Section> &sections){

}
Map::Map(const Map &map){
	
}
Map::~Map(){
	
}

const std::string                   &Map::getPath() const{
	return (this->path);
}
const std::string                   &Map::getName() const{
	return (this->name);
}
const size_t                        &Map::getId() const{
	return (this->id);
}
const std::vector<std::string>      &Map::getContent() const{
	return (this->content);
}
const t_rules                       &Map::getRules() const{
	return (this->rules);
}

void								Map::build(){
	
}
void								Map::writeResult(){
	
}