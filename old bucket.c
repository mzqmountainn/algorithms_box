void bucket_sort1() {
	int n, bucket[11], i, b, j;
	for (i = 0; i <= 11; i++)
		bucket[i] = 0;   //初始化
	printf("先输入你要输入几个数字");
	scanf("%d", &n);
	getchar();
	printf("请输入数字");
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &b);
		bucket[b]++; //读数+排序

	}


	printf("输出结果以下");
	for (i = 0; i <= n; i++)
	{
		for (j = 1; j <= bucket[i]; j++)
			printf("%d", i);
	}
}