#include <iostream>
#include <string>
using namespace std;
struct pizza
{
	string pizzaCmp;
	double pizzal;
	double weight;
};

int main() {
	pizza piazzaa;
	cout << "T4-7:" << endl;
	cout << "Please input pizzaCmp:";
	getline(cin, piazzaa.pizzaCmp);
	cout << "Please input pizzal and weight:";
	cin >> piazzaa.pizzal >> piazzaa.weight;
	cout << "pizzaCmp:" << piazzaa.pizzaCmp << endl << "pizzal: " << piazzaa.pizzal << endl << "weight: " << piazzaa.weight << endl << endl;

	cout << "T4-8:" << endl;
	pizza * pizzab = new pizza;
	cout << "Please input pizzal: ";
	cin >> pizzab->pizzal;
	cout << "Please input pizzaCmp: ";
	cin.get(); //Çå³ý¿ÕÐÐ
	cin.clear();
	getline(cin, pizzab->pizzaCmp);
	cout << "Please input weight: ";
	cin >> pizzab->weight;
	cout << "pizzaCmp:" << pizzab->pizzaCmp << endl << "pizzal: " << pizzab->pizzal << endl << "weight: " << pizzab->weight << endl << endl;
	delete pizzab;
}