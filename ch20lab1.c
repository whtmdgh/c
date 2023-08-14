#include <stdio.h>

int main()
{
    int num;
    int *pX, *pY;

    pX = pY = &num;
    num =30;

    *pY += 5;

    printf("*pX: %d, pY: %d, num: %d", *pX, *pY, num);

}

