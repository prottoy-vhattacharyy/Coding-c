#include <stdio.h>
#include<conio.h>    
#include<time.h>
void dice();
void dice(){
    printf("---------------------\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|           0         |\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("---------------------\n");
    clrscr();
    sleep(1);
    printf("---------------------\n");
    printf("| 0                   |\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|                   0 |\n");
    printf("---------------------\n");
    clrscr();
    sleep(1);
    printf("---------------------\n");
    printf("| 0                   |\n");
    printf("|                      |\n");
    printf("|           0         |\n");
    printf("|                      |\n");
    printf("|                   0 |\n");
    printf("---------------------\n");
    clrscr();
    sleep(1);
    printf("---------------------\n");
    printf("| 0                0 |\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("| 0                0 |\n");
    printf("---------------------");
    clrscr();
    sleep(1);
    printf("---------------------\n");
    printf("| 0                0 |\n");
    printf("|                      |\n");
    printf("|         0           |\n");
    printf("|                      |\n");
    printf("| 0                0 |\n");
    printf("---------------------");
    clrscr();
    sleep(1);
    printf("---------------------\n");
    printf("| 0      0        0 |\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("| 0       0       0 |\n");
    printf("---------------------");
    clrscr();
    sleep(1);
    return;
}
int main() {
    char ch[5];
    printf("do you want to roll the dice (y/n)");
   // gets(ch);
    scanf("%s",ch);
    if(strcmp(ch,"yes")==0){
    while(1){
        dice();
        }
    }
    return 0;
}
