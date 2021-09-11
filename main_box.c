#include<stdio.h>//203
#pragma warning(disable:4996)
//本程序用于研究简单算法，实践算法使用
//author:mzq
int main(void) {
	int a = 0;
	printf("welcome to algorithms box\n");
	printf("this box will introduce some good algorithms to u!\n");
	printf("1.桶排序Bucket sort\n2.冒泡排序Bubble sort\n3,快速排序Quick sort\n");
	printf("press the number u want\n");
	scanf("%d", &a);
	
	getchar();
	switch (a)
	{
	case 1:  bucket_sort();
	case 2:  bubble_main();
	case 3:  Qsort_main();

	default:
		break;
	}

	return 0;
}
