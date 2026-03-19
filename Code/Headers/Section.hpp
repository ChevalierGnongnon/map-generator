#pragma once
#include "Header.hpp"

class Section{
    private:
        const std::string			pathToFile;
		std::vector<std::string>	content;
		std::vector<t_connector>    connectors;
		t_section_type				type;
        size_t                      width;
        size_t                      height;
		size_t						nbConnectors;
		Section();
	public:
		Section(const std::string &pathToFile);
		Section(const Section &src);
		~Section();

		const std::string					&getPathToFile() const;
		const std::vector<std::string>		&getContent() const;
		const std::vector<t_connector>		&getConnectors() const;
		const t_section_type				&getType() const;
		size_t								getWidth() const;
		size_t								getHeight() const;

		bool								LoadFile();
		bool								LoadSection();
		bool								ParseConnectors();

		bool								checker();

};