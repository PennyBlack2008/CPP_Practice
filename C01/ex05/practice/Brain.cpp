#include "Brain.hpp"

const std::string		Brain::identify() const
{
	std::ostringstream	oss;

	std::cout << "===== include brain.hpp =====\n";
	oss << this;
	return (oss.str());
}
