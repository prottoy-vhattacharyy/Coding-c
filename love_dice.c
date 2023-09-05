#include <stdio.h>
#include<conio.h>    
#include<time.h>
void love();
void dice();
void love_dice();
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
    start:
    printf("do you want to roll the dice (yes/no)\n");
    gets(ch);
    if(strcmp(ch,"yes")==0){
    for(int i=1;i<=2;i++){
        dice();
        }
        love_dice();
    }
    else if(strcmp(ch,"no")==0){
    	//printf("\nTHEN FU** OFF\n");
        printf("\nokk :( \n");
    }
    else{
    printf("only type yes or no\n\n");
    goto start;
    }
    return 0;
}
void love_dice(){
    printf("---------------------\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("|    ");
    love();
    printf("        |\n");
    printf("|                      |\n");
    printf("|                      |\n");
    printf("---------------------\n");
    return;
    }
    void love(){
    	printf("I LOVE YOU");
        return;
    }