#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kuzi,i;
	srand(time(0));
	rand();
	kuzi = rand() % 5 + 1;
	printf("うわっ、わたしの運勢、悪すぎ… ?\n");
	printf("あなたの運勢は:");
	for (i = 0; i < kuzi; i++)
	{
		printf("☆");
	}
}