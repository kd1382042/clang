#include<stdio.h>
main()
{
	char s[81];
	int i=0;
	printf("ˆÃ†‰»‚³‚ê‚½•¶š—ñ‚ğ“ü—Í:");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i]--;
	}
	printf("•œŒ³Œã:%s\n", &s[0]);
}