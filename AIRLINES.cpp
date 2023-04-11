#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,cap,res;
	    cin>>a>>b>>c;
	    cap=a*10;
	    if(b>cap)
	    {
	        res=c*cap;
	    }
	    else{
	        res=b*c;
	    }
	    cout<<res<<endl;
	}
}
