#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <numeric>

template<typename T>
void entry(T& var)
{
	while (!(std::cin >> var))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void command_hub(const std::string& input);


#endif

