#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
    while (true)
    {
        n = get_int("What is n? ");
        if (n >= 0)
        {
            break;
        }
        
    }

    if (n < 0)
    {
        n = get_int("What is n? ");
    }
    

    for (int i = 0; i < n; i++) 
    {
        printf("meow\n");
    }
}
