#include <stdio.h>
#include <stdbool.h>

void sieve(int range)
{
    bool bool_set[range];
    int num_set[range];

    for (int k = 0; k < range; k++) {
        num_set[k] = k;
        if (k < 2) {
            bool_set[k] = false;
        } else {
            bool_set[k] = true;
        }
    }

    for (int i = 2; i < range; i++) {
        for (int n = 1; n < range; n++) {
            if (i*n < range && i*n != i) {
                bool_set[i*n] = false;
            } else {
                continue;
            }
        }
    }

    for (int j = 0; j < range; j++) {
        if (bool_set[j] == true) {
            printf("%d %d\n", bool_set[j], num_set[j]);
        }
    }
}

int main(void)
{
    sieve(1000);
    return 0;
}
