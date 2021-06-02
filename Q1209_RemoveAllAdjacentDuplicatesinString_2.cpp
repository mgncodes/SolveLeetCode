#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

string removeDuplicates(string s, int k) {
    vector<pair<char, int>> a;
    string ans = "";
    for(char ch : s) {
        if(a.empty() || a.back().first != ch)
            a.push_back({ch, 1});
        else if(++a.back().second == k)
            a.pop_back();
    } 
    for(auto p: a) 
        ans.append(p.second, p.first);
    return ans;            
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s; 
    cout << "\nEnter String: "; cin >> s;
    int k; cout << "\nEnter k value: "; cin >> k;
    cout << "\nRemaining String: " << removeDuplicates(s, k);

    return 0;
}