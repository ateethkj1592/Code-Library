#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d,e;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d;
	    if(a>=b && c>=d)
	    {
	        e=a+c;
	    }
	    else if(a<=b && c>=d)
	    {
	        e=b+c;
	    }
	    else if(a<=b && c<=d)
	    {
	        e=b+d;
	    }
	    else if(a>=b && c<=d){
	    e=a+d;
	    }
	    cout<<e<<endl;
	}
	return 0;
}
