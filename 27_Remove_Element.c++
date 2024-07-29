class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> temp;

        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                temp.push_back(nums[i]);
            }
            
        }
        nums = temp;
        int size = temp.size();
            return size;

  }
};