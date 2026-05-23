/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

struct operation{
    
   int (*add)(int,int);
   int (*minus)(int,int);
    
};


int add_fun(int a, int b)
{
    return a+b;
}

int minus_fun(int a, int b)
{
    return a-b;
}

struct operation calulator = {
    .add = add_fun,
    .minus = minus_fun
    
};

void execute(int(*op)(int ,int), int a, int b)
{
    int result =op(a,b);
    printf("result =:%d\n",result);
    
}
int main()
{
    printf("Hello World\n");
    
/*    int (*operation)(int,int); 
    
    operation = add_fun;
    int a = operation(3,4);
    printf("%d\n",a);
     
    operation = minus_fun;
    int b = operation(5,4);
    printf("%d\n",b);*/
    
    int a = calulator.add(4,5);
     printf("%d\n",a);
     
    execute(calulator.add,5,6);

    return 0;
}
