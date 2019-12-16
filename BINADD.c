#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100000

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        char a[MAX + 1], b[MAX + 1];
        int lena, lenb, eqllen, diff, i, j, no_of_zeros = 0;
        scanf("%s", a);
        scanf("%s", b);
        lena = strlen(a);
        lenb = strlen(b);
        char *A, *B;
        eqllen = lena;
        if(lena > lenb)
        {
            eqllen = lena;
            A = (char *)malloc(sizeof(char) * (eqllen + 1));
            B = (char *)malloc(sizeof(char) * (eqllen + 1));
            diff = lena - lenb;
            for(i = 0; diff > 0; i++, diff--)
            {
                *(B + i) = '0';
                no_of_zeros++;
            }
            for(j = 0; j < lenb; j++)
            {
                *(B + i) = b[j];
                if(b[j] == '0')
                {
                    no_of_zeros++;
                }
                i++;
            }
            for(i = 0; i < lena; i++)
            {
                *(A + i) = a[i];
            }
        }
        else if(lenb > lena)
        {
            eqllen = lenb;
            A = (char *)malloc(sizeof(char) * (eqllen + 1));
            B = (char *)malloc(sizeof(char) * (eqllen + 1));
            diff = lenb - lena;
            for(i = 0; diff > 0; i++, diff--)
            {
                *(A + i) = '0';
            }
            for(j = 0; j < lena; j++)
            {
                *(A + i) = a[j];
                i++;
            }
            for(i = 0; i < lenb; i++)
            {
                *(B + i) = b[i];
                if(b[i] == '0')
                {
                    no_of_zeros++;
                }
            }
        }
        else
        {
            A = (char *)malloc(sizeof(char) * (eqllen + 1));
            B = (char *)malloc(sizeof(char)*(eqllen + 1));
            for(i = 0; i < eqllen; i++)
            {
                *(A + i) = a[i];
                *(B + i) = b[i];
                if(b[i] == '0')
                {
                    no_of_zeros++;
                }
            }
        }
        int fnd = 0, smans = 0, maxsmans = 0;
        for(i = 0; i < eqllen; i++)
        {
            if(*(A + i) == '1' && *(B + i) == '1')
            {
                fnd = 1;
                smans = 0;
                for(j = i-1; j >= 0; j--)
                {
                    if((*(A + j) == '1' && *(B + j) == '0') || (*(A + j) == '0' && *(B + j) == '1'))
                    {
                        smans++;
                    }
                    else
                    {   
                        break;
                    }
                }
                if(smans > maxsmans)
                {
                    maxsmans = smans;
                }
            }
        }
        
        if(no_of_zeros == eqllen)
        {
            printf("0\n");
        }
        else if(fnd == 1)
        {
            printf("%d\n", 2+maxsmans);
        }
        else
        {
            printf("1\n");
        }
    }
    exit(0);
}



