#ifndef INFO_HPP
# define INFO_HPP

# include <iostream>
# include <string>

# define CNT 3

class			Info
{
	private:
		std::string mContent[CNT];
		static std::string mCate[CNT]; // 쉽게 초기화하기 위해 static 사용

	public:
		void	InputInfo(void); // 정보 입력
		void	PreviewInfo(void); // 정보 미리보기
		void	ViewInfo(void); // 정보 출력
};

#endif
