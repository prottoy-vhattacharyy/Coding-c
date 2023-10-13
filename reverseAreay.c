#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int b[5];
    int j=4;
    for(int i=0;i<5;i++)
    {
        b[j]=a[i];
        j--;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d",b[i]);
    }
}