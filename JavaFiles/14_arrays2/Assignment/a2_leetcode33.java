
// Question 2:There is an integer array nums sorted in ascending order (with distinct values).Prior to being passed to your function, nums is possibly rotated at an unknown pivot  index k (1  <=  k  <  nums.length)  such  that  the  resulting  array  is [nums[k], nums[k+1],   ...,   nums[n-1], nums[0],   nums[1],   ...,   nums[k-1]] (0-indexed).   For   example, [0,1,2,4,5,6,7] might be rotated        at        pivot        index 3   and become [4,5,6,7,0,1,2].Given the array nums after the possible rotation and an integer target, returnthe index oftarget if it is in nums, or -1   if it is not in nums.You must write an algorithm with O(log n) runtime complexity.

public class a2_leetcode33 {
    public static int search(int[] nums, int target) {
        int n = nums.length;

        int low = 0;
        int high = n-1;

        while (low <= high) {
            int mid = (low + high)/2;
            if(nums[mid] == target){
                    return mid;
            }
            else if(nums[low] <= nums[mid]){
                    if (target >= nums[low] && target <= nums[mid]) 
                    high = mid-1;
                    else
                    low = mid+1;
            }
            else
            {
                    if(target >= nums[mid + 1] && target <= nums[high])
                    low = mid+1;
                    else
                    high = mid -1;
            }

        }
        return -1;
    }
    public static void main(String[] args) {
            int nums[] ={4,5,6,7,0,1,2};
            int target = 3;
            System.out.println(search(nums, target));

    }
}
