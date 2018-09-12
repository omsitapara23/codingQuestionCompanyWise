#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int max_diff(int array[], int left, int right)
{
    if(array[left] <= array[right])
        return right - left;
    int first = max_diff(array, left + 1, right);
    int second = max_diff(array, left, right - 1);
    return max(first,second);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int array[n];
        for(int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        int result = max_diff(array, 0, n - 1);
        cout  << result << endl;
    }

    return 0;
}