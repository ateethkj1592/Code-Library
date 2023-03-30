#include<stdio.h>
#include<stdlib.h>
#define INFINITY 9999

typedef struct priority_queue
{
    int distance;
    int node;
}pq;

pq front(pq p[],int n)
{
    pq temp;
    temp.distance=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(p[i].distance < temp.distance && p[i].distance!=-1)
        {
            temp=p[i];
        }
    }
    return temp;
}
void dequeue(pq p[],int n)
{
    pq temp=front(p,n);
    for(int i=0;i<n;i++)
    {
        if(temp.distance==p[i].distance && temp.node==p[i].node)
        {
            p[i].distance=-1;
            p[i].node=-1;
        }
    }
}
int isEmpty(pq p[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(p[i].node!=-1)
        return 0;
    }
    return 1;
}
int dijkstra(int arr[10][10],int n,int dist[],int source,int destination)
{
    pq p[100];
    for(int i=0;i<100;i++)
    {
        p[i].node=-1;
        p[i].distance=-1;
    }
    int l=0;
    dist[source]=0;
    p[l].distance=0;
    p[l].node=source;
    while(!isEmpty(p,l+1))
    {
        pq t=front(p,l+1);
        int node=t.node;
        int d=t.distance;
        dequeue(p,l+1);
        for(int i=0;i<n;i++)
        {
            int curr_dist=d;
            if(arr[node][i]!=0)
            {
                int next_distance=curr_dist+arr[node][i];
                if(next_distance<dist[i])
                {
                    dist[i]=next_distance;
                    l=l+1;
                    p[l].distance=next_distance;
                    p[l].node=i;
                }
            }
        }
    }
   /* printf("all nodes\n");
    for(int i=0;i<n;i++)
    {
        printf("%d to %d distance is %d\n",source,i,dist[i]);
    }*/
    for(int i=0;i<n;i++)
    {
        if(i==destination)
        {
            printf("\nSource to destination :\n%d to %d distance is %d\n",source,i,dist[i]);
            return (dist[i]);
        }
    }

}
void read(int a[10][10],int n,int flag)
{
        for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
        {
             a[i][j]=0;
        }
        }
        if(flag==1)
        {
             a[0][1]=10;
             a[0][4]=80;
             a[1][2]=20;
             a[2][5]=20;
             a[4][5]=30;
             a[5][6]=10;
             a[6][3]=7;
             a[6][7]=5;
        }
        else
        {
        a[7][6]=5;
        a[6][3]=7;
        a[6][5]=10;
        a[3][2]=10;
        a[5][2]=20;
        a[5][4]=30;
        a[2][1]=20;
        a[4][0]=80;
        a[1][0]=10;
        }


}
int main()
{
    int c,s,n=8,d,flag=0,distance;
    int arr[10][10],brr[10][10];
    int dist[n];
    float expense;
    while(1)
    {
    printf("\nEnter 1 for leaving from Hubli:\n");
    printf("\nEnter 2 for leaving from Goa:\n");
    scanf("%d",&c);
     switch(c)
     {
      case 1:
          printf("Road is block at Alnavar\n enter 1 if you want to use alternative long route\n");
          scanf("%d",&flag);
          read(arr,n,flag);
          s=1;
          d=6;
            for(int i=0;i<n;i++)
            {
                dist[i]=INFINITY;
            }
          distance=dijkstra(arr,n,dist,s,d);
          expense=distance*500;
          printf("Total expense from hubli to goa : %f\n",expense);
          break;
      case 2:
          read(brr,n,flag);
          s=6;
          d=1;
          for(int i=0;i<n;i++)
          {
                dist[i]=INFINITY;
          }
          distance=dijkstra(brr,n,dist,s,d);
          expense=distance*15;
          printf("Total expense from hubli to goa : %f\n",expense);
          break;
     }
    }
}
