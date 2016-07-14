/*	摄氏度转华氏温度
*/
#include<iostream>
using namespace std;
double transform(double dc);

int main()
{
	cout << "Please enter a celsius valus:";
	int dc;
	cin >> dc;
	cout << dc << " degrees Celsius is " << transform(dc) << " degrees Fahrenheit." << endl;
	return 0;
}

double transform(double dc)
{
	return 1.8 * dc + 32.0;
}