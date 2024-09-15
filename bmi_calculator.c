#include<stdio.h>
int main(){
    float weight,height,a,b,bmi,meters;
    printf("To get your enter your weight(in kg),height (in feet):");
    scanf("%f%f",&weight,&height);
meters=height*0.3048;
    a=meters*meters;
  b=weight;
    bmi=b/a;
    printf("%f",bmi);
    
    if(bmi>=30){
    	printf("\nthis person is suffer with OBESE");
	}
    
    else if(bmi>=25){
    	printf("\nthis person is suffer from Overweight");
	}
    
    else if(bmi>=18){
    	printf("\nthis is normal");
    	
	}
    
    else
    printf("\nthis person is suffer with Underweight");
    return 0;
}
