// Задача 3. Все цифры четные.
// Ввести целое число и определить, верно ли, что все его цифры четные.

#include <stdio.h>

int AllDigitsEven(int x) 
{
    while (x > 0) 
    {
        if (x % 2) 
        {
            return 0;
        }
    x /= 10;
    }
    return 1;
}

int main(void) 
{
  int a;
  printf ("Input number: \n");
  scanf("%d", &a);
    if (AllDigitsEven(a)) 
        {
            printf("YES\n");
        } 
    else 
        {
            printf("NO\n");
        }
  return 0;
}