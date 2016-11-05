/*设计一个car的结构，存储生产商和生产年份的信息*/
#include<iostream>
#include<string>
using namespace std;
struct car
{
	string scs;
	int year;
};

int main() {
	cout << "How many cars do you wish to catalog?";
	int num;
	cin >> num;
	car* c = new car[num];
	for (int i = 0; i < num; i++) {
		cout << "Car #" << i + 1 << " :" << endl;
		cout << "Please enter the make: ";
		cin.get();
		getline(cin, c[i].scs);
		cout << "Please enter the year made: ";
		cin >> c[i].year;
	}
	cout << "Here is your collection:" << endl;
	for (int i = 0; i < num; ++i) {
		cout << c[i].year << " " << c[i].scs << endl;
	}
	return 0;
}