#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
         //buy low
         int lowatindex=0;
            for (int i = 1; i < prices.size(); i++)
            {
                if (prices[i-1]>prices[i]&&prices[i]<prices[lowatindex])
                {
                    lowatindex=i;
                }
            }
         //sell high
         int highatindex=lowatindex;
         if (lowatindex<=prices.size()-2)
         {
         for (int i = lowatindex+1; i < prices.size()-1; i++)
         {
            if (prices[i-1]<prices[i] && prices[i]>prices[highatindex])
            {
                highatindex=i;
            }
         }
         }
         else{


         }
        //calculate profit
        profit=prices[highatindex]-prices[lowatindex];
         return profit;
    }
};

//just write main function 
int main() {
    Solution sol;

    // Example 1
    vector<int> prices1 = {2,4,1};
    cout << "Max Profit (Example 1): " << sol.maxProfit(prices1) << endl;

    // Example 2
    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "Max Profit (Example 2): " << sol.maxProfit(prices2) << endl;

    return 0;
}