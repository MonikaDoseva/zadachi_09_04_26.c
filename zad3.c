// 3
#include <stdio.h>

int main()
{
    int N,M;

    printf("Vuvedi broi redove i koloni:\n");
    scanf("%d%d",&N,&M);

    int a[100][100];

    printf("Vuvedi matricata:\n");

    // vuvejdaneto
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int min=a[0][0];
    int max=a[0][0];

    int minRow=0;
    int maxRow=0;

    // tursene na min i max
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(a[i][j]<min)
            {
                min=a[i][j];
                minRow=i;
            }

            if(a[i][j]>max)
            {
                max=a[i][j];
                maxRow=i;
            }
        }
    }

    // razmqna na redovete
    for(int j=0;j<M;j++)
    {
        int temp=a[minRow][j];
        a[minRow][j]=a[maxRow][j];
        a[maxRow][j]=temp;
    }

    printf("Matricata sled razmqnata:\n");

    // printirane
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
