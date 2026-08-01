class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int val : nums){
            if(s.find(val)!=s.end()){
                return true;
            }
            s.insert(val);
        }
        return false;
    }
};