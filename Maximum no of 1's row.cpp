//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &Mat, int N, int M)
        {

            vector<int>max1;
            for(int i=0;i<N;i++)
            {
                int count=0;
                for(int j=M-1;j>=0;j--)
                {
                    if(Mat[i][j]==0)
                    {
                        break;
                    }
                    else
                    {
                        count++;
                    }
                }
                max1.push_back(count);
            }

        int k=*max_element(max1.begin(), max1.end());
        int res;
        for(int i=0;i<max1.size();i++)
        {
            if(max1[i]==k)
            {
                res=i;
                break;
            }
        }
        return res;
}
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends
