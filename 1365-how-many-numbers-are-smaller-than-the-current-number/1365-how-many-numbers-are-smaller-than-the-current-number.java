class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int n = nums.length;
        int[] arr = new int[n];
        int[] temp = new int[101];
        //frequency is restored
        for(int i=0;i<n;i++)
        {
            temp[nums[i]]++;
        }
        //running sum
        for(int i=1;i<101;i++)
        {
            temp[i]=temp[i]+temp[i-1];
        }
        //storing ans
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                arr[i]=0;
            }
            else
            {
                arr[i]=temp[nums[i]-1];
            }
        }
        return arr;
    }
}