#include<stdio.h>
main()
{
	int a = 5;//宣言時に初期化することもできる
	float b;
	printf("a/2=%d\n", a / 2);
	b = a / 2;
	printf("a/2=%f\n", b);
	printf("a/2=%f\n", a / 2.0);
}