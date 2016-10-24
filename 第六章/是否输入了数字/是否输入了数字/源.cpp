#include<iostream>
using namespace std;
void main()
{
	int golf[5];
	for (int i = 0; i < 5;i++)
	{
		cout << "round#" << i + 1 << ":";
		while (!(cin >> golf[i])) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "please enter a number:";
		}
	}	

	for (int i = 0; i < 5; i++) {
		cout << golf[i] << endl;
	}
}