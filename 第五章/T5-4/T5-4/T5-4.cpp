/*
	����ֱ���5%������10%������Ͷ�ʼ�ֵ��������5%�ĸ�����ʱ�ܳ���10%�ĵ���
	������ ��Ϣ=0.1 *ԭʼ���
	������ ��Ϣ = 0.05 *��ǰ���
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