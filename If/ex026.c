#include<stdio.h>
main()
{
	int m;
	printf("月を入力してください");
	scanf("%d", &m);
	if (m == 2)
	{
		printf("28日です。\n");
	}
	else
	{
		if (m == 4 ||m== 6 ||m== 9 ||m== 11)
		{
			printf("30日です。\n");
		}
		else
		{
			printf("31日です。\n");
		}
	}

}