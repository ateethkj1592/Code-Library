#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int p,c,n,x;
    vector<int>res;
    vector<int> v[100];
    cin>>p>>c>>n;
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<c;j++)
        {

         cin>>x;
          v[i].push_back(x);
        }
    }
    for(int i=0;i<p;i++)
    {
        sort(v[i].begin(),v[i].end());
    }
    for(int i=0;i<p;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+v[i][j];
        }
        sum=sum/n;
        res.push_back(sum);

    }
    for(int i=0;i<p;i++)
    {
        cout<<res[i]<<endl;
    }
}
