#include <stdio.h>
int main()
{
	int a,i;//size
	scanf("%d",&a);//reading size of array
	int arr[a];//arr is the name of the array //int-->datatype//a--> num of int
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++)
	printf("%d ",arr[i]*arr[i]);
}
