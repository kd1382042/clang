#include<stdio.h>
#include<stdlib.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile people;
	printf("���O�����:");
	scanf("%s", people.name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d", &people.birth[0],
		& people.birth[1],
		& people.birth[2]);
	printf("���t�^�����:");
	scanf("%s", &people.blood);
	printf("%s--", people.name);
	printf("%d�N%02d��%02d�����܂�@",
		people.birth[0],
		people.birth[1],
		people.birth[2]);
	printf("���t�^-%s�^\n", people.blood);
}