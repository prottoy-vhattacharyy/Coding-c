#include <stdio.h>
#include<limits.h>

int main() {
    unsigned long long x=ULLONG_MAX;
    char a[x];
    gets(a);
    //for(int i=0 ;a[i]!='\0';i++) printf("%d ",a[i]);
    for(int i=0;a[i]!='\0';i++) {
        if(a[i]>='A' && a[i]<='Z') a[i]+=32;
        else if(a[i]>='a' && a[i]<='z') a[i]-=32;
    }
    puts(a);
    return 0;
}