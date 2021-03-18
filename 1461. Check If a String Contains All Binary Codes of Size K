class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.length() < k) return false;
        
        unordered_map<string, int> Map;
        
        for(int i=0; i<=s.length() - k; i++){
            string str = s.substr(i, k);
            
            Map[str]++;
        }
        
        return Map.size() == pow(2, k);
    }
};
