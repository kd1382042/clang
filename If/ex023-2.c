#include<stdio.h>
main()
{
	int m;
	printf("¼—ï‚ð“ü—Í");
	scanf("%d", &m);
	if (m % 400==0)
	{
		printf("‚¤‚é‚¤”N‚¾‚æ\n");
	}
	else
	{
		if (m % 4 == 0 && m % 100 > 0)
		{
			printf("‚¤‚é‚¤”N‚¾‚æ\n");
		}
		else
		{
			printf("not‚¤‚é‚¤”N\n");
		}
	}
}