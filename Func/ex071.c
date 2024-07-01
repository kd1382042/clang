#include<stdio.h>
int gokei(int a, int b,int c);//プロトタイプ宣言
float heikin(int a, int b, int c);
main()
{
	int a, b, c, go;
	float hei;
	printf("整数を3つ入力");
	scanf("%d%d%d", &a, &b, &c);
	go = gokei(a, b, c);
	printf("合計は%dです\n", go);
	hei = heikin(a, b, c);
	printf("平均は%.2fです\n", (float)hei);
}
int gokei(int a, int b,int c)
{
	int g;
	g = a + b + c;
	return g;
}
float heikin(int a, int b, int c)
{
	float h;
	h = (a + b + c) / 3.0;
	return h;
}