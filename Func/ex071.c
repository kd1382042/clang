#include<stdio.h>
int gokei(int a, int b,int c);//�v���g�^�C�v�錾
float heikin(int a, int b, int c);
main()
{
	int a, b, c, go;
	float hei;
	printf("������3����");
	scanf("%d%d%d", &a, &b, &c);
	go = gokei(a, b, c);
	printf("���v��%d�ł�\n", go);
	hei = heikin(a, b, c);
	printf("���ς�%.2f�ł�\n", (float)hei);
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