#include <stdio.h>

int main()
{
    int a, s = 0;

    printf("c language quiz\n");

    printf("\n1. who developed c language?\n");
    printf("1. dennis ritchie\n2. james gosling\n3. bjarne stroustrup\n4. guido van rossum\n");
    printf("enter your answer: ");
    scanf("%d", &a);

    if(a == 1)
        s++;

    printf("\n2. which header file is used for printf()?\n");
    printf("1. math.h\n2. stdio.h\n3. string.h\n4. stdlib.h\n");
    printf("enter your answer: ");
    scanf("%d", &a);

    if(a == 2)
        s++;

    printf("\n3. which symbol is used to end a statement in c?\n");
    printf("1. .\n2. :\n3. ;\n4. ,\n");
    printf("enter your answer: ");
    scanf("%d", &a);

    if(a == 3)
        s++;

    printf("\n4. which loop is guaranteed to execute at least once?\n");
    printf("1. for\n2. while\n3. do while\n4. none\n");
    printf("enter your answer: ");
    scanf("%d", &a);

    if(a == 3)
        s++;

    printf("\n5. which function is used to find the length of a string?\n");
    printf("1. strcpy()\n2. strlen()\n3. strcmp()\n4. strcat()\n");
    printf("enter your answer: ");
    scanf("%d", &a);

    if(a == 2)
        s++;

    printf("\nyour score = %d/5\n", s);

    if(s == 5)
        printf("excellent");
    else if(s >= 3)
        printf("good");
    else
        printf("better luck next time");

    return 0;
}