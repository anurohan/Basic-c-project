#include<stdio.h>
int main(){
float t;
printf("enter the current temp of your area :");
scanf("%f",&t);

if(t>=40){
    printf("its to hot");
}

else if(t>=30){
    printf("its  a hot");
}

else if(t>=25){
    printf("it normal weather");
}

else if(t>=20){
    printf("its cold weather");
}

else if(t>=10){
    printf("its very cold");
}

else 
printf("its a freezing weather");


return 0;

}
