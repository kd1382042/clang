#include<stdio.h>
main()
{
	int k=0, ia;
	while (1)
	{
		printf("数を入れて:");
		scanf("%d", &ia);
		if (ia == -999)break;
		k += ia;
	}
	printf("合計=%d", k);
}