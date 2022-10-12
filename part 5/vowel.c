#include <stdio.h>
int main()
{
    char alphabets;
    printf("Enter an alphabet and i will tell you it vowel or consonants\n");
    printf("Enter here:\n");
    scanf("%c",&alphabets);
    switch (alphabets)
    {
    case 'a':
    case 'A':
        printf("%c is vowel",alphabets) ;
        break;
    case 'e':
    case 'E':
        printf("%c is vowel",alphabets) ;
        break;    
     case 'i':
    case 'I':
        printf("%c is vowel",alphabets) ;
        break;
         case 'o':
    case 'O':
        printf("%c is vowel",alphabets) ;
        break;
         case 'u':
    case 'U':
        printf("%c is vowel",alphabets) ;
        break;
    default: 
            printf("%c is not vowel",alphabets);
        break;
    }
    return 0;
}
