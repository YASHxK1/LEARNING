#include <iostream> 
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 2;
        int j = 2;
        int n = nums.size();
        if (n <= 2)
            return n;

        while (j < n) {
            if (nums[j] != nums[i - 2]) {
                nums[i] = nums[j];
                i++;
            }
            j++;
        }

        return i;
    }
};
//
int main() {
    vector<int> nums = {1,1,2,2,2};
    
    cout << "Old array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    Solution sol;
    int newLen = sol.removeDuplicates(nums);  
    
    cout << "Updated array: ";
    for (int i = 0; i < newLen; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}