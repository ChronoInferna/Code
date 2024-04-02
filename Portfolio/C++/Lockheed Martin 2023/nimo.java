import java.util.Scanner;

// import javax.lang.model.util.ElementScanner14;

public class nimo {
    public static void main(String[] args) {
        Scanner kb = new Scanner(System.in);
        int a = Integer.parseInt(kb.nextLine());
        // int temp = kb.nextInt();
        for (int i = 0; i < a; i++) {
            int count = 0;
            String l = kb.nextLine();
            for (int x = 0; x < l.length() - 4; x++) {
            for (int x = 0; x < l.length() - 4; x++) {
                
                if (l.substring(x, x + 4).equals("Nimo")) {
                    count++;
                    break;

                    
                    
                }
                if (l.substring(x, x + 1).equals(" "))
                    count++;
            }
            System.out.println(count);
        }
    }
}