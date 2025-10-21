class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n + 1);
        vector<vector<int>> ans;

        for(int val : nums){
            if(freq[val] >= ans.size()){
                ans.push_back({});
            }
            ans[freq[val]].push_back(val);
            freq[val]++;
        }

        return ans;
    }
};
