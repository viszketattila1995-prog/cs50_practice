#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Input: ");

    //For loop-on bellül kiszedjük az input hosszát.
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        printf("%c", text[i]);
    }
    printf("\n");
    
}