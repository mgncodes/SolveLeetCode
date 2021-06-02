#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int getXORSum(vector<int>& arr1, vector<int>& arr2) {
    int n1 = arr1.size(), n2 = arr2.size();
    int a2xor = arr2[0];
    for(int i=1; i<n2; ++i) {
        a2xor = a2xor ^ arr2[i];
    }
    vector<int> a1and;
    for(int i=0; i<n1; ++i) {
        a1and.push_back(arr1[i] & a2xor);
    } 
    int ans = a1and[0];
    for(int i=1; i<n1; ++i) {
        ans = ans ^ a1and[i];
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n1;
    cout << "\nEnter Array1 Size: "; cin >> n1;
    vector<int> a1;
    cout << "\nEnter Array1 Elements: ";
    for(int i=0; i<n1; ++i)
        cin >> a1[i];
    int n2;
    cout << "\nEnter Array2 Size: "; cin >> n2;
    vector<int> a2;
    for(int j=0; j<n2; ++j) 
        cin >> a2[j];
    int ans = getXORSum(a1, a2);
    cout << ans << "\n";
    
    return 0;
}