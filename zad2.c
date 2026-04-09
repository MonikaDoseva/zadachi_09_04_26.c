// 2
#include <stdio.h>

int main()
{
    int N,M;

    printf("Vuvedi broi redove i koloni:\n");
    scanf("%d%d",&N,&M);

    int a[100][100];

    printf("Vuvedi matricata:\n");

    // vuvejdaneto na matricata
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int maxSum=-999999; // nai-golqmata suma
    int bestNumber; // chisloto s nai-golqma suma

    // obhojdame vsqka kletka
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            int sum=0;

            // obhojdame susedite
            for(int di=-1;di<=1;di++)
            {
                for(int dj=-1;dj<=1;dj++)
                {
                    int ni=i+di;
                    int nj=j+dj;

                    // propuskame samata kletka
                    if(di==0 && dj==0)
                        continue;

                    // proverka za granici
                    if(ni>=0 && ni<N && nj>=0 && nj<M)
                    {
                        sum+=a[ni][nj];
                    }
                }
            }

            // proverka za nai-golqma suma
            if(sum>maxSum)
            {
                maxSum=sum;
                bestNumber=a[i][j];
            }
        }
    }

    printf("Chisloto s nai-golqma suma na susedite e: %d\n",bestNumber);
    printf("Sumata na susedite e: %d\n",maxSum);

    return 0;
}
