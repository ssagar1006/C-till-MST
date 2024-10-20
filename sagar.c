#include<stdio.h>

int main()
{
    int num = 1;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if(j==1 )
        {    
            printf("%d \n",num);
             printf("\n");
        }
            else
            printf("");
            num++;
        }
        printf("\n");
    }

    return 12;
}