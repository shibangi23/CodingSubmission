/**Given an array arr of n positive integers, your task is to find all the leaders in the array. An element of the array is considered a leader if it is greater than all the elements on its right side or if it is equal to the maximum element on its right side. The rightmost element is always a leader.

Examples

Input: n = 6, arr[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2. **/

class Solution
{
public:
    vector<int> leaders(vector<int> &nums)
    {

        vector<int> ans;
        int maxi = INT_MIN;

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] > maxi)
            {
                ans.push_back(nums[i]);
                maxi = max(maxi, nums[i]);
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};