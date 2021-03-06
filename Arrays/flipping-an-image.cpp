/*                    LEETCODE PROBLEM-832
                        Flipping an Image
  
  https://leetcode.com/problems/flipping-an-image/
  
  Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.
	To flip an image horizontally means that each row of the image is reversed.
	For example, flipping [1,1,0] horizontally results in [0,1,1].
	To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.

	For example, inverting [0,1,1] results in [1,0,0].

	Example 1:
	Input: image = [[1,1,0],[1,0,1],[0,0,0]]
	Output: [[1,0,0],[0,1,0],[1,1,1]]
	Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
	Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]

	Example 2:
	Input: image = [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
	Output: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
	Explanation: First reverse each row: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]].
	Then invert the image: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
	
	Constraints:
	n == image.length
	n == image[i].length
	1 <= n <= 20
	images[i][j] is either 0 or 1.
*/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> flip;
        
        for(int i=0; i < image.size(); i++) {
            vector<int> v1;
            for(int j=(image[i].size()-1); j >= 0; j--) {
                if(image[i][j] == 1) {
                    v1.push_back(0);
                } else {
                    v1.push_back(1);
                }
            }
            flip.push_back(v1);
        }
        
        return flip;
    }
};