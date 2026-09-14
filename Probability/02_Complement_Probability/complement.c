#include <stdio.h>

int main()
{
    float probability;
    float complement;

    printf("=== Complement Probability Calculator ===\n\n");

    printf("Enter probability of the event (0 to 1): ");
    scanf("%f", &probability);

    if (probability < 0 || probability > 1)
    {
        printf("\nInvalid probability!\n");
        printf("Probability must be between 0 and 1.\n");
    }
    else
    {
        complement = 1 - probability;

        printf("\nProbability of event = %.2f\n", probability);
        printf("Probability of event NOT happening = %.2f\n", complement);

        printf("\nPercentage of event happening = %.2f%%\n",
               probability * 100);

        printf("Percentage of event NOT happening = %.2f%%\n",
               complement * 100);
    }

    return 0;
}