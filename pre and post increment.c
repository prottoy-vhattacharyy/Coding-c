#include<stdio.h>

int main()
{
	//pre increment 
    int a=1;
    int b=++a;
    printf("a=%i   b=%i",a,b);
    
    //post increment
    int c=1;
    int d=c++;
    printf("\nc=%i   d=%i",c,d);
    return 0;
}