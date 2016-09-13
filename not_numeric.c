#include <stdio.h>

int potencia(int n, int e)
{
    int p=1;
    if (e==0)
        p=1;
    while (e!=0)
    {
        p=p*n;
        --e;
    }
    return p;
}

double  notacion_cientifica(char *s)
{
    int i, e=0, neg=0,fin,punto;
    double numero=0, decimal=0;
    for (i=0;*s!='\0';*s++)
    {
        if (*s >= '0' && *s <= '9' && e==0)
        {
            numero=numero*10+(*s-'0');
            punto=i;
        }
        if (*s >= '0' && *s <= '9' && e==1)
            decimal=decimal*10+(*s-'0');
        if (*s == 'e')
            e=1;
            fin=i-1;
        if (*s == '-')
            neg=1;
        ++i;
    }
    if (fin!=punto)
        numero=numero/potencia(10,fin-punto);
    if (neg==1)
        numero=numero/potencia(10,decimal);
    else
        numero=numero*potencia(10,decimal);
    return numero;
}

main()
{
    printf("%.10f",notacion_cientifica("123.54e-5"));
}
