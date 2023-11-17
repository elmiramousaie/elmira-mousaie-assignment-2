#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("enter a number : ");
    scanf("%f",&x);
    printf("x=%f\n" , x);
    int round_off=x;
    printf("round_off=%.0f",x);
    return 0;
}
