#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int su, i,count=0;
	printf("1〜1000の中であたりの数を入力してください\n");
	srand(time(0));
	rand();
	su = rand() % 1000 + 1;
	do 
	{
		printf("当たりの数は?:");
		scanf("%d", &i);
		if (i > su)
		{
			printf("当たりより大きいねぇ\n");
		}
		if (i < su)
		{
			printf("当たりより小さいねぇ\n");
		}
		count++;
		printf("\n");
	} while (i != su);

	printf("おめでとう!%d回で成功だよ\n", count);
}