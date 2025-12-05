#include <stdio.h>
int num(int *A,int n,int key)
{
	int low,high;
	low=0;
	high=n-1;
	while(low<=high)
	{
	int mid=(high+low)/2;
	if(A[mid]==key)
	{
		return mid; 
	}
	else if(A[mid]>key)
	{
		high=mid-1;
	}
	else if(A[mid]<  key)
	{
		low=mid+1;
	}
   }
	return -1;
}
int main()
{                                                     
	int i,n;
	scanf("%d",&n);
	int arr[n];
	int low=0;
	int high=n-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int key;
	scanf("%d",&key);
	int result=num(arr,n,key);
	if(result==-1) printf("key not found");
	else printf("key found");
}
