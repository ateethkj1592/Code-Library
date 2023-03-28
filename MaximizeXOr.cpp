#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int c=n1^n2;
    int count=1;
    while(c!=1)
    {
        c=c/2;
        count++;
        }
    int res= pow(2.0,count)-1;
        cout<<res<<endl;
}
