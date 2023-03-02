#include <stdio.h>
#include <string.h>
#include "search.h"

int main()
{
    printf("Program Begin!\n");

    int a = 10;
    a += 1;

    const char* str = "Hello World!";
    int len = (int)strlen(str);

    for (int i = 0; i < len; i++)
    {
        char c = str[i];
        printf("%c\n", c);
    }

    printf("Program End!\n");
    return 0;
}
