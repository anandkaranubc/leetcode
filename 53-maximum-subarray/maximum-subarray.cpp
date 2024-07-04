class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = nums[0];
        int currsum = nums[0];
        for(int i = 1; i < nums.size(); i++) {  // Start from the second element
            if(currsum < 0) {
                currsum = nums[i];  // Start a new subarray
            } else {
                currsum += nums[i];  // Continue the current subarray
            }
            if(currsum > maxsum) {
                maxsum = currsum;  // Update maxsum if currsum is greater
            }
        }
        return maxsum;
    }
};
