/*��дһ��������Ҫ�������������������������գ�
Ȼ�����ʹ��һ�����źͿո��պ���������������洢����ʾ��Ͻ��
��ʹ��char�����ͷ�ļ�cstring�еĺ�����*/
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