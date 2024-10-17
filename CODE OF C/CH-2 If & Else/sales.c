#include <stdio.h>

int main() {
    float salesAmount, discount, amountToPay;

    printf("Enter the sales amount: ");
    scanf("%f", &salesAmount);

    if (salesAmount > 5000) {
        discount = salesAmount * 0.12;  // 12% discount
    } else {
        discount = salesAmount * 0.07;  // 7% discount
    }

    amountToPay = salesAmount - discount;

    printf("Total Discount: %.2f\n", discount);
    printf("Amount to be Paid: %.2f\n", amountToPay);

    return 0;
}
