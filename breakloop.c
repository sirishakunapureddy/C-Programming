#include <stdio.h>
int main()
{
	int i;
	for(i=1;i<=100;i+=10)
	{
		printf("%d ",i);
		if(i%9==0)
		{
			break;
		}
	}
}
