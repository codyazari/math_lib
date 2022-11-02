#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float pythagorean_theorem(void)
{
    int choice;

    float x, y;

    float side;

    printf("Press 1 to find the hypotenuse length, 2 to find a side length: \n");
    scanf("%d", &choice);

    printf("Enter side 1: \n");
    scanf("%f", &x);
    printf("Enter side 2: \n");
    scanf("%f", &y);

    switch (choice) {
        case 1:
            side =  sqrt(pow(x, 2) + pow(y, 2));
            return side;
        case 2:
            if (y > x) {
                side = sqrt(pow(y, 2) - pow(x, 2));
            } else {
                side = sqrt(pow(x, 2) - pow(y, 2));
            }
            return side;
    }
    return side;
}

void choice()
{
    int selection;
    printf("Select an option from below: \n");
    printf("1: Pythagorean Theorem\n");

    scanf("%d", &selection);
    switch (selection) {
        case 1:
            printf("%f\n", pythagorean_theorem());
    }
}

int main(void)
{
    choice();
    return 0;
}
