//WAP using loop (for, while, do-while):
//X raised to power n

#include<stdio.h>

int main()
{
    int num = 10,ans=1,power=5;
    for(int i=1;i<=power;i++)
    {
        ans *= num;
    }
    printf("%d",ans);
    return 0;
}