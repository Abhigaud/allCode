public class fl1 {

    public static void update (int numbers[]){
        for (int i = 0; i < numbers.length; i++) {
            numbers[i] = numbers[i]+1;
        }
    }
    
    public static int linSearch(int numbers[], int key){
        for (int i = 0; i < numbers.length; i++) {
            if (numbers[i] == key) {
                return i;
            }
            
        }
        return -1;
    }
    public static void main(String[] args) {
        int numbers[] = {2, 4, 10, 5, 6, 77, 78};
        String names[] = {"abhishek", "priyanka", "shreya"};

        int marks[] = new int[10];

        // Scanner sc = new Scanner(System.in);
        
        // marks[0] = sc.nextInt();
        // marks[1] = sc.nextInt();
        // marks[2] = sc.nextInt();

        // System.out.println("phy : " + marks[0]);
        // System.out.println("chem : " + marks[1]);
        // System.out.println("maths : " + marks[2]);
        
        //------------------------------------------
        // update(numbers);
        // for (int i = 0; i < numbers.length; i++) {
            //     System.out.println(numbers[i]);
            // }
            
        //------------------------------------------
        int key = 10;
        System.out.println(linSearch(numbers, key));
    }
}
