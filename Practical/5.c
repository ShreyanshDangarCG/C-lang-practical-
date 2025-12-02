#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if(a > b && a > c)
        printf("Largest: %d\n", a);
    else if(b > a && b > c)
        printf("Largest: %d\n", b);
    else if(c > a && c > b)
        printf("Largest: %d\n", c);
    else
        printf("All numbers are equal or two are same\n");
    
    return 0;
}