#include<stdio.h>
#include<stdlib.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile people[5];
	struct profile* p;
	int i;
	p = people;
	for (i = 1; i <= 5; i++)
	{
		printf("%d�l��\n", i);
		printf("���O�����:");
		scanf("%s", p->name);
		printf("���N�������󔒂ŋ�؂��ē���:");
		scanf("%d%d%d", &p->birth[0],&p->birth[1],&p->birth[2]);
		printf("���t�^�����:");
		scanf("%s", p->blood);
		p++;
	}
	p = people;
	for (i = 0; i <= 5; i++)
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%s--", p->name);
			printf("%d�N%02d��%02d�����܂�@", p->birth[0], p->birth[1], p->birth[2]);
			printf("���t�^-%s�^\n", p->blood);
		}
		p++;
	}
}