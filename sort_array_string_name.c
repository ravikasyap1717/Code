
 /******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void swap_str(const char **str1, const char **str2)
{
  //  printf("str1 :%s str2:%s\n",*str1,*str2);
    const char *temp;
    temp = *str1;
    *str1 = *str2;
    *str2= temp;
    
  //  printf("swap str1 :%s str2:%s\n",*str1,*str2);
 
}

void compare_str(const char **arr, int len)
{
    int i=0;
    //for(i=0;i<len;i++)
    //printf("%s\n",arr[i]);

    for(i=0;i<len-1;i++)
    {
        if(strcmp(arr[i],arr[i+1]) > 0)
        {
            // printf("%s\n",arr[i]);
              //printf("%s\n",arr[i+1]);
              swap_str(&arr[i], &arr[i+1]);
           //   printf("swap_str cmp str1 :%s str2:%s\n",arr[i],arr[i+1]);
           
        }
    }
    
}
int main()
{
    printf("Hello World \n");
    
     // Get the array of names to be sorted 
    const char* arr[]  = { "geeksforgeeks", "ABC", "geeksquiz", "clanguage" }; 

    int len = sizeof(arr)/sizeof(arr[0]);
    
    printf("len:%d\n",len);
    
    compare_str(arr, len);
    for(int i=0;i<len;i++)
    printf("%s\n",arr[i]);

    return 0;
}
