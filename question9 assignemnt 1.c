#include <stdio.h>
#include <stdlib.h>

int two(){
    char name1[10];
    char name2[10];
    char loop = 0;
    while(loop<10){
    printf("Enter the names of 10 student; ");
    scanf("%s %s", name1, name2);
    printf("%s %s\n", name1, name2);
    loop++;
    }
    return 0;
}

