#include<stdio.h>
main()
{
	char moji;
	printf("�ꕶ������:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		printf("�啶���ł�\n");
	}
	else
	{
		printf("���̑��̕����ł�\n");
	}
}