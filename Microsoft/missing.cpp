#include <iostream>
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
	     int arr[n-1];
	     for(int i = 0; i < n - 1; i++)
	        cin >> arr[i];
	     int x1 = 0, x2 = 0;
	     for(int i = 0; i < n - 1; i++)
	     {
	         x1 = x1^arr[i];
	         x2 = x2^(i+1);
	     }
	     x2 = x2^(n);
	     int result = x1^x2;
	     cout << result << endl;
	 }
	return 0;
}