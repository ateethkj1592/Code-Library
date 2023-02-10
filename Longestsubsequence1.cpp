
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int subsequence(string a,string b)
{
    int lcs[a.size()+1][b.size()+1];
    for(int i=0;i<a.size()+1;i++)
    {
        lcs[i][0]=0;
    }
    for(int j=0;j<b.size()+1;j++)
    {
        lcs[0][j]=0;
    }
    for(int i=1;i<=a.size();i++)
    {
        for(int j=1;j<=b.size();j++)
        {

            if(a[i-1]==b[j-1])
            {
                lcs[i][j]=lcs[i-1][j-1]+1;
            }
            else{
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }
        }
    }
    return lcs[a.size()][b.size()];

}
int main()
{
    string s1="abcda";
    string s2="bdabacdbv";
    int t=subsequence(s1,s2);
    cout<<t;

}

