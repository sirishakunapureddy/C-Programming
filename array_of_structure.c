#include <stdio.h>
struct student{
	char name[20];
	int age;
};
typedef struct student stu;
int main()
{
	stu arr[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter name of the student %d: ",i+1);
		scanf("%s",arr[i].name);
		printf("Entre age of the student %d: ",i+1);
		scanf("%d",&arr[i].age);
	}
	printf("Name\tAge\n----------------\n");
	for(i=0;i<3;i++)
	{
		printf("%s\t%d\n",arr[i].name,arr[i].age);
	}
}
