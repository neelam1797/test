#include <stdio.h>
void main()
{
char arr[10];
int i;
int count=0;
//printf("Enter the Character: \n");
for(i = 0;i<=10;++i) 
{
printf("Enter the Character: \n");
gets(arr[i]);
/*
if(a=='a' || a == 'e' || a == 'i'|| a == 'o' || a == 'u' )
{
	count++ ;
}*/
}

printf("NO of Vowel is: %d\n",count);
}
