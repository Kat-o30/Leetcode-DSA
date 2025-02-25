#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> countMap;
        vector<int> result;

        // Count occurrences of each element in nums1
        for (int num : nums1) {
            countMap[num]++;
        }

        // Find common elements in nums2
        for (int num : nums2) {
            if (countMap[num] > 0) {
                result.push_back(num);
                countMap[num]--; // Decrease count after adding to result
            }
        }

        return result;
    }
};
