#include <stdio.h>

int main()
{
   int num = 13,check=0;        
   check = (num%2);          // as for odd no. check = 0 and for even check = 1
    
   check=0?printf("even number"):printf("odd number"); 
   return 0 ;
}