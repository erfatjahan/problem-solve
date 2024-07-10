#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> subsetsWithDup(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::vector<int> subset;
        std::sort(nums.begin(), nums.end());
        backtrack(nums, 0, subset, result);
        return result;
    }

private:
    void backtrack(const std::vector<int>& nums, int start, std::vector<int>& subset, std::vector<std::vector<int>>& result) {
        result.push_back(subset);
        for (int i = start; i < nums.size(); ++i) {
            if (i > start && nums[i] == nums[i - 1]) continue;
            subset.push_back(nums[i]);
            backtrack(nums, i + 1, subset, result);
            subset.pop_back();
        }
    }
};
