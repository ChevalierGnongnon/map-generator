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
	std::ifstream	file(this->pathToFile, std::ios::in);
	std::string		line;
	std::string		indicator;
	size_t			lineNumber;
	size_t			i = 0;

	if (!file){
		//here some stuff to handle file not opening
		return ;
	}
	while (std::getline(file, line)){
		i = 0;
		if (line.empty()){
			lineNumber++;
			continue;
		}
		while (line[i] && line[i] != ':')
			i++;
		if (i == 0){
			if (line[0] == '0')
				LoadSection();
			else if (line[0] == '{')
				ParseConnectors();
			else{
				//here some stuff to handle bad maps
			}
		}
		indicator = line.substr(0, i);
		if (indicator == "type"){

		}
		else if (indicator == "connectors_number"){

		}

	}
}
void							Section::LoadSection(){

}
void							Section::ParseConnectors(){

}

void							Section::checker(){

}