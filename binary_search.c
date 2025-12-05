#include<stdio.h>
int binary(int *a,int n,int low,int high,int i,int key){
	if(low>high) return -1;
	else{
		int mid=(low+high)/2;
		if(a[mid]==key) return mid;
		if(a[mid]>key) high=mid-1;
		if(a[mid]<key) low=mid+1;
    }
     binary(a,n,low,high,i+1,key);
}
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int low=0;
	int high=n-1;
	int key;
	scanf("%d",&key);
	int res=binary(arr,n,low,high,0,key);
	if(res==-1) printf("key not found");
	else printf("found");
}
