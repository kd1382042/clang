#include<stdio.h>
main()
{
	char moji;
	printf("一文字入力:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		printf("大文字です\n");
	}
	else
	{
		printf("その他の文字です\n");
	}
}