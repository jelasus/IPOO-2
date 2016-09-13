#include <stdio.h>

int not_cientific(char *s)
{
    char *a;
    int r;
    while(*s++!='.')
    {
        ++*a=s;
    }
    return s;
}
main()
{
    char *s="1234";
    not_cientific(s);
}
