//write a program in c to print square and cube upto that number from 1.
//
 #include<stdio.h>
int main ()
{
	float num ,sq, cube,i;
	printf("enter the value till sq and cube you required\n");
	scanf("%f",&num);
	for(i=1;i<=num;i++)
	{
		sq = i*i;
		cube = i*i*i;
		printf("square is : %f\t cube is : %f\n",sq,cube);
	}
	return 0;
}

