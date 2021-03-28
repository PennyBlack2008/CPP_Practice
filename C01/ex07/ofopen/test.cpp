/*
 * ofs.open 을 하면, ofs 가 그 자체로 그 파일이 되는 것같다.
 * 파일 디스크립터의 역할과 스트링의 역할
 * 그래서 ofs 에 string 을 넣어주고 close 하면, 
 * 그 파일이 만들어진다.
 *
 * ofstream::out 은 stream 에 output operations 를 허용한다.
 * ofstream::app 은 각 출력 작업 전에, 위치 표시기를 stream 의 끝으로 설정
 */

#include <fstream>

int main()
{
	std::ofstream ofs;
	ofs.open("test.txt", std::ofstream::out | std::ofstream::trunc);
	ofs << " more lorem ipsum";
	ofs.close();
	return (0);
}
