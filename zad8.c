// 8
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size=10;

    int *a;

    a=(int*)malloc(100*sizeof(int));

    printf("Vuvedi 10 chisla:\n");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    while(1)
    {
        int x,pos;

        printf("Vuvedi chislo (0 za krai): ");
        scanf("%d",&x);

        if(x==0)
            break;

        printf("Vuvedi poziciq: ");
        scanf("%d",&pos);

        // mestene nadqsno
        for(int i=size;i>pos;i--)
        {
            a[i]=a[i-1];
        }

        a[pos]=x;

        size++;
    }

    printf("Kraen masiv:\n");

    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

    free(a);

    return 0;
}
