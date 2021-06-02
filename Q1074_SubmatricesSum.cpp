#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
    int r = matrix.size(), c = matrix[0].size();
    int ans = 0;
    for(int i=0; i<r; ++i) {
        for(int j=1; j<c; ++j) {
            matrix[i][j] += matrix[i][j - 1];
        }
    } map<int, int> m;
    for(int i=0; i<c; ++i) {
        for(int j=i; j<c; ++j) {
            m.clear();
            m[0] = 1;
            int sum = 0;
            for(int k=0; k<r; ++k) {
                int cur = matrix[k][j];
                if(i >= 1) cur -= matrix[k][i - 1];
                sum += cur;
                ans += m[target - sum];
                m[-sum]++;
            }
        }
    } return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int r, c; 
    cout << "\nNo. of Rows: "; cin >> r; 
    cout << "\nNo. of Columns: "; cin >> c;
    vector<vector<int>> matrix;
    cout << "\nEnter Matrix: ";
    for(int i=0; i<r; ++i)
        for(int j=0; j<c; ++j)
            cin >> matrix[i][j];
    int target; cout << "\nEnter target: "; cin >> target;
    cout << numSubmatrixSumTarget(matrix, target);
    
    return 0;
}