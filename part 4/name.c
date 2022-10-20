#include <stdio.h>
int main()
{
   char name[26];
   char name1[26];
    printf("Enter you name:\n");
    scanf("%s",&name);
    printf("enter you father's name:\n");
    scanf("%s",&name1);
    printf("your name is:%s\n", name);
    printf("your father's name is:%s\n",name1);
    printf("your full name is %s %s",name,name1);

    return 0;
}
