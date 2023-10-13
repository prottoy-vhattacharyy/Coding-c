#include <stdio.h>

int main(){
    int a=5;
    int b=++a + a++ + --a;
    printf("%d",b);
    //int c=5+a+=1;
    return 0;
}