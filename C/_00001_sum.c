#include <stdio.h>

int Sum(int n)
{
    int i, partialSum;
    partialSum = 0;
    for (i = 1; i <= n; i++)
    {
        partialSum += i * i * i;
    }

    return partialSum;
}

int main()
{
    int sum = Sum(5);
    printf("sum of i^3 is %d\n", sum);
    return 0;
}
