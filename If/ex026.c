#include<stdio.h>
main()
{
	int m;
	printf("������͂��Ă�������");
	scanf("%d", &m);
	if (m == 2)
	{
		printf("28���ł��B\n");
	}
	else
	{
		if (m == 4 ||m== 6 ||m== 9 ||m== 11)
		{
			printf("30���ł��B\n");
		}
		else
		{
			printf("31���ł��B\n");
		}
	}

}