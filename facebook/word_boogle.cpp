#include<bits/stdc++.h>
using namespace std;

bool** trav;

bool backtrack(string currStr, map<char, vector<pair<int, int>>> myMap, bool** trav)
{
    char currChar = currStr[0];
    if(myMap.find(currChar)== myMap.end())
        return false;
    else
    {
        vector<pair<int, int>> currVec = myMap[currChar];
        pair<int,int> currPair;
        for(int i = 0; i < currVec.size(); i++)
        {
            currPair = currVec[i];
            if(trav[currPair.first][currPair.second] == false)
            {
                trav[currPair.first][currPair.second] == true;
                if(backtrack(currStr.substr(1,currStr.length() - 1), myMap, trav))
                    return true;
                trav[currPair.first][currPair.second] == false;
            }
        }

    }

    return false;
}

void reset(int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            trav[i][j] = false;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        string mydic[k];
        for(int i = 0; i < k; i++)
            cin >> mydic[i];
        int n, m;
        cin >> n >> m;
        map<char, vector<pair<int, int>>> myMap;
        map<char, vector<pair<int, int>>>::iterator itr;
        char grid[n][m];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
                if(myMap.find(grid[i][j])!= myMap.end())
                {
                    myMap[grid[i][j]].push_back(make_pair(i,j));
                }
                else
                {
                    vector<pair<int, int>> newVec;
                    newVec.push_back(make_pair(i,j));
                    myMap[grid[i][j]] = newVec;
                }

            }
        }

        trav = new bool*[n];
        for(int i = 0; i < n; i++)
            trav[i] = new bool[m];
        reset(n,m);
        for(int i = 0; i < k; i++ )
        {
            string currWord = mydic[i];
            bool result = backtrack(currWord, myMap, trav);
            if(result == true)
            {
                cout << currWord << " ";
                reset(n,m);
            }
            else
                reset(n,m);
        }

    }
    return 0;
}