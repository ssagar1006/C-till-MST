// WAP Write a program to arrange given strings in possible orders  for e.g. input=ab12 output=a12b, a21b,....

#include<stdio.h>
#include<string.h>

int main()
{
    char temp;
    char string[] = "ab12";
    
    for (int i = 0; i < 4; i++)
    {
    //     temp = string[i];
    //     string[i] = string[i+1];
    //     string[i+1] = temp;
        printf("%s",string[i]);
    }
    
    return 0;
}