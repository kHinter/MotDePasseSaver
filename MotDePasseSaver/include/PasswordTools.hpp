#ifndef PASSWORD_GENERATOR_HPP
#define PASSWORD_GENERATOR_HPP

#include <string>
#include <vector>

class PasswordTools
{
public:
	PasswordTools() = default;
	std::string random_gen(int ncaracteres) noexcept;
	void save(const std::string& password);
	void authentification();
private:
	const std::string masterpasswordPATH{ "master password.txt" };
	const std::string passwordsPATH{ "passwords.txt" };
};

namespace test
{
	//TODO creer des tests unitaires pour chaque fonction
}

#endif