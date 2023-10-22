// Сумма квадратов маленьких чисел. 
// Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.


#include <stdio.h>

int main(void)
{
    int a,b, sum = 0;
    printf ("Input  numbers: \n");
    scanf("%d%d",&a,&b); 

    while (a <= b)
    {
        sum = sum + a*a;
        a++;
    }
        
    printf("%d",sum);

    return 0;
}