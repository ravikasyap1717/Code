/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//RAVI 
//IAVR

char* reverse_str(char *str)
{
    int len = strlen(str);
    
    char *rev = (char*)malloc(sizeof(rev) * len);
    
    for(int i=0;i<len;i++)
    {
        rev[i] = str[len-1 -i];
    }
    
    return rev;
    
}

//1 2 3 4 5 6 
//
int reverse_arry(int *arr, int size)
{
 
    for(int i=0; i<=(size/2); i++)
    {
        int temp = arr[i];
        arr[i] =arr[size -i-1];
        arr[size-i-1] = temp;
    }
 
}

int main()
{
    printf("Hello World \n");
    
    char *string = "RAVI KASYAP";
    
    printf("%s\n",reverse_str(string));
    
    int array[] = {1,2,3,4,5,6};
    int len = sizeof(array)/sizeof(array[0]);
    reverse_arry(array, len);
    for(int i=0; i<len; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
