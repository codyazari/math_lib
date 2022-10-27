#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float pythagorean_theorem(int choice, float x, float y)
{
    float side;

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

int main(void)
{
    int choice;

    printf("Press 1 to find the hypotenuse length, 2 to find a side length: \n");
    scanf("%d", &choice);

    printf("%f", pythagorean_theorem(choice, 5, 10));


    return 0;
}
