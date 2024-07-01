#include<stdio.h>
enum BitState
{
	Base = 0,			//�ʏ�
	Poizon = 1 << 0,	//�����������Ƃ������Ȃ�����Ȑ��̒�
	Sleep = 1 << 1,		//�s�m�R�j�[�Ȃ�
	Paralsis = 1 << 2,	//�܂Ђ�݁�S����
	Burn = 1 << 3,		//�œy�𖲂Ɍ���
	AtkUp = 1 << 4,		//�ӂƂ��̂���
	AtkDown = 1 << 5	//������
};

typedef unsigned int UINT;
void DisPlayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Base;
	DisPlayStatus(MyState);
	ChangeFlag(&MyState);
	DisPlayStatus(MyState);
	ClearFlag(&MyState);
	DisPlayStatus(MyState);
}

void DisPlayStatus(UINT s) 
{
	printf("****���݂̏��****\n");
	if (s & Poizon) {
		printf("\n�łł�\n");
	}
	if (s & Sleep) {
		printf("\n���˂�˂ł�\n");
	}
	if (s & Paralsis) {
		printf("\nჂ�Ă܂�\n");
	}
	if (s & Burn) {
		printf("\n���サ�Ă܂�\n");
	}
	if (s & AtkUp) {
		printf("\n�U���͏㏸�A�{�C�ł�\n");
	}
	if (s & AtkDown) {
		printf("\n�炪�G��ė͂��łȂ��ł�\n");
	}
	if (s == Base)
	{
		printf("���v���B���Ȃ�\n");
	}
	printf("*****************\n");
}
void ChangeFlag(UINT* s) {
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃɂ��܂���?\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���㏸ 6:�U�����~ 0;����:");
		scanf("%d", &a);
		if (a == 0) { break; }
		else {
			switch (a)
			{
			case 1:
				*s |= Poizon;
				break;
			case 2:
				*s |= Sleep;
				break;
			case 3:
				*s |= Paralsis;
				break;
			case 4:
				*s |= Burn;
				break;
			case 5:
				*s |= AtkUp;
				break;
			case 6:
				*s |= AtkDown;
				break;
			default:
				break;
			}
		}
	}
}
void ClearFlag(UINT* s)
{
	int a;
	while (1) {
		printf("�ǂ������?\n");
		printf("1:�� 2 : ���� 3 : ��� 4 : �Ώ� 5 : �U���㏸ 6 : �U�����~ 0; ����:");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		else switch (a)
		{
		case 1:
			*s &= ~Poizon;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralsis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		default:
			break;
		}
	}
}