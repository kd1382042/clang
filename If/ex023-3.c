#include<stdio.h>
main()
{
	int d1, d2, flg;
	printf("演算子をえらんでください 1和,２差,３積,４商:");
		scanf("%d", &flg);
		if(flg<4){
		printf("2つの整数を入力してください");
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
			printf("エラー:１〜４で入力してください");
	}
}