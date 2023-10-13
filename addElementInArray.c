#include<stdio.h>

int main()
{
    int s;
    printf("size :");
    scanf("%d",&s);
    int a[s];
    int b[s+1];
    int e,p;
    printf("array :");
    for(int i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    printf("new element and pos :");
    scanf("%d %d",&e,&p);
    if(p>s){
    printf("invalid pos");
    return 0;
    }
    for(int i=0;i<p;i++){
        b[i]=a[i];
    }
    for(int i=p+1;i<5+1;i++){
         b[i]=a[i-1];
    }
    b[p]=e;
    for(int i=0;i<5+1;i++){
    printf("%d ",b[i]);
    }
    return 0;
}