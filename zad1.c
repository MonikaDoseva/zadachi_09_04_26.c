// 1
#include <stdio.h>

int main()
{
    int N,M;

    printf("Vuvedi broi redove i koloni:\n");
    scanf("%d%d",&N,&M);

    int a[100][100];

    printf("Vuvedi elementite na matricata:\n");

    // vuvejdaneto na matricata
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int rowsOK=1; // flag za redovete
    int colsOK=1; // flag za kolonite

    // proverka dali redovete sa narastvashti
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M-1;j++)
        {
            // ako tekushtoto chislo e po-golqmo ot sledvashtoto
            if(a[i][j] > a[i][j+1])
            {
                rowsOK=0;
            }
        }
    }

    // proverka dali kolonite sa namalqvashti
    for(int j=0;j<M;j++)
    {
        for(int i=0;i<N-1;i++)
        {
            // ako gornoto chislo e po-malko ot dolnoto
            if(a[i][j] < a[i+1][j])
            {
                colsOK=0;
            }
        }
    }

    // rezultat za redovete
    if(rowsOK)
        printf("Vsichki redove sa v narastvasht red\n");
    else
        printf("Ima red koito NE e v narastvasht red\n");

    // rezultat za kolonite
    if(colsOK)
        printf("Vsichki koloni sa v namalqvasht red\n");
    else
        printf("Ima kolona koqto NE e v namalqvasht red\n");

    return 0;
}
