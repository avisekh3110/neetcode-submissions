class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int val : nums) {
            freq[val]++;
        }
        vector<pair<int, int>> ele;
        for (auto val : freq) {
            ele.push_back({val.second, val.first});
        }
        sort(ele.begin(), ele.end());
        reverse(ele.begin(), ele.end());
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(ele[i].second);
        }
        return ans;
    }
};