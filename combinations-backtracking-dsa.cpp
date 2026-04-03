class Solution {
public:
    vector<vector<int>> result;

    void backtrack(int start, int n, int k, vector<int>& path) {
        // Base case
        if (path.size() == k) {
            result.push_back(path);
            return;
        }

        for (int i = start; i <= n; i++) {
            path.push_back(i);
            backtrack(i + 1, n, k, path);
            path.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> path;
        backtrack(1, n, k, path);
        return result;
    }
};
