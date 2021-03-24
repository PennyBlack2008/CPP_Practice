#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
 
int main(void)
{
    srand((unsigned int)time(NULL));
 
    for (int i = 0; i < 20; ++i)
    {
        int num = rand();
        printf("난수 : %d\t나머지 : %d\n", num, (int)num % 10);
    }
    return 0;
}