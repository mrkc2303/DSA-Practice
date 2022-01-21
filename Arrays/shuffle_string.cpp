/*                    LEETCODE PROBLEM: 1528
                          Shuffle String
                   
  https://leetcode.com/problems/shuffle-string/
  
  
  You are given a string s and an integer array indices of the same length. The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.
  Return the shuffled string.
*/

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans=s;
        
        for(int i=0; i<indices.size(); i++) {
            int temp = indices[i];
            ans[temp] = s[i];
        }
        return ans;
    }
};
