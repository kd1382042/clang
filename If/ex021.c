﻿#include<stdio.h>
main()
{
	int no;
	printf("整数を入力してね:");
	scanf("%d", &no);
	if (no < 0) {
		printf("入力値はマイナスです\n");
	}
	else {
		printf("入力値はプラスです\n");
	}
}