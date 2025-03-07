public class p1_rotateArray{
    public static void printArr(int arr[]){
        int n = arr.length;
        for(int i=0; i<=n-1; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    // time complexity --> O(n)
    public static void rotateArrByOne(int arr[]) {
        int n = arr.length;
        int temp = arr[n-1];
        for (int i = n-2; i >= 0; i--) {
            arr[i+1] = arr[i];
        }
        arr[0] = temp;
    }
    
    // time complexity --> O(k.n)
    public static void rotateArrByK(int arr[], int k) {
        for (int i = 0; i < k; i++) {
            rotateArrByOne(arr);
        }
        printArr(arr);
    }
    

    public static void main(String args[]){
        int arr[] ={ 1, 2, 3, 4, 5, 6, 7};
        int k = 3;
        rotateArrByK(arr, k);
    }
}