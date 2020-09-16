#include <stdio.h>
int main()
{
	float ans = 0;
	int i = 0;
	for(i=1;i<=10;++i)
	{
	 ans = ans + i;
	}
		printf("sum of first 10 number is: %.0f \n average is : %.1f\n",ans,ans/10);
	return 0;
}
