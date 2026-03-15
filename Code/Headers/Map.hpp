#pragma once
# include "Header.hpp"

class Map{
    private:
        const std::string                   path;
        const std::string                   name;
        size_t                              id;
        std::vector<std::string>            content;
        t_rules                             rules;
    public:
        const std::string                   &getPath();
        const std::string                   &getName();
        const size_t                        &getId();
        const std::vector<std::string>      &getContent();
        const t_rules                       &getRules();
};