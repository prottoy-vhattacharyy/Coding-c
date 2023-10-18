#include<stdio.h>
int main(){
    char a[1000];
    gets(a);
    char c,r;
    printf("replace: ");
    scanf("%c",&c);
    getchar();
    printf("replace with: ");
    scanf("%c",&r);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==c){
            a[i]=r;
        }
    }
    puts(a);
}