/*  Name - Sagar
    batch - A75
*/

// Assignment operator assigns right hand side value to left hand side variable.
// Use this idea to interchange (swap) values of two variables.
#include <stdio.h>

int main()
{
   int num1,num2,temp; // declared 2 variable and assigned them value as 1 and 2 and also made a temp variable so that i can use it for swapping the values 
   num1 = 1;
   num2 = 2;
   
   temp = num1;  // stored num1 in temp var
   num1 = num2;  // swapped num1 with num2
   num2 = temp;  // now changed value of num2 to temp(which is num1)
   
   printf("number 1 = %d,number 2 = %d   %d",num1,num2,temp);
   return 0 ;
}