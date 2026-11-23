#include <stdio.h>

int main(void)
{
    double first, second, difference;

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &first, &second) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    difference = first - second;
    printf("Difference: %.2lf\n", difference);

    return 0;
}