#include <stdio.h>
int main()
{
	int n;
	int factor = 1;
//	int i;
	printf("��������ֵ��\n");
	scanf("%d",&n);
	
	for ( int i=1;i<=n;i++)
	{
		factor = factor * i;
		
	}
	printf("�׳�ֵ��%d \n",factor);
	
	for (int i = n; i < 0; i--)
	{
		factor = factor * i;
	}
	printf("%d",factor);
	return 0;
}
