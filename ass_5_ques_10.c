// WAP to remove duplicate no. in an array

#include<stdio.h>
                                                         
int main ()                                          
{
    int array[21] = {-2,-2,-2,4,4,4,4,1,1,1,1,1,1,1,0,0,0,0,0,0,0};
    int n=21;
   for (int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
        if(array[i] == array[j])
           {                                    
              for(int k=j;k<n-1;k++){  
              array[k] = array[k+1];
              
            }n--; j--;
             
            }  
            
        }   
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
                                                         
    return 0;
}