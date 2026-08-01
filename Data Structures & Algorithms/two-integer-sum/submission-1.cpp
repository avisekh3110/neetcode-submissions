class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> Ele;
        for(int i = 0; i< nums.size();i++){
            int req = target - nums[i];
            if(Ele.find(req)!=Ele.end()){
                return {Ele[req],i};
            }
            Ele[nums[i]] = i;
        }
        return {};
    }
};
