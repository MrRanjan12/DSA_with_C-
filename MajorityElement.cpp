#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        // sort
        sort(nums.begin(), nums.end());
        // freq
        int freq = 1, ans = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                freq++;
            }
            else
            {
                freq = 1;
                ans = nums[i];
            }
            if (freq > n / 2)
            {
                return ans;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {2,5,4,8,5,5,5,5};
    Solution sol;
   int MajorityElement = sol.majorityElement(nums);
   cout <<"MajorityElement is : " << MajorityElement <<endl;
   return 0; 
}
