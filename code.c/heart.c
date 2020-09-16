#include<stdio.h>
#include<stdio.h>
int main() {
	int i,j,k;
printf("    *****     *****\n   *******   *******\n *********  *********\n");
	for(k = 1; k<=10; k++) {          //row loop 
		for(i= 1; i<= k; i++) //for space
		{
			printf(" ");
		}
		for(j = 10; j>=k; j--) {    //coloum loop
			printf("**");
          }
		printf("\n");
		++j;
	}
	return 0;
}

#if 0
    *****     *****
   *******   *******
  ********* *********
  *******************
   *****************
    ***************
     *************
      ***********
       *********
        *******
	 *****
	  ***
           *

#endif
