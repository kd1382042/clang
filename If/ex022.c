#include<stdio.h>
main()
{
	int no;
	printf("生まれた年を西暦でどうぞ:");
	scanf("%d", &no);
	if (no < 1989)
	{
		printf("昭和以前です");
	}
	else
	{
		printf("平成生まれです");
	}
}