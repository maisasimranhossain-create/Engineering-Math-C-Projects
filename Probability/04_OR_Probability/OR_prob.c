#include <stdio.h>

int main()
{
    float probabilityA;
    float probabilityB;
    float probabilityBoth;
    float probabilityEither;

    printf("=== OR Probability Calculator ===\n\n");

    printf("Enter probability of Event A (0 to 1): ");
    scanf("%f", &probabilityA);

    printf("Enter probability of Event B (0 to 1): ");
    scanf("%f", &probabilityB);

    printf("Enter probability of A AND B (0 to 1): ");
    scanf("%f", &probabilityBoth);

    if (probabilityA < 0 || probabilityA > 1 ||
        probabilityB < 0 || probabilityB > 1 ||
        probabilityBoth < 0 || probabilityBoth > 1)
    {
        printf("\nInvalid input!\n");
        printf("All probabilities must be between 0 and 1.\n");
    }
    else
    {
        probabilityEither =
            probabilityA + probabilityB - probabilityBoth;

        printf("\nP(A) = %.2f\n", probabilityA);
        printf("P(B) = %.2f\n", probabilityB);
        printf("P(A AND B) = %.2f\n", probabilityBoth);

        printf("\nP(A OR B) = %.2f\n", probabilityEither);
        printf("Percentage = %.2f%%\n",
               probabilityEither * 100);
    }

    return 0;
}