#include<bits/stdc++.h>
using namespace std;
 
// function to print triplets with 0 sum
void findTriplets(int arr[], int n)
{
    bool found = false;
 
    for (int i=0; i<n-1; i++)
    {
        // Find all pairs with sum equals to
        // "-arr[i]"
        unordered_set<int> s;
        for (int j=i+1; j<n; j++)
        {
            int x = -(arr[i] + arr[j]);
            if (s.find(x) != s.end())
            {
                cout << "1" << endl;
                found = true;
                return;
            }
            else
                s.insert(arr[j]);
        }
    }
 
    if (found == false)
        cout << "0" << endl;
    return;
}
 
// Driver code
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        findTriplets(arr, n);
    }
    return 0;
}