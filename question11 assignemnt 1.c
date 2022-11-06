#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    printf("Enter your name ;");
    scanf("%s", name);
    printf("Reverse of your name is ; %s", strrev(name));
    return 0;
}
