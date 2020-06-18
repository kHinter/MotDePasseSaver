#include "PasswordGenerator.hpp"
#include "utils.hpp"

/*
 * Cahier des charges : charger les mots de passe a l'ouverture du programme
 * type d'enregistrement : cryptage
 * il faut entrer un main mot de passe pour accéder
*/

int main()
{
	std::string input;
	while (true)
	{
		std::getline(std::cin, input);
		command_hub(input);
	}
	return 0;
}