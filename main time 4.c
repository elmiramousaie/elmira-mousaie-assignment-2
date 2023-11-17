#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
int main()
{
    int x;
    printf("enter the elapsed seconds of the day :  ");
    scanf("%d",&x);
    int hour=x/3600 , y=x%3600 , minute=y/60 , z=y%60 , second=z%60 ;
    char t=':';
    printf("hour=%d,minute=%d,second=%d\n" , hour , minute , second);
    printf("%d%c%d%c%d" , hour , t , minute , t ,second);



    return 0;
}
