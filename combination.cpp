#include <iostream>
using namespace std;
int factorial(int n);
int main()
{
int n,r,ans1,ans2;
cin>>n>>r;

int a=factorial(n);
int b=factorial(r);
int c=factorial(n-r);

ans1=a/(b*c);
ans2=a/c;
cout<<ans1<<endl<<ans2;

}

int factorial(int n)
{
    int ak=1;
    int i=1;
    while(i<=n)
    {
        ak=ak*i;
        i++;
    }
    return ak;
}


