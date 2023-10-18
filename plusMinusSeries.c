#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int s=0;
    for(int i=1;i<=N;i++){
        if(i%2!=0) s=s+i;
        else if(i%2==0) s=s-i;
    }
    printf("1-2+3-4...%d= %d",N,s);
}