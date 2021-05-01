class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256, -1);//like unordered_map
        int Ans = 0, Ptr_Start = -1;
        for (int i = 0; i < s.size(); i++) {
            Ptr_Start = max(Ptr_Start, m[s[i]]);//once accur repeat char, update Ptr_Start to last location of this char
            m[s[i]] = i;//update new location of this char
            Ans = max(Ans, i - Ptr_Start);//(i-Ptr_Start) means last unrepeat char to now point i length 
        }
        return Ans;
    }
};
