class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result{};
        std::sort(nums.begin(), nums.end());

for (int i = 0; i < (int)nums.size() - 2; ++i) {
    if (i > 0 && nums[i] == nums[i - 1]) continue;   // skip duplicate first values

    int lo = i + 1, hi = nums.size() - 1;
    while (lo < hi) {
        int sum = nums[i] + nums[lo] + nums[hi];
        if (sum == 0) {
            vector<int> memb = {nums[i] , nums[lo] , nums[hi]};
            auto checkIfExists = std::find(result.begin(),result.end(),memb);
            if(checkIfExists == result.end()){
            result.push_back(memb);
            }
            hi--;
            lo++;
            // then move lo and hi, skipping duplicates
        } else if (sum < 0) {
            lo++;
        } else {
            hi--;
        }
    }
}



        
        
return result;
    }
};
