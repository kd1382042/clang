#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;

	i = 0;
	while (data[i] != '\0')
	{
		i++;
	}
	printf("文字列:%s\n", &data[0]);
	printf("文字列は%d文字\n", i);
}