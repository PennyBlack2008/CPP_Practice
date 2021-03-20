#ifndef Contact_HPP
# define Contact_HPP

# include <iostream>
# include <string>

# define DATA_NUM 2

class			Contact
{
	private:
		std::string	mContent[DATA_NUM];
		static std::string mCate[DATA_NUM];
	public:
		void	InputContact(void);
		void	PreviewContact(void);
		void	ViewContact(void);
};

#endif
