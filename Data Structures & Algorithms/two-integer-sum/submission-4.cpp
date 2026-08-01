class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mt;
        for(int i = 0; i<nums.size(); i++){
            int compliment = target - nums[i];
            if(mt.find(compliment)!=mt.end()){
                return {mt[compliment],i};
            }
            mt[nums[i]] = i;
        }
        return {};
    }
};
