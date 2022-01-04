/*                  LEETCODE PROBLEM NUMBER: 26
                Remove Duplicates from Sorted Array


  https://leetcode.com/problems/remove-duplicates-from-sorted-array/
  
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.
Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.
Return k after placing the final result in the first k slots of nums.
Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

*/

class Solution {
private: 
    int length;
public:    
    int removeDuplicates(vector<int>& nums) {
        int count = 0, temp;
        length = nums.size();

        if(length >= 2)  {
            temp = nums[0];
            int i=0;
            while(i < length-1){
                if(nums[i] == nums[i+1]) {
                    for(int j=i+1; j<length-1; j++) {
                        nums[j] = nums[j+1];
                    }
                    length--;
                }    
                else {
                    i++;
                }
            }
        }
        
        
        return length;
    }    
};
