#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kuzi,i;
	srand(time(0));
	rand();
	kuzi = rand() % 5 + 1;
	printf("������A�킽���̉^���A�������c ?\n");
	printf("���Ȃ��̉^����:");
	for (i = 0; i < kuzi; i++)
	{
		printf("��");
	}
}