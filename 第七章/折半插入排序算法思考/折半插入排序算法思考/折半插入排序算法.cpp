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
		tmp = R[i];							//将R[i]保存到tmp中
		low = 0; high = i - 1;
		while (low <= high) {				//在R[low..high]中折半查找有序插入的位置
			mid = (low + high) / 2;			//取中间位置
			if (tmp < R[mid])
				high = mid - 1;				//插入点在左半区
			else
				low = mid + 1;				//插入点在右半区
		}
		for (j = i - 1; j >= high + 1; j--)	//元素后移
			R[j + 1] = R[j];
		R[high + 1] = tmp;					//插入元素
	}
}