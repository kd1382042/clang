#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int su, i,count=0;
	printf("1�`1000�̒��ł�����̐�����͂��Ă�������\n");
	srand(time(0));
	rand();
	su = rand() % 1000 + 1;
	do 
	{
		printf("������̐���?:");
		scanf("%d", &i);
		if (i > su)
		{
			printf("��������傫���˂�\n");
		}
		if (i < su)
		{
			printf("�������菬�����˂�\n");
		}
		count++;
		printf("\n");
	} while (i != su);

	printf("���߂łƂ�!%d��Ő�������\n", count);
}