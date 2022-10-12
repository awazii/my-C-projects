#include <stdio.h>
int main()
{
    int age,marks;
    marks=0;
    printf("\tWelcome Students\n");
    printf("student 1:Zuzu your age is 20.\n");
    printf("student 2:Saad your age is 19.\n");
    printf("student 3:Awazii your age is 18.\n");
    printf("Enter Your Age For your result card:\n");
    scanf("%d",&age);
    switch (age)
    {
    case 20:
        printf("Zuzu:\n");
        switch (marks)
        {
        case 0:
            printf("congratulations you got 328/500:\n");
            printf("Math:62/100.\n");
            printf("physics:49/100.\n");
            printf("computer:84/100.\n");
            printf("English:74/100.\n");
            printf("Urdu:59/100.\n");
            printf("you got 65.6 percent.");
            break;
        }
        break;
        case 19:
         printf("Saad:\n");
         switch (marks)
         {
         case 0:
            printf("congratulations you got 344/500:\n");
            printf("Math:69/100.\n");
            printf("physics:57/100.\n");
            printf("computer:86/100.\n");
            printf("English:68/100.\n");
            printf("Urdu:64/100.\n");
            printf("you got 68.8 percent.");
             break;
         }
        break;
        case 18:
         printf("Awazii:\n");
         switch (marks)
         {
         case 0:
            printf("congratulations you got 320/500:\n");
            printf("Math:64/100.\n");
            printf("physics:55/100.\n");
            printf("computer:71/100.\n");
            printf("English:73/100.\n");
            printf("Urdu:57/100.\n");
            printf("you got 64 percent.");
             break;
         }
        break;
    
    default:
        printf("please enter correct age:");
        break;
    }
    return 0;
}
