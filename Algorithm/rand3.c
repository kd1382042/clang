#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kaisin;
	srand(time(0));
	rand();
	kaisin = rand() % 100 + 1;
	
		if (kaisin <= 30)
		{
			printf("‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«!\n");
		}
		else
			printf("’ÊíUŒ‚\n");
}