// Error---------------------------
import java.util.*;

public class p3_leetcode15 {
    public List<List<Integer>> threeSum(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums); //sort the array
        Set<List<Integer>> set = new HashSet<>();
        List<List<Integer>> result = new ArrayList<>();

        int low = 0;
        int high = n-1;
        int mid = high - 1;

        while(high >= 2){
            while (low < mid) {
                int sum = nums[low] + nums[mid] + nums[high];

                if(sum == 0){
                    // Add the triplet to the set to avoid duplicates
                    set.add(Arrays.asList(nums[low], nums[mid], nums[high]));
                    low++;
                    mid--;
                }else if (sum > 0) {
                    mid--;
                }else{
                    low++; 
                }
            }
            high--;//Move to the next potential "high" value
            mid = high - 1;//Reset mid to just before the high
            low = 0 ; // Reset low to start
        }

        // Convert the set to a list for the result
        result.addAll(set);
        return result;


    }
    public static void main(String[] args) {
        int nums[] = {-1,0,1,2,-1,-4};

        threeSum(nums);

    }
}
