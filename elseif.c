#include <stdio.h>

int main(int argc, char *argv[])
{
    char Buffer[10];
    
    if (argc < 2)
    {
        printf("usage: we need an option.\n");
        exit(1);
    }
    strncpy(Buffer, argv[1],9);
    
    if(!strcmp(Buffer, "/?"))
        printf("They want help. \n");
    else if( !strcmp(Buffer, "/A"))
        printf("Option A\n");
    else if(!strcmp(Buffer, "/B"))
        printf("Option B\n");
    else
        printf("Unknown Option\n");
}
