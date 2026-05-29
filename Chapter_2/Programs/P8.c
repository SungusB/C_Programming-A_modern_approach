#include <stdio.h>

int main(void)
{
    float loan, interest, mPay;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);


    printf("Enter interest rate: ");
    scanf("%f", &interest);


    printf("Enter monthly payment: ");
    scanf("%f", &mPay);

    printf("Balance remaining after first payment: %f\n", (loan-mPay)*(1.0 + interest/12.0));
    printf("Balance remaining after second payment: %f\n", (((loan-mPay)*(1.0 + interest/12.0))-mPay)*(1.0 + interest/12.0));
    printf("Balance remaining after third payment: %f\n", (((((loan-mPay)*(1.0 + interest/12.0))-mPay)*(1.0 + interest/12.0))-mPay)*(1.0 + interest/12.0));

    return 0;
}
