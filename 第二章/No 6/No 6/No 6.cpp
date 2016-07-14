/*	编写一个程序，其main（）调用一个用户定义的函数（以光年值为参数，并返回对应天文单位的值）
*/
#include<iostream>
using namespace std;
double trans(double lightyears);

int main()
{
	cout << "Enter the number of light years:";
	double lightyears;
	cin >> lightyears;
	cout << lightyears << " light years = " << trans(lightyears) << " astronomical units." << endl;
	return 0;
}

double trans(double lightyears)
{
	return lightyears * 63240;
}