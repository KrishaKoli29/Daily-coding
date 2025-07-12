class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unq;
        for (int i=0; i<nums.size(); i++)
        {
            if (nums[i] != nums[unq])
            {
                nums[++unq] = nums[i];
            }
        }
        return nums.empty()? 0: ++unq;
    }
};