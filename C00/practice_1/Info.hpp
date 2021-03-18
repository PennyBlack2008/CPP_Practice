#ifndef INFO_HPP
# define INFO_HPP

# include <iostream>
# include <string>

# define DATA_NUM 2

class			Info
{
	private:
		std::string	mContent[DATA_NUM];
		static std::string mCate[DATA_NUM];
	public:
		void	InputInfo(void);
		void	PreviewInfo(void);
		void	ViewInfo(void);
};

#endif
