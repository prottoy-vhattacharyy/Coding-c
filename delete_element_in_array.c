#include<stdio.h>

int main()
{
    int s;
    scanf("%d",&s);
    int a[s];
    for(int i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter del num:");
    int p;
     scanf("%d",&p);
    for(int i=0;i<s;i++){
        if(a[i]==p){
        p=i;
            break;
        }
    }
    for(int i=p;i<s;i++)
    {
        a[i]=a[i+1];
    }
     for(int i=0;i<s-1;i++)
     {
         printf("%d ",a[i]);
     }
    return 0;
}