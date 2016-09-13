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

void notacion_cientifica(char *s)
{
    int punto, i=0,j, fin=-1, esta=0,out=1,tot;
    float num,numero,decimal=1;
    while (s[i] != '\0')
    {
        if (s[i] == '.')
        {
            punto=i;
            ++esta;
        }
        if (s[i] == 'e')
        {
            fin=i;
            if (s[i+1]=='-')
                out=0;
        }
        ++i;
    }
    tot=i;
    if (fin==-1)
        fin=i;
    for (j=0, i=0;j<(fin-esta);j++)
    {
        if (s[j] == '.')
            ++i;
        numero=numero+((s[i]-'0')*potencia(10,fin-j-esta-1));
        ++i;
    }
    if (punto!=fin)
        num=numero/potencia(10,(fin-punto-1));
    if (s[fin+1]=='-')
        j=fin+2;
    else
        j=fin+1;
    if (fin!=tot)
        decimal=0;
        for (; j<tot; ++j)
            decimal=decimal+(potencia(10,tot-j-1)*(s[j]-'0'));
        decimal=potencia(10,decimal);
    if (out==0)
        num=num/decimal;
    else
        num=num*decimal;

    printf("%f", num);
}

main()
{
    notacion_cientifica("123.54e-5");
}

