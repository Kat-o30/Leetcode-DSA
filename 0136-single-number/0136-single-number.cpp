class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(auto num: nums){
            freq[num]++;
        }
        for(auto num: freq){
            if(num.second == 1){
                return num.first;
            }
        }
        return -1;
    }
};