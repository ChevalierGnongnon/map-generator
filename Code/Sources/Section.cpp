#include "Header.hpp"
#include "Section.hpp"

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
	std::string		tmp;
	std::string		indicator;
	size_t			lineNumber;
	size_t			i = 0;

	if (!file){
		this->status = E_SECTION_RIGHTSERROR;
		return ;
	}
	while (std::getline(file, line)){
		i = 0;
		if (line.empty()){
			lineNumber++;
			continue;
		}
		if (line == "--Section--"){
			LoadSection();
			return;
		}
		i = find(line, ':');
		if (i != -1) {
			indicator = line.substr(0, i);
			std::cout << "Indicator: " << indicator << std::endl;
			if (indicator == "type"){
				i++;
				tmp = line.substr(i, line.length());
				if (tmp == "corner")
					this->type = corridor;
				else if (tmp == "safe_place")
					this->type = safe_place;
				else if (tmp == "room")
					this->type = room;
				else if (tmp == "boss_room")
					this->type = boss_room;
				else if (tmp == "event_room")
					this->type = event_room;
				else{
					file.close();
					this->status = E_SECTION_INVALIDSECTION;
					return;
				}
			}
			else if (indicator == "connectors_number"){
				i++;
				for (size_t j = i; j < line.length() && (line[i] >= '0' && line[i] <= '9'); j++)
					this->nbConnectors = this->nbConnectors * (line[i] - '0');
			}
		}
	}

}
void							Section::LoadSection(){

}
void							Section::ParseConnectors(){

}

void							Section::checker(){

}