//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
int row=n,col=m;
	    int count=0,ans=-1,prev=0;
	    for(int i=0;i<row;i++){
	        for(int j=0;j<col;j++){
	            if(arr[i][j]==1)
	            {

	                count++;
	            }
	        }
	        if(count>prev){

	           ans=i;
	           prev=count;
	        }
	        count=0;
	    }
	    return ans;
	}








};
