#include<stdio.h>
main()
{
	int su,a;
	printf("数を入力:");
	scanf("%d", &su);
	a=su / 10;
	switch (a)
	{
	case 1:
		printf("10点台です\n");
		break;
	case 2:
		printf("20点台です\n");
		break;
	case 3:
		printf("30点台です\n");
		break;
	case 4:
		printf("40点台です\n");
		break;
	default:
		printf("エラー:10～49でお願いします");
		break;
	}
}