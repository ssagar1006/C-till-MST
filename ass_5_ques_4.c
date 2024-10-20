// WAP linear search for element

#include<stdio.h>

int main()
{
    int array[] = {1,2,3,4,5};
    int n,i;
    for (i = 0; i < 5; i++)
    {
        if(array[i] == 4)
        {
            break;
        }
    }
     printf("you got that at index: %d",i);

    return 0;
}