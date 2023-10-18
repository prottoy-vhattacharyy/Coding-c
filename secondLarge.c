#include<stdio.h>
int main(){
    int N;
    printf("size: ");
    scanf("%d",&N);
    int a[N];
     for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
     }
    int max=0,max2=0;
    for(int i=0;i<N;i++){
        if(a[i]>max) {
            max2=max;
            max=a[i];
        }
        else if(a[i]>max2 && a[i]<max){
            max2=a[i];
        }
    }
        printf("2nd largest number= %d",max2);  
}
