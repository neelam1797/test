
#include <stdio.h>
int main()
{
	int num = 0;
	int ans = 0;
	int i = 0;
	printf("enter the number factorial: \n");
	scanf("%d",&num);
	ans = num;
	for(i=num-1;i>=1;--i)
	{
	 ans = ans * i;
	}
		printf("factorial of %d is : %d\n",num,ans);
	return 0;
}
