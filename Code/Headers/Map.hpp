#pragma once
# include "Header.hpp"

class Map{
    private:
        const std::string                   path;
        const std::string                   name;
        size_t                              id;
        std::vector<std::string>            content;
        t_rules                             rules;
		Map();
    public:
		Map(t_rules &rules, std::vector<Section> &sections);
		Map(const Map &map);
		~Map();

        const std::string                   &getPath() const;
        const std::string                   &getName() const;
        const size_t                        &getId() const;
        const std::vector<std::string>      &getContent() const;
        const t_rules                       &getRules() const;

		
		void								build();
		void								writeResult();
};