#include <stdio.h>

int main()
{
	int test = 0;
	scanf("%d",&test);
	if((test % 10 ) > 0) 
	{
		printf("%d",test % 10);
		test = test - (test % 10);
	}
	
	if((test % 100) > 0)
	{
		printf("%d",(test % 100) /10);
		test = test - (test % 100);
	}
	
	if((test % 1000) > 0)
	{
		printf("%d",(test % 1000) / 100);
	}
	return 0;
}
