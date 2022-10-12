#include <stdio.h>

    int main() {
        int i ;
    printf("enter value:\n");
    scanf("%d",&i);
        switch (i) {
            case 7:
            printf("Value is 7");
                break;

            case 10:
            printf("Value is 8\n");
            printf("Value is 8");
                break;

            case 9:
            printf("Value is 9");
                break;

            default:
            printf("Value is not present");
                break;
        }
        return 0;
    }
