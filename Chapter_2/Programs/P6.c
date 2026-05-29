#include <stdio.h>

int main(void)
{
    int x, res;

    printf("input val for x: ");
    scanf("%d",&x);

    res = ((((3*x +2)*x - 5)*x - 1)*x -7)*x - 6;

    printf("result: %d\n", res);

    return 0;
}
