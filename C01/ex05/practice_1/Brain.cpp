#include "Brain.hpp"

const std::string		Brain::identify() const
{
	std::ostringstream	oss;

	std::cout << "===== include brain.hpp =====\n";
	oss << this; // oss 에 주소값인 문자열을 담음
	return (oss.str());
}
