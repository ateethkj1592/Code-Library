//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    	    // code here
	  vector<int>v1;
	  vector<int>v2;
	  int j=0;
	  int k=0;

	    for(int i=0;i<n;i++){
	        if(arr[i]>=0){
	            v1.push_back(arr[i]);
	            j++;

	        }
	         if(arr[i]<0){
	            v2.push_back(arr[i]);
	            k++;
	         }
	    }


	    int l=0;
	    int b=0;
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            if(l<j)
	            {
	            arr[i]=v1[l];
	            l++;
	            }
	            else
	            {
	            arr[i]=v2[b];
	            b++;
	            }
	        }
	        else
	        {
	            if(b<k)
	            {
	            arr[i]=v2[b];
	            b++;
	            }
	            else
	            {
	            arr[i]=v1[l];
	            l++;
	            }

	        }
	    }
	}





};
