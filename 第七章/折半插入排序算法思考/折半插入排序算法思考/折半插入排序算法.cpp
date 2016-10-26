#include <iostream>
#include <cstdlib>
using namespace std;

void InsertSort(int R[], int n);
int main()
{
	int r[10] = { 9, 5, 3, 6, 7, 4, 12, 13, 1, 103 };
	InsertSort(r, 10);
	return 0;
}

void InsertSort(int R[], int n)
{
	int i, j, low, high, mid;
	int tmp;
	for (i = 1; i < n; i++) {
		tmp = R[i];							//��R[i]���浽tmp��
		low = 0; high = i - 1;
		while (low <= high) {				//��R[low..high]���۰������������λ��
			mid = (low + high) / 2;			//ȡ�м�λ��
			if (tmp < R[mid])
				high = mid - 1;				//������������
			else
				low = mid + 1;				//��������Ұ���
		}
		for (j = i - 1; j >= high + 1; j--)	//Ԫ�غ���
			R[j + 1] = R[j];
		R[high + 1] = tmp;					//����Ԫ��
	}
}