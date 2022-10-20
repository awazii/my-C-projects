
#include <stdio.h>

int main()
{
    int a=76;
    int* p=&a;
    int* p2=NULL;
   //%p is used to print the address of varible
   //%x is used to print in hexadecimal
   //* in pointer id used to print the value of varible that we pointed e.g..if a=76 then we pointed the address
   //of a is p(pointer)then we use * to print the value of a
   //& is used to get the address of any varible.
   printf("the address of printer p is %p\n",&p);
   printf("the value of is a in hexadecimal is %x\n",*p);
   printf("the address of a  is %p\n",p);
   printf("the address of a  is %p\n",&a);
   printf("the value of a is %d\n",*p);
   printf("the value of a is %d\n",a);
   printf("this is the null pointer %p",p2);

    return 0;
}
