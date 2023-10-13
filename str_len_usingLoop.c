#include <stdio.h>
int main() {
    int s[1000];
    int i;
    gets(s);
    for(i=0;s[i]!='\0';i++){}
    puts(s);
    printf("%d",i);
    return 0;
}