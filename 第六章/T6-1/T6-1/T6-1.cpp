#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
	cout << "input until @:";
	string str;
	cin >> str;
	for (int i = 0;str[i] != '@'; i++) {
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
		else if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}
	}
	for (int i = 0; i < str.length();i++)
	{
		if(isdigit(str[i]) || str[i] == '@')
			continue;
		else
		{
			cout << str[i];
		}
	}
	return 0;
}