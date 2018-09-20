#include<bits/stdc++.h>
using namespace std;

struct activity{
    int start;
    int end;
};


bool comapreStruct(activity a, activity b)
{
    return a.end < b.end;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int start[n], end[n];
        
        for(int i = 0; i < n; i++)
        {
            /* code */
            cin >> start[i];
        }

        
        for(int i = 0; i < n; i++)
        {
            /* code */
            cin >> end[i];
        }

        
        activity activits[n];

        for(int i = 0; i < n; i++)
        {
            activits[i].start = start[i];
            activits[i].end = end[i];
        }


        sort(activits, activits + n , comapreStruct);

        int endTime = INT_MIN;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(activits[i].start >= endTime)
            {
                count++;
                endTime = activits[i].end;
            }
        }

        cout << count << endl;


        
        
    }

    return 0;
}