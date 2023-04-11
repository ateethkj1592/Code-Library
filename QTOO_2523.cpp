#include <iostream>
#include<map>
#include<vector> 
#include<algorithm>
using namespace std;

int main() {
	int t;
   cin>>t;
   while(t--)
   {
       int n;
       string s;
       cin>>n;
       cin>>s;
       map<char,int>m;
       vector<int>v;
       for(int i=0;i<n;i++)
       {
           m[s[i]]++;
       }
       int flag=0;
       for (auto x :m)
       {
           if(x.second>1)
           {
               flag=1;
               cout<<n-2<<endl;
               break;
           }
       }
       if(flag==0)
       {
           cout<<"-1"<<endl;
       }
       
	
}
}
