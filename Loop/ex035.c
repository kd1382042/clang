#include<stdio.h>
main()
{
	int k=0, ia;
	while (1)
	{
		printf("��������:");
		scanf("%d", &ia);
		if (ia == -999)break;
		k += ia;
	}
	printf("���v=%d", k);
}