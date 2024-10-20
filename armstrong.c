#include <stdio.h>
#include <math.h>

int main()
{
   int i=1,c,num,remainder,sum = 0,digits;
   printf("Enter the number you want to check (maximum 4 digit number allowed) \n");
   scanf("%d",&c);
   num = c;
   
   
//     for (int i = 1; i < 10; i++)
//     {
//       digits = num/pow(10,i);
//         printf("%d    %d \n",i,digits);
//     }
//       printf("%d    %d",i,digits);
   
  while(num != 0)
  {
      remainder = num%10 ;        // contain the unit digit
      sum += pow(remainder,3);
      num = num/10;
  }

  if(sum == c){
        printf("%d is an Armstrong number.", c);
  }
    else
        printf("%d is not an Armstrong number.", c);

return 0 ;
}