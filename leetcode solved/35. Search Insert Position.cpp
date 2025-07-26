#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {
		int size = nums.size();
		if (target < nums[0]) return 0;
		if (target > nums[size - 1]) return size;
		//loop
		for (int i = 0; i < size - 1; i++) {
			if (nums[i] == target) {
				return i;
			}
			else if (nums[i] < target && target < nums[i + 1]) {
				return i + 1;
			}
		}

		// check last element match
		if (nums[size - 1] == target)
			return size - 1;

		return 0;  // fallback (should never reach here)
	}
};



int main() {
	Solution sol;
	vector<int> nums = {1,3};
	int target = 3;
	
	int result = sol.searchInsert(nums, target);
	cout << "Insert position: " << result << endl;

	return 0;
}