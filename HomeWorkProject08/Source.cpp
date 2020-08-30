#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char input[100];
    int sum{};
    int x;

    printf(" Enter number : ");
    scanf("%s", &input);
    printf("\n ");

    for (x = 0; x < 100; x++) {

        if (input[x] == '\0')
            break;

        sum += input[x] - '0';
    }


    printf("Sum total is %d", sum);

    printf("\n\n\n");
    return 0;
}