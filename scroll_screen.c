#include <stdio.h>
#include <string.h>

int main()
{
  //  printf("Hello World\n");
    
    int byte;
    char *str = "Hello World"; 
    char *ptr = str; 
    char *ptr1 = str;
    
   // scanf("%d",&byte);
    
    // for(int i=0;i<strlen(str);i++)
    // {
    //     for(int j=0; j<5;j++)
    //     {
    //         printf("%c",str[j+i]);
          
    //     }
    //   printf("\n");
       

    // }
int j=0;
    ptr1 = str;
    while(*ptr != '\0')
    {
        for(int i=0;i<5;i++)
        {
            printf("%c",*ptr);
            ptr++;
            if(*ptr == '\0')
            {
                ptr = str;
            }
           
        }
        printf("\n");
        ptr = ptr1++;
          if(*ptr1 == '\0')
            {
                ptr1 = str;
                j++;
            }
            
            if(j == 2 )
            {
                break;
            }
    }
    

    return 0;
}
