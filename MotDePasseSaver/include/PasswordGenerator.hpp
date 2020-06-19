#ifndef PASSWORD_GENERATOR_HPP
#define PASSWORD_GENERATOR_HPP

#include <string>
#include <vector>

class PasswordGenerator
{
public:
	PasswordGenerator() = default;
	std::string random_gen(int ncaracteres) noexcept;
	void save(const std::string& password);
	bool issaved();
private:
	bool good_main_pswd;
};

#endif