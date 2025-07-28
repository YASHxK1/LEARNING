class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        reverseSection(nums, 0, n - 1);
        reverseSection(nums, 0, k - 1);
        reverseSection(nums, k, n - 1);
    }
        void reverseSection(vector<int>& nums, int left, int right) {
        while (left < right) {
        // Manual swap without using std::swap
             int temp = nums[left];
             nums[left] = nums[right];
             nums[right] = temp;

        left++;
        right--;
    }        
    }
};