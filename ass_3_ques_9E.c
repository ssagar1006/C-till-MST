//WAP using loop (for, while, do-while):
//Range of set of entered nos. by finding smallest and largest

#include<stdio.h>

int main()
{
    int num1=11,num2=23,num3=13,max,min;
    max = num1>num2?num1:num2;
    max = max>num3?max:num3;

    min = num1<num2?num1:num2;
    min = min<num3?min:num3;

    printf("Range : %d-%d=%d",max,min,max-min);
    return 0;
}