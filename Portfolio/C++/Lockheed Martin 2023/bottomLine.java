import java.util.Scanner;

// import javax.lang.model.util.ElementScanner14;

public class bottomLine
{
    public static void main(String[] args)
    {
        Scanner kb = new Scanner(System.in);
        int a = kb.nextInt();
        for(int i = 0; i<a;i++)
        {
            int c = kb.nextInt();
            int l = kb.nextInt();
            if(c>l)
            System.out.println("Cassowary Craft sold "+(c-l)+" more aircraft");
            else if (l>c)
            System.out.println("Lead Balloons Ltd sold "+(l-c)+ " more aircraft");
            else 
            System.out.println("Cassowary Craft and Lead Balloons Ltd sold the same number of aircraft");

        }
    }
}