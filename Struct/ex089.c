#include<stdio.h>
#include<stdlib.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile people;
	printf("名前を入力:");
	scanf("%s", people.name);
	printf("生年月日を空白で区切って入力:");
	scanf("%d%d%d", &people.birth[0],
		& people.birth[1],
		& people.birth[2]);
	printf("血液型を入力:");
	scanf("%s", &people.blood);
	printf("%s--", people.name);
	printf("%d年%02d月%02d日生まれ　",
		people.birth[0],
		people.birth[1],
		people.birth[2]);
	printf("血液型-%s型\n", people.blood);
}