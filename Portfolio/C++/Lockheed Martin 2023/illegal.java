import java.util.Scanner;

// import javax.lang.model.util.ElementScanner14;

public class illegal {
    public static void main(String[] args) {
        Scanner a = new Scanner(System.in);
        int loops = Integer.parseInt(a.nextLine());
        for (int loop = 0; loop < loops; loop++) {
            String word = a.nextLine();
            if (word.indexOf("';") > word.indexOf("--") || word.indexOf("${") > word.indexOf("}")
                    || word.indexOf("$(") > word.indexOf(")"))
                System.out.println("REJECTED");
            if (word.equals("&& sudo") || word.equals("&& su -") || word.equals(";;") ||
                    word.equals("%s") || word.equals("%x") || word.equals("%n"))
                System.out.println("REJECTED");
            if (word.equals("' OR 1=1") || word.equals("' or 1=1") || word.equals("<script") || word.equals("<SCRIPT"))
                System.out.println("REJECTED");
            // else
            //     System.out.println(word);
        }
    }
}
