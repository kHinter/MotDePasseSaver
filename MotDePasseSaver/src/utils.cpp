#include "utils.hpp"
#include "PasswordGenerator.hpp"

#include <iostream>
#include <unordered_map>
#include <functional>

void command_hub(const std::string& input)
{
	//split
	std::string main{ input.begin(), std::find_if(input.begin(), input.end(), [](char c) -> bool {return isblank(c); }) };
	if (main == "/random")
		c_random();
}

//c prefix = command

void c_random()
{
	std::cout << "Nombre de caracteres : " << std::endl;

}