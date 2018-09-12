#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, sum;
        cin >> n >> sum;
        int array[n + 1];
        for (int i = 1; i <= n; ++i)
            cin >> array[i];
        int left = 1, right = 1;
        int rec_sum = 0;
        while(true)
        {
            if(sum == rec_sum)
            {
                cout << left << " " << right - 1 << endl;
                break;
            }
            if(rec_sum < sum)
            {
                if(right > n)
                {
                    cout << "-1" << endl;
                    break;
                }
                rec_sum += array[right];
                right++;
            }
            else
            {
                rec_sum -= array[left];
                left++;
            }

        }
    }

    return 0;
}