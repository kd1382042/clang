#include<stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,39 },i,s;
	printf("探索値を入力:");
	scanf("%d", &s);
	
	for (i = 0, d[10] = s; s != d[i]; i++);
	if (i == 10)
	{
		printf("だめだったよ…\n");
	}
	else
	{
		printf("%d回目で見つけたんだよ!\n", i + 1);
	}
}