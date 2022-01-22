/*                    LEETCODE PROBLEM: 2006
            Count Number of Pairs With Absolute Difference K
                   
  https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
  
  
  Given an integer array nums and an integer k, return the number of pairs (i, j) where i < j such that |nums[i] - nums[j]| == k.

  The value of |x| is defined as:
  * x if x >= 0.
  * -x if x < 0.
*/

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ctr=0;
        for(int i=0; i < nums.size(); i++) {
            for(int j=i+1; j < nums.size(); j++) {
                if((nums[i] - nums[j]) == k || (nums[j] - nums[i]) == k)
                    ctr++;
            }
        }
        return ctr;
    }
};
