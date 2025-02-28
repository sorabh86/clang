#include <stdio.h>

int main(int argc, char *argv[])
{
    char i = 0;
    printf("Bet you can't type in a 7\n");
    while(i != '7')
    {
        i = getchar();
        getchar();
        printf("Ha! You typed %c.\n",i);
    }   
    printf("I'm done. \n");

    return 0;
}
