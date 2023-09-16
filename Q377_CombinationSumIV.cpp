#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int combinationSum4(vector<int>& nums, int target) {
  int n = nums.size();
    
  vector<ll> dp (target+1);
  dp[0] = 1;
  for(int i=1; i<=target; ++i) {
    for(int j=0; j<n; ++j) {
        if(i >= nums[j]) dp[i] += dp[i - nums[j]];
    }
  }
  
  return dp[target];
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n; cin >> n;
  vector<int> a (n);
  for(int i=0; i<n; ++i) 
    cin >> a[i];
  int targetSum; cin >> targetSum;
  cout << combinationSum4(nums, targetSum);

  return 0;
}
