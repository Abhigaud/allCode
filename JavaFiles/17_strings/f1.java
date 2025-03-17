
import java.util.Scanner;

public class f1 {

    public static void printLetters(String str) {
        for (int i = 0; i < str.length(); i++) {
            System.out.print(str.charAt(i)+" ");
        }
    }
    public static void main(String[] args) {
        // Scanner sc= new Scanner(System.in);
        // String name;
        // name = sc.nextLine();
        // System.out.println(name);


        String name = "Tpny Stark";
        System.out.println(name.length());

        // concatenation---------
        String fname = "Abhishek";
        String lname = "gaud";
        String FullName = fname+ " "+lname;
        System.out.println(FullName + " is this");
    }
}
