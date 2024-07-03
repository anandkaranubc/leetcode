class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0; 
        int ans=0;
        for(int i: nums) {
            if(i==1) {
                count++;
                if (count>ans) {
                    ans = count;
                }
            }
            else {
                count = 0;
            }
        }
        return ans;
    }
};