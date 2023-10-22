// Задача 4. Перевернуть число.
// Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.

#include <stdio.h>
int main(void) 
{
    int a, rev = 0, remainder;
    printf("Input number: \n");
    scanf("%d", &a);
    
    while (a != 0) 
    {
        remainder = a % 10;
        rev = rev * 10 + remainder;
        a /= 10;
    }

    printf("Reversed number = %d", rev);
    return 0;
}