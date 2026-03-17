#include "Header.hpp"

Section::Section(const std::string &pathToFile) : pathToFile(pathToFile){

}

Section::Section(const Section &src) : pathToFile(src.pathToFile){

}
Section::~Section(){

}

const std::string				&Section::getPathToFile() const{
	return (this->pathToFile);
}

const std::vector<std::string>	&Section::getContent() const{
	return (this->content);
}

const std::vector<t_connector>	&Section::getConnectors() const{
	return (this->connectors);
}
const t_section_type			&Section::getType() const{
	return (this->type);
}
size_t							Section::getWidth() const{
	return (this->width);
}
size_t							Section::getHeight() const{
	return (this->height);
}

void							Section::LoadFile(){
	
}
void							Section::LoadSection(){

}
void							Section::ParseConnectors(){

}

void							Section::checker(){

}