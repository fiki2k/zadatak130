// Program treba provjerit jeli matrica simetricna.

#include <stdio.h>

int main()
{
    int A[10][10],B[10][10],i,j,m,n;
    int  simetricna;

    printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi element A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

    /*
     	Nadi transponiranu matricu.
     */
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            // Sprema svaki redak matrice A u stupce matrice B.
            B[i][j] = A[j][i];
        }
    }

    /*
     	Provjerava jeli matrica A jednaka transponiranoj matrici.
     */
    simetricna = 1;
    for(i=0; i<m && simetricna; i++)
    {
        for(j=0; j<n; j++)
        {
            // Ako matrica A nije jednaka transponiranoj.
            if(A[i][j] != B[i][j])
            {
                simetricna = 0;
                break;
            }
        }
    }

    /*
     	Dana matrica je simetricna.
     */
    if(simetricna==1)
    {
        printf("\nDana matrica je simetricna. : \n\n");

        for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n\n");
    }
    }
    else
    {
        printf("\nDana matrica nije simetricna.");
    }

    return 0;
}
