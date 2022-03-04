/*                    LEETCODE PROBLEM: 125
                         Valid Palindrome
                   
  https://leetcode.com/problems/valid-palindrome/
  
  A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
  Given a string s, return true if it is a palindrome, or false otherwise.

  Example 1:
  Input: s = "A man, a plan, a canal: Panama"
  Output: true
  Explanation: "amanaplanacanalpanama" is a palindrome.
  
  Example 2:
  Input: s = "race a car"
  Output: false
  Explanation: "raceacar" is not a palindrome.
  
  Example 3:
  Input: s = " "
  Output: true
  Explanation: s is an empty string "" after removing non-alphanumeric characters.
  Since an empty string reads the same forward and backward, it is a palindrome.


  Constraints:
  1 <= s.length <= 2 * 105
  s consists only of printable ASCII characters.

*/


class Solution {
public:
    bool isPalindrome(string s) {
        int i=0, j = s.length();
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string changed;
        for(i=0; i < j; i++) {
            if((s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57))
                changed.push_back(s[i]);
        }
        cout << changed;
        
        if(changed.length() == 1)
            return true;
        
        if(changed.length() == 2) {
            if(changed[0] == changed[1])
                return true;
            else
                return false;
        }
            
            
        i=0;
        j=changed.length()-1;
        while(i <= j) {
            cout << j << changed[i] << " " << changed[j] << "    ";
            if(changed[i] != changed[j])
                return false;
            
            i++;
            j--;
        }  
        return true;
    }
};
