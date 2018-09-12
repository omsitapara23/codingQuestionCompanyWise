#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isBreakable(string input, vector<string> my_map[])
{
    if(input.length() == 0)
        return true;
    int count = my_map[input[0] - 'a'].size();
    if(count == 0)
        return false;
    string selected;
    for(int i = 0; i < count; i++)
    {
        selected = my_map[input[0] - 'a'][i];
        if(selected.length() > input.length())
            continue;
        else if (selected.length() == input.length())
        {
            if(selected == input)
                return true;
            else 
                return false;
        }
        if(isBreakable(input.substr(selected.length(), input.length() - selected.length()), my_map))
        {
            //cout << selected << " ";
            return true;
        }
    }

    return false;

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string> my_map[26];
        string s;
        string input;
        for(int i = 0; i < n; i++)
        {
            cin >> s;
            my_map[s[0] - 'a'].push_back(s);
        }

        cin >> input;
        bool result = isBreakable(input, my_map);
        if(result == true)
            cout << "1" << endl;
        else
            cout << "0" << endl;
        

    }
    return 0;
}