#include<stdio.h>
main()
{
	float a[3],gokei;
	int i;
	for (i = 0, gokei = 0; i < 3; i++)
	{
		printf("実数を入力:");
		scanf("%f", &a[i]);
		gokei += a[i];
	}
	printf("合計は%.2fです\n", gokei);
	printf("平均は%.2fです\n", gokei / 3);
}