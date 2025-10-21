class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minLength = INT_MAX;
        int i = 0;
        int sum = 0;

        for(int j=0; j<n; j++){
            sum += nums[j];

            while(sum >= target){
                if(j-i+1 < minLength){
                    minLength = j-i+1;
                }
                sum -= nums[i];
                i++;
            }
        }
        return minLength == INT_MAX ? 0 : minLength;
    }
};
