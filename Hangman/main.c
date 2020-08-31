#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int one()
{   printf("  _____ \n");
    printf("  |    |\n");
    printf("       |\n");
    printf("       |\n");
    printf("       |\n");
}

int two()
{   printf("  _____ \n");
    printf("  |    |\n");
    printf("  O    |\n");
    printf("       |\n");
    printf("       |\n");
}

int three()
{   printf("  _____ \n");
    printf("  |    |\n");
    printf("  O    |\n");
    printf("  |    |\n");
    printf("       |\n");
}

int four()
{   printf("  _____ \n");
    printf("  |    |\n");
    printf("  O    |\n");
    printf(" /|    |\n");
    printf("       |\n");
}

int five()
{   printf("  _____ \n");
    printf("  |    |\n");
    printf("  O    |\n");
    printf(" /|\\\   |\n");
    printf("       |\n");
}

int six()
{   printf("  _____ \n");
    printf("  |    |\n");
    printf("  O    |\n");
    printf(" /|\\\   |\n");
    printf(" /     |\n");
}

int seven()
{   printf("  _____ \n");
    printf("  |    |\n");
    printf("  O    |\n");
    printf(" /|\\\   |\n");
    printf(" / \\\   |\n");
}


int main(int argc, char *argv[])
{
    int errors = 0, count = 0, check = 0, end = 0;
    char entry = 0;
    char word[] = "PROGRAMMING", c_word[100] = "";

    printf("*** Hangman ***\n\n");

    for(int i=0; i<strlen(word); i++)
        c_word[i] = '*';

    do
    {
        check = 0;
        printf("\n%d. Word: %s\n", count, c_word);
        scanf(" %c", &entry);

        for(int i=0; i<strlen(word); i++)
        {
          if(entry == word[i])
          {
           c_word[i] = word[i];
           check = 1;
          }
        }

        if(check == 0)
           errors ++;

        count ++;
        printf("Errors: %d\n", errors);

        switch(errors)
        {
            case 0:
                one();
            break;

            case 1:
                two();
            break;

            case 2:
                three();
            break;

            case 3:
                four();
            break;

            case 4:
                five();
            break;

            case 5:
                six();
            break;

            case 6:
                seven();
            break;
        }

        if(strcmp(word, c_word) == 0)
        {
         printf("YOU WON!!!\n\n");
         end = 1;
        }
        else if(errors == 6)
        {
         end = 1;
         printf("GAME OVER!!!\n\n");
        }

    }while(end == 0);

    return 0;
}
