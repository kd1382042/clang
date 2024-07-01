#include<stdio.h>
main()
{
	char deta[] = "Apple";
	int i;
	printf("1•¶Žš‚¸‚Â•\Ž¦\n");
	i = 0;
	while (deta[i] != '\0')
	{
		printf("%c", deta[i]);
		i++;
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n");
	printf("%s\n", &deta[0]);
}