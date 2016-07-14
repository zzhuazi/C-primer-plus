/*	编写一个C++程序，它要求用户输入一个以long为单位的距离，然后将它转换为码（1 long  = 220 码）
*/
#include <iostream>
using namespace std;
int main()
{
	cout << "Please input the distance:";
	int distance;
	cin >> distance;
	cout << distance << " long = " << 220 * distance << " 码" << endl;
}