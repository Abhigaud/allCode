public class c1_maxSubarraySum {
    public static void subArrayPrint(int arr[]){
        int maxArrSum = Integer.MIN_VALUE ; 
        for(int i = 0; i < arr.length; i++){
            for(int j = i; j < arr.length; j++){
                int sum = 0;
                for(int k = i; k <=j; k++){
                    sum +=arr[k];
                }
                System.out.print(sum+" ");
                if (maxArrSum < sum) {
                 maxArrSum = sum;       
                }
            }
            System.out.println();
        }
        System.out.println(maxArrSum);
    }


    public static void main(String[] args) {
        int arr[] = {2, 4, 6, 8, 10};
        int nums[] = {2, 3,4, 5,6};

        // pairsArr(arr);
        subArrayPrint(arr);
        // pairs(arr);
        
        subarray(arr);
    }
}
