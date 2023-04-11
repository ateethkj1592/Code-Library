#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int a,b;
	   cin>>a>>b;
	   int r1 = 100-a;
	   int r2= 200- (2*b);
	   if(r1<r2)
	   {
	       cout<<"FIRST"<<endl;
	   }
	   else if(r1>r2)
	   {
	       cout<<"SECOND"<<endl;
	   }
	   else{
	       cout<<"BOTH"<<endl;
	   }
	}
	
}
