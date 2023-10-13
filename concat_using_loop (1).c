#include <stdio.h> 

int main() {
    char a[100],b[100];
    int i,j;
    gets(a); gets(b);
    for(i=0;a[i]!='\0';i++){ }
    for(j=0;b[j]!='\0';j++){
        a[j+i]=b[j];
    }
    a[i+j]='\0';
    printf("%s ",a);
    puts(a);
    return 0;
}