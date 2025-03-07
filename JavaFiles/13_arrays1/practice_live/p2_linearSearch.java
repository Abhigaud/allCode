
public class p2_linearSearch {
    public static int linearSearch(int arr[], int x) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == x) {
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[] = {10, 20, 5, 30, 100};
        int x = 5;
        System.out.println(linearSearch(arr, x));
    }    
}
