#include <stdio.h>
#include <cs50.h>

//Pototype
void meow(void);

void meowTwo(int times);


int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }

    int n = get_int("What is n? ");

    meowTwo(n);
    
}

void meow(void)
{
    printf("meow\n");
}

void meowTwo(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("meow,\n");
    }
    
}

