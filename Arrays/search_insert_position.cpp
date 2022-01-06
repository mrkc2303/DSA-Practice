/*                    LEETCODE PROBLEM: 35
                     Search Insert Position
                   
  https://leetcode.com/problems/search-insert-position/
  
  
  Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
  You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid, start=0, end;
        end=nums.size();
        int l = end;

        
        if(nums[l-1] < target)
            return l;
        else if(nums[0] > target)
            return 0;
        
        // while(start <= end) {
        //     mid = (start+end)/2;
        //     if(nums[mid] == target) {
        //         return mid;
        //     }
        //     else if(nums[mid] > target) {
        //         end = mid-1;
        //     }
        //     else {
        //         start = mid+1;
        //     }
        //     cout << mid << " ";
        // }
        
        for(int i=0; i<l; i++) {
            if(nums[i] == target)
                return i;
            
            if(nums[i] > target)
                return i;
        }
        
        // if(l % 2 == 0) {
        //     return mid+1;
        // }
        // else {
        //     return mid;
        // }
        
        return 0;
        
    }
};
