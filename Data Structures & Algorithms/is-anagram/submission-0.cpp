class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> countChar;
        for(char val : s){
            countChar[val]++;
        }
        for(char val : t){
            countChar[val]--;
        }
        for(auto val : countChar){
            if(val.second!=0) return false;
        }
        return true;
    }
};
