class Solution {
 public:
  int search(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end) {
       int mid = (start + end) / 2;
      if (nums[mid] == target)
        return mid;
      if (nums[start] <= nums[mid]) {  // nums[l..m] are sorted.
        if (nums[start] <= target && target < nums[mid])
          end = mid - 1;
        else
          start = mid + 1;
      } else {  // nums[m..n - 1] are sorted.
        if (nums[mid] < target && target <= nums[end])
          start = mid + 1;
        else
          end = mid - 1;
      }
    }

    return -1;
  }
};