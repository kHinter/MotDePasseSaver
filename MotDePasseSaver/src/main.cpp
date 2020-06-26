#include "include/PasswordTools.hpp"
#include "include/utils.hpp"

/*
 * Cahier des charges : charger les mots de passe a l'ouverture du programme
 * type d'enregistrement : cryptage
 * il faut entrer un main mot de passe pour accéder
*/

int main()
{
	/*
	std::string input;
	while (true)
	{
		std::getline(std::cin, input);
		command_hub(input);
	}
	return 0;
	*/
	int j;
	entry(j, [](int j) -> bool
	{
		int i = -1;
		i++;
		std::cout << i << std::endl;
		return j == 5;
	});
}