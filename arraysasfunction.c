#include <stdio.h>
void print_squares(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]*a[i]);
	}
}
int main()
{
	int arr[5]={10,20,30,40,50};
	print_squares(arr,5);//calling function
}
	
