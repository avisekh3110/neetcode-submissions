class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int,int> countEle;
        for(int val : nums){
            if(countEle.find(val)!=countEle.end()) return true;
            countEle[val]++;
        }
        return false;
    }
};