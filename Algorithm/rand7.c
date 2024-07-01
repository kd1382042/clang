#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int su, i,count=0;
	printf("1`1000‚Ì’†‚Å‚ ‚½‚è‚Ì”‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	srand(time(0));
	rand();
	su = rand() % 1000 + 1;
	do 
	{
		printf("“–‚½‚è‚Ì”‚Í?:");
		scanf("%d", &i);
		if (i > su)
		{
			printf("“–‚½‚è‚æ‚è‘å‚«‚¢‚Ë‚¥\n");
		}
		if (i < su)
		{
			printf("“–‚½‚è‚æ‚è¬‚³‚¢‚Ë‚¥\n");
		}
		count++;
		printf("\n");
	} while (i != su);

	printf("‚¨‚ß‚Å‚Æ‚¤!%d‰ñ‚Å¬Œ÷‚¾‚æ\n", count);
}