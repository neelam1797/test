#include<stdio.h>
int main () 
{
	int a, b ;
	printf("enter first value\n");
	scanf("%d",&a);
	printf("enter second value\n");
	scanf("%d",&b);
	if(a>b) {
		printf("%d is greater than %d\n",a,b);

 }
	else
	{
	
		printf("%d is greater than %d\n",b,a);
	}
	return 0;
}
