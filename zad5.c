// 5
#include <stdio.h>

int main()
{
    int a[100000];
    int size;

    printf("Kolko chisla iskash da vuvedesh: ");
    scanf("%d",&size);

    printf("Vuvedi chislata:\n");

    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    int q;

    printf("Kolko komandi iskash da izpulnish: ");
    scanf("%d",&q);

    for(int i=0;i<q;i++)
    {
        int cmd;

        printf("\nIzberi komanda:\n");
        printf("1 - dobavi chislo\n");
        printf("2 - iztrii chislo\n");
        printf("3 - nameri k-toto nai-malko\n");

        scanf("%d",&cmd);

        if(cmd==1)
        {
            int x;

            printf("Vuvedi chislo za dobavqne: ");
            scanf("%d",&x);

            a[size]=x;
            size++;

            printf("Chisloto e dobaveno.\n");
        }

        else if(cmd==2)
        {
            int x;

            printf("Vuvedi chislo za iztrivane: ");
            scanf("%d",&x);

            int newSize=0;

            for(int j=0;j<size;j++)
            {
                if(a[j]!=x)
                {
                    a[newSize]=a[j];
                    newSize++;
                }
            }

            size=newSize;

            printf("Chisloto e iztrito.\n");
        }

        else if(cmd==3)
        {
            int k;

            printf("Vuvedi koe nai-malko chislo iskash: ");
            scanf("%d",&k);

            // sortirane
            for(int j=0;j<size-1;j++)
            {
                for(int t=j+1;t<size;t++)
                {
                    if(a[j]>a[t])
                    {
                        int temp=a[j];
                        a[j]=a[t];
                        a[t]=temp;
                    }
                }
            }

            if(k<=size && k>0)
                printf("%d-toto nai-malko e %d\n",k,a[k-1]);
            else
                printf("Nqma tolkova chisla\n");
        }

        // pokazva masiva
        printf("Tekusht masiv: ");

        for(int j=0;j<size;j++)
        {
            printf("%d ",a[j]);
        }

        printf("\n");
    }

    return 0;
}
