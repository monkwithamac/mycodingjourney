#include <stdio.h>
int main()
{int x,y;
    printf("enter number one");
    scanf("%d", &x);
    printf("enetr second number");
    scanf("%d", &y);
    int temp = x;
    x = y;
    y = temp;
    printf("the swaped numbers are %d", x);
    printf("%d", y);
    return 0;

}