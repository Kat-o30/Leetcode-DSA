class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(auto num: nums){
            freq[num]++;
        }
        for(auto num: freq){
            if(num.second > 1){
                return true;
                break;
            }
        }
        return false;
    }
};