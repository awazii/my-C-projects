#include <stdio.h>
int main()
/*1,average marks.
  2,pass or fail.
  3,%marks
  4,total marks and result card */
{
  //                  M , P , C , E , U , S
  int mark[10][6] = {{70, 53, 61, 91, 53, 37},
                     {60, 50, 46, 55, 37, 22},
                     {54, 66, 49, 74, 71, 31},
                     {80, 51, 53, 66, 69, 37},
                     {22, 19, 32, 44, 47, 20},
                     {19, 27, 29, 42, 48, 35},
                     {97, 79, 71, 92, 89, 34},
                     {27, 30, 34, 55, 49, 19},
                     {66, 57, 53, 59, 63, 45},
                     {74, 59, 47, 84, 82, 47}};
  int a;
  printf("\tResult of Class 12th:\n");
  printf("There are total 10 students in 12th class\nEnter your roll no(1-10) for your result card:\n");
  scanf("%d", &a);
  if (a <= 10)
  {
    int b;
    b = mark[a - 1][0] + mark[a - 1][1] + mark[a - 1][2] + mark[a - 1][3] + mark[a - 1][4] + mark[a - 1][5];
    printf("\tResult of Rollno %d is:\n", a);
    printf("Math:%d/100.\n", mark[a - 1][0]);
    printf("Physics:%d/85.\n", mark[a - 1][1]);
    printf("Computer:%d/75.\n", mark[a - 1][2]);
    printf("English:%d/100.\n", mark[a - 1][3]);
    printf("Urdu:%d/100.\n", mark[a - 1][4]);
    printf("SSt:%d/50.\n", mark[a - 1][5]);
    printf("\t\ttotal:%d/510\n", mark[a - 1][0] + mark[a - 1][1] + mark[a - 1][2] + mark[a - 1][3] + mark[a - 1][4] + mark[a - 1][5]);
    printf("You got %0.1f%c.\n", (float)b / 510 * 100, '%');
    printf("Average marks of Roll no %d are %d.\n", a, b / 6);
    int c, d, e, f, g, h;
    c = mark[a - 1][0];
    d = mark[a - 1][1];
    e = mark[a - 1][2];
    f = mark[a - 1][3];
    g = mark[a - 1][4];
    h = mark[a - 1][5];
    if (c < 33 || d < 28 || e < 25 || f < 33 || g < 33 || h < 18)
    {
      printf("You are fail better luck Next year:)");
    }
    else
    {
      printf("Congratulations you are pass");
    }
  }
  else
  {
    printf("Your roll no is invaild!");
  }

  return 0;
}
