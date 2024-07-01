#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
const int SX = 1;
const int SY = 1;
const int GX = 8;
const int GY = 1;
int map[7][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,1,0,0,0,1,1},
	{1,0,0,1,0,0,0,1,0,1},
	{1,1,0,1,0,1,0,1,0,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1}
},
#define STACKSIZE 46
int queue[STACKSIZE];
int head = 0;
int tail = 0;
void DrauMaze(void)
{
	int i, j;
	for (i = 0, i < 7; i++)
	{
		for (j = 0; j < 10; j++)
		{

		}
	}
}