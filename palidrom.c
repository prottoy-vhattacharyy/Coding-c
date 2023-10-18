#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int org=N;
    int rem,r=0;
    for(int i=0;N!=0;i++){
        rem=N%10;
        r=r*10+rem;
        N=N/10;
    }
    if(org==r) printf("%d is a pallidrome",org);
    else printf("%d is not a pallidrome",org);
}
