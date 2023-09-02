#include <stdio.h>

int gcd(int a,int b) {
    if(a==0) return b;
    else if(b==0) return a;
    else if(b>a) return gcd(b,a);
    else if(a>b) return gcd(b,a%b);
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("\nGCD= %d",gcd(a,b));
    return 0;
}
