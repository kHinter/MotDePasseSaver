#include "include/utils.hpp"
#include "include/PasswordTools.hpp"

#include <iomanip>
#include <sstream>

void command_hub(const std::string& input)
{
	//split
	std::string main{ input.begin(), std::find_if(input.begin(), input.end(), [](char c) -> bool {return isblank(c); }) };
	if (main == "/random")
		c_random();
	else if (main == "/help")
		c_help();
	//else if (main == "/save")
}

//c prefix = command

void c_random()
{
	int length = 0;
	std::cout << "Nombre de caracteres : " << std::endl;
	entry(length);

	PasswordTools generator {};
	std::string random_password{ generator.random_gen(length) };

	std::cout << random_password << std::endl;
}

void c_save()
{
	//TODO remplir apres
}

void c_help()
{
	std::cout << "/random : genere un mot de passe aleatoire" << std::endl;
	std::cout << "/save : sauvegarde le mot de passe et le nom du site / programme pour lequel il est utilise" << std::endl;
}

std::string quote(const std::string & input)
{
	std::ostringstream os;
	os << std::quoted(input);
	return os.str();
}