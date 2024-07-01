#include<stdio.h>
main()
{
	int su1, su2, su3,gokei;
	printf("®”‚ğ‚R‚Â“ü‚ê‚Ä:" );
	scanf("%d%d%d", &su1, &su2, &su3);

	gokei = su1 + su2 + su3;

	printf("‡Œv=%d  ",gokei);
	printf("•½‹Ï=%.2f", (float)gokei/ 3);
	printf("•½‹Ï=%.2f", gokei / 3.0);
}