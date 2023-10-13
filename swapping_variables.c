#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    //method 1
    a=a-b;
    b=a+b;
    a=b-a;
    printf("%d  %d",a,b);
    
    //method 2
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d  %d",a,b);
    
    //method 3
    ()
    return 0;
}