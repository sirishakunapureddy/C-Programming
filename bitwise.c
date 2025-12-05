#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Bit wise operators:\n");
	printf("Bitwise AND(&)\n%d&%d:%d\n",a,b,a&b);
	printf("Bitwise OR(|)\n%d|%d:%d\n",a,b,a|b);
	printf("Bitwise EX OR(^)\n%d^%d:%d\n",a,b,a^b);
	printf("Bitwise Left shift(<<)\n%d<<%d:%d\n",a,b,a<<b);
	printf("Bitwise Right shift(>>)\n%d>>%d:%d\n",a,b,a>>b);
	return 0;
}
