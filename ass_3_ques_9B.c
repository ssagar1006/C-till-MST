//WAP using loop (for, while, do-while):
//Whether no. is prime or not

#include<stdio.h>

int main()
{
    int num = 30,calc,i=2,check=0;
    for(;i<num;i++)
    {
        calc = num % i;
        if (calc == 0)  
        {
            check = 1;
             break;
        }     
        
    }
    if (check==1)
    printf("not a prime number\n");
    else printf("prime number\n");
    return 0;
}