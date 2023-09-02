#include <stdio.h>

int lcm(int a,int b){
    int max;
    max=(a>b)?a:b;
    cheak:
    if(max%a==0 && max%b==0) return max;
    else {
        max++;
        goto cheak;
    }
}
int main() {
    int a,b;
    scanf("%d  %d",&a,&b);
    printf("\n%d",lcm(a,b));
    return 0;
}

