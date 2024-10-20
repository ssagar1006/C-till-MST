#include <stdio.h>

int main()
{
   int digits,a,i,num = 234;
   a = num;
   while (digits != 0)
{
   digits = a/10;
   i++;
}
printf("%d",i);
return 0 ;
}