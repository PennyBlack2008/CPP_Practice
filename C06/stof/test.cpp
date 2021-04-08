// string to float

#include <iostream>
#include <string>

int main()
{
	std::string orbits("686.97 365.24");
	std::string::size_type sz;

	float mars = std::stof(orbits, &sz);
	float earth = std::stof(orbits.substr(sz));
	std::cout << "One martian year takes " << (mars / earth) << " Earth years.\n";
	// One martian year takes 1.88087 Earth years.
	return (0);
}