#include<stdio.h>
#include<stdlib.h>
struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile 
{
	char name[20];
	struct day birth;
	char blood[5];
};
main()
{
	struct profile people[5] = {
		{"アルトリア",			{914,7,24},"A"},
		{"アルトリアランサー",	{900,7,24},"A"},
		{"アルトリアオルタ",	{2004,2,24},"A"},
		{"アルトリアリリィ",	{2016,7,24},"A"},
		{"アルトリアキャスター",{2017,12,12},"O"}
	};
	struct profile* p;
	int i;
	p = people;
	for(i= 0; i < 5; i++)
	{
		if (p->birth.tuki == 2)
		{
			printf("%s--", p->name);
			printf("%04d年%02d月%02d日生まれ　",p->birth.nen,p->birth.tuki, p->birth.hi);
			printf("血液型-%s型\n", p->blood);
		}
		p++;
	}
}