#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        int p=0;
        for(int j=1;j<i;j++){
            if(i%j==0) p=p+j;
        }
        if(p==i) printf("%d  ",i);
    }
}
