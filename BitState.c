#include<stdio.h>
enum BitState
{
	Base = 0,			//’Êí
	Poizon = 1 << 0,	//Œ¾‚¢‚½‚¢‚±‚Æ‚àŒ¾‚¦‚È‚¢‚±‚ñ‚È¢‚Ì’†
	Sleep = 1 << 1,		//ƒsƒmƒRƒj[‚È‚¤
	Paralsis = 1 << 2,	//‚Ü‚Ğ‚é‚İ•S”¼Œ¸
	Burn = 1 << 3,		//Å“y‚ğ–²‚ÉŒ©‚½
	AtkUp = 1 << 4,		//‚Ó‚Æ‚¤‚Ì‚¯‚ñ
	AtkDown = 1 << 5	//‚¢‚©‚­
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
	printf("****Œ»İ‚Ìó‘Ô****\n");
	if (s & Poizon) {
		printf("\n“Å‚Å‚·\n");
	}
	if (s & Sleep) {
		printf("\n‚¨‚Ë‚ñ‚Ë‚Å‚·\n");
	}
	if (s & Paralsis) {
		printf("\náƒ‚ê‚Ä‚Ü‚·\n");
	}
	if (s & Burn) {
		printf("\n‰Šã‚µ‚Ä‚Ü‚·\n");
	}
	if (s & AtkUp) {
		printf("\nUŒ‚—Íã¸A–{‹C‚Å‚·\n");
	}
	if (s & AtkDown) {
		printf("\nŠç‚ª”G‚ê‚Ä—Í‚ª‚Å‚È‚¢‚Å‚·\n");
	}
	if (s == Base)
	{
		printf("‘åä•v‚¾B–â‘è‚È‚¢\n");
	}
	printf("*****************\n");
}
void ChangeFlag(UINT* s) {
	int a;
	while (1)
	{
		printf("‚Ç‚Ìó‘Ô‚É‚µ‚Ü‚·‚©?\n");
		printf("1:“Å 2:‡–° 3:–ƒáƒ 4:‰Î 5:UŒ‚ã¸ 6:UŒ‚‰º~ 0;Š®—¹:");
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
		printf("‚Ç‚ê‚ğ¡‚·?\n");
		printf("1:“Å 2 : ‡–° 3 : –ƒáƒ 4 : ‰Î 5 : UŒ‚ã¸ 6 : UŒ‚‰º~ 0; Š®—¹:");
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