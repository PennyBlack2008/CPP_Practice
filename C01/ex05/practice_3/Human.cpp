#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

const Brain& Human::getBrain(void) const
{
	return (this->mBrain);
}

std::string Human::identify(void) const
{
	return (this->mBrain.identify());
}
