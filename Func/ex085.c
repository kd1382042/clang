#include<stdio.h>
void str_cat(char *a, char *b);
main()
{
	char a[256], b[256];
	printf("”z—ña:");
	gets(a);
	printf("”z—ñb:");
	gets(b);
	str_cat(a, b);
	printf("‡‘Ì ”z—ña:%s\n", a);
}
void str_cat(char a[256], char b[256])
{
	int i, j;
	for (i = 0; *(a + i) != '\0'; i++);
	for (j = 0; *(a + i) = *(b + j); i++, j++);
	return;
}