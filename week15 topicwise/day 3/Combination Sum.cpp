
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        // Resultant vector of vectors to store all combinations
        std::vector<std::vector<int>> result;
        // Temporary vector to store each combination during generation
        std::vector<int> combination;

        // Call the backtracking helper function
        backtrack(candidates, target, 0, combination, result);

        return result;
    }

private:
    void backtrack(const std::vector<int>& candidates, int target, int start, std::vector<int>& combination, std::vector<std::vector<int>>& result) {
        // If the target becomes zero, add the current combination to the result
        if (target == 0) {
            result.push_back(combination);
            return;
        }

        // Iterate over the candidates starting from 'start' index
        for (int i = start; i < candidates.size(); ++i) {
            // If the current candidate is greater than the target, skip it
            if (candidates[i] > target) continue;

            // Include candidates[i] in the current combination
            combination.push_back(candidates[i]);

            // Recursively call the function with the same index (i) because we can reuse the same element
            backtrack(candidates, target - candidates[i], i, combination, result);

            // Backtrack: remove the last element before the next iteration
            combination.pop_back();
        }
    }
};
