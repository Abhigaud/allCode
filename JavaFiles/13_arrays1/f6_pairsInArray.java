public class f6_pairsInArray {
    public static void pairs(int numbers[]) {
        for (int i = 0; i < numbers.length; i++) {
            int curr = numbers[i];
            for (int j = i+1; j < numbers.length; j++) {
                System.out.print("(" +curr + ","+numbers[j]+") ");
            }
            System.out.println();
        }
    }

    public static void pairsArr(int arr[]){
        for (int i = 0; i < arr.length; i++) {
            int curr = arr[i];
            for (int j = i+1; j < arr.length; j++) {
                System.out.print("[" + curr +", " + arr[j] +"]");
            }
        }
    }
    
    public static void subarray(int numbers[]) {
        for (int i = 0; i < numbers.length; i++) {
            int start = i;
            for (int j = i; j < numbers.length; j++) {
                int end = j;
                for (int k = start; k <= end; k++) {
                    System.out.print(numbers[k]+" ");
                }
                System.out.println();
            }
            System.out.println();
        }
    }

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

        // pairsArr(arr);
        subArrayPrint(arr);
        // pairs(arr);
        // subarray(arr);
    }
}
