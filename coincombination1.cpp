#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


/*
Consider a money system consisting of n
 coins. Each coin has a positive integer value. Your task is to calculate the number of distinct ways you can produce a money sum x
 using the available coins.
*/

int main()
{
     int n;
    cout<<"Enter Number of coins"<<endl;
    cin>>n;
    int coin[n];
    for(int i=0;i<n;i++)
    {
        cin>>coin[i];
    }
    int sum;
    cout<<"Enter sum"<<endl;
    cin>>sum;
    int dp[sum+1];
    dp[0]=1;
     for(int i=1; i<=sum; i++)
    {
        dp[i]=0;
    }
    for(int i=1;i<=sum;i++)
    {

        for(int j=0;j<n;j++)
        {
            if(i-coin[j]>0)
            {
                dp[i]=dp[i]+dp[i-coin[j]];
            }
            else if(i-coin[j]==0)
            {
                dp[i]=dp[i]+dp[0];
            }

        }
    }
    for(int i=1;i<=sum;i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    cout<<"Total combinations for given sum is " <<dp[sum];
}
