#include <stdio.h>
int main()
{
//	先输入一个时间 
	int bjt = 0;
	scanf("%d",&bjt);
	int hour = bjt / 100;
	int min  = bjt % 100;
	if (hour >= 8)
		hour = hour - 8;
	else
		hour = hour + 24 - 8;
	printf("%d",hour * 100 + min);
	return 0;
}
