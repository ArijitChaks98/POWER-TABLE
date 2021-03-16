#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, i, exponent, result = 1;

    printf("enter the values\n");
    scanf("%d%d", &base, &exponent);

    for(i=0; i<exponent; i++)
    {
       result= result*base;
       printf("power value is = %d\n", result);
    }

    return 0;
}
