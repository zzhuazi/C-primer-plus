/*
	Ҫ��ʹ��Ƕ��ѭ���ĳ���Ҫ���û�����һ��ֵ��ָ��Ҫ��ʾ�����У�Ȼ�������Ӧ�������Ǻš�ÿһ�а������ַ��������û�ָ����������
*/
#include <iostream>
int main() {
	using namespace std;
	cout << "Enter number of rows:";
	int rows;
	cin >> rows;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			if (j < rows - (i+1))
				cout << ".";
			else
				cout << "*";
		}
		cout << endl;
	}
	return 0;
}