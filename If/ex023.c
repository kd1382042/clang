#include<stdio.h>
main()
{
	int h, m, s;
	printf("5000�ȓ��ŕb��������Ă�");
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
		printf("���̓G���[\n");
	}
	printf("%d����%d��%d�b\n", h, m, s);
}