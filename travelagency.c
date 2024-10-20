#include<stdio.h>

struct travelagency
{
    char k[5];              // k is for kilometers
    char N[20];         // n is for name 
    char l[16];         // l is for licence number
    char r[30];         // r is for route
}d1,d2,d3;              // d is for driver
int main()
{
    printf("PLEASE DO NOT USE SPACE WHILE FILLING THIS FORM INSTEAD USE UNDERSCORE(_) \n\n");
    
    printf("Enter your name \n");
    scanf("%s",d1.N);
    printf("The Name of first driver is %s \n\n",d1.N);
    printf("Enter your licence number \n");
    scanf("%s",d1.l);
printf("The Licence number of first driver is %s \n\n",d1.l);
    printf("Enter your route \n");
    scanf("%s",d1.r);
    printf("The route of first driver is %s \n\n",d1.r);
    printf("Enter your kilometre \n");
    scanf("%s",d1.k);
    printf("The kilometre of first driver is %s \n\n",d1.k);
   // printf("Enter your name");
    // scanf("%s",d2.N);
//    printf("Enter your name");
    // printf("The Name of second driver is %s \n",d2.N);
    
    // scanf("%s",d2.l);
    // printf("The Licence number of second driver is %s \n",d2.l);
    // scanf("%s",d2.r);
    // printf("The route of second driver is %s \n",d2.r);
    // scanf("%s",d2.k);
  //  printf("Enter your name");
    // printf("The kilometre of second driver is %s \n",d2.k);
    // scanf("%s",d3.N);
    // printf("The Name of third  driver is %s \n",d3.N);
    // scanf("%s",d3.l);
    // printf("The Licence number of third  driver is %s \n",d3.l);
    // scanf("%s",d3.r);
    // printf("The route of  third driver is %s \n",d3.r);
    // scanf("%s",d3.k);
    // printf("The kilometre of  third driver is %s \n",d3.k);

    return 0;
}
