#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int teki,i;
	printf("����񂯂�@�p�[:1 �`���L:2 �O�[:3 :");
	scanf("%d", &i);
	srand(time(0));
	rand();
	teki = rand() % 3 + 1;
	if (i == 1)printf("�v���C���[:�p�[\n");
	if (i == 2)printf("�v���C���[:�`���L\n");
	if (i == 3)printf("�v���C���[:�O�[\n");
	if (teki == 1)printf("CPU:�p�[\n");
	if (teki == 2)printf("CPU:�`���L\n");
	if (teki == 3)printf("CPU:�O�[\n");


	if(i-teki==1||i-teki==-2)
	{
		printf("You WIN\n");
	}
	else
	{
		if (i - teki == 0)
		{
			printf("���������@���a����\n");
		}
		else
		{
			printf("You LOSE\n");
		}
	}
}