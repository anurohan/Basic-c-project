#include<stdio.h>
int main(){
    int i,n;
    printf("enter any number:");
    scanf("%d",&n);
    printf("the multiplication table of %d :\n",n);
    for(i=1;i<=10;i++){
        printf("%d x %d =%d\n",n,i,i*n);
    }
    return 0;
}   