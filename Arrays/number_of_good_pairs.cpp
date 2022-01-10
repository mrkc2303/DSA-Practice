/*                    LEETCODE PROBLEM: 1512
                       Number of Good Pairs
                   
  https://leetcode.com/problems/number-of-good-pairs/
  
  
  Given an array of integers nums, return the number of good pairs.
  A pair (i, j) is called good if nums[i] == nums[j] and i < j.
*/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int pairs=0;
        for(int i=0; i<nums.size(); i++) {
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[i] == nums[j])
                    pairs++;
            }
        }
        return pairs;
    }
};
