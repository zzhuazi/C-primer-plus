/*	编写一个C++程序，它使用3个用户定义的函数，并生成下面的输出
Three blind mice
Three blind mice
See how they run
See how they run
*/
#include <iostream>
using namespace std;
void Blind();
void See();
int main()
{
	Blind();
	Blind();
	See();
	See();
	return 0;
}

void Blind()
{
	cout << "Three blind mice" << endl;
}

void See()
{
	cout << "See how they run" << endl;
}