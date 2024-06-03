class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> arr;
        int a=nums.size();
        for(int i=0;i<a;i++){
            arr.push_back(nums[nums[i]]);
        }
        return arr;
    }
};