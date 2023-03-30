#include<iostream>
using namespace std;

int secondlargest(int a[],int n)
{
    if(n<2)
        return -1;
    int large=INT_MIN, secondlarge=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>large)
        {
            secondlarge=large;
            large=a[i];
        }
        else if(a[i]>secondlarge && a[i]!=large)
        {
            secondlarge=a[i];
        }
    }
    return secondlarge;
}
int main()
{
    int a[9]={3,4,1,8,8,8,9,9,9};
    int k= secondlargest(a,9);
    cout<<k;
}
