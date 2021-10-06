#include<stdio.h>
void main()
{
    int u;
    printf("\nEnter any number : ");
    scanf("%d",&u);
    printf("\nPerfect numbers between 1 to %d : ",u);
    perf(u);
}
void perf(int num)
{
    int i,j,sum;
    for(i=1;i<=num;i++)//1,2,3,.........,num
    {
        sum=0;
        for(j=1;j<i;j++)//1,2,.......,i
        {
           if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            printf("%d\t",i);
    }
}
