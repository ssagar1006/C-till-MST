
// To find greatest of 3 integers using two methods (a) if-else and (b) ternary operator.

#include <stdio.h>

int main()
{
   int num1, num2, num3,max;       
   num1 = 2; num2 =7; num3 = 1;    //  assigned three integers to three variables..
   // A PART

   if(num1>num2)  max = num1;        // checked if num1 is greater or num2 and assined that num. to max
   else  max = num2;
   
   if(max < num3)  max = num3;      // compared max of num1 and num2 with num3 and assigned the value to max

   printf("%d",max);   // printed max becz i have compared all numbers and assigned greatest number to max var..
    
   // B PART
   max = num1>num2?num1:num2;
   max = max>num3?max:num3;

   printf("\n %d",max);
return 0 ;
}