#include<stdio.h>
main()
{
	int m;
	printf("西暦を入力");
	scanf("%d", &m);
	if (m % 400==0)
	{
		printf("うるう年だよ\n");
	}
	else
	{
		if (m % 4 == 0 && m % 100 > 0)
		{
			printf("うるう年だよ\n");
		}
		else
		{
			printf("notうるう年\n");
		}
	}
}