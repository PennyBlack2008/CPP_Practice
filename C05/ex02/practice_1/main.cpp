#include "PPF.hpp"
#include "SCF.hpp"
#include "RRF.hpp"
#include "B.hpp"

int main(void)
{
	try
	{
		SCF scf("target");
		B man("Man", 137);
		
		std::cout << man << std::endl;

	}
}
