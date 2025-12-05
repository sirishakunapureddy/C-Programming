#include <stdio.h>
int main()
{
	int a;
	float b;
	char ch;
	char s[100];
	{
		scanf("%d",&a);
		scanf("%f",&b);
		scanf(" %c",&ch);
		scanf("%s",&s);
	}
	printf("Integer:%d\n",a);
	printf("Float:%.2f\n",b);
	printf("Character:%c\n",ch);
	printf("String:%s",s);
}
