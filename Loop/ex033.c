#include<stdio.h>
main()
{
	int sum, num,i;
	printf("���������:");
	scanf("%d", &num);
	for (sum = 0,i=0; num != -999; i++)
	{
		sum += num;
		printf("���������:");
		scanf("%d", &num);
	}
		printf("���v:%d\t����:%.2f\n", sum,(float)sum/i);
}