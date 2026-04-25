/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
//own strcpy

char* strcpy_own(char *dest,char *src)
{
    char *start=dest;
    int len=0;
    while(*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
        len++;
    }
    
    *dest = '\0';
    
    return start;
    
}

//concat 2 string
char *concat_str(char *dest, char *src)
{
    char *start=dest;
    while(*dest!='\0')
    {
        dest++;
    }
    while(*src !='\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    
    return start;
}

char *memcpy_own(char *dest, char *src, int numofBytes)
{
    char *start = dest;
    for(int i=0;i<numofBytes;i++)
    {
        *dest = *src;
        dest++;
        src++;
    }
    
    //*dest ='\0';
    return start;
    
}

int main()
{
    printf("Hello World\n");
    
    char *name="Ravi Kumar";
    char *S1;
    S1 = (char*)malloc(sizeof(char) *20);

    strcpy_own(S1,name);
    printf("copy: %s\n",S1);
    concat_str(S1,"Annu");
    printf("Concat: %s\n",S1);
    
    char src[15]="ABCD 4&3";
   src[8] ='\0';
    src[9]='A';
    memcpy_own(S1,src,15);
    printf("memcpy :%s\n",S1);
    return 0;
}
