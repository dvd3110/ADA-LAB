#include<stdio.h>

int main()
{
    int  a[10][10] , indeg[10] , flag[10], i, j, k , n, count=0;
    printf("Enter the no of vertices : ");
    scanf("%d",&n);
    printf("Enter the adjacency matrix : ");
    for(i=0;i<n;i++)
    {
        //printf("\n enter the %d row : ",i+1);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        indeg[i]=0;
        flag[i]=0;
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            indeg[i]=indeg[i] + a[j][i];
        }

    }
    while(count<n)
    {
        for(k=0;k<n;k++)
        {
            if((indeg[k]==0)&& (flag[k]==0))
            {
                printf("%d \t",(k+1));
                flag[k]=1;
                for(i=0;i<n;i++){
                if(a[k][i]==1)
                  indeg[i]--;

            }
            }

        }
        count++;
    }
    return 0;

}
