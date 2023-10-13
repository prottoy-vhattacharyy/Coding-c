#include <stdio.h>
int main() {
    int a=0,b=1,c;
    printf("%d  \n%d",a,b);
    for(int i=0;i<=100;i++){
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
    return 0;
}