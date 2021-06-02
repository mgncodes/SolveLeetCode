#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(), costs.end());
    int cnt = 0, n = costs.size();
    for(int i=0; i<n && costs[i] <= coins; ++i) {
        ++cnt;
        coins -= costs[i];
    } return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    vector<int> c (n);
    for(int i=0; i<n; ++i)
        cin >> c[i];
    int coins; cin >> coins;
    cout << maxIceCream(c,coins) << "\n";

    return 0;
}