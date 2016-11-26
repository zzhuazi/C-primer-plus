/*写个4个选项的菜单，直到输入正确的值才输出。*/
#include <iostream>
using namespace std;
int main() {
	cout << "Please enter one of the following choice：" << endl;
	cout << "c) carnivore       p) pianist" << endl;
	cout << "t) tree            g) game" << endl;
	char choice;
	cout << "Please enter a c, p, t, or g:";
	cin >> choice;
	l:switch (choice)
	{
	case 'c': cout << "c:aaaaa" << endl; break;
	case 'p': cout << "p:ppppp" << endl; break;
	case 't': cout << "A maple is a tree;"<<endl; break;
	case 'g': cout << "g:aaaadaa" << endl; break;
	default:
		cout << "Please enter a c, p, t, or g:";
		cin >> choice;
		goto l;
		break;
	}
}