#include<stdio.h>
//#include<sys/stat.h>
int main()
{
    int chk;
    FILE *p;
    chk=mkdir("prottoy");
    if(chk==0){
        printf("folder created");
    }
    p=fopen("/storage/emulated/0/prottoy/pro2.txt","w");
    if(p==NULL) {
        printf("error");
    }
    else {
        printf(" file created",p);
    }
    rmdir("prottoy");
    return 0;
}
