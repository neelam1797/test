#include<stdio.h>
int main() {
	int i,j;
	for(i = 1; i<=5; ++i) {          //row loop
		for(j = 1; j<=i; j++) {    //coloum loop
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
			* * * * */
#endif
