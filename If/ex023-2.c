#include<stdio.h>
main()
{
	int m;
	printf("��������");
	scanf("%d", &m);
	if (m % 400==0)
	{
		printf("���邤�N����\n");
	}
	else
	{
		if (m % 4 == 0 && m % 100 > 0)
		{
			printf("���邤�N����\n");
		}
		else
		{
			printf("not���邤�N\n");
		}
	}
}