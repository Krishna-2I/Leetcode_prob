class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& a) {
        if (a.empty()) return 0;
        sort(a.begin(), a.end(), [](auto& x, auto& y) { return x[1] < y[1]; });
        int ans = 0, last = a[0][1];
        for (int i = 1; i < a.size(); ++i) {
            if (a[i][0] < last) ans++;
            else last = a[i][1];
        }
        return ans;
    }
};