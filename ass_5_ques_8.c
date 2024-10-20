// WAP Find largest and smallest in array

#include<stdio.h>

int main()
{
    int array[5] = {11,3,2,1,4};
    int i=1, max;
    while(i<5){
    if(array[0] > array[i])   max = array[0];
    else max = array[i];

    array[0] = max;   
    i++;
    }
    printf("%d",max);
    return 0;
}