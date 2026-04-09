// 7
#include <stdio.h>

int main()
{
    int n,m;

    printf("Vuvedi redove i koloni: ");
    scanf("%d%d",&n,&m);

    int a[100][100];

    printf("Vuvedi matricata:\n");

    // vuvejdaneto
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int maxSum=-999999;

    int bestRow=0;
    int bestCol=0;

    // obhojdane na vsichki 3x3
    for(int i=0;i<=n-3;i++)
    {
        for(int j=0;j<=m-3;j++)
        {
            int sum=0;

            // smqtame sumata na 3x3
            for(int x=0;x<3;x++)
            {
                for(int y=0;y<3;y++)
                {
                    sum+=a[i+x][j+y];
                }
            }

            // proverka za max
            if(sum>maxSum)
            {
                maxSum=sum;
                bestRow=i;
                bestCol=j;
            }
        }
    }

    printf("Podmatricata s nai-golqma suma e:\n");

    // printirane na 3x3
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[bestRow+i][bestCol+j]);
        }
        printf("\n");
    }

    return 0;
}
