#include<stdio.h>
void display(int a);
main()
{
	int a;
	printf("data?:");
	scanf("%d", &a);
	display(a);
}
//�֐�display�̋L�q
void display(int a)
{
	printf("���̓f�[�^=%d\n", a);
	return;
}