// WAP delete a given element in an array

#include <stdio.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int posn = 0;
    printf("Position \n");
    scanf("%d", &posn);

    for (int i = (posn - 1); i < 4; i++)
    {
        array[i] = array[i + 1];
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}