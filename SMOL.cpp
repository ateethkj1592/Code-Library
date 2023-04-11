#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int k,n;
	    cin>>n>>k;
	    if(k==0)
	    {
	        cout<<n<<endl;
	    }
	    else{
	    int res= n%k;
	    
	    cout<<res<<endl;
	    }
	}
}
