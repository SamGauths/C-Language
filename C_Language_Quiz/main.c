#include <stdio.h>
#include <stdlib.h>

int question(int counter)
{
    switch(counter)
    {
        case 1:
            printf("C is an object oriented language.");
        break;

        case 2:
            printf("C has been created after C++.");
        break;

        case 3:
            printf("C is faster than Python.");
        break;

        case 4:
            printf("C as more than 30 keywords.");
        break;

        case 5:
            printf("C is the oldest programming language.");
        break;

        case 6:
            printf("Linux has been written in C.");
        break;

        case 7:
            printf("print() is the function to print text on the screen in C.");
        break;

        case 8:
            printf("Bill Gates is the creator of C language.");
        break;

        case 9:
            printf("You can create Graphical User Interfaces with C.");
        break;

        case 10:
            printf("C has been created in the early 70s.");
        break;
    }
    printf("\nTrue[1], False[0]\n");
}


int trueFalse(int entry, int possibility)
{
    if(possibility == 1)
    {
        if(entry == 1)
        printf("GOOD!");
        else if(entry == 0)
        printf("WRONG!");
    }
    if(possibility == 2)
    {
        if(entry == 0)
        printf("GOOD!");
        else if(entry == 1)
        printf("WRONG!");
    }
    printf("\n");
}


int answer(int counter, int entry)
{
    switch(counter)
    {
        case 1:
            trueFalse(entry, 2);
        break;

        case 2:
            trueFalse(entry, 2);
        break;

        case 3:
            trueFalse(entry, 1);
        break;

        case 4:
            trueFalse(entry, 1);
        break;

        case 5:
            trueFalse(entry, 2);
        break;

        case 6:
            trueFalse(entry, 1);
        break;

        case 7:
            trueFalse(entry, 2);
        break;

        case 8:
            trueFalse(entry, 2);
        break;

        case 9:
            trueFalse(entry, 1);
        break;

        case 10:
            trueFalse(entry, 1);
        break;
    }
}


int main()
{
    int entry = 0, counter = 1;

    printf("*** C Language True or False Quiz ***\n\n");

    do
    {
        printf("Question %d\n", counter);
        question(counter);
        scanf("%d", &entry);
        answer(counter, entry);
        counter ++;
        printf("\n");

        if(counter == 11)
            break;

    }while(entry == 0 || entry == 1);

    return 0;
}
