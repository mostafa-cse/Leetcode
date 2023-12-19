class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 0);

        // Calculate total sum
        int totalSum = accumulate(nums.begin(), nums.end(), 0);

        int leftSum = 0;
        for (int i = 0; i < n; i++)
        {
            // Subtract left sum from total sum to get right sum
            answer[i] = abs(leftSum - (totalSum - leftSum - nums[i]));
            // Update left sum for the next iteration
            leftSum += nums[i];
        }

        return answer;
    }
};
