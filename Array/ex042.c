#include<stdio.h>
main()
{
	char deta[] = "Apple";
	int i;
	printf("1文字ずつ表示\n");
	i = 0;
	while (deta[i] != '\0')
	{
		printf("%c", deta[i]);
		i++;
	}
	printf("\n文字列で表示\n");
	printf("%s\n", &deta[0]);
}