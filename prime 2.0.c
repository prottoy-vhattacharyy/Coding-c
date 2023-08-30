#include<stdio.h>
int prime(int a){
	if (a==1){return 0;}
   else if(a==2){return 1;}
   else {
   for(int i=2;i<a;i++){
   	if(a%i==0){
       
       	return 0;
       }
   }
   return 1;
   }

}
int main()
{
	int c=0;
	/*int a,r;
    scanf("%d",&a);
    r=prime(a);
   //r=0?printf("non prime"):printf("prime");
    if(r==0){printf("non prime");}
    else{printf("prime");}*/
    for(int i=1;i<=100;i++){
    if(prime(i)==1){
    printf("%d  ",i);
    c++;
    }
    }
    printf("\ntotal=%d",c);
    return 0;
}