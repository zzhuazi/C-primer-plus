/*
	T5-5��ͨ��ѭ��ʹ�ó�ʼ��Ϊchar*���飨String�������½�����ʾ��������������ݴ洢��һ��int�����У���������ܺ͡�
	T5-6��ʹ�ö�λ����洢���룬3����ÿ���µ�����������������������������������
*/
#include <iostream>
#include <string>
int main() {
	using namespace std;
	string oneyear[12] = { "January","February","March","April","May","June","July","August","Semtember", "October","November","December" };
	/*cout << "T5-5:" << endl;
	double T55[12], sum = 0;
	for (int i = 0; i < 12;i++) {
		cout << "Please input " << oneyear[i] << ": ";
		cin >> T55[i];
		sum += T55[i];
	}
	cout << "This year's sum is:" << sum << endl;*/

	cout << "T5-6:" << endl;
	double T56[3][12], sum2 = 0;
	for (int i = 0; i < 3; i++)
	{
		double sum = 0;
		for (int j = 0; j < 12; j++)
		{
			cout << "Please input " << i+1 << " year's " << oneyear[j] << ": ";
			cin >> T56[i][j];
			sum += T56[i][j];
			sum2 += T56[i][j];
		}
		cout << "The " << i+1 << " year is sum: " << sum << endl;
	}
	cout << "The whole 3 year sum:" << sum2;
	return 0;
}