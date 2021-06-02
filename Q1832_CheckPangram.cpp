#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

bool checkIfPangram(string sentence) {
    bool f = true;
    int n = sentence.size();
    int a[26];
    for(int i=0; i<26; ++i) 
        a[i] = 0;
    for(int i=0; i<n; ++i)
        a[sentence[i] - 97]++;
    for(int i=0; i<26; ++i) {
        if(a[i] == 0) {
            f = false;
            break;
        }
    } return f;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s; cin >> s;
    cout << checkIfPangram(s) << "\n";

    return 0;
}