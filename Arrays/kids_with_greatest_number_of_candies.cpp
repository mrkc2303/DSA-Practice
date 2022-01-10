/*                    LEETCODE PROBLEM: 1431
              Kids With the Greatest Number of Candies
                   
  https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
  
  
  There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.
  Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.
  Note that multiple kids can have the greatest number of candies.
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxCan=0;
        
        for(int i=0; i<candies.size(); i++) {
                maxCan = max(maxCan, candies[i]);
        }
        
        for(int i=0; i<candies.size(); i++) {
            int temp = candies[i] + extraCandies;
            
            if(maxCan <= temp)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        
        
        return ans;
    }
};
