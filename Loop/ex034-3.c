#include<stdio.h>
main()
{
	int i,num,cnt=0;
	printf("�������:");
	scanf("%d", &num);
	do
	{
		i = 0;
		do {
			printf("*");
			i++;
		} while (i <= cnt);
		printf("\n");
		cnt++;
	}
	while (i < num);
}