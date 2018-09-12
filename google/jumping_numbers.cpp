#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



bool checker(int a)
{
    int curr_dig, pre_dig;
    pre_dig = a%10;
    a=a/10;
    if(a == 0)
        return true;
    while(a > 0)
    {
        curr_dig = a%10;
        if(abs(curr_dig - pre_dig) != 1)
            return false;
        pre_dig = curr_dig;
        a = a/10;
    }

    return true;

}

int first_dig_giver(int a)
{
    int digits = (int)log10(a);
    return (int)(a/pow(10,digits));
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int first_dig;
        vector<int> hash[10];
        for(int i = 1; i <= n; i++)
        {
            if(checker(i))
            {
                first_dig = first_dig_giver(i);
                //cout << "got << " << first_dig << endl;
                assert(first_dig < 10 && first_dig >= 0);
                hash[first_dig].push_back(i);
            }
        }
        cout << "0 ";
        for(int i = 1; i < 10; i++)
        {
            for(int j = 0; j < hash[i].size(); j++)
                cout << hash[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}