/*                    LEETCODE PROBLEM: 1313
                 Decompress Run-Length Encoded List
                   
  https://leetcode.com/problems/decompress-run-length-encoded-list/
  
  
  We are given a list nums of integers representing a list compressed with run-length encoding.
  Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0).  For each such pair, there are freq elements with value val concatenated in a sublist. Concatenate all the sublists from left to right to generate the decompressed list.
  Return the decompressed list.
*/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i < nums.size(); i=i+2) {
            for(int j=0; j < nums[i]; j++) {
                ans.push_back(nums[i+1]);
            }
        }
        return ans;
    }
};
