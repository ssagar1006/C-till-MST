//WAP using loop (for, while, do-while):
//Factorial of number

#include<stdio.h>

int main()
{
    int num=11,factorial=1;          // initiated factorial by 1
    
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;  // used basic idea that factorial(n) = 1st case fact. = 1, i=1 then i=2, fact=1 then fact =2, i=3 .....
    }
    printf("Factorial of %d is %d",num,factorial);

    return 0;
}