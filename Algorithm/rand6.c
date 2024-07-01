#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int teki,i;
	printf("じゃんけん　パー:1 チョキ:2 グー:3 :");
	scanf("%d", &i);
	srand(time(0));
	rand();
	teki = rand() % 3 + 1;
	if (i == 1)printf("プレイヤー:パー\n");
	if (i == 2)printf("プレイヤー:チョキ\n");
	if (i == 3)printf("プレイヤー:グー\n");
	if (teki == 1)printf("CPU:パー\n");
	if (teki == 2)printf("CPU:チョキ\n");
	if (teki == 3)printf("CPU:グー\n");


	if(i-teki==1||i-teki==-2)
	{
		printf("You WIN\n");
	}
	else
	{
		if (i - teki == 0)
		{
			printf("引き分け　平和だね\n");
		}
		else
		{
			printf("You LOSE\n");
		}
	}
}