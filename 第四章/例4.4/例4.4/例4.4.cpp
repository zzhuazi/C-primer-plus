/*
	����getline(name, 20)�������������ַ���������20������ȡǰ19���ַ������һ�Ӱ�쵽���е�cinȡֵ���Ὣ\0 ��ֵ���е��ַ���
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