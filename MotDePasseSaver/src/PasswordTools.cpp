#include "include/PasswordTools.hpp"
#include "include/utils.hpp"

#include <random>
#include <fstream>
#include <stdexcept>
#include <iostream>
#include <algorithm>

std::string PasswordTools::random_gen(int ncaracteres) noexcept
{
	std::string random_password;

	std::random_device r;
	std::mt19937_64 generator{ r() };
	std::uniform_int_distribution<> random_char(40, 127);

	for (int i = 0; i < ncaracteres; i++)
	{
		random_password.push_back(random_char(generator));
	}
	return random_password;
}

void PasswordTools::save(const std::string& password)
{

}

void PasswordTools::authentification()
{
	std::ifstream masterpasswordfile(masterpasswordPATH);
	std::ifstream passwordsfile(passwordsPATH);

	if (masterpasswordfile.eof() && passwordsfile.eof())
	{
		//TODO define new masterpasword
	}
	else
	{
		if (masterpasswordfile.is_open())
		{
			std::size_t masterpassword;
			masterpasswordfile >> masterpassword;

			std::string trypassword;
			entry(trypassword, [&masterpassword, &masterpasswordfile, &passwordsfile](const std::string& trypassword) -> bool 
			{
				static int i = 0; //toxic code I know, i looked up later

				if (i == 5)
				{
					std::string answer;
					std::cout << "Voulez vous definir un nouveau mot de passe ?" << std::endl;
					std::cin >> answer;
					std::for_each(answer.begin(), answer.end(), [](char& c) {std::tolower(c); });
					if (answer == "oui" || answer == "yes")
					{
						//TODO define new masterpassword 
					}
				}
				i++;
				return std::hash<std::string> {}(trypassword) == masterpassword;
			});
		}
	}
}