/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void nonrepeat_char(char *str, int len)
{
    int i,j;
   
     
    for(i=0;i<len;i++)
    {
        bool flag = false;
        for(j=0;j<len;j++)
        {
            if(i !=j && (str[i] == str[j]))
            {
                flag = true;
                break;
            }
            else
            {
                flag= false;
            }
        }
        if(flag == false)
        {
            printf("nonrepeat_char :%c \n",str[i]);
        }
            
    }
    
}


int nonrepeat_char_a(char *str, int len)
{
    int arr[26] = {0};
    int index,i; 
    
    for( i =0; i<len;i++)
    {
        index = str[i] - 'A';
        arr[index] += 1; 
    }
    
    for(i=0;i<26;i++)
    {
        if(arr[i]== 1)
        {
            printf("index: i=%d %d,%c\n",i, arr[i],i+'A');
        }
    }
}

int main()
{
    printf("Hello World\n");
    
    char *str ="ABA";
   // nonrepeat_char(str, strlen(str));
    nonrepeat_char_a(str, strlen(str));

    return 0;
}
