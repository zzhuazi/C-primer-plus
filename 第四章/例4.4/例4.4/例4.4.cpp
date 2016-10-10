/*
	测试getline(name, 20)如果当行输入的字符个数超过20个，则取前19个字符，并且会影响到所有的cin取值，会将\0 赋值所有的字符串
*/
#include<iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	char test[ArSize];
	char testt[ArSize];
	cout << "Enter your name" << endl;
	cin.getline(name, 20);
	cout << "Enter your favourite dessert:" << endl;
	cin.getline(dessert, 20);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << "." << endl;
	cin >> test;
	cout << test;
	cin >> testt;
	cout << testt;
	return 0;
}