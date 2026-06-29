#include <stdio.h>
#include <cs50.h>

//Pototype
void meow(void);

void meowTwo(int times);

int get_n(void);

///////////////////////////////////////////


int main(void)
{
    ///Basic print 3times
    for (int i = 0; i < 3; i++)
    {
        meow();
    }

    //Function vith return value
    int times = get_n();

    //Asking for number in main
    int n = get_int("What is n? ");

    meowTwo(n);

    meowTwo(times);
    
}

///////////////////////////////////////////////

int get_n(void)
{
    int number;

    while (true)

    {
        number = get_int("What is n? ");

        if (number > 0)
        {
            return number;
        }
        
    }
    
}

/////////////////////////////////////////

void meow(void)
{
    printf("meow\n");
}

////////////////////////////////////////

void meowTwo(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("meow,\n");
    }
    
}

