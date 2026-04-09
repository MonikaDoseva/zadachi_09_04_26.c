// 6
#include <stdio.h>
#include <stdlib.h>

// funkciq za proverka dali chislo e prosto
int isPrime(int x)
{
    if(x<2)
        return 0;

    for(int i=2;i<x;i++)
    {
        if(x%i==0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;

    printf("Vuvedi broi chisla: ");
    scanf("%d",&n);

    int *a;

    // dinamichen masiv
    a=(int*)malloc(n*sizeof(int));

    printf("Vuvedi chislata:\n");

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int *prime;
    prime=(int*)malloc(n*sizeof(int));

    int primeCount=0;

    // premahvane na prostite chisla
    for(int i=0;i<n;i++)
    {
        if(isPrime(a[i]))
        {
            prime[primeCount]=a[i];
            primeCount++;

            a[i]=0; // markirame kato iztrito
        }
    }

    printf("Masiv bez prostite chisla:\n");

    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
            printf("%d ",a[i]);
    }

    printf("\n");

    printf("Masiv s prostite chisla:\n");

    for(int i=0;i<primeCount;i++)
    {
        printf("%d ",prime[i]);
    }

    free(a);
    free(prime);

    return 0;
}
