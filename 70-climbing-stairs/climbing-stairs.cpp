class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int, int> mp;
        return calc(0,n,mp);
    }

    int calc(int i, int n, unordered_map<int, int>& mp) {
        if(i > n) {
            return 0;
        }
        else if (i==n) {
            return 1;
        }
        else {
            if(mp.find(i) != mp.end()) {
                return mp[i];
            }
            else {
                int val = calc(i+1, n, mp) + calc(i+2,n,mp);
                mp[i] = val;
                return val;
            }
        }
    }
};