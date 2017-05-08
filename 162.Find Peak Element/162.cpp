class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.empty())return NULL;
        if(nums.size()==1)return 0;
        if(nums[0]>nums[1])return 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])return i; 
        }
        return nums.size()-1;
    }
};// yeah, this ez way could AC,but should know it has a O(logn) algorithm using binary search
class Solution {
public:
    int findPeakElement(const vector<int> &num) 
    {
        int low = 0;
        int high = num.size()-1;
        
        while(low < high)
        {
            int mid1 = (low+high)/2;
            int mid2 = mid1+1;
            if(num[mid1] < num[mid2])
                low = mid2;
            else
                high = mid1;
        }
        return low;
    }
};//faster than former
