#include <stdio.h>

int main(void)
{
    int val;
    int Twenties, Tens, Fives;

    printf("Enter a dollar amount: ");
    scanf("%d",&val);

    Twenties = val/20;
    val -= Twenties*20;

    Tens = val/10;
    val -= Tens*10;

    Fives = val/5;
    val -= Fives*5;

    printf("$20 bills: %d\n", Twenties);
    printf("$10 bills: %d\n", Tens);
    printf(" $5 bills: %d\n", Fives);
    printf(" $1 bills: %d\n", val);

    return 0;
}
