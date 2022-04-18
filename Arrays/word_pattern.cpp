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
    bool wordPattern(string pattern, string s) {
        string arr[26];
        int ctr=-1;
        bool isGood=true;
        for(int i=0; i<pattern.length() && isGood == true; i++) {
            string word="";
            bool con = true;
            for(int j=ctr+1; j < s.length() && con == true; j++, ctr++) {
                if(s[j] != ' ') {
                    word.push_back(s[j]);
                }
                else
                    con = false;
            }
            if(arr[pattern[i] - 'a'] == "") {
                arr[pattern[i] - 'a'] = word;
                for(int k=0; k < 26; k++) {
                    if(word == arr[k] && k != (pattern[i] - 'a'))
                        isGood = false;
                }
            }
            else {
                if(arr[pattern[i] - 'a'] == word) {
                    isGood = true;
                }
                else {
                    isGood = false;
                }
                for(int k=0; k < 26; k++) {
                    if(word == arr[k] && k != (pattern[i] - 'a'))
                        isGood = false;
                }
            }
        }
        
        if(s.length() != ctr+1) {
            isGood = false;
        }
        return isGood;
    }
};