#include<stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,39 },i,s;
	printf("�T���l�����:");
	scanf("%d", &s);
	
	for (i = 0, d[10] = s; s != d[i]; i++);
	if (i == 10)
	{
		printf("���߂�������c\n");
	}
	else
	{
		printf("%d��ڂŌ������񂾂�!\n", i + 1);
	}
}