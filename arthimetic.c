#include<stdio.h>
int main()
{

    float num1,num2;
    printf("enter two numbers: ");
    scanf("%f %f",&num1,&num2);
    printf("Addition %.2f \n",num1+num2);
    printf("Subtraction: %.2f \n",num1-num2);
    printf("multiplication: %.2f \n",num1*num2);
    if(num2 !=0){
        printf("Division:%.2f \n",num1/num2);
    }
    else{
        printf("Division:undefined(division by zerp)\n");

    }
    return 0;
    }

    
