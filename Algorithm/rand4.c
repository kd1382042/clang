#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kuzi,i;
	srand(time(0));
	rand();
	kuzi = rand() % 5 + 1;
	printf("‚¤‚í‚ÁA‚í‚½‚µ‚Ì‰^¨Aˆ«‚·‚¬c ?\n");
	printf("‚ ‚È‚½‚Ì‰^¨‚Í:");
	for (i = 0; i < kuzi; i++)
	{
		printf("™");
	}
}