#include<stdio.h>
main()
{
	float a[3],gokei;
	int i;
	for (i = 0, gokei = 0; i < 3; i++)
	{
		printf("���������:");
		scanf("%f", &a[i]);
		gokei += a[i];
	}
	printf("���v��%.2f�ł�\n", gokei);
	printf("���ς�%.2f�ł�\n", gokei / 3);
}