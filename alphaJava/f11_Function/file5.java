public class file5 {
    public static int  factorial(int n){
        int f =1;
        for(int i =1; i<=n; i++){
            f*=i;
        }
        return f;
    }
    public static void main(String args[]){
        int n = 5;
        int facto = factorial(n);
        System.out.println(facto);
    }
}
