#include "PasswordGenerator.hpp"
#include "utils.hpp"

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