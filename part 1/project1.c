#include <stdio.h>
int main()
{
    char exams;
    printf("Welcome Students:\n");
    printf("How many Exams did you pass?\n");
    printf("Enter a if pass maths exam\n");
    printf("Enter b if pass science exam\n");
    printf("Enter c if pass both exams\n");
    printf("Enter here:\n");
    scanf("%c",&exams);
    if (exams=='a')
    {
        printf("Congratulation you won 50Rs");

    }
    else if (exams=='b')
    {
        printf("Congratulation you won 50Rs");

    }
    else if (exams=='c')
    {
        printf("Congratulation you won 100Rs");

    }
    else
    {
        printf("Tu Mera Putar Chuti kar Chal");
    }
    
    return 0;
}


