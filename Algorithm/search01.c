#include<stdio.h>
main()
{
	int i, s, data[] = {10,5,30,77,16,3,47,29,37,39};
	printf("探索値を入力;");
	scanf("%d", &s);
	for (i = 0; i < 10; i++)
	{
		if (s == data[i])
		{
			break;
		}
	}
	if (i >= 10)
	{
		printf("だめだったよ…\n");
	}
	else
	{
		printf("%d回目で見つけたんだよ!\n", i+1);
	}
}