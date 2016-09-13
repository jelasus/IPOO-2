#include <stdio.h>
#include <string.h>

void invertido(char *s, int low,int up)
{
    char temp;
    if (low>=up)
        return;
    else
        temp=*(s+low);
        *(s+low)=*(s+up);
        *(s+up)=temp;
        invertido(s,++low,--up);
}
main()
{
    char d[]="hello world";
    invertido(d,0,strlen(d)-1);
    printf("%s",d);
}
