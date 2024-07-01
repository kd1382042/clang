#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int i,k[20],n;
	printf("20šˆÈ“à‚ÅˆÃ†‰»‚µ‚½‚¢•¶š—ñ‚ğ“ü—Í:");
	scanf("%s", &s[0]);
	srand(time(0));
	rand();
	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
	}
	printf("ˆÃ†‰»Œã:%s\n" ,&s[0]);
	for (n = 0; n < i; n++) {
		printf("%d\n", k[n]);
	}
	printf("ˆÃ†‰»ƒL[:", k[n]);
}