#include <stdio.h>
// Euclidean Algorithm
//
// a % b => b, a % b
//
// gcd(48, 18) => gcd(18, 48 % 18)
// gcd(12, 18 % 12) => gcd(12, 6)
// gcd(6, 12 % 6) => gcd(6, 0)
//
// gcd(48, 18) = 6

int greatest_common_denominator(int a, int b)
{
    int tmp;
    while (b != 0) {
        /* tmp = a % b; */
        /* printf("%d %d %d\n", a, b, tmp); */
        /* a = tmp; */
        /* b = b % a; */
        /* printf("%d %d %d\n", a, b, tmp); */
        tmp = a % b;
        a = b;
        b = tmp;

        if (b == 0) {
            return a;
        }
    }
    return a;
}

int main(void)
{
    int a;
    int b;
    printf("Largest of two integers? \n");
    scanf("%d", &a);
    printf("Smaller of two integers? \n");
    scanf("%d", &b);
    printf("%d", greatest_common_denominator(a, b));
    return 0;
}
