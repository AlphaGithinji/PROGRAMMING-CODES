#include <stdio.h>

float calculateChargesPerUnit(int unitsconsumed) {
	float chargeperunit;
    if(unitsconsumed <= 199) {
        chargeperunit=1.20;
    } else if(unitsconsumed >= 200 && unitsconsumed < 400) {
        chargeperunit =1.50;
    } else if(unitsconsumed >= 400 && unitsconsumed < 600) {
        chargeperunit=1.80;
    } else {
        chargeperunit= 2.00;
    }
    return chargeperunit;
}

/*calculate the total bill with surcharge*/
float calculateTotalBill(int unitsconsumed, float chargesPerUnit) {
    float totalBill = unitsconsumed * chargesPerUnit;
    float surcharge = 0;
    
    if (totalBill > 400) {
        surcharge = totalBill * 0.15;
        totalBill += surcharge;
    }
    
    if (totalBill < 100) {
        totalBill = 100;
    }
    
    return totalBill;
}

/*display customer's detyails*/
void displayBill(int customerId, char customerName[], int unitsconsumed, float chargesPerUnit, float totalBill) {
	
    printf("Customer's Id: %d\n", customerId);
    printf("Customer's Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsconsumed);
    printf("Charge per Unit: %.2f\n", chargesPerUnit);
    printf("Total Bill: %.2f\n", totalBill);
}

int main() {
    int customerId, unitsconsumed;
    float chargesPerUnit, totalBill;
    char customerName[50];

    //  customer details
    printf("Enter the Customer's Id: ");
    scanf("%d", &customerId);
    
    printf("Enter the Customer's Name: ");
    scanf("%s", customerName);
    
    printf("Enter the Units Consumed: ");
    scanf("%d", &unitsconsumed);

    //  charges per unit and total bill
    chargesPerUnit = calculateChargesPerUnit(unitsconsumed);
    totalBill = calculateTotalBill(unitsconsumed, chargesPerUnit);
    
    // Display the bill
    displayBill(customerId, customerName, unitsconsumed, chargesPerUnit, totalBill);
    
    return 0;
}