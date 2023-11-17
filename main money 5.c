#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>


int main()
{
    int x;
    printf("enter an amount of money : ");
    scanf("%d",&x);
    int hundred=x/100 , y=x%100 , twenty=y/20 , z=y%20 , ten=z/10 , t=z%10 , five=t/5 , f=t%5 , one=f/1;
    printf(" hundred=%d\n twenty=%d\n ten=%d\n five=%d\n one=%d",hundred,twenty,ten,five,one);
    return 0;
}
