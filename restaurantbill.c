/*How I'm going to do this is by making the meal cost an array*/
/*Then I'm going to list all the other variables*/
/*I'll use scanf to ask for the tip and tax percentage*/
/*I included a random number generator that generated the numbers 1-4*/
/*The number corresponds to the array number of the meal cost, so it will display one of the meal costs*/
/*It goes through a for loop and then the random number will equal the array number*/
/*Then it calculates the tax cost and tip cost and adds those numbers to the total bill and then prints the total bill*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float meal_cost[4] = {9.95, 4.55, 13.25, 22.35};
    float tax;
    float tip;
    int r;
    time_t t;
    float tip_and_tax_add;
    

    printf("Enter the tax percentage: \n");
    scanf("%f", &tax);
    printf("Your tax percentage is %.2f\n", tax);

    printf("Enter the tip percentage: \n");
    scanf("%f", &tip);
    printf("Your tip percentage is %.2f\n", tip);
    
    srand((unsigned) time(&t));
    for(int i = 0; i<1; i++)
    {
        r = rand() % 4;
        meal_cost[i] = meal_cost[r];
        printf("Your meal cost is: $%.2f\n", meal_cost[i]);
        float tax_final = (tax/100)*meal_cost[i];
        float tip_final = (tip/100)*meal_cost[i];
        tip_and_tax_add = tax_final + tip_final;
        float total_bill = tip_and_tax_add + meal_cost[i];
        printf("Your total cost is: $%.2f\n", total_bill);

    }
    return 0;
}