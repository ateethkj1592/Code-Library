int main()
{
    int N,A[100],i,j;
    printf("Enter the size of an array\n");
    scanf("%d",&N);
    A[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }

    selectionsort(A,N);
    for(i=0;i<N;i++)
    {
        printf("%d\t",A[i]);
    }


}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void selectionsort(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(a[j]<a[k])
                k=j;
        }
        swap(&a[i],&a[k]);
    }
}

