#include <stdio.h>

int main(int argc, char *argv[])
{
    int height=8, lenght=12, width=10;
    int volume = height * lenght * width;

    printf("Dimensions: %dx%dx%d\n", lenght, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165)/166);

    return 0;
}
