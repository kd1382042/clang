#include<stdio.h>
main()
{
	int su,a;
	printf("�������:");
	scanf("%d", &su);
	a=su / 10;
	switch (a)
	{
	case 1:
		printf("10�_��ł�\n");
		break;
	case 2:
		printf("20�_��ł�\n");
		break;
	case 3:
		printf("30�_��ł�\n");
		break;
	case 4:
		printf("40�_��ł�\n");
		break;
	default:
		printf("�G���[:10�`49�ł��肢���܂�");
		break;
	}
}