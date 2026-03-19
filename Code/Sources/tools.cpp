# include "tools.hpp"

int find(const std::string &str, char c){
	int i = 0;

	while (str[i]){
		if (str[i] == ':')
			return (i);
		i++;
	}
	return (-1);
}