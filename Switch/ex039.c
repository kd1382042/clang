#include<stdio.h>
main()
	{
		int su1,su2;
	char sh;
	printf("処理を入力:");
	scanf("%c", &sh);
	printf("整数を入力:");
	scanf("%d%d",&su1, &su2);
	switch (sh)
	{
	case 'D':
	case 'd':
		if (su1 >= su2)
		{
			printf("最大値は%dです\n", su1);
		}
		else
		{
			printf("最大値は%dです\n", su2);
		}
		break;
	case 'S':
	case 's':
		if (su1 <= su2)
		{
			printf("最小値は%dです\n", su1);
		}
		else
		{
			printf("最小値は%dです\n", su2);
		}
		break;
	case 'G':
	case 'g':
		printf("合計は%dです\n", su1 + su2);
		break;

	case 'H':
	case 'h':
		printf("合計は%.2fです\n", (su1 + su2) / 2.0);
		break;
	default:
		printf("エラー");
		break;
	}
}