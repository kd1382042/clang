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
		{"�A���g���A",			{914,7,24},"A"},
		{"�A���g���A�����T�[",	{900,7,24},"A"},
		{"�A���g���A�I���^",	{2004,2,24},"A"},
		{"�A���g���A�����B",	{2016,7,24},"A"},
		{"�A���g���A�L���X�^�[",{2017,12,12},"O"}
	};
	struct profile* p;
	int i;
	p = people;
	for(i= 0; i < 5; i++)
	{
		if (p->birth.tuki == 2)
		{
			printf("%s--", p->name);
			printf("%04d�N%02d��%02d�����܂�@",p->birth.nen,p->birth.tuki, p->birth.hi);
			printf("���t�^-%s�^\n", p->blood);
		}
		p++;
	}
}