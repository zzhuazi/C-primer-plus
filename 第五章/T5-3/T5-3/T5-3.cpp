/*
	��дһ��Ҫ���û��������ֵĳ���ÿ������󣬳��򶼽����浽ĿǰΪֹ������������ۼƺ͡����û�����0ʱ���������
*/
#include <iostream>
int main() {
	using namespace std;
	int a, sum = 0;
	while (cin>>a && a!=0)
	{
		sum += a;
		cout << "By now sum: " << sum << endl;
	}
	cout << "Exit! And the sum is:" << sum << endl;
}