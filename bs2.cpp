#include<iostream>
#include<algorithm>
using namespace std;

int binary(int arr[],int e)

{

int start,end1,mid;

start=0;
int n = sizeof(arr) / sizeof(arr[0]);
end1=n;
while(start<end1)
{
    mid=start + (end1-start)/2;
    if(e==arr[mid])
    {
        return mid;
    }
    else if(e>arr[mid])
    {
        end1=mid-1;
    }
    else
    {
        start=mid+1;
    }

}
return -1;
}

int main()
{
    int a[5]={13,11,7,6,2};
    int l=binary(a,7);
    cout<<l;
}

