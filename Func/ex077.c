#include<stdio.h>
void minmax(int d1,int d2,int d3,int *min, int *max);
main()
{
	int d1,d2,d3,min, max;
	printf("������3����:");
	scanf("%d%d%d", &d1,&d2,&d3);
	minmax(d1,d2,d3, &min, &max);
	printf("�ŏ�=%d �ő�=%d\n", min,max);
}
void minmax(int d1,int d2,int d3, int* min, int* max)
{
	/*if (d1 > d2 && d2 > d3) { *max = d1; *min = d3; }
	if (d1 > d3 && d3 > d2) { *max = d1; *min = d2; }
	if (d2 > d1 && d1 > d3) { *max = d2; *min = d3; }
	if (d2 > d3 && d3 > d1) { *max = d2; *min = d1; }
	if (d3 > d2 && d2 > d1) { *max = d3; *min = d1; }
	if (d3 > d1 && d1 > d2) { *max = d3; *min = d2; }*/
	*max = (d1 > d2) ? (d1 > d3 ? d1 : d3) : (d2 > d3 ? d2 : d3);
	*min = (d1 < d2) ? (d1 < d3 ? d1 : d3) : (d2 < d3 ? d2 : d3);
}