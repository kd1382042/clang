#include<stdio.h>
main()
{
	int h, m, s;
	printf("5000ˆÈ“à‚Å•b”‚ğ‚¢‚ê‚Ä‚Ë");
	scanf("%d", &s);

	if (s <= 5000)
	{
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
	}
	else
	{
		printf("“ü—ÍƒGƒ‰[\n");
	}
	printf("%dŠÔ%d•ª%d•b\n", h, m, s);
}