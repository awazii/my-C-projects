#include <stdio.h>

int main()
{
    int i,num;
    //i=0
    num = 0;
     printf("Enter a number\n");
     scanf("%d",&num);
    for (i = 0; i <num ; i++)
    {

      //  num = num + 1;
       if (num==9)
        {
            break;
        }
        printf("%d\n", i+1);
        
    }

    
      return 0;
}
