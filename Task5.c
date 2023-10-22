// Задача 5. Все счастливые числа. 
// Ввести натуральное число и напечатать все числа от 10 до введенного числа у которых сумма цифр равна произведению цифр.


#include <stdio.h>

int main(void)
{
    int a, sum, mult;
    printf ("Input number: \n");
    scanf("%d",&a); 

    for(int i=10; i <= a; i++)
    {
        sum = 0;
        mult = 1;
        int temp = i;
        while (temp > 0)  
        {
            sum += temp%10;
            mult *= temp%10;
            temp /= 10;
        }

        if (sum == mult) printf ("%d ",i);
        
    }      
    return 0;

}