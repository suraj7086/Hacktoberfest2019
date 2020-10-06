// https://leetcode.com/problems/kth-largest-element-in-an-array/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int x: nums){
            pq.push(x);
        }
        while(k>1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
    
};