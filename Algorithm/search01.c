#include<stdio.h>
main()
{
	int i, s, data[] = {10,5,30,77,16,3,47,29,37,39};
	printf("�T���l�����;");
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
		printf("���߂�������c\n");
	}
	else
	{
		printf("%d��ڂŌ������񂾂�!\n", i+1);
	}
}