#include<stdio.h>

int main(){
    int i,n,sum=0;
printf("enter the nth natural number:" );
scanf("%d",&n);


//1. for(i=1;i<=n;i++){
//     sum+=i;
//    }


//2.run in constant time....
sum=(n*n+n)/2;
printf("the sum of %d number is :%d\n",n,sum);


    return 0;

}