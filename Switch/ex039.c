#include<stdio.h>
main()
	{
		int su1,su2;
	char sh;
	printf("���������:");
	scanf("%c", &sh);
	printf("���������:");
	scanf("%d%d",&su1, &su2);
	switch (sh)
	{
	case 'D':
	case 'd':
		if (su1 >= su2)
		{
			printf("�ő�l��%d�ł�\n", su1);
		}
		else
		{
			printf("�ő�l��%d�ł�\n", su2);
		}
		break;
	case 'S':
	case 's':
		if (su1 <= su2)
		{
			printf("�ŏ��l��%d�ł�\n", su1);
		}
		else
		{
			printf("�ŏ��l��%d�ł�\n", su2);
		}
		break;
	case 'G':
	case 'g':
		printf("���v��%d�ł�\n", su1 + su2);
		break;

	case 'H':
	case 'h':
		printf("���v��%.2f�ł�\n", (su1 + su2) / 2.0);
		break;
	default:
		printf("�G���[");
		break;
	}
}