#ifndef HUMAN_HPP
# define HUMAN_HPP

class		Human
{
	public:
		const Brain&	getBrain(void) const;
		std::string		identify(void) const;
	private:
		const Brain		mBrain;
};

#endif
