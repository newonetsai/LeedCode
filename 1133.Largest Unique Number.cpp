class Solution {
public:
    int largestUniqueNumber(vector<int>& s) {
        unordered_map<int, int> map;
        // Store counts of each element
        for (auto i : s) { 
            map[i]++;
        }
        
        int result = -1;
        for (auto [key, val] : map) {
            // If map of the integer is 1, get maximum.
            if (val == 1) {
              result = result > key ? result : key;
            }
        }
        return result;
    }
};
