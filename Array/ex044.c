#include<stdio.h>
main()
{
	char moji1[80], moji2[80], w[80];
	int i=0;
	printf("������1�����:");
	scanf("%s", &moji1[0]);
	printf("������2�����:");
	scanf("%s", &moji2[0]);
	printf("moji1=%s\tmoji2=%s\n", moji1, moji2);
	while (moji1[i] != '\0');
	{
		w[i] = moji1[i];
		i++;
	}
	w[i] = '\0';
	i = 0;
	while (moji2[i] != '\0');
	{
		moji1[i] = moji2[i];
		i++;
	}
	moji1[i] = '\0';
	i = 0;
	while (moji2[i] != '\0');
	{
		moji2[i] = w[i];
		i++;
	}
	moji2[i] = '\0';
	printf("����ւ����\n");
	printf("moji1=%s\tmoji2=%s\n", moji1, moji2);
}