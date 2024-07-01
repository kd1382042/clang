#include<stdio.h>
#include<stdlib.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile people[5];
	struct profile* p;
	int i;
	p = people;
	for (i = 1; i <= 5; i++)
	{
		printf("%dl–Ú\n", i);
		printf("–¼‘O‚ð“ü—Í:");
		scanf("%s", p->name);
		printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
		scanf("%d%d%d", &p->birth[0],&p->birth[1],&p->birth[2]);
		printf("ŒŒ‰tŒ^‚ð“ü—Í:");
		scanf("%s", p->blood);
		p++;
	}
	p = people;
	for (i = 0; i <= 5; i++)
	{
		if (strcmp(p->blood, "A") == 0)
		{
			printf("%s--", p->name);
			printf("%d”N%02dŒŽ%02d“ú¶‚Ü‚ê@", p->birth[0], p->birth[1], p->birth[2]);
			printf("ŒŒ‰tŒ^-%sŒ^\n", p->blood);
		}
		p++;
	}
}