#include<stdio.h>

int main(void){
    int a=90;
    for(int i=0;i<4;i++){
        a=a+i;
        printf("now %d.\n",a);
    }
    printf("hello.%d.\n",a);
    return 0;
}