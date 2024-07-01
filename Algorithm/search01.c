#include<stdio.h>
main()
{
	int i, s, data[] = {10,5,30,77,16,3,47,29,37,39};
	printf("’Tõ’l‚ğ“ü—Í;");
	scanf("%d", &s);
	for (i = 0; i < 10; i++)
	{
		if (s == data[i])
		{
			break;
		}
	}
	if (i >= 10)
	{
		printf("‚¾‚ß‚¾‚Á‚½‚æc\n");
	}
	else
	{
		printf("%d‰ñ–Ú‚ÅŒ©‚Â‚¯‚½‚ñ‚¾‚æ!\n", i+1);
	}
}