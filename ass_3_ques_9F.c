//WAP using loop (for, while, do-while):
//HCF of two numbers

#include<stdio.h>

int main()
{
    int num1=28,num2=27,hcf=1;
    int min = num1 < num2 ? num1 : num2;  

    for (int i = 1; i <= min; i++)
    {
        if(num1 % i == 0  &&  num2 % i == 0)
        {
            hcf = i;
        }
    }
    
    printf("HCF of %d and %d is %d",num1,num2,hcf);
    
    return 0;
}