//define macro to find size 
// int,char,int *,char *,arr[],*arr,structure, 
#include <stdio.h>

#define size_of(var) ((size_t)(&var +1) - (size_t)(&var))
int main()
{
    printf("find size of variable");
    
    char A = 'A'; 
    int a =5;
  
    int size =(size_t) (&(a) +1) - (size_t)(&a);
    printf("size :%d \n",size);

    printf("size :%u \n",size_of(A));
     printf("size :%u \n",size_of(a));
     
     int *i_ptr = 5;
     char *c_ptr = "ADS";
     printf("size :%u \n",size_of(i_ptr));
      printf("size :%u \n",size_of(c_ptr));
      
      int arr[]={1,2,3,4,5};
      printf("arr size :%u \n",size_of(arr));
      printf("arr size :%u \n",size_of(arr[0]));
      printf("arr size :%u \n",sizeof(arr));
      
      //No of element in arr 
      
      int num= size_of(arr)/size_of(arr[0]);
      printf("No of array :%d \n",num);
      
      int *ptr =5;
      
      printf("size of ptr %d\n",(char*)(&ptr+1) - (char*)(&ptr));
    
    struct var {
       int data;
         char c;
        char *name;
        int *p;
       
    } variable;
    
        printf("structure size :%u \n",size_of(variable));
      printf("structure arr size :%u \n",sizeof(variable));
      
      struct var *v_ptr = NULL;
      
       printf("vptr size of ptr %d\n",(char*)(v_ptr+1) - (char*)(v_ptr));
      
      
      

    return 0;
}
