#include<stdio.h>
main()
{
	int d1, d2, flg;
	printf("���Z�q�������ł������� 1�a,�Q��,�R��,�S��:");
		scanf("%d", &flg);
		if(flg<4){
		printf("2�̐�������͂��Ă�������");
		scanf("%d%d", &d1, &d2);
		if(flg==1)
		{ 
			printf("%d\n", d1 + d2);
	}
		else
		{
			if (flg == 2) {
				printf("%d\n", d1 - d2);
			}
			else {
				if (flg == 3) {
					printf("%d\n", d1 * d2);
				}
				else
				{
					if (flg == 4)
					{
						printf("%d\n", d1 / d2);
					}
				}
				}
			}
		}
	else {
			printf("�G���[:�P�`�S�œ��͂��Ă�������");
	}
}