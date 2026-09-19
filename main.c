#include <stdio.h>

int main(void) {
    char ch;

    printf("enter a character : ");
    scanf("%c", &ch);

    printf("the next character of %c (%d) is %c (%d)\n", ch, ch, ch + 1, ch + 1);

    return 0;
}


     

