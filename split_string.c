/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

//Geeks
//
void split_str(char *str,char delimeter)
{
    int i=0;
    char temp[20];
    
    while(*str!='\0')
    {
        //printf("%c ",*str);
        //str++;
       if(*str != ' ')
        {
            temp[i] = *str;
            i++;
        }
        else
        {
            temp[i] = '\0';
            printf("%s \n",temp); 
            i=0;
        }
        str++;
    }
    
    if(i >0)
    temp[i] = '\0';
    printf("%s \n",temp);
}
int row=10;
int col=30;
void split_to_2d(char *str, char arr[row][col])
{
    int row,col;
    row=col=0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
           arr[row][col] = '\0';
           row++;
           col=0;
        }
        {
             arr[row][col] = *str;
             col++;
        }
        str++;
    }
      arr[row][col] = '\0';
    
}

void split_to_2d_array(char *str, char *arr[])
{

    while(*str != '\0')
    {
        if(*str == ' ')
        {
   
        }
        {
             arr[i] = *str;
        }
        str++;
    }
    
}

int main()
{
    printf("Hello World\n");
    
    char s[] ="Geeks for Geeks"; 
   // split_str(s,' ');
    
    char split_str[10][30];
    split_to_2d(s, split_str);
    for(int i=0;i<3;i++)
    {
            printf("%s \n",split_str[i]);
    }
        printf("\n");

    return 0;
}
