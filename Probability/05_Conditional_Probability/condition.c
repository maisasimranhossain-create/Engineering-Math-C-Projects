#include <stdio.h>

int main()
{
    float probabilityBoth;
    float probabilityB;
    float conditionalProbability;

    printf("=== Conditional Probability Calculator ===\n\n");

    printf("Enter P(A AND B): ");
    scanf("%f", &probabilityBoth);

    printf("Enter P(B): ");
    scanf("%f", &probabilityB);

    if (probabilityBoth < 0 || probabilityBoth > 1 ||
        probabilityB <= 0 || probabilityB > 1)
    {
        printf("\nInvalid input!\n");
        printf("Probabilities must be between 0 and 1.\n");
    }
    else if (probabilityBoth > probabilityB)
    {
        printf("\nInvalid input!\n");
        printf("P(A AND B) cannot be greater than P(B).\n");
    }
    else
    {
        conditionalProbability =
            probabilityBoth / probabilityB;

        printf("\nP(A AND B) = %.2f\n", probabilityBoth);
        printf("P(B) = %.2f\n", probabilityB);

        printf("\nP(A | B) = %.4f\n",
               conditionalProbability);

        printf("Percentage = %.2f%%\n",
               conditionalProbability * 100);
    }

    return 0;
}