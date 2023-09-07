#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply number
 * @argc: int
 * @*argv[]: char
 * Return: int
*/

int main(int argc, char *argv[]) {
    int num1, num2, result, i;
    if (argc != 3) {
        printf("Error\n");
        exit(98);
    }
    for (i = 0; argv[1][i] != '\0'; i++) {
        if (argv[1][i] < '0' || argv[1][i] > '9') {
            printf("Error\n");
            exit(98);
        }
    }
    for (i = 0; argv[2][i] != '\0'; i++) {
        if (argv[2][i] < '0' || argv[2][i] > '9') {
            printf("Error\n");
            exit(98);
        }
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    result = num1 * num2;
    printf("%d\n", result);
    return 0;
}