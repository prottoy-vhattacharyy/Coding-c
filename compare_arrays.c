#include<stdio.h>
int main(){
    int s,c,i;

    scanf("%d",&s);
    char a[s],b[s];


    printf("a :\n");

    for(i=0;i<s;i++){
        scanf("%s",&a[i]);
    }

    printf("b :\n");
    for(i=0;i<s;i++){
       scanf("%s",&b[i]);
    }

    for(i=0;i<s;i++){
        if(a[i]!=b[i]){
            c++;
            break;
        }
        else{c=0;}
    }
   // if(c==0){printf("equal");}
      if(!c){printf("equal");}
    else {printf("not equal");}
}
