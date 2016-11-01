/*编写一个程序，它要求首先输入其名，再输入其姓，
然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果
请使用char数组和头文件cstring中的函数。*/
#include <iostream>
#include <cstring>
#include <string>
int main() {
	using namespace std;
	const int Artsize = 20;
	char first_name[Artsize], last_name[Artsize];
	cout << "Enter your first name:";
	cin.getline(first_name, Artsize);	
	cout << "Enter your last name;";
	cin.getline(last_name, Artsize);
	string full_name;
	full_name.insert(0, first_name);
	full_name.insert(strlen(first_name), ", ");
	full_name.insert(full_name.length(), last_name);
	cout << "Here's the information in a single string: " << full_name << endl;
}