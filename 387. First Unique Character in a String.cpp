lass Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> map;
        for (int c=0;c<s.length();c++) {
            map[s[c]]++;
        }
        
        for (int i = 0; i < s.size(); i++) {//find first letter
            if (map[s[i]] == 1) return i;
        }
        return -1;
    }
};
