#include <stdio.h>

int strindex(char *s, char t)
{
    int i,c=0;
    for (i=0; *s!='\0'; s++)
    {
        if (*s==t)
           c=i;
        ++i;
    }
    if (c==0)
        return -1;
    else
        return c;
}

main()
{
    char *s="hola";
    char t='j';
    printf("%d",strindex(s,t));
}
