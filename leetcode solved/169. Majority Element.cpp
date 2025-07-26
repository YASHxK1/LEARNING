#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mejority =nums[0];
        int count=1;
        //8,8,7,7,7
        for (int i=0;i<nums.size()-1;i++){
            if(mejority==nums[i+1]){
                count++;
            }
            else if(mejority!=nums[i+1]){
                count--;
            }
            if (count==0)
            {
                mejority=nums[i];
                count++;
            }
        }
        return mejority;
    }
};

int main() {
    Solution sol;

    vector<int> input1 = {2,2,1,1,1,2,2};
    
    cout << "Majority Element: " << sol.majorityElement(input1) << endl;
    return 0;
}