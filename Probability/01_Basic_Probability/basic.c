#include <stdio.h>

int main(){
    int totalOutcomes;
    int favourableOutcomes;
    float probability;
    printf("=== Basic Probability Calculator ===\n\n");
    printf("Enter total number of outcomes: ");
    scanf("%d", &totalOutcomes);
    printf("Enter number of favourable outcomes: ");
    scanf("%d", &favourableOutcomes);
    if (favourableOutcomes > totalOutcomes){
        printf("\nInvalid input!\n");
        printf("Favourable outcomes cannot be greater than total outcomes.\n");
    }
    else if (totalOutcomes <= 0 || favourableOutcomes < 0){
        printf("\nInvalid input!\n");
    }
    else{
        probability = (float)favourableOutcomes / totalOutcomes;
        printf("\nProbability = %.2f\n", probability);
        printf("Probability = %.2f%%\n", probability * 100);
    }
    return 0;
}