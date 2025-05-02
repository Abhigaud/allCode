public class f1_maxSubarraySum {
    // Brute force---------------
    public static void maxSubArraySum(int arr[]){
        int maxArrSum = Integer.MIN_VALUE;
        int sum;
        for (int i = 0; i < arr.length; i++) {
            for (int j = i; j < arr.length; j++) {
                sum = 0;
                for (int k = i; k <= j; k++){
                    sum += arr[k];
                }
                System.out.println("sum = "+ sum );
                if (maxArrSum < sum) {
                    maxArrSum = sum;
                }
            }
        }
        
        System.out.println("Max Subarray Sum is = "+ maxArrSum);
        
    }

    // prefix sum - - - - 
    public static void prefixSum(int arr[]){
        int currSum = 0;
        int maxSum = Integer.MIN_VALUE;
        int prefixArr[] = new int[arr.length];
        prefixArr[0] = arr[0];
        // calculate prefix array
        for (int i = 1; i < prefixArr.length; i++) {
            prefixArr[i] = prefixArr[i-1] + arr[i];            
        } 
        for(int i = 0; i < arr.length; i++){
            for (int j = i; j < arr.length; j++) {
                
                currSum = i == 0 ? prefixArr[j] : prefixArr[j] - prefixArr[i-1];
                // System.out.println(currSum);
                if (maxSum < currSum) {
                    maxSum = currSum;
                } 
            }
        }
        System.out.println("max sum = "+ maxSum);
    }

    public static void main(String args[]){
        int arr[] = {1, -2, 6, -1, 3};
        // int arr[] = {2, 4, 6, 8, 10};
        // maxSubArraySum(arr);
        prefixSum(arr);
    }
}
