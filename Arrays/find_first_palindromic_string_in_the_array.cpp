/*                    LEETCODE PROBLEM: 2108
                Find First Palindromic String in the Array
                   
  https://leetcode.com/problems/find-first-palindromic-string-in-the-array/
  
  
  There is a programming language with only four operations and one variable X:
  ++X and X++ increments the value of the variable X by 1.
  --X and X-- decrements the value of the variable X by 1.
  Initially, the value of X is 0.
  Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.
*/

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        bool found;
        for(int i=0; i<words.size(); i++) {
            string P = words[i];
            reverse(P.begin(), P.end());
            if(words[i] == P) {
                return words[i];
            }
        }
        return "";
    }
};