
public class sorting {
    public static void bubbleSort(int[] arr) {
        int n = arr.length;

        for (int i = 0; i < n-1; i++) {
            boolean swap = false;
            for (int j = 0; j < n-1-i; j++) {
                if (arr[j] > arr[j+1]) {
                    swap = true;
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
            if (swap == false) {
                break;
            }
        }
    }

    // counting sort
    public static void countingSort(int[] arr){

        
        
    }



    public static void printArr(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String args[]){
        int arr[] = {7, 6, 4,2,1 };
        bubbleSort(arr);
        printArr(arr);

        int nums[] ={7,4,4,4,9,8,9,1,1,1};
        countingSort(nums);
        printArr(nums);
    }    
}
