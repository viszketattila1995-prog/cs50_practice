#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

int main (void) {

    bool isRunning = true;

    while (isRunning)
    {
        char aChar = get_char("Give me a char: ");

        if (aChar == 'a')
        {
            continue;
        }
        else
        {
            isRunning = false;
        }
        
    }
    
}