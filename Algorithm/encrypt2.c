#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int i,k[20],n;
	printf("20���ȓ��ňÍ�������������������:");
	scanf("%s", &s[0]);
	srand(time(0));
	rand();
	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
	}
	printf("�Í�����:%s\n" ,&s[0]);
	for (n = 0; n < i; n++) {
		printf("%d\n", k[n]);
	}
	printf("�Í����L�[:", k[n]);
}