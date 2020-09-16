#include<stdio.h>
int main() {
	int i,j,k;
	for(k = 1; k<=5; ++k) {          //row loop
		for(i= 1; i<= k; i++) //for space
		{
			printf(" ");
		}
		for(j = 5; j>=k; j--) {    //coloum loop
			printf("* ");
          }
		printf("\n");
	}
	return 0;
}


#if 0
 * * * * * 
  * * * *
   * * *
    * * 
     * 
#endif
