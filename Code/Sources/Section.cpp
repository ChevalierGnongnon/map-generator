#include "Header.hpp"

Section::Section(const std::string &pathToFile){

}

Section::Section(const Section &src){

}
Section::~Section(){

}

const std::string				&Section::getPathToFile() const{
	return (this->pathToFile);
}
const std::vector<t_connector>	&Section::getConnectors() const{
	return (this->connectors);
}
const t_section_type					&Section::getType() const{
	return (this->type);
}
size_t							Section::getWidth() const{
	return (this->width);
}
size_t							Section::getHeight() const{
	return (this->height);
}