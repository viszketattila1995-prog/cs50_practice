#include <stdio.h>
#include <cs50.h>

void add(int x, int y);

void times(int x, int y);

int main(void)
{

    int x = get_int("What is x? ");

    int y = get_int("What is y? ");

    add(x, y);

    times(x, y);
    
}

void add(int x, int y)
{
    printf("sum: %i\n", x + y);
}

void times(int x, int y)
{
    printf("times: %i\n", x * y);
}