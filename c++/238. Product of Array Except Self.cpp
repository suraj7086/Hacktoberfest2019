// https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> l(len, 0);
        vector<int> r(len, 0);
        vector<int> output(len, 0);
        l[0] = 1;
        r[len-1] = 1;
        for(int i=1;i<nums.size();i++) l[i]=l[i-1]*nums[i-1];
        for(int i=nums.size()-2;i>=0;i--) r[i]=r[i+1]*nums[i+1];
        for(int i=0;i<nums.size();i++) output[i] = l[i]*r[i];
        return output;
    }
};