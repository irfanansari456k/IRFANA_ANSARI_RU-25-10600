#include <stdio.h>

/* Function to calculate total bill */
int calculateBill(int price[], int qty[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += price[i] * qty[i];
    }
    return total;
}

int main()
{
    int price[4] = {100, 150, 80, 60};
    int quantity[4];
    int totalBill;

    printf("----- Online Food Order Menu -----\n");
    printf("1. Burger   - Rs. 100\n");
    printf("2. Pizza    - Rs. 150\n");
    printf("3. Sandwich - Rs. 80\n");
    printf("4. Coffee   - Rs. 60\n");

    printf("\nEnter quantity for each item:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Item %d: ", i + 1);
        scanf("%d", &quantity[i]);
    }

    totalBill = calculateBill(price, quantity, 4);

    printf("\nTotal Bill Amount = Rs. %d\n", totalBill);
    printf("Thank you for ordering!\n");

    return 0;
}