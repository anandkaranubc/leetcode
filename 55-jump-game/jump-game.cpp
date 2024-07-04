class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi = nums[0];
        for(int i=1; i<nums.size();i++){
            if(i>maxi){
                return false;
            }
            else {
                maxi = max(maxi, i+nums[i]);
                if(maxi >= nums.size()-1) {
                    return true;
                }
            }
        }
        return true;
    }
};