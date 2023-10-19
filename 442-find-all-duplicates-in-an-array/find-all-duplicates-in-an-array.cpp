class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        // int start = 0;
        // int end = nums.size();
        // int i = 1;
        // while(start != end){
        //     if(nums[start] != nums[i]){
        //         start++;
        //         i++;
        //         continue;
        //     }
        //     ans.push_back(nums[i]);
        //     start++;
        //     i++;
        // }

        for(int i = 1; i < nums.size(); i++){
            if (nums[i] == nums[i-1]){
                ans.push_back(nums[i-1]);
            }
        }

        return ans;
    }
};
        