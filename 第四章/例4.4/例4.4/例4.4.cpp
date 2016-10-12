/*
	测试getline(name, 20)如果当行输入的字符个数超过20个，将余下字符输入留在输入队列中，getline()还会设置失效位，并关闭后面的输入，因此导致后面所有的输入都无效
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
	//cin.getline(name, 20);//测试getline()
	cin.get(name, 20).get();  //测试get()
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