#include <stdio.h>

int main() {
    mkdir("prottoy"); //create folders
    FILE *p;
    p=fopen("/storage/emulated/0/prottoy/pro.txt","w"); // create files
    remove("/storage/emulated/0/prottoy/pro.txt"); // remove files
    rmdir("prottoy"); //remove empty folders
    return 0;
}
