#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float compound_interest(float p, float i, int n)
{
    float total_compounded_value;

    total_compounded_value = p * pow((1 + i), n);

    return total_compounded_value;
}

int main(void)
{
    printf("%.2f", compound_interest(2000, .06, 2));

    return 0;
}
