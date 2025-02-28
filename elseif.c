#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char Buffer[10];

    if (argc < 2)
    {
        printf("Usage: we need an option.\n");
        return 1;  // Use return instead of exit(1)
    }

    // Copy safely and ensure null termination
    strncpy(Buffer, argv[1], sizeof(Buffer) - 1);
    Buffer[sizeof(Buffer) - 1] = '\0';

    if (strcmp(Buffer, "/?") == 0)
        printf("They want help.\n");
    else if (strcmp(Buffer, "/A") == 0)
        printf("Option A\n");
    else if (strcmp(Buffer, "/B") == 0)
        printf("Option B\n");
    else
        printf("Unknown Option\n");

    return 0;
}
