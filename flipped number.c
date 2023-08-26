#include<stdio.h>
#include<time.h>
int main()
{
    long long int a,num;
    scanf("%lld",&num);
    for(a=num;a>0;){
   	printf("\na=%lld\n",a);
    	long long int i=a%10;
    	printf("i=%lld  ",i);
    	a=a/10;
    
    	sleep(1);
    }
   
    return 0;
}