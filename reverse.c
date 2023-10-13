#include<stdio.h>
int main(){
    int inp1,i,p=0,count=1;
    printf("inp1= ");
    scanf("%d",&inp1);
    int inp2=inp1;

        for(int j=0;inp2 !=0;j++){
        printf("hello  ");
        count*=10; inp2 /= 10;
        printf("inp2=%d count=%d\n",inp2,count);
     }
  printf("count= %d",count/100);

    for(i=count;inp1<1;i=i/10){
    p=(inp1%10)*i+p;
    inp1=inp1/10;
    }
    printf("%d",p);
    return 0;
}
