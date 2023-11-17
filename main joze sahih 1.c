#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    float x;
    printf("enter a number : ");
    scanf("%f" , &x);
    printf("x=%f\n",x);
    int integer_part=x ;
    printf("integer_part=%d",integer_part);
    return 0;


}
