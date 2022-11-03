#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char *num_array_len;
int num_array[];
int len_of_array;

void init_array(void)
{
    printf("How many integers would you like to enter? \n");
    scanf("%d", &len_of_array);
    num_array_len = malloc(len_of_array);
    num_array[*num_array_len];
    for (int i = 0; i < len_of_array; i++) {
        printf("What is the number at position %d? \n", i+1);
        scanf("%d", &num_array[i]);
    }
}

void sort(void)
{
    int temp;
    for (int i = 0; i < len_of_array; i++) {
        temp = num_array[i];
        if (num_array[i] > num_array[i+1]) {
            num_array[i] = num_array[i+1];
            num_array[i+1] = temp;
        }
    }
}

float average(void)
{
    float sum = 0;
    float avg;

    for (int i = 0; i < len_of_array; i++) {
        sum += num_array[i];
    }

    avg = sum / len_of_array;

    printf("%f\n", avg);
    return avg;
}

int median(void)
{
    int middle;

    return middle;
}

int maximum(void)
{
    int max = 0;

    for (int i = 0; i < len_of_array; i++) {
        if (num_array[i] > max) {
            max = num_array[i];
        }
    }
    printf("\n%d\n", max);
    return max;
}

int minimum(void)
{
    int min;

    for (int i = 0; i < len_of_array; i++) {
        if (num_array[i] < min) {
            min = num_array[i];
        }
    }
    printf("%d\n", min);
    return min;
}

int main(void)
{
    init_array();
    /* for (int i = 0; i < len_of_array; i++) { */
    /*     printf("%d ", num_array[i]); */
    /* } */

    sort();

    for (int i = 0; i < len_of_array; i++) {
        printf("%d ", num_array[i]);
    }

    /* maximum(); */
    /* minimum(); */
    /* average(); */
    return 0;
}
