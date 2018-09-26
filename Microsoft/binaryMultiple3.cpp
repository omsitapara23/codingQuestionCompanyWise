#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    string s;
	    cin >> s;
	    int length = s.length();
	    int curr = 1, sum = 0;
	    for(int i = length - 1; i >= 0; i--)
	    {
	        if(s[i] == '1')
	            sum += curr;
	        if(curr == 1)
	            curr = 2;
	        else
	            curr = 1;
	    }
	    if(sum%3 == 0)
	        cout << "1" << endl;
	    else 
	        cout << "0" << endl;
	}
	return 0;
}