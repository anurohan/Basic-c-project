#include<stdio.h>
int main(){
    int a=0,b=1,next;
    printf("fibonacchi series upto 100:\n");
    printf("%d,%d,",a,b);
    next=a+b;
    while(next<=100){
        printf("%d,",next);
        a=b;
        b=next;
        next=a+b;
    }
    return 0;
}
