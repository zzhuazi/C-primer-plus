/*	��дһ������Ҫ���û�����Сʱ���ͷ���������main()�����У�������ֵ���ݸ�һ��void����
���������������ĸ�ʽ��ʾ������ֵ��
*/
#include <iostream>
using namespace std;

void Show(int hour, int minute);

int main()
{
	cout << "please input hour and minute:";
	int hour, minute;
	cin >> hour >> minute;
	while(hour < 0 || hour > 24 || minute < 0 || minute >= 60)
	{
		cout << "Input error! Input again!" << endl;
		cout << "please input hour and minute:";
		cin >> hour >> minute;
	}
	Show(hour, minute);
	return 0;
}

void Show(int hour, int minute)
{
	cout << "Enter the number of hours: " << hour << endl;
	cout << "Enter the number of minutes: " << minute << endl;
	cout << "Time: " << hour << ":" << minute << endl;
}

