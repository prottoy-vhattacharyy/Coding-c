#include<stdio.h>
int main ()
{
   int n;
   printf("Enter size :\n");
   scanf("%d",&n);
   int a[n+1];
   a[0]=0;
    printf("enter values :\n");
   for (int i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
    for (int i=1;i<=n;i++){
        if(a[i]>a[0]){
            a[0]=a[i];
        }
    }
    printf("\nlargest=%d",a[0]);

    for (int i=1;i<=n;i++){
        if(a[i]<a[0]){
            a[0]=a[i];
            }
    }
    printf("\nminimum=%d",a[0]);
}

