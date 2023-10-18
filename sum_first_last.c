#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i;
    int s=N%10;
    int last[1000];
     for(i=0;;i++){
        N=N/10;
        last[i]=N;
        if(N<1) break;
    }
    s=s+last[i-1];
    printf("\n1st + last digit= %d",s);
}
