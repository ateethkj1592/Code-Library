#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;


/*
Your task is to count the number of ways to construct sum n
 by throwing a dice one or more times. Each throw produces an outcome between 1
 and 6
.
*/

int main()
{
    int dice[6]={1,2,3,4,5,6};
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

        for(int j=0;j<6;j++)
        {
            if(i-dice[j]>0)
            {
                dp[i]=dp[i]+dp[i-dice[j]];
            }
            else if(i-dice[j]==0)
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

