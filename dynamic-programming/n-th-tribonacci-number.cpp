class Solution {
    std::vector<int> ans = {
        0, 1, 1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
        -1, -1, -1, -1, -1, -1, -1, -1
    };
public:
    int tribonacci(int n) {
        if (ans[n] != -1) return ans[n];
        return ans[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    }
};