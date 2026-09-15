#include <stdio.h>

int main()
{
    float probabilityA;
    float probabilityB;
    float probabilityBoth;

    printf("=== Probability of Two Independent Events ===\n\n");

    printf("Enter probability of Event A (0 to 1): ");
    scanf("%f", &probabilityA);

    printf("Enter probability of Event B (0 to 1): ");
    scanf("%f", &probabilityB);

    if (probabilityA < 0 || probabilityA > 1 ||
        probabilityB < 0 || probabilityB > 1)
    {
        printf("\nInvalid input!\n");
        printf("Probability must be between 0 and 1.\n");
    }
    else
    {
        probabilityBoth = probabilityA * probabilityB;

        printf("\nProbability of A = %.2f\n", probabilityA);
        printf("Probability of B = %.2f\n", probabilityB);

        printf("\nProbability of A AND B = %.4f\n",
               probabilityBoth);

        printf("Percentage = %.2f%%\n",
               probabilityBoth * 100);
    }

    return 0;
}