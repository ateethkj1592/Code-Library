//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
   unordered_map <int, int>mp;
   for(int i=0; i<size; i++)
      mp[arr[i]]++;

   for (auto x :mp)
   {
      if(x.second>size/2)
          return x.first;
      else
      continue;
   }
   return -1;
    }
};
