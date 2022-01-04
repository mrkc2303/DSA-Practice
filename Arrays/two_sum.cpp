/*                    LEETCODE PROBLEM-1
                           Two Sum
  
  https://leetcode.com/problems/two-sum/
  
  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
  You may assume that each input would have exactly one solution, and you may not use the same element twice.
  You can return the answer in any order.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr; 
        int size;
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                int sum = nums[i] + nums[j];
                if(sum == target) {
                    arr.push_back(i);
                    arr.push_back(j);
                }
            }
        }
        return arr;
    }
};
