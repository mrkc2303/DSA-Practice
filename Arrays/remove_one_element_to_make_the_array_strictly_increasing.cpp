
/*                    LEETCODE PROBLEM: 1909
         Remove One Element to Make the Array Strictly Increasing
 
  https://leetcode.com/problems/remove-one-element-to-make-the-array-strictly-increasing/
  
  Given a 0-indexed integer array nums, return true if it can be made strictly increasing after removing exactly one element, or false otherwise. If the array is already strictly increasing, return true.
  The array nums is strictly increasing if nums[i - 1] < nums[i] for each index (1 <= i < nums.length).
*/

class Solution {
public:
    bool check(int index, vector<int>& arr) {
        for(int i=0; i < arr.size()-1; i++) {
                if(!(arr[i] < arr[i+1]))
                    return false;
        }
        return true;
    }
    
    bool canBeIncreasing(vector<int>& nums) {
        for(int i=0; i < nums.size(); i++) {
            vector<int> arr;
            arr = nums;
            vector<int>::iterator itr = arr.begin()+i;
            arr.erase(itr);
            if(check(i, arr)) {
                return true;
            }
        }
        return false;        
    }
};
