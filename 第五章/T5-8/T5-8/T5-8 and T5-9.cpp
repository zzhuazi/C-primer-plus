/*
	编写一个程序，它使用一个char数组和循环来每次读取一个单词，直到用户输入done为止。随后，该程序指出用户输入了多少个单词（不包括done在内）
*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main() {
	/*char word[20];
	int num = 0;
	cout << "T5-8:" << endl;
	cout << "Enter word （to stop, type the word done):" << endl;*/
	/*while (cin>>word)
	{
		if (strcmp(word, "done"))
		{
			num++;
			continue;
		}
		else
			break;
	}
	*/
	/*while (cin >> word && strcmp(word, "done"))
	{
			num++;
	}
	cout << "You entered a total of " << num << " words." << endl;*/

	cout << "T5-9:" << endl;
	cout << "Enter word （to stop, type the word done):" << endl;
	int num2 = 0;
	string word2;
	while (cin >> word2 && word2 != "done")
	{
		num2++;
	}
	cout << "You entered a total of " << num2 << " words." << endl;
	return 0;
}