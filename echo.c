#include <stdio.h>

main(int argc, char *argv[])
{
    while(--argc > 0)
        printf("sorabh cc echo: %s%s", *++argv, (argc>1)?" ":"");
    printf("\n");
    return 0;         
}
