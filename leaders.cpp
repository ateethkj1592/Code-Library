

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        int i=n-1;
        int lead=0;
        vector<int> ans;


        while(i>=0)
        {
            if(a[i]>=lead)
            {
                lead=a[i];
                ans.push_back(a[i]);
            }
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
