/*	��дһ��������main��������һ���û�����ĺ������Թ���ֵΪ�����������ض�Ӧ���ĵ�λ��ֵ��
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