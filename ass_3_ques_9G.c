//WAP using loop (for, while, do-while):
//GCD of two numbers
//*Generate Fibonacci series

#include<stdio.h>

int main()
{
    int term = 41, num1=0, num2=1, fibonacci;
    for (int i = 1; i<=term - 2; i++)
    {
        fibonacci =  num1 + num2;
        num1 = num2;
        num2 = fibonacci;
    }
    printf("%d",fibonacci);
    
    return 0;
}
