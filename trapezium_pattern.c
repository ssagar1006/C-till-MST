// WAP to print a star pattern in shape of trapezium like
// user will tell how many stars there should be in 1st row           
//                                                                   ***
//                                                                  *****
//                                                                 *******
#include <stdio.h>

int main()
{
    int count = 4,n=2;      // number of stars u want in 1st row) - 1= n
    int num = count+n;
    for (int i = 0; i <= count; i++)        
    {
        for (int j = 0; j < (i+num); j++)         // becz we want stars from j=count to j=num in each row
        {
            if (j > count - i-1)       // so that in i=0 from j=0 to j=count we have blank spaces
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}