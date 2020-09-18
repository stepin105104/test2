
#include <stdio.h>
#include <stdlib.h>
#include "test_prime.h"

int main()
{
    int a,number;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("enter the number to check\n");
    scanf("%d",&number);
    test_main(a,number);
    return 0;
}
