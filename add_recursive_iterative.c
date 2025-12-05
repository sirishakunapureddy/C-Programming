#include <stdio.h>
int add_iterative(int *a,int size){
	int sum=0,i;
	for(i=0;i<size;i++)
	{
		sum+=a[i];
	}
	return sum;
}
int add_recursive(int *a,int i,int size){
	if(i==size){
		return 0;
	}
	return a[i]+add_recursive(a,i+1,size);
}
int main()
{
	int arr[5]={10,20,30,40,50};
	printf("%d\n",add_iterative(arr,5));
	printf("%d",add_recursive(arr,0,5));
}
