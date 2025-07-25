class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int pos=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==target){
                pos= i;
            }
            else if(nums[i] < target && nums[i+1] > target){
                pos = i+1; 
            }
            else if(target > nums[nums.size()-1]){
                pos=nums.size();
            }
            else if(target<nums[0]){
                pos = 0;
        }

        }
        return pos;
    }
};
