#include<stdio.h>
main()
{
	int sum, num,i;
	printf("数をいれて:");
	scanf("%d", &num);
	for (sum = 0,i=0; num != -999; i++)
	{
		sum += num;
		printf("数をいれて:");
		scanf("%d", &num);
	}
		printf("合計:%d\t平均:%.2f\n", sum,(float)sum/i);
}