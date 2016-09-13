#include <stdio.h>

void converter(char *c)
{
    *c=*c+('a'-'A');
}

main()
{
    char c;
    char *d;
    c=getchar();
    d=&c;
    converter(d);
    printf("%s",d);
}
