class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(string str : strs){
            string temp = str;
            sort(temp.begin(),temp.end());
            m[temp].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto& val : m){
            ans.push_back(val.second);
        }
        return ans;
    }
};