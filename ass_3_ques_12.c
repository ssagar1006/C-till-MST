// Read in 20 integers and count the even numbers

#include <stdio.h>

int main()
{
   int i=0,num=0,even=0,odd=0,calc;

   while(i<=3)
   {
      printf("Enter the number you want \n"); scanf("%d",&num);
      calc = num%2;
      if(calc==0)  even++;
      else odd++;
      i++;
      num = 0;
   }
   printf("count of even numbers = %d",even);  printf("count of odd numbers = %d",odd);

   return 0 ;
}