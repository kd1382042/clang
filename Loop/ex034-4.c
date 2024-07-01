#include<stdio.h>
main()
{
	int i=0,num,j;
	printf("”‚ğ“ü—Í:");
	scanf("%d", &num);
	do
	{
		j = 0;
			do 
			{
				printf(" ");
					j++;
			} while (j<num-i);
			j = 0;
		do{
			printf("*");
			j++;
		} while (j <= i);
		printf("\n");
		i++;
	}
	while (i < num);
}