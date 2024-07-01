#include<stdio.h>
main()
{
	float a[3],gokei;
	int i;
	for (i = 0, gokei = 0; i < 3; i++)
	{
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &a[i]);
		gokei += a[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n", gokei);
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", gokei / 3);
}