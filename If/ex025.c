#include<stdio.h>
main()
{
	char moji;
	printf("一文字入力：");
	scanf("%c", &moji);
		if (moji >= 'A' && moji <= 'Z' || moji >= 'a' && moji <= 'z')
		{
			printf("アルファベット\n");
		}
		else
		{
			if (moji >= '0' && moji <= '9')
			{
				printf("数字\n");
			}
			else
			{
				printf("その他の文字です\n");
			}
		}
}