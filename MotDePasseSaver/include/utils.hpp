#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <iostream>
#include <numeric>

//templates functions

template<typename T>
void entry(T& var)
{
	while (!(std::cin >> var))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

template<typename T, typename Pred>
void entry(T& var, const Pred& condition, const std::string& message = "Erreur ! Veuillez reessayer")
{
	while (!(std::cin >> var) || !condition(var))
	{
		std::cerr << message << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
}

void command_hub(const std::string& input);
void c_random();
void c_help();

std::string quote(const std::string& input);

#endif

