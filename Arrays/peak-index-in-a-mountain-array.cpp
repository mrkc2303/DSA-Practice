/*                    LEETCODE PROBLEM: 852
            			Peak Index in a Mountain Array
                   
  https://leetcode.com/problems/peak-index-in-a-mountain-array/
  
  Let's call an array arr a mountain if the following properties hold:
	arr.length >= 3
	There exists some i with 0 < i < arr.length - 1 such that:
	arr[0] < arr[1] < ... arr[i-1] < arr[i]
	arr[i] > arr[i+1] > ... > arr[arr.length - 1]
	Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

	Example 1:
	Input: arr = [0,1,0]
	Output: 1
	
	Example 2:
	Input: arr = [0,2,1,0]
	Output: 1
	
	Example 3:
	Input: arr = [0,10,5,2]
	Output: 1
	
	Constraints:
	3 <= arr.length <= 104
	0 <= arr[i] <= 106
	arr is guaranteed to be a mountain array.

*/

/*						BRUTE FORCE APPROACH

	class Solution {
	public:
			int peakIndexInMountainArray(vector<int>& arr) {
					bool status;
					for(int i=0; i < arr.size(); i++) {
							status = true;
							for(int j = 0; j < i-1 && status == true; j++) {
									if(arr[j] > arr[i] || arr[j+1] < arr[j])
											status = false;
							}
							
							for(int j = i+1; j < arr.size()-1 && status == true; j++) {
									if(arr[j] > arr[i] || arr[j+1] > arr[j])
											status = false;
							}
									
							
							if(status) {
									return i;
							}
					}
					return -1;
			}
	};


*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int ctr = 1;
        while(ctr < arr.size() && arr[ctr] > arr[ctr - 1])
        {
            ctr++;
        }
        
        return ctr - 1;
    }
};