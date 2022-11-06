#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int four()
{
    int x;
    int y;
    int z;
    char quadraticEqn1;
    char quadraticEqn2;
    char root;
    printf("Input the value of  X  :");
    scanf("%d", &x);
    printf("Input the value of  Y  :");
    scanf("%d", &y);
    printf("Input the value of  Z  :");
    scanf("%d", &z);
    root = sqrt((y*y) - (4*x*z));
    quadraticEqn1 = (-y + root)/(2*x);
    quadraticEqn2 = (-y - root)/(2*x);
    printf("The quadratic equations are %d and %d\n", quadraticEqn1, quadraticEqn2);
    return 0;
}

