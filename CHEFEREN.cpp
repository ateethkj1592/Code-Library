#include <iostream>
using namespace std;

int main() {
   int t;
cin>>t;
while(t--)
{
    int e,a,b,res;
    cin>>e>>a>>b;
    if(e%2==0)
    {
        res= a*(e/2) + b*(e/2);
    }
    else{
         res= a*(e/2) + b*(e/2)+b;
    }
    cout<<res<<endl;
    

}
}
