#include<stdio.h>//203
#pragma warning(disable:4996)
int test1(void) {
	int a[1001],i,b,c,j;
	for (i = 0; i <= 1001; i++)
		a[i] = 0;
	scanf("%d", &b);
	for ( i = 1; i <=b; i++)
	{
		scanf("%d", &c);
		a[c]++;

	}
	for (i = 0; i <= b; i++)
		for (j = 1; j <= a[i]; j++)
			printf("%d ", i);
	getchar();
	return 0;
}