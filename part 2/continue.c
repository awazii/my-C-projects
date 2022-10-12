#include <stdio.h>

int main()
{
    int i,num;
    //i=0
  //  num = 0;
     printf("Enter a number\n");
     scanf("%d",&num);
    for (i = 1; i <=num ; i++)
    {
    printf("%d\n", i);
       if (num>=9)
        {
            continue;
        }
        
        printf("you are stupid\n");
    }

    
      return 0;
}
