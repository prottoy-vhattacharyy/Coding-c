#include<stdio.h>
int main(){
    int s;
    printf("size: ");
    scanf("%d",&s);
    int a[s];

    for(int i=0;i<s;i++) scanf("%d",&a[i]);

    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(a[i]==a[j]){
                s--;
                for(int k=j;k<s;k++){
                a[k]=a[k+1];
                }
            }
        }
    }   

    printf("duplicate elements are removed\n");
    for(int i=0;i<s;i++) printf("%d ",a[i]);

 return 0;
}