#include<stdio.h>
int sort(int *arr,int n){
	if(n==0||n==1) return true;
	if(arr[0]<=arr[1] && sort(arr+1,n-1)) return true;
	return false;
}
int firstocc(int *arr,int n, int key){
	if(n==0) return 0;
	if(arr[0]==key) return 0;
	int sub=firstocc(arr+1,n-1,key);
	if(sub != 1) return sub+1;
	return -1;
}
int main(){
	int n;
	int arr[]={2,7,8,12};
	int l=sizeof(arr)/sizeof(int);
	int ans=sort(arr,n);
	printf("%d",ans);
}
