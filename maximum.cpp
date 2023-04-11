//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
         // your code here
        int i=0,j=0;
        int maxi=INT_MIN;
        vector<int> ans;
        while(j<n)
        {
            maxi=max(maxi,arr[j]);
            if((j-i+1)<k)
            {
                j++;
            }
            else if((j-i+1)==k)
            {
                ans.push_back(maxi);
                if(maxi==arr[i])
                {
                    int temp=0;
                   for(int k=i+1;k<=j;k++)
                   {
                       temp=max(temp,arr[k]);
                   }
                   maxi=temp;

                }
               i++;
               j++;
            }

        }
        return ans;
    }

};
