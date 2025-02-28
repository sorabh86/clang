#include <stdio.h>
#include "../utils/getcha.h"

int main()
{
	char a[] = "Hello world";
	const char *ap = "Goodbye world";

	int i = 0;

	while(*ap)
	{
		printf("Addr: %x, %c\n",ap,*ap);
		ap++;
	}
	while(a[i])
	{
		printf("Addr:%x, %c\n",a+i,a[i]);
		i++;
	}
	GETCHA();
	return 0;
}
