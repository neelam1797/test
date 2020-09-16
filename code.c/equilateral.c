#include<stdio.h>
int main() {
	int i,j,k;
	for(k = 1; k<=5; ++k) {          //row loop
		for(i= 1; i<= (5-k); i++)
		{
			printf(" ");
		}
		for(j = 1; j<=k; j++) {    //coloum loop
			printf("* ");
          }
		printf("\n");
	}
	return 0;
}


#if 0
			 *
			* *
		       * * *
		      * * * *
		     * * * * *
#endif
