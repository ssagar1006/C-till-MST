#include<stdio.h>

int main()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if(i==5 && j==1)
            printf("*");
            else if (i==1 && j==5)
            printf("@");
            else 
            printf("");
        }
        printf("\n");
    }
    
    return 0;
}