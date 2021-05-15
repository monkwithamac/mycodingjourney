#include <stdio.h>
int main()
{int x;
    printf("enter year");
    scanf("%d", &x);
    if ( ((x % 400 == 0) || ( x % 4 == 0 && x % 100 != 0)))
    printf("the year is leap year");
    else
    printf("/nthe year is not leap year");
    return 0;

}