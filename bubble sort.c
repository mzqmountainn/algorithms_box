//origin made bt MZQ
#include<stdio.h>//203
#pragma warning(disable:4996)
static int bubble_number_of_digits;
static int bubble_numbers[500];
int get_number_of_digit(void) {
	printf("enter the number of the digits\n");
	scanf("%d", &bubble_number_of_digits);
	return 0;
}
int get_number(void) {
	int i;
	printf("format:1 2 5 75 4 \n enter numbers!\n");
	for (i = 1; i <= bubble_number_of_digits; i++)
		scanf("%d", &bubble_numbers[i]);


}
void bubble_return_results(void) {
	int i;
	for (i = 1; i <= bubble_number_of_digits; i++)
		printf("%d ", bubble_numbers[i]);
}
int bubble_reverse(void) {
	int i, j,t;
	//printf("%d", bubble_number_of_digits);
	printf("its ok,waiting for the results……\n");
	for(i=1;i<=(bubble_number_of_digits-1);i++)
		for(j=1;j<= (bubble_number_of_digits - 1);j++)
		{
			if (bubble_numbers[j] < bubble_numbers[j + 1])
			{ t = bubble_numbers[j];
			bubble_numbers[j] = bubble_numbers[j + 1]; 
			bubble_numbers[j + 1] = t;
			}
		}
	bubble_return_results();	
	getchar(); getchar();
	return 0;
}
int bubble_positive(void) {
	int i, j, t;
	//printf("%d", bubble_number_of_digits);
	printf("its ok,waiting for the results……\n");
	//原for循环发生问题，C6293, for 循环定义错误：从最小值向下计数
	for(i=1;i<=bubble_number_of_digits-1;i++)
		for (j = 1; j <= bubble_number_of_digits-1; j++)
		{
			if (bubble_numbers[j] >bubble_numbers[j + 1])
			{
				t = bubble_numbers[j];
				bubble_numbers[j] = bubble_numbers[j + 1];
				bubble_numbers[j + 1] = t;
			}
		}
	bubble_return_results();
	getchar(); getchar();
}
int bubble_main(void) {
	int type;
	printf("welcome to bubble sort\nwhice mode do u want to use?   1.positive order 2. reverse order\n");
	scanf("%d", &type);
	get_number_of_digit();
	get_number();
	if (type ==1)
		bubble_positive();
	else
		bubble_reverse();

}