#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d",&n);
	int type = n >= 0;
	switch(type)
	{
		case 0:
			n = -1;
			break;
		case 1:
			n = 2 * n; 
			break;
		defaul:
			break; 
	}
	printf("%d",n);
	return 0;
} 
