#include<stdio.h>
main()
{
	char s[81];
	int i=0;
	printf("ˆÃ†‰»‚µ‚½‚¢•¶š—ñ‚ğ“ü—Í:");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i]++;
	}
	printf("ˆÃ†‰»Œã:%s\n", &s[0]);
}