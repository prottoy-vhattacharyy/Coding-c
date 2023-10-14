#include <stdio.h>

int main() {
    char a[1000];
    gets(a);
    //for(int i=0 ;a[i]!='\0';i++) printf("%d ",a[i]);
    for(int i=0;a[i]!='\0';i++) {
        if(a[i]>='A' && a[i]<='Z') a[i]+=32;
        else if(a[i]>='a' && a[i]<='z') a[i]-=32;
    }
    puts(a);
    return 0;
}