// Задача 2.Ровно три цифры.
// Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.
#include <stdio.h>

int main(void)
{
    int a, i = 0;
    printf ("Input number: \n");
    scanf("%d",&a); 

    while (a%10 != 0)
    {
        a = a/10;
        i++;
    }
    
    if (i == 3) printf ("YES \n");
    else printf ("NO \n");
        
    return 0;
}