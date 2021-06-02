class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int cnt = 0;
        unordered_map<int, int> m;
        for(int i=0; i<pieces.size(); ++i) {
            m[pieces[i][0]] = i;
            cnt += pieces[i].size();
        } if(cnt != arr.size()) return false;
        int ix = 0;
        while(ix < arr.size()) {
            if(m.find(arr[ix]) == m.end()) return false;
            for(auto& x: pieces[m[arr[ix]]]) 
                if(ix >= arr.size() || arr[ix++] != x) return false;
        } return true;
    }
};
