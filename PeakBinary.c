int findPeakElement(int* nums, int n) 
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if((mid==0 || nums[mid]>nums[mid-1]) && (mid==n-1 || nums[mid]>nums[mid+1]))
        {
        return mid;
        }
        else if(nums[mid]>nums[mid+1])
        high=mid-1;
        else
        low=mid+1;
    }
    return 0;
} 
