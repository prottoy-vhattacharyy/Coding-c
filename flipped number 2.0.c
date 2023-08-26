#include <stdio.h>
int main(){
	int ip;
	scanf("%d",&ip);
		for(int i=0;i<2;i--){
        	printf("%d\n",ip%10);
            ip=ip/10;
           // printf("ip=%d\n",ip);
        	if(ip<1){
            	 break;
            }	
        }
       // printf("%d",4%10);
}