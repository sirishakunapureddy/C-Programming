#include <stdio.h>
int binary_rec(int *a,int n,int key,int low,int high){
	if(low>high){
		return -1;
	}
	else{
	 int mid=(low+high)/2;
        if(a[mid]==key) return mid;
	    else if(a[mid]>key)
		return binary_rec(a,n,key,low,mid-1);
	    else
		return binary_rec(a,n,key,mid+1,high);
}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int key;
	scanf("%d",&key);
	int arr[n];
	for(i=0;i<n;i++){
	    scanf("%d",&arr[i]);	
	}
	printf("%d",binary_rec(arr,n,0,n-1,key));
}
