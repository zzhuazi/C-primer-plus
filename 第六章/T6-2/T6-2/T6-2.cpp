/*
	编写一个程序，最多将10个donation值读入到一个double数组中，程序遇到非数字输入时将结束输入，并报告这些数字的平均值已经数组中有多少个数字大于平均值。
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