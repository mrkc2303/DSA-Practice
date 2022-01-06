/*                    LEETCODE PROBLEM: 66
                           Plus One
                   
  https://leetcode.com/problems/plus-one/
  
  
  You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
  Increment the large integer by one and return the resulting array of digits.
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        
        if(digits[len-1] != 9) {
            digits[len-1]++;
        }
        else {
            //digits[len-1] = 0;
            int i;
            for(i=len-1; i>=0; i--) {
                if(digits[i] == 9) {
                    digits[i]=0;
                } else {
                    break;
                }
            }
            
            if(i == -1) {
                digits[0] = 1;
                digits.push_back(0);
            }
            else {
                digits[i]++;
            }
        }
        
        return digits;
    }
};


