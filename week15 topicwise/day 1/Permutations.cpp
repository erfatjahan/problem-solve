class Solution {
private:
    void f(vector<int>& nums, vector<int>& a, vector<vector<int>>& ans,
        int arr[]) {
        if (nums.size() == a.size()) {
            ans.push_back(a);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (arr[i] == 0) {
                a.push_back(nums[i]);
                arr[i] = 1;
                f(nums, a, ans,arr);
              arr[i] = 0;
                a.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a;
        int arr[nums.size()];
        for (int i = 0; i < nums.size(); i++) {
            arr[i] = 0;
        }
        f(nums, a, ans,arr);
        return ans;
    }
};
