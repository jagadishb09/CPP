class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if(nums.size()==0)
            return 0;
        int low=0;
        int high= nums.size()-1;
        while(true)
        {
            //cout<<low<<high<<
            if(nums[low]>=target)
                return low;
            else if(nums[high]<target)
                return high+1;
            else if (nums[high]==target)
                return high;
            int mid = (low+high)/2;
            //cout<<low<<high<<mid<<endl;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target)
            {
                low=mid;
            }
            else if(nums[mid]>target)
                high=mid;
            if(low==mid)
                low=mid+1;
            else if(high==mid)
                high=mid-1;
        }
    }

};
