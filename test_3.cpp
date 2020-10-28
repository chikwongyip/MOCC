#include <stdio.h>
int main()
{
	for (int i = 10; i > 1; i /= 2)
	{
		printf("%d ", ++i); // i++ 是 一个运算结果 是i的值，而++i 的值是 i+1 
	}
	return 0;
}
