/*
	��дһ��������ཫ10��donationֵ���뵽һ��double�����У�������������������ʱ���������룬��������Щ���ֵ�ƽ��ֵ�Ѿ��������ж��ٸ����ִ���ƽ��ֵ��
*/
#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<double,10> arr;
	int count = 0;
	double sum = 0.0;
	for (int i = 0; i < 10; i++)
	{
		if (cin >> arr[i])
		{
			count++;
			sum += arr[i];
		}
		else
			break;
	}
	double avg = sum / (double)count;
	cout << avg << endl;
	int largeavgnum = 0;
	for (int i = 0; i < count;i++)
	{
		if (arr[i] > avg)
		{
			largeavgnum++;
		}
	}
	cout << largeavgnum;
}