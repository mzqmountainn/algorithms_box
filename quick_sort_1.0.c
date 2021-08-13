//origin made by MZQ
#include<stdio.h>//203
#pragma warning(disable:4996)
static int Qsort[1000];
void Qsort_body(int left, int right) {
	int i, j,temp;
	if (left > right)
		return;//异常判断
	int std = Qsort[left];//确定基准数
	i = left;
	j = right;
	while (i != j) {
		while (Qsort[j] >= std && j > i)
			j--;
		while (Qsort[i] <= std && i < j)
			i++;
		temp = Qsort[i];
		Qsort[i] = Qsort[j];
		Qsort[j] = temp;
	}

	Qsort[left] = Qsort[i];
	Qsort[i] = std;
	Qsort_body(left, i - 1);
	Qsort_body(i + 1, right);

}
int Qsort_main(void) {
	int n,i;
	printf("enter the digits of numbers\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &Qsort[i]);
	Qsort_body(1, n);
	printf("output starting......\n");
	for (i = 1; i <= n; i++)
		printf("%d ", Qsort[i]);
	return 0;



}

