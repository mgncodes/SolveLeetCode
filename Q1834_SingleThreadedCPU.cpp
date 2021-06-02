#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

vector<int> getOrder(vector<vector<int>>& tasks) {
    long n = tasks.size(), t = 0, i = 0;
    priority_queue<pair<long, long>, vector<pair<long, long>>, greater<>> p;
    vector<int> ans;
    for(int i=0; i<n; ++i)
        tasks[i].push_back(i);
    sort(begin(tasks), end(tasks));
    while(i<n || p.size()) {
        if(p.empty()) 
            t = max(t, (long)tasks[i][0]);
        while(i<n && t >= tasks[i][0]) {
            p.emplace(tasks[i][1], tasks[i][2]); 
            ++i;
        } 
        auto [pro, index] = p.top();
        p.pop();
        t += pro;
        ans.push_back(index);
    } return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    cout << "\nEnter Tasks: ";
    vector<vector<int>> tasks;
    for(int i=0; i<n; ++i)
        for(int j=0; j<2; ++j) 
            cin >> tasks[i][j];
    cout << "\nOrder of Tasks: ";
    vector<int> o = getOrder(tasks);
    for(int i=0; i<n; ++i)
        cout << o[i] << " ";
    cout << "\n";
    return 0;
}