#include<stdio.h>

typedef struct {
	char name[20];
	int type;
	int use_mp;
	int effect;
}Skill;

typedef struct {
	char name[20];
	int hp;
	int atk;
	int def;
	UINT state;
} Spec;
typedef struct {
	Spec sp;
	int maxhp;
	int mp;
	Skill skl[Skil_Num];
}Chara;
typedef struct {
	Spec sp;
	int rate;
}Mob;

main()