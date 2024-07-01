class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> answer;
        for(int i=0; i<=n; i++){
            answer.push_back(noOfBitsInNumber(i));
        }
        return answer;
    }

    int noOfBitsInNumber(int n) {
        int count = 0;
        for(int i=0; i<=31; i++){
            if((n & (1 << i)) >0)
                count++;
        }
        return count;
    }
};