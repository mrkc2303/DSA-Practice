/*                    LEETCODE PROBLEM: 1672
                      Richest Customer Wealth
                   
  https://leetcode.com/problems/richest-customer-wealth/
  
  
  You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the ith customer has in the jth bank. Return the wealth that the richest customer has.
  A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0, maxSum=0;
        int li=accounts.size();
        int lj=accounts[0].size();
        for(int i=0; i<li; i++) {
            int currSum=0;
            for(int j=0; j<lj; j++) {
                currSum += accounts[i][j];     
            }
            maxSum = max(currSum, maxSum);
        }
        
        
        return maxSum;
    }
};
