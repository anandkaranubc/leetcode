class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x = 0;
        int y=0;
        for(int i=0; i<=nums.size(); i++) {
            x = x^i;
        }
        for(int i=0; i<nums.size(); i++) {
            y = y^nums[i];
        }
        return x^y;

    }
};