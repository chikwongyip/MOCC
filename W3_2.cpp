#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d" , &n);
	for(int i = 1; i <= n; i++)
	{
		int rest = i % 2;
		if( rest > 0)
			if((( n - i ) == 1) || ( n - i ) == 0 )
				printf("%d",i);
			else
				printf("%d ",i);
	}
	return 0;
}
