/*��дһ��������Ҫ�������������������������գ�
Ȼ�����ʹ��һ�����źͿո��պ���������������洢����ʾ��Ͻ��
��ʹ��string��ͷ�ļ�cstring�еĺ�����*/
#include <iostream>
#include <string>
int main() {
	using namespace std;
	string first_name, last_name;
	cout << "Enter your first name:";
	getline(cin, first_name);
	cout << "Enter your last name;";
	getline(cin, last_name);
	string full_name;
	full_name = first_name + ", " + last_name;
	cout << "Here's the information in a single string: " << full_name << endl;
}