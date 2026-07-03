#include <stdio.h>
#include <cs50.h>

int main (void) {
    
    int number = get_int("Giv a number: ");

    int sum = 0;

    while (number > 0)
    {
        int current_number = number % 10;

        sum = sum + current_number;

        number = number / 10;
    }

    printf("%i\n", sum);
    return 0;
    
}