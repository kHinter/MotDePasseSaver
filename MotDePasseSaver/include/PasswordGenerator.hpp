#ifndef PASSWORD_GENERATOR_HPP
#define PASSWORD_GENERATOR_HPP

#include <string>
#include <vector>

class PasswordGenerator
{
public:
	PasswordGenerator() = default;
	std::string random_gen(int ncaracteres) noexcept;
private:
	std::vector<std::string> m_passwords;
};

#endif