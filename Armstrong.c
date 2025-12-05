#include <stdio.h>      //armstrong number or not
#include <math.h>
int main()
{
	int n,t,cnt=0,sum=0;
	scanf("%d",&n);
	t=n;
	cnt=log10(n)+1;
	while(t>0)
	{
		int digit=t%10;
		sum += pow(digit,cnt);
		t=t/10;
	}
	if(sum==n)
	printf("It is an Armstrong Number");
	else 
	printf("It is not an Armstrong Number"); 
}
