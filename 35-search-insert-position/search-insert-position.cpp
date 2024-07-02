class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int mid = size/2;
        int start=0;
        int end = size - 1;
        int ans = size;

        while(start<=end) {
            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] > target) {
                ans = mid;
                end = mid-1;
                mid = (start+end)/2;
            }
            else {
                start = mid+1;
                mid = (start+end)/2;
            }
        }
        return ans;
    }
};