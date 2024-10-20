// WAP to count number of zeros and ones in an array

#include<stdio.h>

int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,0};
    int zero = 0,one=0;
    for (int i = 0; i < 10; i++)
    {
        if(array[i] == 0)   zero++;
        else if(array[i] == 1)   one++;
    }
    printf("no. of zeros: %d\n",zero);
    printf("number of ones: %d",one);
    
    return 0;
}