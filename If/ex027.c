#include<stdio.h>
main()
{
	char moji;
	printf("���������:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji<='Z')
	{
		printf("�ϊ�����:%c\n", moji + 0x20);
	}
	else
	{
		if (moji >='a' && moji<='z')
		{
			printf("�ϊ�����:%c\n", moji - 0x20);
		}
		else
		{
			printf("�G���[:�A���t�@�x�b�g�ł��肢���܂�\n");
		}
	}
}