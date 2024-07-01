#include<stdio.h>
int tbl_max(int *array,int size);
int tbl_min(int *array,int size);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 },max,min;
	printf("Å‘å’l=%d\n", tbl_max(data, 8));
	printf("Å¬’l=%d\n", tbl_min(data, 8));
}
int tbl_max(int *array,int size)
{
	int max,i;
	for (max = *array, i = 1; i < size; i++)
	{
		if (max < *(array + i))
		{
			max = *(array + i);
		}
	}
	return max;
}
int tbl_min(int *array,int size)
{
	int min, i;
	for (min = *array, i = 1; i < size; i++)
	{
		if (min > *(array + i))
		{
			min = *(array + i);
		}
	}
	return min;
}