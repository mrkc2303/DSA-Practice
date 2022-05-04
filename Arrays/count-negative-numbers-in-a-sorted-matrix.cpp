/*                    LEETCODE PROBLEM: 1351
            Count Negative Numbers in a Sorted Matrix
                   
  https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
  
  Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.

	Example 1:
	Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
	Output: 8
	Explanation: There are 8 negatives number in the matrix.
	
	Example 2:
	Input: grid = [[3,2],[1,0]]
	Output: 0
	
	Constraints:
	m == grid.length
	n == grid[i].length
	1 <= m, n <= 100
	-100 <= grid[i][j] <= 100
*/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int negativeNum=0;
        for(int i=0; i < grid.size(); i++) {
            for(int j=grid[i].size()-1; j >= 0  && grid[i][j] < 0; j--) {
                    negativeNum++;
            }
        }
        return negativeNum;
    }
};