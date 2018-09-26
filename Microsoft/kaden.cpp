
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
    cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++)
	        cin >> arr[i];
	    int max_so = INT_MIN, max_end = 0;
	    for(int i = 0; i < n; i++)
	    {
	        max_end += arr[i];
	        if(max_so < max_end)
	            max_so = max_end;
	        if(max_end < 0)
	            max_end = 0;
	    }
	    cout << "Printing : " << max_so << endl;
	}
	return 0;
}