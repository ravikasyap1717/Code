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

void print_first_letter(char *str)
{
    bool flag= true;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
          flag = true;  
          str++;
        }
   
        if(flag)
        {
          printf(" %c ",*str);
          flag=false;
                
        }
         str++;
      
    }
    printf("\n");
    
}

void skip_letter_after_first(char *str)
{
    bool first=true;
    
    while((*str != '\0'))
    {
        if((*str != ' ') && first)
        {
            printf(" %c ",*str);
            first = false;
        }
        str++;
        if(*str == ' ')
        {
            first = true;
        }
    }
    printf("\n");
    
}

int main()
{
    printf("Hello World \n");
    
    char s[] = "Hello Geeks. Welcome to C programming";
    print_first_letter(s);
    skip_letter_after_first(s);


    return 0;
}
