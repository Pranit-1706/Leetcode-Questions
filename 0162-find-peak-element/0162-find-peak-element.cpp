class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low)/2;

            bool left = true;
            bool right = true;

            if((mid -1 >= 0) && (nums[mid-1] >= nums[mid])) left = false;
            if((mid +1<n) && (nums[mid+1] >= nums[mid])) right = false;

            if(left && right) return mid;
            else if(left) low = mid+1;
            else high = mid-1;
        }

        return -1;
    }
};