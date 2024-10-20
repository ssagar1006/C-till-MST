//WAP using loop (for, while, do-while):
//Check if the input integer is an Armstrong number or not?

#include<stdio.h>
#include<math.h>
int power(int num, int power)
{
    int ans=1;
    for(int i=1;i<=power;i++)
    {
        ans *= num;
    }
    return ans;
}
int main()
{
    int  number=1634, check , sum=0, num=number, i=1, n=0,m=number;   // n is number of digits
    
    while(m != 0)
    {
        m = m/10;
        n++;
    }
  //  printf("%d",n);
    while (check != 0)
    {
        check = num % 10;
        sum += power(check,n);
        num = num/10;             // wrote num instead of number in loop becz num after loop will be equal to 0
        i++;
    }
    if(sum == number)  printf("yes");
    else printf("no");
    // sum = power(10,3);
    // printf("%d",sum);
    // return 0;
}