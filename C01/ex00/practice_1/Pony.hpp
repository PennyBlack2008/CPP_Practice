#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class	Pony
{
	public:
		Pony(const std::string& name);
		~Pony();

		void Cry(void);
		void Run(void);

	private:
		const std::string	mName;
};

#endif
