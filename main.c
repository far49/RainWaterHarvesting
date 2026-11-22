
#include <stdio.h>

// Function declarations
void calculateRainwater();
void calculateTankCapacity();
void calculateWaterSavings();

int main()
{
    int choice;

    do
    {
        printf("\n====================================\n");
        printf("    RAINWATER HARVESTING SYSTEM\n");
        printf("====================================\n");

        printf("1. Calculate Rainwater Harvesting\n");
        printf("2. Calculate Required Tank Capacity\n");
        printf("3. Calculate Water Cost Savings\n");
        printf("4. Exit\n");

        printf("------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                calculateRainwater();
                break;

            case 2:
                calculateTankCapacity();
                break;

            case 3:
                calculateWaterSavings();
                break;

            case 4:
                printf("\nThank you for using the system!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}

// Function 1: Calculate Rainwater Harvesting
void calculateRainwater()
{
    float area, rainfall, efficiency, water;

    printf("\n--- Rainwater Harvesting Calculation ---\n");

    printf("Enter roof area (in square metres): ");
    scanf("%f", &area);

    printf("Enter rainfall (in mm): ");
    scanf("%f", &rainfall);

    printf("Enter harvesting efficiency (0 to 100): ");
    scanf("%f", &efficiency);

    if(area <= 0 || rainfall < 0 ||
       efficiency < 0 || efficiency > 100)
    {
        printf("Invalid input values!\n");
        return;
    }

    water = (area * rainfall * efficiency) / 100;

    printf("\nTotal Harvestable Water: %.2f litres\n", water);

    printf("Harvesting Efficiency: %.2f%%\n", efficiency);
}

// Function 2: Calculate Required Tank Capacity
void calculateTankCapacity()
{
    float area, rainfall, efficiency, water;

    printf("\n--- Tank Capacity Calculation ---\n");

    printf("Enter roof area (in square metres): ");
    scanf("%f", &area);

    printf("Enter rainfall (in mm): ");
    scanf("%f", &rainfall);

    printf("Enter harvesting efficiency (0 to 100): ");
    scanf("%f", &efficiency);

    if(area <= 0 || rainfall < 0 ||
       efficiency < 0 || efficiency > 100)
    {
        printf("Invalid input values!\n");
        return;
    }

    water = (area * rainfall * efficiency) / 100;

    printf("\nRequired Tank Capacity: %.2f litres\n", water);

    printf("Recommended Tank Capacity: %.2f litres\n",
           water * 1.10);
}

// Function 3: Calculate Water Cost Savings
void calculateWaterSavings()
{
    float water, price, savings;

    printf("\n--- Water Cost Savings ---\n");

    printf("Enter stored water (in litres): ");
    scanf("%f", &water);

    printf("Enter water cost per 1000 litres (Rs.): ");
    scanf("%f", &price);

    if(water < 0 || price < 0)
    {
        printf("Invalid input values!\n");
        return;
    }

    savings = (water / 1000) * price;

    printf("\nEstimated Water Cost Savings: Rs. %.2f\n",
           savings);
}
