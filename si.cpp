#include<stdio.h>
int main(){
    int i,a,b,c,sum;
    for(i=1;i<=3;++i)
    {
        printf("enter ,principal,rate,time: ");
        scanf("%d%d%d",&a,&b,&c);
        sum=a*b*c/100;
        printf("total  extra amount %d\n",sum);
    
    }
    return 0;					
}															
