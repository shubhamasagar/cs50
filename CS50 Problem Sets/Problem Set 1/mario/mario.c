#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter value: ");
    }
    while(height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int k = 0; k < height - i - 1; k++){
            printf(" ");
        }


        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }



        printf("  ");



        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}