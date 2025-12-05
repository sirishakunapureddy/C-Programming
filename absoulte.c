#include <stdio.h>
int main()
{
	int n,i,sum=0,sum1=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	if(arr[i]%2==0)sum+=arr[i];
	else sum1+=arr[i];}
	int diff=(sum1-sum);
	int d2=sum-sum1;
	if(diff>0)
	{
	    printf("%d",diff);
	}
	else
	{
	    printf("%d",d2);
    }
}
	
