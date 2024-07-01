#include<stdio.h>
main()
{
	char str[256];

	//連続1行入力のパターン
	while (gets(str) != NULL)
	{
		puts(str);
	}
}