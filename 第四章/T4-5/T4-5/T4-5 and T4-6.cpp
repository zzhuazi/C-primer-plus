#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
	string name;
	double weight;
	int caluli;
};

int main() {
	CandyBar snack = { "Mocha Munch", 2.3, 350 };
	cout << "T4-5:" << endl;
	cout << "The name of this candy is: " << snack.name << endl;
	cout << "The weight of this candy is: " << snack.weight << endl;
	cout << "The caluli of this candy is: " << snack.caluli << endl << endl;

	CandyBar sna[3];
	sna[0] = { "sna1",2.5,300 };
	sna[1] = { "sna2",3.2,353 };
	sna[2] = { "sna3",2.2,366 };
	cout << "T4-6:" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "The name of this candy is: " << sna[i].name << endl;
		cout << "The weight of this candy is: " << sna[i].weight << endl;
		cout << "The caluli of this candy is: " << sna[i].caluli << endl << endl;
	}
	return 0;
}