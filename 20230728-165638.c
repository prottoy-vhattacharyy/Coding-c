#include <stdio.h>

int main() {

 int i;

 int v[4];

 //Input
 for (i=0; i<4; i++)
    scanf("%d", &v[i]);


//Output
	printf("\n");
 for (i=0; i<10; i++){
    printf("%d\t", v[i]);
 }


return 0;
}