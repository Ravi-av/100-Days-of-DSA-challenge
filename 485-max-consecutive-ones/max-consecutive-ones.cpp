class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int curr_count = 0;
        int n = nums.size();
        

        for(int i = 0;i<n;i++){
            if(nums[i] == 1){
               
                curr_count++;
                max_count = max(max_count,curr_count);
            }
            else{
            curr_count = 0;
            }
    }
    return max_count;

    }
};