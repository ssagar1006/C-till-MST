#include<stdio.h>

int main()
{
    int num=1,i,j;

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    
    return 0;

}