#include <stdio.h>
int gcdTwo(int a, int b)
{
    int ans = 0;
    if (a > b)
    {
        ans = b;
    }
    else
    {
        ans = a;
    }
    for (int i = ans; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
        else
        {
            continue;
        }
    }
}
int main()
{
    int numberOne, numberTwo;
    printf("Enter the number ");
    scanf("%d %d", &numberOne, &numberTwo);
    printf("The GCD of %d and %d is %d", numberOne, numberTwo, gcdTwo(numberOne, numberTwo));
    return 0;
}
