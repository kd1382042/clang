#include<stdio.h>
main()
{
	int k=0, ia;
	while (1)
	{
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &ia);
		if (ia == -999)break;
		k += ia;
	}
	printf("‡Œv=%d", k);
}