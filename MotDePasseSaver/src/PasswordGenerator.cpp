#include "PasswordGenerator.hpp"

#include <random>

std::string PasswordGenerator::random_gen(int ncaracteres) noexcept
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