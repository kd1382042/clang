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
	printf("–¼‘O‚ğ“ü—Í:");
	scanf("%s", people.name);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d", &people.birth[0],
		& people.birth[1],
		& people.birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
	scanf("%s", &people.blood);
	printf("%s--", people.name);
	printf("%d”N%02dŒ%02d“ú¶‚Ü‚ê@",
		people.birth[0],
		people.birth[1],
		people.birth[2]);
	printf("ŒŒ‰tŒ^-%sŒ^\n", people.blood);
}