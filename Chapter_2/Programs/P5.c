#include <stdio.h>

int main(void)
{
    int x, res;

    printf("input val for x: ");
    scanf("%d",&x);

    res = (3*x*x*x*x*x) + (2*x*x*x*x) - (5*x*x*x) - (x*x) + (7*x) -6;

    printf("result: %d\n", res);

    return 0;
}
