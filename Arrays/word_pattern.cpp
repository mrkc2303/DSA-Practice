/*                    LEETCODE PROBLEM-290
                        Word Pattern
  
  https://leetcode.com/problems/word-pattern/
  
  Given a pattern and a string s, find if s follows the same pattern.

    Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.

    Example 1:
    Input: pattern = "abba", s = "dog cat cat dog"
    Output: true
    
    Example 2:
    Input: pattern = "abba", s = "dog cat cat fish"
    Output: false
    
    Example 3:
    Input: pattern = "aaaa", s = "dog cat cat dog"
    Output: false
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
