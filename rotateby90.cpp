

class Solution
{
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& arr, int n)
    {
        for(int i=0;i<n/2;i++)
  {
      for(int j=i;j<n-i-1;j++)
      {
        // Swapping elements after each iteration in Anticlockwise direction
          int temp=arr[i][j];
          arr[i][j]=arr[j][n-i-1];
          arr[j][n-i-1]=arr[n-i-1][n-j-1];
          arr[n-i-1][n-j-1]=arr[n-j-1][i];
          arr[n-j-1][i]=temp;
      }
  }
    }
};
