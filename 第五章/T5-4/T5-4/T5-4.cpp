/*
	计算分别以5%复利和10%单利的投资价值，并计算5%的复利何时能超过10%的单利
	单利： 利息=0.1 *原始存款
	复利： 利息 = 0.05 *当前存款
*/

#include <iostream>
int main() {
	using namespace std;
	double Daphne, Cleo;
	Daphne = Cleo = 100.0;
	int count = 0;
	while (Daphne >= Cleo)
	{
		Daphne += 0.1 * 100;
		Cleo = 1.05 *Cleo;
		count++;
	}
	cout << "When the years turn to " << count << " Cleo will surpass Daphne!" << endl;
	cout << "Daphne: " << Daphne << endl;
	cout << "Cleo: " << Cleo << endl;
	return 0;
}