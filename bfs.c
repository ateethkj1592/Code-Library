#include<stdio.h>
int a[50][50];
int reach[50];
int main()
{
    int n,e,i,j,u,v,key;
    printf("Enter the total no of vertices\n");
    scanf("%d",&n);

    printf("Enter the total no of connections\n");
    scanf("%d",&e);

    for(i=0;i<n;i++)
    {
        reach[i]=0;
    }
        for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }

    for(i=0;i<e;i++)
    {
        printf("enter the starting vertex of an edge\n");
        scanf("%d",&u);

          printf("enter the ending vertex of an edge\n");
        scanf("%d",&v);

        a[u][v]=1;
        a[v][u]=1;


    }
    for(i=0;i<n;i++)
    {
        printf("%d-->",i);
    for(j=0;j<n;j++)
    {
        if(a[i][j]==1)
        {
            printf("%d-->",j);
        }

    }
    printf("\n");

    }
    printf("Enter the source vertex to start dfs\n");
    scanf("%d",&key);

    dfs(key,u);
}

void dfs(int v,int n)
{

    if(reach[v]==0)
  {
    printf("%d-->",v);
    reach[v]=1;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[v][i]&&!reach[i])
        {
            dfs(i,n);
        }

    }
  }
}
