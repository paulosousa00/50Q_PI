#include <stdio.h>

void insere (int s[], int N, int x)
{
    int i, j;
    
    if (x<s[N-1])
    {
        for (i=0; i<N; i++)
        {
            if (x<s[i])
            {
                for(j=N; j!=i; j--)
                {
                    s[j]=s[j-1];
                }
                s[i]=x;
                break;
            }
        }
    }
    
    else s[N]=x;
}
