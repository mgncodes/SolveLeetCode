#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int longestValidParentheses(string s) {
    int n = s.length(), init = -1, cnt = 0;
    stack<int> st;
    for (int i=0; i<n; ++i) {
        if(s[i] == '(') st.push(i);
        else {
            if(st.empty()) init = i;
            else {
                st.pop();
                if(st.empty()) cnt = max(cnt, i - init);
                else cnt = max(cnt, i - st.top());
            }
        }
    } return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s; cin >> s;
    cout << longestValidParentheses(s) << "\n";

    return 0;
}