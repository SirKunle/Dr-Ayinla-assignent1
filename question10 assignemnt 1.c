#include <stdio.h>
#include <stdlib.h>

int three()
{
    int count;
    printf("How many numbers do you intend to count (n) ? ");
    scanf("%d", &count);
    int num =0;
    for(int n=0; n<count; n++){
        num = num + 1;
        printf("%d\n", num);
    }
    return 0;
}


