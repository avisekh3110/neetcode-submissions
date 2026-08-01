class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> charCount;
        for(char c : s){
            charCount[c]++;
        }
        for(char c : t){
            charCount[c]--;
        }
        for(auto c : charCount){
            if(c.second != 0){
                return false;
            }
        }
        return true;
    }
};
