#include<stdio.h>
void shisoku(int x,int y, int* wa, int* sa, int* syo,int *amr);
main()
{
	int a, b, c, d, e, f,g;
	printf("���l?:");
	scanf("%d", &a);
	printf("���l?:");
	scanf("%d", &b);
	shisoku(a, b, &c, &d, &e, &f,&g);
	puts("���l�Ɛ��l�̎l�����Z");
	printf("wa=%d sa=%d seki=%d syou=%d amari=%d\n", c, d, e, f,g);
}
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo, int* amr)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	*amr = x % y;
}