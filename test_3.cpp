#include <stdio.h>
int main()
{
	
	for (int i = 10; i > 1; i /= 2)
	{
		printf("%d ", ++i); // i++ �� һ�������� ��i��ֵ����++i ��ֵ�� i+1 
	}
	return 0;
}
