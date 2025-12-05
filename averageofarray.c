#include <stdio.h>
int main()
{
	int n,i,sum=0,dc=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		dc++;
		sum+=arr[i];
	}
	printf("%.2f",(sum*1.0)/(dc));
}
