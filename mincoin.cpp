#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

/*Consider a money system consisting of n
 coins. Each coin has a positive integer value. Your task is to produce a sum of money x
 using the available coins in such a way that the number of coins is minimal.
For example, if the coins are {1,5,7} and the desired sum is 11 an optimal solution is 5+5+1 which requires 3 coins.
 */


int main()
{
    int f=0;
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
        dp[i]=INT_MAX;
    }



        for(int j=0; j<n; j++)
        {

             for(int i=1; i<=sum; i++)
             {

            if(i-coin[j]==0)
            {
                dp[i]=1;

            }
            else if(i-coin[j]>0)
            {
                int temp=dp[i-coin[j]]+1;
                dp[i]=min(dp[i],temp);

            }

        }


    }
    cout<<"DP Array"<<endl;
    for(int i=1; i<=sum; i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    cout<<"Minimum no of coins required for sum of "<<sum<<" is "<<dp[sum]<<endl;

}
