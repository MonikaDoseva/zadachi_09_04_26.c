// 4
#include <stdio.h>

int main()
{
    int N,M;

    printf("Vuvedi broi hora: ");
    scanf("%d",&N);

    printf("Vuvedi broi prijatelstva: ");
    scanf("%d",&M);

    int count[100001]={0};

    printf("Vuvedi prijatelstvata (primer: 1 3):\n");

    for(int i=0;i<M;i++)
    {
        int a,b;

        scanf("%d %d",&a,&b);

        // dobavqme prijatelstvo 
        count[a]++;
        count[b]++;
    }

    int person;

    printf("Za koi chovek iskash informaciq: ");
    scanf("%d",&person);

    printf("Chovek %d e priqtel s chovek %d\n",
    person,count[person]);

    return 0;
}
