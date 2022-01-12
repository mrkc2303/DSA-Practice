class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        vector<int> temp = nums;
        // for(int i=0; i<nums.size(); i++) {
        //     int temp=0;
        //     for(int j=0; j<nums.size(); j++) {
        //         if(nums[i] > nums[j] && j != i) 
        //            temp++; 
        //     }
        //     ans.push_back(temp);
        // }
        
        sort(temp.begin(), temp.end());
         
        for(int i=0; i < nums.size(); i++) {
            int low = 0, high = nums.size() - 1, result = -1;
            while (low <= high) 
            {
                int mid = (low + high) / 2;
                
                if (temp[mid] > nums[i])
                    high = mid - 1;
                
                else if (temp[mid] < nums[i])
                    low = mid + 1;
                
                else
                {
                    result = mid;
                    high = mid - 1;
                }
            }
            ans.push_back(result);
        }
        
        return ans;
    }
};
