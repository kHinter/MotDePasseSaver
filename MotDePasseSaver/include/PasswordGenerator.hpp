#ifndef PASSWORD_GENERATOR_HPP
#define PASSWORD_GENERATOR_HPP

#include <string>
#include <vector>

enum class Types
{
	simple,
	enough,
	strong
};

class PasswordGenerator
{
public:
	PasswordGenerator() = default;
	std::string random_gen(int ncaracteres) noexcept;
	std::string random_gen() noexcept;
	std::string random_gen(Types type) noexcept;
private:
	std::vector<std::string> m_passwords;
};

#endif