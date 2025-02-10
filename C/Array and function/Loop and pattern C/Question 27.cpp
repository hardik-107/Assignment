//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 n 
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter n value: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += (i / i++); 
    }
    printf("Sum of squares of first %d natural numbers = %d\n", n, sum);
    
}
