class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        size_t n = s.length();
        if (n < 3) return n;

        int left = 0, right = 0;
        unordered_map<char, int> Map;

        int max_len = 2;

        while (right < n) {
            Map[s[right]] = right;
            right++;

            // Map contains 3 characters
            if (Map.size() == 3) {
                int Idx = INT_MAX;
                for (const auto& n : Map) {
                    Idx = min(Idx, n.second);
                }
                // delete the most left character
                Map.erase(s[Idx]);
                left = Idx + 1;
            }
            max_len = max(max_len, right - left);
        }
        return max_len;
    }
};
