#include<stdio.h>
main()
{
	int h, m, s;
	printf("5000�ȓ��ŕb��������Ă�");
	scanf("%d", &s);
	if (s>=0) {
		if (s <= 5000)
		{
			h = s / 3600;
			s = s % 3600;
			m = s / 60;
			s = s % 60;
			printf("%d����%d��%d�b\n", h, m, s);
		}
		else
		{
			printf("���̓G���[5000�ȓ��ɂ��Ă�\n");
		}
	}
	else 
	{
		printf("�}�C�i�X�̓G���[����\n");
	}
}