#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j,x,k,n;
    long int min = 100000;
    printf("\t\tMATRIX CHAIN MULTIPLICATION");
    printf("\nNo. of matrices: ");
    scanf("%d",&n);
    int M[n+1][n+1],p[n+1];
    printf("Input: ");
    for(i=0;i<=n;i++)
        scanf("%d",&p[i]);

    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            M[i][j]=0;

    for(x=2;x<=n;x++)
    {
        i=1;
        for(j=x;j<=n;j++)

        {
            for(k=i;k<j;k++)
             {
                a = M[i][k] + M[k+1][j] + (p[i-1]*p[k]*p[j]);
                if(a<min)
                    min=a;
          }

            M[i][j]=min;
            min = 100000;
            i++;
        }

    }
    for(i=1;i<=n;i++)
    {   printf("\n");
        for(j=1;j<=n;j++)
            printf(" %d ",M[i][j]);

    }
printf("\n\tCOST = %d",M[1][n]);
    return 0;
}
