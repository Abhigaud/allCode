public class p1_leetcode33 {
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
