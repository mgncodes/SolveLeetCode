/* Problem: (Link: https://leetcode.com/problems/two-sum/) 
Given an integer array 'a' and integer 'target', find indices of the 2 nos such that they add up to 'target'.
Assuming there is exactly 1 answer.
Same element cannot be used twice.

Constraints:
array length => 2 to 1000.
a[i], target => -10^9 to 10^9.

Example:
a = [3, 2, 4], target = 6
O/P: [0,1]
*/

#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

void main() {
	int n; cin >> n;		// Size of array
	vector<ll> a (n);
	for(int i=0; i<n; ++i) 
		cin >> a[i];
	ll target; cin >> target;
	for(int i=0; i<n; ++i) {
		for(int j=i+1; j<n; ++j) {
			if(a[i] + a[j] == target) {
				cout << "[" << i << "," << j << "]\n";
				return;
			}
		}
	} cout << "No two sums exist.\n";
}
	
	
