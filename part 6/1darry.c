#include <stdio.h>
int main()
{
    //                    G         S         B       C      I
    float metals[5] = {135982.0, 131817.41, 2296.0, 1780.0, 220.0};
    char a;
    printf("Welcome the awazii's metal shop.....\n\n");
    printf("\tenter a to check the price of gold\n");
    printf("\tenter b to check the price of silver\n");
    printf("\tenter c to check the price of bronze\n");
    printf("\tenter d to check the price of copper\n");
    printf("\tenter e to check the price of iron\n\n");
    printf("enter here: ");
    scanf("%c", &a);
    if (a == 'a')
    {
        int c, d;
        int v;
        printf("\tprice of 1 tola gold is Rs %d\n", (int)metals[0]);
        printf("enter in tola: ");
        scanf("%d", &c);
        printf("\tprice of %d tola gold is RS %d\n", c, (int)metals[0] * c);
        d = (int)metals[0] * c;
        printf("enter 1 if you want to buy &\nenter 2 if you don't: ");
        scanf("%d", &v);
        if (v == 1)
        {
            if (c > 20)
            {
                if (c == 69 || c == 76 || c == 45)
                {
                    float discount;
                    discount = (30.0 / 100.0) * d;
                    printf("Congratulation.........\nyou got special discount of 30%c\n", '%');
                    printf("\tthe new price is RS %.1f", d - discount);
                }
                else
                {
                    float discount;
                    discount = (15.0 / 100.0) * d;
                    printf("Congratulation.........\nyou got 15%c discount\n", '%');
                    printf("\tthe new price is RS %.1f", d - discount);
                }
            }
            printf("\t\tthank you for shopping\n\t\thave a nice day.....");
        }
        else if (v == 2)
        {
            printf("\t\tthank you for coming\n\t\thave a nice day.....");
        }
        else
        {
            printf("your input is invaild....");
        }
    }
    else if (a == 'b')
    {
        int c, v, d;
        printf("\tprice of 1 KG silver is RS  %.2f\n", metals[1]);
        printf("enter in KG: ");
        scanf("%d", &c);
        printf("\tprice of %d KG silver is RS %.2f\n", c, metals[1] * c);
        d = (int)metals[1] * c;

        printf("enter 1 if you want to buy &\nenter 2 if you don't: ");
        scanf("%d", &v);
        if (v == 1)
        {

            if (c > 20)
            {
                if (c == 69 || c == 76 || c == 45)
                {
                    float discount;
                    discount = (30.0 / 100.0) * d;
                    printf("Congratulation.........\nyou got special discount of 30%c\n", '%');
                    printf("\tthe new price is RS %.1f", d - discount);
                }
                else
                {
                    float discount;
                    discount = (15.0 / 100.0) * d;
                    printf("Congratulation.........\nyou got 15%c discount\n", '%');
                    printf("\tthe new price is RS %.1f", d - discount);
                }
            }
            printf("\t\tthank you for shopping\n\t\thave a nice day.....");
        }
        else if (v == 2)
        {
            printf("\t\tthank you for coming\n\t\thave a nice day.....");
        }
        else
        {
            printf("your input is invaild....");
        }
    }
    else if (a == 'c')
    {
        int c, v, d;
        printf("\tprice of 1 KG bronze is RS %d\n", (int)metals[2]);
        printf("enter in KG: ");
        scanf("%d", &c);
        printf("\tprice of %d KG bronze is RS %d\n", c, (int)metals[2] * c);
        d = (int)metals[2] * c;
        printf("enter 1 if you want to buy &\nenter 2 if you don't: ");
        scanf("%d", &v);
        if (v == 1)
        {

            if (c > 20)
            {
                if (c == 69 || c == 76 || c == 45)
                {
                    float discount;
                    discount = (30.0 / 100.0) * d;
                    printf("Congratulation.........\nyou got special discount of 30%c\n", '%');
                    printf("\tthe new price is RS %.1f", d - discount);
                }
                else
                {
                    float discount;
                    discount = (15.0 / 100.0) * d;
                    printf("Congratulation.........\nyou got 15%c discount\n", '%');
                    printf("\tthe new price is RS %.1f", d - discount);
                }
            }
            printf("\t\tthank you for shopping\n\t\thave a nice day.....");
        }
        else if (v == 2)
        {
            printf("\t\tthank you for coming\n\t\thave a nice day.....");
        }
        else
        {
            printf("your input is invaild....");
        }
    }
    else if (a == 'd')
    {
        int c, v, d;
        printf("\tprice of 1 KG copper is RS %d\n", (int)metals[3]);
        printf("enter in KG: ");
        scanf("%d", &c);
        printf("\tprice of %d KG copper is RS %d\n", c, (int)metals[3] * c);
        d = (int)metals[3] * c;
        printf("enter 1 if you want to buy &\nenter 2 if you don't: ");
        scanf("%d", &v);
        if (v == 1)
        {

            if (c > 20)
            {
                if (c == 69 || c == 76 || c == 45)
                {
                    float discount;
                    discount = (30.0 / 100.0) * d;
                    printf("Congratulation.........\nyou got special discount of 30%c\n", '%');
                    printf("\tthe new price is RS %.1f", d - discount);
                }
                else
                {
                    float discount;
                    discount = (15.0 / 100.0) * d;
                    printf("Congratulation.........\nyou got 15%c discount\n", '%');
                    printf("\tthe new price is RS %.1f", d - discount);
                }
            }
            printf("\t\tthank you for shopping\n\t\thave a nice day.....");
        }
        else if (v == 2)
        {
            printf("\t\tthank you for coming\n\t\thave a nice day.....");
        }
        else
        {
            printf("your input is invaild....");
        }
    }
    else if (a == 'e')
    {
        int c, v, d;
        printf("\tprice of 1 KG iron is RS %d\n", (int)metals[4]);
        printf("enter in KG: ");
        scanf("%d", &c);
        printf("\tprice of %d KG iron is RS %d\n", c, (int)metals[4] * c);
        d = (int)metals[4] * c;
        printf("enter 1 if you want to buy &\nenter 2 if you don't: ");
        scanf("%d", &v);
        if (v == 1)
        {

            if (c > 20)
            {
                if (c == 69 || c == 76 || c == 45)
                {
                    float discount;
                    discount = (30.0 / 100.0) * d;
                    printf("Congratulation.........\nyou got special discount of 30%c\n", '%');
                    printf("\tthe new price is RS %.1f", d - discount);
                }
                else
                {
                    float discount;
                    discount = (15.0 / 100.0) * d;
                    printf("Congratulation.........\nyou got 15%c discount\n", '%');
                    printf("\tthe new price is RS %.1f", d - discount);
                }
            }
            printf("\t\tthank you for shopping\n\t\thave a nice day.....");
        }
        else if (v == 2)
        {
            printf("\t\tthank you for coming\n\t\thave a nice day.....");
        }
        else
        {
            printf("your input is invaild....");
        }
    }
    else
    {
        printf("your input is invaild......\n");
    }
    return 0;
}
