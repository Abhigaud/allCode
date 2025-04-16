
public class f5_reverseArray {
    public static void revArr(int numbers[]){
        int start =0, end =numbers.length-1;
        while (start < end) {
            int temp = numbers[start];
            numbers[start] = numbers[end];
            numbers[end] = temp;
            start++;
            end--; 
        }

    }






    
    
    
    public static void reverse(int numbers[]){
        int first = 0; 
        int last = numbers.length-1;

        while (first < last) {
            int temp = numbers[last];
            numbers[last] = numbers[first];
            numbers[first] = temp;
            first++;
            last--;
        }
    }
    public static void main(String[] args) {
        int numbers[] = {2,4,6,8,10};
        // reverse(numbers);
        revArr(numbers);
        
        for (int i = 0; i < numbers.length; i++) {
            System.out.print(numbers[i]+" ");
        }
    }    
}
