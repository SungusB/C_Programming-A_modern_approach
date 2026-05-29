#include <stdio.h>

float piCalc(int i)
{
    float pi = 0.0, numholder = 0.0;
    int counter = 1;

    for(float j = 1; j < i; j+=2)
    {
        if (counter > 0)
        {
            pi += (1.0f/j);
        }

        else
        {
            pi -= (1.0f)/j;
        }

        counter *= -1;
    }

    return pi*4;
}

int main(void)
{
    float pi, radius;
    int value = 0 , iterator = 33554434;

    scanf("%f", &radius);

    pi = piCalc(iterator);

    printf("%f\n", (4.0f/3.0f)*pi*radius*radius*radius);

    return 0;
}
