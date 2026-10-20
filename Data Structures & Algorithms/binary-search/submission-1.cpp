class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        if( target < nums[0] || target > nums[len -1]){
            return -1;
        }

        if(len == 1){
            return 0;
        }

        int mid = len / 2;
        
        if (nums[mid] > target){
           vector<int> mysub(nums.begin(), nums.begin() + mid);
           return search(mysub, target);
        }
            
        
            vector<int> mysub(nums.begin() + mid, nums.end());
            int r = search(mysub, target);
            return r == -1 ? -1 : r + mid; 
    }
};
