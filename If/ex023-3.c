#include<stdio.h>
main()
{
	int d1, d2, flg;
	printf("‰‰Zq‚ğ‚¦‚ç‚ñ‚Å‚­‚¾‚³‚¢ 1˜a,‚Q·,‚RÏ,‚S¤:");
		scanf("%d", &flg);
		if(flg<4){
		printf("2‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
		scanf("%d%d", &d1, &d2);
		if(flg==1)
		{ 
			printf("%d\n", d1 + d2);
	}
		else
		{
			if (flg == 2) {
				printf("%d\n", d1 - d2);
			}
			else {
				if (flg == 3) {
					printf("%d\n", d1 * d2);
				}
				else
				{
					if (flg == 4)
					{
						printf("%d\n", d1 / d2);
					}
				}
				}
			}
		}
	else {
			printf("ƒGƒ‰[:‚P`‚S‚Å“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	}
}