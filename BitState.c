#include<stdio.h>
enum BitState
{
	Base = 0,			//通常
	Poizon = 1 << 0,	//言いたいことも言えないこんな世の中
	Sleep = 1 << 1,		//ピノコニーなう
	Paralsis = 1 << 2,	//まひるみ＆S半減
	Burn = 1 << 3,		//焦土を夢に見た
	AtkUp = 1 << 4,		//ふとうのけん
	AtkDown = 1 << 5	//いかく
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
	printf("****現在の状態****\n");
	if (s & Poizon) {
		printf("\n毒です\n");
	}
	if (s & Sleep) {
		printf("\nおねんねです\n");
	}
	if (s & Paralsis) {
		printf("\n痺れてます\n");
	}
	if (s & Burn) {
		printf("\n炎上してます\n");
	}
	if (s & AtkUp) {
		printf("\n攻撃力上昇、本気です\n");
	}
	if (s & AtkDown) {
		printf("\n顔が濡れて力がでないです\n");
	}
	if (s == Base)
	{
		printf("大丈夫だ。問題ない\n");
	}
	printf("*****************\n");
}
void ChangeFlag(UINT* s) {
	int a;
	while (1)
	{
		printf("どの状態にしますか?\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃上昇 6:攻撃下降 0;完了:");
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
		printf("どれを治す?\n");
		printf("1:毒 2 : 睡眠 3 : 麻痺 4 : 火傷 5 : 攻撃上昇 6 : 攻撃下降 0; 完了:");
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