#include<stdio.h>
main()
{
	char s[81];
	int i=0;
	printf("暗号化したい文字列を入力:");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i]++;
	}
	printf("暗号化後:%s\n", &s[0]);
}