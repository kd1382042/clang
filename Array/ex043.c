#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;

	i = 0;
	while (data[i] != '\0')
	{
		i++;
	}
	printf("•¶Žš—ñ:%s\n", &data[0]);
	printf("•¶Žš—ñ‚Í%d•¶Žš\n", i);
}