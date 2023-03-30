#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



vector<int> countingSort(vector<int> arr) {
    vector<int>a,b;
    int k=*max(arr.begin(),arr.end());
    for(int i=0;i<=k;i++)
    {
        a.push_back(0);
    }
    for(int i=0;i<arr.size();i++)
    {
        a[arr[i]]++;
    }
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i];j++)
        {
            b.push_back(i);
        }
    }
    return b;

}

int main()
{
    int n;
    vector<int>a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


    vector<int> result = countingSort(a);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }

    cout << "\n";



    return 0;
}

